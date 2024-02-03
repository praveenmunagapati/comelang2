// source head
typedef long int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    long int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(long int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,long int);
typedef long int (*cookie_write_function_t)(void*,const char*,long int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,long int);
    long int (*write)(void*,const char*,long int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
typedef int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX7 lldiv_t;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned long int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX8
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX8 __sigset_t;
typedef struct anonymous_typeX8 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX9
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX9 fd_set;
typedef long int fd_mask;
typedef long int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};
typedef union anonymous_typeZ10 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short short __spins;
    short short __elision;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX12
{
    int __data;
};
typedef struct anonymous_typeX12 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ13
{
char __size[4];
int __align;
};
typedef union anonymous_typeZ13 pthread_mutexattr_t;
union anonymous_typeZ14
{
char __size[4];
int __align;
};
typedef union anonymous_typeZ14 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[56];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[40];
long int __align;
};
typedef union anonymous_typeZ15 pthread_mutex_t;
union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ16 pthread_cond_t;
union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlock_t;
union anonymous_typeZ18
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ18 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ19
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ19 pthread_barrier_t;
union anonymous_typeZ20
{
char __size[4];
int __align;
};
typedef union anonymous_typeZ20 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
typedef char* string;
struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};
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
struct optional$2intbool
{
    int v1;
    _Bool v2;
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
struct optional$2boolbool
{
    _Bool v1;
    _Bool v2;
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
struct optional$2charphbool
{
    char* v1;
    _Bool v2;
};
struct optional$2intpbool
{
    int* v1;
    _Bool v2;
};
struct optional$2list$1charphphbool
{
    struct list$1charph* v1;
    _Bool v2;
};
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre16;
typedef struct real_pcre16 pcre16;
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
typedef unsigned int wint_t;
typedef struct anonymous_typeX2 mbstate_t;
struct tm;
typedef int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre* re;
};
typedef long int ptrdiff_t;
struct anonymous_typeX21
{
    long long __max_align_ll;
    long double __max_align_ld;
};
typedef struct anonymous_typeX21 max_align_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(long int);
extern void* (*GC_oom_fn)(long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY22 { GC_EVENT_START
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
typedef enum anonymous_typeY22 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY22);
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
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY23 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY23 GC_ToggleRefStatus;
typedef enum anonymous_typeY23 (*GC_toggleref_func)(void*);
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

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, long int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, long int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, long int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, long int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, long int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc99_scanf(const char* __format, ...);

int __isoc99_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc99_vscanf(const char* __format, va_list __arg);

int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, long int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

long int fread(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

long int fread_unlocked(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite_unlocked(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

long int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

long long int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

long long int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);

long long int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, long int __size, const char* __format, double __f);

int strfromf(char* __dest, long int __size, const char* __format, float __f);

int strfroml(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32(char* __dest, long int __size, const char* __format, float __f);

int strfromf64(char* __dest, long int __size, const char* __format, double __f);

int strfromf32x(char* __dest, long int __size, const char* __format, double __f);

int strfromf64x(char* __dest, long int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, long int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, long int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void* alloca(long int __size);

void* valloc(long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

char* getenv(const char* __name);

char* secure_getenv(const char* __name);

int putenv(char* __string);

int setenv(const char* __name, const char* __value, int __replace);

int unsetenv(const char* __name);

int clearenv();

char* mktemp(char* __template);

int mkstemp(char* __template);

int mkstemp64(char* __template);

int mkstemps(char* __template, int __suffixlen);

int mkstemps64(char* __template, int __suffixlen);

char* mkdtemp(char* __template);

int mkostemp(char* __template, int __flags);

int mkostemp64(char* __template, int __flags);

int mkostemps(char* __template, int __suffixlen, int __flags);

int mkostemps64(char* __template, int __suffixlen, int __flags);

int system(const char* __command);

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

long long int llabs(long long int __x);

struct anonymous_typeX5 div(int __numer, int __denom);

struct anonymous_typeX6 ldiv(long int __numer, long int __denom);

struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int mblen(const char* __s, long int __n);

int mbtowc(int* __pwc, const char* __s, long int __n);

int wctomb(char* __s, int __wchar);

long int mbstowcs(int* __pwcs, const char* __s, long int __n);

long int wcstombs(char* __s, const int* __pwcs, long int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

void* memcpy(void* __dest, const void* __src, long int __n);

void* memmove(void* __dest, const void* __src, long int __n);

void* memccpy(void* __dest, const void* __src, int __c, long int __n);

void* memset(void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

int __memcmpeq(const void* __s1, const void* __s2, long int __n);

void* memchr(const void* __s, int __c, long int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, long int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, long int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, long int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, long int __n);

int strcoll(const char* __s1, const char* __s2);

long int strxfrm(char* __dest, const char* __src, long int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

long int strxfrm_l(char* __dest, const char* __src, long int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, long int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

long int strcspn(const char* __s, const char* __reject);

long int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, long int __haystacklen, const void* __needle, long int __needlelen);

void* __mempcpy(void* __dest, const void* __src, long int __n);

void* mempcpy(void* __dest, const void* __src, long int __n);

long int strlen(const char* __s);

long int strnlen(const char* __string, long int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, long int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, long int __n);

void bcopy(const void* __src, void* __dest, long int __n);

void bzero(void* __s, long int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(long long int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, long int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, long int __n);

char* stpncpy(char* __dest, const char* __src, long int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, long int __n);

char* basename(const char* __filename);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void stackframe();

void exception_stackframe();

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

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

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

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

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

struct optional$2boolbool* charp_equals(char* self, char* right);

struct optional$2boolbool* string_equals(char* self, char* right);

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

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2intpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* string_puts(char* self);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

struct optional$2charphbool* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct real_pcre* pcre_compile(const char* anonymous_var_nameX134, int anonymous_var_nameX135, const char** anonymous_var_nameX136, int* anonymous_var_nameX137, const unsigned char* anonymous_var_nameX138);

struct real_pcre16* pcre16_compile(const unsigned short int* anonymous_var_nameX139, int anonymous_var_nameX140, const char** anonymous_var_nameX141, int* anonymous_var_nameX142, const unsigned char* anonymous_var_nameX143);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX144, int anonymous_var_nameX145, const char** anonymous_var_nameX146, int* anonymous_var_nameX147, const unsigned char* anonymous_var_nameX148);

struct real_pcre* pcre_compile2(const char* anonymous_var_nameX149, int anonymous_var_nameX150, int* anonymous_var_nameX151, const char** anonymous_var_nameX152, int* anonymous_var_nameX153, const unsigned char* anonymous_var_nameX154);

struct real_pcre16* pcre16_compile2(const unsigned short int* anonymous_var_nameX155, int anonymous_var_nameX156, int* anonymous_var_nameX157, const char** anonymous_var_nameX158, int* anonymous_var_nameX159, const unsigned char* anonymous_var_nameX160);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX161, int anonymous_var_nameX162, int* anonymous_var_nameX163, const char** anonymous_var_nameX164, int* anonymous_var_nameX165, const unsigned char* anonymous_var_nameX166);

int pcre_config(int anonymous_var_nameX167, void* anonymous_var_nameX168);

int pcre16_config(int anonymous_var_nameX169, void* anonymous_var_nameX170);

int pcre32_config(int anonymous_var_nameX171, void* anonymous_var_nameX172);

int pcre_copy_named_substring(const struct real_pcre* anonymous_var_nameX173, const char* anonymous_var_nameX174, int* anonymous_var_nameX175, int anonymous_var_nameX176, const char* anonymous_var_nameX177, char* anonymous_var_nameX178, int anonymous_var_nameX179);

int pcre16_copy_named_substring(const struct real_pcre16* anonymous_var_nameX180, const unsigned short int* anonymous_var_nameX181, int* anonymous_var_nameX182, int anonymous_var_nameX183, const unsigned short int* anonymous_var_nameX184, unsigned short int* anonymous_var_nameX185, int anonymous_var_nameX186);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX187, const unsigned int* anonymous_var_nameX188, int* anonymous_var_nameX189, int anonymous_var_nameX190, const unsigned int* anonymous_var_nameX191, unsigned int* anonymous_var_nameX192, int anonymous_var_nameX193);

int pcre_copy_substring(const char* anonymous_var_nameX194, int* anonymous_var_nameX195, int anonymous_var_nameX196, int anonymous_var_nameX197, char* anonymous_var_nameX198, int anonymous_var_nameX199);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, int anonymous_var_nameX203, unsigned short int* anonymous_var_nameX204, int anonymous_var_nameX205);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX206, int* anonymous_var_nameX207, int anonymous_var_nameX208, int anonymous_var_nameX209, unsigned int* anonymous_var_nameX210, int anonymous_var_nameX211);

int pcre_dfa_exec(const struct real_pcre* anonymous_var_nameX212, const struct pcre_extra* anonymous_var_nameX213, const char* anonymous_var_nameX214, int anonymous_var_nameX215, int anonymous_var_nameX216, int anonymous_var_nameX217, int* anonymous_var_nameX218, int anonymous_var_nameX219, int* anonymous_var_nameX220, int anonymous_var_nameX221);

int pcre16_dfa_exec(const struct real_pcre16* anonymous_var_nameX222, const struct pcre16_extra* anonymous_var_nameX223, const unsigned short int* anonymous_var_nameX224, int anonymous_var_nameX225, int anonymous_var_nameX226, int anonymous_var_nameX227, int* anonymous_var_nameX228, int anonymous_var_nameX229, int* anonymous_var_nameX230, int anonymous_var_nameX231);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX232, const struct pcre32_extra* anonymous_var_nameX233, const unsigned int* anonymous_var_nameX234, int anonymous_var_nameX235, int anonymous_var_nameX236, int anonymous_var_nameX237, int* anonymous_var_nameX238, int anonymous_var_nameX239, int* anonymous_var_nameX240, int anonymous_var_nameX241);

int pcre_exec(const struct real_pcre* anonymous_var_nameX242, const struct pcre_extra* anonymous_var_nameX243, const char* anonymous_var_nameX244, int anonymous_var_nameX245, int anonymous_var_nameX246, int anonymous_var_nameX247, int* anonymous_var_nameX248, int anonymous_var_nameX249);

int pcre16_exec(const struct real_pcre16* anonymous_var_nameX250, const struct pcre16_extra* anonymous_var_nameX251, const unsigned short int* anonymous_var_nameX252, int anonymous_var_nameX253, int anonymous_var_nameX254, int anonymous_var_nameX255, int* anonymous_var_nameX256, int anonymous_var_nameX257);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX258, const struct pcre32_extra* anonymous_var_nameX259, const unsigned int* anonymous_var_nameX260, int anonymous_var_nameX261, int anonymous_var_nameX262, int anonymous_var_nameX263, int* anonymous_var_nameX264, int anonymous_var_nameX265);

int pcre_jit_exec(const struct real_pcre* anonymous_var_nameX266, const struct pcre_extra* anonymous_var_nameX267, const char* anonymous_var_nameX268, int anonymous_var_nameX269, int anonymous_var_nameX270, int anonymous_var_nameX271, int* anonymous_var_nameX272, int anonymous_var_nameX273, struct real_pcre_jit_stack* anonymous_var_nameX274);

int pcre16_jit_exec(const struct real_pcre16* anonymous_var_nameX275, const struct pcre16_extra* anonymous_var_nameX276, const unsigned short int* anonymous_var_nameX277, int anonymous_var_nameX278, int anonymous_var_nameX279, int anonymous_var_nameX280, int* anonymous_var_nameX281, int anonymous_var_nameX282, struct real_pcre16_jit_stack* anonymous_var_nameX283);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX284, const struct pcre32_extra* anonymous_var_nameX285, const unsigned int* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288, int anonymous_var_nameX289, int* anonymous_var_nameX290, int anonymous_var_nameX291, struct real_pcre32_jit_stack* anonymous_var_nameX292);

void pcre_free_substring(const char* anonymous_var_nameX293);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX294);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX295);

void pcre_free_substring_list(const char** anonymous_var_nameX296);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX297);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX298);

int pcre_fullinfo(const struct real_pcre* anonymous_var_nameX299, const struct pcre_extra* anonymous_var_nameX300, int anonymous_var_nameX301, void* anonymous_var_nameX302);

int pcre16_fullinfo(const struct real_pcre16* anonymous_var_nameX303, const struct pcre16_extra* anonymous_var_nameX304, int anonymous_var_nameX305, void* anonymous_var_nameX306);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX307, const struct pcre32_extra* anonymous_var_nameX308, int anonymous_var_nameX309, void* anonymous_var_nameX310);

int pcre_get_named_substring(const struct real_pcre* anonymous_var_nameX311, const char* anonymous_var_nameX312, int* anonymous_var_nameX313, int anonymous_var_nameX314, const char* anonymous_var_nameX315, const char** anonymous_var_nameX316);

int pcre16_get_named_substring(const struct real_pcre16* anonymous_var_nameX317, const unsigned short int* anonymous_var_nameX318, int* anonymous_var_nameX319, int anonymous_var_nameX320, const unsigned short int* anonymous_var_nameX321, const unsigned short int** anonymous_var_nameX322);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX323, const unsigned int* anonymous_var_nameX324, int* anonymous_var_nameX325, int anonymous_var_nameX326, const unsigned int* anonymous_var_nameX327, const unsigned int** anonymous_var_nameX328);

int pcre_get_stringnumber(const struct real_pcre* anonymous_var_nameX329, const char* anonymous_var_nameX330);

int pcre16_get_stringnumber(const struct real_pcre16* anonymous_var_nameX331, const unsigned short int* anonymous_var_nameX332);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX333, const unsigned int* anonymous_var_nameX334);

int pcre_get_stringtable_entries(const struct real_pcre* anonymous_var_nameX335, const char* anonymous_var_nameX336, char** anonymous_var_nameX337, char** anonymous_var_nameX338);

int pcre16_get_stringtable_entries(const struct real_pcre16* anonymous_var_nameX339, const unsigned short int* anonymous_var_nameX340, unsigned short int** anonymous_var_nameX341, unsigned short int** anonymous_var_nameX342);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX343, const unsigned int* anonymous_var_nameX344, unsigned int** anonymous_var_nameX345, unsigned int** anonymous_var_nameX346);

int pcre_get_substring(const char* anonymous_var_nameX347, int* anonymous_var_nameX348, int anonymous_var_nameX349, int anonymous_var_nameX350, const char** anonymous_var_nameX351);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX352, int* anonymous_var_nameX353, int anonymous_var_nameX354, int anonymous_var_nameX355, const unsigned short int** anonymous_var_nameX356);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX357, int* anonymous_var_nameX358, int anonymous_var_nameX359, int anonymous_var_nameX360, const unsigned int** anonymous_var_nameX361);

int pcre_get_substring_list(const char* anonymous_var_nameX362, int* anonymous_var_nameX363, int anonymous_var_nameX364, const char*** anonymous_var_nameX365);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX366, int* anonymous_var_nameX367, int anonymous_var_nameX368, const unsigned short int*** anonymous_var_nameX369);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX370, int* anonymous_var_nameX371, int anonymous_var_nameX372, const unsigned int*** anonymous_var_nameX373);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre* anonymous_var_nameX374, int anonymous_var_nameX375);

int pcre16_refcount(struct real_pcre16* anonymous_var_nameX376, int anonymous_var_nameX377);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX378, int anonymous_var_nameX379);

struct pcre_extra* pcre_study(const struct real_pcre* anonymous_var_nameX380, int anonymous_var_nameX381, const char** anonymous_var_nameX382);

struct pcre16_extra* pcre16_study(const struct real_pcre16* anonymous_var_nameX383, int anonymous_var_nameX384, const char** anonymous_var_nameX385);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX386, int anonymous_var_nameX387, const char** anonymous_var_nameX388);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX389);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX390);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX391);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre* anonymous_var_nameX392, struct pcre_extra* anonymous_var_nameX393, const unsigned char* anonymous_var_nameX394);

int pcre16_pattern_to_host_byte_order(struct real_pcre16* anonymous_var_nameX395, struct pcre16_extra* anonymous_var_nameX396, const unsigned char* anonymous_var_nameX397);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX398, struct pcre32_extra* anonymous_var_nameX399, const unsigned char* anonymous_var_nameX400);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX401, const unsigned short int* anonymous_var_nameX402, int anonymous_var_nameX403, int* anonymous_var_nameX404, int anonymous_var_nameX405);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX406, const unsigned int* anonymous_var_nameX407, int anonymous_var_nameX408, int* anonymous_var_nameX409, int anonymous_var_nameX410);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX411, int anonymous_var_nameX412);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX413, int anonymous_var_nameX414);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX415, int anonymous_var_nameX416);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX417);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX418);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX419);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX420, struct real_pcre_jit_stack* (*anonymous_var_nameX421)(void*), void* anonymous_var_nameX422);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX423, struct real_pcre16_jit_stack* (*anonymous_var_nameX424)(void*), void* anonymous_var_nameX425);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX426, struct real_pcre32_jit_stack* (*anonymous_var_nameX427)(void*), void* anonymous_var_nameX428);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

int* wcscpy(int* __dest, const int* __src);

int* wcsncpy(int* __dest, const int* __src, long int __n);

int* wcscat(int* __dest, const int* __src);

int* wcsncat(int* __dest, const int* __src, long int __n);

int wcscmp(const int* __s1, const int* __s2);

int wcsncmp(const int* __s1, const int* __s2, long int __n);

int wcscasecmp(const int* __s1, const int* __s2);

int wcsncasecmp(const int* __s1, const int* __s2, long int __n);

int wcscasecmp_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);

int wcsncasecmp_l(const int* __s1, const int* __s2, long int __n, struct __locale_struct* __loc);

int wcscoll(const int* __s1, const int* __s2);

long int wcsxfrm(int* __s1, const int* __s2, long int __n);

int wcscoll_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);

long int wcsxfrm_l(int* __s1, const int* __s2, long int __n, struct __locale_struct* __loc);

int* wcsdup(const int* __s);

int* wcschr(const int* __wcs, int __wc);

int* wcsrchr(const int* __wcs, int __wc);

int* wcschrnul(const int* __s, int __wc);

long int wcscspn(const int* __wcs, const int* __reject);

long int wcsspn(const int* __wcs, const int* __accept);

int* wcspbrk(const int* __wcs, const int* __accept);

int* wcsstr(const int* __haystack, const int* __needle);

int* wcstok(int* __s, const int* __delim, int** __ptr);

long int wcslen(const int* __s);

int* wcswcs(const int* __haystack, const int* __needle);

long int wcsnlen(const int* __s, long int __maxlen);

int* wmemchr(const int* __s, int __c, long int __n);

int wmemcmp(const int* __s1, const int* __s2, long int __n);

int* wmemcpy(int* __s1, const int* __s2, long int __n);

int* wmemmove(int* __s1, const int* __s2, long int __n);

int* wmemset(int* __s, int __c, long int __n);

int* wmempcpy(int* __s1, const int* __s2, long int __n);

unsigned int btowc(int __c);

int wctob(unsigned int __c);

int mbsinit(const struct anonymous_typeX2* __ps);

long int mbrtowc(int* __pwc, const char* __s, long int __n, struct anonymous_typeX2* __p);

long int wcrtomb(char* __s, int __wc, struct anonymous_typeX2* __ps);

long int __mbrlen(const char* __s, long int __n, struct anonymous_typeX2* __ps);

long int mbrlen(const char* __s, long int __n, struct anonymous_typeX2* __ps);

long int mbsrtowcs(int* __dst, const char** __src, long int __len, struct anonymous_typeX2* __ps);

long int wcsrtombs(char* __dst, const int** __src, long int __len, struct anonymous_typeX2* __ps);

long int mbsnrtowcs(int* __dst, const char** __src, long int __nmc, long int __len, struct anonymous_typeX2* __ps);

long int wcsnrtombs(char* __dst, const int** __src, long int __nwc, long int __len, struct anonymous_typeX2* __ps);

int wcwidth(int __c);

int wcswidth(const int* __s, long int __n);

double wcstod(const int* __nptr, int** __endptr);

float wcstof(const int* __nptr, int** __endptr);

long double wcstold(const int* __nptr, int** __endptr);

float wcstof32(const int* __nptr, int** __endptr);

double wcstof64(const int* __nptr, int** __endptr);

double wcstof32x(const int* __nptr, int** __endptr);

long double wcstof64x(const int* __nptr, int** __endptr);

long int wcstol(const int* __nptr, int** __endptr, int __base);

unsigned long int wcstoul(const int* __nptr, int** __endptr, int __base);

long long int wcstoll(const int* __nptr, int** __endptr, int __base);

unsigned long long int wcstoull(const int* __nptr, int** __endptr, int __base);

long long int wcstoq(const int* __nptr, int** __endptr, int __base);

unsigned long long int wcstouq(const int* __nptr, int** __endptr, int __base);

long int wcstol_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int wcstoul_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);

long long int wcstoll_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int wcstoull_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);

double wcstod_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

float wcstof_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

long double wcstold_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

float wcstof32_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

double wcstof64_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

double wcstof32x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

long double wcstof64x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);

int* wcpcpy(int* __dest, const int* __src);

int* wcpncpy(int* __dest, const int* __src, long int __n);

struct _IO_FILE* open_wmemstream(int** __bufloc, long int* __sizeloc);

int fwide(struct _IO_FILE* __fp, int __mode);

int fwprintf(struct _IO_FILE* __stream, const int* __format, ...);

int wprintf(const int* __format, ...);

int swprintf(int* __s, long int __n, const int* __format, ...);

int vfwprintf(struct _IO_FILE* __s, const int* __format, va_list __arg);

int vwprintf(const int* __format, va_list __arg);

int vswprintf(int* __s, long int __n, const int* __format, va_list __arg);

int fwscanf(struct _IO_FILE* __stream, const int* __format, ...);

int wscanf(const int* __format, ...);

int swscanf(const int* __s, const int* __format, ...);

int __isoc99_fwscanf(struct _IO_FILE* __stream, const int* __format, ...);

int __isoc99_wscanf(const int* __format, ...);

int __isoc99_swscanf(const int* __s, const int* __format, ...);

int vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);

int vwscanf(const int* __format, va_list __arg);

int vswscanf(const int* __s, const int* __format, va_list __arg);

int __isoc99_vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);

int __isoc99_vwscanf(const int* __format, va_list __arg);

int __isoc99_vswscanf(const int* __s, const int* __format, va_list __arg);

unsigned int fgetwc(struct _IO_FILE* __stream);

unsigned int getwc(struct _IO_FILE* __stream);

unsigned int getwchar();

unsigned int fputwc(int __wc, struct _IO_FILE* __stream);

unsigned int putwc(int __wc, struct _IO_FILE* __stream);

unsigned int putwchar(int __wc);

int* fgetws(int* __ws, int __n, struct _IO_FILE* __stream);

int fputws(const int* __ws, struct _IO_FILE* __stream);

unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);

unsigned int getwc_unlocked(struct _IO_FILE* __stream);

unsigned int getwchar_unlocked();

unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);

unsigned int fputwc_unlocked(int __wc, struct _IO_FILE* __stream);

unsigned int putwc_unlocked(int __wc, struct _IO_FILE* __stream);

unsigned int putwchar_unlocked(int __wc);

int* fgetws_unlocked(int* __ws, int __n, struct _IO_FILE* __stream);

int fputws_unlocked(const int* __ws, struct _IO_FILE* __stream);

long int wcsftime(int* __s, long int __maxsize, const int* __format, const struct tm* __tp);

long int wcsftime_l(int* __s, long int __maxsize, const int* __format, const struct tm* __tp, struct __locale_struct* __loc);

long int __sysconf(int __name);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX430)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX432)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX434)(enum anonymous_typeY22));

void (*GC_get_on_collection_event())(enum anonymous_typeY22);

void GC_set_find_leak(int anonymous_var_nameX435);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX436);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX437);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX438);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX439)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX440);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX441);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX442);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX443);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX444);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX445);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX446);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX447);

unsigned long int GC_get_time_limit();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX448);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX449);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX450);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX451);

int GC_get_max_prior_attempts();

void GC_set_handle_fork(int anonymous_var_nameX452);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX453);

void* GC_malloc_atomic(long int anonymous_var_nameX454);

char* GC_strdup(const char* anonymous_var_nameX455);

char* GC_strndup(const char* anonymous_var_nameX456, long int anonymous_var_nameX457);

void* GC_malloc_uncollectable(long int anonymous_var_nameX458);

void* GC_malloc_stubborn(long int anonymous_var_nameX459);

void* GC_memalign(long int anonymous_var_nameX460, long int anonymous_var_nameX461);

int GC_posix_memalign(void** anonymous_var_nameX462, long int anonymous_var_nameX463, long int anonymous_var_nameX464);

void GC_free(void* anonymous_var_nameX465);

void GC_change_stubborn(const void* anonymous_var_nameX466);

void GC_end_stubborn_change(const void* anonymous_var_nameX467);

void* GC_base(void* anonymous_var_nameX468);

int GC_is_heap_ptr(const void* anonymous_var_nameX469);

long int GC_size(const void* anonymous_var_nameX470);

void* GC_realloc(void* anonymous_var_nameX471, long int anonymous_var_nameX472);

int GC_expand_hp(long int anonymous_var_nameX473);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX474);

void GC_exclude_static_roots(void* anonymous_var_nameX475, void* anonymous_var_nameX476);

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX477, void* anonymous_var_nameX478);

void GC_remove_roots(void* anonymous_var_nameX479, void* anonymous_var_nameX480);

void GC_register_displacement(long int anonymous_var_nameX481);

void GC_debug_register_displacement(long int anonymous_var_nameX482);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX483)());

void GC_set_stop_func(int (*anonymous_var_nameX484)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX485, unsigned long int* anonymous_var_nameX486, unsigned long int* anonymous_var_nameX487, unsigned long int* anonymous_var_nameX488, unsigned long int* anonymous_var_nameX489);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX490, long int anonymous_var_nameX491);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX492);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX493);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX494);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX495);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX496, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX497, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX498, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX499, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX500, long int anonymous_var_nameX501, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX502, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX503, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX504, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX505, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX506);

void* GC_debug_realloc(void* anonymous_var_nameX507, long int anonymous_var_nameX508, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX509);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX510);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX511);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX512, long int anonymous_var_nameX513);

void GC_register_finalizer(void* anonymous_var_nameX516, void (*anonymous_var_nameX517)(void*,void*), void* anonymous_var_nameX518, void (*anonymous_var_nameX519)(void*,void*), void** anonymous_var_nameX520);

void GC_debug_register_finalizer(void* anonymous_var_nameX521, void (*anonymous_var_nameX522)(void*,void*), void* anonymous_var_nameX523, void (*anonymous_var_nameX524)(void*,void*), void** anonymous_var_nameX525);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX526, void (*anonymous_var_nameX527)(void*,void*), void* anonymous_var_nameX528, void (*anonymous_var_nameX529)(void*,void*), void** anonymous_var_nameX530);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX531, void (*anonymous_var_nameX532)(void*,void*), void* anonymous_var_nameX533, void (*anonymous_var_nameX534)(void*,void*), void** anonymous_var_nameX535);

void GC_register_finalizer_no_order(void* anonymous_var_nameX536, void (*anonymous_var_nameX537)(void*,void*), void* anonymous_var_nameX538, void (*anonymous_var_nameX539)(void*,void*), void** anonymous_var_nameX540);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX541, void (*anonymous_var_nameX542)(void*,void*), void* anonymous_var_nameX543, void (*anonymous_var_nameX544)(void*,void*), void** anonymous_var_nameX545);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX546, void (*anonymous_var_nameX547)(void*,void*), void* anonymous_var_nameX548, void (*anonymous_var_nameX549)(void*,void*), void** anonymous_var_nameX550);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX551, void (*anonymous_var_nameX552)(void*,void*), void* anonymous_var_nameX553, void (*anonymous_var_nameX554)(void*,void*), void** anonymous_var_nameX555);

int GC_register_disappearing_link(void** anonymous_var_nameX556);

int GC_general_register_disappearing_link(void** anonymous_var_nameX557, const void* anonymous_var_nameX558);

int GC_move_disappearing_link(void** anonymous_var_nameX559, void** anonymous_var_nameX560);

int GC_unregister_disappearing_link(void** anonymous_var_nameX561);

int GC_register_long_link(void** anonymous_var_nameX562, const void* anonymous_var_nameX563);

int GC_move_long_link(void** anonymous_var_nameX564, void** anonymous_var_nameX565);

int GC_unregister_long_link(void** anonymous_var_nameX566);

void GC_set_toggleref_func(enum anonymous_typeY23 (*anonymous_var_nameX568)(void*));

enum anonymous_typeY23 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX569, int anonymous_var_nameX570);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX572)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX573);

void GC_set_warn_proc(void (*anonymous_var_nameX576)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX577, unsigned long int anonymous_var_nameX578);

void GC_set_log_fd(int anonymous_var_nameX579);

void GC_set_abort_func(void (*anonymous_var_nameX581)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX583)(void*), void* anonymous_var_nameX584);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX587)(struct GC_stack_base*,void*), void* anonymous_var_nameX588);

void* GC_do_blocking(void* (*anonymous_var_nameX589)(void*), void* anonymous_var_nameX590);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX591)(void*), void* anonymous_var_nameX592);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX593);

void* GC_same_obj(void* anonymous_var_nameX594, void* anonymous_var_nameX595);

void* GC_pre_incr(void** anonymous_var_nameX596, long int anonymous_var_nameX597);

void* GC_post_incr(void** anonymous_var_nameX598, long int anonymous_var_nameX599);

void* GC_is_visible(void* anonymous_var_nameX600);

void* GC_is_valid_displacement(void* anonymous_var_nameX601);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX602);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX603, const void* anonymous_var_nameX604);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX605, const void* anonymous_var_nameX606);

void* GC_malloc_many(long int anonymous_var_nameX627);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX631)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX632);

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
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result6__ = __x;
    return __result6__;
}
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    stackframe();
    exit(4);
    __result7__ = (_Bool)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1char* result_0;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "struct smart_pointer$1char");
    result_0->memory=buffer_clone(self);
    result_0->p=result_0->memory->buf;
    __result8__ = __result_obj__ = result_0;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1char* result_1;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char");
    result_1->memory=buffer_clone(self);
    result_1->p=(char*)result_1->memory->buf;
    __result9__ = __result_obj__ = result_1;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1short* result_2;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short");
    result_2->memory=buffer_clone(self);
    result_2->p=(short short*)result_2->memory->buf;
    __result10__ = __result_obj__ = result_2;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1int* result_3;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int");
    result_3->memory=buffer_clone(self);
    result_3->p=(int*)result_3->memory->buf;
    __result11__ = __result_obj__ = result_3;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1long* result_4;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long");
    result_4->memory=buffer_clone(self);
    result_4->p=(long*)result_4->memory->buf;
    __result12__ = __result_obj__ = result_4;
    return __result12__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = __result_obj__ = wchar_tp_substring(str,head,tail);
    return __result13__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = charp_index_count(str,search_str,count,default_value);
    return __result14__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result15__ = charp_index_regex_count(self,reg,count,default_value);
    return __result15__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = charp_rindex(str,search_str,default_value);
    return __result16__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = charp_rindex_regex(self,reg,default_value);
    return __result17__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result18__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result19__ = __result_obj__ = charp_scan_block(self,reg,parent,block);
    return __result19__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result20__ = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    return __result20__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result21__ = __result_obj__ = charp_split_block(self,reg,parent,block);
    return __result21__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    return __result22__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result23__ = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    return __result23__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result24__ = __result_obj__ = charp_strip(self);
    return __result24__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result25__ = __result_obj__ = string_printable(str);
    return __result25__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result26__ = __result_obj__ = charp_to_wstring(str);
    return __result26__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result27__ = __result_obj__ = wchar_tp_to_string(wstr);
    return __result27__;
}
static inline int wstring_length(int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result28__ = wchar_tp_length(str);
    return __result28__;
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result29__ = __result_obj__ = wchar_tp_delete(str,head,tail);
    return __result29__;
}
static inline int wstring_index(int* str, int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result30__ = wchar_tp_index(str,search_str,default_value);
    return __result30__;
}
static inline int wstring_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = wchar_tp_rindex(str,search_str,default_value);
    return __result31__;
}
static inline int* wstring_reverse(int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = __result_obj__ = wchar_tp_reverse(str);
    return __result32__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result33__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result33__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result34__ = __result_obj__ = wchar_tp_printable(str);
    return __result34__;
}
static inline unsigned int wstring_get_hash_key(int* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result35__ = wchar_tp_get_hash_key(value);
    return __result35__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result36__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result36__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result37__ = charp_index(str,search_str,default_value);
    return __result37__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = charp_index_regex(self,reg,default_value);
    return __result38__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result39__ = __result_obj__ = charp_replace(self,index,c);
    return __result39__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result40__ = __result_obj__ = charp_multiply(str,n);
    return __result40__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result41__ = __result_obj__ = charp_sub(self,reg,replace);
    return __result41__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result42__ = __result_obj__ = charp_sub_count(self,reg,replace,count);
    return __result42__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result43__ = __result_obj__ = charp_split_str(self,str);
    return __result43__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result44__ = __result_obj__ = charp_scan(self,reg);
    return __result44__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result45__ = __result_obj__ = charp_split(self,reg);
    return __result45__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result46__ = charp_match(self,reg);
    return __result46__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result47__ = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    return __result47__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result48__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result48__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result49__ = charp_match_count(self,reg,count);
    return __result49__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result50__ = __result_obj__ = charp_sub_block(self,reg,parent,block);
    return __result50__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result51__ = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    return __result51__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result53__ = __result_obj__ = string_chomp(str);
    return __result53__;
}

// body function




















































void regex_finalizer(void* obj, void* client_data){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct come_regex* self_5;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&self_5, 0, sizeof(struct come_regex*));
    self_5=obj;
    if(_if_conditional1=self_5&&self_5->re,    _if_conditional1) {
        free(self_5->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_6;
int erro_ofs_7;
int options_8;
_Bool _if_conditional2;
_Bool _if_conditional3;
struct come_regex* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    if(_if_conditional3=gComeGCLib,    _if_conditional3) {
        GC_register_finalizer(self,regex_finalizer,((void*)0),((void*)0),((void*)0));
    }
    __result54__ = __result_obj__ = self;
    return __result54__;
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional4=reg&&reg->str,    _if_conditional4) {
    }
    if(_if_conditional5=reg&&reg->re,    _if_conditional5) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct come_regex* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result55__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 61, "struct come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result55__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct come_regex* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result56__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 66, "struct come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result56__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
struct come_regex* __result57__;
struct come_regex* result_9;
const char* err_10;
int erro_ofs_11;
_Bool _if_conditional7;
struct come_regex* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_9, 0, sizeof(struct come_regex*));
memset(&erro_ofs_11, 0, sizeof(int));
    if(_if_conditional6=reg==((void*)0),    _if_conditional6) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    result_9=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 76, "struct come_regex");
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
    __result58__ = __result_obj__ = result_9;
    return __result58__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result59__ = __result_obj__ = __builtin_string(regex->str);
    return __result59__;
}

char* string_lower_case(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* result_12;
int i_13;
_Bool _for_condtionalA1;
_Bool _if_conditional8;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_12, 0, sizeof(char*));
memset(&i_13, 0, sizeof(int));
    result_12=__builtin_string(str);
    for(
    i_13=0 ,    0;    _for_condtionalA1=    i_13<strlen(str) ,    _for_condtionalA1;    i_13++ ,    0    ){
        if(_if_conditional8=str[i_13]>=65&&str[i_13]<=90,        _if_conditional8) {
            result_12[i_13]=str[i_13]-65+97;
        }
    }
    __result60__ = __result_obj__ = result_12;
    return __result60__;
}

char* string_upper_case(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* result_14;
int i_15;
_Bool _for_condtionalA2;
_Bool _if_conditional9;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(char*));
memset(&i_15, 0, sizeof(int));
    result_14=__builtin_string(str);
    for(
    i_15=0 ,    0;    _for_condtionalA2=    i_15<strlen(str) ,    _for_condtionalA2;    i_15++ ,    0    ){
        if(_if_conditional9=str[i_15]>=97&&str[i_15]<=122,        _if_conditional9) {
            result_14[i_15]=str[i_15]-97+65;
        }
    }
    __result61__ = __result_obj__ = result_14;
    return __result61__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
int* __result62__;
int len_16;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
int* __result63__;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
int* __result64__;
_Bool _if_conditional17;
int* __result65__;
int* result_17;
int* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_16, 0, sizeof(int));
memset(&result_17, 0, sizeof(int*));
    if(_if_conditional10=str==((void*)0),    _if_conditional10) {
        __result62__ = __result_obj__ = __builtin_wstring("");
        return __result62__;
    }
    len_16=wcslen(str);
    if(_if_conditional11=head<0,    _if_conditional11) {
        head+=len_16;
    }
    if(_if_conditional12=tail<0,    _if_conditional12) {
        tail+=len_16+1;
    }
    if(_if_conditional13=head>tail,    _if_conditional13) {
        __result63__ = __result_obj__ = __builtin_wstring("");
        return __result63__;
    }
    if(_if_conditional14=head<0,    _if_conditional14) {
        head=0;
    }
    if(_if_conditional15=tail>=len_16,    _if_conditional15) {
        tail=len_16;
    }
    if(_if_conditional16=head==tail,    _if_conditional16) {
        __result64__ = __result_obj__ = __builtin_wstring("");
        return __result64__;
    }
    if(_if_conditional17=tail-head+1<1,    _if_conditional17) {
        __result65__ = __result_obj__ = __builtin_wstring("");
        return __result65__;
    }
    result_17=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang2-str-gc.c", 171, "int");
    memcpy(result_17,str+head,sizeof(int)*(tail-head));
    result_17[tail-head]=0;
    __result66__ = __result_obj__ = result_17;
    return __result66__;
}

int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
int* __result67__;
int len_18;
int* wstr_19;
int ret_20;
_Bool _if_conditional19;
int* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_18, 0, sizeof(int));
memset(&wstr_19, 0, sizeof(int*));
memset(&ret_20, 0, sizeof(int));
    if(_if_conditional18=str==((void*)0),    _if_conditional18) {
        __result67__ = __result_obj__ = ((void*)0);
        return __result67__;
    }
    len_18=strlen(str);
    wstr_19=(int*)come_calloc(1, sizeof(int)*(1*(len_18+1)), "libcomelang2-str-gc.c", 186, "int");
    ret_20=mbstowcs(wstr_19,str,len_18+1);
    wstr_19[ret_20]=0;
    if(_if_conditional19=ret_20<0,    _if_conditional19) {
        wstr_19[0]=0;
    }
    __result68__ = __result_obj__ = wstr_19;
    return __result68__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int n_21;
int len_22;
int i_23;
_Bool _for_condtionalA3;
int len2_24;
int j_25;
_Bool _for_condtionalA4;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
int __result69__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&n_21, 0, sizeof(int));
memset(&len_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
memset(&len2_24, 0, sizeof(int));
memset(&j_25, 0, sizeof(int));
    n_21=0;
    len_22=strlen(str);
    for(
    i_23=0 ,    0;    _for_condtionalA3=    i_23<len_22 ,    _for_condtionalA3;    i_23++ ,    0    ){
        len2_24=strlen(search_str);
        for(
        j_25=0 ,        0;        _for_condtionalA4=        j_25<len2_24 ,        _for_condtionalA4;        j_25++ ,        0        ){
            if(_if_conditional20=str[i_23+j_25]!=search_str[j_25],            _if_conditional20) {
                break;
            }
        }
        if(_if_conditional21=j_25==len2_24,        _if_conditional21) {
            n_21++;
            if(_if_conditional22=n_21==count,            _if_conditional22) {
                __result69__ = i_23;
                return __result69__;
            }
        }
    }
    __result70__ = default_value;
    return __result70__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int ovec_max_26;
int result_30;
int offset_31;
const char* err_32;
int erro_ofs_33;
int options_34;
char* str_35;
struct real_pcre* re_36;
int n_37;
_Bool _while_condtional1;
int options_38;
int len_39;
int regex_result_40;
int i_41;
_Bool _for_condtionalA5;
int i_42;
_Bool _for_condtionalA6;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_26, 0, sizeof(int));
memset(&result_30, 0, sizeof(int));
memset(&offset_31, 0, sizeof(int));
memset(&erro_ofs_33, 0, sizeof(int));
memset(&options_34, 0, sizeof(int));
memset(&str_35, 0, sizeof(char*));
memset(&re_36, 0, sizeof(struct real_pcre*));
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
        for(
        i_41=0 ,        0;        _for_condtionalA5=        i_41<ovec_max_26 ,        _for_condtionalA5;        i_41++ ,        0        ){
            start_27[i_41]=ovec_value_29[i_41*2];
        }
        for(
        i_42=0 ,        0;        _for_condtionalA6=        i_42<ovec_max_26 ,        _for_condtionalA6;        i_42++ ,        0        ){
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
    __result71__ = result_30;
    return __result71__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_43;
char* p_44;
_Bool _while_condtional2;
_Bool _if_conditional26;
int __result72__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_43, 0, sizeof(int));
memset(&p_44, 0, sizeof(char*));
    len_43=strlen(search_str);
    p_44=str+strlen(str)-len_43;
    while(_while_condtional2=p_44>=str,    _while_condtional2) {
        if(_if_conditional26=strncmp(p_44,search_str,len_43)==0,        _if_conditional26) {
            __result72__ = p_44-str;
            return __result72__;
        }
        p_44--;
    }
    __result73__ = default_value;
    return __result73__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_45;
int erro_ofs_46;
int options_47;
char* str_48;
struct real_pcre* re_49;
char* self2_50;
int ovec_max_51;
int result_55;
int offset_56;
_Bool _while_condtional3;
int options_57;
int len_58;
int regex_result_59;
int i_60;
_Bool _for_condtionalA7;
int i_61;
_Bool _for_condtionalA8;
_Bool _if_conditional27;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_46, 0, sizeof(int));
memset(&options_47, 0, sizeof(int));
memset(&str_48, 0, sizeof(char*));
memset(&re_49, 0, sizeof(struct real_pcre*));
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
        for(
        i_60=0 ,        0;        _for_condtionalA7=        i_60<ovec_max_51 ,        _for_condtionalA7;        i_60++ ,        0        ){
            start_52[i_60]=ovec_value_54[i_60*2];
        }
        for(
        i_61=0 ,        0;        _for_condtionalA8=        i_61<ovec_max_51 ,        _for_condtionalA8;        i_61++ ,        0        ){
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
    __result74__ = result_55;
    return __result74__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_62;
char* p_63;
int n_64;
_Bool _while_condtional4;
_Bool _if_conditional28;
_Bool _if_conditional29;
int __result75__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
                __result75__ = p_63-str;
                return __result75__;
            }
        }
        p_63--;
    }
    __result76__ = default_value;
    return __result76__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_65;
int offset_66;
int ovec_max_67;
const char* err_71;
int erro_ofs_72;
int options_73;
char* str_74;
struct real_pcre* re_75;
_Bool _while_condtional5;
int options_76;
int len_77;
int regex_result_78;
int i_79;
_Bool _for_condtionalA9;
int i_80;
_Bool _for_condtionalA10;
_Bool _if_conditional30;
char* str_81;
struct list$1charph* group_strings_82;
char* str2_83;
_Bool _if_conditional31;
struct list$1charph* __result78__;
_Bool _if_conditional34;
_Bool _if_conditional35;
char* str_87;
struct list$1charph* group_strings_88;
int i_89;
_Bool _for_condtionalA11;
char* match_string_90;
char* str2_91;
_Bool _if_conditional36;
struct list$1charph* __result80__;
_Bool _if_conditional37;
struct list$1charph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(struct list$1charph*));
memset(&offset_66, 0, sizeof(int));
memset(&ovec_max_67, 0, sizeof(int));
memset(&erro_ofs_72, 0, sizeof(int));
memset(&options_73, 0, sizeof(int));
memset(&str_74, 0, sizeof(char*));
memset(&re_75, 0, sizeof(struct real_pcre*));
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
    result_65=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 372, "struct list$1charph"));
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
        for(
        i_79=0 ,        0;        _for_condtionalA9=        i_79<ovec_max_67 ,        _for_condtionalA9;        i_79++ ,        0        ){
            start_68[i_79]=ovec_value_70[i_79*2];
        }
        for(
        i_80=0 ,        0;        _for_condtionalA10=        i_80<ovec_max_67 ,        _for_condtionalA10;        i_80++ ,        0        ){
            end_69[i_80]=ovec_value_70[i_80*2+1];
        }
        if(_if_conditional30=regex_result_78==1,        _if_conditional30) {
            str_81=charp_substring(self,start_68[0],end_69[0]);
            group_strings_82=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 406, "struct list$1charph"));
            str2_83=block(parent,str_81,group_strings_82);
            if(_if_conditional31=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional31) {
                __result78__ = __result_obj__ = result_65;
                return __result78__;
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
                group_strings_88=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 427, "struct list$1charph"));
                for(
                i_89=1 ,                0;                _for_condtionalA11=                i_89<regex_result_78 ,                _for_condtionalA11;                i_89++ ,                0                ){
                    match_string_90=charp_substring(self,start_68[i_89],end_69[i_89]);
                    list$1charph_push_back(group_strings_88,match_string_90);
                }
                str2_91=block(parent,str_87,group_strings_88);
                if(_if_conditional36=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional36) {
                    __result80__ = __result_obj__ = result_65;
                    return __result80__;
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
    __result81__ = __result_obj__ = result_65;
    return __result81__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result77__ = __result_obj__ = self;
        return __result77__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct list_item$1charph* litem_84;
_Bool _if_conditional33;
struct list_item$1charph* litem_85;
struct list_item$1charph* litem_86;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_84, 0, sizeof(struct list_item$1charph*));
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional32=self->len==0,                _if_conditional32) {
                    litem_84=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph");
                    litem_84->prev=((void*)0);
                    litem_84->next=((void*)0);
                    litem_84->item=item;
                    self->tail=litem_84;
                    self->head=litem_84;
                }
                else {
                    if(_if_conditional33=self->len==1,                    _if_conditional33) {
                        litem_85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph");
                        litem_85->prev=self->head;
                        litem_85->next=((void*)0);
                        litem_85->item=item;
                        self->tail=litem_85;
                        self->head->next=litem_85;
                    }
                    else {
                        litem_86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph");
                        litem_86->prev=self->tail;
                        litem_86->next=((void*)0);
                        litem_86->item=item;
                        self->tail->next=litem_86;
                        self->tail=litem_86;
                    }
                }
                self->len++;
                __result79__ = __result_obj__ = self;
                return __result79__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_92;
int offset_93;
int ovec_max_94;
const char* err_98;
int erro_ofs_99;
int options_100;
char* str_101;
struct real_pcre* re_102;
int n_103;
_Bool _while_condtional6;
int options_104;
int len_105;
int regex_result_106;
int i_107;
_Bool _for_condtionalA12;
int i_108;
_Bool _for_condtionalA13;
_Bool _if_conditional38;
char* str_109;
struct list$1charph* group_strings_110;
char* str2_111;
_Bool _if_conditional39;
struct list$1charph* __result82__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
char* str_112;
struct list$1charph* group_strings_113;
int i_114;
_Bool _for_condtionalA14;
char* match_string_115;
char* str2_116;
_Bool _if_conditional43;
struct list$1charph* __result83__;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&offset_93, 0, sizeof(int));
memset(&ovec_max_94, 0, sizeof(int));
memset(&erro_ofs_99, 0, sizeof(int));
memset(&options_100, 0, sizeof(int));
memset(&str_101, 0, sizeof(char*));
memset(&re_102, 0, sizeof(struct real_pcre*));
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
    result_92=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 461, "struct list$1charph"));
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
        for(
        i_107=0 ,        0;        _for_condtionalA12=        i_107<ovec_max_94 ,        _for_condtionalA12;        i_107++ ,        0        ){
            start_95[i_107]=ovec_value_97[i_107*2];
        }
        for(
        i_108=0 ,        0;        _for_condtionalA13=        i_108<ovec_max_94 ,        _for_condtionalA13;        i_108++ ,        0        ){
            end_96[i_108]=ovec_value_97[i_108*2+1];
        }
        if(_if_conditional38=regex_result_106==1,        _if_conditional38) {
            str_109=charp_substring(self,start_95[0],end_96[0]);
            group_strings_110=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 497, "struct list$1charph"));
            str2_111=block(parent,str_109,group_strings_110);
            if(_if_conditional39=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional39) {
                __result82__ = __result_obj__ = result_92;
                return __result82__;
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
                group_strings_113=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 523, "struct list$1charph"));
                for(
                i_114=1 ,                0;                _for_condtionalA14=                i_114<regex_result_106 ,                _for_condtionalA14;                i_114++ ,                0                ){
                    match_string_115=charp_substring(self,start_95[i_114],end_96[i_114]);
                    list$1charph_push_back(group_strings_113,match_string_115);
                }
                str2_116=block(parent,str_112,group_strings_113);
                if(_if_conditional43=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional43) {
                    __result83__ = __result_obj__ = result_92;
                    return __result83__;
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
    __result84__ = __result_obj__ = result_92;
    return __result84__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_117;
int erro_ofs_118;
int options_119;
char* str_120;
struct real_pcre* re_121;
struct list$1charph* result_122;
int offset_123;
int ovec_max_124;
_Bool _while_condtional7;
int options_128;
int len_129;
int regex_result_130;
int i_131;
_Bool _for_condtionalA15;
int i_132;
_Bool _for_condtionalA16;
_Bool _if_conditional46;
char* str_133;
struct list$1charph* match_strings_134;
char* str2_135;
_Bool _if_conditional47;
struct list$1charph* __result85__;
_Bool _if_conditional48;
_Bool _if_conditional49;
char* str_136;
_Bool _if_conditional50;
struct list$1charph* match_strings_137;
int i_138;
_Bool _for_condtionalA17;
char* match_str_139;
char* str2_140;
_Bool _if_conditional51;
struct list$1charph* __result86__;
_Bool _if_conditional52;
char* str_141;
struct list$1charph* match_strings_142;
char* str2_143;
_Bool _if_conditional53;
struct list$1charph* __result87__;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_118, 0, sizeof(int));
memset(&options_119, 0, sizeof(int));
memset(&str_120, 0, sizeof(char*));
memset(&re_121, 0, sizeof(struct real_pcre*));
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
    result_122=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 569, "struct list$1charph"));
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
        for(
        i_131=0 ,        0;        _for_condtionalA15=        i_131<ovec_max_124 ,        _for_condtionalA15;        i_131++ ,        0        ){
            start_125[i_131]=ovec_value_127[i_131*2];
        }
        for(
        i_132=0 ,        0;        _for_condtionalA16=        i_132<ovec_max_124 ,        _for_condtionalA16;        i_132++ ,        0        ){
            end_126[i_132]=ovec_value_127[i_132*2+1];
        }
        if(_if_conditional46=regex_result_130==1,        _if_conditional46) {
            str_133=charp_substring(self,offset_123,start_125[0]);
            match_strings_134=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 596, "struct list$1charph"));
            str2_135=block(parent,str_133,match_strings_134);
            if(_if_conditional47=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional47) {
                __result85__ = __result_obj__ = result_122;
                return __result85__;
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
                match_strings_137=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 623, "struct list$1charph"));
                for(
                i_138=1 ,                0;                _for_condtionalA17=                i_138<regex_result_130 ,                _for_condtionalA17;                i_138++ ,                0                ){
                    match_str_139=charp_substring(self,start_125[i_138],end_126[i_138]);
                    list$1charph_push_back(match_strings_137,match_str_139);
                }
                str2_140=block(parent,str_136,match_strings_137);
                if(_if_conditional51=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional51) {
                    __result86__ = __result_obj__ = result_122;
                    return __result86__;
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
        match_strings_142=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 645, "struct list$1charph"));
        str2_143=block(parent,str_141,match_strings_142);
        if(_if_conditional53=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional53) {
            __result87__ = __result_obj__ = result_122;
            return __result87__;
        }
        list$1charph_push_back(result_122,str2_143);
    }
    __result88__ = __result_obj__ = result_122;
    return __result88__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_144;
int erro_ofs_145;
int options_146;
char* str_147;
struct real_pcre* re_148;
struct list$1charph* result_149;
int offset_150;
int ovec_max_151;
int n_155;
_Bool _while_condtional8;
int options_156;
int len_157;
int regex_result_158;
int i_159;
_Bool _for_condtionalA18;
int i_160;
_Bool _for_condtionalA19;
_Bool _if_conditional54;
char* str_161;
struct list$1charph* match_strings_162;
char* str2_163;
_Bool _if_conditional55;
struct list$1charph* __result89__;
_Bool _if_conditional56;
_Bool _if_conditional57;
char* str_164;
_Bool _if_conditional58;
struct list$1charph* match_strings_165;
int i_166;
_Bool _for_condtionalA20;
char* match_str_167;
char* str2_168;
_Bool _if_conditional59;
struct list$1charph* __result90__;
_Bool _if_conditional60;
struct list$1charph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_145, 0, sizeof(int));
memset(&options_146, 0, sizeof(int));
memset(&str_147, 0, sizeof(char*));
memset(&re_148, 0, sizeof(struct real_pcre*));
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
    result_149=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 667, "struct list$1charph"));
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
        for(
        i_159=0 ,        0;        _for_condtionalA18=        i_159<ovec_max_151 ,        _for_condtionalA18;        i_159++ ,        0        ){
            start_152[i_159]=ovec_value_154[i_159*2];
        }
        for(
        i_160=0 ,        0;        _for_condtionalA19=        i_160<ovec_max_151 ,        _for_condtionalA19;        i_160++ ,        0        ){
            end_153[i_160]=ovec_value_154[i_160*2+1];
        }
        if(_if_conditional54=regex_result_158==1,        _if_conditional54) {
            str_161=charp_substring(self,offset_150,start_152[0]);
            match_strings_162=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 696, "struct list$1charph"));
            str2_163=block(parent,str_161,match_strings_162);
            if(_if_conditional55=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional55) {
                __result89__ = __result_obj__ = result_149;
                return __result89__;
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
                match_strings_165=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 722, "struct list$1charph"));
                for(
                i_166=1 ,                0;                _for_condtionalA20=                i_166<regex_result_158 ,                _for_condtionalA20;                i_166++ ,                0                ){
                    match_str_167=charp_substring(self,start_152[i_166],end_153[i_166]);
                    list$1charph_push_back(match_strings_165,match_str_167);
                }
                str2_168=block(parent,str_164,match_strings_165);
                if(_if_conditional59=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional59) {
                    __result90__ = __result_obj__ = result_149;
                    return __result90__;
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
    __result91__ = __result_obj__ = result_149;
    return __result91__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
_Bool __result92__;
_Bool _if_conditional62;
_Bool __result93__;
_Bool _if_conditional63;
_Bool __result94__;
_Bool _if_conditional64;
_Bool __result95__;
_Bool _if_conditional65;
_Bool __result96__;
_Bool _if_conditional66;
_Bool __result97__;
_Bool _if_conditional67;
_Bool __result98__;
_Bool _if_conditional68;
_Bool __result99__;
_Bool _if_conditional69;
_Bool __result100__;
_Bool _if_conditional70;
_Bool __result101__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional61=strcmp(left->str,right->str)!=0,    _if_conditional61) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    if(_if_conditional62=left->ignore_case!=right->ignore_case,    _if_conditional62) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    if(_if_conditional63=left->multiline!=right->multiline,    _if_conditional63) {
        __result94__ = (_Bool)0;
        return __result94__;
    }
    if(_if_conditional64=left->global!=right->global,    _if_conditional64) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    if(_if_conditional65=left->extended!=right->extended,    _if_conditional65) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    if(_if_conditional66=left->dotall!=right->dotall,    _if_conditional66) {
        __result97__ = (_Bool)0;
        return __result97__;
    }
    if(_if_conditional67=left->anchored!=right->anchored,    _if_conditional67) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    if(_if_conditional68=left->dollar_endonly!=right->dollar_endonly,    _if_conditional68) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    if(_if_conditional69=left->ungreedy!=right->ungreedy,    _if_conditional69) {
        __result100__ = (_Bool)0;
        return __result100__;
    }
    if(_if_conditional70=left->options!=right->options,    _if_conditional70) {
        __result101__ = (_Bool)0;
        return __result101__;
    }
    __result102__ = (_Bool)1;
    return __result102__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_169;
int offset_170;
int ovec_max_171;
const char* err_175;
int erro_ofs_176;
int options_177;
char* str_178;
struct real_pcre* re_179;
_Bool _while_condtional9;
int options_180;
int len_181;
int regex_result_182;
int i_183;
_Bool _for_condtionalA21;
int i_184;
_Bool _for_condtionalA22;
_Bool _if_conditional71;
char* str_185;
_Bool _if_conditional72;
_Bool _if_conditional73;
char* str_186;
_Bool _if_conditional74;
int i_187;
_Bool _for_condtionalA23;
char* match_string_188;
struct list$1charph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_169, 0, sizeof(struct list$1charph*));
memset(&offset_170, 0, sizeof(int));
memset(&ovec_max_171, 0, sizeof(int));
memset(&erro_ofs_176, 0, sizeof(int));
memset(&options_177, 0, sizeof(int));
memset(&str_178, 0, sizeof(char*));
memset(&re_179, 0, sizeof(struct real_pcre*));
memset(&options_180, 0, sizeof(int));
memset(&len_181, 0, sizeof(int));
memset(&regex_result_182, 0, sizeof(int));
memset(&i_183, 0, sizeof(int));
memset(&i_184, 0, sizeof(int));
memset(&str_185, 0, sizeof(char*));
memset(&str_186, 0, sizeof(char*));
memset(&i_187, 0, sizeof(int));
memset(&match_string_188, 0, sizeof(char*));
    result_169=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 790, "struct list$1charph"));
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
        for(
        i_183=0 ,        0;        _for_condtionalA21=        i_183<ovec_max_171 ,        _for_condtionalA21;        i_183++ ,        0        ){
            start_172[i_183]=ovec_value_174[i_183*2];
        }
        for(
        i_184=0 ,        0;        _for_condtionalA22=        i_184<ovec_max_171 ,        _for_condtionalA22;        i_184++ ,        0        ){
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
                for(
                i_187=1 ,                0;                _for_condtionalA23=                i_187<regex_result_182 ,                _for_condtionalA23;                i_187++ ,                0                ){
                    match_string_188=charp_substring(self,start_172[i_187],end_173[i_187]);
                    list$1charph_push_back(group_strings,match_string_188);
                }
            }
            else {
                break;
            }
        }
    }
    __result103__ = __result_obj__ = result_169;
    return __result103__;
}

char* charp_strip(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* result_189;
int len_190;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    __result104__ = __result_obj__ = result_189;
    return __result104__;
}

char* charp_printable(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_191;
char* result_192;
int n_193;
int i_194;
_Bool _for_condtionalA24;
char c_195;
_Bool _if_conditional78;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_191, 0, sizeof(int));
memset(&result_192, 0, sizeof(char*));
memset(&n_193, 0, sizeof(int));
memset(&i_194, 0, sizeof(int));
memset(&c_195, 0, sizeof(char));
    len_191=charp_length(str);
    result_192=(char*)come_calloc(1, sizeof(char)*(1*(len_191*2+1)), "libcomelang2-str-gc.c", 884, "char");
    n_193=0;
    for(
    i_194=0 ,    0;    _for_condtionalA24=    i_194<len_191 ,    _for_condtionalA24;    i_194++ ,    0    ){
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
    __result105__ = __result_obj__ = result_192;
    return __result105__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_196;
char* result_197;
_Bool _if_conditional79;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_196, 0, sizeof(int));
memset(&result_197, 0, sizeof(char*));
    len_196=16*(wcslen(wstr)+1);
    result_197=(char*)come_calloc(1, sizeof(char)*(1*(len_196)), "libcomelang2-str-gc.c", 910, "char");
    if(_if_conditional79=wcstombs(result_197,wstr,len_196)<0,    _if_conditional79) {
        strncpy(result_197,"",len_196);
    }
    __result106__ = __result_obj__ = result_197;
    return __result106__;
}

int* charp_to_wstring(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result107__ = __result_obj__ = __builtin_wstring(str);
    return __result107__;
}

int wchar_tp_length(int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result108__ = wcslen(str);
    return __result108__;
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_198;
_Bool _if_conditional80;
int* __result109__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
int* __result110__;
_Bool _if_conditional85;
int* sub_str_199;
int* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_198, 0, sizeof(int));
memset(&sub_str_199, 0, sizeof(int*));
    len_198=wcslen(str);
    if(_if_conditional80=len_198==0,    _if_conditional80) {
        __result109__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result109__;
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
        __result110__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result110__;
    }
    if(_if_conditional85=tail>=len_198,    _if_conditional85) {
        tail=len_198;
    }
    sub_str_199=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_199,sizeof(int)*(wstring_length(sub_str_199)+1));
    __result111__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    return __result111__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* head_200;
_Bool _if_conditional86;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_200, 0, sizeof(int*));
    head_200=wcsstr(str,search_str);
    if(_if_conditional86=head_200==((void*)0),    _if_conditional86) {
        __result112__ = default_value;
        return __result112__;
    }
    __result113__ = head_200-str;
    return __result113__;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_201;
int* p_202;
_Bool _while_condtional10;
int len2_203;
_Bool result_204;
int i_205;
_Bool _for_condtionalA25;
_Bool _if_conditional87;
_Bool _if_conditional88;
int __result114__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
        for(
        i_205=0 ,        0;        _for_condtionalA25=        i_205<len_201&&i_205<len2_203 ,        _for_condtionalA25;        i_205++ ,        0        ){
            if(_if_conditional87=p_202[i_205]!=search_str[i_205],            _if_conditional87) {
                result_204=(_Bool)0;
            }
        }
        if(_if_conditional88=result_204,        _if_conditional88) {
            __result114__ = (p_202-str);
            return __result114__;
        }
        p_202--;
    }
    __result115__ = default_value;
    return __result115__;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_206;
int* result_207;
int i_208;
_Bool _for_condtionalA26;
int* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_206, 0, sizeof(int));
memset(&result_207, 0, sizeof(int*));
memset(&i_208, 0, sizeof(int));
    len_206=wcslen(str);
    result_207=(int*)come_calloc(1, sizeof(int)*(1*(len_206+1)), "libcomelang2-str-gc.c", 1010, "int");
    for(
    i_208=0 ,    0;    _for_condtionalA26=    i_208<len_206 ,    _for_condtionalA26;    i_208++ ,    0    ){
        result_207[i_208]=str[len_206-i_208-1];
    }
    result_207[len_206]=0;
    __result116__ = __result_obj__ = result_207;
    return __result116__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_209;
int* result_210;
int i_211;
_Bool _for_condtionalA27;
int* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_209, 0, sizeof(int));
memset(&result_210, 0, sizeof(int*));
memset(&i_211, 0, sizeof(int));
    len_209=wcslen(str)*n+1;
    result_210=(int*)come_calloc(1, sizeof(int)*(1*(len_209)), "libcomelang2-str-gc.c", 1025, "int");
    result_210[0]=0;
    for(
    i_211=0 ,    0;    _for_condtionalA27=    i_211<n ,    _for_condtionalA27;    i_211++ ,    0    ){
        wcscat(result_210,str);
    }
    __result117__ = __result_obj__ = result_210;
    return __result117__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_212;
int* result_213;
int n_214;
int i_215;
_Bool _for_condtionalA28;
int c_216;
_Bool _if_conditional89;
int* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_212, 0, sizeof(int));
memset(&result_213, 0, sizeof(int*));
memset(&n_214, 0, sizeof(int));
memset(&i_215, 0, sizeof(int));
memset(&c_216, 0, sizeof(int));
    len_212=wchar_tp_length(str);
    result_213=(int*)come_calloc(1, sizeof(int)*(1*(len_212*2+1)), "libcomelang2-str-gc.c", 1039, "int");
    n_214=0;
    for(
    i_215=0 ,    0;    _for_condtionalA28=    i_215<len_212 ,    _for_condtionalA28;    i_215++ ,    0    ){
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
    __result118__ = __result_obj__ = result_213;
    return __result118__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_217;
int ovec_max_218;
const char* err_222;
int erro_ofs_223;
int options_224;
char* str_225;
struct real_pcre* re_226;
int n_227;
_Bool _while_condtional11;
int options_228;
int len_229;
int regex_result_230;
int i_231;
_Bool _for_condtionalA29;
int i_232;
_Bool _for_condtionalA30;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool __result119__;
_Bool _if_conditional92;
_Bool _if_conditional93;
int i_235;
_Bool _for_condtionalA31;
char* match_string_236;
_Bool _if_conditional94;
_Bool __result121__;
_Bool _if_conditional95;
_Bool __result122__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_217, 0, sizeof(int));
memset(&ovec_max_218, 0, sizeof(int));
memset(&erro_ofs_223, 0, sizeof(int));
memset(&options_224, 0, sizeof(int));
memset(&str_225, 0, sizeof(char*));
memset(&re_226, 0, sizeof(struct real_pcre*));
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
        for(
        i_231=0 ,        0;        _for_condtionalA29=        i_231<ovec_max_218 ,        _for_condtionalA29;        i_231++ ,        0        ){
            start_219[i_231]=ovec_value_221[i_231*2];
        }
        for(
        i_232=0 ,        0;        _for_condtionalA30=        i_232<ovec_max_218 ,        _for_condtionalA30;        i_232++ ,        0        ){
            end_220[i_232]=ovec_value_221[i_232*2+1];
        }
        if(_if_conditional90=regex_result_230==1||(group_strings==((void*)0)&&regex_result_230>0),        _if_conditional90) {
            n_227++;
            if(_if_conditional91=n_227==count,            _if_conditional91) {
                __result119__ = (_Bool)1;
                return __result119__;
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
                for(
                i_235=1 ,                0;                _for_condtionalA31=                i_235<regex_result_230 ,                _for_condtionalA31;                i_235++ ,                0                ){
                    match_string_236=charp_substring(self,start_219[i_235],end_220[i_235]);
                    list$1charph_push_back(group_strings,match_string_236);
                }
                if(_if_conditional94=n_227==count,                _if_conditional94) {
                    __result121__ = (_Bool)1;
                    return __result121__;
                }
                if(_if_conditional95=offset_217==end_220[0],                _if_conditional95) {
                    offset_217++;
                }
                else {
                    offset_217=end_220[0];
                }
            }
            else {
                __result122__ = (_Bool)0;
                return __result122__;
            }
        }
    }
    __result123__ = (_Bool)0;
    return __result123__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_233;
_Bool _while_condtional12;
struct list_item$1charph* prev_it_234;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
                    __result120__ = __result_obj__ = self;
                    return __result120__;
}

int wchar_tp_compare(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = wcscmp(left,right);
    return __result124__;
}

int wstring_compare(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = wcscmp(left,right);
    return __result125__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = string_get_hash_key(reg->str);
    return __result126__;
}

_Bool wchar_tp_equals(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = left==right;
    return __result127__;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result128__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result129__;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = wcscmp(left,right)==0;
    return __result130__;
}

_Bool wstring_operator_equals(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = wcscmp(left,right)==0;
    return __result131__;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = wcscmp(left,right)!=0;
    return __result132__;
}

_Bool wstring_operator_not_equals(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = wcscmp(left,right)!=0;
    return __result133__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = come_regex_equals(left,right);
    return __result134__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = !come_regex_equals(left,right);
    return __result135__;
}

int* wchar_tp_operator_add(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* result_237;
int* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_237, 0, sizeof(int*));
    result_237=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1203, "int");
    wcscpy(result_237,left);
    wcscat(result_237,right);
    __result136__ = __result_obj__ = result_237;
    return __result136__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* result_238;
int* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_238, 0, sizeof(int*));
    result_238=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1213, "int");
    wcscpy(result_238,left);
    wcscat(result_238,right);
    __result137__ = __result_obj__ = result_238;
    return __result137__;
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_239;
_Bool _if_conditional96;
int __result138__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_239, 0, sizeof(char*));
    head_239=strstr(str,search_str);
    if(_if_conditional96=head_239==((void*)0),    _if_conditional96) {
        __result138__ = default_value;
        return __result138__;
    }
    __result139__ = head_239-str;
    return __result139__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int ovec_max_240;
int result_244;
int offset_245;
const char* err_246;
int erro_ofs_247;
int options_248;
char* str_249;
struct real_pcre* re_250;
_Bool _while_condtional13;
int options_251;
int len_252;
int regex_result_253;
int i_254;
_Bool _for_condtionalA32;
int i_255;
_Bool _for_condtionalA33;
_Bool _if_conditional97;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ovec_max_240, 0, sizeof(int));
memset(&result_244, 0, sizeof(int));
memset(&offset_245, 0, sizeof(int));
memset(&erro_ofs_247, 0, sizeof(int));
memset(&options_248, 0, sizeof(int));
memset(&str_249, 0, sizeof(char*));
memset(&re_250, 0, sizeof(struct real_pcre*));
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
        for(
        i_254=0 ,        0;        _for_condtionalA32=        i_254<ovec_max_240 ,        _for_condtionalA32;        i_254++ ,        0        ){
            start_241[i_254]=ovec_value_243[i_254*2];
        }
        for(
        i_255=0 ,        0;        _for_condtionalA33=        i_255<ovec_max_240 ,        _for_condtionalA33;        i_255++ ,        0        ){
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
    __result140__ = result_244;
    return __result140__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_256;
_Bool _if_conditional98;
char* __result141__;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_256, 0, sizeof(int));
    len_256=strlen(self);
    if(_if_conditional98=strcmp(self,"")==0,    _if_conditional98) {
        __result141__ = __result_obj__ = __builtin_string(self);
        return __result141__;
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
    __result142__ = __result_obj__ = __builtin_string(self);
    return __result142__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int len_257;
char* result_258;
int i_259;
_Bool _for_condtionalA34;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_257, 0, sizeof(int));
memset(&result_258, 0, sizeof(char*));
memset(&i_259, 0, sizeof(int));
    len_257=strlen(str)*n+1;
    result_258=(char*)come_calloc(1, sizeof(char)*(1*(len_257)), "libcomelang2-str-gc.c", 1311, "char");
    result_258[0]=0;
    for(
    i_259=0 ,    0;    _for_condtionalA34=    i_259<n ,    _for_condtionalA34;    i_259++ ,    0    ){
        strcat(result_258,str);
    }
    __result143__ = __result_obj__ = result_258;
    return __result143__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_260;
int ovec_max_261;
const char* err_265;
int erro_ofs_266;
int options_267;
char* str_268;
struct real_pcre* re_269;
struct buffer* result_270;
_Bool _while_condtional14;
int options_271;
int len_272;
int regex_result_273;
int i_274;
_Bool _for_condtionalA35;
int i_275;
_Bool _for_condtionalA36;
_Bool _if_conditional102;
char* str_276;
_Bool _if_conditional103;
_Bool _if_conditional104;
char* str_277;
char* str_278;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_260, 0, sizeof(int));
memset(&ovec_max_261, 0, sizeof(int));
memset(&erro_ofs_266, 0, sizeof(int));
memset(&options_267, 0, sizeof(int));
memset(&str_268, 0, sizeof(char*));
memset(&re_269, 0, sizeof(struct real_pcre*));
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
    result_270=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1339, "struct buffer"));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        options_271=2097152;
        len_272=strlen(self);
        regex_result_273=pcre_exec(re_269,(struct pcre_extra*)0,self,len_272,offset_260,options_271,ovec_value_264,ovec_max_261*3);
        for(
        i_274=0 ,        0;        _for_condtionalA35=        i_274<ovec_max_261 ,        _for_condtionalA35;        i_274++ ,        0        ){
            start_262[i_274]=ovec_value_264[i_274*2];
        }
        for(
        i_275=0 ,        0;        _for_condtionalA36=        i_275<ovec_max_261 ,        _for_condtionalA36;        i_275++ ,        0        ){
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
    __result144__ = __result_obj__ = buffer_to_string(result_270);
    return __result144__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_279;
int ovec_max_280;
const char* err_284;
int erro_ofs_285;
int options_286;
char* str_287;
struct real_pcre* re_288;
struct buffer* result_289;
int n_290;
_Bool _while_condtional15;
int options_291;
int len_292;
int regex_result_293;
int i_294;
_Bool _for_condtionalA37;
int i_295;
_Bool _for_condtionalA38;
_Bool _if_conditional105;
char* str_296;
_Bool _if_conditional106;
_Bool _if_conditional107;
char* str_297;
_Bool _if_conditional108;
char* str_298;
char* str_299;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_279, 0, sizeof(int));
memset(&ovec_max_280, 0, sizeof(int));
memset(&erro_ofs_285, 0, sizeof(int));
memset(&options_286, 0, sizeof(int));
memset(&str_287, 0, sizeof(char*));
memset(&re_288, 0, sizeof(struct real_pcre*));
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
    result_289=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1402, "struct buffer"));
    n_290=0;
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_291=2097152;
        len_292=strlen(self);
        regex_result_293=pcre_exec(re_288,(struct pcre_extra*)0,self,len_292,offset_279,options_291,ovec_value_283,ovec_max_280*3);
        for(
        i_294=0 ,        0;        _for_condtionalA37=        i_294<ovec_max_280 ,        _for_condtionalA37;        i_294++ ,        0        ){
            start_281[i_294]=ovec_value_283[i_294*2];
        }
        for(
        i_295=0 ,        0;        _for_condtionalA38=        i_295<ovec_max_280 ,        _for_condtionalA38;        i_295++ ,        0        ){
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
    __result145__ = __result_obj__ = buffer_to_string(result_289);
    return __result145__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_300;
struct buffer* buf_301;
int i_302;
_Bool _for_condtionalA39;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_300, 0, sizeof(struct list$1charph*));
memset(&buf_301, 0, sizeof(struct buffer*));
memset(&i_302, 0, sizeof(int));
    result_300=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1461, "struct list$1charph"));
    buf_301=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1463, "struct buffer"));
    for(
    i_302=0 ,    0;    _for_condtionalA39=    i_302<charp_length(self) ,    _for_condtionalA39;    i_302++ ,    0    ){
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
    __result146__ = __result_obj__ = result_300;
    return __result146__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_303;
int offset_304;
int ovec_max_305;
const char* err_309;
int erro_ofs_310;
int options_311;
char* str_312;
struct real_pcre* re_313;
_Bool _while_condtional16;
int options_314;
int len_315;
int regex_result_316;
int i_317;
_Bool _for_condtionalA40;
int i_318;
_Bool _for_condtionalA41;
_Bool _if_conditional111;
char* str_319;
_Bool _if_conditional112;
_Bool _if_conditional113;
char* str_320;
_Bool _if_conditional114;
int i_321;
_Bool _for_condtionalA42;
char* match_string_322;
struct list$1charph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_303, 0, sizeof(struct list$1charph*));
memset(&offset_304, 0, sizeof(int));
memset(&ovec_max_305, 0, sizeof(int));
memset(&erro_ofs_310, 0, sizeof(int));
memset(&options_311, 0, sizeof(int));
memset(&str_312, 0, sizeof(char*));
memset(&re_313, 0, sizeof(struct real_pcre*));
memset(&options_314, 0, sizeof(int));
memset(&len_315, 0, sizeof(int));
memset(&regex_result_316, 0, sizeof(int));
memset(&i_317, 0, sizeof(int));
memset(&i_318, 0, sizeof(int));
memset(&str_319, 0, sizeof(char*));
memset(&str_320, 0, sizeof(char*));
memset(&i_321, 0, sizeof(int));
memset(&match_string_322, 0, sizeof(char*));
    result_303=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1484, "struct list$1charph"));
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
        for(
        i_317=0 ,        0;        _for_condtionalA40=        i_317<ovec_max_305 ,        _for_condtionalA40;        i_317++ ,        0        ){
            start_306[i_317]=ovec_value_308[i_317*2];
        }
        for(
        i_318=0 ,        0;        _for_condtionalA41=        i_318<ovec_max_305 ,        _for_condtionalA41;        i_318++ ,        0        ){
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
                for(
                i_321=1 ,                0;                _for_condtionalA42=                i_321<regex_result_316 ,                _for_condtionalA42;                i_321++ ,                0                ){
                    match_string_322=charp_substring(self,start_306[i_321],end_307[i_321]);
                    list$1charph_push_back(result_303,match_string_322);
                }
            }
            else {
                break;
            }
        }
    }
    __result147__ = __result_obj__ = result_303;
    return __result147__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_323;
int erro_ofs_324;
int options_325;
char* str_326;
struct real_pcre* re_327;
struct list$1charph* result_328;
int offset_329;
int ovec_max_330;
_Bool _while_condtional17;
int options_334;
int len_335;
int regex_result_336;
int i_337;
_Bool _for_condtionalA43;
int i_338;
_Bool _for_condtionalA44;
_Bool _if_conditional115;
char* str_339;
_Bool _if_conditional116;
_Bool _if_conditional117;
char* str_340;
_Bool _if_conditional118;
int i_341;
_Bool _for_condtionalA45;
char* match_str_342;
_Bool _if_conditional119;
char* str_343;
struct list$1charph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_324, 0, sizeof(int));
memset(&options_325, 0, sizeof(int));
memset(&str_326, 0, sizeof(char*));
memset(&re_327, 0, sizeof(struct real_pcre*));
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
    result_328=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1565, "struct list$1charph"));
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
        for(
        i_337=0 ,        0;        _for_condtionalA43=        i_337<ovec_max_330 ,        _for_condtionalA43;        i_337++ ,        0        ){
            start_331[i_337]=ovec_value_333[i_337*2];
        }
        for(
        i_338=0 ,        0;        _for_condtionalA44=        i_338<ovec_max_330 ,        _for_condtionalA44;        i_338++ ,        0        ){
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
                for(
                i_341=1 ,                0;                _for_condtionalA45=                i_341<regex_result_336 ,                _for_condtionalA45;                i_341++ ,                0                ){
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
    __result148__ = __result_obj__ = result_328;
    return __result148__;
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_344;
int ovec_max_345;
const char* err_349;
int erro_ofs_350;
int options_351;
char* str_352;
struct real_pcre* re_353;
_Bool _while_condtional18;
int options_354;
int len_355;
int regex_result_356;
int i_357;
_Bool _for_condtionalA46;
int i_358;
_Bool _for_condtionalA47;
_Bool _if_conditional120;
_Bool __result149__;
_Bool __result150__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_344, 0, sizeof(int));
memset(&ovec_max_345, 0, sizeof(int));
memset(&erro_ofs_350, 0, sizeof(int));
memset(&options_351, 0, sizeof(int));
memset(&str_352, 0, sizeof(char*));
memset(&re_353, 0, sizeof(struct real_pcre*));
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
        for(
        i_357=0 ,        0;        _for_condtionalA46=        i_357<ovec_max_345 ,        _for_condtionalA46;        i_357++ ,        0        ){
            start_346[i_357]=ovec_value_348[i_357*2];
        }
        for(
        i_358=0 ,        0;        _for_condtionalA47=        i_358<ovec_max_345 ,        _for_condtionalA47;        i_358++ ,        0        ){
            end_347[i_358]=ovec_value_348[i_358*2+1];
        }
        if(_if_conditional120=regex_result_356>0,        _if_conditional120) {
            __result149__ = (_Bool)1;
            return __result149__;
        }
        else {
            __result150__ = (_Bool)0;
            return __result150__;
        }
    }
    __result151__ = (_Bool)0;
    return __result151__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_359;
int erro_ofs_360;
int options_361;
char* str_362;
struct real_pcre* re_363;
struct list$1charph* result_364;
int offset_365;
int ovec_max_366;
int n_370;
_Bool _while_condtional19;
int options_371;
int len_372;
int regex_result_373;
int i_374;
_Bool _for_condtionalA48;
int i_375;
_Bool _for_condtionalA49;
_Bool _if_conditional121;
char* str_376;
_Bool _if_conditional122;
_Bool _if_conditional123;
char* str_377;
_Bool _if_conditional124;
int i_378;
_Bool _for_condtionalA50;
char* match_str_379;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* str_380;
struct list$1charph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_360, 0, sizeof(int));
memset(&options_361, 0, sizeof(int));
memset(&str_362, 0, sizeof(char*));
memset(&re_363, 0, sizeof(struct real_pcre*));
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
    result_364=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1687, "struct list$1charph"));
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
        for(
        i_374=0 ,        0;        _for_condtionalA48=        i_374<ovec_max_366 ,        _for_condtionalA48;        i_374++ ,        0        ){
            start_367[i_374]=ovec_value_369[i_374*2];
        }
        for(
        i_375=0 ,        0;        _for_condtionalA49=        i_375<ovec_max_366 ,        _for_condtionalA49;        i_375++ ,        0        ){
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
                for(
                i_378=1 ,                0;                _for_condtionalA50=                i_378<regex_result_373 ,                _for_condtionalA50;                i_378++ ,                0                ){
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
    __result152__ = __result_obj__ = result_364;
    return __result152__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const char* err_381;
int erro_ofs_382;
int options_383;
char* str_384;
struct real_pcre* re_385;
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
_Bool _for_condtionalA51;
int i_398;
_Bool _for_condtionalA52;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&erro_ofs_382, 0, sizeof(int));
memset(&options_383, 0, sizeof(int));
memset(&str_384, 0, sizeof(char*));
memset(&re_385, 0, sizeof(struct real_pcre*));
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
        for(
        i_397=0 ,        0;        _for_condtionalA51=        i_397<ovec_max_387 ,        _for_condtionalA51;        i_397++ ,        0        ){
            start_388[i_397]=ovec_value_390[i_397*2];
        }
        for(
        i_398=0 ,        0;        _for_condtionalA52=        i_398<ovec_max_387 ,        _for_condtionalA52;        i_398++ ,        0        ){
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
    __result153__ = result_391;
    return __result153__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_399;
int ovec_max_400;
const char* err_404;
int erro_ofs_405;
int options_406;
char* str_407;
struct real_pcre* re_408;
int n_409;
_Bool _while_condtional21;
int options_410;
int len_411;
int regex_result_412;
int i_413;
_Bool _for_condtionalA53;
int i_414;
_Bool _for_condtionalA54;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool __result154__;
_Bool _if_conditional132;
_Bool __result155__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_399, 0, sizeof(int));
memset(&ovec_max_400, 0, sizeof(int));
memset(&erro_ofs_405, 0, sizeof(int));
memset(&options_406, 0, sizeof(int));
memset(&str_407, 0, sizeof(char*));
memset(&re_408, 0, sizeof(struct real_pcre*));
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
        for(
        i_413=0 ,        0;        _for_condtionalA53=        i_413<ovec_max_400 ,        _for_condtionalA53;        i_413++ ,        0        ){
            start_401[i_413]=ovec_value_403[i_413*2];
        }
        for(
        i_414=0 ,        0;        _for_condtionalA54=        i_414<ovec_max_400 ,        _for_condtionalA54;        i_414++ ,        0        ){
            end_402[i_414]=ovec_value_403[i_414*2+1];
        }
        if(_if_conditional130=regex_result_412>0,        _if_conditional130) {
            n_409++;
            if(_if_conditional131=count==n_409,            _if_conditional131) {
                __result154__ = (_Bool)1;
                return __result154__;
            }
            if(_if_conditional132=offset_399==end_402[0],            _if_conditional132) {
                offset_399++;
            }
            else {
                offset_399=end_402[0];
            }
        }
        else {
            __result155__ = (_Bool)0;
            return __result155__;
        }
    }
    __result156__ = (_Bool)0;
    return __result156__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_415;
int ovec_max_416;
const char* err_420;
int erro_ofs_421;
int options_422;
char* str_423;
struct real_pcre* re_424;
struct buffer* result_425;
_Bool _while_condtional22;
int options_426;
int len_427;
int regex_result_428;
int i_429;
_Bool _for_condtionalA55;
int i_430;
_Bool _for_condtionalA56;
_Bool _if_conditional133;
char* str_431;
struct list$1charph* group_strings_432;
char* match_string_433;
char* block_result_434;
_Bool _if_conditional134;
char* __result157__;
_Bool _if_conditional135;
_Bool _if_conditional136;
char* str_435;
_Bool _if_conditional137;
char* str_436;
_Bool _if_conditional138;
struct list$1charph* group_strings_437;
int i_438;
_Bool _for_condtionalA57;
char* match_string_439;
char* match_string_440;
char* block_result_441;
_Bool _if_conditional139;
char* __result158__;
_Bool _if_conditional140;
char* str_442;
char* str_443;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_415, 0, sizeof(int));
memset(&ovec_max_416, 0, sizeof(int));
memset(&erro_ofs_421, 0, sizeof(int));
memset(&options_422, 0, sizeof(int));
memset(&str_423, 0, sizeof(char*));
memset(&re_424, 0, sizeof(struct real_pcre*));
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
    result_425=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1899, "struct buffer"));
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_426=2097152;
        len_427=strlen(self);
        regex_result_428=pcre_exec(re_424,(struct pcre_extra*)0,self,len_427,offset_415,options_426,ovec_value_419,ovec_max_416*3);
        for(
        i_429=0 ,        0;        _for_condtionalA55=        i_429<ovec_max_416 ,        _for_condtionalA55;        i_429++ ,        0        ){
            start_417[i_429]=ovec_value_419[i_429*2];
        }
        for(
        i_430=0 ,        0;        _for_condtionalA56=        i_430<ovec_max_416 ,        _for_condtionalA56;        i_430++ ,        0        ){
            end_418[i_430]=ovec_value_419[i_430*2+1];
        }
        if(_if_conditional133=regex_result_428==1,        _if_conditional133) {
            str_431=charp_substring(self,offset_415,start_417[0]);
            buffer_append_str(result_425,str_431);
            group_strings_432=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1919, "struct list$1charph"));
            match_string_433=charp_substring(self,start_417[0],end_418[0]);
            list$1charph_push_back(group_strings_432,charp_substring(self,start_417[0],end_418[0]));
            block_result_434=block(parent,match_string_433,group_strings_432);
            if(_if_conditional134=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional134) {
                __result157__ = __result_obj__ = buffer_to_string(result_425);
                return __result157__;
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
                group_strings_437=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1958, "struct list$1charph"));
                for(
                i_438=1 ,                0;                _for_condtionalA57=                i_438<regex_result_428 ,                _for_condtionalA57;                i_438++ ,                0                ){
                    match_string_439=charp_substring(self,start_417[i_438],end_418[i_438]);
                    list$1charph_push_back(group_strings_437,match_string_439);
                }
                match_string_440=charp_substring(self,start_417[0],end_418[0]);
                block_result_441=block(parent,match_string_440,group_strings_437);
                if(_if_conditional139=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional139) {
                    __result158__ = __result_obj__ = buffer_to_string(result_425);
                    return __result158__;
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
    __result159__ = __result_obj__ = buffer_to_string(result_425);
    return __result159__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int offset_444;
int ovec_max_445;
const char* err_449;
int erro_ofs_450;
int options_451;
char* str_452;
struct real_pcre* re_453;
struct buffer* result_454;
int n_455;
_Bool _while_condtional23;
int options_456;
int len_457;
int regex_result_458;
int i_459;
_Bool _for_condtionalA58;
int i_460;
_Bool _for_condtionalA59;
_Bool _if_conditional141;
char* str_461;
struct list$1charph* group_strings_462;
char* match_string_463;
char* block_result_464;
_Bool _if_conditional142;
char* __result160__;
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
_Bool _for_condtionalA60;
char* match_string_470;
char* match_string_471;
char* block_result_472;
_Bool _if_conditional148;
char* __result161__;
_Bool _if_conditional149;
char* str_473;
_Bool _if_conditional150;
char* str_474;
char* str_475;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&offset_444, 0, sizeof(int));
memset(&ovec_max_445, 0, sizeof(int));
memset(&erro_ofs_450, 0, sizeof(int));
memset(&options_451, 0, sizeof(int));
memset(&str_452, 0, sizeof(char*));
memset(&re_453, 0, sizeof(struct real_pcre*));
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
    result_454=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 2007, "struct buffer"));
    n_455=0;
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_456=2097152;
        len_457=strlen(self);
        regex_result_458=pcre_exec(re_453,(struct pcre_extra*)0,self,len_457,offset_444,options_456,ovec_value_448,ovec_max_445*3);
        for(
        i_459=0 ,        0;        _for_condtionalA58=        i_459<ovec_max_445 ,        _for_condtionalA58;        i_459++ ,        0        ){
            start_446[i_459]=ovec_value_448[i_459*2];
        }
        for(
        i_460=0 ,        0;        _for_condtionalA59=        i_460<ovec_max_445 ,        _for_condtionalA59;        i_460++ ,        0        ){
            end_447[i_460]=ovec_value_448[i_460*2+1];
        }
        if(_if_conditional141=regex_result_458==1,        _if_conditional141) {
            n_455++;
            str_461=charp_substring(self,offset_444,start_446[0]);
            buffer_append_str(result_454,str_461);
            group_strings_462=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 2030, "struct list$1charph"));
            list$1charph_push_back(group_strings_462,charp_substring(self,start_446[0],end_447[0]));
            match_string_463=charp_substring(self,start_446[0],end_447[0]);
            block_result_464=block(parent,match_string_463,group_strings_462);
            if(_if_conditional142=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional142) {
                __result160__ = __result_obj__ = buffer_to_string(result_454);
                return __result160__;
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
                group_strings_468=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 2077, "struct list$1charph"));
                for(
                i_469=1 ,                0;                _for_condtionalA60=                i_469<regex_result_458 ,                _for_condtionalA60;                i_469++ ,                0                ){
                    match_string_470=charp_substring(self,start_446[i_469],end_447[i_469]);
                    list$1charph_push_back(group_strings_468,match_string_470);
                }
                match_string_471=charp_substring(self,start_446[0],end_447[0]);
                block_result_472=block(parent,match_string_471,group_strings_468);
                if(_if_conditional148=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional148) {
                    __result161__ = __result_obj__ = buffer_to_string(result_454);
                    return __result161__;
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
    __result162__ = __result_obj__ = buffer_to_string(result_454);
    return __result162__;
}

unsigned int wchar_tp_get_hash_key(int* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int result_476;
int* p_477;
_Bool _while_condtional24;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_476, 0, sizeof(int));
memset(&p_477, 0, sizeof(int*));
    result_476=0;
    p_477=value;
    while(_while_condtional24=*p_477,    _while_condtional24) {
        result_476+=(*p_477);
        p_477++;
    }
    __result163__ = result_476;
    return __result163__;
}

_Bool wstring_equals(int* left, int* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = wcscmp(left,right)==0;
    return __result165__;
}

_Bool wchar_t_operator_equals(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result167__ = left==right;
    return __result167__;
}

_Bool wchar_t_operator_not_equals(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result168__ = left!=right;
    return __result168__;
}

unsigned int wchar_t_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result169__ = value;
    return __result169__;
}

_Bool wchar_t_equals(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result170__ = left==right;
    return __result170__;
}

char* wchar_t_to_string(int wc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result171__ = __result_obj__ = xsprintf("%ls",wc);
    return __result171__;
}

char* string_chomp(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* result_478;
_Bool _if_conditional151;
char* __result172__;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_478, 0, sizeof(char*));
    result_478=__builtin_string(str);
    if(_if_conditional151=result_478[string_length(result_478)-1]==10,    _if_conditional151) {
        __result172__ = __result_obj__ = string_substring(result_478,0,-2);
        return __result172__;
    }
    __result173__ = __result_obj__ = result_478;
    return __result173__;
}

