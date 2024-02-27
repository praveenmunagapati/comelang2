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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX525, int anonymous_var_nameX526, const char** anonymous_var_nameX527, int* anonymous_var_nameX528, const unsigned char* anonymous_var_nameX529);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX530, int anonymous_var_nameX531, const char** anonymous_var_nameX532, int* anonymous_var_nameX533, const unsigned char* anonymous_var_nameX534);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX535, int anonymous_var_nameX536, const char** anonymous_var_nameX537, int* anonymous_var_nameX538, const unsigned char* anonymous_var_nameX539);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX540, int anonymous_var_nameX541, int* anonymous_var_nameX542, const char** anonymous_var_nameX543, int* anonymous_var_nameX544, const unsigned char* anonymous_var_nameX545);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX546, int anonymous_var_nameX547, int* anonymous_var_nameX548, const char** anonymous_var_nameX549, int* anonymous_var_nameX550, const unsigned char* anonymous_var_nameX551);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX552, int anonymous_var_nameX553, int* anonymous_var_nameX554, const char** anonymous_var_nameX555, int* anonymous_var_nameX556, const unsigned char* anonymous_var_nameX557);

int pcre_config(int anonymous_var_nameX558, void* anonymous_var_nameX559);

int pcre16_config(int anonymous_var_nameX560, void* anonymous_var_nameX561);

int pcre32_config(int anonymous_var_nameX562, void* anonymous_var_nameX563);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX564, const char* anonymous_var_nameX565, int* anonymous_var_nameX566, int anonymous_var_nameX567, const char* anonymous_var_nameX568, char* anonymous_var_nameX569, int anonymous_var_nameX570);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX571, const unsigned short int* anonymous_var_nameX572, int* anonymous_var_nameX573, int anonymous_var_nameX574, const unsigned short int* anonymous_var_nameX575, unsigned short int* anonymous_var_nameX576, int anonymous_var_nameX577);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX578, const unsigned int* anonymous_var_nameX579, int* anonymous_var_nameX580, int anonymous_var_nameX581, const unsigned int* anonymous_var_nameX582, unsigned int* anonymous_var_nameX583, int anonymous_var_nameX584);

int pcre_copy_substring(const char* anonymous_var_nameX585, int* anonymous_var_nameX586, int anonymous_var_nameX587, int anonymous_var_nameX588, char* anonymous_var_nameX589, int anonymous_var_nameX590);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX591, int* anonymous_var_nameX592, int anonymous_var_nameX593, int anonymous_var_nameX594, unsigned short int* anonymous_var_nameX595, int anonymous_var_nameX596);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX597, int* anonymous_var_nameX598, int anonymous_var_nameX599, int anonymous_var_nameX600, unsigned int* anonymous_var_nameX601, int anonymous_var_nameX602);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX603, const struct pcre_extra* anonymous_var_nameX604, const char* anonymous_var_nameX605, int anonymous_var_nameX606, int anonymous_var_nameX607, int anonymous_var_nameX608, int* anonymous_var_nameX609, int anonymous_var_nameX610, int* anonymous_var_nameX611, int anonymous_var_nameX612);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX613, const struct pcre16_extra* anonymous_var_nameX614, const unsigned short int* anonymous_var_nameX615, int anonymous_var_nameX616, int anonymous_var_nameX617, int anonymous_var_nameX618, int* anonymous_var_nameX619, int anonymous_var_nameX620, int* anonymous_var_nameX621, int anonymous_var_nameX622);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX623, const struct pcre32_extra* anonymous_var_nameX624, const unsigned int* anonymous_var_nameX625, int anonymous_var_nameX626, int anonymous_var_nameX627, int anonymous_var_nameX628, int* anonymous_var_nameX629, int anonymous_var_nameX630, int* anonymous_var_nameX631, int anonymous_var_nameX632);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX633, const struct pcre_extra* anonymous_var_nameX634, const char* anonymous_var_nameX635, int anonymous_var_nameX636, int anonymous_var_nameX637, int anonymous_var_nameX638, int* anonymous_var_nameX639, int anonymous_var_nameX640);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX641, const struct pcre16_extra* anonymous_var_nameX642, const unsigned short int* anonymous_var_nameX643, int anonymous_var_nameX644, int anonymous_var_nameX645, int anonymous_var_nameX646, int* anonymous_var_nameX647, int anonymous_var_nameX648);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX649, const struct pcre32_extra* anonymous_var_nameX650, const unsigned int* anonymous_var_nameX651, int anonymous_var_nameX652, int anonymous_var_nameX653, int anonymous_var_nameX654, int* anonymous_var_nameX655, int anonymous_var_nameX656);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX657, const struct pcre_extra* anonymous_var_nameX658, const char* anonymous_var_nameX659, int anonymous_var_nameX660, int anonymous_var_nameX661, int anonymous_var_nameX662, int* anonymous_var_nameX663, int anonymous_var_nameX664, struct real_pcre_jit_stack* anonymous_var_nameX665);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX666, const struct pcre16_extra* anonymous_var_nameX667, const unsigned short int* anonymous_var_nameX668, int anonymous_var_nameX669, int anonymous_var_nameX670, int anonymous_var_nameX671, int* anonymous_var_nameX672, int anonymous_var_nameX673, struct real_pcre16_jit_stack* anonymous_var_nameX674);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX675, const struct pcre32_extra* anonymous_var_nameX676, const unsigned int* anonymous_var_nameX677, int anonymous_var_nameX678, int anonymous_var_nameX679, int anonymous_var_nameX680, int* anonymous_var_nameX681, int anonymous_var_nameX682, struct real_pcre32_jit_stack* anonymous_var_nameX683);

void pcre_free_substring(const char* anonymous_var_nameX684);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX685);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX686);

void pcre_free_substring_list(const char** anonymous_var_nameX687);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX688);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX689);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX690, const struct pcre_extra* anonymous_var_nameX691, int anonymous_var_nameX692, void* anonymous_var_nameX693);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX694, const struct pcre16_extra* anonymous_var_nameX695, int anonymous_var_nameX696, void* anonymous_var_nameX697);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX698, const struct pcre32_extra* anonymous_var_nameX699, int anonymous_var_nameX700, void* anonymous_var_nameX701);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX702, const char* anonymous_var_nameX703, int* anonymous_var_nameX704, int anonymous_var_nameX705, const char* anonymous_var_nameX706, const char** anonymous_var_nameX707);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX708, const unsigned short int* anonymous_var_nameX709, int* anonymous_var_nameX710, int anonymous_var_nameX711, const unsigned short int* anonymous_var_nameX712, const unsigned short int** anonymous_var_nameX713);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX714, const unsigned int* anonymous_var_nameX715, int* anonymous_var_nameX716, int anonymous_var_nameX717, const unsigned int* anonymous_var_nameX718, const unsigned int** anonymous_var_nameX719);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX720, const char* anonymous_var_nameX721);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX722, const unsigned short int* anonymous_var_nameX723);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX724, const unsigned int* anonymous_var_nameX725);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX726, const char* anonymous_var_nameX727, char** anonymous_var_nameX728, char** anonymous_var_nameX729);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX730, const unsigned short int* anonymous_var_nameX731, unsigned short int** anonymous_var_nameX732, unsigned short int** anonymous_var_nameX733);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX734, const unsigned int* anonymous_var_nameX735, unsigned int** anonymous_var_nameX736, unsigned int** anonymous_var_nameX737);

int pcre_get_substring(const char* anonymous_var_nameX738, int* anonymous_var_nameX739, int anonymous_var_nameX740, int anonymous_var_nameX741, const char** anonymous_var_nameX742);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX743, int* anonymous_var_nameX744, int anonymous_var_nameX745, int anonymous_var_nameX746, const unsigned short int** anonymous_var_nameX747);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX748, int* anonymous_var_nameX749, int anonymous_var_nameX750, int anonymous_var_nameX751, const unsigned int** anonymous_var_nameX752);

int pcre_get_substring_list(const char* anonymous_var_nameX753, int* anonymous_var_nameX754, int anonymous_var_nameX755, const char*** anonymous_var_nameX756);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX757, int* anonymous_var_nameX758, int anonymous_var_nameX759, const unsigned short int*** anonymous_var_nameX760);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX761, int* anonymous_var_nameX762, int anonymous_var_nameX763, const unsigned int*** anonymous_var_nameX764);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX765, int anonymous_var_nameX766);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX767, int anonymous_var_nameX768);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX769, int anonymous_var_nameX770);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX771, int anonymous_var_nameX772, const char** anonymous_var_nameX773);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX774, int anonymous_var_nameX775, const char** anonymous_var_nameX776);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX777, int anonymous_var_nameX778, const char** anonymous_var_nameX779);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX780);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX781);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX782);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX783, struct pcre_extra* anonymous_var_nameX784, const unsigned char* anonymous_var_nameX785);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX786, struct pcre16_extra* anonymous_var_nameX787, const unsigned char* anonymous_var_nameX788);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX789, struct pcre32_extra* anonymous_var_nameX790, const unsigned char* anonymous_var_nameX791);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX792, const unsigned short int* anonymous_var_nameX793, int anonymous_var_nameX794, int* anonymous_var_nameX795, int anonymous_var_nameX796);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX797, const unsigned int* anonymous_var_nameX798, int anonymous_var_nameX799, int* anonymous_var_nameX800, int anonymous_var_nameX801);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX802, int anonymous_var_nameX803);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX804, int anonymous_var_nameX805);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX806, int anonymous_var_nameX807);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX808);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX809);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX810);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX811, struct real_pcre_jit_stack* (*anonymous_var_nameX812)(void*), void* anonymous_var_nameX813);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX814, struct real_pcre16_jit_stack* (*anonymous_var_nameX815)(void*), void* anonymous_var_nameX816);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX817, struct real_pcre32_jit_stack* (*anonymous_var_nameX818)(void*), void* anonymous_var_nameX819);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

char* asctime(const struct tm* anonymous_var_nameX820);

unsigned long int clock();

char* ctime(const long* anonymous_var_nameX821);

double difftime(long anonymous_var_nameX822, long anonymous_var_nameX823);

struct tm* getdate(const char* anonymous_var_nameX824);

struct tm* gmtime(const long* anonymous_var_nameX825);

struct tm* localtime(const long* anonymous_var_nameX826);

long mktime(struct tm* anonymous_var_nameX827);

long int strftime(char* anonymous_var_nameX828, long int anonymous_var_nameX829, const char* anonymous_var_nameX830, const struct tm* anonymous_var_nameX831);

char* strptime(const char* anonymous_var_nameX832, const char* anonymous_var_nameX833, struct tm* anonymous_var_nameX834);

long time(long* anonymous_var_nameX835);

void tzset();

char* asctime_r(const struct tm* anonymous_var_nameX836, char* anonymous_var_nameX837);

char* ctime_r(const long* anonymous_var_nameX838, char* anonymous_var_nameX839);

struct tm* gmtime_r(const long* anonymous_var_nameX840, struct tm* anonymous_var_nameX841);

struct tm* localtime_r(const long* anonymous_var_nameX842, struct tm* anonymous_var_nameX843);

long posix2time(long anonymous_var_nameX844);

void tzsetwall();

long time2posix(long anonymous_var_nameX845);

long timelocal(struct tm* anonymous_var_nameX846);

long timegm(struct tm* anonymous_var_nameX847);

int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);

int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);

int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);

unsigned long long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);

int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);

int timespec_get(struct timespec* ts, int base);

int isalnum(int anonymous_var_nameX862);

int isalpha(int anonymous_var_nameX863);

int isblank(int anonymous_var_nameX864);

int iscntrl(int anonymous_var_nameX865);

int isdigit(int anonymous_var_nameX866);

int isgraph(int anonymous_var_nameX867);

int islower(int anonymous_var_nameX868);

int isprint(int anonymous_var_nameX869);

int ispunct(int anonymous_var_nameX870);

int isspace(int anonymous_var_nameX871);

int isupper(int anonymous_var_nameX872);

int isxdigit(int anonymous_var_nameX873);

int tolower(int anonymous_var_nameX874);

int toupper(int anonymous_var_nameX875);

int isascii(int anonymous_var_nameX876);

int toascii(int anonymous_var_nameX877);

int _tolower(int anonymous_var_nameX878);

int _toupper(int anonymous_var_nameX879);

int digittoint(int anonymous_var_nameX880);

int ishexnumber(int anonymous_var_nameX881);

int isideogram(int anonymous_var_nameX882);

int isnumber(int anonymous_var_nameX883);

int isphonogram(int anonymous_var_nameX884);

int isrune(int anonymous_var_nameX885);

int isspecial(int anonymous_var_nameX886);

int iswalnum(int anonymous_var_nameX887);

int iswalpha(int anonymous_var_nameX888);

int iswcntrl(int anonymous_var_nameX889);

int iswctype(int anonymous_var_nameX890, unsigned int anonymous_var_nameX891);

int iswdigit(int anonymous_var_nameX892);

int iswgraph(int anonymous_var_nameX893);

int iswlower(int anonymous_var_nameX894);

int iswprint(int anonymous_var_nameX895);

int iswpunct(int anonymous_var_nameX896);

int iswspace(int anonymous_var_nameX897);

int iswupper(int anonymous_var_nameX898);

int iswxdigit(int anonymous_var_nameX899);

int towlower(int anonymous_var_nameX900);

int towupper(int anonymous_var_nameX901);

unsigned int wctype(const char* anonymous_var_nameX902);

int btowc(int anonymous_var_nameX903);

int fgetwc(struct __sFILE* anonymous_var_nameX904);

int* fgetws(int* anonymous_var_nameX905, int anonymous_var_nameX906, struct __sFILE* anonymous_var_nameX907);

int fputwc(int anonymous_var_nameX908, struct __sFILE* anonymous_var_nameX909);

int fputws(const int* anonymous_var_nameX910, struct __sFILE* anonymous_var_nameX911);

int fwide(struct __sFILE* anonymous_var_nameX912, int anonymous_var_nameX913);

int fwprintf(struct __sFILE* anonymous_var_nameX914, const int* anonymous_var_nameX915, ...);

int fwscanf(struct __sFILE* anonymous_var_nameX916, const int* anonymous_var_nameX917, ...);

int getwc(struct __sFILE* anonymous_var_nameX918);

int getwchar();

long int mbrlen(const char* anonymous_var_nameX919, long int anonymous_var_nameX920, union anonymous_typeZ1* anonymous_var_nameX921);

long int mbrtowc(int* anonymous_var_nameX922, const char* anonymous_var_nameX923, long int anonymous_var_nameX924, union anonymous_typeZ1* anonymous_var_nameX925);

int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX926);

long int mbsrtowcs(int* anonymous_var_nameX927, const char** anonymous_var_nameX928, long int anonymous_var_nameX929, union anonymous_typeZ1* anonymous_var_nameX930);

int putwc(int anonymous_var_nameX931, struct __sFILE* anonymous_var_nameX932);

int putwchar(int anonymous_var_nameX933);

int swprintf(int* anonymous_var_nameX934, long int anonymous_var_nameX935, const int* anonymous_var_nameX936, ...);

int swscanf(const int* anonymous_var_nameX937, const int* anonymous_var_nameX938, ...);

int ungetwc(int anonymous_var_nameX939, struct __sFILE* anonymous_var_nameX940);

int vfwprintf(struct __sFILE* anonymous_var_nameX941, const int* anonymous_var_nameX942, __darwin_va_list anonymous_var_nameX943);

int vswprintf(int* anonymous_var_nameX944, long int anonymous_var_nameX945, const int* anonymous_var_nameX946, __darwin_va_list anonymous_var_nameX947);

int vwprintf(const int* anonymous_var_nameX948, __darwin_va_list anonymous_var_nameX949);

long int wcrtomb(char* anonymous_var_nameX950, int anonymous_var_nameX951, union anonymous_typeZ1* anonymous_var_nameX952);

int* wcscat(int* anonymous_var_nameX953, const int* anonymous_var_nameX954);

int* wcschr(const int* anonymous_var_nameX955, int anonymous_var_nameX956);

int wcscmp(const int* anonymous_var_nameX957, const int* anonymous_var_nameX958);

int wcscoll(const int* anonymous_var_nameX959, const int* anonymous_var_nameX960);

int* wcscpy(int* anonymous_var_nameX961, const int* anonymous_var_nameX962);

long int wcscspn(const int* anonymous_var_nameX963, const int* anonymous_var_nameX964);

long int wcsftime(int* anonymous_var_nameX965, long int anonymous_var_nameX966, const int* anonymous_var_nameX967, const struct tm* anonymous_var_nameX968);

long int wcslen(const int* anonymous_var_nameX969);

int* wcsncat(int* anonymous_var_nameX970, const int* anonymous_var_nameX971, long int anonymous_var_nameX972);

int wcsncmp(const int* anonymous_var_nameX973, const int* anonymous_var_nameX974, long int anonymous_var_nameX975);

int* wcsncpy(int* anonymous_var_nameX976, const int* anonymous_var_nameX977, long int anonymous_var_nameX978);

int* wcspbrk(const int* anonymous_var_nameX979, const int* anonymous_var_nameX980);

int* wcsrchr(const int* anonymous_var_nameX981, int anonymous_var_nameX982);

long int wcsrtombs(char* anonymous_var_nameX983, const int** anonymous_var_nameX984, long int anonymous_var_nameX985, union anonymous_typeZ1* anonymous_var_nameX986);

long int wcsspn(const int* anonymous_var_nameX987, const int* anonymous_var_nameX988);

int* wcsstr(const int* anonymous_var_nameX989, const int* anonymous_var_nameX990);

long int wcsxfrm(int* anonymous_var_nameX991, const int* anonymous_var_nameX992, long int anonymous_var_nameX993);

int wctob(int anonymous_var_nameX994);

double wcstod(const int* anonymous_var_nameX995, int** anonymous_var_nameX996);

int* wcstok(int* anonymous_var_nameX997, const int* anonymous_var_nameX998, int** anonymous_var_nameX999);

long wcstol(const int* anonymous_var_nameX1000, int** anonymous_var_nameX1001, int anonymous_var_nameX1002);

unsigned long int wcstoul(const int* anonymous_var_nameX1003, int** anonymous_var_nameX1004, int anonymous_var_nameX1005);

int* wmemchr(const int* anonymous_var_nameX1006, int anonymous_var_nameX1007, long int anonymous_var_nameX1008);

int wmemcmp(const int* anonymous_var_nameX1009, const int* anonymous_var_nameX1010, long int anonymous_var_nameX1011);

int* wmemcpy(int* anonymous_var_nameX1012, const int* anonymous_var_nameX1013, long int anonymous_var_nameX1014);

int* wmemmove(int* anonymous_var_nameX1015, const int* anonymous_var_nameX1016, long int anonymous_var_nameX1017);

int* wmemset(int* anonymous_var_nameX1018, int anonymous_var_nameX1019, long int anonymous_var_nameX1020);

int wprintf(const int* anonymous_var_nameX1021, ...);

int wscanf(const int* anonymous_var_nameX1022, ...);

int wcswidth(const int* anonymous_var_nameX1023, long int anonymous_var_nameX1024);

int wcwidth(int anonymous_var_nameX1025);

int vfwscanf(struct __sFILE* anonymous_var_nameX1026, const int* anonymous_var_nameX1027, __darwin_va_list anonymous_var_nameX1028);

int vswscanf(const int* anonymous_var_nameX1029, const int* anonymous_var_nameX1030, __darwin_va_list anonymous_var_nameX1031);

int vwscanf(const int* anonymous_var_nameX1032, __darwin_va_list anonymous_var_nameX1033);

float wcstof(const int* anonymous_var_nameX1034, int** anonymous_var_nameX1035);

long double wcstold(const int* anonymous_var_nameX1036, int** anonymous_var_nameX1037);

long long wcstoll(const int* anonymous_var_nameX1038, int** anonymous_var_nameX1039, int anonymous_var_nameX1040);

unsigned long long wcstoull(const int* anonymous_var_nameX1041, int** anonymous_var_nameX1042, int anonymous_var_nameX1043);

long int mbsnrtowcs(int* anonymous_var_nameX1044, const char** anonymous_var_nameX1045, long int anonymous_var_nameX1046, long int anonymous_var_nameX1047, union anonymous_typeZ1* anonymous_var_nameX1048);

int* wcpcpy(int* anonymous_var_nameX1049, const int* anonymous_var_nameX1050);

int* wcpncpy(int* anonymous_var_nameX1051, const int* anonymous_var_nameX1052, long int anonymous_var_nameX1053);

int* wcsdup(const int* anonymous_var_nameX1054);

int wcscasecmp(const int* anonymous_var_nameX1055, const int* anonymous_var_nameX1056);

int wcsncasecmp(const int* anonymous_var_nameX1057, const int* anonymous_var_nameX1058, long int n);

long int wcsnlen(const int* anonymous_var_nameX1059, long int anonymous_var_nameX1060);

long int wcsnrtombs(char* anonymous_var_nameX1061, const int** anonymous_var_nameX1062, long int anonymous_var_nameX1063, long int anonymous_var_nameX1064, union anonymous_typeZ1* anonymous_var_nameX1065);

struct __sFILE* open_wmemstream(int** __bufp, long int* __sizep);

int* fgetwln(struct __sFILE* anonymous_var_nameX1066, long int* anonymous_var_nameX1067);

long int wcslcat(int* anonymous_var_nameX1068, const int* anonymous_var_nameX1069, long int anonymous_var_nameX1070);

long int wcslcpy(int* anonymous_var_nameX1071, const int* anonymous_var_nameX1072, long int anonymous_var_nameX1073);

static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1087)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1089)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1091)(enum anonymous_typeY13));

void (*GC_get_on_collection_event())(enum anonymous_typeY13);

void GC_set_find_leak(int anonymous_var_nameX1092);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1093);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1094);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1095);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1096)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1097);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1098);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1099);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1100);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1101);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1102);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1103);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1104);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1105);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1106);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1107);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX1108);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1109);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1110);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1111);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1112);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX1113);

void* GC_malloc_atomic(long int anonymous_var_nameX1114);

char* GC_strdup(const char* anonymous_var_nameX1115);

char* GC_strndup(const char* anonymous_var_nameX1116, long int anonymous_var_nameX1117);

void* GC_malloc_uncollectable(long int anonymous_var_nameX1118);

void* GC_malloc_stubborn(long int anonymous_var_nameX1119);

void* GC_memalign(long int anonymous_var_nameX1120, long int anonymous_var_nameX1121);

int GC_posix_memalign(void** anonymous_var_nameX1122, long int anonymous_var_nameX1123, long int anonymous_var_nameX1124);

void GC_free(void* anonymous_var_nameX1125);

void GC_change_stubborn(const void* anonymous_var_nameX1126);

void GC_end_stubborn_change(const void* anonymous_var_nameX1127);

void* GC_base(void* anonymous_var_nameX1128);

int GC_is_heap_ptr(const void* anonymous_var_nameX1129);

long int GC_size(const void* anonymous_var_nameX1130);

void* GC_realloc(void* anonymous_var_nameX1131, long int anonymous_var_nameX1132);

int GC_expand_hp(long int anonymous_var_nameX1133);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1134);

void GC_exclude_static_roots(void* anonymous_var_nameX1135, void* anonymous_var_nameX1136);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1137, void* anonymous_var_nameX1138);

void GC_remove_roots(void* anonymous_var_nameX1139, void* anonymous_var_nameX1140);

void GC_register_displacement(long int anonymous_var_nameX1141);

void GC_debug_register_displacement(long int anonymous_var_nameX1142);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1143)());

void GC_set_stop_func(int (*anonymous_var_nameX1144)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1145, unsigned long int* anonymous_var_nameX1146, unsigned long int* anonymous_var_nameX1147, unsigned long int* anonymous_var_nameX1148, unsigned long int* anonymous_var_nameX1149);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1150, long int anonymous_var_nameX1151);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1152);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX1153);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX1154);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX1155);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX1156, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX1157, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX1158, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1159, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1160, long int anonymous_var_nameX1161, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX1162, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX1163, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX1164, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX1165, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1166);

void* GC_debug_realloc(void* anonymous_var_nameX1167, long int anonymous_var_nameX1168, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1169);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1170);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX1171);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1172, long int anonymous_var_nameX1173);

void GC_register_finalizer(void* anonymous_var_nameX1176, void (*anonymous_var_nameX1177)(void*,void*), void* anonymous_var_nameX1178, void (*anonymous_var_nameX1179)(void*,void*), void** anonymous_var_nameX1180);

void GC_debug_register_finalizer(void* anonymous_var_nameX1181, void (*anonymous_var_nameX1182)(void*,void*), void* anonymous_var_nameX1183, void (*anonymous_var_nameX1184)(void*,void*), void** anonymous_var_nameX1185);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1186, void (*anonymous_var_nameX1187)(void*,void*), void* anonymous_var_nameX1188, void (*anonymous_var_nameX1189)(void*,void*), void** anonymous_var_nameX1190);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1191, void (*anonymous_var_nameX1192)(void*,void*), void* anonymous_var_nameX1193, void (*anonymous_var_nameX1194)(void*,void*), void** anonymous_var_nameX1195);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1196, void (*anonymous_var_nameX1197)(void*,void*), void* anonymous_var_nameX1198, void (*anonymous_var_nameX1199)(void*,void*), void** anonymous_var_nameX1200);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1201, void (*anonymous_var_nameX1202)(void*,void*), void* anonymous_var_nameX1203, void (*anonymous_var_nameX1204)(void*,void*), void** anonymous_var_nameX1205);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1206, void (*anonymous_var_nameX1207)(void*,void*), void* anonymous_var_nameX1208, void (*anonymous_var_nameX1209)(void*,void*), void** anonymous_var_nameX1210);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1211, void (*anonymous_var_nameX1212)(void*,void*), void* anonymous_var_nameX1213, void (*anonymous_var_nameX1214)(void*,void*), void** anonymous_var_nameX1215);

int GC_register_disappearing_link(void** anonymous_var_nameX1216);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1217, const void* anonymous_var_nameX1218);

int GC_move_disappearing_link(void** anonymous_var_nameX1219, void** anonymous_var_nameX1220);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1221);

int GC_register_long_link(void** anonymous_var_nameX1222, const void* anonymous_var_nameX1223);

int GC_move_long_link(void** anonymous_var_nameX1224, void** anonymous_var_nameX1225);

int GC_unregister_long_link(void** anonymous_var_nameX1226);

void GC_set_toggleref_func(enum anonymous_typeY14 (*anonymous_var_nameX1228)(void*));

enum anonymous_typeY14 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1229, int anonymous_var_nameX1230);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1232)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1233);

void GC_set_warn_proc(void (*anonymous_var_nameX1236)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1237, unsigned long int anonymous_var_nameX1238);

void GC_set_log_fd(int anonymous_var_nameX1239);

void GC_set_abort_func(void (*anonymous_var_nameX1241)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1243)(void*), void* anonymous_var_nameX1244);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1247)(struct GC_stack_base*,void*), void* anonymous_var_nameX1248);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1249)(void*), void* anonymous_var_nameX1250);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1251)(void*), void* anonymous_var_nameX1252);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1253);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1254);

void GC_set_stackbottom(void* anonymous_var_nameX1255, const struct GC_stack_base* anonymous_var_nameX1256);

void* GC_same_obj(void* anonymous_var_nameX1257, void* anonymous_var_nameX1258);

void* GC_pre_incr(void** anonymous_var_nameX1259, long int anonymous_var_nameX1260);

void* GC_post_incr(void** anonymous_var_nameX1261, long int anonymous_var_nameX1262);

void* GC_is_visible(void* anonymous_var_nameX1263);

void* GC_is_valid_displacement(void* anonymous_var_nameX1264);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1265);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1266, const void* anonymous_var_nameX1267);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1268, const void* anonymous_var_nameX1269);

void* GC_malloc_many(long int anonymous_var_nameX1290);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1294)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1295);

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
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__;
void* right_value10;
int* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((int*)(right_value10=wchar_tp_substring(str,head,tail)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = charp_index_count(str,search_str,count,default_value);
    return __result8__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    __result9__ = charp_index_regex_count(self,reg,count,default_value);
    return __result9__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = charp_rindex(str,search_str,default_value);
    return __result10__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    __result11__ = charp_rindex_regex(self,reg,default_value);
    return __result11__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result12__;
memset(&__result_obj__, 0, sizeof(void*));
    __result12__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result12__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value11;
struct list$1charph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result13__ = __result_obj__ = ((struct list$1charph*)(right_value11=charp_scan_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value12;
struct list$1charph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result14__ = __result_obj__ = ((struct list$1charph*)(right_value12=charp_scan_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value13;
struct list$1charph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    __result15__ = __result_obj__ = ((struct list$1charph*)(right_value13=charp_split_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value14;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result16__ = __result_obj__ = ((struct list$1charph*)(right_value14=charp_split_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value15;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
    __result17__ = __result_obj__ = ((struct list$1charph*)(right_value15=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    come_call_finalizer2(list$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value16;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
    __result18__ = __result_obj__ = ((char*)(right_value16=charp_strip(self)));
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value17;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value17=string_printable(str)));
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value18;
int* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
    __result20__ = __result_obj__ = ((int*)(right_value18=charp_to_wstring(str)));
    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__;
void* right_value19;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value19=wchar_tp_to_string(wstr)));
    right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline int wstring_length(int* str){
void* __result_obj__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = wchar_tp_length(str);
    return __result22__;
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__;
void* right_value20;
int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
    __result23__ = __result_obj__ = ((int*)(right_value20=wchar_tp_delete(str,head,tail)));
    right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline int wstring_index(int* str, int* search_str, int default_value){
void* __result_obj__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = wchar_tp_index(str,search_str,default_value);
    return __result24__;
}
static inline int wstring_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = wchar_tp_rindex(str,search_str,default_value);
    return __result25__;
}
static inline int* wstring_reverse(int* str){
void* __result_obj__;
void* right_value21;
int* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
    __result26__ = __result_obj__ = ((int*)(right_value21=wchar_tp_reverse(str)));
    right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__;
void* right_value22;
int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
    __result27__ = __result_obj__ = ((int*)(right_value22=wchar_tp_multiply(str,n)));
    right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__;
void* right_value23;
int* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
    __result28__ = __result_obj__ = ((int*)(right_value23=wchar_tp_printable(str)));
    right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result28__;
}
static inline unsigned int wstring_get_hash_key(int* value){
void* __result_obj__;
unsigned int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = wchar_tp_get_hash_key(value);
    return __result29__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result30__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = charp_index(str,search_str,default_value);
    return __result31__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = charp_index_regex(self,reg,default_value);
    return __result32__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
void* right_value24;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
    __result33__ = __result_obj__ = ((char*)(right_value24=charp_replace(self,index,c)));
    right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value25;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
    __result34__ = __result_obj__ = ((char*)(right_value25=charp_multiply(str,n)));
    right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value26;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
    __result35__ = __result_obj__ = ((char*)(right_value26=charp_sub(self,reg,replace)));
    right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value27;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value27=charp_sub_count(self,reg,replace,count)));
    right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value28;
struct list$1charph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
    __result37__ = __result_obj__ = ((struct list$1charph*)(right_value28=charp_split_str(self,str)));
    come_call_finalizer2(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result37__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value29;
struct list$1charph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
    __result38__ = __result_obj__ = ((struct list$1charph*)(right_value29=charp_scan(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value30;
struct list$1charph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
    __result39__ = __result_obj__ = ((struct list$1charph*)(right_value30=charp_split(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = charp_match(self,reg);
    return __result40__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
void* right_value31;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
    __result41__ = __result_obj__ = ((struct list$1charph*)(right_value31=charp_split_maxsplit(self,reg,maxsplit)));
    come_call_finalizer2(list$1charphp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result41__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result42__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = charp_match_count(self,reg,count);
    return __result43__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value32;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value32=charp_sub_block(self,reg,parent,block)));
    right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value33;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
    __result45__ = __result_obj__ = ((char*)(right_value33=charp_sub_block_count(self,reg,count,parent,block)));
    right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result45__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value35;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result47__ = __result_obj__ = ((char*)(right_value35=string_chomp(str)));
    right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result47__;
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








static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional5=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional5) {
                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_7;
_Bool _while_condtional2;
struct list_item$1charph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
        it_7=self->head;
        while(_while_condtional2=it_7!=((void*)0),        _while_condtional2) {
            prev_it_8=it_7;
            it_7=it_7->next;
            come_call_finalizer2(list_item$1charphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_9;
int erro_ofs_10;
int options_11;
void* right_value36;
char* __dec_obj6;
_Bool _if_conditional6;
struct come_regex* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_10, 0, sizeof(int));
memset(&options_11, 0, sizeof(int));
right_value36 = (void*)0;
    options_11=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj6=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value36=__builtin_string(str))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_11;
    self->re=pcre_compile(str,options_11,&err_9,&erro_ofs_10,((void*)0));
    if(_if_conditional6=self->re==((void*)0),    _if_conditional6) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
    }
    __result48__ = __result_obj__ = self;
    come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result48__;
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
void* right_value37;
void* right_value38;
struct come_regex* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
    __result49__ = __result_obj__ = ((struct come_regex*)(right_value38=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value37=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 65, "struct come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer2(come_regex_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(come_regex_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result49__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct come_regex* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
    __result50__ = __result_obj__ = ((struct come_regex*)(right_value40=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value39=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 70, "struct come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer2(come_regex_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(come_regex_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result50__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional9;
struct come_regex* __result51__;
void* right_value41;
struct come_regex* result_12;
void* right_value42;
char* __dec_obj7;
const char* err_13;
int erro_ofs_14;
_Bool _if_conditional10;
struct come_regex* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value41 = (void*)0;
memset(&result_12, 0, sizeof(struct come_regex*));
right_value42 = (void*)0;
memset(&erro_ofs_14, 0, sizeof(int));
    if(_if_conditional9=reg==((void*)0),    _if_conditional9) {
        __result51__ = __result_obj__ = ((void*)0);
        return __result51__;
    }
    result_12=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value41=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 80, "struct come_regex"))));
    come_call_finalizer2(come_regex_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj7=result_12->str;
    result_12->str=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(reg->str))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_12->ignore_case=reg->ignore_case;
    result_12->multiline=reg->multiline;
    result_12->global=reg->global;
    result_12->extended=reg->extended;
    result_12->dotall=reg->dotall;
    result_12->anchored=reg->anchored;
    result_12->dollar_endonly=reg->dollar_endonly;
    result_12->ungreedy=reg->ungreedy;
    result_12->options=reg->options;
    result_12->re=pcre_compile(result_12->str,result_12->options,&err_13,&erro_ofs_14,((void*)0));
    if(_if_conditional10=result_12->re==((void*)0),    _if_conditional10) {
        printf("regex compile error(%s)\n",result_12->str);
        stackframe();
        exit(1);
    }
    __result52__ = __result_obj__ = result_12;
    come_call_finalizer2(come_regex_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(come_regex_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
void* right_value43;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value43=__builtin_string(regex->str)));
    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

char* string_lower_case(char* str){
void* __result_obj__;
void* right_value44;
char* result_15;
int i_16;
_Bool _if_conditional11;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
memset(&result_15, 0, sizeof(char*));
memset(&i_16, 0, sizeof(int));
    result_15=(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(str))));
    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_16=0;    i_16<strlen(str);    i_16++    ){
        if(_if_conditional11=str[i_16]>=65&&str[i_16]<=90,        _if_conditional11) {
            result_15[i_16]=str[i_16]-65+97;
        }
    }
    __result54__ = __result_obj__ = result_15;
    result_15 = come_decrement_ref_count2(result_15, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result54__;
    result_15 = come_decrement_ref_count2(result_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_upper_case(char* str){
void* __result_obj__;
void* right_value45;
char* result_17;
int i_18;
_Bool _if_conditional12;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
memset(&result_17, 0, sizeof(char*));
memset(&i_18, 0, sizeof(int));
    result_17=(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string(str))));
    right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_18=0;    i_18<strlen(str);    i_18++    ){
        if(_if_conditional12=str[i_18]>=97&&str[i_18]<=122,        _if_conditional12) {
            result_17[i_18]=str[i_18]-97+65;
        }
    }
    __result55__ = __result_obj__ = result_17;
    result_17 = come_decrement_ref_count2(result_17, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result55__;
    result_17 = come_decrement_ref_count2(result_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value46;
int* __result56__;
int len_19;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
void* right_value47;
int* __result57__;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value48;
int* __result58__;
_Bool _if_conditional20;
void* right_value49;
int* __result59__;
void* right_value50;
int* result_20;
int* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&len_19, 0, sizeof(int));
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&result_20, 0, sizeof(int*));
    if(_if_conditional13=str==((void*)0),    _if_conditional13) {
        __result56__ = __result_obj__ = ((int*)(right_value46=__builtin_wstring("")));
        right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result56__;
    }
    len_19=wcslen(str);
    if(_if_conditional14=head<0,    _if_conditional14) {
        head+=len_19;
    }
    if(_if_conditional15=tail<0,    _if_conditional15) {
        tail+=len_19+1;
    }
    if(_if_conditional16=head>tail,    _if_conditional16) {
        __result57__ = __result_obj__ = ((int*)(right_value47=__builtin_wstring("")));
        right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result57__;
    }
    if(_if_conditional17=head<0,    _if_conditional17) {
        head=0;
    }
    if(_if_conditional18=tail>=len_19,    _if_conditional18) {
        tail=len_19;
    }
    if(_if_conditional19=head==tail,    _if_conditional19) {
        __result58__ = __result_obj__ = ((int*)(right_value48=__builtin_wstring("")));
        right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result58__;
    }
    if(_if_conditional20=tail-head+1<1,    _if_conditional20) {
        __result59__ = __result_obj__ = ((int*)(right_value49=__builtin_wstring("")));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result59__;
    }
    result_20=(int*)come_increment_ref_count(((int*)(right_value50=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang2-str.c", 175, "int"))));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_20,str+head,sizeof(int)*(tail-head));
    result_20[tail-head]=0;
    __result60__ = __result_obj__ = result_20;
    result_20 = come_decrement_ref_count2(result_20, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result60__;
    result_20 = come_decrement_ref_count2(result_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional21;
int* __result61__;
int len_21;
void* right_value51;
int* wstr_22;
int ret_23;
_Bool _if_conditional22;
int* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_21, 0, sizeof(int));
right_value51 = (void*)0;
memset(&wstr_22, 0, sizeof(int*));
memset(&ret_23, 0, sizeof(int));
    if(_if_conditional21=str==((void*)0),    _if_conditional21) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    len_21=strlen(str);
    wstr_22=(int*)come_increment_ref_count(((int*)(right_value51=(int*)come_calloc(1, sizeof(int)*(1*(len_21+1)), "libcomelang2-str.c", 190, "int"))));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ret_23=mbstowcs(wstr_22,str,len_21+1);
    wstr_22[ret_23]=0;
    if(_if_conditional22=ret_23<0,    _if_conditional22) {
        wstr_22[0]=0;
    }
    __result62__ = __result_obj__ = wstr_22;
    wstr_22 = come_decrement_ref_count2(wstr_22, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result62__;
    wstr_22 = come_decrement_ref_count2(wstr_22, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_24;
int len_25;
int i_26;
int len2_27;
int j_28;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_24, 0, sizeof(int));
memset(&len_25, 0, sizeof(int));
memset(&i_26, 0, sizeof(int));
memset(&len2_27, 0, sizeof(int));
memset(&j_28, 0, sizeof(int));
    n_24=0;
    len_25=strlen(str);
    for(    i_26=0;    i_26<len_25;    i_26++    ){
        len2_27=strlen(search_str);
        for(        j_28=0;        j_28<len2_27;        j_28++        ){
            if(_if_conditional23=str[i_26+j_28]!=search_str[j_28],            _if_conditional23) {
                break;
            }
        }
        if(_if_conditional24=j_28==len2_27,        _if_conditional24) {
            n_24++;
            if(_if_conditional25=n_24==count,            _if_conditional25) {
                __result63__ = i_26;
                return __result63__;
            }
        }
    }
    __result64__ = default_value;
    return __result64__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_29;
int result_33;
int offset_34;
const char* err_35;
int erro_ofs_36;
int options_37;
char* str_38;
struct real_pcre8_or_16* re_39;
int n_40;
_Bool _while_condtional3;
int options_41;
int len_42;
int regex_result_43;
int i_44;
int i_45;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_29, 0, sizeof(int));
memset(&result_33, 0, sizeof(int));
memset(&offset_34, 0, sizeof(int));
memset(&erro_ofs_36, 0, sizeof(int));
memset(&options_37, 0, sizeof(int));
memset(&str_38, 0, sizeof(char*));
memset(&re_39, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_40, 0, sizeof(int));
memset(&options_41, 0, sizeof(int));
memset(&len_42, 0, sizeof(int));
memset(&regex_result_43, 0, sizeof(int));
memset(&i_44, 0, sizeof(int));
memset(&i_45, 0, sizeof(int));
    ovec_max_29=16;
    int start_30[ovec_max_29];
    memset(&start_30, 0, sizeof(int)    *(ovec_max_29)    );
    int end_31[ovec_max_29];
    memset(&end_31, 0, sizeof(int)    *(ovec_max_29)    );
    int ovec_value_32[ovec_max_29*3];
    memset(&ovec_value_32, 0, sizeof(int)    *(ovec_max_29*3)    );
    result_33=default_value;
    offset_34=0;
    options_37=reg->options;
    str_38=reg->str;
    re_39=reg->re;
    n_40=0;
    while(_while_condtional3=(_Bool)1,    _while_condtional3) {
        options_41=2097152;
        len_42=strlen(self);
        regex_result_43=pcre_exec(re_39,(struct pcre_extra*)0,self,len_42,offset_34,options_41,ovec_value_32,ovec_max_29*3);
        for(        i_44=0;        i_44<ovec_max_29;        i_44++        ){
            start_30[i_44]=ovec_value_32[i_44*2];
        }
        for(        i_45=0;        i_45<ovec_max_29;        i_45++        ){
            end_31[i_45]=ovec_value_32[i_45*2+1];
        }
        if(_if_conditional26=regex_result_43>0,        _if_conditional26) {
            n_40++;
            if(_if_conditional27=offset_34==end_31[0],            _if_conditional27) {
                offset_34++;
            }
            else {
                offset_34=end_31[0];
            }
            if(_if_conditional28=n_40==count,            _if_conditional28) {
                result_33=start_30[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result65__ = result_33;
    return __result65__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_46;
char* p_47;
_Bool _while_condtional4;
_Bool _if_conditional29;
int __result66__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_46, 0, sizeof(int));
memset(&p_47, 0, sizeof(char*));
    len_46=strlen(search_str);
    p_47=str+strlen(str)-len_46;
    while(_while_condtional4=p_47>=str,    _while_condtional4) {
        if(_if_conditional29=strncmp(p_47,search_str,len_46)==0,        _if_conditional29) {
            __result66__ = p_47-str;
            return __result66__;
        }
        p_47--;
    }
    __result67__ = default_value;
    return __result67__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_48;
int erro_ofs_49;
int options_50;
char* str_51;
struct real_pcre8_or_16* re_52;
void* right_value52;
char* self2_53;
int ovec_max_54;
int result_58;
int offset_59;
_Bool _while_condtional5;
int options_60;
int len_61;
int regex_result_62;
int i_63;
int i_64;
_Bool _if_conditional30;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_49, 0, sizeof(int));
memset(&options_50, 0, sizeof(int));
memset(&str_51, 0, sizeof(char*));
memset(&re_52, 0, sizeof(struct real_pcre8_or_16*));
right_value52 = (void*)0;
memset(&self2_53, 0, sizeof(char*));
memset(&ovec_max_54, 0, sizeof(int));
memset(&result_58, 0, sizeof(int));
memset(&offset_59, 0, sizeof(int));
memset(&options_60, 0, sizeof(int));
memset(&len_61, 0, sizeof(int));
memset(&regex_result_62, 0, sizeof(int));
memset(&i_63, 0, sizeof(int));
memset(&i_64, 0, sizeof(int));
    options_50=reg->options;
    str_51=reg->str;
    re_52=reg->re;
    self2_53=(char*)come_increment_ref_count(((char*)(right_value52=charp_reverse(self))));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_54=16;
    int start_55[ovec_max_54];
    memset(&start_55, 0, sizeof(int)    *(ovec_max_54)    );
    int end_56[ovec_max_54];
    memset(&end_56, 0, sizeof(int)    *(ovec_max_54)    );
    int ovec_value_57[ovec_max_54*3];
    memset(&ovec_value_57, 0, sizeof(int)    *(ovec_max_54*3)    );
    result_58=default_value;
    offset_59=0;
    while(_while_condtional5=(_Bool)1,    _while_condtional5) {
        options_60=2097152;
        len_61=strlen(self2_53);
        regex_result_62=pcre_exec(re_52,(struct pcre_extra*)0,self2_53,len_61,offset_59,options_60,ovec_value_57,ovec_max_54*3);
        for(        i_63=0;        i_63<ovec_max_54;        i_63++        ){
            start_55[i_63]=ovec_value_57[i_63*2];
        }
        for(        i_64=0;        i_64<ovec_max_54;        i_64++        ){
            end_56[i_64]=ovec_value_57[i_64*2+1];
        }
        if(_if_conditional30=regex_result_62==1||regex_result_62>0,        _if_conditional30) {
            result_58=strlen(self)-1-start_55[0];
            break;
        }
        {
            break;
        }
    }
    __result68__ = result_58;
    self2_53 = come_decrement_ref_count2(self2_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result68__;
    self2_53 = come_decrement_ref_count2(self2_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_65;
char* p_66;
int n_67;
_Bool _while_condtional6;
_Bool _if_conditional31;
_Bool _if_conditional32;
int __result69__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_65, 0, sizeof(int));
memset(&p_66, 0, sizeof(char*));
memset(&n_67, 0, sizeof(int));
    len_65=strlen(search_str);
    p_66=str+strlen(str)-len_65;
    n_67=0;
    while(_while_condtional6=p_66>=str,    _while_condtional6) {
        if(_if_conditional31=strncmp(p_66,search_str,len_65)==0,        _if_conditional31) {
            n_67++;
            if(_if_conditional32=n_67==count,            _if_conditional32) {
                __result69__ = p_66-str;
                return __result69__;
            }
        }
        p_66--;
    }
    __result70__ = default_value;
    return __result70__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value53;
void* right_value54;
struct list$1charph* result_68;
int offset_69;
int ovec_max_70;
const char* err_74;
int erro_ofs_75;
int options_76;
char* str_77;
struct real_pcre8_or_16* re_78;
_Bool _while_condtional7;
int options_79;
int len_80;
int regex_result_81;
int i_82;
int i_83;
_Bool _if_conditional33;
void* right_value55;
char* str_84;
void* right_value56;
void* right_value57;
struct list$1charph* group_strings_85;
void* right_value58;
char* str2_86;
_Bool _if_conditional34;
struct list$1charph* __result72__;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value62;
char* str_90;
void* right_value63;
void* right_value64;
struct list$1charph* group_strings_91;
int i_92;
void* right_value65;
char* match_string_93;
void* right_value66;
char* str2_94;
_Bool _if_conditional39;
struct list$1charph* __result74__;
_Bool _if_conditional40;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_68, 0, sizeof(struct list$1charph*));
memset(&offset_69, 0, sizeof(int));
memset(&ovec_max_70, 0, sizeof(int));
memset(&erro_ofs_75, 0, sizeof(int));
memset(&options_76, 0, sizeof(int));
memset(&str_77, 0, sizeof(char*));
memset(&re_78, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_79, 0, sizeof(int));
memset(&len_80, 0, sizeof(int));
memset(&regex_result_81, 0, sizeof(int));
memset(&i_82, 0, sizeof(int));
memset(&i_83, 0, sizeof(int));
right_value55 = (void*)0;
memset(&str_84, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&group_strings_85, 0, sizeof(struct list$1charph*));
right_value58 = (void*)0;
memset(&str2_86, 0, sizeof(char*));
right_value62 = (void*)0;
memset(&str_90, 0, sizeof(char*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&group_strings_91, 0, sizeof(struct list$1charph*));
memset(&i_92, 0, sizeof(int));
right_value65 = (void*)0;
memset(&match_string_93, 0, sizeof(char*));
right_value66 = (void*)0;
memset(&str2_94, 0, sizeof(char*));
    result_68=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 376, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_69=0;
    ovec_max_70=16;
    int start_71[ovec_max_70];
    memset(&start_71, 0, sizeof(int)    *(ovec_max_70)    );
    int end_72[ovec_max_70];
    memset(&end_72, 0, sizeof(int)    *(ovec_max_70)    );
    int ovec_value_73[ovec_max_70*3];
    memset(&ovec_value_73, 0, sizeof(int)    *(ovec_max_70*3)    );
    options_76=reg->options;
    str_77=reg->str;
    re_78=reg->re;
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        options_79=2097152;
        len_80=strlen(self);
        regex_result_81=pcre_exec(re_78,(struct pcre_extra*)0,self,len_80,offset_69,options_79,ovec_value_73,ovec_max_70*3);
        for(        i_82=0;        i_82<ovec_max_70;        i_82++        ){
            start_71[i_82]=ovec_value_73[i_82*2];
        }
        for(        i_83=0;        i_83<ovec_max_70;        i_83++        ){
            end_72[i_83]=ovec_value_73[i_83*2+1];
        }
        if(_if_conditional33=regex_result_81==1,        _if_conditional33) {
            str_84=(char*)come_increment_ref_count(((char*)(right_value55=charp_substring(self,start_71[0],end_72[0]))));
            right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_85=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 410, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_86=(char*)come_increment_ref_count(((char*)(right_value58=block(parent,str_84,group_strings_85))));
            right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional34=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional34) {
                __result72__ = __result_obj__ = result_68;
                str_84 = come_decrement_ref_count2(str_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_86 = come_decrement_ref_count2(str2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result72__;
            }
            list$1charph_push_back(result_68,(char*)come_increment_ref_count(str2_86));
            if(_if_conditional37=offset_69==end_72[0],            _if_conditional37) {
                offset_69++;
            }
            else {
                offset_69=end_72[0];
            }
            str_84 = come_decrement_ref_count2(str_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_86 = come_decrement_ref_count2(str2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional38=regex_result_81>1,            _if_conditional38) {
                str_90=(char*)come_increment_ref_count(((char*)(right_value62=charp_substring(self,start_71[0],end_72[0]))));
                right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_91=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value64=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value63=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 431, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_92=1;                i_92<regex_result_81;                i_92++                ){
                    match_string_93=(char*)come_increment_ref_count(((char*)(right_value65=charp_substring(self,start_71[i_92],end_72[i_92]))));
                    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_91,(char*)come_increment_ref_count(match_string_93));
                    match_string_93 = come_decrement_ref_count2(match_string_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_94=(char*)come_increment_ref_count(((char*)(right_value66=block(parent,str_90,group_strings_91))));
                right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional39=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional39) {
                    __result74__ = __result_obj__ = result_68;
                    str_90 = come_decrement_ref_count2(str_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_94 = come_decrement_ref_count2(str2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
                list$1charph_push_back(result_68,(char*)come_increment_ref_count(str2_94));
                if(_if_conditional40=offset_69==end_72[0],                _if_conditional40) {
                    offset_69++;
                }
                else {
                    offset_69=end_72[0];
                }
                str_90 = come_decrement_ref_count2(str_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_94 = come_decrement_ref_count2(str2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result75__ = __result_obj__ = result_68;
    come_call_finalizer2(list$1charphp_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result75__;
    come_call_finalizer2(list$1charphp_finalize,result_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result71__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result71__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value59;
struct list_item$1charph* litem_87;
char* __dec_obj8;
_Bool _if_conditional36;
void* right_value60;
struct list_item$1charph* litem_88;
char* __dec_obj9;
void* right_value61;
struct list_item$1charph* litem_89;
char* __dec_obj10;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
right_value60 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1charph*));
right_value61 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional35=self->len==0,                _if_conditional35) {
                    litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_87->prev=((void*)0);
                    litem_87->next=((void*)0);
                    __dec_obj8=litem_87->item;
                    litem_87->item=(char*)come_increment_ref_count(item);
                    __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_87;
                    self->head=litem_87;
                }
                else {
                    if(_if_conditional36=self->len==1,                    _if_conditional36) {
                        litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_88->prev=self->head;
                        litem_88->next=((void*)0);
                        __dec_obj9=litem_88->item;
                        litem_88->item=(char*)come_increment_ref_count(item);
                        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_88;
                        self->head->next=litem_88;
                    }
                    else {
                        litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_89->prev=self->tail;
                        litem_89->next=((void*)0);
                        __dec_obj10=litem_89->item;
                        litem_89->item=(char*)come_increment_ref_count(item);
                        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_89;
                        self->tail=litem_89;
                    }
                }
                self->len++;
                __result73__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result73__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value67;
void* right_value68;
struct list$1charph* result_95;
int offset_96;
int ovec_max_97;
const char* err_101;
int erro_ofs_102;
int options_103;
char* str_104;
struct real_pcre8_or_16* re_105;
int n_106;
_Bool _while_condtional8;
int options_107;
int len_108;
int regex_result_109;
int i_110;
int i_111;
_Bool _if_conditional41;
void* right_value69;
char* str_112;
void* right_value70;
void* right_value71;
struct list$1charph* group_strings_113;
void* right_value72;
char* str2_114;
_Bool _if_conditional42;
struct list$1charph* __result76__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value73;
char* str_115;
void* right_value74;
void* right_value75;
struct list$1charph* group_strings_116;
int i_117;
void* right_value76;
char* match_string_118;
void* right_value77;
char* str2_119;
_Bool _if_conditional46;
struct list$1charph* __result77__;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
right_value68 = (void*)0;
memset(&result_95, 0, sizeof(struct list$1charph*));
memset(&offset_96, 0, sizeof(int));
memset(&ovec_max_97, 0, sizeof(int));
memset(&erro_ofs_102, 0, sizeof(int));
memset(&options_103, 0, sizeof(int));
memset(&str_104, 0, sizeof(char*));
memset(&re_105, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_106, 0, sizeof(int));
memset(&options_107, 0, sizeof(int));
memset(&len_108, 0, sizeof(int));
memset(&regex_result_109, 0, sizeof(int));
memset(&i_110, 0, sizeof(int));
memset(&i_111, 0, sizeof(int));
right_value69 = (void*)0;
memset(&str_112, 0, sizeof(char*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&group_strings_113, 0, sizeof(struct list$1charph*));
right_value72 = (void*)0;
memset(&str2_114, 0, sizeof(char*));
right_value73 = (void*)0;
memset(&str_115, 0, sizeof(char*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&group_strings_116, 0, sizeof(struct list$1charph*));
memset(&i_117, 0, sizeof(int));
right_value76 = (void*)0;
memset(&match_string_118, 0, sizeof(char*));
right_value77 = (void*)0;
memset(&str2_119, 0, sizeof(char*));
    result_95=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 465, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_96=0;
    ovec_max_97=16;
    int start_98[ovec_max_97];
    memset(&start_98, 0, sizeof(int)    *(ovec_max_97)    );
    int end_99[ovec_max_97];
    memset(&end_99, 0, sizeof(int)    *(ovec_max_97)    );
    int ovec_value_100[ovec_max_97*3];
    memset(&ovec_value_100, 0, sizeof(int)    *(ovec_max_97*3)    );
    options_103=reg->options;
    str_104=reg->str;
    re_105=reg->re;
    n_106=0;
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_107=2097152;
        len_108=strlen(self);
        regex_result_109=pcre_exec(re_105,(struct pcre_extra*)0,self,len_108,offset_96,options_107,ovec_value_100,ovec_max_97*3);
        for(        i_110=0;        i_110<ovec_max_97;        i_110++        ){
            start_98[i_110]=ovec_value_100[i_110*2];
        }
        for(        i_111=0;        i_111<ovec_max_97;        i_111++        ){
            end_99[i_111]=ovec_value_100[i_111*2+1];
        }
        if(_if_conditional41=regex_result_109==1,        _if_conditional41) {
            str_112=(char*)come_increment_ref_count(((char*)(right_value69=charp_substring(self,start_98[0],end_99[0]))));
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_113=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value70=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 501, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_114=(char*)come_increment_ref_count(((char*)(right_value72=block(parent,str_112,group_strings_113))));
            right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional42=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional42) {
                __result76__ = __result_obj__ = result_95;
                str_112 = come_decrement_ref_count2(str_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_114 = come_decrement_ref_count2(str2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_95, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result76__;
            }
            list$1charph_push_back(result_95,(char*)come_increment_ref_count(str2_114));
            if(_if_conditional43=offset_96==end_99[0],            _if_conditional43) {
                offset_96++;
            }
            else {
                offset_96=end_99[0];
            }
            n_106++;
            if(_if_conditional44=n_106==count,            _if_conditional44) {
                str_112 = come_decrement_ref_count2(str_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_114 = come_decrement_ref_count2(str2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_112 = come_decrement_ref_count2(str_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_114 = come_decrement_ref_count2(str2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional45=regex_result_109>1,            _if_conditional45) {
                str_115=(char*)come_increment_ref_count(((char*)(right_value73=charp_substring(self,start_98[0],end_99[0]))));
                right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_116=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 527, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_117=1;                i_117<regex_result_109;                i_117++                ){
                    match_string_118=(char*)come_increment_ref_count(((char*)(right_value76=charp_substring(self,start_98[i_117],end_99[i_117]))));
                    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_116,(char*)come_increment_ref_count(match_string_118));
                    match_string_118 = come_decrement_ref_count2(match_string_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_119=(char*)come_increment_ref_count(((char*)(right_value77=block(parent,str_115,group_strings_116))));
                right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional46=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional46) {
                    __result77__ = __result_obj__ = result_95;
                    str_115 = come_decrement_ref_count2(str_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_119 = come_decrement_ref_count2(str2_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_95, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result77__;
                }
                list$1charph_push_back(result_95,(char*)come_increment_ref_count(str2_119));
                if(_if_conditional47=offset_96==end_99[0],                _if_conditional47) {
                    offset_96++;
                }
                else {
                    offset_96=end_99[0];
                }
                n_106++;
                if(_if_conditional48=n_106==count,                _if_conditional48) {
                    str_115 = come_decrement_ref_count2(str_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_119 = come_decrement_ref_count2(str2_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                str_115 = come_decrement_ref_count2(str_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_119 = come_decrement_ref_count2(str2_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result78__ = __result_obj__ = result_95;
    come_call_finalizer2(list$1charphp_finalize,result_95, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result78__;
    come_call_finalizer2(list$1charphp_finalize,result_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_120;
int erro_ofs_121;
int options_122;
char* str_123;
struct real_pcre8_or_16* re_124;
void* right_value78;
void* right_value79;
struct list$1charph* result_125;
int offset_126;
int ovec_max_127;
_Bool _while_condtional9;
int options_131;
int len_132;
int regex_result_133;
int i_134;
int i_135;
_Bool _if_conditional49;
void* right_value80;
char* str_136;
void* right_value81;
void* right_value82;
struct list$1charph* match_strings_137;
void* right_value83;
char* str2_138;
_Bool _if_conditional50;
struct list$1charph* __result79__;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value84;
char* str_139;
_Bool _if_conditional53;
void* right_value85;
void* right_value86;
struct list$1charph* match_strings_140;
int i_141;
void* right_value87;
char* match_str_142;
void* right_value88;
char* str2_143;
_Bool _if_conditional54;
struct list$1charph* __result80__;
_Bool _if_conditional55;
void* right_value89;
char* str_144;
void* right_value90;
void* right_value91;
struct list$1charph* match_strings_145;
void* right_value92;
char* str2_146;
_Bool _if_conditional56;
struct list$1charph* __result81__;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_121, 0, sizeof(int));
memset(&options_122, 0, sizeof(int));
memset(&str_123, 0, sizeof(char*));
memset(&re_124, 0, sizeof(struct real_pcre8_or_16*));
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&result_125, 0, sizeof(struct list$1charph*));
memset(&offset_126, 0, sizeof(int));
memset(&ovec_max_127, 0, sizeof(int));
memset(&options_131, 0, sizeof(int));
memset(&len_132, 0, sizeof(int));
memset(&regex_result_133, 0, sizeof(int));
memset(&i_134, 0, sizeof(int));
memset(&i_135, 0, sizeof(int));
right_value80 = (void*)0;
memset(&str_136, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&match_strings_137, 0, sizeof(struct list$1charph*));
right_value83 = (void*)0;
memset(&str2_138, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&str_139, 0, sizeof(char*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&match_strings_140, 0, sizeof(struct list$1charph*));
memset(&i_141, 0, sizeof(int));
right_value87 = (void*)0;
memset(&match_str_142, 0, sizeof(char*));
right_value88 = (void*)0;
memset(&str2_143, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&str_144, 0, sizeof(char*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&match_strings_145, 0, sizeof(struct list$1charph*));
right_value92 = (void*)0;
memset(&str2_146, 0, sizeof(char*));
    options_122=reg->options;
    str_123=reg->str;
    re_124=reg->re;
    result_125=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 573, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_126=0;
    ovec_max_127=16;
    int start_128[ovec_max_127];
    memset(&start_128, 0, sizeof(int)    *(ovec_max_127)    );
    int end_129[ovec_max_127];
    memset(&end_129, 0, sizeof(int)    *(ovec_max_127)    );
    int ovec_value_130[ovec_max_127*3];
    memset(&ovec_value_130, 0, sizeof(int)    *(ovec_max_127*3)    );
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        options_131=2097152;
        len_132=strlen(self);
        regex_result_133=pcre_exec(re_124,(struct pcre_extra*)0,self,len_132,offset_126,options_131,ovec_value_130,ovec_max_127*3);
        for(        i_134=0;        i_134<ovec_max_127;        i_134++        ){
            start_128[i_134]=ovec_value_130[i_134*2];
        }
        for(        i_135=0;        i_135<ovec_max_127;        i_135++        ){
            end_129[i_135]=ovec_value_130[i_135*2+1];
        }
        if(_if_conditional49=regex_result_133==1,        _if_conditional49) {
            str_136=(char*)come_increment_ref_count(((char*)(right_value80=charp_substring(self,offset_126,start_128[0]))));
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_137=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 600, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_138=(char*)come_increment_ref_count(((char*)(right_value83=block(parent,str_136,match_strings_137))));
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional50=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional50) {
                __result79__ = __result_obj__ = result_125;
                str_136 = come_decrement_ref_count2(str_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_138 = come_decrement_ref_count2(str2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result79__;
            }
            list$1charph_push_back(result_125,(char*)come_increment_ref_count(str2_138));
            if(_if_conditional51=offset_126==end_129[0],            _if_conditional51) {
                offset_126++;
            }
            else {
                offset_126=end_129[0];
            }
            str_136 = come_decrement_ref_count2(str_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_138 = come_decrement_ref_count2(str2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional52=regex_result_133>1,            _if_conditional52) {
                str_139=(char*)come_increment_ref_count(((char*)(right_value84=charp_substring(self,offset_126,start_128[0]))));
                right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional53=offset_126==end_129[0],                _if_conditional53) {
                    offset_126++;
                }
                else {
                    offset_126=end_129[0];
                }
                match_strings_140=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 627, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_141=1;                i_141<regex_result_133;                i_141++                ){
                    match_str_142=(char*)come_increment_ref_count(((char*)(right_value87=charp_substring(self,start_128[i_141],end_129[i_141]))));
                    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_140,(char*)come_increment_ref_count(match_str_142));
                    match_str_142 = come_decrement_ref_count2(match_str_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_143=(char*)come_increment_ref_count(((char*)(right_value88=block(parent,str_139,match_strings_140))));
                right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional54=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional54) {
                    __result80__ = __result_obj__ = result_125;
                    str_139 = come_decrement_ref_count2(str_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,match_strings_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_143 = come_decrement_ref_count2(str2_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                }
                list$1charph_push_back(result_125,(char*)come_increment_ref_count(str2_143));
                str_139 = come_decrement_ref_count2(str_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_143 = come_decrement_ref_count2(str2_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional55=offset_126<charp_length(self),    _if_conditional55) {
        str_144=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(self,offset_126,-1))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        match_strings_145=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 649, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        str2_146=(char*)come_increment_ref_count(((char*)(right_value92=block(parent,str_144,match_strings_145))));
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional56=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional56) {
            __result81__ = __result_obj__ = result_125;
            str_144 = come_decrement_ref_count2(str_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_146 = come_decrement_ref_count2(str2_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result81__;
        }
        list$1charph_push_back(result_125,(char*)come_increment_ref_count(str2_146));
        str_144 = come_decrement_ref_count2(str_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,match_strings_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str2_146 = come_decrement_ref_count2(str2_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result82__ = __result_obj__ = result_125;
    come_call_finalizer2(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer2(list$1charphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_147;
int erro_ofs_148;
int options_149;
char* str_150;
struct real_pcre8_or_16* re_151;
void* right_value93;
void* right_value94;
struct list$1charph* result_152;
int offset_153;
int ovec_max_154;
int n_158;
_Bool _while_condtional10;
int options_159;
int len_160;
int regex_result_161;
int i_162;
int i_163;
_Bool _if_conditional57;
void* right_value95;
char* str_164;
void* right_value96;
void* right_value97;
struct list$1charph* match_strings_165;
void* right_value98;
char* str2_166;
_Bool _if_conditional58;
struct list$1charph* __result83__;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value99;
char* str_167;
_Bool _if_conditional61;
void* right_value100;
void* right_value101;
struct list$1charph* match_strings_168;
int i_169;
void* right_value102;
char* match_str_170;
void* right_value103;
char* str2_171;
_Bool _if_conditional62;
struct list$1charph* __result84__;
_Bool _if_conditional63;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_148, 0, sizeof(int));
memset(&options_149, 0, sizeof(int));
memset(&str_150, 0, sizeof(char*));
memset(&re_151, 0, sizeof(struct real_pcre8_or_16*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_152, 0, sizeof(struct list$1charph*));
memset(&offset_153, 0, sizeof(int));
memset(&ovec_max_154, 0, sizeof(int));
memset(&n_158, 0, sizeof(int));
memset(&options_159, 0, sizeof(int));
memset(&len_160, 0, sizeof(int));
memset(&regex_result_161, 0, sizeof(int));
memset(&i_162, 0, sizeof(int));
memset(&i_163, 0, sizeof(int));
right_value95 = (void*)0;
memset(&str_164, 0, sizeof(char*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&match_strings_165, 0, sizeof(struct list$1charph*));
right_value98 = (void*)0;
memset(&str2_166, 0, sizeof(char*));
right_value99 = (void*)0;
memset(&str_167, 0, sizeof(char*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&match_strings_168, 0, sizeof(struct list$1charph*));
memset(&i_169, 0, sizeof(int));
right_value102 = (void*)0;
memset(&match_str_170, 0, sizeof(char*));
right_value103 = (void*)0;
memset(&str2_171, 0, sizeof(char*));
    options_149=reg->options;
    str_150=reg->str;
    re_151=reg->re;
    result_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 671, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_153=0;
    ovec_max_154=16;
    int start_155[ovec_max_154];
    memset(&start_155, 0, sizeof(int)    *(ovec_max_154)    );
    int end_156[ovec_max_154];
    memset(&end_156, 0, sizeof(int)    *(ovec_max_154)    );
    int ovec_value_157[ovec_max_154*3];
    memset(&ovec_value_157, 0, sizeof(int)    *(ovec_max_154*3)    );
    n_158=0;
    while(_while_condtional10=(_Bool)1,    _while_condtional10) {
        options_159=2097152;
        len_160=strlen(self);
        regex_result_161=pcre_exec(re_151,(struct pcre_extra*)0,self,len_160,offset_153,options_159,ovec_value_157,ovec_max_154*3);
        for(        i_162=0;        i_162<ovec_max_154;        i_162++        ){
            start_155[i_162]=ovec_value_157[i_162*2];
        }
        for(        i_163=0;        i_163<ovec_max_154;        i_163++        ){
            end_156[i_163]=ovec_value_157[i_163*2+1];
        }
        if(_if_conditional57=regex_result_161==1,        _if_conditional57) {
            str_164=(char*)come_increment_ref_count(((char*)(right_value95=charp_substring(self,offset_153,start_155[0]))));
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value97=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 700, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_166=(char*)come_increment_ref_count(((char*)(right_value98=block(parent,str_164,match_strings_165))));
            right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional58=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional58) {
                __result83__ = __result_obj__ = result_152;
                str_164 = come_decrement_ref_count2(str_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_166 = come_decrement_ref_count2(str2_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result83__;
            }
            list$1charph_push_back(result_152,(char*)come_increment_ref_count(str2_166));
            if(_if_conditional59=offset_153==end_156[0],            _if_conditional59) {
                offset_153++;
            }
            else {
                offset_153=end_156[0];
            }
            str_164 = come_decrement_ref_count2(str_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_166 = come_decrement_ref_count2(str2_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional60=regex_result_161>1,            _if_conditional60) {
                str_167=(char*)come_increment_ref_count(((char*)(right_value99=charp_substring(self,offset_153,start_155[0]))));
                right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional61=offset_153==end_156[0],                _if_conditional61) {
                    offset_153++;
                }
                else {
                    offset_153=end_156[0];
                }
                match_strings_168=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value101=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value100=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 726, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_169=1;                i_169<regex_result_161;                i_169++                ){
                    match_str_170=(char*)come_increment_ref_count(((char*)(right_value102=charp_substring(self,start_155[i_169],end_156[i_169]))));
                    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_168,(char*)come_increment_ref_count(match_str_170));
                    match_str_170 = come_decrement_ref_count2(match_str_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_171=(char*)come_increment_ref_count(((char*)(right_value103=block(parent,str_167,match_strings_168))));
                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional62=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional62) {
                    __result84__ = __result_obj__ = result_152;
                    str_167 = come_decrement_ref_count2(str_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,match_strings_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_171 = come_decrement_ref_count2(str2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result84__;
                }
                list$1charph_push_back(result_152,(char*)come_increment_ref_count(str2_171));
                str_167 = come_decrement_ref_count2(str_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_171 = come_decrement_ref_count2(str2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_158++;
        if(_if_conditional63=n_158==count,        _if_conditional63) {
            break;
        }
    }
    __result85__ = __result_obj__ = result_152;
    come_call_finalizer2(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool _if_conditional64;
_Bool __result86__;
_Bool _if_conditional65;
_Bool __result87__;
_Bool _if_conditional66;
_Bool __result88__;
_Bool _if_conditional67;
_Bool __result89__;
_Bool _if_conditional68;
_Bool __result90__;
_Bool _if_conditional69;
_Bool __result91__;
_Bool _if_conditional70;
_Bool __result92__;
_Bool _if_conditional71;
_Bool __result93__;
_Bool _if_conditional72;
_Bool __result94__;
_Bool _if_conditional73;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional64=strcmp(left->str,right->str)!=0,    _if_conditional64) {
        __result86__ = (_Bool)0;
        return __result86__;
    }
    if(_if_conditional65=left->ignore_case!=right->ignore_case,    _if_conditional65) {
        __result87__ = (_Bool)0;
        return __result87__;
    }
    if(_if_conditional66=left->multiline!=right->multiline,    _if_conditional66) {
        __result88__ = (_Bool)0;
        return __result88__;
    }
    if(_if_conditional67=left->global!=right->global,    _if_conditional67) {
        __result89__ = (_Bool)0;
        return __result89__;
    }
    if(_if_conditional68=left->extended!=right->extended,    _if_conditional68) {
        __result90__ = (_Bool)0;
        return __result90__;
    }
    if(_if_conditional69=left->dotall!=right->dotall,    _if_conditional69) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    if(_if_conditional70=left->anchored!=right->anchored,    _if_conditional70) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    if(_if_conditional71=left->dollar_endonly!=right->dollar_endonly,    _if_conditional71) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    if(_if_conditional72=left->ungreedy!=right->ungreedy,    _if_conditional72) {
        __result94__ = (_Bool)0;
        return __result94__;
    }
    if(_if_conditional73=left->options!=right->options,    _if_conditional73) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    __result96__ = (_Bool)1;
    return __result96__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct list$1charph* result_172;
int offset_173;
int ovec_max_174;
const char* err_178;
int erro_ofs_179;
int options_180;
char* str_181;
struct real_pcre8_or_16* re_182;
_Bool _while_condtional11;
int options_183;
int len_184;
int regex_result_185;
int i_186;
int i_187;
_Bool _if_conditional74;
void* right_value106;
char* str_188;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value107;
char* str_189;
_Bool _if_conditional77;
int i_190;
void* right_value108;
char* match_string_191;
struct list$1charph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_172, 0, sizeof(struct list$1charph*));
memset(&offset_173, 0, sizeof(int));
memset(&ovec_max_174, 0, sizeof(int));
memset(&erro_ofs_179, 0, sizeof(int));
memset(&options_180, 0, sizeof(int));
memset(&str_181, 0, sizeof(char*));
memset(&re_182, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_183, 0, sizeof(int));
memset(&len_184, 0, sizeof(int));
memset(&regex_result_185, 0, sizeof(int));
memset(&i_186, 0, sizeof(int));
memset(&i_187, 0, sizeof(int));
right_value106 = (void*)0;
memset(&str_188, 0, sizeof(char*));
right_value107 = (void*)0;
memset(&str_189, 0, sizeof(char*));
memset(&i_190, 0, sizeof(int));
right_value108 = (void*)0;
memset(&match_string_191, 0, sizeof(char*));
    result_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 794, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_173=0;
    ovec_max_174=16;
    int start_175[ovec_max_174];
    memset(&start_175, 0, sizeof(int)    *(ovec_max_174)    );
    int end_176[ovec_max_174];
    memset(&end_176, 0, sizeof(int)    *(ovec_max_174)    );
    int ovec_value_177[ovec_max_174*3];
    memset(&ovec_value_177, 0, sizeof(int)    *(ovec_max_174*3)    );
    options_180=reg->options;
    str_181=reg->str;
    re_182=reg->re;
    while(_while_condtional11=(_Bool)1,    _while_condtional11) {
        options_183=2097152;
        len_184=strlen(self);
        regex_result_185=pcre_exec(re_182,(struct pcre_extra*)0,self,len_184,offset_173,options_183,ovec_value_177,ovec_max_174*3);
        for(        i_186=0;        i_186<ovec_max_174;        i_186++        ){
            start_175[i_186]=ovec_value_177[i_186*2];
        }
        for(        i_187=0;        i_187<ovec_max_174;        i_187++        ){
            end_176[i_187]=ovec_value_177[i_187*2+1];
        }
        if(_if_conditional74=regex_result_185==1,        _if_conditional74) {
            str_188=(char*)come_increment_ref_count(((char*)(right_value106=charp_substring(self,start_175[0],end_176[0]))));
            right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_172,(char*)come_increment_ref_count(str_188));
            if(_if_conditional75=offset_173==end_176[0],            _if_conditional75) {
                offset_173++;
            }
            else {
                offset_173=end_176[0];
            }
            str_188 = come_decrement_ref_count2(str_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional76=regex_result_185>1,            _if_conditional76) {
                str_189=(char*)come_increment_ref_count(((char*)(right_value107=charp_substring(self,start_175[0],end_176[0]))));
                right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_172,(char*)come_increment_ref_count(str_189));
                if(_if_conditional77=offset_173==end_176[0],                _if_conditional77) {
                    offset_173++;
                }
                else {
                    offset_173=end_176[0];
                }
                *num_group_string_in_regex=regex_result_185-1;
                for(                i_190=1;                i_190<regex_result_185;                i_190++                ){
                    match_string_191=(char*)come_increment_ref_count(((char*)(right_value108=charp_substring(self,start_175[i_190],end_176[i_190]))));
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_191));
                    match_string_191 = come_decrement_ref_count2(match_string_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_189 = come_decrement_ref_count2(str_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result97__ = __result_obj__ = result_172;
    come_call_finalizer2(list$1charphp_finalize,result_172, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(list$1charphp_finalize,result_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_strip(char* self){
void* __result_obj__;
void* right_value109;
char* result_192;
int len_193;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&result_192, 0, sizeof(char*));
memset(&len_193, 0, sizeof(int));
    result_192=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(self))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    len_193=strlen(self);
    if(_if_conditional78=self[len_193-1]==10,    _if_conditional78) {
        result_192[len_193-1]=0;
    }
    else {
        if(_if_conditional79=self[len_193-1]==13,        _if_conditional79) {
            result_192[len_193-1]=0;
        }
        else {
            if(_if_conditional80=len_193>2&&self[len_193-2]==13&&self[len_193-1]==10,            _if_conditional80) {
                result_192[len_193-2]=0;
            }
        }
    }
    __result98__ = __result_obj__ = result_192;
    result_192 = come_decrement_ref_count2(result_192, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result98__;
    result_192 = come_decrement_ref_count2(result_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_printable(char* str){
void* __result_obj__;
int len_194;
void* right_value110;
char* result_195;
int n_196;
int i_197;
char c_198;
_Bool _if_conditional81;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_194, 0, sizeof(int));
right_value110 = (void*)0;
memset(&result_195, 0, sizeof(char*));
memset(&n_196, 0, sizeof(int));
memset(&i_197, 0, sizeof(int));
memset(&c_198, 0, sizeof(char));
    len_194=charp_length(str);
    result_195=(char*)come_increment_ref_count(((char*)(right_value110=(char*)come_calloc(1, sizeof(char)*(1*(len_194*2+1)), "libcomelang2-str.c", 888, "char"))));
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_196=0;
    for(    i_197=0;    i_197<len_194;    i_197++    ){
        c_198=str[i_197];
        if(_if_conditional81=(c_198>=0&&c_198<32)||c_198==127,        _if_conditional81) {
            result_195[n_196++]=94;
            result_195[n_196++]=c_198+65-1;
        }
        else {
            result_195[n_196++]=c_198;
        }
    }
    result_195[n_196]=0;
    __result99__ = __result_obj__ = result_195;
    result_195 = come_decrement_ref_count2(result_195, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result99__;
    result_195 = come_decrement_ref_count2(result_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__;
int len_199;
void* right_value111;
char* result_200;
_Bool _if_conditional82;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_199, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_200, 0, sizeof(char*));
    len_199=6*(wcslen(wstr)+1);
    result_200=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_199)), "libcomelang2-str.c", 914, "char"))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional82=wcstombs(result_200,wstr,len_199)<0,    _if_conditional82) {
        strncpy(result_200,"",len_199);
    }
    __result100__ = __result_obj__ = result_200;
    result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result100__;
    result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* charp_to_wstring(char* str){
void* __result_obj__;
void* right_value112;
int* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    __result101__ = __result_obj__ = ((int*)(right_value112=__builtin_wstring(str)));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

int wchar_tp_length(int* str){
void* __result_obj__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = wcslen(str);
    return __result102__;
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__;
int len_201;
_Bool _if_conditional83;
void* right_value113;
void* right_value114;
int* __result103__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value115;
void* right_value116;
int* __result104__;
_Bool _if_conditional88;
void* right_value117;
int* sub_str_202;
void* right_value118;
void* right_value119;
int* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_201, 0, sizeof(int));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&sub_str_202, 0, sizeof(int*));
right_value118 = (void*)0;
right_value119 = (void*)0;
    len_201=wcslen(str);
    if(_if_conditional83=len_201==0,    _if_conditional83) {
        __result103__ = __result_obj__ = ((int*)(right_value114=string_to_wstring(((char*)(right_value113=wchar_tp_to_string(str))))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result103__;
    }
    if(_if_conditional84=head<0,    _if_conditional84) {
        head+=len_201;
    }
    if(_if_conditional85=tail<0,    _if_conditional85) {
        tail+=len_201+1;
    }
    if(_if_conditional86=head<0,    _if_conditional86) {
        head=0;
    }
    if(_if_conditional87=tail<0,    _if_conditional87) {
        __result104__ = __result_obj__ = ((int*)(right_value116=string_to_wstring(((char*)(right_value115=wchar_tp_to_string(str))))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result104__;
    }
    if(_if_conditional88=tail>=len_201,    _if_conditional88) {
        tail=len_201;
    }
    sub_str_202=(int*)come_increment_ref_count(((int*)(right_value117=wchar_tp_substring(str,tail,-1))));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_202,sizeof(int)*(wstring_length(sub_str_202)+1));
    __result105__ = __result_obj__ = ((int*)(right_value119=string_to_wstring(((char*)(right_value118=wchar_tp_to_string(str))))));
    sub_str_202 = come_decrement_ref_count2(sub_str_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
    sub_str_202 = come_decrement_ref_count2(sub_str_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int wchar_tp_index(int* str, int* search_str, int default_value){
void* __result_obj__;
int* head_203;
_Bool _if_conditional89;
int __result106__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_203, 0, sizeof(int*));
    head_203=wcsstr(str,search_str);
    if(_if_conditional89=head_203==((void*)0),    _if_conditional89) {
        __result106__ = default_value;
        return __result106__;
    }
    __result107__ = head_203-str;
    return __result107__;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
int len_204;
int* p_205;
_Bool _while_condtional12;
int len2_206;
_Bool result_207;
int i_208;
_Bool _if_conditional90;
_Bool _if_conditional91;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_204, 0, sizeof(int));
memset(&p_205, 0, sizeof(int*));
memset(&len2_206, 0, sizeof(int));
memset(&result_207, 0, sizeof(_Bool));
memset(&i_208, 0, sizeof(int));
    len_204=wcslen(search_str);
    p_205=str+wcslen(str)-len_204;
    while(_while_condtional12=p_205>=str,    _while_condtional12) {
        len2_206=wcslen(p_205);
        result_207=(_Bool)1;
        for(        i_208=0;        i_208<len_204&&i_208<len2_206;        i_208++        ){
            if(_if_conditional90=p_205[i_208]!=search_str[i_208],            _if_conditional90) {
                result_207=(_Bool)0;
            }
        }
        if(result_207) {
            __result108__ = (p_205-str);
            return __result108__;
        }
        p_205--;
    }
    __result109__ = default_value;
    return __result109__;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__;
int len_209;
void* right_value120;
int* result_210;
int i_211;
int* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_209, 0, sizeof(int));
right_value120 = (void*)0;
memset(&result_210, 0, sizeof(int*));
memset(&i_211, 0, sizeof(int));
    len_209=wcslen(str);
    result_210=(int*)come_increment_ref_count(((int*)(right_value120=(int*)come_calloc(1, sizeof(int)*(1*(len_209+1)), "libcomelang2-str.c", 1014, "int"))));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_211=0;    i_211<len_209;    i_211++    ){
        result_210[i_211]=str[len_209-i_211-1];
    }
    result_210[len_209]=0;
    __result110__ = __result_obj__ = result_210;
    result_210 = come_decrement_ref_count2(result_210, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result110__;
    result_210 = come_decrement_ref_count2(result_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__;
int len_212;
void* right_value121;
int* result_213;
int i_214;
int* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_212, 0, sizeof(int));
right_value121 = (void*)0;
memset(&result_213, 0, sizeof(int*));
memset(&i_214, 0, sizeof(int));
    len_212=wcslen(str)*n+1;
    result_213=(int*)come_increment_ref_count(((int*)(right_value121=(int*)come_calloc(1, sizeof(int)*(1*(len_212)), "libcomelang2-str.c", 1029, "int"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_213[0]=0;
    for(    i_214=0;    i_214<n;    i_214++    ){
        wcscat(result_213,str);
    }
    __result111__ = __result_obj__ = result_213;
    result_213 = come_decrement_ref_count2(result_213, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result111__;
    result_213 = come_decrement_ref_count2(result_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wchar_tp_printable(int* str){
void* __result_obj__;
int len_215;
void* right_value122;
int* result_216;
int n_217;
int i_218;
int c_219;
_Bool _if_conditional92;
int* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_215, 0, sizeof(int));
right_value122 = (void*)0;
memset(&result_216, 0, sizeof(int*));
memset(&n_217, 0, sizeof(int));
memset(&i_218, 0, sizeof(int));
memset(&c_219, 0, sizeof(int));
    len_215=wchar_tp_length(str);
    result_216=(int*)come_increment_ref_count(((int*)(right_value122=(int*)come_calloc(1, sizeof(int)*(1*(len_215*2+1)), "libcomelang2-str.c", 1043, "int"))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_217=0;
    for(    i_218=0;    i_218<len_215;    i_218++    ){
        c_219=str[i_218];
        if(_if_conditional92=(c_219>=0&&c_219<32)||c_219==127,        _if_conditional92) {
            result_216[n_217++]=94;
            result_216[n_217++]=c_219+65-1;
        }
        else {
            result_216[n_217++]=c_219;
        }
    }
    result_216[n_217]=0;
    __result112__ = __result_obj__ = result_216;
    result_216 = come_decrement_ref_count2(result_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result112__;
    result_216 = come_decrement_ref_count2(result_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_220;
int ovec_max_221;
const char* err_225;
int erro_ofs_226;
int options_227;
char* str_228;
struct real_pcre8_or_16* re_229;
int n_230;
_Bool _while_condtional13;
int options_231;
int len_232;
int regex_result_233;
int i_234;
int i_235;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result113__;
_Bool _if_conditional95;
_Bool _if_conditional96;
int i_238;
void* right_value123;
char* match_string_239;
_Bool _if_conditional97;
_Bool __result115__;
_Bool _if_conditional98;
_Bool __result116__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_220, 0, sizeof(int));
memset(&ovec_max_221, 0, sizeof(int));
memset(&erro_ofs_226, 0, sizeof(int));
memset(&options_227, 0, sizeof(int));
memset(&str_228, 0, sizeof(char*));
memset(&re_229, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_230, 0, sizeof(int));
memset(&options_231, 0, sizeof(int));
memset(&len_232, 0, sizeof(int));
memset(&regex_result_233, 0, sizeof(int));
memset(&i_234, 0, sizeof(int));
memset(&i_235, 0, sizeof(int));
memset(&i_238, 0, sizeof(int));
right_value123 = (void*)0;
memset(&match_string_239, 0, sizeof(char*));
    offset_220=0;
    ovec_max_221=16;
    int start_222[ovec_max_221];
    memset(&start_222, 0, sizeof(int)    *(ovec_max_221)    );
    int end_223[ovec_max_221];
    memset(&end_223, 0, sizeof(int)    *(ovec_max_221)    );
    int ovec_value_224[ovec_max_221*3];
    memset(&ovec_value_224, 0, sizeof(int)    *(ovec_max_221*3)    );
    options_227=reg->options;
    str_228=reg->str;
    re_229=reg->re;
    n_230=0;
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        options_231=2097152;
        len_232=strlen(self);
        regex_result_233=pcre_exec(re_229,(struct pcre_extra*)0,self,len_232,offset_220,options_231,ovec_value_224,ovec_max_221*3);
        for(        i_234=0;        i_234<ovec_max_221;        i_234++        ){
            start_222[i_234]=ovec_value_224[i_234*2];
        }
        for(        i_235=0;        i_235<ovec_max_221;        i_235++        ){
            end_223[i_235]=ovec_value_224[i_235*2+1];
        }
        if(_if_conditional93=regex_result_233==1||(group_strings==((void*)0)&&regex_result_233>0),        _if_conditional93) {
            n_230++;
            if(_if_conditional94=n_230==count,            _if_conditional94) {
                __result113__ = (_Bool)1;
                return __result113__;
            }
            if(_if_conditional95=offset_220==end_223[0],            _if_conditional95) {
                offset_220++;
            }
            else {
                offset_220=end_223[0];
            }
        }
        else {
            if(_if_conditional96=regex_result_233>1,            _if_conditional96) {
                n_230++;
                list$1charph_reset(group_strings);
                for(                i_238=1;                i_238<regex_result_233;                i_238++                ){
                    match_string_239=(char*)come_increment_ref_count(((char*)(right_value123=charp_substring(self,start_222[i_238],end_223[i_238]))));
                    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_239));
                    match_string_239 = come_decrement_ref_count2(match_string_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional97=n_230==count,                _if_conditional97) {
                    __result115__ = (_Bool)1;
                    return __result115__;
                }
                if(_if_conditional98=offset_220==end_223[0],                _if_conditional98) {
                    offset_220++;
                }
                else {
                    offset_220=end_223[0];
                }
            }
            else {
                __result116__ = (_Bool)0;
                return __result116__;
            }
        }
    }
    __result117__ = (_Bool)0;
    return __result117__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_236;
_Bool _while_condtional14;
struct list_item$1charph* prev_it_237;
struct list$1charph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_236, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_237, 0, sizeof(struct list_item$1charph*));
                    it_236=self->head;
                    while(_while_condtional14=it_236!=((void*)0),                    _while_condtional14) {
                        prev_it_237=it_236;
                        it_236=it_236->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result114__ = __result_obj__ = self;
                    return __result114__;
}

int wchar_tp_compare(int* left, int* right){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = wcscmp(left,right);
    return __result118__;
}

int wstring_compare(int* left, int* right){
void* __result_obj__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = wcscmp(left,right);
    return __result119__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = string_get_hash_key(reg->str);
    return __result120__;
}

_Bool wchar_tp_equals(int left, int right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = left==right;
    return __result121__;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__;
void* right_value124;
int* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result122__ = __result_obj__ = ((int*)(right_value124=wchar_tp_multiply(str,n)));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__;
void* right_value125;
int* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result123__ = __result_obj__ = ((int*)(right_value125=wchar_tp_multiply(str,n)));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = wcscmp(left,right)==0;
    return __result124__;
}

_Bool wstring_operator_equals(int* left, int* right){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = wcscmp(left,right)==0;
    return __result125__;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = wcscmp(left,right)!=0;
    return __result126__;
}

_Bool wstring_operator_not_equals(int* left, int* right){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = wcscmp(left,right)!=0;
    return __result127__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = come_regex_equals(left,right);
    return __result128__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = !come_regex_equals(left,right);
    return __result129__;
}

int* wchar_tp_operator_add(int* left, int* right){
void* __result_obj__;
void* right_value126;
int* result_240;
int* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&result_240, 0, sizeof(int*));
    result_240=(int*)come_increment_ref_count(((int*)(right_value126=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1207, "int"))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_240,left);
    wcscat(result_240,right);
    __result130__ = __result_obj__ = result_240;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result130__;
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__;
void* right_value127;
int* result_241;
int* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&result_241, 0, sizeof(int*));
    result_241=(int*)come_increment_ref_count(((int*)(right_value127=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1217, "int"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_241,left);
    wcscat(result_241,right);
    __result131__ = __result_obj__ = result_241;
    result_241 = come_decrement_ref_count2(result_241, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result131__;
    result_241 = come_decrement_ref_count2(result_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_242;
_Bool _if_conditional99;
int __result132__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_242, 0, sizeof(char*));
    head_242=strstr(str,search_str);
    if(_if_conditional99=head_242==((void*)0),    _if_conditional99) {
        __result132__ = default_value;
        return __result132__;
    }
    __result133__ = head_242-str;
    return __result133__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_243;
int result_247;
int offset_248;
const char* err_249;
int erro_ofs_250;
int options_251;
char* str_252;
struct real_pcre8_or_16* re_253;
_Bool _while_condtional15;
int options_254;
int len_255;
int regex_result_256;
int i_257;
int i_258;
_Bool _if_conditional100;
int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_243, 0, sizeof(int));
memset(&result_247, 0, sizeof(int));
memset(&offset_248, 0, sizeof(int));
memset(&erro_ofs_250, 0, sizeof(int));
memset(&options_251, 0, sizeof(int));
memset(&str_252, 0, sizeof(char*));
memset(&re_253, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_254, 0, sizeof(int));
memset(&len_255, 0, sizeof(int));
memset(&regex_result_256, 0, sizeof(int));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
    ovec_max_243=16;
    int start_244[ovec_max_243];
    memset(&start_244, 0, sizeof(int)    *(ovec_max_243)    );
    int end_245[ovec_max_243];
    memset(&end_245, 0, sizeof(int)    *(ovec_max_243)    );
    int ovec_value_246[ovec_max_243*3];
    memset(&ovec_value_246, 0, sizeof(int)    *(ovec_max_243*3)    );
    result_247=default_value;
    offset_248=0;
    options_251=reg->options;
    str_252=reg->str;
    re_253=reg->re;
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_254=2097152;
        len_255=strlen(self);
        regex_result_256=pcre_exec(re_253,(struct pcre_extra*)0,self,len_255,offset_248,options_254,ovec_value_246,ovec_max_243*3);
        for(        i_257=0;        i_257<ovec_max_243;        i_257++        ){
            start_244[i_257]=ovec_value_246[i_257*2];
        }
        for(        i_258=0;        i_258<ovec_max_243;        i_258++        ){
            end_245[i_258]=ovec_value_246[i_258*2+1];
        }
        if(_if_conditional100=regex_result_256==1||regex_result_256>0,        _if_conditional100) {
            result_247=start_244[0];
            break;
        }
        {
            break;
        }
    }
    __result134__ = result_247;
    return __result134__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_259;
_Bool _if_conditional101;
void* right_value128;
char* __result135__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value129;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_259, 0, sizeof(int));
right_value128 = (void*)0;
right_value129 = (void*)0;
    len_259=strlen(self);
    if(_if_conditional101=strcmp(self,"")==0,    _if_conditional101) {
        __result135__ = __result_obj__ = ((char*)(right_value128=__builtin_string(self)));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result135__;
    }
    if(_if_conditional102=index<0,    _if_conditional102) {
        index+=len_259;
    }
    if(_if_conditional103=index>=len_259,    _if_conditional103) {
        index=len_259-1;
    }
    if(_if_conditional104=index<0,    _if_conditional104) {
        index=0;
    }
    self[index]=c;
    __result136__ = __result_obj__ = ((char*)(right_value129=__builtin_string(self)));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_260;
void* right_value130;
char* result_261;
int i_262;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_260, 0, sizeof(int));
right_value130 = (void*)0;
memset(&result_261, 0, sizeof(char*));
memset(&i_262, 0, sizeof(int));
    len_260=strlen(str)*n+1;
    result_261=(char*)come_increment_ref_count(((char*)(right_value130=(char*)come_calloc(1, sizeof(char)*(1*(len_260)), "libcomelang2-str.c", 1315, "char"))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_261[0]=0;
    for(    i_262=0;    i_262<n;    i_262++    ){
        strcat(result_261,str);
    }
    __result137__ = __result_obj__ = result_261;
    result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result137__;
    result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_263;
int ovec_max_264;
const char* err_268;
int erro_ofs_269;
int options_270;
char* str_271;
struct real_pcre8_or_16* re_272;
void* right_value131;
void* right_value132;
struct buffer* result_273;
_Bool _while_condtional16;
int options_274;
int len_275;
int regex_result_276;
int i_277;
int i_278;
_Bool _if_conditional105;
void* right_value133;
char* str_279;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value134;
char* str_280;
void* right_value135;
char* str_281;
void* right_value136;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_263, 0, sizeof(int));
memset(&ovec_max_264, 0, sizeof(int));
memset(&erro_ofs_269, 0, sizeof(int));
memset(&options_270, 0, sizeof(int));
memset(&str_271, 0, sizeof(char*));
memset(&re_272, 0, sizeof(struct real_pcre8_or_16*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&result_273, 0, sizeof(struct buffer*));
memset(&options_274, 0, sizeof(int));
memset(&len_275, 0, sizeof(int));
memset(&regex_result_276, 0, sizeof(int));
memset(&i_277, 0, sizeof(int));
memset(&i_278, 0, sizeof(int));
right_value133 = (void*)0;
memset(&str_279, 0, sizeof(char*));
right_value134 = (void*)0;
memset(&str_280, 0, sizeof(char*));
right_value135 = (void*)0;
memset(&str_281, 0, sizeof(char*));
right_value136 = (void*)0;
    offset_263=0;
    ovec_max_264=16;
    int start_265[ovec_max_264];
    memset(&start_265, 0, sizeof(int)    *(ovec_max_264)    );
    int end_266[ovec_max_264];
    memset(&end_266, 0, sizeof(int)    *(ovec_max_264)    );
    int ovec_value_267[ovec_max_264*3];
    memset(&ovec_value_267, 0, sizeof(int)    *(ovec_max_264*3)    );
    options_270=reg->options;
    str_271=reg->str;
    re_272=reg->re;
    result_273=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1343, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_274=2097152;
        len_275=strlen(self);
        regex_result_276=pcre_exec(re_272,(struct pcre_extra*)0,self,len_275,offset_263,options_274,ovec_value_267,ovec_max_264*3);
        for(        i_277=0;        i_277<ovec_max_264;        i_277++        ){
            start_265[i_277]=ovec_value_267[i_277*2];
        }
        for(        i_278=0;        i_278<ovec_max_264;        i_278++        ){
            end_266[i_278]=ovec_value_267[i_278*2+1];
        }
        if(_if_conditional105=regex_result_276==1,        _if_conditional105) {
            str_279=(char*)come_increment_ref_count(((char*)(right_value133=charp_substring(self,offset_263,start_265[0]))));
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_273,str_279);
            buffer_append_str(result_273,replace);
            if(_if_conditional106=offset_263==end_266[0],            _if_conditional106) {
                offset_263++;
            }
            else {
                offset_263=end_266[0];
            }
            if(_if_conditional107=!reg->global,            _if_conditional107) {
                str_280=(char*)come_increment_ref_count(((char*)(right_value134=charp_substring(self,offset_263,-1))));
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_273,str_280);
                str_280 = come_decrement_ref_count2(str_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_279 = come_decrement_ref_count2(str_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_280 = come_decrement_ref_count2(str_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_279 = come_decrement_ref_count2(str_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_281=(char*)come_increment_ref_count(((char*)(right_value135=charp_substring(self,offset_263,-1))));
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_273,str_281);
            str_281 = come_decrement_ref_count2(str_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_281 = come_decrement_ref_count2(str_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result138__ = __result_obj__ = ((char*)(right_value136=buffer_to_string(result_273)));
    come_call_finalizer2(buffer_finalize,result_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
    come_call_finalizer2(buffer_finalize,result_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_282;
int ovec_max_283;
const char* err_287;
int erro_ofs_288;
int options_289;
char* str_290;
struct real_pcre8_or_16* re_291;
void* right_value137;
void* right_value138;
struct buffer* result_292;
int n_293;
_Bool _while_condtional17;
int options_294;
int len_295;
int regex_result_296;
int i_297;
int i_298;
_Bool _if_conditional108;
void* right_value139;
char* str_299;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value140;
char* str_300;
_Bool _if_conditional111;
void* right_value141;
char* str_301;
void* right_value142;
char* str_302;
void* right_value143;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_282, 0, sizeof(int));
memset(&ovec_max_283, 0, sizeof(int));
memset(&erro_ofs_288, 0, sizeof(int));
memset(&options_289, 0, sizeof(int));
memset(&str_290, 0, sizeof(char*));
memset(&re_291, 0, sizeof(struct real_pcre8_or_16*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&result_292, 0, sizeof(struct buffer*));
memset(&n_293, 0, sizeof(int));
memset(&options_294, 0, sizeof(int));
memset(&len_295, 0, sizeof(int));
memset(&regex_result_296, 0, sizeof(int));
memset(&i_297, 0, sizeof(int));
memset(&i_298, 0, sizeof(int));
right_value139 = (void*)0;
memset(&str_299, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&str_300, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&str_301, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&str_302, 0, sizeof(char*));
right_value143 = (void*)0;
    offset_282=0;
    ovec_max_283=16;
    int start_284[ovec_max_283];
    memset(&start_284, 0, sizeof(int)    *(ovec_max_283)    );
    int end_285[ovec_max_283];
    memset(&end_285, 0, sizeof(int)    *(ovec_max_283)    );
    int ovec_value_286[ovec_max_283*3];
    memset(&ovec_value_286, 0, sizeof(int)    *(ovec_max_283*3)    );
    options_289=reg->options;
    str_290=reg->str;
    re_291=reg->re;
    result_292=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1406, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    n_293=0;
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        options_294=2097152;
        len_295=strlen(self);
        regex_result_296=pcre_exec(re_291,(struct pcre_extra*)0,self,len_295,offset_282,options_294,ovec_value_286,ovec_max_283*3);
        for(        i_297=0;        i_297<ovec_max_283;        i_297++        ){
            start_284[i_297]=ovec_value_286[i_297*2];
        }
        for(        i_298=0;        i_298<ovec_max_283;        i_298++        ){
            end_285[i_298]=ovec_value_286[i_298*2+1];
        }
        if(_if_conditional108=regex_result_296==1,        _if_conditional108) {
            n_293++;
            str_299=(char*)come_increment_ref_count(((char*)(right_value139=charp_substring(self,offset_282,start_284[0]))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_292,str_299);
            buffer_append_str(result_292,replace);
            if(_if_conditional109=offset_282==end_285[0],            _if_conditional109) {
                offset_282++;
            }
            else {
                offset_282=end_285[0];
            }
            if(_if_conditional110=!reg->global,            _if_conditional110) {
                str_300=(char*)come_increment_ref_count(((char*)(right_value140=charp_substring(self,offset_282,-1))));
                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_292,str_300);
                str_300 = come_decrement_ref_count2(str_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_300 = come_decrement_ref_count2(str_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional111=n_293==count,            _if_conditional111) {
                str_301=(char*)come_increment_ref_count(((char*)(right_value141=charp_substring(self,offset_282,-1))));
                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_292,str_301);
                str_301 = come_decrement_ref_count2(str_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_301 = come_decrement_ref_count2(str_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_302=(char*)come_increment_ref_count(((char*)(right_value142=charp_substring(self,offset_282,-1))));
            right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_292,str_302);
            str_302 = come_decrement_ref_count2(str_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_302 = come_decrement_ref_count2(str_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result139__ = __result_obj__ = ((char*)(right_value143=buffer_to_string(result_292)));
    come_call_finalizer2(buffer_finalize,result_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result139__;
    come_call_finalizer2(buffer_finalize,result_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
void* right_value144;
void* right_value145;
struct list$1charph* result_303;
void* right_value146;
void* right_value147;
struct buffer* buf_304;
int i_305;
_Bool _if_conditional112;
void* right_value148;
_Bool _if_conditional113;
void* right_value149;
struct list$1charph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_303, 0, sizeof(struct list$1charph*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&buf_304, 0, sizeof(struct buffer*));
memset(&i_305, 0, sizeof(int));
right_value148 = (void*)0;
right_value149 = (void*)0;
    result_303=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1465, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buf_304=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value146=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1467, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_305=0;    i_305<charp_length(self);    i_305++    ){
        if(_if_conditional112=strstr(self+i_305,str)==self+i_305,        _if_conditional112) {
            list$1charph_push_back(result_303,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(buf_304->buf)))));
            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(buf_304);
            i_305+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_304,self[i_305]);
        }
    }
    if(_if_conditional113=buffer_length(buf_304)!=0,    _if_conditional113) {
        list$1charph_push_back(result_303,(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(buf_304->buf)))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result140__ = __result_obj__ = result_303;
    come_call_finalizer2(list$1charphp_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer2(list$1charphp_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value150;
void* right_value151;
struct list$1charph* result_306;
int offset_307;
int ovec_max_308;
const char* err_312;
int erro_ofs_313;
int options_314;
char* str_315;
struct real_pcre8_or_16* re_316;
_Bool _while_condtional18;
int options_317;
int len_318;
int regex_result_319;
int i_320;
int i_321;
_Bool _if_conditional114;
void* right_value152;
char* str_322;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value153;
char* str_323;
_Bool _if_conditional117;
int i_324;
void* right_value154;
char* match_string_325;
struct list$1charph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_306, 0, sizeof(struct list$1charph*));
memset(&offset_307, 0, sizeof(int));
memset(&ovec_max_308, 0, sizeof(int));
memset(&erro_ofs_313, 0, sizeof(int));
memset(&options_314, 0, sizeof(int));
memset(&str_315, 0, sizeof(char*));
memset(&re_316, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_317, 0, sizeof(int));
memset(&len_318, 0, sizeof(int));
memset(&regex_result_319, 0, sizeof(int));
memset(&i_320, 0, sizeof(int));
memset(&i_321, 0, sizeof(int));
right_value152 = (void*)0;
memset(&str_322, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&str_323, 0, sizeof(char*));
memset(&i_324, 0, sizeof(int));
right_value154 = (void*)0;
memset(&match_string_325, 0, sizeof(char*));
    result_306=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1488, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_307=0;
    ovec_max_308=16;
    int start_309[ovec_max_308];
    memset(&start_309, 0, sizeof(int)    *(ovec_max_308)    );
    int end_310[ovec_max_308];
    memset(&end_310, 0, sizeof(int)    *(ovec_max_308)    );
    int ovec_value_311[ovec_max_308*3];
    memset(&ovec_value_311, 0, sizeof(int)    *(ovec_max_308*3)    );
    options_314=reg->options;
    str_315=reg->str;
    re_316=reg->re;
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_317=2097152;
        len_318=strlen(self);
        regex_result_319=pcre_exec(re_316,(struct pcre_extra*)0,self,len_318,offset_307,options_317,ovec_value_311,ovec_max_308*3);
        for(        i_320=0;        i_320<ovec_max_308;        i_320++        ){
            start_309[i_320]=ovec_value_311[i_320*2];
        }
        for(        i_321=0;        i_321<ovec_max_308;        i_321++        ){
            end_310[i_321]=ovec_value_311[i_321*2+1];
        }
        if(_if_conditional114=regex_result_319==1,        _if_conditional114) {
            str_322=(char*)come_increment_ref_count(((char*)(right_value152=charp_substring(self,start_309[0],end_310[0]))));
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_306,(char*)come_increment_ref_count(str_322));
            if(_if_conditional115=offset_307==end_310[0],            _if_conditional115) {
                offset_307++;
            }
            else {
                offset_307=end_310[0];
            }
            str_322 = come_decrement_ref_count2(str_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional116=regex_result_319>1,            _if_conditional116) {
                str_323=(char*)come_increment_ref_count(((char*)(right_value153=charp_substring(self,start_309[0],end_310[0]))));
                right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_306,(char*)come_increment_ref_count(str_323));
                if(_if_conditional117=offset_307==end_310[0],                _if_conditional117) {
                    offset_307++;
                }
                else {
                    offset_307=end_310[0];
                }
                for(                i_324=1;                i_324<regex_result_319;                i_324++                ){
                    match_string_325=(char*)come_increment_ref_count(((char*)(right_value154=charp_substring(self,start_309[i_324],end_310[i_324]))));
                    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_306,(char*)come_increment_ref_count(match_string_325));
                    match_string_325 = come_decrement_ref_count2(match_string_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_323 = come_decrement_ref_count2(str_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result141__ = __result_obj__ = result_306;
    come_call_finalizer2(list$1charphp_finalize,result_306, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result141__;
    come_call_finalizer2(list$1charphp_finalize,result_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_326;
int erro_ofs_327;
int options_328;
char* str_329;
struct real_pcre8_or_16* re_330;
void* right_value155;
void* right_value156;
struct list$1charph* result_331;
int offset_332;
int ovec_max_333;
_Bool _while_condtional19;
int options_337;
int len_338;
int regex_result_339;
int i_340;
int i_341;
_Bool _if_conditional118;
void* right_value157;
char* str_342;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value158;
char* str_343;
_Bool _if_conditional121;
int i_344;
void* right_value159;
char* match_str_345;
_Bool _if_conditional122;
void* right_value160;
char* str_346;
struct list$1charph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_327, 0, sizeof(int));
memset(&options_328, 0, sizeof(int));
memset(&str_329, 0, sizeof(char*));
memset(&re_330, 0, sizeof(struct real_pcre8_or_16*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&result_331, 0, sizeof(struct list$1charph*));
memset(&offset_332, 0, sizeof(int));
memset(&ovec_max_333, 0, sizeof(int));
memset(&options_337, 0, sizeof(int));
memset(&len_338, 0, sizeof(int));
memset(&regex_result_339, 0, sizeof(int));
memset(&i_340, 0, sizeof(int));
memset(&i_341, 0, sizeof(int));
right_value157 = (void*)0;
memset(&str_342, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&str_343, 0, sizeof(char*));
memset(&i_344, 0, sizeof(int));
right_value159 = (void*)0;
memset(&match_str_345, 0, sizeof(char*));
right_value160 = (void*)0;
memset(&str_346, 0, sizeof(char*));
    options_328=reg->options;
    str_329=reg->str;
    re_330=reg->re;
    result_331=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1569, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_332=0;
    ovec_max_333=16;
    int start_334[ovec_max_333];
    memset(&start_334, 0, sizeof(int)    *(ovec_max_333)    );
    int end_335[ovec_max_333];
    memset(&end_335, 0, sizeof(int)    *(ovec_max_333)    );
    int ovec_value_336[ovec_max_333*3];
    memset(&ovec_value_336, 0, sizeof(int)    *(ovec_max_333*3)    );
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        options_337=2097152;
        len_338=strlen(self);
        regex_result_339=pcre_exec(re_330,(struct pcre_extra*)0,self,len_338,offset_332,options_337,ovec_value_336,ovec_max_333*3);
        for(        i_340=0;        i_340<ovec_max_333;        i_340++        ){
            start_334[i_340]=ovec_value_336[i_340*2];
        }
        for(        i_341=0;        i_341<ovec_max_333;        i_341++        ){
            end_335[i_341]=ovec_value_336[i_341*2+1];
        }
        if(_if_conditional118=regex_result_339==1,        _if_conditional118) {
            str_342=(char*)come_increment_ref_count(((char*)(right_value157=charp_substring(self,offset_332,start_334[0]))));
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_331,(char*)come_increment_ref_count(str_342));
            if(_if_conditional119=offset_332==end_335[0],            _if_conditional119) {
                offset_332++;
            }
            else {
                offset_332=end_335[0];
            }
            str_342 = come_decrement_ref_count2(str_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional120=regex_result_339>1,            _if_conditional120) {
                str_343=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(self,offset_332,start_334[0]))));
                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_331,(char*)come_increment_ref_count(str_343));
                if(_if_conditional121=offset_332==end_335[0],                _if_conditional121) {
                    offset_332++;
                }
                else {
                    offset_332=end_335[0];
                }
                for(                i_344=1;                i_344<regex_result_339;                i_344++                ){
                    match_str_345=(char*)come_increment_ref_count(((char*)(right_value159=charp_substring(self,start_334[i_344],end_335[i_344]))));
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_331,(char*)come_increment_ref_count(match_str_345));
                    match_str_345 = come_decrement_ref_count2(match_str_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_343 = come_decrement_ref_count2(str_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional122=offset_332<charp_length(self),    _if_conditional122) {
        str_346=(char*)come_increment_ref_count(((char*)(right_value160=charp_substring(self,offset_332,-1))));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_331,(char*)come_increment_ref_count(str_346));
        str_346 = come_decrement_ref_count2(str_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result142__ = __result_obj__ = result_331;
    come_call_finalizer2(list$1charphp_finalize,result_331, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result142__;
    come_call_finalizer2(list$1charphp_finalize,result_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_347;
int ovec_max_348;
const char* err_352;
int erro_ofs_353;
int options_354;
char* str_355;
struct real_pcre8_or_16* re_356;
_Bool _while_condtional20;
int options_357;
int len_358;
int regex_result_359;
int i_360;
int i_361;
_Bool _if_conditional123;
_Bool __result143__;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_347, 0, sizeof(int));
memset(&ovec_max_348, 0, sizeof(int));
memset(&erro_ofs_353, 0, sizeof(int));
memset(&options_354, 0, sizeof(int));
memset(&str_355, 0, sizeof(char*));
memset(&re_356, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_357, 0, sizeof(int));
memset(&len_358, 0, sizeof(int));
memset(&regex_result_359, 0, sizeof(int));
memset(&i_360, 0, sizeof(int));
memset(&i_361, 0, sizeof(int));
    offset_347=0;
    ovec_max_348=16;
    int start_349[ovec_max_348];
    memset(&start_349, 0, sizeof(int)    *(ovec_max_348)    );
    int end_350[ovec_max_348];
    memset(&end_350, 0, sizeof(int)    *(ovec_max_348)    );
    int ovec_value_351[ovec_max_348*3];
    memset(&ovec_value_351, 0, sizeof(int)    *(ovec_max_348*3)    );
    options_354=reg->options;
    str_355=reg->str;
    re_356=reg->re;
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_357=2097152;
        len_358=strlen(self);
        regex_result_359=pcre_exec(re_356,(struct pcre_extra*)0,self,len_358,offset_347,options_357,ovec_value_351,ovec_max_348*3);
        for(        i_360=0;        i_360<ovec_max_348;        i_360++        ){
            start_349[i_360]=ovec_value_351[i_360*2];
        }
        for(        i_361=0;        i_361<ovec_max_348;        i_361++        ){
            end_350[i_361]=ovec_value_351[i_361*2+1];
        }
        if(_if_conditional123=regex_result_359>0,        _if_conditional123) {
            __result143__ = (_Bool)1;
            return __result143__;
        }
        else {
            __result144__ = (_Bool)0;
            return __result144__;
        }
    }
    __result145__ = (_Bool)0;
    return __result145__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
const char* err_362;
int erro_ofs_363;
int options_364;
char* str_365;
struct real_pcre8_or_16* re_366;
void* right_value161;
void* right_value162;
struct list$1charph* result_367;
int offset_368;
int ovec_max_369;
int n_373;
_Bool _while_condtional21;
int options_374;
int len_375;
int regex_result_376;
int i_377;
int i_378;
_Bool _if_conditional124;
void* right_value163;
char* str_379;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value164;
char* str_380;
_Bool _if_conditional127;
int i_381;
void* right_value165;
char* match_str_382;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value166;
char* str_383;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_363, 0, sizeof(int));
memset(&options_364, 0, sizeof(int));
memset(&str_365, 0, sizeof(char*));
memset(&re_366, 0, sizeof(struct real_pcre8_or_16*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&result_367, 0, sizeof(struct list$1charph*));
memset(&offset_368, 0, sizeof(int));
memset(&ovec_max_369, 0, sizeof(int));
memset(&n_373, 0, sizeof(int));
memset(&options_374, 0, sizeof(int));
memset(&len_375, 0, sizeof(int));
memset(&regex_result_376, 0, sizeof(int));
memset(&i_377, 0, sizeof(int));
memset(&i_378, 0, sizeof(int));
right_value163 = (void*)0;
memset(&str_379, 0, sizeof(char*));
right_value164 = (void*)0;
memset(&str_380, 0, sizeof(char*));
memset(&i_381, 0, sizeof(int));
right_value165 = (void*)0;
memset(&match_str_382, 0, sizeof(char*));
right_value166 = (void*)0;
memset(&str_383, 0, sizeof(char*));
    options_364=reg->options;
    str_365=reg->str;
    re_366=reg->re;
    result_367=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1691, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_368=0;
    ovec_max_369=16;
    int start_370[ovec_max_369];
    memset(&start_370, 0, sizeof(int)    *(ovec_max_369)    );
    int end_371[ovec_max_369];
    memset(&end_371, 0, sizeof(int)    *(ovec_max_369)    );
    int ovec_value_372[ovec_max_369*3];
    memset(&ovec_value_372, 0, sizeof(int)    *(ovec_max_369*3)    );
    n_373=0;
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_374=2097152;
        len_375=strlen(self);
        regex_result_376=pcre_exec(re_366,(struct pcre_extra*)0,self,len_375,offset_368,options_374,ovec_value_372,ovec_max_369*3);
        for(        i_377=0;        i_377<ovec_max_369;        i_377++        ){
            start_370[i_377]=ovec_value_372[i_377*2];
        }
        for(        i_378=0;        i_378<ovec_max_369;        i_378++        ){
            end_371[i_378]=ovec_value_372[i_378*2+1];
        }
        if(_if_conditional124=regex_result_376==1,        _if_conditional124) {
            str_379=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(self,offset_368,start_370[0]))));
            right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_367,(char*)come_increment_ref_count(str_379));
            if(_if_conditional125=offset_368==end_371[0],            _if_conditional125) {
                offset_368++;
            }
            else {
                offset_368=end_371[0];
            }
            str_379 = come_decrement_ref_count2(str_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional126=regex_result_376>1,            _if_conditional126) {
                str_380=(char*)come_increment_ref_count(((char*)(right_value164=charp_substring(self,offset_368,start_370[0]))));
                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_367,(char*)come_increment_ref_count(str_380));
                if(_if_conditional127=offset_368==end_371[0],                _if_conditional127) {
                    offset_368++;
                }
                else {
                    offset_368=end_371[0];
                }
                for(                i_381=1;                i_381<regex_result_376;                i_381++                ){
                    match_str_382=(char*)come_increment_ref_count(((char*)(right_value165=charp_substring(self,start_370[i_381],end_371[i_381]))));
                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_367,(char*)come_increment_ref_count(match_str_382));
                    match_str_382 = come_decrement_ref_count2(match_str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_380 = come_decrement_ref_count2(str_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_373++;
        if(_if_conditional128=maxsplit==n_373,        _if_conditional128) {
            break;
        }
    }
    if(_if_conditional129=offset_368<charp_length(self),    _if_conditional129) {
        str_383=(char*)come_increment_ref_count(((char*)(right_value166=charp_substring(self,offset_368,-1))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_367,(char*)come_increment_ref_count(str_383));
        str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result146__ = __result_obj__ = result_367;
    come_call_finalizer2(list$1charphp_finalize,result_367, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result146__;
    come_call_finalizer2(list$1charphp_finalize,result_367, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_384;
int erro_ofs_385;
int options_386;
char* str_387;
struct real_pcre8_or_16* re_388;
void* right_value167;
char* self2_389;
int ovec_max_390;
int result_394;
int offset_395;
int n_396;
_Bool _while_condtional22;
int options_397;
int len_398;
int regex_result_399;
int i_400;
int i_401;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_385, 0, sizeof(int));
memset(&options_386, 0, sizeof(int));
memset(&str_387, 0, sizeof(char*));
memset(&re_388, 0, sizeof(struct real_pcre8_or_16*));
right_value167 = (void*)0;
memset(&self2_389, 0, sizeof(char*));
memset(&ovec_max_390, 0, sizeof(int));
memset(&result_394, 0, sizeof(int));
memset(&offset_395, 0, sizeof(int));
memset(&n_396, 0, sizeof(int));
memset(&options_397, 0, sizeof(int));
memset(&len_398, 0, sizeof(int));
memset(&regex_result_399, 0, sizeof(int));
memset(&i_400, 0, sizeof(int));
memset(&i_401, 0, sizeof(int));
    options_386=reg->options;
    str_387=reg->str;
    re_388=reg->re;
    self2_389=(char*)come_increment_ref_count(((char*)(right_value167=charp_reverse(self))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_390=16;
    int start_391[ovec_max_390];
    memset(&start_391, 0, sizeof(int)    *(ovec_max_390)    );
    int end_392[ovec_max_390];
    memset(&end_392, 0, sizeof(int)    *(ovec_max_390)    );
    int ovec_value_393[ovec_max_390*3];
    memset(&ovec_value_393, 0, sizeof(int)    *(ovec_max_390*3)    );
    result_394=default_value;
    offset_395=0;
    n_396=0;
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_397=2097152;
        len_398=strlen(self2_389);
        regex_result_399=pcre_exec(re_388,(struct pcre_extra*)0,self2_389,len_398,offset_395,options_397,ovec_value_393,ovec_max_390*3);
        for(        i_400=0;        i_400<ovec_max_390;        i_400++        ){
            start_391[i_400]=ovec_value_393[i_400*2];
        }
        for(        i_401=0;        i_401<ovec_max_390;        i_401++        ){
            end_392[i_401]=ovec_value_393[i_401*2+1];
        }
        if(_if_conditional130=regex_result_399>0,        _if_conditional130) {
            n_396++;
            if(_if_conditional131=offset_395==end_392[0],            _if_conditional131) {
                offset_395++;
            }
            else {
                offset_395=end_392[0];
            }
            if(_if_conditional132=n_396==count,            _if_conditional132) {
                result_394=strlen(self)-end_392[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result147__ = result_394;
    self2_389 = come_decrement_ref_count2(self2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result147__;
    self2_389 = come_decrement_ref_count2(self2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_402;
int ovec_max_403;
const char* err_407;
int erro_ofs_408;
int options_409;
char* str_410;
struct real_pcre8_or_16* re_411;
int n_412;
_Bool _while_condtional23;
int options_413;
int len_414;
int regex_result_415;
int i_416;
int i_417;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool __result148__;
_Bool _if_conditional135;
_Bool __result149__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_402, 0, sizeof(int));
memset(&ovec_max_403, 0, sizeof(int));
memset(&erro_ofs_408, 0, sizeof(int));
memset(&options_409, 0, sizeof(int));
memset(&str_410, 0, sizeof(char*));
memset(&re_411, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_412, 0, sizeof(int));
memset(&options_413, 0, sizeof(int));
memset(&len_414, 0, sizeof(int));
memset(&regex_result_415, 0, sizeof(int));
memset(&i_416, 0, sizeof(int));
memset(&i_417, 0, sizeof(int));
    offset_402=0;
    ovec_max_403=16;
    int start_404[ovec_max_403];
    memset(&start_404, 0, sizeof(int)    *(ovec_max_403)    );
    int end_405[ovec_max_403];
    memset(&end_405, 0, sizeof(int)    *(ovec_max_403)    );
    int ovec_value_406[ovec_max_403*3];
    memset(&ovec_value_406, 0, sizeof(int)    *(ovec_max_403*3)    );
    options_409=reg->options;
    str_410=reg->str;
    re_411=reg->re;
    n_412=0;
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_413=2097152;
        len_414=strlen(self);
        regex_result_415=pcre_exec(re_411,(struct pcre_extra*)0,self,len_414,offset_402,options_413,ovec_value_406,ovec_max_403*3);
        for(        i_416=0;        i_416<ovec_max_403;        i_416++        ){
            start_404[i_416]=ovec_value_406[i_416*2];
        }
        for(        i_417=0;        i_417<ovec_max_403;        i_417++        ){
            end_405[i_417]=ovec_value_406[i_417*2+1];
        }
        if(_if_conditional133=regex_result_415>0,        _if_conditional133) {
            n_412++;
            if(_if_conditional134=count==n_412,            _if_conditional134) {
                __result148__ = (_Bool)1;
                return __result148__;
            }
            if(_if_conditional135=offset_402==end_405[0],            _if_conditional135) {
                offset_402++;
            }
            else {
                offset_402=end_405[0];
            }
        }
        else {
            __result149__ = (_Bool)0;
            return __result149__;
        }
    }
    __result150__ = (_Bool)0;
    return __result150__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_418;
int ovec_max_419;
const char* err_423;
int erro_ofs_424;
int options_425;
char* str_426;
struct real_pcre8_or_16* re_427;
void* right_value168;
void* right_value169;
struct buffer* result_428;
_Bool _while_condtional24;
int options_429;
int len_430;
int regex_result_431;
int i_432;
int i_433;
_Bool _if_conditional136;
void* right_value170;
char* str_434;
void* right_value171;
void* right_value172;
struct list$1charph* group_strings_435;
void* right_value173;
char* match_string_436;
void* right_value174;
void* right_value175;
char* block_result_437;
_Bool _if_conditional137;
void* right_value176;
char* __result151__;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value177;
char* str_438;
_Bool _if_conditional140;
void* right_value178;
char* str_439;
_Bool _if_conditional141;
void* right_value179;
void* right_value180;
struct list$1charph* group_strings_440;
int i_441;
void* right_value181;
char* match_string_442;
void* right_value182;
char* match_string_443;
void* right_value183;
char* block_result_444;
_Bool _if_conditional142;
void* right_value184;
char* __result152__;
_Bool _if_conditional143;
void* right_value185;
char* str_445;
void* right_value186;
char* str_446;
void* right_value187;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_418, 0, sizeof(int));
memset(&ovec_max_419, 0, sizeof(int));
memset(&erro_ofs_424, 0, sizeof(int));
memset(&options_425, 0, sizeof(int));
memset(&str_426, 0, sizeof(char*));
memset(&re_427, 0, sizeof(struct real_pcre8_or_16*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&result_428, 0, sizeof(struct buffer*));
memset(&options_429, 0, sizeof(int));
memset(&len_430, 0, sizeof(int));
memset(&regex_result_431, 0, sizeof(int));
memset(&i_432, 0, sizeof(int));
memset(&i_433, 0, sizeof(int));
right_value170 = (void*)0;
memset(&str_434, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&group_strings_435, 0, sizeof(struct list$1charph*));
right_value173 = (void*)0;
memset(&match_string_436, 0, sizeof(char*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&block_result_437, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&str_438, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&str_439, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&group_strings_440, 0, sizeof(struct list$1charph*));
memset(&i_441, 0, sizeof(int));
right_value181 = (void*)0;
memset(&match_string_442, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&match_string_443, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&block_result_444, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&str_445, 0, sizeof(char*));
right_value186 = (void*)0;
memset(&str_446, 0, sizeof(char*));
right_value187 = (void*)0;
    offset_418=0;
    ovec_max_419=16;
    int start_420[ovec_max_419];
    memset(&start_420, 0, sizeof(int)    *(ovec_max_419)    );
    int end_421[ovec_max_419];
    memset(&end_421, 0, sizeof(int)    *(ovec_max_419)    );
    int ovec_value_422[ovec_max_419*3];
    memset(&ovec_value_422, 0, sizeof(int)    *(ovec_max_419*3)    );
    options_425=reg->options;
    str_426=reg->str;
    re_427=reg->re;
    result_428=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1903, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional24=(_Bool)1,    _while_condtional24) {
        options_429=2097152;
        len_430=strlen(self);
        regex_result_431=pcre_exec(re_427,(struct pcre_extra*)0,self,len_430,offset_418,options_429,ovec_value_422,ovec_max_419*3);
        for(        i_432=0;        i_432<ovec_max_419;        i_432++        ){
            start_420[i_432]=ovec_value_422[i_432*2];
        }
        for(        i_433=0;        i_433<ovec_max_419;        i_433++        ){
            end_421[i_433]=ovec_value_422[i_433*2+1];
        }
        if(_if_conditional136=regex_result_431==1,        _if_conditional136) {
            str_434=(char*)come_increment_ref_count(((char*)(right_value170=charp_substring(self,offset_418,start_420[0]))));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_428,str_434);
            group_strings_435=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1923, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            match_string_436=(char*)come_increment_ref_count(((char*)(right_value173=charp_substring(self,start_420[0],end_421[0]))));
            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_435,(char*)come_increment_ref_count(((char*)(right_value174=charp_substring(self,start_420[0],end_421[0])))));
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_437=(char*)come_increment_ref_count(((char*)(right_value175=block(parent,match_string_436,group_strings_435))));
            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional137=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional137) {
                __result151__ = __result_obj__ = ((char*)(right_value176=buffer_to_string(result_428)));
                str_434 = come_decrement_ref_count2(str_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_435, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_436 = come_decrement_ref_count2(match_string_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_437 = come_decrement_ref_count2(block_result_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,result_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result151__;
            }
            buffer_append_str(result_428,block_result_437);
            if(_if_conditional138=offset_418==end_421[0],            _if_conditional138) {
                offset_418++;
            }
            else {
                offset_418=end_421[0];
            }
            if(_if_conditional139=!reg->global,            _if_conditional139) {
                str_438=(char*)come_increment_ref_count(((char*)(right_value177=charp_substring(self,offset_418,-1))));
                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_428,str_438);
                str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_434 = come_decrement_ref_count2(str_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_435, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_436 = come_decrement_ref_count2(match_string_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_437 = come_decrement_ref_count2(block_result_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_434 = come_decrement_ref_count2(str_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_435, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            match_string_436 = come_decrement_ref_count2(match_string_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_437 = come_decrement_ref_count2(block_result_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional140=regex_result_431>1,            _if_conditional140) {
                str_439=(char*)come_increment_ref_count(((char*)(right_value178=charp_substring(self,offset_418,start_420[0]))));
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_428,str_439);
                if(_if_conditional141=offset_418==end_421[0],                _if_conditional141) {
                    offset_418++;
                }
                else {
                    offset_418=end_421[0];
                }
                group_strings_440=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value180=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1962, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_441=1;                i_441<regex_result_431;                i_441++                ){
                    match_string_442=(char*)come_increment_ref_count(((char*)(right_value181=charp_substring(self,start_420[i_441],end_421[i_441]))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_440,(char*)come_increment_ref_count(match_string_442));
                    match_string_442 = come_decrement_ref_count2(match_string_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_443=(char*)come_increment_ref_count(((char*)(right_value182=charp_substring(self,start_420[0],end_421[0]))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_444=(char*)come_increment_ref_count(((char*)(right_value183=block(parent,match_string_443,group_strings_440))));
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional142=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional142) {
                    __result152__ = __result_obj__ = ((char*)(right_value184=buffer_to_string(result_428)));
                    str_439 = come_decrement_ref_count2(str_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_443 = come_decrement_ref_count2(match_string_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_444 = come_decrement_ref_count2(block_result_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,result_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result152__;
                }
                buffer_append_str(result_428,block_result_444);
                if(_if_conditional143=!reg->global,                _if_conditional143) {
                    str_445=(char*)come_increment_ref_count(((char*)(right_value185=charp_substring(self,offset_418,-1))));
                    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_428,str_445);
                    str_445 = come_decrement_ref_count2(str_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_439 = come_decrement_ref_count2(str_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_443 = come_decrement_ref_count2(match_string_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_444 = come_decrement_ref_count2(block_result_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_445 = come_decrement_ref_count2(str_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_439 = come_decrement_ref_count2(str_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_443 = come_decrement_ref_count2(match_string_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_444 = come_decrement_ref_count2(block_result_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_446=(char*)come_increment_ref_count(((char*)(right_value186=charp_substring(self,offset_418,-1))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_428,str_446);
                str_446 = come_decrement_ref_count2(str_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_446 = come_decrement_ref_count2(str_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result153__ = __result_obj__ = ((char*)(right_value187=buffer_to_string(result_428)));
    come_call_finalizer2(buffer_finalize,result_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
    come_call_finalizer2(buffer_finalize,result_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_447;
int ovec_max_448;
const char* err_452;
int erro_ofs_453;
int options_454;
char* str_455;
struct real_pcre8_or_16* re_456;
void* right_value188;
void* right_value189;
struct buffer* result_457;
int n_458;
_Bool _while_condtional25;
int options_459;
int len_460;
int regex_result_461;
int i_462;
int i_463;
_Bool _if_conditional144;
void* right_value190;
char* str_464;
void* right_value191;
void* right_value192;
struct list$1charph* group_strings_465;
void* right_value193;
void* right_value194;
char* match_string_466;
void* right_value195;
char* block_result_467;
_Bool _if_conditional145;
void* right_value196;
char* __result154__;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value197;
char* str_468;
_Bool _if_conditional148;
void* right_value198;
char* str_469;
_Bool _if_conditional149;
void* right_value199;
char* str_470;
_Bool _if_conditional150;
void* right_value200;
void* right_value201;
struct list$1charph* group_strings_471;
int i_472;
void* right_value202;
char* match_string_473;
void* right_value203;
char* match_string_474;
void* right_value204;
char* block_result_475;
_Bool _if_conditional151;
void* right_value205;
char* __result155__;
_Bool _if_conditional152;
void* right_value206;
char* str_476;
_Bool _if_conditional153;
void* right_value207;
char* str_477;
void* right_value208;
char* str_478;
void* right_value209;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_447, 0, sizeof(int));
memset(&ovec_max_448, 0, sizeof(int));
memset(&erro_ofs_453, 0, sizeof(int));
memset(&options_454, 0, sizeof(int));
memset(&str_455, 0, sizeof(char*));
memset(&re_456, 0, sizeof(struct real_pcre8_or_16*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&result_457, 0, sizeof(struct buffer*));
memset(&n_458, 0, sizeof(int));
memset(&options_459, 0, sizeof(int));
memset(&len_460, 0, sizeof(int));
memset(&regex_result_461, 0, sizeof(int));
memset(&i_462, 0, sizeof(int));
memset(&i_463, 0, sizeof(int));
right_value190 = (void*)0;
memset(&str_464, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&group_strings_465, 0, sizeof(struct list$1charph*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&match_string_466, 0, sizeof(char*));
right_value195 = (void*)0;
memset(&block_result_467, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&str_468, 0, sizeof(char*));
right_value198 = (void*)0;
memset(&str_469, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&str_470, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&group_strings_471, 0, sizeof(struct list$1charph*));
memset(&i_472, 0, sizeof(int));
right_value202 = (void*)0;
memset(&match_string_473, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&match_string_474, 0, sizeof(char*));
right_value204 = (void*)0;
memset(&block_result_475, 0, sizeof(char*));
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&str_476, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&str_477, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&str_478, 0, sizeof(char*));
right_value209 = (void*)0;
    offset_447=0;
    ovec_max_448=16;
    int start_449[ovec_max_448];
    memset(&start_449, 0, sizeof(int)    *(ovec_max_448)    );
    int end_450[ovec_max_448];
    memset(&end_450, 0, sizeof(int)    *(ovec_max_448)    );
    int ovec_value_451[ovec_max_448*3];
    memset(&ovec_value_451, 0, sizeof(int)    *(ovec_max_448*3)    );
    options_454=reg->options;
    str_455=reg->str;
    re_456=reg->re;
    result_457=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value189=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value188=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2011, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    n_458=0;
    while(_while_condtional25=(_Bool)1,    _while_condtional25) {
        options_459=2097152;
        len_460=strlen(self);
        regex_result_461=pcre_exec(re_456,(struct pcre_extra*)0,self,len_460,offset_447,options_459,ovec_value_451,ovec_max_448*3);
        for(        i_462=0;        i_462<ovec_max_448;        i_462++        ){
            start_449[i_462]=ovec_value_451[i_462*2];
        }
        for(        i_463=0;        i_463<ovec_max_448;        i_463++        ){
            end_450[i_463]=ovec_value_451[i_463*2+1];
        }
        if(_if_conditional144=regex_result_461==1,        _if_conditional144) {
            n_458++;
            str_464=(char*)come_increment_ref_count(((char*)(right_value190=charp_substring(self,offset_447,start_449[0]))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_457,str_464);
            group_strings_465=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2034, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_465,(char*)come_increment_ref_count(((char*)(right_value193=charp_substring(self,start_449[0],end_450[0])))));
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_string_466=(char*)come_increment_ref_count(((char*)(right_value194=charp_substring(self,start_449[0],end_450[0]))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_467=(char*)come_increment_ref_count(((char*)(right_value195=block(parent,match_string_466,group_strings_465))));
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional145=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional145) {
                __result154__ = __result_obj__ = ((char*)(right_value196=buffer_to_string(result_457)));
                str_464 = come_decrement_ref_count2(str_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_466 = come_decrement_ref_count2(match_string_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_467 = come_decrement_ref_count2(block_result_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,result_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result154__;
            }
            buffer_append_str(result_457,block_result_467);
            if(_if_conditional146=offset_447==end_450[0],            _if_conditional146) {
                offset_447++;
            }
            else {
                offset_447=end_450[0];
            }
            if(_if_conditional147=!reg->global,            _if_conditional147) {
                str_468=(char*)come_increment_ref_count(((char*)(right_value197=charp_substring(self,offset_447,-1))));
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_457,str_468);
                str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_464 = come_decrement_ref_count2(str_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_466 = come_decrement_ref_count2(match_string_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_467 = come_decrement_ref_count2(block_result_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional148=n_458==count,            _if_conditional148) {
                str_469=(char*)come_increment_ref_count(((char*)(right_value198=charp_substring(self,offset_447,-1))));
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_457,str_469);
                str_469 = come_decrement_ref_count2(str_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_464 = come_decrement_ref_count2(str_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_466 = come_decrement_ref_count2(match_string_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_467 = come_decrement_ref_count2(block_result_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_469 = come_decrement_ref_count2(str_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_464 = come_decrement_ref_count2(str_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            match_string_466 = come_decrement_ref_count2(match_string_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_467 = come_decrement_ref_count2(block_result_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional149=regex_result_461>1,            _if_conditional149) {
                n_458++;
                str_470=(char*)come_increment_ref_count(((char*)(right_value199=charp_substring(self,offset_447,start_449[0]))));
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_457,str_470);
                if(_if_conditional150=offset_447==end_450[0],                _if_conditional150) {
                    offset_447++;
                }
                else {
                    offset_447=end_450[0];
                }
                group_strings_471=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2081, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_472=1;                i_472<regex_result_461;                i_472++                ){
                    match_string_473=(char*)come_increment_ref_count(((char*)(right_value202=charp_substring(self,start_449[i_472],end_450[i_472]))));
                    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_471,(char*)come_increment_ref_count(match_string_473));
                    match_string_473 = come_decrement_ref_count2(match_string_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_474=(char*)come_increment_ref_count(((char*)(right_value203=charp_substring(self,start_449[0],end_450[0]))));
                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_475=(char*)come_increment_ref_count(((char*)(right_value204=block(parent,match_string_474,group_strings_471))));
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional151=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional151) {
                    __result155__ = __result_obj__ = ((char*)(right_value205=buffer_to_string(result_457)));
                    str_470 = come_decrement_ref_count2(str_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_474 = come_decrement_ref_count2(match_string_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_475 = come_decrement_ref_count2(block_result_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,result_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result155__;
                }
                buffer_append_str(result_457,block_result_475);
                if(_if_conditional152=!reg->global,                _if_conditional152) {
                    str_476=(char*)come_increment_ref_count(((char*)(right_value206=charp_substring(self,offset_447,-1))));
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_457,str_476);
                    str_476 = come_decrement_ref_count2(str_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_470 = come_decrement_ref_count2(str_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_474 = come_decrement_ref_count2(match_string_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_475 = come_decrement_ref_count2(block_result_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_476 = come_decrement_ref_count2(str_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional153=n_458==count,                _if_conditional153) {
                    str_477=(char*)come_increment_ref_count(((char*)(right_value207=charp_substring(self,offset_447,-1))));
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_457,str_477);
                    str_477 = come_decrement_ref_count2(str_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_470 = come_decrement_ref_count2(str_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_474 = come_decrement_ref_count2(match_string_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_475 = come_decrement_ref_count2(block_result_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_477 = come_decrement_ref_count2(str_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_470 = come_decrement_ref_count2(str_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_474 = come_decrement_ref_count2(match_string_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_475 = come_decrement_ref_count2(block_result_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_478=(char*)come_increment_ref_count(((char*)(right_value208=charp_substring(self,offset_447,-1))));
                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_457,str_478);
                str_478 = come_decrement_ref_count2(str_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_478 = come_decrement_ref_count2(str_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result156__ = __result_obj__ = ((char*)(right_value209=buffer_to_string(result_457)));
    come_call_finalizer2(buffer_finalize,result_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
    come_call_finalizer2(buffer_finalize,result_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

unsigned int wchar_tp_get_hash_key(int* value){
void* __result_obj__;
int result_479;
int* p_480;
_Bool _while_condtional26;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_479, 0, sizeof(int));
memset(&p_480, 0, sizeof(int*));
    result_479=0;
    p_480=value;
    while(_while_condtional26=*p_480,    _while_condtional26) {
        result_479+=(*p_480);
        p_480++;
    }
    __result157__ = result_479;
    return __result157__;
}

_Bool wstring_equals(int* left, int* right){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = wcscmp(left,right)==0;
    return __result159__;
}

_Bool wchar_t_operator_equals(int left, int right){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = left==right;
    return __result161__;
}

_Bool wchar_t_operator_not_equals(int left, int right){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = left!=right;
    return __result162__;
}

unsigned int wchar_t_get_hash_key(int value){
void* __result_obj__;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = value;
    return __result163__;
}

_Bool wchar_t_equals(int left, int right){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = left==right;
    return __result164__;
}

char* wchar_t_to_string(int wc){
void* __result_obj__;
void* right_value210;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    __result165__ = __result_obj__ = ((char*)(right_value210=xsprintf("%ls",wc)));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

char* string_chomp(char* str){
void* __result_obj__;
void* right_value211;
char* result_481;
_Bool _if_conditional154;
void* right_value212;
char* __result166__;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&result_481, 0, sizeof(char*));
right_value212 = (void*)0;
    result_481=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(str))));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional154=result_481[string_length(result_481)-1]==10,    _if_conditional154) {
        __result166__ = __result_obj__ = ((char*)(right_value212=string_substring(result_481,0,-2)));
        result_481 = come_decrement_ref_count2(result_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result166__;
    }
    __result167__ = __result_obj__ = result_481;
    result_481 = come_decrement_ref_count2(result_481, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result167__;
    result_481 = come_decrement_ref_count2(result_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

