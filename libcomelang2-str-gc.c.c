// source head
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long int);
    long (*write)(void*,const char*,unsigned long int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
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
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
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
extern void* (*pcre_malloc)(unsigned long int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef unsigned int wint_t;
typedef unsigned long int wctype_t;
struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};
typedef struct __mbstate_t mbstate_t;
struct tm;
typedef unsigned int* wstring;
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
struct anonymous_typeX4
{
    long long __ll;
    long double __ld;
};
typedef struct anonymous_typeX4 max_align_t;
typedef long ptrdiff_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long int);
extern void* (*GC_oom_fn)(unsigned long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY5 { GC_EVENT_START
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
typedef enum anonymous_typeY5 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY5);
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
enum anonymous_typeY6 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY6 GC_ToggleRefStatus;
typedef enum anonymous_typeY6 (*GC_toggleref_func)(void*);
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
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long int);

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);

struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);

int fclose(struct _IO_FILE* anonymous_var_nameX6);

int remove(const char* anonymous_var_nameX7);

int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);

int feof(struct _IO_FILE* anonymous_var_nameX10);

int ferror(struct _IO_FILE* anonymous_var_nameX11);

int fflush(struct _IO_FILE* anonymous_var_nameX12);

void clearerr(struct _IO_FILE* anonymous_var_nameX13);

int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);

long ftell(struct _IO_FILE* anonymous_var_nameX17);

void rewind(struct _IO_FILE* anonymous_var_nameX18);

int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);

int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);

unsigned long int fread(void* anonymous_var_nameX23, unsigned long int anonymous_var_nameX24, unsigned long int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);

unsigned long int fwrite(const void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);

int fgetc(struct _IO_FILE* anonymous_var_nameX31);

int getc(struct _IO_FILE* anonymous_var_nameX32);

int getchar();

int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);

int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);

int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);

int putchar(int anonymous_var_nameX39);

char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);

int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);

int puts(const char* anonymous_var_nameX45);

int printf(const char* anonymous_var_nameX46, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);

int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);

int snprintf(char* anonymous_var_nameX51, unsigned long int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);

int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);

int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);

int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);

int vsnprintf(char* anonymous_var_nameX62, unsigned long int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);

int scanf(const char* anonymous_var_nameX66, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);

int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);

int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);

int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);

int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);

void perror(const char* anonymous_var_nameX79);

int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long int anonymous_var_nameX83);

void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);

char* tmpnam(char* anonymous_var_nameX86);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long int anonymous_var_nameX88, const char* anonymous_var_nameX89);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long int* anonymous_var_nameX91);

struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);

struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);

int pclose(struct _IO_FILE* anonymous_var_nameX96);

int fileno(struct _IO_FILE* anonymous_var_nameX97);

int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);

long ftello(struct _IO_FILE* anonymous_var_nameX101);

int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);

int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);

void flockfile(struct _IO_FILE* anonymous_var_nameX107);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);

void funlockfile(struct _IO_FILE* anonymous_var_nameX109);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);

int putchar_unlocked(int anonymous_var_nameX113);

long getdelim(char** anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);

long getline(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);

int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);

char* ctermid(char* anonymous_var_nameX125);

char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);

char* cuserid(char* anonymous_var_nameX128);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);

void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long int anonymous_var_nameX132);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);

int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);

unsigned long int fread_unlocked(void* anonymous_var_nameX137, unsigned long int anonymous_var_nameX138, unsigned long int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);

int getw(struct _IO_FILE* anonymous_var_nameX149);

int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);

char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153);

int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);

int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);

char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);

int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);

struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);

int atoi(const char* anonymous_var_nameX177);

long atol(const char* anonymous_var_nameX178);

long long atoll(const char* anonymous_var_nameX179);

double atof(const char* anonymous_var_nameX180);

float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);

double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);

long double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);

long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);

unsigned long int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);

long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);

unsigned long long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);

int rand();

void srand(unsigned int anonymous_var_nameX199);

void* malloc(unsigned long int anonymous_var_nameX200);

void* calloc(unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202);

void* realloc(void* anonymous_var_nameX203, unsigned long int anonymous_var_nameX204);

void free(void* anonymous_var_nameX205);

void* aligned_alloc(unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX208);

void _Exit(int anonymous_var_nameX209);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX210);

char* getenv(const char* anonymous_var_nameX211);

int system(const char* anonymous_var_nameX212);

void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long int anonymous_var_nameX215, unsigned long int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220, unsigned long int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX224);

long labs(long anonymous_var_nameX225);

long long llabs(long long anonymous_var_nameX226);

struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX231, long long anonymous_var_nameX232);

int mblen(const char* anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);

int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);

unsigned long int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX246, unsigned long int anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);

int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);

int unsetenv(const char* anonymous_var_nameX252);

int mkstemp(char* anonymous_var_nameX253);

int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);

char* mkdtemp(char* anonymous_var_nameX256);

int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);

int rand_r(unsigned int* anonymous_var_nameX260);

char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);

long int random();

void srandom(unsigned int anonymous_var_nameX263);

char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long int anonymous_var_nameX266);

char* setstate(char* anonymous_var_nameX267);

int putenv(char* anonymous_var_nameX268);

int posix_openpt(int anonymous_var_nameX269);

int grantpt(int anonymous_var_nameX270);

int unlockpt(int anonymous_var_nameX271);

char* ptsname(int anonymous_var_nameX272);

char* l64a(long anonymous_var_nameX273);

long a64l(const char* anonymous_var_nameX274);

void setkey(const char* anonymous_var_nameX275);

double drand48();

double erand48(unsigned short int anonymous_var_nameX276[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX277[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX278[3]);

void srand48(long anonymous_var_nameX279);

unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);

void lcong48(unsigned short int anonymous_var_nameX281[7]);

void* alloca(unsigned long int anonymous_var_nameX282);

char* mktemp(char* anonymous_var_nameX283);

int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);

int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);

void* valloc(unsigned long int anonymous_var_nameX289);

void* memalign(unsigned long int anonymous_var_nameX290, unsigned long int anonymous_var_nameX291);

int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);

int clearenv();

void* reallocarray(void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);

void qsort_r(void* anonymous_var_nameX297, unsigned long int anonymous_var_nameX298, unsigned long int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);

int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long int anonymous_var_nameX306);

char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);

char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);

char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);

char* secure_getenv(const char* anonymous_var_nameX318);

float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);

double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);

long double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);

void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long int anonymous_var_nameX330);

void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long int anonymous_var_nameX333);

void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);

int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);

void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);

char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);

char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long int anonymous_var_nameX347);

char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);

char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long int anonymous_var_nameX352);

int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);

int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long int anonymous_var_nameX357);

int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);

unsigned long int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long int anonymous_var_nameX362);

char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);

char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);

unsigned long int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);

unsigned long int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);

char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);

char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);

char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);

unsigned long int strlen(const char* anonymous_var_nameX377);

char* strerror(int anonymous_var_nameX378);

int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);

void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);

void bzero(void* anonymous_var_nameX385, unsigned long int anonymous_var_nameX386);

char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);

char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);

int ffs(int anonymous_var_nameX391);

int ffsl(long anonymous_var_nameX392);

int ffsll(long long anonymous_var_nameX393);

int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);

int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long int anonymous_var_nameX398);

int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);

int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);

char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);

int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);

char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);

char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long int anonymous_var_nameX416);

unsigned long int strnlen(const char* anonymous_var_nameX417, unsigned long int anonymous_var_nameX418);

char* strdup(const char* anonymous_var_nameX419);

char* strndup(const char* anonymous_var_nameX420, unsigned long int anonymous_var_nameX421);

char* strsignal(int anonymous_var_nameX422);

char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);

int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);

unsigned long int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);

void* memmem(const void* anonymous_var_nameX432, unsigned long int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);

void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long int anonymous_var_nameX439);

char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);

unsigned long int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long int anonymous_var_nameX444);

unsigned long int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long int anonymous_var_nameX447);

void explicit_bzero(void* anonymous_var_nameX448, unsigned long int anonymous_var_nameX449);

int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);

char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);

char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);

void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long int anonymous_var_nameX458);

void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long int anonymous_var_nameX461);

char* basename();

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

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

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

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

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

static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
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

unsigned long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(unsigned int c);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

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

char* size_t_to_string(unsigned long int self);

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

int FILE_write(struct _IO_FILE* f, char* str);

char* FILE_read(struct _IO_FILE* f);

int FILE_fclose(struct _IO_FILE* f);

int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX603, int anonymous_var_nameX604, const char** anonymous_var_nameX605, int* anonymous_var_nameX606, const unsigned char* anonymous_var_nameX607);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX608, int anonymous_var_nameX609, const char** anonymous_var_nameX610, int* anonymous_var_nameX611, const unsigned char* anonymous_var_nameX612);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX613, int anonymous_var_nameX614, const char** anonymous_var_nameX615, int* anonymous_var_nameX616, const unsigned char* anonymous_var_nameX617);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX618, int anonymous_var_nameX619, int* anonymous_var_nameX620, const char** anonymous_var_nameX621, int* anonymous_var_nameX622, const unsigned char* anonymous_var_nameX623);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX624, int anonymous_var_nameX625, int* anonymous_var_nameX626, const char** anonymous_var_nameX627, int* anonymous_var_nameX628, const unsigned char* anonymous_var_nameX629);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX630, int anonymous_var_nameX631, int* anonymous_var_nameX632, const char** anonymous_var_nameX633, int* anonymous_var_nameX634, const unsigned char* anonymous_var_nameX635);

int pcre_config(int anonymous_var_nameX636, void* anonymous_var_nameX637);

int pcre16_config(int anonymous_var_nameX638, void* anonymous_var_nameX639);

int pcre32_config(int anonymous_var_nameX640, void* anonymous_var_nameX641);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX642, const char* anonymous_var_nameX643, int* anonymous_var_nameX644, int anonymous_var_nameX645, const char* anonymous_var_nameX646, char* anonymous_var_nameX647, int anonymous_var_nameX648);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX649, const unsigned short int* anonymous_var_nameX650, int* anonymous_var_nameX651, int anonymous_var_nameX652, const unsigned short int* anonymous_var_nameX653, unsigned short int* anonymous_var_nameX654, int anonymous_var_nameX655);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX656, const unsigned int* anonymous_var_nameX657, int* anonymous_var_nameX658, int anonymous_var_nameX659, const unsigned int* anonymous_var_nameX660, unsigned int* anonymous_var_nameX661, int anonymous_var_nameX662);

int pcre_copy_substring(const char* anonymous_var_nameX663, int* anonymous_var_nameX664, int anonymous_var_nameX665, int anonymous_var_nameX666, char* anonymous_var_nameX667, int anonymous_var_nameX668);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX669, int* anonymous_var_nameX670, int anonymous_var_nameX671, int anonymous_var_nameX672, unsigned short int* anonymous_var_nameX673, int anonymous_var_nameX674);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX675, int* anonymous_var_nameX676, int anonymous_var_nameX677, int anonymous_var_nameX678, unsigned int* anonymous_var_nameX679, int anonymous_var_nameX680);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX681, const struct pcre_extra* anonymous_var_nameX682, const char* anonymous_var_nameX683, int anonymous_var_nameX684, int anonymous_var_nameX685, int anonymous_var_nameX686, int* anonymous_var_nameX687, int anonymous_var_nameX688, int* anonymous_var_nameX689, int anonymous_var_nameX690);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX691, const struct pcre16_extra* anonymous_var_nameX692, const unsigned short int* anonymous_var_nameX693, int anonymous_var_nameX694, int anonymous_var_nameX695, int anonymous_var_nameX696, int* anonymous_var_nameX697, int anonymous_var_nameX698, int* anonymous_var_nameX699, int anonymous_var_nameX700);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX701, const struct pcre32_extra* anonymous_var_nameX702, const unsigned int* anonymous_var_nameX703, int anonymous_var_nameX704, int anonymous_var_nameX705, int anonymous_var_nameX706, int* anonymous_var_nameX707, int anonymous_var_nameX708, int* anonymous_var_nameX709, int anonymous_var_nameX710);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX711, const struct pcre_extra* anonymous_var_nameX712, const char* anonymous_var_nameX713, int anonymous_var_nameX714, int anonymous_var_nameX715, int anonymous_var_nameX716, int* anonymous_var_nameX717, int anonymous_var_nameX718);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX719, const struct pcre16_extra* anonymous_var_nameX720, const unsigned short int* anonymous_var_nameX721, int anonymous_var_nameX722, int anonymous_var_nameX723, int anonymous_var_nameX724, int* anonymous_var_nameX725, int anonymous_var_nameX726);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX727, const struct pcre32_extra* anonymous_var_nameX728, const unsigned int* anonymous_var_nameX729, int anonymous_var_nameX730, int anonymous_var_nameX731, int anonymous_var_nameX732, int* anonymous_var_nameX733, int anonymous_var_nameX734);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX735, const struct pcre_extra* anonymous_var_nameX736, const char* anonymous_var_nameX737, int anonymous_var_nameX738, int anonymous_var_nameX739, int anonymous_var_nameX740, int* anonymous_var_nameX741, int anonymous_var_nameX742, struct real_pcre_jit_stack* anonymous_var_nameX743);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX744, const struct pcre16_extra* anonymous_var_nameX745, const unsigned short int* anonymous_var_nameX746, int anonymous_var_nameX747, int anonymous_var_nameX748, int anonymous_var_nameX749, int* anonymous_var_nameX750, int anonymous_var_nameX751, struct real_pcre16_jit_stack* anonymous_var_nameX752);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX753, const struct pcre32_extra* anonymous_var_nameX754, const unsigned int* anonymous_var_nameX755, int anonymous_var_nameX756, int anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, int anonymous_var_nameX760, struct real_pcre32_jit_stack* anonymous_var_nameX761);

void pcre_free_substring(const char* anonymous_var_nameX762);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX763);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX764);

void pcre_free_substring_list(const char** anonymous_var_nameX765);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX766);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX767);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX768, const struct pcre_extra* anonymous_var_nameX769, int anonymous_var_nameX770, void* anonymous_var_nameX771);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX772, const struct pcre16_extra* anonymous_var_nameX773, int anonymous_var_nameX774, void* anonymous_var_nameX775);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX776, const struct pcre32_extra* anonymous_var_nameX777, int anonymous_var_nameX778, void* anonymous_var_nameX779);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX780, const char* anonymous_var_nameX781, int* anonymous_var_nameX782, int anonymous_var_nameX783, const char* anonymous_var_nameX784, const char** anonymous_var_nameX785);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX786, const unsigned short int* anonymous_var_nameX787, int* anonymous_var_nameX788, int anonymous_var_nameX789, const unsigned short int* anonymous_var_nameX790, const unsigned short int** anonymous_var_nameX791);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX792, const unsigned int* anonymous_var_nameX793, int* anonymous_var_nameX794, int anonymous_var_nameX795, const unsigned int* anonymous_var_nameX796, const unsigned int** anonymous_var_nameX797);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX798, const char* anonymous_var_nameX799);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX800, const unsigned short int* anonymous_var_nameX801);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX802, const unsigned int* anonymous_var_nameX803);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX804, const char* anonymous_var_nameX805, char** anonymous_var_nameX806, char** anonymous_var_nameX807);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX808, const unsigned short int* anonymous_var_nameX809, unsigned short int** anonymous_var_nameX810, unsigned short int** anonymous_var_nameX811);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX812, const unsigned int* anonymous_var_nameX813, unsigned int** anonymous_var_nameX814, unsigned int** anonymous_var_nameX815);

int pcre_get_substring(const char* anonymous_var_nameX816, int* anonymous_var_nameX817, int anonymous_var_nameX818, int anonymous_var_nameX819, const char** anonymous_var_nameX820);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX821, int* anonymous_var_nameX822, int anonymous_var_nameX823, int anonymous_var_nameX824, const unsigned short int** anonymous_var_nameX825);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX826, int* anonymous_var_nameX827, int anonymous_var_nameX828, int anonymous_var_nameX829, const unsigned int** anonymous_var_nameX830);

int pcre_get_substring_list(const char* anonymous_var_nameX831, int* anonymous_var_nameX832, int anonymous_var_nameX833, const char*** anonymous_var_nameX834);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX835, int* anonymous_var_nameX836, int anonymous_var_nameX837, const unsigned short int*** anonymous_var_nameX838);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX839, int* anonymous_var_nameX840, int anonymous_var_nameX841, const unsigned int*** anonymous_var_nameX842);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX843, int anonymous_var_nameX844);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX845, int anonymous_var_nameX846);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX847, int anonymous_var_nameX848);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX849, int anonymous_var_nameX850, const char** anonymous_var_nameX851);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX852, int anonymous_var_nameX853, const char** anonymous_var_nameX854);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX855, int anonymous_var_nameX856, const char** anonymous_var_nameX857);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX858);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX859);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX860);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX861, struct pcre_extra* anonymous_var_nameX862, const unsigned char* anonymous_var_nameX863);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX864, struct pcre16_extra* anonymous_var_nameX865, const unsigned char* anonymous_var_nameX866);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX867, struct pcre32_extra* anonymous_var_nameX868, const unsigned char* anonymous_var_nameX869);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX870, const unsigned short int* anonymous_var_nameX871, int anonymous_var_nameX872, int* anonymous_var_nameX873, int anonymous_var_nameX874);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX875, const unsigned int* anonymous_var_nameX876, int anonymous_var_nameX877, int* anonymous_var_nameX878, int anonymous_var_nameX879);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX880, int anonymous_var_nameX881);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX882, int anonymous_var_nameX883);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX884, int anonymous_var_nameX885);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX886);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX887);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX888);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX889, struct real_pcre_jit_stack* (*anonymous_var_nameX890)(void*), void* anonymous_var_nameX891);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX892, struct real_pcre16_jit_stack* (*anonymous_var_nameX893)(void*), void* anonymous_var_nameX894);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX895, struct real_pcre32_jit_stack* (*anonymous_var_nameX896)(void*), void* anonymous_var_nameX897);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX898, const unsigned int* anonymous_var_nameX899);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX900, const unsigned int* anonymous_var_nameX901, unsigned long int anonymous_var_nameX902);

unsigned int* wcscat(unsigned int* anonymous_var_nameX903, const unsigned int* anonymous_var_nameX904);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX905, const unsigned int* anonymous_var_nameX906, unsigned long int anonymous_var_nameX907);

int wcscmp(const unsigned int* anonymous_var_nameX908, const unsigned int* anonymous_var_nameX909);

int wcsncmp(const unsigned int* anonymous_var_nameX910, const unsigned int* anonymous_var_nameX911, unsigned long int anonymous_var_nameX912);

int wcscoll(const unsigned int* anonymous_var_nameX913, const unsigned int* anonymous_var_nameX914);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX915, const unsigned int* anonymous_var_nameX916, unsigned long int anonymous_var_nameX917);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX918, unsigned int anonymous_var_nameX919);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX920, unsigned int anonymous_var_nameX921);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX922, const unsigned int* anonymous_var_nameX923);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX924, const unsigned int* anonymous_var_nameX925);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX926, const unsigned int* anonymous_var_nameX927);

unsigned int* wcstok(unsigned int* anonymous_var_nameX928, const unsigned int* anonymous_var_nameX929, unsigned int** anonymous_var_nameX930);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX931);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX932, const unsigned int* anonymous_var_nameX933);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX934, const unsigned int* anonymous_var_nameX935);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX936, unsigned int anonymous_var_nameX937, unsigned long int anonymous_var_nameX938);

int wmemcmp(const unsigned int* anonymous_var_nameX939, const unsigned int* anonymous_var_nameX940, unsigned long int anonymous_var_nameX941);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX942, const unsigned int* anonymous_var_nameX943, unsigned long int anonymous_var_nameX944);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX945, const unsigned int* anonymous_var_nameX946, unsigned long int anonymous_var_nameX947);

unsigned int* wmemset(unsigned int* anonymous_var_nameX948, unsigned int anonymous_var_nameX949, unsigned long int anonymous_var_nameX950);

unsigned int btowc(int anonymous_var_nameX951);

int wctob(unsigned int anonymous_var_nameX952);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX953);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX954, const char* anonymous_var_nameX955, unsigned long int anonymous_var_nameX956, struct __mbstate_t* anonymous_var_nameX957);

unsigned long int wcrtomb(char* anonymous_var_nameX958, unsigned int anonymous_var_nameX959, struct __mbstate_t* anonymous_var_nameX960);

unsigned long int mbrlen(const char* anonymous_var_nameX961, unsigned long int anonymous_var_nameX962, struct __mbstate_t* anonymous_var_nameX963);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX964, const char** anonymous_var_nameX965, unsigned long int anonymous_var_nameX966, struct __mbstate_t* anonymous_var_nameX967);

unsigned long int wcsrtombs(char* anonymous_var_nameX968, const unsigned int** anonymous_var_nameX969, unsigned long int anonymous_var_nameX970, struct __mbstate_t* anonymous_var_nameX971);

float wcstof(const unsigned int* anonymous_var_nameX972, unsigned int** anonymous_var_nameX973);

double wcstod(const unsigned int* anonymous_var_nameX974, unsigned int** anonymous_var_nameX975);

long double wcstold(const unsigned int* anonymous_var_nameX976, unsigned int** anonymous_var_nameX977);

long wcstol(const unsigned int* anonymous_var_nameX978, unsigned int** anonymous_var_nameX979, int anonymous_var_nameX980);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX981, unsigned int** anonymous_var_nameX982, int anonymous_var_nameX983);

long long wcstoll(const unsigned int* anonymous_var_nameX984, unsigned int** anonymous_var_nameX985, int anonymous_var_nameX986);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX987, unsigned int** anonymous_var_nameX988, int anonymous_var_nameX989);

int fwide(struct _IO_FILE* anonymous_var_nameX990, int anonymous_var_nameX991);

int wprintf(const unsigned int* anonymous_var_nameX992, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX993, const unsigned int* anonymous_var_nameX994, ...);

int swprintf(unsigned int* anonymous_var_nameX995, unsigned long int anonymous_var_nameX996, const unsigned int* anonymous_var_nameX997, ...);

int vwprintf(const unsigned int* anonymous_var_nameX998, va_list anonymous_var_nameX999);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1000, const unsigned int* anonymous_var_nameX1001, va_list anonymous_var_nameX1002);

int vswprintf(unsigned int* anonymous_var_nameX1003, unsigned long int anonymous_var_nameX1004, const unsigned int* anonymous_var_nameX1005, va_list anonymous_var_nameX1006);

int wscanf(const unsigned int* anonymous_var_nameX1007, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1008, const unsigned int* anonymous_var_nameX1009, ...);

int swscanf(const unsigned int* anonymous_var_nameX1010, const unsigned int* anonymous_var_nameX1011, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1012, va_list anonymous_var_nameX1013);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, va_list anonymous_var_nameX1016);

int vswscanf(const unsigned int* anonymous_var_nameX1017, const unsigned int* anonymous_var_nameX1018, va_list anonymous_var_nameX1019);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1020);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1021);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1022, struct _IO_FILE* anonymous_var_nameX1023);

unsigned int putwc(unsigned int anonymous_var_nameX1024, struct _IO_FILE* anonymous_var_nameX1025);

unsigned int putwchar(unsigned int anonymous_var_nameX1026);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1027, int anonymous_var_nameX1028, struct _IO_FILE* anonymous_var_nameX1029);

int fputws(const unsigned int* anonymous_var_nameX1030, struct _IO_FILE* anonymous_var_nameX1031);

unsigned int ungetwc(unsigned int anonymous_var_nameX1032, struct _IO_FILE* anonymous_var_nameX1033);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1034, unsigned long int anonymous_var_nameX1035, const unsigned int* anonymous_var_nameX1036, const struct tm* anonymous_var_nameX1037);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1038);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1039);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1040, struct _IO_FILE* anonymous_var_nameX1041);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1042, struct _IO_FILE* anonymous_var_nameX1043);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1044);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1045, int anonymous_var_nameX1046, struct _IO_FILE* anonymous_var_nameX1047);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1048, struct _IO_FILE* anonymous_var_nameX1049);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1050, unsigned long int anonymous_var_nameX1051, const unsigned int* anonymous_var_nameX1052, const struct tm* anonymous_var_nameX1053, struct __locale_struct* anonymous_var_nameX1054);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1055, unsigned long int* anonymous_var_nameX1056);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1057, const char** anonymous_var_nameX1058, unsigned long int anonymous_var_nameX1059, unsigned long int anonymous_var_nameX1060, struct __mbstate_t* anonymous_var_nameX1061);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1062, const unsigned int** anonymous_var_nameX1063, unsigned long int anonymous_var_nameX1064, unsigned long int anonymous_var_nameX1065, struct __mbstate_t* anonymous_var_nameX1066);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1067);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1068, unsigned long int anonymous_var_nameX1069);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1070, const unsigned int* anonymous_var_nameX1071);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1072, const unsigned int* anonymous_var_nameX1073, unsigned long int anonymous_var_nameX1074);

int wcscasecmp(const unsigned int* anonymous_var_nameX1075, const unsigned int* anonymous_var_nameX1076);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1077, const unsigned int* anonymous_var_nameX1078, struct __locale_struct* anonymous_var_nameX1079);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1080, const unsigned int* anonymous_var_nameX1081, unsigned long int anonymous_var_nameX1082);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1083, const unsigned int* anonymous_var_nameX1084, unsigned long int anonymous_var_nameX1085, struct __locale_struct* anonymous_var_nameX1086);

int wcscoll_l(const unsigned int* anonymous_var_nameX1087, const unsigned int* anonymous_var_nameX1088, struct __locale_struct* anonymous_var_nameX1089);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1090, const unsigned int* anonymous_var_nameX1091, unsigned long int anonymous_var_nameX1092, struct __locale_struct* anonymous_var_nameX1093);

int wcwidth(unsigned int anonymous_var_nameX1094);

int wcswidth(const unsigned int* anonymous_var_nameX1095, unsigned long int anonymous_var_nameX1096);

int iswalnum(unsigned int anonymous_var_nameX1097);

int iswalpha(unsigned int anonymous_var_nameX1098);

int iswblank(unsigned int anonymous_var_nameX1099);

int iswcntrl(unsigned int anonymous_var_nameX1100);

int iswdigit(unsigned int anonymous_var_nameX1101);

int iswgraph(unsigned int anonymous_var_nameX1102);

int iswlower(unsigned int anonymous_var_nameX1103);

int iswprint(unsigned int anonymous_var_nameX1104);

int iswpunct(unsigned int anonymous_var_nameX1105);

int iswspace(unsigned int anonymous_var_nameX1106);

int iswupper(unsigned int anonymous_var_nameX1107);

int iswxdigit(unsigned int anonymous_var_nameX1108);

int iswctype(unsigned int anonymous_var_nameX1109, unsigned long int anonymous_var_nameX1110);

unsigned int towlower(unsigned int anonymous_var_nameX1111);

unsigned int towupper(unsigned int anonymous_var_nameX1112);

unsigned long int wctype(const char* anonymous_var_nameX1113);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1115)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1117)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1119)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1120);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1121);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1122);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1123);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1124)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1125);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1126);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1127);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1128);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1129);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1130);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1131);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1132);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1133);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1134);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1135);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1136);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1137);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1138);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1139);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1140);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1141);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1142);

char* GC_strdup(const char* anonymous_var_nameX1143);

char* GC_strndup(const char* anonymous_var_nameX1144, unsigned long int anonymous_var_nameX1145);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1146);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1147);

void* GC_memalign(unsigned long int anonymous_var_nameX1148, unsigned long int anonymous_var_nameX1149);

int GC_posix_memalign(void** anonymous_var_nameX1150, unsigned long int anonymous_var_nameX1151, unsigned long int anonymous_var_nameX1152);

void GC_free(void* anonymous_var_nameX1153);

void GC_change_stubborn(const void* anonymous_var_nameX1154);

void GC_end_stubborn_change(const void* anonymous_var_nameX1155);

void* GC_base(void* anonymous_var_nameX1156);

int GC_is_heap_ptr(const void* anonymous_var_nameX1157);

unsigned long int GC_size(const void* anonymous_var_nameX1158);

void* GC_realloc(void* anonymous_var_nameX1159, unsigned long int anonymous_var_nameX1160);

int GC_expand_hp(unsigned long int anonymous_var_nameX1161);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1162);

void GC_exclude_static_roots(void* anonymous_var_nameX1163, void* anonymous_var_nameX1164);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1165, void* anonymous_var_nameX1166);

void GC_remove_roots(void* anonymous_var_nameX1167, void* anonymous_var_nameX1168);

void GC_register_displacement(unsigned long int anonymous_var_nameX1169);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1170);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1171)());

void GC_set_stop_func(int (*anonymous_var_nameX1172)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1173, unsigned long int* anonymous_var_nameX1174, unsigned long int* anonymous_var_nameX1175, unsigned long int* anonymous_var_nameX1176, unsigned long int* anonymous_var_nameX1177);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1178, unsigned long int anonymous_var_nameX1179);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1180);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1181);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1182);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1183);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1184, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1185, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1186, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1187, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1188, unsigned long int anonymous_var_nameX1189, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1190, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1191, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1192, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1193, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1194);

void* GC_debug_realloc(void* anonymous_var_nameX1195, unsigned long int anonymous_var_nameX1196, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1197);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1198);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1199);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1200, unsigned long int anonymous_var_nameX1201);

void GC_register_finalizer(void* anonymous_var_nameX1204, void (*anonymous_var_nameX1205)(void*,void*), void* anonymous_var_nameX1206, void (*anonymous_var_nameX1207)(void*,void*), void** anonymous_var_nameX1208);

void GC_debug_register_finalizer(void* anonymous_var_nameX1209, void (*anonymous_var_nameX1210)(void*,void*), void* anonymous_var_nameX1211, void (*anonymous_var_nameX1212)(void*,void*), void** anonymous_var_nameX1213);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1214, void (*anonymous_var_nameX1215)(void*,void*), void* anonymous_var_nameX1216, void (*anonymous_var_nameX1217)(void*,void*), void** anonymous_var_nameX1218);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1219, void (*anonymous_var_nameX1220)(void*,void*), void* anonymous_var_nameX1221, void (*anonymous_var_nameX1222)(void*,void*), void** anonymous_var_nameX1223);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1224, void (*anonymous_var_nameX1225)(void*,void*), void* anonymous_var_nameX1226, void (*anonymous_var_nameX1227)(void*,void*), void** anonymous_var_nameX1228);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1229, void (*anonymous_var_nameX1230)(void*,void*), void* anonymous_var_nameX1231, void (*anonymous_var_nameX1232)(void*,void*), void** anonymous_var_nameX1233);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1234, void (*anonymous_var_nameX1235)(void*,void*), void* anonymous_var_nameX1236, void (*anonymous_var_nameX1237)(void*,void*), void** anonymous_var_nameX1238);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1239, void (*anonymous_var_nameX1240)(void*,void*), void* anonymous_var_nameX1241, void (*anonymous_var_nameX1242)(void*,void*), void** anonymous_var_nameX1243);

int GC_register_disappearing_link(void** anonymous_var_nameX1244);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1245, const void* anonymous_var_nameX1246);

int GC_move_disappearing_link(void** anonymous_var_nameX1247, void** anonymous_var_nameX1248);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1249);

int GC_register_long_link(void** anonymous_var_nameX1250, const void* anonymous_var_nameX1251);

int GC_move_long_link(void** anonymous_var_nameX1252, void** anonymous_var_nameX1253);

int GC_unregister_long_link(void** anonymous_var_nameX1254);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1256)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1257, int anonymous_var_nameX1258);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1260)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1261);

void GC_set_warn_proc(void (*anonymous_var_nameX1264)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1265, unsigned long int anonymous_var_nameX1266);

void GC_set_log_fd(int anonymous_var_nameX1267);

void GC_set_abort_func(void (*anonymous_var_nameX1269)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1271)(void*), void* anonymous_var_nameX1272);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1275)(struct GC_stack_base*,void*), void* anonymous_var_nameX1276);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1277)(void*), void* anonymous_var_nameX1278);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1279)(void*), void* anonymous_var_nameX1280);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1281);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1282);

void GC_set_stackbottom(void* anonymous_var_nameX1283, const struct GC_stack_base* anonymous_var_nameX1284);

void* GC_same_obj(void* anonymous_var_nameX1285, void* anonymous_var_nameX1286);

void* GC_pre_incr(void** anonymous_var_nameX1287, long anonymous_var_nameX1288);

void* GC_post_incr(void** anonymous_var_nameX1289, long anonymous_var_nameX1290);

void* GC_is_visible(void* anonymous_var_nameX1291);

void* GC_is_valid_displacement(void* anonymous_var_nameX1292);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1293);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1294, const void* anonymous_var_nameX1295);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1296, const void* anonymous_var_nameX1297);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1318);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1322)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1323);

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

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);

unsigned int* __builtin_wstring(char* str);

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

char* wchar_tp_to_string(unsigned int* wstr);

unsigned int* charp_to_wstring(char* str);

int wchar_tp_length(unsigned int* str);

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);

unsigned int* wchar_tp_reverse(unsigned int* str);

unsigned int* wchar_tp_multiply(unsigned int* str, int n);

unsigned int* wchar_tp_printable(unsigned int* str);

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);

static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(unsigned int* left, unsigned int* right);

int wstring_compare(unsigned int* left, unsigned int* right);

unsigned int come_regex_get_hash_key(struct come_regex* reg);

_Bool wchar_tp_equals(unsigned int left, unsigned int right);

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);

unsigned int* wstring_operator_mult(unsigned int* str, int n);

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);

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

unsigned int wchar_tp_get_hash_key(unsigned int* value);

_Bool wstring_equals(unsigned int* left, unsigned int* right);

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);

unsigned int wchar_t_get_hash_key(unsigned int value);

_Bool wchar_t_equals(unsigned int left, unsigned int right);

char* wchar_t_to_string(unsigned int wc);

char* string_chomp(char* str);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "./comelang2.h"
    perror(msg);
    # 51 "./comelang2.h"
    stackframe();
    # 52 "./comelang2.h"
    exit(4);
    # 54 "./comelang2.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    # 1943 "./comelang2.h"
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"));
    # 1944 "./comelang2.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./comelang2.h"
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    # 1950 "./comelang2.h"
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"));
    # 1951 "./comelang2.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./comelang2.h"
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    # 1957 "./comelang2.h"
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"));
    # 1958 "./comelang2.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./comelang2.h"
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    # 1964 "./comelang2.h"
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"));
    # 1965 "./comelang2.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./comelang2.h"
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    # 1971 "./comelang2.h"
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"));
    # 1972 "./comelang2.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./comelang2.h"
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    # 1978 "./comelang2.h"
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"));
    # 1979 "./comelang2.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./comelang2.h"
    __result7__ = __result_obj__ = result_5;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    # 1993 "./comelang2.h"
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char");
    # 1995 "./comelang2.h"
    result_6->memory=buffer_clone(self);
    # 1996 "./comelang2.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./comelang2.h"
    __result8__ = __result_obj__ = result_6;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    # 2003 "./comelang2.h"
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char");
    # 2005 "./comelang2.h"
    result_7->memory=buffer_clone(self);
    # 2006 "./comelang2.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./comelang2.h"
    __result9__ = __result_obj__ = result_7;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    # 2013 "./comelang2.h"
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short");
    # 2015 "./comelang2.h"
    result_8->memory=buffer_clone(self);
    # 2016 "./comelang2.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./comelang2.h"
    __result10__ = __result_obj__ = result_8;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    # 2023 "./comelang2.h"
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int");
    # 2025 "./comelang2.h"
    result_9->memory=buffer_clone(self);
    # 2026 "./comelang2.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./comelang2.h"
    __result11__ = __result_obj__ = result_9;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    # 2033 "./comelang2.h"
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long");
    # 2035 "./comelang2.h"
    result_10->memory=buffer_clone(self);
    # 2036 "./comelang2.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./comelang2.h"
    __result12__ = __result_obj__ = result_10;
    return __result12__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2201 "./comelang2.h"
    __result14__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2201, "smart_pointer$1char"),self,sizeof(char)*len);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2206 "./comelang2.h"
    __result16__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2206, "smart_pointer$1short"),self,sizeof(short short)*len);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2211 "./comelang2.h"
    __result18__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2211, "smart_pointer$1int"),self,sizeof(int)*len);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2216 "./comelang2.h"
    __result20__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2216, "smart_pointer$1long"),self,sizeof(long)*len);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2221 "./comelang2.h"
    __result22__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2221, "smart_pointer$1float"),self,sizeof(float)*len);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2226 "./comelang2.h"
    __result24__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double"),self,sizeof(double)*len);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2255 "./comelang2.h"
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2260 "./comelang2.h"
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2265 "./comelang2.h"
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2270 "./comelang2.h"
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2275 "./comelang2.h"
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2280 "./comelang2.h"
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2341 "./comelang2.h"
    __result31__ = __result_obj__ = xsprintf(msg,self);
    return __result31__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2346 "./comelang2.h"
    __result32__ = __result_obj__ = xsprintf(msg,self);
    return __result32__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2351 "./comelang2.h"
    __result33__ = __result_obj__ = xsprintf(msg,self);
    return __result33__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    # 47 "./comelang2-str.h"
    __result34__ = __result_obj__ = wchar_tp_substring(str,head,tail);
    return __result34__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    # 53 "./comelang2-str.h"
    __result35__ = charp_index_count(str,search_str,count,default_value);
    return __result35__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    # 59 "./comelang2-str.h"
    __result36__ = charp_index_regex_count(self,reg,count,default_value);
    return __result36__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    # 65 "./comelang2-str.h"
    __result37__ = charp_rindex(str,search_str,default_value);
    return __result37__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    # 71 "./comelang2-str.h"
    __result38__ = charp_rindex_regex(self,reg,default_value);
    return __result38__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    # 77 "./comelang2-str.h"
    __result39__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result39__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    # 83 "./comelang2-str.h"
    __result40__ = __result_obj__ = charp_scan_block(self,reg,parent,block);
    return __result40__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    # 89 "./comelang2-str.h"
    __result41__ = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    return __result41__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    # 95 "./comelang2-str.h"
    __result42__ = __result_obj__ = charp_split_block(self,reg,parent,block);
    return __result42__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 101 "./comelang2-str.h"
    __result43__ = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    return __result43__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 107 "./comelang2-str.h"
    __result44__ = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    return __result44__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 113 "./comelang2-str.h"
    __result45__ = __result_obj__ = charp_strip(self);
    return __result45__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 119 "./comelang2-str.h"
    __result46__ = __result_obj__ = string_printable(str);
    return __result46__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
unsigned int* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 125 "./comelang2-str.h"
    __result47__ = __result_obj__ = charp_to_wstring(str);
    return __result47__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 133 "./comelang2-str.h"
    __result48__ = __result_obj__ = wchar_tp_to_string(wstr);
    return __result48__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
unsigned int* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    # 138 "./comelang2-str.h"
    __result49__ = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    return __result49__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    # 144 "./comelang2-str.h"
    __result50__ = wchar_tp_length(str);
    return __result50__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    # 150 "./comelang2-str.h"
    __result51__ = __result_obj__ = wchar_tp_delete(str,head,tail);
    return __result51__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    # 156 "./comelang2-str.h"
    __result52__ = wchar_tp_index(str,search_str,default_value);
    return __result52__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 162 "./comelang2-str.h"
    __result53__ = wchar_tp_rindex(str,search_str,default_value);
    return __result53__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
unsigned int* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 168 "./comelang2-str.h"
    __result54__ = __result_obj__ = wchar_tp_reverse(str);
    return __result54__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 174 "./comelang2-str.h"
    __result55__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result55__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
unsigned int* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 180 "./comelang2-str.h"
    __result56__ = __result_obj__ = wchar_tp_printable(str);
    return __result56__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    # 202 "./comelang2-str.h"
    __result57__ = wchar_tp_get_hash_key(value);
    return __result57__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 214 "./comelang2-str.h"
    __result58__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result58__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 220 "./comelang2-str.h"
    __result59__ = charp_index(str,search_str,default_value);
    return __result59__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    # 226 "./comelang2-str.h"
    __result60__ = charp_index_regex(self,reg,default_value);
    return __result60__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 233 "./comelang2-str.h"
    __result61__ = __result_obj__ = charp_replace(self,index,c);
    return __result61__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    # 239 "./comelang2-str.h"
    __result62__ = __result_obj__ = charp_multiply(str,n);
    return __result62__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    # 245 "./comelang2-str.h"
    __result63__ = __result_obj__ = charp_sub(self,reg,replace);
    return __result63__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    # 251 "./comelang2-str.h"
    __result64__ = __result_obj__ = charp_sub_count(self,reg,replace,count);
    return __result64__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    # 257 "./comelang2-str.h"
    __result65__ = __result_obj__ = charp_split_str(self,str);
    return __result65__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    # 263 "./comelang2-str.h"
    __result66__ = __result_obj__ = charp_scan(self,reg);
    return __result66__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    # 269 "./comelang2-str.h"
    __result67__ = __result_obj__ = charp_split(self,reg);
    return __result67__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 275 "./comelang2-str.h"
    __result68__ = charp_match(self,reg);
    return __result68__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    # 281 "./comelang2-str.h"
    __result69__ = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    return __result69__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    # 287 "./comelang2-str.h"
    __result70__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result70__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    # 293 "./comelang2-str.h"
    __result71__ = charp_match_count(self,reg,count);
    return __result71__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    # 299 "./comelang2-str.h"
    __result72__ = __result_obj__ = charp_sub_block(self,reg,parent,block);
    return __result72__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    # 305 "./comelang2-str.h"
    __result73__ = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    return __result73__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 323 "./comelang2-str.h"
    __result75__ = __result_obj__ = string_chomp(str);
    return __result75__;
}

// body function













static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2045 "./comelang2.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"));
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./comelang2.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result13__ = __result_obj__ = self;
        return __result13__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2045 "./comelang2.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"));
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./comelang2.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result15__ = __result_obj__ = self;
        return __result15__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2045 "./comelang2.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"));
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./comelang2.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result17__ = __result_obj__ = self;
        return __result17__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2045 "./comelang2.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"));
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./comelang2.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2045 "./comelang2.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"));
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./comelang2.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        # 2045 "./comelang2.h"
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"));
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./comelang2.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result23__ = __result_obj__ = self;
        return __result23__;
}



















































void regex_finalizer(void* obj, void* client_data){
void* __result_obj__;
struct come_regex* self_11;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_11, 0, sizeof(struct come_regex*));
    # 8 "libcomelang2-str-gc.c"
    self_11=obj;
    # 13 "libcomelang2-str-gc.c"
    # 10 "libcomelang2-str-gc.c"
    if(_if_conditional1=self_11&&self_11->re,    _if_conditional1) {
        # 11 "libcomelang2-str-gc.c"
        free(self_11->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_12;
int erro_ofs_13;
int options_14;
_Bool _if_conditional2;
_Bool _if_conditional3;
struct come_regex* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_13, 0, sizeof(int));
memset(&options_14, 0, sizeof(int));
    # 17 "libcomelang2-str-gc.c"
    # 18 "libcomelang2-str-gc.c"
    # 20 "libcomelang2-str-gc.c"
    options_14=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    # 22 "libcomelang2-str-gc.c"
    self->str=__builtin_string(str);
    # 24 "libcomelang2-str-gc.c"
    self->ignore_case=ignore_case;
    # 25 "libcomelang2-str-gc.c"
    self->multiline=multiline;
    # 26 "libcomelang2-str-gc.c"
    self->global=global;
    # 27 "libcomelang2-str-gc.c"
    self->extended=extended;
    # 28 "libcomelang2-str-gc.c"
    self->dotall=dotall;
    # 29 "libcomelang2-str-gc.c"
    self->anchored=anchored;
    # 30 "libcomelang2-str-gc.c"
    self->dollar_endonly=dollar_endonly;
    # 31 "libcomelang2-str-gc.c"
    # 32 "libcomelang2-str-gc.c"
    self->options=options_14;
    # 34 "libcomelang2-str-gc.c"
    self->re=pcre_compile(str,options_14,&err_12,&erro_ofs_13,((void*)0));
    # 42 "libcomelang2-str-gc.c"
    # 36 "libcomelang2-str-gc.c"
    if(_if_conditional2=self->re==((void*)0),    _if_conditional2) {
        # 37 "libcomelang2-str-gc.c"
        printf("regex error (%s)\n",str);
        # 38 "libcomelang2-str-gc.c"
        stackframe();
        # 39 "libcomelang2-str-gc.c"
        exit(1);
    }
    # 46 "libcomelang2-str-gc.c"
    # 42 "libcomelang2-str-gc.c"
    if(gComeGCLib) {
        # 43 "libcomelang2-str-gc.c"
        GC_register_finalizer(self,regex_finalizer,((void*)0),((void*)0),((void*)0));
    }
    # 46 "libcomelang2-str-gc.c"
    __result76__ = __result_obj__ = self;
    return __result76__;
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional4;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
    # 54 "libcomelang2-str-gc.c"
    # 51 "libcomelang2-str-gc.c"
    if(_if_conditional4=reg&&reg->str,    _if_conditional4) {
        # 52 "libcomelang2-str-gc.c"
    }
    # 57 "libcomelang2-str-gc.c"
    # 54 "libcomelang2-str-gc.c"
    if(_if_conditional5=reg&&reg->re,    _if_conditional5) {
        # 55 "libcomelang2-str-gc.c"
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 61 "libcomelang2-str-gc.c"
    __result77__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 61, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result77__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    # 66 "libcomelang2-str-gc.c"
    __result78__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 66, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result78__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional6;
struct come_regex* __result79__;
struct come_regex* result_15;
const char* err_16;
int erro_ofs_17;
_Bool _if_conditional7;
struct come_regex* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct come_regex*));
memset(&erro_ofs_17, 0, sizeof(int));
    # 76 "libcomelang2-str-gc.c"
    # 72 "libcomelang2-str-gc.c"
    if(_if_conditional6=reg==((void*)0),    _if_conditional6) {
        # 73 "libcomelang2-str-gc.c"
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    # 76 "libcomelang2-str-gc.c"
    result_15=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 76, "come_regex");
    # 78 "libcomelang2-str-gc.c"
    result_15->str=string_clone(reg->str);
    # 80 "libcomelang2-str-gc.c"
    result_15->ignore_case=reg->ignore_case;
    # 81 "libcomelang2-str-gc.c"
    result_15->multiline=reg->multiline;
    # 82 "libcomelang2-str-gc.c"
    result_15->global=reg->global;
    # 83 "libcomelang2-str-gc.c"
    result_15->extended=reg->extended;
    # 84 "libcomelang2-str-gc.c"
    result_15->dotall=reg->dotall;
    # 85 "libcomelang2-str-gc.c"
    result_15->anchored=reg->anchored;
    # 86 "libcomelang2-str-gc.c"
    result_15->dollar_endonly=reg->dollar_endonly;
    # 87 "libcomelang2-str-gc.c"
    result_15->ungreedy=reg->ungreedy;
    # 89 "libcomelang2-str-gc.c"
    result_15->options=reg->options;
    # 91 "libcomelang2-str-gc.c"
    # 92 "libcomelang2-str-gc.c"
    # 94 "libcomelang2-str-gc.c"
    result_15->re=pcre_compile(result_15->str,result_15->options,&err_16,&erro_ofs_17,((void*)0));
    # 102 "libcomelang2-str-gc.c"
    # 96 "libcomelang2-str-gc.c"
    if(_if_conditional7=result_15->re==((void*)0),    _if_conditional7) {
        # 97 "libcomelang2-str-gc.c"
        printf("regex compile error(%s)\n",result_15->str);
        # 98 "libcomelang2-str-gc.c"
        stackframe();
        # 99 "libcomelang2-str-gc.c"
        exit(1);
    }
    # 102 "libcomelang2-str-gc.c"
    __result80__ = __result_obj__ = result_15;
    return __result80__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 107 "libcomelang2-str-gc.c"
    __result81__ = __result_obj__ = __builtin_string(regex->str);
    return __result81__;
}

char* string_lower_case(char* str){
void* __result_obj__;
char* result_18;
int i_19;
_Bool _if_conditional8;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_18, 0, sizeof(char*));
memset(&i_19, 0, sizeof(int));
    # 112 "libcomelang2-str-gc.c"
    result_18=__builtin_string(str);
    # 119 "libcomelang2-str-gc.c"
    for(    i_19=0;    i_19<strlen(str);    i_19++    ){
        # 117 "libcomelang2-str-gc.c"
        # 114 "libcomelang2-str-gc.c"
        if(_if_conditional8=str[i_19]>=65&&str[i_19]<=90,        _if_conditional8) {
            # 115 "libcomelang2-str-gc.c"
            result_18[i_19]=str[i_19]-65+97;
        }
    }
    # 119 "libcomelang2-str-gc.c"
    __result82__ = __result_obj__ = result_18;
    return __result82__;
}

char* string_upper_case(char* str){
void* __result_obj__;
char* result_20;
int i_21;
_Bool _if_conditional9;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
    # 124 "libcomelang2-str-gc.c"
    result_20=__builtin_string(str);
    # 131 "libcomelang2-str-gc.c"
    for(    i_21=0;    i_21<strlen(str);    i_21++    ){
        # 129 "libcomelang2-str-gc.c"
        # 126 "libcomelang2-str-gc.c"
        if(_if_conditional9=str[i_21]>=97&&str[i_21]<=122,        _if_conditional9) {
            # 127 "libcomelang2-str-gc.c"
            result_20[i_21]=str[i_21]-97+65;
        }
    }
    # 131 "libcomelang2-str-gc.c"
    __result83__ = __result_obj__ = result_20;
    return __result83__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional10;
unsigned int* __result84__;
int len_22;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
unsigned int* __result85__;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
unsigned int* __result86__;
_Bool _if_conditional17;
unsigned int* __result87__;
unsigned int* result_23;
unsigned int* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_22, 0, sizeof(int));
memset(&result_23, 0, sizeof(unsigned int*));
    # 136 "libcomelang2-str-gc.c"
    # 142 "libcomelang2-str-gc.c"
    # 138 "libcomelang2-str-gc.c"
    if(_if_conditional10=str==((void*)0),    _if_conditional10) {
        # 139 "libcomelang2-str-gc.c"
        __result84__ = __result_obj__ = __builtin_wstring("");
        return __result84__;
    }
    # 142 "libcomelang2-str-gc.c"
    len_22=wcslen(str);
    # 147 "libcomelang2-str-gc.c"
    # 144 "libcomelang2-str-gc.c"
    if(_if_conditional11=head<0,    _if_conditional11) {
        # 145 "libcomelang2-str-gc.c"
        head+=len_22;
    }
    # 151 "libcomelang2-str-gc.c"
    # 147 "libcomelang2-str-gc.c"
    if(_if_conditional12=tail<0,    _if_conditional12) {
        # 148 "libcomelang2-str-gc.c"
        tail+=len_22+1;
    }
    # 155 "libcomelang2-str-gc.c"
    # 151 "libcomelang2-str-gc.c"
    if(_if_conditional13=head>tail,    _if_conditional13) {
        # 152 "libcomelang2-str-gc.c"
        __result85__ = __result_obj__ = __builtin_wstring("");
        return __result85__;
    }
    # 159 "libcomelang2-str-gc.c"
    # 155 "libcomelang2-str-gc.c"
    if(_if_conditional14=head<0,    _if_conditional14) {
        # 156 "libcomelang2-str-gc.c"
        head=0;
    }
    # 163 "libcomelang2-str-gc.c"
    # 159 "libcomelang2-str-gc.c"
    if(_if_conditional15=tail>=len_22,    _if_conditional15) {
        # 160 "libcomelang2-str-gc.c"
        tail=len_22;
    }
    # 167 "libcomelang2-str-gc.c"
    # 163 "libcomelang2-str-gc.c"
    if(_if_conditional16=head==tail,    _if_conditional16) {
        # 164 "libcomelang2-str-gc.c"
        __result86__ = __result_obj__ = __builtin_wstring("");
        return __result86__;
    }
    # 171 "libcomelang2-str-gc.c"
    # 167 "libcomelang2-str-gc.c"
    if(_if_conditional17=tail-head+1<1,    _if_conditional17) {
        # 168 "libcomelang2-str-gc.c"
        __result87__ = __result_obj__ = __builtin_wstring("");
        return __result87__;
    }
    # 171 "libcomelang2-str-gc.c"
    result_23=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str-gc.c", 171, "int");
    # 173 "libcomelang2-str-gc.c"
    memcpy(result_23,str+head,sizeof(unsigned int)*(tail-head));
    # 174 "libcomelang2-str-gc.c"
    result_23[tail-head]=0;
    # 176 "libcomelang2-str-gc.c"
    __result88__ = __result_obj__ = result_23;
    return __result88__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional18;
unsigned int* __result89__;
int len_24;
unsigned int* wstr_25;
int ret_26;
_Bool _if_conditional19;
unsigned int* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_24, 0, sizeof(int));
memset(&wstr_25, 0, sizeof(unsigned int*));
memset(&ret_26, 0, sizeof(int));
    # 184 "libcomelang2-str-gc.c"
    # 181 "libcomelang2-str-gc.c"
    if(_if_conditional18=str==((void*)0),    _if_conditional18) {
        # 182 "libcomelang2-str-gc.c"
        __result89__ = __result_obj__ = ((void*)0);
        return __result89__;
    }
    # 184 "libcomelang2-str-gc.c"
    len_24=strlen(str);
    # 186 "libcomelang2-str-gc.c"
    wstr_25=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_24+1)), "libcomelang2-str-gc.c", 186, "int");
    # 188 "libcomelang2-str-gc.c"
    ret_26=mbstowcs(wstr_25,str,len_24+1);
    # 189 "libcomelang2-str-gc.c"
    wstr_25[ret_26]=0;
    # 195 "libcomelang2-str-gc.c"
    # 191 "libcomelang2-str-gc.c"
    if(_if_conditional19=ret_26<0,    _if_conditional19) {
        # 192 "libcomelang2-str-gc.c"
        wstr_25[0]=0;
    }
    # 195 "libcomelang2-str-gc.c"
    __result90__ = __result_obj__ = wstr_25;
    return __result90__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_27;
int len_28;
int i_29;
int len2_30;
int j_31;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_27, 0, sizeof(int));
memset(&len_28, 0, sizeof(int));
memset(&i_29, 0, sizeof(int));
memset(&len2_30, 0, sizeof(int));
memset(&j_31, 0, sizeof(int));
    # 200 "libcomelang2-str-gc.c"
    n_27=0;
    # 201 "libcomelang2-str-gc.c"
    len_28=strlen(str);
    # 220 "libcomelang2-str-gc.c"
    for(    i_29=0;    i_29<len_28;    i_29++    ){
        # 203 "libcomelang2-str-gc.c"
        len2_30=strlen(search_str);
        # 204 "libcomelang2-str-gc.c"
        # 211 "libcomelang2-str-gc.c"
        for(        j_31=0;        j_31<len2_30;        j_31++        ){
            # 209 "libcomelang2-str-gc.c"
            # 206 "libcomelang2-str-gc.c"
            if(_if_conditional20=str[i_29+j_31]!=search_str[j_31],            _if_conditional20) {
                # 207 "libcomelang2-str-gc.c"
                break;
            }
        }
        # 218 "libcomelang2-str-gc.c"
        # 211 "libcomelang2-str-gc.c"
        if(_if_conditional21=j_31==len2_30,        _if_conditional21) {
            # 212 "libcomelang2-str-gc.c"
            n_27++;
            # 217 "libcomelang2-str-gc.c"
            # 214 "libcomelang2-str-gc.c"
            if(_if_conditional22=n_27==count,            _if_conditional22) {
                # 215 "libcomelang2-str-gc.c"
                __result91__ = i_29;
                return __result91__;
            }
        }
    }
    # 220 "libcomelang2-str-gc.c"
    __result92__ = default_value;
    return __result92__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_32;
int result_36;
int offset_37;
const char* err_38;
int erro_ofs_39;
int options_40;
char* str_41;
struct real_pcre8_or_16* re_42;
int n_43;
_Bool _while_condtional1;
int options_44;
int len_45;
int regex_result_46;
int i_47;
int i_48;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_32, 0, sizeof(int));
memset(&result_36, 0, sizeof(int));
memset(&offset_37, 0, sizeof(int));
memset(&erro_ofs_39, 0, sizeof(int));
memset(&options_40, 0, sizeof(int));
memset(&str_41, 0, sizeof(char*));
memset(&re_42, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_43, 0, sizeof(int));
memset(&options_44, 0, sizeof(int));
memset(&len_45, 0, sizeof(int));
memset(&regex_result_46, 0, sizeof(int));
memset(&i_47, 0, sizeof(int));
memset(&i_48, 0, sizeof(int));
    # 225 "libcomelang2-str-gc.c"
    ovec_max_32=16;
    # 226 "libcomelang2-str-gc.c"
    int start_33[ovec_max_32];
    memset(&start_33, 0, sizeof(int)    *(ovec_max_32)    );
    # 227 "libcomelang2-str-gc.c"
    int end_34[ovec_max_32];
    memset(&end_34, 0, sizeof(int)    *(ovec_max_32)    );
    # 228 "libcomelang2-str-gc.c"
    int ovec_value_35[ovec_max_32*3];
    memset(&ovec_value_35, 0, sizeof(int)    *(ovec_max_32*3)    );
    # 230 "libcomelang2-str-gc.c"
    result_36=default_value;
    # 232 "libcomelang2-str-gc.c"
    offset_37=0;
    # 234 "libcomelang2-str-gc.c"
    # 235 "libcomelang2-str-gc.c"
    # 237 "libcomelang2-str-gc.c"
    options_40=reg->options;
    # 238 "libcomelang2-str-gc.c"
    str_41=reg->str;
    # 240 "libcomelang2-str-gc.c"
    re_42=reg->re;
    # 242 "libcomelang2-str-gc.c"
    n_43=0;
    # 278 "libcomelang2-str-gc.c"
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        # 245 "libcomelang2-str-gc.c"
        options_44=2097152;
        # 246 "libcomelang2-str-gc.c"
        len_45=strlen(self);
        # 247 "libcomelang2-str-gc.c"
        regex_result_46=pcre_exec(re_42,(struct pcre_extra*)0,self,len_45,offset_37,options_44,ovec_value_35,ovec_max_32*3);
        # 252 "libcomelang2-str-gc.c"
        for(        i_47=0;        i_47<ovec_max_32;        i_47++        ){
            # 250 "libcomelang2-str-gc.c"
            start_33[i_47]=ovec_value_35[i_47*2];
        }
        # 257 "libcomelang2-str-gc.c"
        for(        i_48=0;        i_48<ovec_max_32;        i_48++        ){
            # 253 "libcomelang2-str-gc.c"
            end_34[i_48]=ovec_value_35[i_48*2+1];
        }
        # 276 "libcomelang2-str-gc.c"
        # 257 "libcomelang2-str-gc.c"
        if(_if_conditional23=regex_result_46>0,        _if_conditional23) {
            # 258 "libcomelang2-str-gc.c"
            n_43++;
            # 267 "libcomelang2-str-gc.c"
            # 260 "libcomelang2-str-gc.c"
            if(_if_conditional24=offset_37==end_34[0],            _if_conditional24) {
                # 261 "libcomelang2-str-gc.c"
                offset_37++;
            }
            else {
                # 264 "libcomelang2-str-gc.c"
                offset_37=end_34[0];
            }
            # 271 "libcomelang2-str-gc.c"
            # 267 "libcomelang2-str-gc.c"
            if(_if_conditional25=n_43==count,            _if_conditional25) {
                # 268 "libcomelang2-str-gc.c"
                result_36=start_33[0];
                # 269 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 274 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 278 "libcomelang2-str-gc.c"
    __result93__ = result_36;
    return __result93__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_49;
char* p_50;
_Bool _while_condtional2;
_Bool _if_conditional26;
int __result94__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_49, 0, sizeof(int));
memset(&p_50, 0, sizeof(char*));
    # 283 "libcomelang2-str-gc.c"
    # 285 "libcomelang2-str-gc.c"
    len_49=strlen(search_str);
    # 286 "libcomelang2-str-gc.c"
    p_50=str+strlen(str)-len_49;
    # 296 "libcomelang2-str-gc.c"
    while(_while_condtional2=p_50>=str,    _while_condtional2) {
        # 293 "libcomelang2-str-gc.c"
        # 289 "libcomelang2-str-gc.c"
        if(_if_conditional26=strncmp(p_50,search_str,len_49)==0,        _if_conditional26) {
            # 290 "libcomelang2-str-gc.c"
            __result94__ = p_50-str;
            return __result94__;
        }
        # 293 "libcomelang2-str-gc.c"
        p_50--;
    }
    # 296 "libcomelang2-str-gc.c"
    __result95__ = default_value;
    return __result95__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_51;
int erro_ofs_52;
int options_53;
char* str_54;
struct real_pcre8_or_16* re_55;
char* self2_56;
int ovec_max_57;
int result_61;
int offset_62;
_Bool _while_condtional3;
int options_63;
int len_64;
int regex_result_65;
int i_66;
int i_67;
_Bool _if_conditional27;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_52, 0, sizeof(int));
memset(&options_53, 0, sizeof(int));
memset(&str_54, 0, sizeof(char*));
memset(&re_55, 0, sizeof(struct real_pcre8_or_16*));
memset(&self2_56, 0, sizeof(char*));
memset(&ovec_max_57, 0, sizeof(int));
memset(&result_61, 0, sizeof(int));
memset(&offset_62, 0, sizeof(int));
memset(&options_63, 0, sizeof(int));
memset(&len_64, 0, sizeof(int));
memset(&regex_result_65, 0, sizeof(int));
memset(&i_66, 0, sizeof(int));
memset(&i_67, 0, sizeof(int));
    # 301 "libcomelang2-str-gc.c"
    # 302 "libcomelang2-str-gc.c"
    # 304 "libcomelang2-str-gc.c"
    options_53=reg->options;
    # 305 "libcomelang2-str-gc.c"
    str_54=reg->str;
    # 307 "libcomelang2-str-gc.c"
    re_55=reg->re;
    # 309 "libcomelang2-str-gc.c"
    self2_56=charp_reverse(self);
    # 311 "libcomelang2-str-gc.c"
    ovec_max_57=16;
    # 312 "libcomelang2-str-gc.c"
    int start_58[ovec_max_57];
    memset(&start_58, 0, sizeof(int)    *(ovec_max_57)    );
    # 313 "libcomelang2-str-gc.c"
    int end_59[ovec_max_57];
    memset(&end_59, 0, sizeof(int)    *(ovec_max_57)    );
    # 314 "libcomelang2-str-gc.c"
    int ovec_value_60[ovec_max_57*3];
    memset(&ovec_value_60, 0, sizeof(int)    *(ovec_max_57*3)    );
    # 316 "libcomelang2-str-gc.c"
    result_61=default_value;
    # 318 "libcomelang2-str-gc.c"
    offset_62=0;
    # 344 "libcomelang2-str-gc.c"
    while(_while_condtional3=(_Bool)1,    _while_condtional3) {
        # 321 "libcomelang2-str-gc.c"
        options_63=2097152;
        # 322 "libcomelang2-str-gc.c"
        len_64=strlen(self2_56);
        # 323 "libcomelang2-str-gc.c"
        regex_result_65=pcre_exec(re_55,(struct pcre_extra*)0,self2_56,len_64,offset_62,options_63,ovec_value_60,ovec_max_57*3);
        # 328 "libcomelang2-str-gc.c"
        for(        i_66=0;        i_66<ovec_max_57;        i_66++        ){
            # 326 "libcomelang2-str-gc.c"
            start_58[i_66]=ovec_value_60[i_66*2];
        }
        # 333 "libcomelang2-str-gc.c"
        for(        i_67=0;        i_67<ovec_max_57;        i_67++        ){
            # 329 "libcomelang2-str-gc.c"
            end_59[i_67]=ovec_value_60[i_67*2+1];
        }
        # 339 "libcomelang2-str-gc.c"
        # 333 "libcomelang2-str-gc.c"
        if(_if_conditional27=regex_result_65==1||regex_result_65>0,        _if_conditional27) {
            # 335 "libcomelang2-str-gc.c"
            result_61=strlen(self)-1-start_58[0];
            # 336 "libcomelang2-str-gc.c"
            break;
        }
        # 342 "libcomelang2-str-gc.c"
        {
            # 340 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 344 "libcomelang2-str-gc.c"
    __result96__ = result_61;
    return __result96__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_68;
char* p_69;
int n_70;
_Bool _while_condtional4;
_Bool _if_conditional28;
_Bool _if_conditional29;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_68, 0, sizeof(int));
memset(&p_69, 0, sizeof(char*));
memset(&n_70, 0, sizeof(int));
    # 349 "libcomelang2-str-gc.c"
    # 351 "libcomelang2-str-gc.c"
    len_68=strlen(search_str);
    # 352 "libcomelang2-str-gc.c"
    p_69=str+strlen(str)-len_68;
    # 354 "libcomelang2-str-gc.c"
    n_70=0;
    # 367 "libcomelang2-str-gc.c"
    while(_while_condtional4=p_69>=str,    _while_condtional4) {
        # 364 "libcomelang2-str-gc.c"
        # 357 "libcomelang2-str-gc.c"
        if(_if_conditional28=strncmp(p_69,search_str,len_68)==0,        _if_conditional28) {
            # 358 "libcomelang2-str-gc.c"
            n_70++;
            # 362 "libcomelang2-str-gc.c"
            # 359 "libcomelang2-str-gc.c"
            if(_if_conditional29=n_70==count,            _if_conditional29) {
                # 360 "libcomelang2-str-gc.c"
                __result97__ = p_69-str;
                return __result97__;
            }
        }
        # 364 "libcomelang2-str-gc.c"
        p_69--;
    }
    # 367 "libcomelang2-str-gc.c"
    __result98__ = default_value;
    return __result98__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* result_71;
int offset_72;
int ovec_max_73;
const char* err_77;
int erro_ofs_78;
int options_79;
char* str_80;
struct real_pcre8_or_16* re_81;
_Bool _while_condtional5;
int options_82;
int len_83;
int regex_result_84;
int i_85;
int i_86;
_Bool _if_conditional30;
char* str_87;
struct list$1charph* group_strings_88;
char* str2_89;
_Bool _if_conditional31;
struct list$1charph* __result100__;
_Bool _if_conditional34;
_Bool _if_conditional35;
char* str_93;
struct list$1charph* group_strings_94;
int i_95;
char* match_string_96;
char* str2_97;
_Bool _if_conditional36;
struct list$1charph* __result102__;
_Bool _if_conditional37;
struct list$1charph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&offset_72, 0, sizeof(int));
memset(&ovec_max_73, 0, sizeof(int));
memset(&erro_ofs_78, 0, sizeof(int));
memset(&options_79, 0, sizeof(int));
memset(&str_80, 0, sizeof(char*));
memset(&re_81, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_82, 0, sizeof(int));
memset(&len_83, 0, sizeof(int));
memset(&regex_result_84, 0, sizeof(int));
memset(&i_85, 0, sizeof(int));
memset(&i_86, 0, sizeof(int));
memset(&str_87, 0, sizeof(char*));
memset(&group_strings_88, 0, sizeof(struct list$1charph*));
memset(&str2_89, 0, sizeof(char*));
memset(&str_93, 0, sizeof(char*));
memset(&group_strings_94, 0, sizeof(struct list$1charph*));
memset(&i_95, 0, sizeof(int));
memset(&match_string_96, 0, sizeof(char*));
memset(&str2_97, 0, sizeof(char*));
    # 372 "libcomelang2-str-gc.c"
    result_71=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 372, "list$1charph"));
    # 374 "libcomelang2-str-gc.c"
    offset_72=0;
    # 376 "libcomelang2-str-gc.c"
    ovec_max_73=16;
    # 377 "libcomelang2-str-gc.c"
    int start_74[ovec_max_73];
    memset(&start_74, 0, sizeof(int)    *(ovec_max_73)    );
    # 378 "libcomelang2-str-gc.c"
    int end_75[ovec_max_73];
    memset(&end_75, 0, sizeof(int)    *(ovec_max_73)    );
    # 379 "libcomelang2-str-gc.c"
    int ovec_value_76[ovec_max_73*3];
    memset(&ovec_value_76, 0, sizeof(int)    *(ovec_max_73*3)    );
    # 381 "libcomelang2-str-gc.c"
    # 382 "libcomelang2-str-gc.c"
    # 384 "libcomelang2-str-gc.c"
    options_79=reg->options;
    # 385 "libcomelang2-str-gc.c"
    str_80=reg->str;
    # 387 "libcomelang2-str-gc.c"
    re_81=reg->re;
    # 455 "libcomelang2-str-gc.c"
    while(_while_condtional5=(_Bool)1,    _while_condtional5) {
        # 390 "libcomelang2-str-gc.c"
        options_82=2097152;
        # 391 "libcomelang2-str-gc.c"
        len_83=strlen(self);
        # 392 "libcomelang2-str-gc.c"
        regex_result_84=pcre_exec(re_81,(struct pcre_extra*)0,self,len_83,offset_72,options_82,ovec_value_76,ovec_max_73*3);
        # 397 "libcomelang2-str-gc.c"
        for(        i_85=0;        i_85<ovec_max_73;        i_85++        ){
            # 395 "libcomelang2-str-gc.c"
            start_74[i_85]=ovec_value_76[i_85*2];
        }
        # 402 "libcomelang2-str-gc.c"
        for(        i_86=0;        i_86<ovec_max_73;        i_86++        ){
            # 398 "libcomelang2-str-gc.c"
            end_75[i_86]=ovec_value_76[i_86*2+1];
        }
        # 453 "libcomelang2-str-gc.c"
        # 402 "libcomelang2-str-gc.c"
        if(_if_conditional30=regex_result_84==1,        _if_conditional30) {
            # 404 "libcomelang2-str-gc.c"
            str_87=charp_substring(self,start_74[0],end_75[0]);
            # 406 "libcomelang2-str-gc.c"
            group_strings_88=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 406, "list$1charph"));
            # 408 "libcomelang2-str-gc.c"
            str2_89=block(parent,str_87,group_strings_88);
            # 414 "libcomelang2-str-gc.c"
            # 410 "libcomelang2-str-gc.c"
            if(_if_conditional31=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional31) {
                # 411 "libcomelang2-str-gc.c"
                __result100__ = __result_obj__ = result_71;
                return __result100__;
            }
            # 414 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_71,str2_89);
            # 422 "libcomelang2-str-gc.c"
            # 416 "libcomelang2-str-gc.c"
            if(_if_conditional34=offset_72==end_75[0],            _if_conditional34) {
                # 417 "libcomelang2-str-gc.c"
                offset_72++;
            }
            else {
                # 420 "libcomelang2-str-gc.c"
                offset_72=end_75[0];
            }
        }
        else {
            # 453 "libcomelang2-str-gc.c"
            # 424 "libcomelang2-str-gc.c"
            if(_if_conditional35=regex_result_84>1,            _if_conditional35) {
                # 425 "libcomelang2-str-gc.c"
                str_93=charp_substring(self,start_74[0],end_75[0]);
                # 427 "libcomelang2-str-gc.c"
                group_strings_94=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 427, "list$1charph"));
                # 433 "libcomelang2-str-gc.c"
                for(                i_95=1;                i_95<regex_result_84;                i_95++                ){
                    # 429 "libcomelang2-str-gc.c"
                    match_string_96=charp_substring(self,start_74[i_95],end_75[i_95]);
                    # 430 "libcomelang2-str-gc.c"
                    list$1charph_push_back(group_strings_94,match_string_96);
                }
                # 433 "libcomelang2-str-gc.c"
                str2_97=block(parent,str_93,group_strings_94);
                # 439 "libcomelang2-str-gc.c"
                # 435 "libcomelang2-str-gc.c"
                if(_if_conditional36=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional36) {
                    # 436 "libcomelang2-str-gc.c"
                    __result102__ = __result_obj__ = result_71;
                    return __result102__;
                }
                # 439 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_71,str2_97);
                # 447 "libcomelang2-str-gc.c"
                # 441 "libcomelang2-str-gc.c"
                if(_if_conditional37=offset_72==end_75[0],                _if_conditional37) {
                    # 442 "libcomelang2-str-gc.c"
                    offset_72++;
                }
                else {
                    # 445 "libcomelang2-str-gc.c"
                    offset_72=end_75[0];
                }
            }
            else {
                # 451 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 455 "libcomelang2-str-gc.c"
    __result103__ = __result_obj__ = result_71;
    return __result103__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result99__ = __result_obj__ = self;
        return __result99__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional32;
struct list_item$1charph* litem_90;
_Bool _if_conditional33;
struct list_item$1charph* litem_91;
struct list_item$1charph* litem_92;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
memset(&litem_91, 0, sizeof(struct list_item$1charph*));
memset(&litem_92, 0, sizeof(struct list_item$1charph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional32=self->len==0,                _if_conditional32) {
                    # 226 "./comelang2.h"
                    litem_90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph");
                    # 228 "./comelang2.h"
                    litem_90->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_90->next=((void*)0);
                    # 230 "./comelang2.h"
                    litem_90->item=item;
                    # 232 "./comelang2.h"
                    self->tail=litem_90;
                    # 233 "./comelang2.h"
                    self->head=litem_90;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional33=self->len==1,                    _if_conditional33) {
                        # 236 "./comelang2.h"
                        litem_91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph");
                        # 238 "./comelang2.h"
                        litem_91->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_91->next=((void*)0);
                        # 240 "./comelang2.h"
                        litem_91->item=item;
                        # 242 "./comelang2.h"
                        self->tail=litem_91;
                        # 243 "./comelang2.h"
                        self->head->next=litem_91;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph");
                        # 248 "./comelang2.h"
                        litem_92->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_92->next=((void*)0);
                        # 250 "./comelang2.h"
                        litem_92->item=item;
                        # 252 "./comelang2.h"
                        self->tail->next=litem_92;
                        # 253 "./comelang2.h"
                        self->tail=litem_92;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result101__ = __result_obj__ = self;
                return __result101__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* result_98;
int offset_99;
int ovec_max_100;
const char* err_104;
int erro_ofs_105;
int options_106;
char* str_107;
struct real_pcre8_or_16* re_108;
int n_109;
_Bool _while_condtional6;
int options_110;
int len_111;
int regex_result_112;
int i_113;
int i_114;
_Bool _if_conditional38;
char* str_115;
struct list$1charph* group_strings_116;
char* str2_117;
_Bool _if_conditional39;
struct list$1charph* __result104__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
char* str_118;
struct list$1charph* group_strings_119;
int i_120;
char* match_string_121;
char* str2_122;
_Bool _if_conditional43;
struct list$1charph* __result105__;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct list$1charph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_98, 0, sizeof(struct list$1charph*));
memset(&offset_99, 0, sizeof(int));
memset(&ovec_max_100, 0, sizeof(int));
memset(&erro_ofs_105, 0, sizeof(int));
memset(&options_106, 0, sizeof(int));
memset(&str_107, 0, sizeof(char*));
memset(&re_108, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_109, 0, sizeof(int));
memset(&options_110, 0, sizeof(int));
memset(&len_111, 0, sizeof(int));
memset(&regex_result_112, 0, sizeof(int));
memset(&i_113, 0, sizeof(int));
memset(&i_114, 0, sizeof(int));
memset(&str_115, 0, sizeof(char*));
memset(&group_strings_116, 0, sizeof(struct list$1charph*));
memset(&str2_117, 0, sizeof(char*));
memset(&str_118, 0, sizeof(char*));
memset(&group_strings_119, 0, sizeof(struct list$1charph*));
memset(&i_120, 0, sizeof(int));
memset(&match_string_121, 0, sizeof(char*));
memset(&str2_122, 0, sizeof(char*));
    # 461 "libcomelang2-str-gc.c"
    result_98=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 461, "list$1charph"));
    # 463 "libcomelang2-str-gc.c"
    offset_99=0;
    # 465 "libcomelang2-str-gc.c"
    ovec_max_100=16;
    # 466 "libcomelang2-str-gc.c"
    int start_101[ovec_max_100];
    memset(&start_101, 0, sizeof(int)    *(ovec_max_100)    );
    # 467 "libcomelang2-str-gc.c"
    int end_102[ovec_max_100];
    memset(&end_102, 0, sizeof(int)    *(ovec_max_100)    );
    # 468 "libcomelang2-str-gc.c"
    int ovec_value_103[ovec_max_100*3];
    memset(&ovec_value_103, 0, sizeof(int)    *(ovec_max_100*3)    );
    # 470 "libcomelang2-str-gc.c"
    # 471 "libcomelang2-str-gc.c"
    # 473 "libcomelang2-str-gc.c"
    options_106=reg->options;
    # 474 "libcomelang2-str-gc.c"
    str_107=reg->str;
    # 476 "libcomelang2-str-gc.c"
    re_108=reg->re;
    # 478 "libcomelang2-str-gc.c"
    n_109=0;
    # 556 "libcomelang2-str-gc.c"
    while(_while_condtional6=(_Bool)1,    _while_condtional6) {
        # 481 "libcomelang2-str-gc.c"
        options_110=2097152;
        # 482 "libcomelang2-str-gc.c"
        len_111=strlen(self);
        # 483 "libcomelang2-str-gc.c"
        regex_result_112=pcre_exec(re_108,(struct pcre_extra*)0,self,len_111,offset_99,options_110,ovec_value_103,ovec_max_100*3);
        # 488 "libcomelang2-str-gc.c"
        for(        i_113=0;        i_113<ovec_max_100;        i_113++        ){
            # 486 "libcomelang2-str-gc.c"
            start_101[i_113]=ovec_value_103[i_113*2];
        }
        # 493 "libcomelang2-str-gc.c"
        for(        i_114=0;        i_114<ovec_max_100;        i_114++        ){
            # 489 "libcomelang2-str-gc.c"
            end_102[i_114]=ovec_value_103[i_114*2+1];
        }
        # 554 "libcomelang2-str-gc.c"
        # 493 "libcomelang2-str-gc.c"
        if(_if_conditional38=regex_result_112==1,        _if_conditional38) {
            # 495 "libcomelang2-str-gc.c"
            str_115=charp_substring(self,start_101[0],end_102[0]);
            # 497 "libcomelang2-str-gc.c"
            group_strings_116=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 497, "list$1charph"));
            # 499 "libcomelang2-str-gc.c"
            str2_117=block(parent,str_115,group_strings_116);
            # 505 "libcomelang2-str-gc.c"
            # 501 "libcomelang2-str-gc.c"
            if(_if_conditional39=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional39) {
                # 502 "libcomelang2-str-gc.c"
                __result104__ = __result_obj__ = result_98;
                return __result104__;
            }
            # 505 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_98,str2_117);
            # 514 "libcomelang2-str-gc.c"
            # 507 "libcomelang2-str-gc.c"
            if(_if_conditional40=offset_99==end_102[0],            _if_conditional40) {
                # 508 "libcomelang2-str-gc.c"
                offset_99++;
            }
            else {
                # 511 "libcomelang2-str-gc.c"
                offset_99=end_102[0];
            }
            # 514 "libcomelang2-str-gc.c"
            n_109++;
            # 518 "libcomelang2-str-gc.c"
            # 515 "libcomelang2-str-gc.c"
            if(_if_conditional41=n_109==count,            _if_conditional41) {
                # 516 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 554 "libcomelang2-str-gc.c"
            # 520 "libcomelang2-str-gc.c"
            if(_if_conditional42=regex_result_112>1,            _if_conditional42) {
                # 521 "libcomelang2-str-gc.c"
                str_118=charp_substring(self,start_101[0],end_102[0]);
                # 523 "libcomelang2-str-gc.c"
                group_strings_119=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 523, "list$1charph"));
                # 529 "libcomelang2-str-gc.c"
                for(                i_120=1;                i_120<regex_result_112;                i_120++                ){
                    # 525 "libcomelang2-str-gc.c"
                    match_string_121=charp_substring(self,start_101[i_120],end_102[i_120]);
                    # 526 "libcomelang2-str-gc.c"
                    list$1charph_push_back(group_strings_119,match_string_121);
                }
                # 529 "libcomelang2-str-gc.c"
                str2_122=block(parent,str_118,group_strings_119);
                # 535 "libcomelang2-str-gc.c"
                # 531 "libcomelang2-str-gc.c"
                if(_if_conditional43=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional43) {
                    # 532 "libcomelang2-str-gc.c"
                    __result105__ = __result_obj__ = result_98;
                    return __result105__;
                }
                # 535 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_98,str2_122);
                # 544 "libcomelang2-str-gc.c"
                # 537 "libcomelang2-str-gc.c"
                if(_if_conditional44=offset_99==end_102[0],                _if_conditional44) {
                    # 538 "libcomelang2-str-gc.c"
                    offset_99++;
                }
                else {
                    # 541 "libcomelang2-str-gc.c"
                    offset_99=end_102[0];
                }
                # 544 "libcomelang2-str-gc.c"
                n_109++;
                # 548 "libcomelang2-str-gc.c"
                # 545 "libcomelang2-str-gc.c"
                if(_if_conditional45=n_109==count,                _if_conditional45) {
                    # 546 "libcomelang2-str-gc.c"
                    break;
                }
            }
            else {
                # 552 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 556 "libcomelang2-str-gc.c"
    __result106__ = __result_obj__ = result_98;
    return __result106__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_123;
int erro_ofs_124;
int options_125;
char* str_126;
struct real_pcre8_or_16* re_127;
struct list$1charph* result_128;
int offset_129;
int ovec_max_130;
_Bool _while_condtional7;
int options_134;
int len_135;
int regex_result_136;
int i_137;
int i_138;
_Bool _if_conditional46;
char* str_139;
struct list$1charph* match_strings_140;
char* str2_141;
_Bool _if_conditional47;
struct list$1charph* __result107__;
_Bool _if_conditional48;
_Bool _if_conditional49;
char* str_142;
_Bool _if_conditional50;
struct list$1charph* match_strings_143;
int i_144;
char* match_str_145;
char* str2_146;
_Bool _if_conditional51;
struct list$1charph* __result108__;
_Bool _if_conditional52;
char* str_147;
struct list$1charph* match_strings_148;
char* str2_149;
_Bool _if_conditional53;
struct list$1charph* __result109__;
struct list$1charph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_124, 0, sizeof(int));
memset(&options_125, 0, sizeof(int));
memset(&str_126, 0, sizeof(char*));
memset(&re_127, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_128, 0, sizeof(struct list$1charph*));
memset(&offset_129, 0, sizeof(int));
memset(&ovec_max_130, 0, sizeof(int));
memset(&options_134, 0, sizeof(int));
memset(&len_135, 0, sizeof(int));
memset(&regex_result_136, 0, sizeof(int));
memset(&i_137, 0, sizeof(int));
memset(&i_138, 0, sizeof(int));
memset(&str_139, 0, sizeof(char*));
memset(&match_strings_140, 0, sizeof(struct list$1charph*));
memset(&str2_141, 0, sizeof(char*));
memset(&str_142, 0, sizeof(char*));
memset(&match_strings_143, 0, sizeof(struct list$1charph*));
memset(&i_144, 0, sizeof(int));
memset(&match_str_145, 0, sizeof(char*));
memset(&str2_146, 0, sizeof(char*));
memset(&str_147, 0, sizeof(char*));
memset(&match_strings_148, 0, sizeof(struct list$1charph*));
memset(&str2_149, 0, sizeof(char*));
    # 561 "libcomelang2-str-gc.c"
    # 562 "libcomelang2-str-gc.c"
    # 564 "libcomelang2-str-gc.c"
    options_125=reg->options;
    # 565 "libcomelang2-str-gc.c"
    str_126=reg->str;
    # 567 "libcomelang2-str-gc.c"
    re_127=reg->re;
    # 569 "libcomelang2-str-gc.c"
    result_128=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 569, "list$1charph"));
    # 571 "libcomelang2-str-gc.c"
    offset_129=0;
    # 573 "libcomelang2-str-gc.c"
    ovec_max_130=16;
    # 574 "libcomelang2-str-gc.c"
    int start_131[ovec_max_130];
    memset(&start_131, 0, sizeof(int)    *(ovec_max_130)    );
    # 575 "libcomelang2-str-gc.c"
    int end_132[ovec_max_130];
    memset(&end_132, 0, sizeof(int)    *(ovec_max_130)    );
    # 576 "libcomelang2-str-gc.c"
    int ovec_value_133[ovec_max_130*3];
    memset(&ovec_value_133, 0, sizeof(int)    *(ovec_max_130*3)    );
    # 643 "libcomelang2-str-gc.c"
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        # 579 "libcomelang2-str-gc.c"
        options_134=2097152;
        # 580 "libcomelang2-str-gc.c"
        len_135=strlen(self);
        # 582 "libcomelang2-str-gc.c"
        regex_result_136=pcre_exec(re_127,(struct pcre_extra*)0,self,len_135,offset_129,options_134,ovec_value_133,ovec_max_130*3);
        # 587 "libcomelang2-str-gc.c"
        for(        i_137=0;        i_137<ovec_max_130;        i_137++        ){
            # 585 "libcomelang2-str-gc.c"
            start_131[i_137]=ovec_value_133[i_137*2];
        }
        # 592 "libcomelang2-str-gc.c"
        for(        i_138=0;        i_138<ovec_max_130;        i_138++        ){
            # 588 "libcomelang2-str-gc.c"
            end_132[i_138]=ovec_value_133[i_138*2+1];
        }
        # 641 "libcomelang2-str-gc.c"
        # 592 "libcomelang2-str-gc.c"
        if(_if_conditional46=regex_result_136==1,        _if_conditional46) {
            # 594 "libcomelang2-str-gc.c"
            str_139=charp_substring(self,offset_129,start_131[0]);
            # 596 "libcomelang2-str-gc.c"
            match_strings_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 596, "list$1charph"));
            # 597 "libcomelang2-str-gc.c"
            str2_141=block(parent,str_139,match_strings_140);
            # 603 "libcomelang2-str-gc.c"
            # 599 "libcomelang2-str-gc.c"
            if(_if_conditional47=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional47) {
                # 600 "libcomelang2-str-gc.c"
                __result107__ = __result_obj__ = result_128;
                return __result107__;
            }
            # 603 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_128,str2_141);
            # 611 "libcomelang2-str-gc.c"
            # 605 "libcomelang2-str-gc.c"
            if(_if_conditional48=offset_129==end_132[0],            _if_conditional48) {
                # 606 "libcomelang2-str-gc.c"
                offset_129++;
            }
            else {
                # 609 "libcomelang2-str-gc.c"
                offset_129=end_132[0];
            }
        }
        else {
            # 641 "libcomelang2-str-gc.c"
            # 613 "libcomelang2-str-gc.c"
            if(_if_conditional49=regex_result_136>1,            _if_conditional49) {
                # 614 "libcomelang2-str-gc.c"
                str_142=charp_substring(self,offset_129,start_131[0]);
                # 623 "libcomelang2-str-gc.c"
                # 616 "libcomelang2-str-gc.c"
                if(_if_conditional50=offset_129==end_132[0],                _if_conditional50) {
                    # 617 "libcomelang2-str-gc.c"
                    offset_129++;
                }
                else {
                    # 620 "libcomelang2-str-gc.c"
                    offset_129=end_132[0];
                }
                # 623 "libcomelang2-str-gc.c"
                match_strings_143=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 623, "list$1charph"));
                # 629 "libcomelang2-str-gc.c"
                for(                i_144=1;                i_144<regex_result_136;                i_144++                ){
                    # 625 "libcomelang2-str-gc.c"
                    match_str_145=charp_substring(self,start_131[i_144],end_132[i_144]);
                    # 626 "libcomelang2-str-gc.c"
                    list$1charph_push_back(match_strings_143,match_str_145);
                }
                # 629 "libcomelang2-str-gc.c"
                str2_146=block(parent,str_142,match_strings_143);
                # 634 "libcomelang2-str-gc.c"
                # 631 "libcomelang2-str-gc.c"
                if(_if_conditional51=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional51) {
                    # 632 "libcomelang2-str-gc.c"
                    __result108__ = __result_obj__ = result_128;
                    return __result108__;
                }
                # 634 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_128,str2_146);
            }
            else {
                # 639 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 654 "libcomelang2-str-gc.c"
    # 643 "libcomelang2-str-gc.c"
    if(_if_conditional52=offset_129<charp_length(self),    _if_conditional52) {
        # 644 "libcomelang2-str-gc.c"
        str_147=charp_substring(self,offset_129,-1);
        # 645 "libcomelang2-str-gc.c"
        match_strings_148=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 645, "list$1charph"));
        # 646 "libcomelang2-str-gc.c"
        str2_149=block(parent,str_147,match_strings_148);
        # 651 "libcomelang2-str-gc.c"
        # 648 "libcomelang2-str-gc.c"
        if(_if_conditional53=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional53) {
            # 649 "libcomelang2-str-gc.c"
            __result109__ = __result_obj__ = result_128;
            return __result109__;
        }
        # 651 "libcomelang2-str-gc.c"
        list$1charph_push_back(result_128,str2_149);
    }
    # 654 "libcomelang2-str-gc.c"
    __result110__ = __result_obj__ = result_128;
    return __result110__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_150;
int erro_ofs_151;
int options_152;
char* str_153;
struct real_pcre8_or_16* re_154;
struct list$1charph* result_155;
int offset_156;
int ovec_max_157;
int n_161;
_Bool _while_condtional8;
int options_162;
int len_163;
int regex_result_164;
int i_165;
int i_166;
_Bool _if_conditional54;
char* str_167;
struct list$1charph* match_strings_168;
char* str2_169;
_Bool _if_conditional55;
struct list$1charph* __result111__;
_Bool _if_conditional56;
_Bool _if_conditional57;
char* str_170;
_Bool _if_conditional58;
struct list$1charph* match_strings_171;
int i_172;
char* match_str_173;
char* str2_174;
_Bool _if_conditional59;
struct list$1charph* __result112__;
_Bool _if_conditional60;
struct list$1charph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_151, 0, sizeof(int));
memset(&options_152, 0, sizeof(int));
memset(&str_153, 0, sizeof(char*));
memset(&re_154, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_155, 0, sizeof(struct list$1charph*));
memset(&offset_156, 0, sizeof(int));
memset(&ovec_max_157, 0, sizeof(int));
memset(&n_161, 0, sizeof(int));
memset(&options_162, 0, sizeof(int));
memset(&len_163, 0, sizeof(int));
memset(&regex_result_164, 0, sizeof(int));
memset(&i_165, 0, sizeof(int));
memset(&i_166, 0, sizeof(int));
memset(&str_167, 0, sizeof(char*));
memset(&match_strings_168, 0, sizeof(struct list$1charph*));
memset(&str2_169, 0, sizeof(char*));
memset(&str_170, 0, sizeof(char*));
memset(&match_strings_171, 0, sizeof(struct list$1charph*));
memset(&i_172, 0, sizeof(int));
memset(&match_str_173, 0, sizeof(char*));
memset(&str2_174, 0, sizeof(char*));
    # 659 "libcomelang2-str-gc.c"
    # 660 "libcomelang2-str-gc.c"
    # 662 "libcomelang2-str-gc.c"
    options_152=reg->options;
    # 663 "libcomelang2-str-gc.c"
    str_153=reg->str;
    # 665 "libcomelang2-str-gc.c"
    re_154=reg->re;
    # 667 "libcomelang2-str-gc.c"
    result_155=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 667, "list$1charph"));
    # 669 "libcomelang2-str-gc.c"
    offset_156=0;
    # 671 "libcomelang2-str-gc.c"
    ovec_max_157=16;
    # 672 "libcomelang2-str-gc.c"
    int start_158[ovec_max_157];
    memset(&start_158, 0, sizeof(int)    *(ovec_max_157)    );
    # 673 "libcomelang2-str-gc.c"
    int end_159[ovec_max_157];
    memset(&end_159, 0, sizeof(int)    *(ovec_max_157)    );
    # 674 "libcomelang2-str-gc.c"
    int ovec_value_160[ovec_max_157*3];
    memset(&ovec_value_160, 0, sizeof(int)    *(ovec_max_157*3)    );
    # 676 "libcomelang2-str-gc.c"
    n_161=0;
    # 748 "libcomelang2-str-gc.c"
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        # 679 "libcomelang2-str-gc.c"
        options_162=2097152;
        # 680 "libcomelang2-str-gc.c"
        len_163=strlen(self);
        # 682 "libcomelang2-str-gc.c"
        regex_result_164=pcre_exec(re_154,(struct pcre_extra*)0,self,len_163,offset_156,options_162,ovec_value_160,ovec_max_157*3);
        # 687 "libcomelang2-str-gc.c"
        for(        i_165=0;        i_165<ovec_max_157;        i_165++        ){
            # 685 "libcomelang2-str-gc.c"
            start_158[i_165]=ovec_value_160[i_165*2];
        }
        # 692 "libcomelang2-str-gc.c"
        for(        i_166=0;        i_166<ovec_max_157;        i_166++        ){
            # 688 "libcomelang2-str-gc.c"
            end_159[i_166]=ovec_value_160[i_166*2+1];
        }
        # 742 "libcomelang2-str-gc.c"
        # 692 "libcomelang2-str-gc.c"
        if(_if_conditional54=regex_result_164==1,        _if_conditional54) {
            # 694 "libcomelang2-str-gc.c"
            str_167=charp_substring(self,offset_156,start_158[0]);
            # 696 "libcomelang2-str-gc.c"
            match_strings_168=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 696, "list$1charph"));
            # 697 "libcomelang2-str-gc.c"
            str2_169=block(parent,str_167,match_strings_168);
            # 702 "libcomelang2-str-gc.c"
            # 699 "libcomelang2-str-gc.c"
            if(_if_conditional55=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional55) {
                # 700 "libcomelang2-str-gc.c"
                __result111__ = __result_obj__ = result_155;
                return __result111__;
            }
            # 702 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_155,str2_169);
            # 710 "libcomelang2-str-gc.c"
            # 704 "libcomelang2-str-gc.c"
            if(_if_conditional56=offset_156==end_159[0],            _if_conditional56) {
                # 705 "libcomelang2-str-gc.c"
                offset_156++;
            }
            else {
                # 708 "libcomelang2-str-gc.c"
                offset_156=end_159[0];
            }
        }
        else {
            # 742 "libcomelang2-str-gc.c"
            # 712 "libcomelang2-str-gc.c"
            if(_if_conditional57=regex_result_164>1,            _if_conditional57) {
                # 713 "libcomelang2-str-gc.c"
                str_170=charp_substring(self,offset_156,start_158[0]);
                # 722 "libcomelang2-str-gc.c"
                # 715 "libcomelang2-str-gc.c"
                if(_if_conditional58=offset_156==end_159[0],                _if_conditional58) {
                    # 716 "libcomelang2-str-gc.c"
                    offset_156++;
                }
                else {
                    # 719 "libcomelang2-str-gc.c"
                    offset_156=end_159[0];
                }
                # 722 "libcomelang2-str-gc.c"
                match_strings_171=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 722, "list$1charph"));
                # 728 "libcomelang2-str-gc.c"
                for(                i_172=1;                i_172<regex_result_164;                i_172++                ){
                    # 724 "libcomelang2-str-gc.c"
                    match_str_173=charp_substring(self,start_158[i_172],end_159[i_172]);
                    # 725 "libcomelang2-str-gc.c"
                    list$1charph_push_back(match_strings_171,match_str_173);
                }
                # 728 "libcomelang2-str-gc.c"
                str2_174=block(parent,str_170,match_strings_171);
                # 734 "libcomelang2-str-gc.c"
                # 730 "libcomelang2-str-gc.c"
                if(_if_conditional59=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional59) {
                    # 731 "libcomelang2-str-gc.c"
                    __result112__ = __result_obj__ = result_155;
                    return __result112__;
                }
                # 734 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_155,str2_174);
            }
            else {
                # 739 "libcomelang2-str-gc.c"
                break;
            }
        }
        # 742 "libcomelang2-str-gc.c"
        n_161++;
        # 746 "libcomelang2-str-gc.c"
        # 743 "libcomelang2-str-gc.c"
        if(_if_conditional60=n_161==count,        _if_conditional60) {
            # 744 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 748 "libcomelang2-str-gc.c"
    __result113__ = __result_obj__ = result_155;
    return __result113__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool _if_conditional61;
_Bool __result114__;
_Bool _if_conditional62;
_Bool __result115__;
_Bool _if_conditional63;
_Bool __result116__;
_Bool _if_conditional64;
_Bool __result117__;
_Bool _if_conditional65;
_Bool __result118__;
_Bool _if_conditional66;
_Bool __result119__;
_Bool _if_conditional67;
_Bool __result120__;
_Bool _if_conditional68;
_Bool __result121__;
_Bool _if_conditional69;
_Bool __result122__;
_Bool _if_conditional70;
_Bool __result123__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 757 "libcomelang2-str-gc.c"
    # 753 "libcomelang2-str-gc.c"
    if(_if_conditional61=strcmp(left->str,right->str)!=0,    _if_conditional61) {
        # 754 "libcomelang2-str-gc.c"
        __result114__ = (_Bool)0;
        return __result114__;
    }
    # 760 "libcomelang2-str-gc.c"
    # 757 "libcomelang2-str-gc.c"
    if(_if_conditional62=left->ignore_case!=right->ignore_case,    _if_conditional62) {
        # 758 "libcomelang2-str-gc.c"
        __result115__ = (_Bool)0;
        return __result115__;
    }
    # 763 "libcomelang2-str-gc.c"
    # 760 "libcomelang2-str-gc.c"
    if(_if_conditional63=left->multiline!=right->multiline,    _if_conditional63) {
        # 761 "libcomelang2-str-gc.c"
        __result116__ = (_Bool)0;
        return __result116__;
    }
    # 766 "libcomelang2-str-gc.c"
    # 763 "libcomelang2-str-gc.c"
    if(_if_conditional64=left->global!=right->global,    _if_conditional64) {
        # 764 "libcomelang2-str-gc.c"
        __result117__ = (_Bool)0;
        return __result117__;
    }
    # 769 "libcomelang2-str-gc.c"
    # 766 "libcomelang2-str-gc.c"
    if(_if_conditional65=left->extended!=right->extended,    _if_conditional65) {
        # 767 "libcomelang2-str-gc.c"
        __result118__ = (_Bool)0;
        return __result118__;
    }
    # 772 "libcomelang2-str-gc.c"
    # 769 "libcomelang2-str-gc.c"
    if(_if_conditional66=left->dotall!=right->dotall,    _if_conditional66) {
        # 770 "libcomelang2-str-gc.c"
        __result119__ = (_Bool)0;
        return __result119__;
    }
    # 775 "libcomelang2-str-gc.c"
    # 772 "libcomelang2-str-gc.c"
    if(_if_conditional67=left->anchored!=right->anchored,    _if_conditional67) {
        # 773 "libcomelang2-str-gc.c"
        __result120__ = (_Bool)0;
        return __result120__;
    }
    # 778 "libcomelang2-str-gc.c"
    # 775 "libcomelang2-str-gc.c"
    if(_if_conditional68=left->dollar_endonly!=right->dollar_endonly,    _if_conditional68) {
        # 776 "libcomelang2-str-gc.c"
        __result121__ = (_Bool)0;
        return __result121__;
    }
    # 781 "libcomelang2-str-gc.c"
    # 778 "libcomelang2-str-gc.c"
    if(_if_conditional69=left->ungreedy!=right->ungreedy,    _if_conditional69) {
        # 779 "libcomelang2-str-gc.c"
        __result122__ = (_Bool)0;
        return __result122__;
    }
    # 785 "libcomelang2-str-gc.c"
    # 781 "libcomelang2-str-gc.c"
    if(_if_conditional70=left->options!=right->options,    _if_conditional70) {
        # 782 "libcomelang2-str-gc.c"
        __result123__ = (_Bool)0;
        return __result123__;
    }
    # 785 "libcomelang2-str-gc.c"
    __result124__ = (_Bool)1;
    return __result124__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* result_175;
int offset_176;
int ovec_max_177;
const char* err_181;
int erro_ofs_182;
int options_183;
char* str_184;
struct real_pcre8_or_16* re_185;
_Bool _while_condtional9;
int options_186;
int len_187;
int regex_result_188;
int i_189;
int i_190;
_Bool _if_conditional71;
char* str_191;
_Bool _if_conditional72;
_Bool _if_conditional73;
char* str_192;
_Bool _if_conditional74;
int i_193;
char* match_string_194;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(struct list$1charph*));
memset(&offset_176, 0, sizeof(int));
memset(&ovec_max_177, 0, sizeof(int));
memset(&erro_ofs_182, 0, sizeof(int));
memset(&options_183, 0, sizeof(int));
memset(&str_184, 0, sizeof(char*));
memset(&re_185, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_186, 0, sizeof(int));
memset(&len_187, 0, sizeof(int));
memset(&regex_result_188, 0, sizeof(int));
memset(&i_189, 0, sizeof(int));
memset(&i_190, 0, sizeof(int));
memset(&str_191, 0, sizeof(char*));
memset(&str_192, 0, sizeof(char*));
memset(&i_193, 0, sizeof(int));
memset(&match_string_194, 0, sizeof(char*));
    # 790 "libcomelang2-str-gc.c"
    result_175=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 790, "list$1charph"));
    # 792 "libcomelang2-str-gc.c"
    offset_176=0;
    # 794 "libcomelang2-str-gc.c"
    ovec_max_177=16;
    # 795 "libcomelang2-str-gc.c"
    int start_178[ovec_max_177];
    memset(&start_178, 0, sizeof(int)    *(ovec_max_177)    );
    # 796 "libcomelang2-str-gc.c"
    int end_179[ovec_max_177];
    memset(&end_179, 0, sizeof(int)    *(ovec_max_177)    );
    # 797 "libcomelang2-str-gc.c"
    int ovec_value_180[ovec_max_177*3];
    memset(&ovec_value_180, 0, sizeof(int)    *(ovec_max_177*3)    );
    # 799 "libcomelang2-str-gc.c"
    # 800 "libcomelang2-str-gc.c"
    # 802 "libcomelang2-str-gc.c"
    options_183=reg->options;
    # 803 "libcomelang2-str-gc.c"
    str_184=reg->str;
    # 805 "libcomelang2-str-gc.c"
    re_185=reg->re;
    # 859 "libcomelang2-str-gc.c"
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        # 810 "libcomelang2-str-gc.c"
        options_186=2097152;
        # 811 "libcomelang2-str-gc.c"
        len_187=strlen(self);
        # 812 "libcomelang2-str-gc.c"
        regex_result_188=pcre_exec(re_185,(struct pcre_extra*)0,self,len_187,offset_176,options_186,ovec_value_180,ovec_max_177*3);
        # 817 "libcomelang2-str-gc.c"
        for(        i_189=0;        i_189<ovec_max_177;        i_189++        ){
            # 815 "libcomelang2-str-gc.c"
            start_178[i_189]=ovec_value_180[i_189*2];
        }
        # 822 "libcomelang2-str-gc.c"
        for(        i_190=0;        i_190<ovec_max_177;        i_190++        ){
            # 818 "libcomelang2-str-gc.c"
            end_179[i_190]=ovec_value_180[i_190*2+1];
        }
        # 857 "libcomelang2-str-gc.c"
        # 822 "libcomelang2-str-gc.c"
        if(_if_conditional71=regex_result_188==1,        _if_conditional71) {
            # 824 "libcomelang2-str-gc.c"
            str_191=charp_substring(self,start_178[0],end_179[0]);
            # 825 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_175,str_191);
            # 833 "libcomelang2-str-gc.c"
            # 827 "libcomelang2-str-gc.c"
            if(_if_conditional72=offset_176==end_179[0],            _if_conditional72) {
                # 828 "libcomelang2-str-gc.c"
                offset_176++;
            }
            else {
                # 831 "libcomelang2-str-gc.c"
                offset_176=end_179[0];
            }
        }
        else {
            # 857 "libcomelang2-str-gc.c"
            # 835 "libcomelang2-str-gc.c"
            if(_if_conditional73=regex_result_188>1,            _if_conditional73) {
                # 836 "libcomelang2-str-gc.c"
                str_192=charp_substring(self,start_178[0],end_179[0]);
                # 837 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_175,str_192);
                # 846 "libcomelang2-str-gc.c"
                # 839 "libcomelang2-str-gc.c"
                if(_if_conditional74=offset_176==end_179[0],                _if_conditional74) {
                    # 840 "libcomelang2-str-gc.c"
                    offset_176++;
                }
                else {
                    # 843 "libcomelang2-str-gc.c"
                    offset_176=end_179[0];
                }
                # 846 "libcomelang2-str-gc.c"
                *num_group_string_in_regex=regex_result_188-1;
                # 851 "libcomelang2-str-gc.c"
                for(                i_193=1;                i_193<regex_result_188;                i_193++                ){
                    # 848 "libcomelang2-str-gc.c"
                    match_string_194=charp_substring(self,start_178[i_193],end_179[i_193]);
                    # 849 "libcomelang2-str-gc.c"
                    list$1charph_push_back(group_strings,match_string_194);
                }
            }
            else {
                # 855 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 859 "libcomelang2-str-gc.c"
    __result125__ = __result_obj__ = result_175;
    return __result125__;
}

char* charp_strip(char* self){
void* __result_obj__;
char* result_195;
int len_196;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(char*));
memset(&len_196, 0, sizeof(int));
    # 864 "libcomelang2-str-gc.c"
    result_195=__builtin_string(self);
    # 866 "libcomelang2-str-gc.c"
    len_196=strlen(self);
    # 878 "libcomelang2-str-gc.c"
    # 868 "libcomelang2-str-gc.c"
    if(_if_conditional75=self[len_196-1]==10,    _if_conditional75) {
        # 869 "libcomelang2-str-gc.c"
        result_195[len_196-1]=0;
    }
    else {
        # 878 "libcomelang2-str-gc.c"
        # 871 "libcomelang2-str-gc.c"
        if(_if_conditional76=self[len_196-1]==13,        _if_conditional76) {
            # 872 "libcomelang2-str-gc.c"
            result_195[len_196-1]=0;
        }
        else {
            # 878 "libcomelang2-str-gc.c"
            # 874 "libcomelang2-str-gc.c"
            if(_if_conditional77=len_196>2&&self[len_196-2]==13&&self[len_196-1]==10,            _if_conditional77) {
                # 875 "libcomelang2-str-gc.c"
                result_195[len_196-2]=0;
            }
        }
    }
    # 878 "libcomelang2-str-gc.c"
    __result126__ = __result_obj__ = result_195;
    return __result126__;
}

char* charp_printable(char* str){
void* __result_obj__;
int len_197;
char* result_198;
int n_199;
int i_200;
char c_201;
_Bool _if_conditional78;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_197, 0, sizeof(int));
memset(&result_198, 0, sizeof(char*));
memset(&n_199, 0, sizeof(int));
memset(&i_200, 0, sizeof(int));
memset(&c_201, 0, sizeof(char));
    # 883 "libcomelang2-str-gc.c"
    len_197=charp_length(str);
    # 884 "libcomelang2-str-gc.c"
    result_198=(char*)come_calloc(1, sizeof(char)*(1*(len_197*2+1)), "libcomelang2-str-gc.c", 884, "char");
    # 886 "libcomelang2-str-gc.c"
    n_199=0;
    # 901 "libcomelang2-str-gc.c"
    for(    i_200=0;    i_200<len_197;    i_200++    ){
        # 888 "libcomelang2-str-gc.c"
        c_201=str[i_200];
        # 899 "libcomelang2-str-gc.c"
        # 891 "libcomelang2-str-gc.c"
        if(_if_conditional78=(c_201>=0&&c_201<32)||c_201==127,        _if_conditional78) {
            # 893 "libcomelang2-str-gc.c"
            result_198[n_199++]=94;
            # 894 "libcomelang2-str-gc.c"
            result_198[n_199++]=c_201+65-1;
        }
        else {
            # 897 "libcomelang2-str-gc.c"
            result_198[n_199++]=c_201;
        }
    }
    # 903 "libcomelang2-str-gc.c"
    result_198[n_199]=0;
    # 903 "libcomelang2-str-gc.c"
    __result127__ = __result_obj__ = result_198;
    return __result127__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
int len_202;
char* result_203;
_Bool _if_conditional79;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_202, 0, sizeof(int));
memset(&result_203, 0, sizeof(char*));
    # 908 "libcomelang2-str-gc.c"
    len_202=4*(wcslen(wstr)+1);
    # 910 "libcomelang2-str-gc.c"
    result_203=(char*)come_calloc(1, sizeof(char)*(1*(len_202)), "libcomelang2-str-gc.c", 910, "char");
    # 917 "libcomelang2-str-gc.c"
    # 912 "libcomelang2-str-gc.c"
    if(_if_conditional79=wcstombs(result_203,wstr,len_202)<0,    _if_conditional79) {
        # 914 "libcomelang2-str-gc.c"
        strncpy(result_203,"",len_202);
    }
    # 917 "libcomelang2-str-gc.c"
    __result128__ = __result_obj__ = result_203;
    return __result128__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
unsigned int* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 922 "libcomelang2-str-gc.c"
    __result129__ = __result_obj__ = __builtin_wstring(str);
    return __result129__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    # 927 "libcomelang2-str-gc.c"
    __result130__ = wcslen(str);
    return __result130__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
int len_204;
_Bool _if_conditional80;
unsigned int* __result131__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
unsigned int* __result132__;
_Bool _if_conditional85;
unsigned int* sub_str_205;
unsigned int* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_204, 0, sizeof(int));
memset(&sub_str_205, 0, sizeof(unsigned int*));
    # 932 "libcomelang2-str-gc.c"
    # 934 "libcomelang2-str-gc.c"
    len_204=wcslen(str);
    # 940 "libcomelang2-str-gc.c"
    # 936 "libcomelang2-str-gc.c"
    if(_if_conditional80=len_204==0,    _if_conditional80) {
        # 937 "libcomelang2-str-gc.c"
        __result131__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result131__;
    }
    # 944 "libcomelang2-str-gc.c"
    # 940 "libcomelang2-str-gc.c"
    if(_if_conditional81=head<0,    _if_conditional81) {
        # 941 "libcomelang2-str-gc.c"
        head+=len_204;
    }
    # 948 "libcomelang2-str-gc.c"
    # 944 "libcomelang2-str-gc.c"
    if(_if_conditional82=tail<0,    _if_conditional82) {
        # 945 "libcomelang2-str-gc.c"
        tail+=len_204+1;
    }
    # 952 "libcomelang2-str-gc.c"
    # 948 "libcomelang2-str-gc.c"
    if(_if_conditional83=head<0,    _if_conditional83) {
        # 949 "libcomelang2-str-gc.c"
        head=0;
    }
    # 956 "libcomelang2-str-gc.c"
    # 952 "libcomelang2-str-gc.c"
    if(_if_conditional84=tail<0,    _if_conditional84) {
        # 953 "libcomelang2-str-gc.c"
        __result132__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result132__;
    }
    # 960 "libcomelang2-str-gc.c"
    # 956 "libcomelang2-str-gc.c"
    if(_if_conditional85=tail>=len_204,    _if_conditional85) {
        # 957 "libcomelang2-str-gc.c"
        tail=len_204;
    }
    # 960 "libcomelang2-str-gc.c"
    sub_str_205=wchar_tp_substring(str,tail,-1);
    # 962 "libcomelang2-str-gc.c"
    memcpy(str+head,sub_str_205,sizeof(unsigned int)*(wstring_length(sub_str_205)+1));
    # 964 "libcomelang2-str-gc.c"
    __result133__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    return __result133__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* head_206;
_Bool _if_conditional86;
int __result134__;
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_206, 0, sizeof(unsigned int*));
    # 969 "libcomelang2-str-gc.c"
    # 971 "libcomelang2-str-gc.c"
    head_206=wcsstr(str,search_str);
    # 977 "libcomelang2-str-gc.c"
    # 973 "libcomelang2-str-gc.c"
    if(_if_conditional86=head_206==((void*)0),    _if_conditional86) {
        # 974 "libcomelang2-str-gc.c"
        __result134__ = default_value;
        return __result134__;
    }
    # 977 "libcomelang2-str-gc.c"
    __result135__ = head_206-str;
    return __result135__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int len_207;
unsigned int* p_208;
_Bool _while_condtional10;
int len2_209;
_Bool result_210;
int i_211;
_Bool _if_conditional87;
_Bool _if_conditional88;
int __result136__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_207, 0, sizeof(int));
memset(&p_208, 0, sizeof(unsigned int*));
memset(&len2_209, 0, sizeof(int));
memset(&result_210, 0, sizeof(_Bool));
memset(&i_211, 0, sizeof(int));
    # 982 "libcomelang2-str-gc.c"
    # 984 "libcomelang2-str-gc.c"
    len_207=wcslen(search_str);
    # 986 "libcomelang2-str-gc.c"
    p_208=str+wcslen(str)-len_207;
    # 1004 "libcomelang2-str-gc.c"
    while(_while_condtional10=p_208>=str,    _while_condtional10) {
        # 989 "libcomelang2-str-gc.c"
        len2_209=wcslen(p_208);
        # 990 "libcomelang2-str-gc.c"
        result_210=(_Bool)1;
        # 991 "libcomelang2-str-gc.c"
        # 997 "libcomelang2-str-gc.c"
        for(        i_211=0;        i_211<len_207&&i_211<len2_209;        i_211++        ){
            # 996 "libcomelang2-str-gc.c"
            # 993 "libcomelang2-str-gc.c"
            if(_if_conditional87=p_208[i_211]!=search_str[i_211],            _if_conditional87) {
                # 994 "libcomelang2-str-gc.c"
                result_210=(_Bool)0;
            }
        }
        # 1001 "libcomelang2-str-gc.c"
        # 997 "libcomelang2-str-gc.c"
        if(result_210) {
            # 998 "libcomelang2-str-gc.c"
            __result136__ = (p_208-str);
            return __result136__;
        }
        # 1001 "libcomelang2-str-gc.c"
        p_208--;
    }
    # 1004 "libcomelang2-str-gc.c"
    __result137__ = default_value;
    return __result137__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
int len_212;
unsigned int* result_213;
int i_214;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_212, 0, sizeof(int));
memset(&result_213, 0, sizeof(unsigned int*));
memset(&i_214, 0, sizeof(int));
    # 1009 "libcomelang2-str-gc.c"
    len_212=wcslen(str);
    # 1010 "libcomelang2-str-gc.c"
    result_213=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_212+1)), "libcomelang2-str-gc.c", 1010, "int");
    # 1016 "libcomelang2-str-gc.c"
    for(    i_214=0;    i_214<len_212;    i_214++    ){
        # 1013 "libcomelang2-str-gc.c"
        result_213[i_214]=str[len_212-i_214-1];
    }
    # 1016 "libcomelang2-str-gc.c"
    result_213[len_212]=0;
    # 1018 "libcomelang2-str-gc.c"
    __result138__ = __result_obj__ = result_213;
    return __result138__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
int len_215;
unsigned int* result_216;
int i_217;
unsigned int* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_215, 0, sizeof(int));
memset(&result_216, 0, sizeof(unsigned int*));
memset(&i_217, 0, sizeof(int));
    # 1023 "libcomelang2-str-gc.c"
    len_215=wcslen(str)*n+1;
    # 1025 "libcomelang2-str-gc.c"
    result_216=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_215)), "libcomelang2-str-gc.c", 1025, "int");
    # 1027 "libcomelang2-str-gc.c"
    result_216[0]=0;
    # 1033 "libcomelang2-str-gc.c"
    for(    i_217=0;    i_217<n;    i_217++    ){
        # 1030 "libcomelang2-str-gc.c"
        wcscat(result_216,str);
    }
    # 1033 "libcomelang2-str-gc.c"
    __result139__ = __result_obj__ = result_216;
    return __result139__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
int len_218;
unsigned int* result_219;
int n_220;
int i_221;
unsigned int c_222;
_Bool _if_conditional89;
unsigned int* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_218, 0, sizeof(int));
memset(&result_219, 0, sizeof(unsigned int*));
memset(&n_220, 0, sizeof(int));
memset(&i_221, 0, sizeof(int));
memset(&c_222, 0, sizeof(unsigned int));
    # 1038 "libcomelang2-str-gc.c"
    len_218=wchar_tp_length(str);
    # 1039 "libcomelang2-str-gc.c"
    result_219=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_218*2+1)), "libcomelang2-str-gc.c", 1039, "int");
    # 1041 "libcomelang2-str-gc.c"
    n_220=0;
    # 1056 "libcomelang2-str-gc.c"
    for(    i_221=0;    i_221<len_218;    i_221++    ){
        # 1043 "libcomelang2-str-gc.c"
        c_222=str[i_221];
        # 1054 "libcomelang2-str-gc.c"
        # 1046 "libcomelang2-str-gc.c"
        if(_if_conditional89=(c_222>=0&&c_222<32)||c_222==127,        _if_conditional89) {
            # 1048 "libcomelang2-str-gc.c"
            result_219[n_220++]=94;
            # 1049 "libcomelang2-str-gc.c"
            result_219[n_220++]=c_222+65-1;
        }
        else {
            # 1052 "libcomelang2-str-gc.c"
            result_219[n_220++]=c_222;
        }
    }
    # 1058 "libcomelang2-str-gc.c"
    result_219[n_220]=0;
    # 1058 "libcomelang2-str-gc.c"
    __result140__ = __result_obj__ = result_219;
    return __result140__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_223;
int ovec_max_224;
const char* err_228;
int erro_ofs_229;
int options_230;
char* str_231;
struct real_pcre8_or_16* re_232;
int n_233;
_Bool _while_condtional11;
int options_234;
int len_235;
int regex_result_236;
int i_237;
int i_238;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool __result141__;
_Bool _if_conditional92;
_Bool _if_conditional93;
int i_241;
char* match_string_242;
_Bool _if_conditional94;
_Bool __result143__;
_Bool _if_conditional95;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_223, 0, sizeof(int));
memset(&ovec_max_224, 0, sizeof(int));
memset(&erro_ofs_229, 0, sizeof(int));
memset(&options_230, 0, sizeof(int));
memset(&str_231, 0, sizeof(char*));
memset(&re_232, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_233, 0, sizeof(int));
memset(&options_234, 0, sizeof(int));
memset(&len_235, 0, sizeof(int));
memset(&regex_result_236, 0, sizeof(int));
memset(&i_237, 0, sizeof(int));
memset(&i_238, 0, sizeof(int));
memset(&i_241, 0, sizeof(int));
memset(&match_string_242, 0, sizeof(char*));
    # 1063 "libcomelang2-str-gc.c"
    offset_223=0;
    # 1065 "libcomelang2-str-gc.c"
    ovec_max_224=16;
    # 1066 "libcomelang2-str-gc.c"
    int start_225[ovec_max_224];
    memset(&start_225, 0, sizeof(int)    *(ovec_max_224)    );
    # 1067 "libcomelang2-str-gc.c"
    int end_226[ovec_max_224];
    memset(&end_226, 0, sizeof(int)    *(ovec_max_224)    );
    # 1068 "libcomelang2-str-gc.c"
    int ovec_value_227[ovec_max_224*3];
    memset(&ovec_value_227, 0, sizeof(int)    *(ovec_max_224*3)    );
    # 1070 "libcomelang2-str-gc.c"
    # 1071 "libcomelang2-str-gc.c"
    # 1073 "libcomelang2-str-gc.c"
    options_230=reg->options;
    # 1074 "libcomelang2-str-gc.c"
    str_231=reg->str;
    # 1076 "libcomelang2-str-gc.c"
    re_232=reg->re;
    # 1078 "libcomelang2-str-gc.c"
    n_233=0;
    # 1137 "libcomelang2-str-gc.c"
    while(_while_condtional11=(_Bool)1,    _while_condtional11) {
        # 1081 "libcomelang2-str-gc.c"
        options_234=2097152;
        # 1082 "libcomelang2-str-gc.c"
        len_235=strlen(self);
        # 1084 "libcomelang2-str-gc.c"
        regex_result_236=pcre_exec(re_232,(struct pcre_extra*)0,self,len_235,offset_223,options_234,ovec_value_227,ovec_max_224*3);
        # 1089 "libcomelang2-str-gc.c"
        for(        i_237=0;        i_237<ovec_max_224;        i_237++        ){
            # 1087 "libcomelang2-str-gc.c"
            start_225[i_237]=ovec_value_227[i_237*2];
        }
        # 1094 "libcomelang2-str-gc.c"
        for(        i_238=0;        i_238<ovec_max_224;        i_238++        ){
            # 1090 "libcomelang2-str-gc.c"
            end_226[i_238]=ovec_value_227[i_238*2+1];
        }
        # 1135 "libcomelang2-str-gc.c"
        # 1094 "libcomelang2-str-gc.c"
        if(_if_conditional90=regex_result_236==1||(group_strings==((void*)0)&&regex_result_236>0),        _if_conditional90) {
            # 1096 "libcomelang2-str-gc.c"
            n_233++;
            # 1102 "libcomelang2-str-gc.c"
            # 1098 "libcomelang2-str-gc.c"
            if(_if_conditional91=n_233==count,            _if_conditional91) {
                # 1099 "libcomelang2-str-gc.c"
                __result141__ = (_Bool)1;
                return __result141__;
            }
            # 1108 "libcomelang2-str-gc.c"
            # 1102 "libcomelang2-str-gc.c"
            if(_if_conditional92=offset_223==end_226[0],            _if_conditional92) {
                # 1103 "libcomelang2-str-gc.c"
                offset_223++;
            }
            else {
                # 1106 "libcomelang2-str-gc.c"
                offset_223=end_226[0];
            }
        }
        else {
            # 1135 "libcomelang2-str-gc.c"
            # 1110 "libcomelang2-str-gc.c"
            if(_if_conditional93=regex_result_236>1,            _if_conditional93) {
                # 1111 "libcomelang2-str-gc.c"
                n_233++;
                # 1113 "libcomelang2-str-gc.c"
                list$1charph_reset(group_strings);
                # 1119 "libcomelang2-str-gc.c"
                for(                i_241=1;                i_241<regex_result_236;                i_241++                ){
                    # 1115 "libcomelang2-str-gc.c"
                    match_string_242=charp_substring(self,start_225[i_241],end_226[i_241]);
                    # 1116 "libcomelang2-str-gc.c"
                    list$1charph_push_back(group_strings,match_string_242);
                }
                # 1123 "libcomelang2-str-gc.c"
                # 1119 "libcomelang2-str-gc.c"
                if(_if_conditional94=n_233==count,                _if_conditional94) {
                    # 1120 "libcomelang2-str-gc.c"
                    __result143__ = (_Bool)1;
                    return __result143__;
                }
                # 1129 "libcomelang2-str-gc.c"
                # 1123 "libcomelang2-str-gc.c"
                if(_if_conditional95=offset_223==end_226[0],                _if_conditional95) {
                    # 1124 "libcomelang2-str-gc.c"
                    offset_223++;
                }
                else {
                    # 1127 "libcomelang2-str-gc.c"
                    offset_223=end_226[0];
                }
            }
            else {
                # 1133 "libcomelang2-str-gc.c"
                __result144__ = (_Bool)0;
                return __result144__;
            }
        }
    }
    # 1137 "libcomelang2-str-gc.c"
    __result145__ = (_Bool)0;
    return __result145__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_239;
_Bool _while_condtional12;
struct list_item$1charph* prev_it_240;
struct list$1charph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_239, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_240, 0, sizeof(struct list_item$1charph*));
                    # 433 "./comelang2.h"
                    it_239=self->head;
                    # 440 "./comelang2.h"
                    while(_while_condtional12=it_239!=((void*)0),                    _while_condtional12) {
                        # 435 "./comelang2.h"
                        prev_it_240=it_239;
                        # 436 "./comelang2.h"
                        it_239=it_239->next;
                        # 437 "./comelang2.h"
                    }
                    # 440 "./comelang2.h"
                    self->head=((void*)0);
                    # 441 "./comelang2.h"
                    self->tail=((void*)0);
                    # 443 "./comelang2.h"
                    self->len=0;
                    # 445 "./comelang2.h"
                    __result142__ = __result_obj__ = self;
                    return __result142__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1142 "libcomelang2-str-gc.c"
    __result146__ = wcscmp(left,right);
    return __result146__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1147 "libcomelang2-str-gc.c"
    __result147__ = wcscmp(left,right);
    return __result147__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1152 "libcomelang2-str-gc.c"
    __result148__ = string_get_hash_key(reg->str);
    return __result148__;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1157 "libcomelang2-str-gc.c"
    __result149__ = left==right;
    return __result149__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1163 "libcomelang2-str-gc.c"
    __result150__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result150__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1168 "libcomelang2-str-gc.c"
    __result151__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result151__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1173 "libcomelang2-str-gc.c"
    __result152__ = wcscmp(left,right)==0;
    return __result152__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1178 "libcomelang2-str-gc.c"
    __result153__ = wcscmp(left,right)==0;
    return __result153__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1183 "libcomelang2-str-gc.c"
    __result154__ = wcscmp(left,right)!=0;
    return __result154__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1188 "libcomelang2-str-gc.c"
    __result155__ = wcscmp(left,right)!=0;
    return __result155__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1193 "libcomelang2-str-gc.c"
    __result156__ = come_regex_equals(left,right);
    return __result156__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1198 "libcomelang2-str-gc.c"
    __result157__ = !come_regex_equals(left,right);
    return __result157__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned int* result_243;
unsigned int* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_243, 0, sizeof(unsigned int*));
    # 1203 "libcomelang2-str-gc.c"
    result_243=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1203, "int");
    # 1205 "libcomelang2-str-gc.c"
    wcscpy(result_243,left);
    # 1206 "libcomelang2-str-gc.c"
    wcscat(result_243,right);
    # 1208 "libcomelang2-str-gc.c"
    __result158__ = __result_obj__ = result_243;
    return __result158__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned int* result_244;
unsigned int* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(unsigned int*));
    # 1213 "libcomelang2-str-gc.c"
    result_244=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1213, "int");
    # 1215 "libcomelang2-str-gc.c"
    wcscpy(result_244,left);
    # 1216 "libcomelang2-str-gc.c"
    wcscat(result_244,right);
    # 1218 "libcomelang2-str-gc.c"
    __result159__ = __result_obj__ = result_244;
    return __result159__;
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_245;
_Bool _if_conditional96;
int __result160__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_245, 0, sizeof(char*));
    # 1223 "libcomelang2-str-gc.c"
    # 1225 "libcomelang2-str-gc.c"
    head_245=strstr(str,search_str);
    # 1231 "libcomelang2-str-gc.c"
    # 1227 "libcomelang2-str-gc.c"
    if(_if_conditional96=head_245==((void*)0),    _if_conditional96) {
        # 1228 "libcomelang2-str-gc.c"
        __result160__ = default_value;
        return __result160__;
    }
    # 1231 "libcomelang2-str-gc.c"
    __result161__ = head_245-str;
    return __result161__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_246;
int result_250;
int offset_251;
const char* err_252;
int erro_ofs_253;
int options_254;
char* str_255;
struct real_pcre8_or_16* re_256;
_Bool _while_condtional13;
int options_257;
int len_258;
int regex_result_259;
int i_260;
int i_261;
_Bool _if_conditional97;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_246, 0, sizeof(int));
memset(&result_250, 0, sizeof(int));
memset(&offset_251, 0, sizeof(int));
memset(&erro_ofs_253, 0, sizeof(int));
memset(&options_254, 0, sizeof(int));
memset(&str_255, 0, sizeof(char*));
memset(&re_256, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_257, 0, sizeof(int));
memset(&len_258, 0, sizeof(int));
memset(&regex_result_259, 0, sizeof(int));
memset(&i_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
    # 1237 "libcomelang2-str-gc.c"
    ovec_max_246=16;
    # 1238 "libcomelang2-str-gc.c"
    int start_247[ovec_max_246];
    memset(&start_247, 0, sizeof(int)    *(ovec_max_246)    );
    # 1239 "libcomelang2-str-gc.c"
    int end_248[ovec_max_246];
    memset(&end_248, 0, sizeof(int)    *(ovec_max_246)    );
    # 1240 "libcomelang2-str-gc.c"
    int ovec_value_249[ovec_max_246*3];
    memset(&ovec_value_249, 0, sizeof(int)    *(ovec_max_246*3)    );
    # 1242 "libcomelang2-str-gc.c"
    result_250=default_value;
    # 1244 "libcomelang2-str-gc.c"
    offset_251=0;
    # 1246 "libcomelang2-str-gc.c"
    # 1247 "libcomelang2-str-gc.c"
    # 1249 "libcomelang2-str-gc.c"
    options_254=reg->options;
    # 1250 "libcomelang2-str-gc.c"
    str_255=reg->str;
    # 1252 "libcomelang2-str-gc.c"
    re_256=reg->re;
    # 1278 "libcomelang2-str-gc.c"
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        # 1255 "libcomelang2-str-gc.c"
        options_257=2097152;
        # 1256 "libcomelang2-str-gc.c"
        len_258=strlen(self);
        # 1257 "libcomelang2-str-gc.c"
        regex_result_259=pcre_exec(re_256,(struct pcre_extra*)0,self,len_258,offset_251,options_257,ovec_value_249,ovec_max_246*3);
        # 1262 "libcomelang2-str-gc.c"
        for(        i_260=0;        i_260<ovec_max_246;        i_260++        ){
            # 1260 "libcomelang2-str-gc.c"
            start_247[i_260]=ovec_value_249[i_260*2];
        }
        # 1267 "libcomelang2-str-gc.c"
        for(        i_261=0;        i_261<ovec_max_246;        i_261++        ){
            # 1263 "libcomelang2-str-gc.c"
            end_248[i_261]=ovec_value_249[i_261*2+1];
        }
        # 1273 "libcomelang2-str-gc.c"
        # 1267 "libcomelang2-str-gc.c"
        if(_if_conditional97=regex_result_259==1||regex_result_259>0,        _if_conditional97) {
            # 1269 "libcomelang2-str-gc.c"
            result_250=start_247[0];
            # 1270 "libcomelang2-str-gc.c"
            break;
        }
        # 1276 "libcomelang2-str-gc.c"
        {
            # 1274 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 1278 "libcomelang2-str-gc.c"
    __result162__ = result_250;
    return __result162__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_262;
_Bool _if_conditional98;
char* __result163__;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_262, 0, sizeof(int));
    # 1284 "libcomelang2-str-gc.c"
    len_262=strlen(self);
    # 1290 "libcomelang2-str-gc.c"
    # 1286 "libcomelang2-str-gc.c"
    if(_if_conditional98=strcmp(self,"")==0,    _if_conditional98) {
        # 1287 "libcomelang2-str-gc.c"
        __result163__ = __result_obj__ = __builtin_string(self);
        return __result163__;
    }
    # 1294 "libcomelang2-str-gc.c"
    # 1290 "libcomelang2-str-gc.c"
    if(_if_conditional99=index<0,    _if_conditional99) {
        # 1291 "libcomelang2-str-gc.c"
        index+=len_262;
    }
    # 1298 "libcomelang2-str-gc.c"
    # 1294 "libcomelang2-str-gc.c"
    if(_if_conditional100=index>=len_262,    _if_conditional100) {
        # 1295 "libcomelang2-str-gc.c"
        index=len_262-1;
    }
    # 1302 "libcomelang2-str-gc.c"
    # 1298 "libcomelang2-str-gc.c"
    if(_if_conditional101=index<0,    _if_conditional101) {
        # 1299 "libcomelang2-str-gc.c"
        index=0;
    }
    # 1302 "libcomelang2-str-gc.c"
    self[index]=c;
    # 1304 "libcomelang2-str-gc.c"
    __result164__ = __result_obj__ = __builtin_string(self);
    return __result164__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_263;
char* result_264;
int i_265;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_263, 0, sizeof(int));
memset(&result_264, 0, sizeof(char*));
memset(&i_265, 0, sizeof(int));
    # 1309 "libcomelang2-str-gc.c"
    len_263=strlen(str)*n+1;
    # 1311 "libcomelang2-str-gc.c"
    result_264=(char*)come_calloc(1, sizeof(char)*(1*(len_263)), "libcomelang2-str-gc.c", 1311, "char");
    # 1313 "libcomelang2-str-gc.c"
    result_264[0]=0;
    # 1319 "libcomelang2-str-gc.c"
    for(    i_265=0;    i_265<n;    i_265++    ){
        # 1316 "libcomelang2-str-gc.c"
        strcat(result_264,str);
    }
    # 1319 "libcomelang2-str-gc.c"
    __result165__ = __result_obj__ = result_264;
    return __result165__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_266;
int ovec_max_267;
const char* err_271;
int erro_ofs_272;
int options_273;
char* str_274;
struct real_pcre8_or_16* re_275;
struct buffer* result_276;
_Bool _while_condtional14;
int options_277;
int len_278;
int regex_result_279;
int i_280;
int i_281;
_Bool _if_conditional102;
char* str_282;
_Bool _if_conditional103;
_Bool _if_conditional104;
char* str_283;
char* str_284;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_266, 0, sizeof(int));
memset(&ovec_max_267, 0, sizeof(int));
memset(&erro_ofs_272, 0, sizeof(int));
memset(&options_273, 0, sizeof(int));
memset(&str_274, 0, sizeof(char*));
memset(&re_275, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_276, 0, sizeof(struct buffer*));
memset(&options_277, 0, sizeof(int));
memset(&len_278, 0, sizeof(int));
memset(&regex_result_279, 0, sizeof(int));
memset(&i_280, 0, sizeof(int));
memset(&i_281, 0, sizeof(int));
memset(&str_282, 0, sizeof(char*));
memset(&str_283, 0, sizeof(char*));
memset(&str_284, 0, sizeof(char*));
    # 1324 "libcomelang2-str-gc.c"
    offset_266=0;
    # 1326 "libcomelang2-str-gc.c"
    ovec_max_267=16;
    # 1327 "libcomelang2-str-gc.c"
    int start_268[ovec_max_267];
    memset(&start_268, 0, sizeof(int)    *(ovec_max_267)    );
    # 1328 "libcomelang2-str-gc.c"
    int end_269[ovec_max_267];
    memset(&end_269, 0, sizeof(int)    *(ovec_max_267)    );
    # 1329 "libcomelang2-str-gc.c"
    int ovec_value_270[ovec_max_267*3];
    memset(&ovec_value_270, 0, sizeof(int)    *(ovec_max_267*3)    );
    # 1331 "libcomelang2-str-gc.c"
    # 1332 "libcomelang2-str-gc.c"
    # 1334 "libcomelang2-str-gc.c"
    options_273=reg->options;
    # 1335 "libcomelang2-str-gc.c"
    str_274=reg->str;
    # 1337 "libcomelang2-str-gc.c"
    re_275=reg->re;
    # 1339 "libcomelang2-str-gc.c"
    result_276=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1339, "buffer"));
    # 1382 "libcomelang2-str-gc.c"
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        # 1342 "libcomelang2-str-gc.c"
        options_277=2097152;
        # 1343 "libcomelang2-str-gc.c"
        len_278=strlen(self);
        # 1344 "libcomelang2-str-gc.c"
        regex_result_279=pcre_exec(re_275,(struct pcre_extra*)0,self,len_278,offset_266,options_277,ovec_value_270,ovec_max_267*3);
        # 1349 "libcomelang2-str-gc.c"
        for(        i_280=0;        i_280<ovec_max_267;        i_280++        ){
            # 1347 "libcomelang2-str-gc.c"
            start_268[i_280]=ovec_value_270[i_280*2];
        }
        # 1354 "libcomelang2-str-gc.c"
        for(        i_281=0;        i_281<ovec_max_267;        i_281++        ){
            # 1350 "libcomelang2-str-gc.c"
            end_269[i_281]=ovec_value_270[i_281*2+1];
        }
        # 1380 "libcomelang2-str-gc.c"
        # 1354 "libcomelang2-str-gc.c"
        if(_if_conditional102=regex_result_279==1,        _if_conditional102) {
            # 1356 "libcomelang2-str-gc.c"
            str_282=charp_substring(self,offset_266,start_268[0]);
            # 1358 "libcomelang2-str-gc.c"
            buffer_append_str(result_276,str_282);
            # 1359 "libcomelang2-str-gc.c"
            buffer_append_str(result_276,replace);
            # 1368 "libcomelang2-str-gc.c"
            # 1361 "libcomelang2-str-gc.c"
            if(_if_conditional103=offset_266==end_269[0],            _if_conditional103) {
                # 1362 "libcomelang2-str-gc.c"
                offset_266++;
            }
            else {
                # 1365 "libcomelang2-str-gc.c"
                offset_266=end_269[0];
            }
            # 1373 "libcomelang2-str-gc.c"
            # 1368 "libcomelang2-str-gc.c"
            if(_if_conditional104=!reg->global,            _if_conditional104) {
                # 1369 "libcomelang2-str-gc.c"
                str_283=charp_substring(self,offset_266,-1);
                # 1370 "libcomelang2-str-gc.c"
                buffer_append_str(result_276,str_283);
                # 1371 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 1376 "libcomelang2-str-gc.c"
            str_284=charp_substring(self,offset_266,-1);
            # 1377 "libcomelang2-str-gc.c"
            buffer_append_str(result_276,str_284);
            # 1378 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 1382 "libcomelang2-str-gc.c"
    __result166__ = __result_obj__ = buffer_to_string(result_276);
    return __result166__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_285;
int ovec_max_286;
const char* err_290;
int erro_ofs_291;
int options_292;
char* str_293;
struct real_pcre8_or_16* re_294;
struct buffer* result_295;
int n_296;
_Bool _while_condtional15;
int options_297;
int len_298;
int regex_result_299;
int i_300;
int i_301;
_Bool _if_conditional105;
char* str_302;
_Bool _if_conditional106;
_Bool _if_conditional107;
char* str_303;
_Bool _if_conditional108;
char* str_304;
char* str_305;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_285, 0, sizeof(int));
memset(&ovec_max_286, 0, sizeof(int));
memset(&erro_ofs_291, 0, sizeof(int));
memset(&options_292, 0, sizeof(int));
memset(&str_293, 0, sizeof(char*));
memset(&re_294, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_295, 0, sizeof(struct buffer*));
memset(&n_296, 0, sizeof(int));
memset(&options_297, 0, sizeof(int));
memset(&len_298, 0, sizeof(int));
memset(&regex_result_299, 0, sizeof(int));
memset(&i_300, 0, sizeof(int));
memset(&i_301, 0, sizeof(int));
memset(&str_302, 0, sizeof(char*));
memset(&str_303, 0, sizeof(char*));
memset(&str_304, 0, sizeof(char*));
memset(&str_305, 0, sizeof(char*));
    # 1387 "libcomelang2-str-gc.c"
    offset_285=0;
    # 1389 "libcomelang2-str-gc.c"
    ovec_max_286=16;
    # 1390 "libcomelang2-str-gc.c"
    int start_287[ovec_max_286];
    memset(&start_287, 0, sizeof(int)    *(ovec_max_286)    );
    # 1391 "libcomelang2-str-gc.c"
    int end_288[ovec_max_286];
    memset(&end_288, 0, sizeof(int)    *(ovec_max_286)    );
    # 1392 "libcomelang2-str-gc.c"
    int ovec_value_289[ovec_max_286*3];
    memset(&ovec_value_289, 0, sizeof(int)    *(ovec_max_286*3)    );
    # 1394 "libcomelang2-str-gc.c"
    # 1395 "libcomelang2-str-gc.c"
    # 1397 "libcomelang2-str-gc.c"
    options_292=reg->options;
    # 1398 "libcomelang2-str-gc.c"
    str_293=reg->str;
    # 1400 "libcomelang2-str-gc.c"
    re_294=reg->re;
    # 1402 "libcomelang2-str-gc.c"
    result_295=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1402, "buffer"));
    # 1404 "libcomelang2-str-gc.c"
    n_296=0;
    # 1453 "libcomelang2-str-gc.c"
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        # 1407 "libcomelang2-str-gc.c"
        options_297=2097152;
        # 1408 "libcomelang2-str-gc.c"
        len_298=strlen(self);
        # 1409 "libcomelang2-str-gc.c"
        regex_result_299=pcre_exec(re_294,(struct pcre_extra*)0,self,len_298,offset_285,options_297,ovec_value_289,ovec_max_286*3);
        # 1414 "libcomelang2-str-gc.c"
        for(        i_300=0;        i_300<ovec_max_286;        i_300++        ){
            # 1412 "libcomelang2-str-gc.c"
            start_287[i_300]=ovec_value_289[i_300*2];
        }
        # 1419 "libcomelang2-str-gc.c"
        for(        i_301=0;        i_301<ovec_max_286;        i_301++        ){
            # 1415 "libcomelang2-str-gc.c"
            end_288[i_301]=ovec_value_289[i_301*2+1];
        }
        # 1451 "libcomelang2-str-gc.c"
        # 1419 "libcomelang2-str-gc.c"
        if(_if_conditional105=regex_result_299==1,        _if_conditional105) {
            # 1421 "libcomelang2-str-gc.c"
            n_296++;
            # 1422 "libcomelang2-str-gc.c"
            str_302=charp_substring(self,offset_285,start_287[0]);
            # 1424 "libcomelang2-str-gc.c"
            buffer_append_str(result_295,str_302);
            # 1425 "libcomelang2-str-gc.c"
            buffer_append_str(result_295,replace);
            # 1434 "libcomelang2-str-gc.c"
            # 1427 "libcomelang2-str-gc.c"
            if(_if_conditional106=offset_285==end_288[0],            _if_conditional106) {
                # 1428 "libcomelang2-str-gc.c"
                offset_285++;
            }
            else {
                # 1431 "libcomelang2-str-gc.c"
                offset_285=end_288[0];
            }
            # 1439 "libcomelang2-str-gc.c"
            # 1434 "libcomelang2-str-gc.c"
            if(_if_conditional107=!reg->global,            _if_conditional107) {
                # 1435 "libcomelang2-str-gc.c"
                str_303=charp_substring(self,offset_285,-1);
                # 1436 "libcomelang2-str-gc.c"
                buffer_append_str(result_295,str_303);
                # 1437 "libcomelang2-str-gc.c"
                break;
            }
            # 1444 "libcomelang2-str-gc.c"
            # 1439 "libcomelang2-str-gc.c"
            if(_if_conditional108=n_296==count,            _if_conditional108) {
                # 1440 "libcomelang2-str-gc.c"
                str_304=charp_substring(self,offset_285,-1);
                # 1441 "libcomelang2-str-gc.c"
                buffer_append_str(result_295,str_304);
                # 1442 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 1447 "libcomelang2-str-gc.c"
            str_305=charp_substring(self,offset_285,-1);
            # 1448 "libcomelang2-str-gc.c"
            buffer_append_str(result_295,str_305);
            # 1449 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 1453 "libcomelang2-str-gc.c"
    __result167__ = __result_obj__ = buffer_to_string(result_295);
    return __result167__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* result_306;
struct buffer* buf_307;
int i_308;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct list$1charph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_306, 0, sizeof(struct list$1charph*));
memset(&buf_307, 0, sizeof(struct buffer*));
memset(&i_308, 0, sizeof(int));
    # 1459 "libcomelang2-str-gc.c"
    # 1461 "libcomelang2-str-gc.c"
    result_306=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1461, "list$1charph"));
    # 1463 "libcomelang2-str-gc.c"
    buf_307=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1463, "buffer"));
    # 1475 "libcomelang2-str-gc.c"
    for(    i_308=0;    i_308<charp_length(self);    i_308++    ){
        # 1474 "libcomelang2-str-gc.c"
        # 1466 "libcomelang2-str-gc.c"
        if(_if_conditional109=strstr(self+i_308,str)==self+i_308,        _if_conditional109) {
            # 1467 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_306,__builtin_string(buf_307->buf));
            # 1468 "libcomelang2-str-gc.c"
            buffer_reset(buf_307);
            # 1469 "libcomelang2-str-gc.c"
            i_308+=strlen(str)-1;
        }
        else {
            # 1472 "libcomelang2-str-gc.c"
            buffer_append_char(buf_307,self[i_308]);
        }
    }
    # 1479 "libcomelang2-str-gc.c"
    # 1475 "libcomelang2-str-gc.c"
    if(_if_conditional110=buffer_length(buf_307)!=0,    _if_conditional110) {
        # 1476 "libcomelang2-str-gc.c"
        list$1charph_push_back(result_306,__builtin_string(buf_307->buf));
    }
    # 1479 "libcomelang2-str-gc.c"
    __result168__ = __result_obj__ = result_306;
    return __result168__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* result_309;
int offset_310;
int ovec_max_311;
const char* err_315;
int erro_ofs_316;
int options_317;
char* str_318;
struct real_pcre8_or_16* re_319;
_Bool _while_condtional16;
int options_320;
int len_321;
int regex_result_322;
int i_323;
int i_324;
_Bool _if_conditional111;
char* str_325;
_Bool _if_conditional112;
_Bool _if_conditional113;
char* str_326;
_Bool _if_conditional114;
int i_327;
char* match_string_328;
struct list$1charph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_309, 0, sizeof(struct list$1charph*));
memset(&offset_310, 0, sizeof(int));
memset(&ovec_max_311, 0, sizeof(int));
memset(&erro_ofs_316, 0, sizeof(int));
memset(&options_317, 0, sizeof(int));
memset(&str_318, 0, sizeof(char*));
memset(&re_319, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_320, 0, sizeof(int));
memset(&len_321, 0, sizeof(int));
memset(&regex_result_322, 0, sizeof(int));
memset(&i_323, 0, sizeof(int));
memset(&i_324, 0, sizeof(int));
memset(&str_325, 0, sizeof(char*));
memset(&str_326, 0, sizeof(char*));
memset(&i_327, 0, sizeof(int));
memset(&match_string_328, 0, sizeof(char*));
    # 1484 "libcomelang2-str-gc.c"
    result_309=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1484, "list$1charph"));
    # 1486 "libcomelang2-str-gc.c"
    offset_310=0;
    # 1488 "libcomelang2-str-gc.c"
    ovec_max_311=16;
    # 1489 "libcomelang2-str-gc.c"
    int start_312[ovec_max_311];
    memset(&start_312, 0, sizeof(int)    *(ovec_max_311)    );
    # 1490 "libcomelang2-str-gc.c"
    int end_313[ovec_max_311];
    memset(&end_313, 0, sizeof(int)    *(ovec_max_311)    );
    # 1491 "libcomelang2-str-gc.c"
    int ovec_value_314[ovec_max_311*3];
    memset(&ovec_value_314, 0, sizeof(int)    *(ovec_max_311*3)    );
    # 1493 "libcomelang2-str-gc.c"
    # 1494 "libcomelang2-str-gc.c"
    # 1496 "libcomelang2-str-gc.c"
    options_317=reg->options;
    # 1497 "libcomelang2-str-gc.c"
    str_318=reg->str;
    # 1499 "libcomelang2-str-gc.c"
    re_319=reg->re;
    # 1552 "libcomelang2-str-gc.c"
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        # 1503 "libcomelang2-str-gc.c"
        options_320=2097152;
        # 1504 "libcomelang2-str-gc.c"
        len_321=strlen(self);
        # 1505 "libcomelang2-str-gc.c"
        regex_result_322=pcre_exec(re_319,(struct pcre_extra*)0,self,len_321,offset_310,options_320,ovec_value_314,ovec_max_311*3);
        # 1510 "libcomelang2-str-gc.c"
        for(        i_323=0;        i_323<ovec_max_311;        i_323++        ){
            # 1508 "libcomelang2-str-gc.c"
            start_312[i_323]=ovec_value_314[i_323*2];
        }
        # 1515 "libcomelang2-str-gc.c"
        for(        i_324=0;        i_324<ovec_max_311;        i_324++        ){
            # 1511 "libcomelang2-str-gc.c"
            end_313[i_324]=ovec_value_314[i_324*2+1];
        }
        # 1550 "libcomelang2-str-gc.c"
        # 1515 "libcomelang2-str-gc.c"
        if(_if_conditional111=regex_result_322==1,        _if_conditional111) {
            # 1517 "libcomelang2-str-gc.c"
            str_325=charp_substring(self,start_312[0],end_313[0]);
            # 1519 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_309,str_325);
            # 1527 "libcomelang2-str-gc.c"
            # 1521 "libcomelang2-str-gc.c"
            if(_if_conditional112=offset_310==end_313[0],            _if_conditional112) {
                # 1522 "libcomelang2-str-gc.c"
                offset_310++;
            }
            else {
                # 1525 "libcomelang2-str-gc.c"
                offset_310=end_313[0];
            }
        }
        else {
            # 1550 "libcomelang2-str-gc.c"
            # 1529 "libcomelang2-str-gc.c"
            if(_if_conditional113=regex_result_322>1,            _if_conditional113) {
                # 1530 "libcomelang2-str-gc.c"
                str_326=charp_substring(self,start_312[0],end_313[0]);
                # 1531 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_309,str_326);
                # 1540 "libcomelang2-str-gc.c"
                # 1533 "libcomelang2-str-gc.c"
                if(_if_conditional114=offset_310==end_313[0],                _if_conditional114) {
                    # 1534 "libcomelang2-str-gc.c"
                    offset_310++;
                }
                else {
                    # 1537 "libcomelang2-str-gc.c"
                    offset_310=end_313[0];
                }
                # 1544 "libcomelang2-str-gc.c"
                for(                i_327=1;                i_327<regex_result_322;                i_327++                ){
                    # 1541 "libcomelang2-str-gc.c"
                    match_string_328=charp_substring(self,start_312[i_327],end_313[i_327]);
                    # 1542 "libcomelang2-str-gc.c"
                    list$1charph_push_back(result_309,match_string_328);
                }
            }
            else {
                # 1548 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 1552 "libcomelang2-str-gc.c"
    __result169__ = __result_obj__ = result_309;
    return __result169__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_329;
int erro_ofs_330;
int options_331;
char* str_332;
struct real_pcre8_or_16* re_333;
struct list$1charph* result_334;
int offset_335;
int ovec_max_336;
_Bool _while_condtional17;
int options_340;
int len_341;
int regex_result_342;
int i_343;
int i_344;
_Bool _if_conditional115;
char* str_345;
_Bool _if_conditional116;
_Bool _if_conditional117;
char* str_346;
_Bool _if_conditional118;
int i_347;
char* match_str_348;
_Bool _if_conditional119;
char* str_349;
struct list$1charph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_330, 0, sizeof(int));
memset(&options_331, 0, sizeof(int));
memset(&str_332, 0, sizeof(char*));
memset(&re_333, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_334, 0, sizeof(struct list$1charph*));
memset(&offset_335, 0, sizeof(int));
memset(&ovec_max_336, 0, sizeof(int));
memset(&options_340, 0, sizeof(int));
memset(&len_341, 0, sizeof(int));
memset(&regex_result_342, 0, sizeof(int));
memset(&i_343, 0, sizeof(int));
memset(&i_344, 0, sizeof(int));
memset(&str_345, 0, sizeof(char*));
memset(&str_346, 0, sizeof(char*));
memset(&i_347, 0, sizeof(int));
memset(&match_str_348, 0, sizeof(char*));
memset(&str_349, 0, sizeof(char*));
    # 1557 "libcomelang2-str-gc.c"
    # 1558 "libcomelang2-str-gc.c"
    # 1560 "libcomelang2-str-gc.c"
    options_331=reg->options;
    # 1561 "libcomelang2-str-gc.c"
    str_332=reg->str;
    # 1563 "libcomelang2-str-gc.c"
    re_333=reg->re;
    # 1565 "libcomelang2-str-gc.c"
    result_334=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1565, "list$1charph"));
    # 1567 "libcomelang2-str-gc.c"
    offset_335=0;
    # 1569 "libcomelang2-str-gc.c"
    ovec_max_336=16;
    # 1570 "libcomelang2-str-gc.c"
    int start_337[ovec_max_336];
    memset(&start_337, 0, sizeof(int)    *(ovec_max_336)    );
    # 1571 "libcomelang2-str-gc.c"
    int end_338[ovec_max_336];
    memset(&end_338, 0, sizeof(int)    *(ovec_max_336)    );
    # 1572 "libcomelang2-str-gc.c"
    int ovec_value_339[ovec_max_336*3];
    memset(&ovec_value_339, 0, sizeof(int)    *(ovec_max_336*3)    );
    # 1624 "libcomelang2-str-gc.c"
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        # 1575 "libcomelang2-str-gc.c"
        options_340=2097152;
        # 1576 "libcomelang2-str-gc.c"
        len_341=strlen(self);
        # 1578 "libcomelang2-str-gc.c"
        regex_result_342=pcre_exec(re_333,(struct pcre_extra*)0,self,len_341,offset_335,options_340,ovec_value_339,ovec_max_336*3);
        # 1583 "libcomelang2-str-gc.c"
        for(        i_343=0;        i_343<ovec_max_336;        i_343++        ){
            # 1581 "libcomelang2-str-gc.c"
            start_337[i_343]=ovec_value_339[i_343*2];
        }
        # 1588 "libcomelang2-str-gc.c"
        for(        i_344=0;        i_344<ovec_max_336;        i_344++        ){
            # 1584 "libcomelang2-str-gc.c"
            end_338[i_344]=ovec_value_339[i_344*2+1];
        }
        # 1622 "libcomelang2-str-gc.c"
        # 1588 "libcomelang2-str-gc.c"
        if(_if_conditional115=regex_result_342==1,        _if_conditional115) {
            # 1590 "libcomelang2-str-gc.c"
            str_345=charp_substring(self,offset_335,start_337[0]);
            # 1591 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_334,str_345);
            # 1599 "libcomelang2-str-gc.c"
            # 1593 "libcomelang2-str-gc.c"
            if(_if_conditional116=offset_335==end_338[0],            _if_conditional116) {
                # 1594 "libcomelang2-str-gc.c"
                offset_335++;
            }
            else {
                # 1597 "libcomelang2-str-gc.c"
                offset_335=end_338[0];
            }
        }
        else {
            # 1622 "libcomelang2-str-gc.c"
            # 1601 "libcomelang2-str-gc.c"
            if(_if_conditional117=regex_result_342>1,            _if_conditional117) {
                # 1602 "libcomelang2-str-gc.c"
                str_346=charp_substring(self,offset_335,start_337[0]);
                # 1603 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_334,str_346);
                # 1612 "libcomelang2-str-gc.c"
                # 1605 "libcomelang2-str-gc.c"
                if(_if_conditional118=offset_335==end_338[0],                _if_conditional118) {
                    # 1606 "libcomelang2-str-gc.c"
                    offset_335++;
                }
                else {
                    # 1609 "libcomelang2-str-gc.c"
                    offset_335=end_338[0];
                }
                # 1616 "libcomelang2-str-gc.c"
                for(                i_347=1;                i_347<regex_result_342;                i_347++                ){
                    # 1613 "libcomelang2-str-gc.c"
                    match_str_348=charp_substring(self,start_337[i_347],end_338[i_347]);
                    # 1614 "libcomelang2-str-gc.c"
                    list$1charph_push_back(result_334,match_str_348);
                }
            }
            else {
                # 1620 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 1629 "libcomelang2-str-gc.c"
    # 1624 "libcomelang2-str-gc.c"
    if(_if_conditional119=offset_335<charp_length(self),    _if_conditional119) {
        # 1625 "libcomelang2-str-gc.c"
        str_349=charp_substring(self,offset_335,-1);
        # 1626 "libcomelang2-str-gc.c"
        list$1charph_push_back(result_334,str_349);
    }
    # 1629 "libcomelang2-str-gc.c"
    __result170__ = __result_obj__ = result_334;
    return __result170__;
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_350;
int ovec_max_351;
const char* err_355;
int erro_ofs_356;
int options_357;
char* str_358;
struct real_pcre8_or_16* re_359;
_Bool _while_condtional18;
int options_360;
int len_361;
int regex_result_362;
int i_363;
int i_364;
_Bool _if_conditional120;
_Bool __result171__;
_Bool __result172__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_350, 0, sizeof(int));
memset(&ovec_max_351, 0, sizeof(int));
memset(&erro_ofs_356, 0, sizeof(int));
memset(&options_357, 0, sizeof(int));
memset(&str_358, 0, sizeof(char*));
memset(&re_359, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_360, 0, sizeof(int));
memset(&len_361, 0, sizeof(int));
memset(&regex_result_362, 0, sizeof(int));
memset(&i_363, 0, sizeof(int));
memset(&i_364, 0, sizeof(int));
    # 1634 "libcomelang2-str-gc.c"
    offset_350=0;
    # 1636 "libcomelang2-str-gc.c"
    ovec_max_351=16;
    # 1637 "libcomelang2-str-gc.c"
    int start_352[ovec_max_351];
    memset(&start_352, 0, sizeof(int)    *(ovec_max_351)    );
    # 1638 "libcomelang2-str-gc.c"
    int end_353[ovec_max_351];
    memset(&end_353, 0, sizeof(int)    *(ovec_max_351)    );
    # 1639 "libcomelang2-str-gc.c"
    int ovec_value_354[ovec_max_351*3];
    memset(&ovec_value_354, 0, sizeof(int)    *(ovec_max_351*3)    );
    # 1641 "libcomelang2-str-gc.c"
    # 1642 "libcomelang2-str-gc.c"
    # 1644 "libcomelang2-str-gc.c"
    options_357=reg->options;
    # 1645 "libcomelang2-str-gc.c"
    str_358=reg->str;
    # 1647 "libcomelang2-str-gc.c"
    re_359=reg->re;
    # 1674 "libcomelang2-str-gc.c"
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        # 1650 "libcomelang2-str-gc.c"
        options_360=2097152;
        # 1651 "libcomelang2-str-gc.c"
        len_361=strlen(self);
        # 1653 "libcomelang2-str-gc.c"
        regex_result_362=pcre_exec(re_359,(struct pcre_extra*)0,self,len_361,offset_350,options_360,ovec_value_354,ovec_max_351*3);
        # 1658 "libcomelang2-str-gc.c"
        for(        i_363=0;        i_363<ovec_max_351;        i_363++        ){
            # 1656 "libcomelang2-str-gc.c"
            start_352[i_363]=ovec_value_354[i_363*2];
        }
        # 1663 "libcomelang2-str-gc.c"
        for(        i_364=0;        i_364<ovec_max_351;        i_364++        ){
            # 1659 "libcomelang2-str-gc.c"
            end_353[i_364]=ovec_value_354[i_364*2+1];
        }
        # 1672 "libcomelang2-str-gc.c"
        # 1663 "libcomelang2-str-gc.c"
        if(_if_conditional120=regex_result_362>0,        _if_conditional120) {
            # 1665 "libcomelang2-str-gc.c"
            __result171__ = (_Bool)1;
            return __result171__;
        }
        else {
            # 1670 "libcomelang2-str-gc.c"
            __result172__ = (_Bool)0;
            return __result172__;
        }
    }
    # 1674 "libcomelang2-str-gc.c"
    __result173__ = (_Bool)0;
    return __result173__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
const char* err_365;
int erro_ofs_366;
int options_367;
char* str_368;
struct real_pcre8_or_16* re_369;
struct list$1charph* result_370;
int offset_371;
int ovec_max_372;
int n_376;
_Bool _while_condtional19;
int options_377;
int len_378;
int regex_result_379;
int i_380;
int i_381;
_Bool _if_conditional121;
char* str_382;
_Bool _if_conditional122;
_Bool _if_conditional123;
char* str_383;
_Bool _if_conditional124;
int i_384;
char* match_str_385;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* str_386;
struct list$1charph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_366, 0, sizeof(int));
memset(&options_367, 0, sizeof(int));
memset(&str_368, 0, sizeof(char*));
memset(&re_369, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_370, 0, sizeof(struct list$1charph*));
memset(&offset_371, 0, sizeof(int));
memset(&ovec_max_372, 0, sizeof(int));
memset(&n_376, 0, sizeof(int));
memset(&options_377, 0, sizeof(int));
memset(&len_378, 0, sizeof(int));
memset(&regex_result_379, 0, sizeof(int));
memset(&i_380, 0, sizeof(int));
memset(&i_381, 0, sizeof(int));
memset(&str_382, 0, sizeof(char*));
memset(&str_383, 0, sizeof(char*));
memset(&i_384, 0, sizeof(int));
memset(&match_str_385, 0, sizeof(char*));
memset(&str_386, 0, sizeof(char*));
    # 1679 "libcomelang2-str-gc.c"
    # 1680 "libcomelang2-str-gc.c"
    # 1682 "libcomelang2-str-gc.c"
    options_367=reg->options;
    # 1683 "libcomelang2-str-gc.c"
    str_368=reg->str;
    # 1685 "libcomelang2-str-gc.c"
    re_369=reg->re;
    # 1687 "libcomelang2-str-gc.c"
    result_370=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1687, "list$1charph"));
    # 1689 "libcomelang2-str-gc.c"
    offset_371=0;
    # 1691 "libcomelang2-str-gc.c"
    ovec_max_372=16;
    # 1692 "libcomelang2-str-gc.c"
    int start_373[ovec_max_372];
    memset(&start_373, 0, sizeof(int)    *(ovec_max_372)    );
    # 1693 "libcomelang2-str-gc.c"
    int end_374[ovec_max_372];
    memset(&end_374, 0, sizeof(int)    *(ovec_max_372)    );
    # 1694 "libcomelang2-str-gc.c"
    int ovec_value_375[ovec_max_372*3];
    memset(&ovec_value_375, 0, sizeof(int)    *(ovec_max_372*3)    );
    # 1696 "libcomelang2-str-gc.c"
    n_376=0;
    # 1754 "libcomelang2-str-gc.c"
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        # 1699 "libcomelang2-str-gc.c"
        options_377=2097152;
        # 1700 "libcomelang2-str-gc.c"
        len_378=strlen(self);
        # 1702 "libcomelang2-str-gc.c"
        regex_result_379=pcre_exec(re_369,(struct pcre_extra*)0,self,len_378,offset_371,options_377,ovec_value_375,ovec_max_372*3);
        # 1707 "libcomelang2-str-gc.c"
        for(        i_380=0;        i_380<ovec_max_372;        i_380++        ){
            # 1705 "libcomelang2-str-gc.c"
            start_373[i_380]=ovec_value_375[i_380*2];
        }
        # 1712 "libcomelang2-str-gc.c"
        for(        i_381=0;        i_381<ovec_max_372;        i_381++        ){
            # 1708 "libcomelang2-str-gc.c"
            end_374[i_381]=ovec_value_375[i_381*2+1];
        }
        # 1747 "libcomelang2-str-gc.c"
        # 1712 "libcomelang2-str-gc.c"
        if(_if_conditional121=regex_result_379==1,        _if_conditional121) {
            # 1714 "libcomelang2-str-gc.c"
            str_382=charp_substring(self,offset_371,start_373[0]);
            # 1715 "libcomelang2-str-gc.c"
            list$1charph_push_back(result_370,str_382);
            # 1723 "libcomelang2-str-gc.c"
            # 1717 "libcomelang2-str-gc.c"
            if(_if_conditional122=offset_371==end_374[0],            _if_conditional122) {
                # 1718 "libcomelang2-str-gc.c"
                offset_371++;
            }
            else {
                # 1721 "libcomelang2-str-gc.c"
                offset_371=end_374[0];
            }
        }
        else {
            # 1747 "libcomelang2-str-gc.c"
            # 1725 "libcomelang2-str-gc.c"
            if(_if_conditional123=regex_result_379>1,            _if_conditional123) {
                # 1726 "libcomelang2-str-gc.c"
                str_383=charp_substring(self,offset_371,start_373[0]);
                # 1727 "libcomelang2-str-gc.c"
                list$1charph_push_back(result_370,str_383);
                # 1736 "libcomelang2-str-gc.c"
                # 1729 "libcomelang2-str-gc.c"
                if(_if_conditional124=offset_371==end_374[0],                _if_conditional124) {
                    # 1730 "libcomelang2-str-gc.c"
                    offset_371++;
                }
                else {
                    # 1733 "libcomelang2-str-gc.c"
                    offset_371=end_374[0];
                }
                # 1740 "libcomelang2-str-gc.c"
                for(                i_384=1;                i_384<regex_result_379;                i_384++                ){
                    # 1737 "libcomelang2-str-gc.c"
                    match_str_385=charp_substring(self,start_373[i_384],end_374[i_384]);
                    # 1738 "libcomelang2-str-gc.c"
                    list$1charph_push_back(result_370,match_str_385);
                }
            }
            else {
                # 1744 "libcomelang2-str-gc.c"
                break;
            }
        }
        # 1747 "libcomelang2-str-gc.c"
        n_376++;
        # 1752 "libcomelang2-str-gc.c"
        # 1749 "libcomelang2-str-gc.c"
        if(_if_conditional125=maxsplit==n_376,        _if_conditional125) {
            # 1750 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 1759 "libcomelang2-str-gc.c"
    # 1754 "libcomelang2-str-gc.c"
    if(_if_conditional126=offset_371<charp_length(self),    _if_conditional126) {
        # 1755 "libcomelang2-str-gc.c"
        str_386=charp_substring(self,offset_371,-1);
        # 1756 "libcomelang2-str-gc.c"
        list$1charph_push_back(result_370,str_386);
    }
    # 1759 "libcomelang2-str-gc.c"
    __result174__ = __result_obj__ = result_370;
    return __result174__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_387;
int erro_ofs_388;
int options_389;
char* str_390;
struct real_pcre8_or_16* re_391;
char* self2_392;
int ovec_max_393;
int result_397;
int offset_398;
int n_399;
_Bool _while_condtional20;
int options_400;
int len_401;
int regex_result_402;
int i_403;
int i_404;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_388, 0, sizeof(int));
memset(&options_389, 0, sizeof(int));
memset(&str_390, 0, sizeof(char*));
memset(&re_391, 0, sizeof(struct real_pcre8_or_16*));
memset(&self2_392, 0, sizeof(char*));
memset(&ovec_max_393, 0, sizeof(int));
memset(&result_397, 0, sizeof(int));
memset(&offset_398, 0, sizeof(int));
memset(&n_399, 0, sizeof(int));
memset(&options_400, 0, sizeof(int));
memset(&len_401, 0, sizeof(int));
memset(&regex_result_402, 0, sizeof(int));
memset(&i_403, 0, sizeof(int));
memset(&i_404, 0, sizeof(int));
    # 1764 "libcomelang2-str-gc.c"
    # 1765 "libcomelang2-str-gc.c"
    # 1767 "libcomelang2-str-gc.c"
    options_389=reg->options;
    # 1768 "libcomelang2-str-gc.c"
    str_390=reg->str;
    # 1770 "libcomelang2-str-gc.c"
    re_391=reg->re;
    # 1772 "libcomelang2-str-gc.c"
    self2_392=charp_reverse(self);
    # 1774 "libcomelang2-str-gc.c"
    ovec_max_393=16;
    # 1775 "libcomelang2-str-gc.c"
    int start_394[ovec_max_393];
    memset(&start_394, 0, sizeof(int)    *(ovec_max_393)    );
    # 1776 "libcomelang2-str-gc.c"
    int end_395[ovec_max_393];
    memset(&end_395, 0, sizeof(int)    *(ovec_max_393)    );
    # 1777 "libcomelang2-str-gc.c"
    int ovec_value_396[ovec_max_393*3];
    memset(&ovec_value_396, 0, sizeof(int)    *(ovec_max_393*3)    );
    # 1779 "libcomelang2-str-gc.c"
    result_397=default_value;
    # 1781 "libcomelang2-str-gc.c"
    offset_398=0;
    # 1783 "libcomelang2-str-gc.c"
    n_399=0;
    # 1821 "libcomelang2-str-gc.c"
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        # 1786 "libcomelang2-str-gc.c"
        options_400=2097152;
        # 1787 "libcomelang2-str-gc.c"
        len_401=strlen(self2_392);
        # 1788 "libcomelang2-str-gc.c"
        regex_result_402=pcre_exec(re_391,(struct pcre_extra*)0,self2_392,len_401,offset_398,options_400,ovec_value_396,ovec_max_393*3);
        # 1793 "libcomelang2-str-gc.c"
        for(        i_403=0;        i_403<ovec_max_393;        i_403++        ){
            # 1791 "libcomelang2-str-gc.c"
            start_394[i_403]=ovec_value_396[i_403*2];
        }
        # 1798 "libcomelang2-str-gc.c"
        for(        i_404=0;        i_404<ovec_max_393;        i_404++        ){
            # 1794 "libcomelang2-str-gc.c"
            end_395[i_404]=ovec_value_396[i_404*2+1];
        }
        # 1819 "libcomelang2-str-gc.c"
        # 1798 "libcomelang2-str-gc.c"
        if(_if_conditional127=regex_result_402>0,        _if_conditional127) {
            # 1800 "libcomelang2-str-gc.c"
            n_399++;
            # 1809 "libcomelang2-str-gc.c"
            # 1802 "libcomelang2-str-gc.c"
            if(_if_conditional128=offset_398==end_395[0],            _if_conditional128) {
                # 1803 "libcomelang2-str-gc.c"
                offset_398++;
            }
            else {
                # 1806 "libcomelang2-str-gc.c"
                offset_398=end_395[0];
            }
            # 1813 "libcomelang2-str-gc.c"
            # 1809 "libcomelang2-str-gc.c"
            if(_if_conditional129=n_399==count,            _if_conditional129) {
                # 1810 "libcomelang2-str-gc.c"
                result_397=strlen(self)-end_395[0];
                # 1811 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 1817 "libcomelang2-str-gc.c"
            break;
        }
    }
    # 1821 "libcomelang2-str-gc.c"
    __result175__ = result_397;
    return __result175__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_405;
int ovec_max_406;
const char* err_410;
int erro_ofs_411;
int options_412;
char* str_413;
struct real_pcre8_or_16* re_414;
int n_415;
_Bool _while_condtional21;
int options_416;
int len_417;
int regex_result_418;
int i_419;
int i_420;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool __result176__;
_Bool _if_conditional132;
_Bool __result177__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_405, 0, sizeof(int));
memset(&ovec_max_406, 0, sizeof(int));
memset(&erro_ofs_411, 0, sizeof(int));
memset(&options_412, 0, sizeof(int));
memset(&str_413, 0, sizeof(char*));
memset(&re_414, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_415, 0, sizeof(int));
memset(&options_416, 0, sizeof(int));
memset(&len_417, 0, sizeof(int));
memset(&regex_result_418, 0, sizeof(int));
memset(&i_419, 0, sizeof(int));
memset(&i_420, 0, sizeof(int));
    # 1826 "libcomelang2-str-gc.c"
    offset_405=0;
    # 1828 "libcomelang2-str-gc.c"
    ovec_max_406=16;
    # 1829 "libcomelang2-str-gc.c"
    int start_407[ovec_max_406];
    memset(&start_407, 0, sizeof(int)    *(ovec_max_406)    );
    # 1830 "libcomelang2-str-gc.c"
    int end_408[ovec_max_406];
    memset(&end_408, 0, sizeof(int)    *(ovec_max_406)    );
    # 1831 "libcomelang2-str-gc.c"
    int ovec_value_409[ovec_max_406*3];
    memset(&ovec_value_409, 0, sizeof(int)    *(ovec_max_406*3)    );
    # 1833 "libcomelang2-str-gc.c"
    # 1834 "libcomelang2-str-gc.c"
    # 1836 "libcomelang2-str-gc.c"
    options_412=reg->options;
    # 1837 "libcomelang2-str-gc.c"
    str_413=reg->str;
    # 1839 "libcomelang2-str-gc.c"
    re_414=reg->re;
    # 1841 "libcomelang2-str-gc.c"
    n_415=0;
    # 1879 "libcomelang2-str-gc.c"
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        # 1844 "libcomelang2-str-gc.c"
        options_416=2097152;
        # 1845 "libcomelang2-str-gc.c"
        len_417=strlen(self);
        # 1847 "libcomelang2-str-gc.c"
        regex_result_418=pcre_exec(re_414,(struct pcre_extra*)0,self,len_417,offset_405,options_416,ovec_value_409,ovec_max_406*3);
        # 1852 "libcomelang2-str-gc.c"
        for(        i_419=0;        i_419<ovec_max_406;        i_419++        ){
            # 1850 "libcomelang2-str-gc.c"
            start_407[i_419]=ovec_value_409[i_419*2];
        }
        # 1857 "libcomelang2-str-gc.c"
        for(        i_420=0;        i_420<ovec_max_406;        i_420++        ){
            # 1853 "libcomelang2-str-gc.c"
            end_408[i_420]=ovec_value_409[i_420*2+1];
        }
        # 1877 "libcomelang2-str-gc.c"
        # 1857 "libcomelang2-str-gc.c"
        if(_if_conditional130=regex_result_418>0,        _if_conditional130) {
            # 1859 "libcomelang2-str-gc.c"
            n_415++;
            # 1865 "libcomelang2-str-gc.c"
            # 1861 "libcomelang2-str-gc.c"
            if(_if_conditional131=count==n_415,            _if_conditional131) {
                # 1862 "libcomelang2-str-gc.c"
                __result176__ = (_Bool)1;
                return __result176__;
            }
            # 1871 "libcomelang2-str-gc.c"
            # 1865 "libcomelang2-str-gc.c"
            if(_if_conditional132=offset_405==end_408[0],            _if_conditional132) {
                # 1866 "libcomelang2-str-gc.c"
                offset_405++;
            }
            else {
                # 1869 "libcomelang2-str-gc.c"
                offset_405=end_408[0];
            }
        }
        else {
            # 1875 "libcomelang2-str-gc.c"
            __result177__ = (_Bool)0;
            return __result177__;
        }
    }
    # 1879 "libcomelang2-str-gc.c"
    __result178__ = (_Bool)0;
    return __result178__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_421;
int ovec_max_422;
const char* err_426;
int erro_ofs_427;
int options_428;
char* str_429;
struct real_pcre8_or_16* re_430;
struct buffer* result_431;
_Bool _while_condtional22;
int options_432;
int len_433;
int regex_result_434;
int i_435;
int i_436;
_Bool _if_conditional133;
char* str_437;
struct list$1charph* group_strings_438;
char* match_string_439;
char* block_result_440;
_Bool _if_conditional134;
char* __result179__;
_Bool _if_conditional135;
_Bool _if_conditional136;
char* str_441;
_Bool _if_conditional137;
char* str_442;
_Bool _if_conditional138;
struct list$1charph* group_strings_443;
int i_444;
char* match_string_445;
char* match_string_446;
char* block_result_447;
_Bool _if_conditional139;
char* __result180__;
_Bool _if_conditional140;
char* str_448;
char* str_449;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_421, 0, sizeof(int));
memset(&ovec_max_422, 0, sizeof(int));
memset(&erro_ofs_427, 0, sizeof(int));
memset(&options_428, 0, sizeof(int));
memset(&str_429, 0, sizeof(char*));
memset(&re_430, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_431, 0, sizeof(struct buffer*));
memset(&options_432, 0, sizeof(int));
memset(&len_433, 0, sizeof(int));
memset(&regex_result_434, 0, sizeof(int));
memset(&i_435, 0, sizeof(int));
memset(&i_436, 0, sizeof(int));
memset(&str_437, 0, sizeof(char*));
memset(&group_strings_438, 0, sizeof(struct list$1charph*));
memset(&match_string_439, 0, sizeof(char*));
memset(&block_result_440, 0, sizeof(char*));
memset(&str_441, 0, sizeof(char*));
memset(&str_442, 0, sizeof(char*));
memset(&group_strings_443, 0, sizeof(struct list$1charph*));
memset(&i_444, 0, sizeof(int));
memset(&match_string_445, 0, sizeof(char*));
memset(&match_string_446, 0, sizeof(char*));
memset(&block_result_447, 0, sizeof(char*));
memset(&str_448, 0, sizeof(char*));
memset(&str_449, 0, sizeof(char*));
    # 1884 "libcomelang2-str-gc.c"
    offset_421=0;
    # 1886 "libcomelang2-str-gc.c"
    ovec_max_422=16;
    # 1887 "libcomelang2-str-gc.c"
    int start_423[ovec_max_422];
    memset(&start_423, 0, sizeof(int)    *(ovec_max_422)    );
    # 1888 "libcomelang2-str-gc.c"
    int end_424[ovec_max_422];
    memset(&end_424, 0, sizeof(int)    *(ovec_max_422)    );
    # 1889 "libcomelang2-str-gc.c"
    int ovec_value_425[ovec_max_422*3];
    memset(&ovec_value_425, 0, sizeof(int)    *(ovec_max_422*3)    );
    # 1891 "libcomelang2-str-gc.c"
    # 1892 "libcomelang2-str-gc.c"
    # 1894 "libcomelang2-str-gc.c"
    options_428=reg->options;
    # 1895 "libcomelang2-str-gc.c"
    str_429=reg->str;
    # 1897 "libcomelang2-str-gc.c"
    re_430=reg->re;
    # 1899 "libcomelang2-str-gc.c"
    result_431=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1899, "buffer"));
    # 1987 "libcomelang2-str-gc.c"
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        # 1902 "libcomelang2-str-gc.c"
        options_432=2097152;
        # 1903 "libcomelang2-str-gc.c"
        len_433=strlen(self);
        # 1904 "libcomelang2-str-gc.c"
        regex_result_434=pcre_exec(re_430,(struct pcre_extra*)0,self,len_433,offset_421,options_432,ovec_value_425,ovec_max_422*3);
        # 1909 "libcomelang2-str-gc.c"
        for(        i_435=0;        i_435<ovec_max_422;        i_435++        ){
            # 1907 "libcomelang2-str-gc.c"
            start_423[i_435]=ovec_value_425[i_435*2];
        }
        # 1914 "libcomelang2-str-gc.c"
        for(        i_436=0;        i_436<ovec_max_422;        i_436++        ){
            # 1910 "libcomelang2-str-gc.c"
            end_424[i_436]=ovec_value_425[i_436*2+1];
        }
        # 1986 "libcomelang2-str-gc.c"
        # 1914 "libcomelang2-str-gc.c"
        if(_if_conditional133=regex_result_434==1,        _if_conditional133) {
            # 1915 "libcomelang2-str-gc.c"
            str_437=charp_substring(self,offset_421,start_423[0]);
            # 1917 "libcomelang2-str-gc.c"
            buffer_append_str(result_431,str_437);
            # 1919 "libcomelang2-str-gc.c"
            group_strings_438=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1919, "list$1charph"));
            # 1921 "libcomelang2-str-gc.c"
            match_string_439=charp_substring(self,start_423[0],end_424[0]);
            # 1923 "libcomelang2-str-gc.c"
            list$1charph_push_back(group_strings_438,charp_substring(self,start_423[0],end_424[0]));
            # 1925 "libcomelang2-str-gc.c"
            block_result_440=block(parent,match_string_439,group_strings_438);
            # 1931 "libcomelang2-str-gc.c"
            # 1927 "libcomelang2-str-gc.c"
            if(_if_conditional134=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional134) {
                # 1928 "libcomelang2-str-gc.c"
                __result179__ = __result_obj__ = buffer_to_string(result_431);
                return __result179__;
            }
            # 1931 "libcomelang2-str-gc.c"
            buffer_append_str(result_431,block_result_440);
            # 1940 "libcomelang2-str-gc.c"
            # 1933 "libcomelang2-str-gc.c"
            if(_if_conditional135=offset_421==end_424[0],            _if_conditional135) {
                # 1934 "libcomelang2-str-gc.c"
                offset_421++;
            }
            else {
                # 1937 "libcomelang2-str-gc.c"
                offset_421=end_424[0];
            }
            # 1945 "libcomelang2-str-gc.c"
            # 1940 "libcomelang2-str-gc.c"
            if(_if_conditional136=!reg->global,            _if_conditional136) {
                # 1941 "libcomelang2-str-gc.c"
                str_441=charp_substring(self,offset_421,-1);
                # 1942 "libcomelang2-str-gc.c"
                buffer_append_str(result_431,str_441);
                # 1943 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 1986 "libcomelang2-str-gc.c"
            # 1947 "libcomelang2-str-gc.c"
            if(_if_conditional137=regex_result_434>1,            _if_conditional137) {
                # 1948 "libcomelang2-str-gc.c"
                str_442=charp_substring(self,offset_421,start_423[0]);
                # 1949 "libcomelang2-str-gc.c"
                buffer_append_str(result_431,str_442);
                # 1958 "libcomelang2-str-gc.c"
                # 1951 "libcomelang2-str-gc.c"
                if(_if_conditional138=offset_421==end_424[0],                _if_conditional138) {
                    # 1952 "libcomelang2-str-gc.c"
                    offset_421++;
                }
                else {
                    # 1955 "libcomelang2-str-gc.c"
                    offset_421=end_424[0];
                }
                # 1958 "libcomelang2-str-gc.c"
                group_strings_443=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1958, "list$1charph"));
                # 1965 "libcomelang2-str-gc.c"
                for(                i_444=1;                i_444<regex_result_434;                i_444++                ){
                    # 1961 "libcomelang2-str-gc.c"
                    match_string_445=charp_substring(self,start_423[i_444],end_424[i_444]);
                    # 1962 "libcomelang2-str-gc.c"
                    list$1charph_push_back(group_strings_443,match_string_445);
                }
                # 1965 "libcomelang2-str-gc.c"
                match_string_446=charp_substring(self,start_423[0],end_424[0]);
                # 1967 "libcomelang2-str-gc.c"
                block_result_447=block(parent,match_string_446,group_strings_443);
                # 1972 "libcomelang2-str-gc.c"
                # 1969 "libcomelang2-str-gc.c"
                if(_if_conditional139=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional139) {
                    # 1970 "libcomelang2-str-gc.c"
                    __result180__ = __result_obj__ = buffer_to_string(result_431);
                    return __result180__;
                }
                # 1972 "libcomelang2-str-gc.c"
                buffer_append_str(result_431,block_result_447);
                # 1979 "libcomelang2-str-gc.c"
                # 1974 "libcomelang2-str-gc.c"
                if(_if_conditional140=!reg->global,                _if_conditional140) {
                    # 1975 "libcomelang2-str-gc.c"
                    str_448=charp_substring(self,offset_421,-1);
                    # 1976 "libcomelang2-str-gc.c"
                    buffer_append_str(result_431,str_448);
                    # 1977 "libcomelang2-str-gc.c"
                    break;
                }
            }
            else {
                # 1982 "libcomelang2-str-gc.c"
                str_449=charp_substring(self,offset_421,-1);
                # 1983 "libcomelang2-str-gc.c"
                buffer_append_str(result_431,str_449);
                # 1984 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 1987 "libcomelang2-str-gc.c"
    __result181__ = __result_obj__ = buffer_to_string(result_431);
    return __result181__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_450;
int ovec_max_451;
const char* err_455;
int erro_ofs_456;
int options_457;
char* str_458;
struct real_pcre8_or_16* re_459;
struct buffer* result_460;
int n_461;
_Bool _while_condtional23;
int options_462;
int len_463;
int regex_result_464;
int i_465;
int i_466;
_Bool _if_conditional141;
char* str_467;
struct list$1charph* group_strings_468;
char* match_string_469;
char* block_result_470;
_Bool _if_conditional142;
char* __result182__;
_Bool _if_conditional143;
_Bool _if_conditional144;
char* str_471;
_Bool _if_conditional145;
char* str_472;
_Bool _if_conditional146;
char* str_473;
_Bool _if_conditional147;
struct list$1charph* group_strings_474;
int i_475;
char* match_string_476;
char* match_string_477;
char* block_result_478;
_Bool _if_conditional148;
char* __result183__;
_Bool _if_conditional149;
char* str_479;
_Bool _if_conditional150;
char* str_480;
char* str_481;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_450, 0, sizeof(int));
memset(&ovec_max_451, 0, sizeof(int));
memset(&erro_ofs_456, 0, sizeof(int));
memset(&options_457, 0, sizeof(int));
memset(&str_458, 0, sizeof(char*));
memset(&re_459, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_460, 0, sizeof(struct buffer*));
memset(&n_461, 0, sizeof(int));
memset(&options_462, 0, sizeof(int));
memset(&len_463, 0, sizeof(int));
memset(&regex_result_464, 0, sizeof(int));
memset(&i_465, 0, sizeof(int));
memset(&i_466, 0, sizeof(int));
memset(&str_467, 0, sizeof(char*));
memset(&group_strings_468, 0, sizeof(struct list$1charph*));
memset(&match_string_469, 0, sizeof(char*));
memset(&block_result_470, 0, sizeof(char*));
memset(&str_471, 0, sizeof(char*));
memset(&str_472, 0, sizeof(char*));
memset(&str_473, 0, sizeof(char*));
memset(&group_strings_474, 0, sizeof(struct list$1charph*));
memset(&i_475, 0, sizeof(int));
memset(&match_string_476, 0, sizeof(char*));
memset(&match_string_477, 0, sizeof(char*));
memset(&block_result_478, 0, sizeof(char*));
memset(&str_479, 0, sizeof(char*));
memset(&str_480, 0, sizeof(char*));
memset(&str_481, 0, sizeof(char*));
    # 1992 "libcomelang2-str-gc.c"
    offset_450=0;
    # 1994 "libcomelang2-str-gc.c"
    ovec_max_451=16;
    # 1995 "libcomelang2-str-gc.c"
    int start_452[ovec_max_451];
    memset(&start_452, 0, sizeof(int)    *(ovec_max_451)    );
    # 1996 "libcomelang2-str-gc.c"
    int end_453[ovec_max_451];
    memset(&end_453, 0, sizeof(int)    *(ovec_max_451)    );
    # 1997 "libcomelang2-str-gc.c"
    int ovec_value_454[ovec_max_451*3];
    memset(&ovec_value_454, 0, sizeof(int)    *(ovec_max_451*3)    );
    # 1999 "libcomelang2-str-gc.c"
    # 2000 "libcomelang2-str-gc.c"
    # 2002 "libcomelang2-str-gc.c"
    options_457=reg->options;
    # 2003 "libcomelang2-str-gc.c"
    str_458=reg->str;
    # 2005 "libcomelang2-str-gc.c"
    re_459=reg->re;
    # 2007 "libcomelang2-str-gc.c"
    result_460=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 2007, "buffer"));
    # 2009 "libcomelang2-str-gc.c"
    n_461=0;
    # 2113 "libcomelang2-str-gc.c"
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        # 2012 "libcomelang2-str-gc.c"
        options_462=2097152;
        # 2013 "libcomelang2-str-gc.c"
        len_463=strlen(self);
        # 2014 "libcomelang2-str-gc.c"
        regex_result_464=pcre_exec(re_459,(struct pcre_extra*)0,self,len_463,offset_450,options_462,ovec_value_454,ovec_max_451*3);
        # 2019 "libcomelang2-str-gc.c"
        for(        i_465=0;        i_465<ovec_max_451;        i_465++        ){
            # 2017 "libcomelang2-str-gc.c"
            start_452[i_465]=ovec_value_454[i_465*2];
        }
        # 2024 "libcomelang2-str-gc.c"
        for(        i_466=0;        i_466<ovec_max_451;        i_466++        ){
            # 2020 "libcomelang2-str-gc.c"
            end_453[i_466]=ovec_value_454[i_466*2+1];
        }
        # 2111 "libcomelang2-str-gc.c"
        # 2024 "libcomelang2-str-gc.c"
        if(_if_conditional141=regex_result_464==1,        _if_conditional141) {
            # 2025 "libcomelang2-str-gc.c"
            n_461++;
            # 2026 "libcomelang2-str-gc.c"
            str_467=charp_substring(self,offset_450,start_452[0]);
            # 2028 "libcomelang2-str-gc.c"
            buffer_append_str(result_460,str_467);
            # 2030 "libcomelang2-str-gc.c"
            group_strings_468=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 2030, "list$1charph"));
            # 2032 "libcomelang2-str-gc.c"
            list$1charph_push_back(group_strings_468,charp_substring(self,start_452[0],end_453[0]));
            # 2034 "libcomelang2-str-gc.c"
            match_string_469=charp_substring(self,start_452[0],end_453[0]);
            # 2036 "libcomelang2-str-gc.c"
            block_result_470=block(parent,match_string_469,group_strings_468);
            # 2042 "libcomelang2-str-gc.c"
            # 2038 "libcomelang2-str-gc.c"
            if(_if_conditional142=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional142) {
                # 2039 "libcomelang2-str-gc.c"
                __result182__ = __result_obj__ = buffer_to_string(result_460);
                return __result182__;
            }
            # 2042 "libcomelang2-str-gc.c"
            buffer_append_str(result_460,block_result_470);
            # 2051 "libcomelang2-str-gc.c"
            # 2044 "libcomelang2-str-gc.c"
            if(_if_conditional143=offset_450==end_453[0],            _if_conditional143) {
                # 2045 "libcomelang2-str-gc.c"
                offset_450++;
            }
            else {
                # 2048 "libcomelang2-str-gc.c"
                offset_450=end_453[0];
            }
            # 2057 "libcomelang2-str-gc.c"
            # 2051 "libcomelang2-str-gc.c"
            if(_if_conditional144=!reg->global,            _if_conditional144) {
                # 2052 "libcomelang2-str-gc.c"
                str_471=charp_substring(self,offset_450,-1);
                # 2053 "libcomelang2-str-gc.c"
                buffer_append_str(result_460,str_471);
                # 2054 "libcomelang2-str-gc.c"
                break;
            }
            # 2062 "libcomelang2-str-gc.c"
            # 2057 "libcomelang2-str-gc.c"
            if(_if_conditional145=n_461==count,            _if_conditional145) {
                # 2058 "libcomelang2-str-gc.c"
                str_472=charp_substring(self,offset_450,-1);
                # 2059 "libcomelang2-str-gc.c"
                buffer_append_str(result_460,str_472);
                # 2060 "libcomelang2-str-gc.c"
                break;
            }
        }
        else {
            # 2111 "libcomelang2-str-gc.c"
            # 2064 "libcomelang2-str-gc.c"
            if(_if_conditional146=regex_result_464>1,            _if_conditional146) {
                # 2065 "libcomelang2-str-gc.c"
                n_461++;
                # 2067 "libcomelang2-str-gc.c"
                str_473=charp_substring(self,offset_450,start_452[0]);
                # 2068 "libcomelang2-str-gc.c"
                buffer_append_str(result_460,str_473);
                # 2077 "libcomelang2-str-gc.c"
                # 2070 "libcomelang2-str-gc.c"
                if(_if_conditional147=offset_450==end_453[0],                _if_conditional147) {
                    # 2071 "libcomelang2-str-gc.c"
                    offset_450++;
                }
                else {
                    # 2074 "libcomelang2-str-gc.c"
                    offset_450=end_453[0];
                }
                # 2077 "libcomelang2-str-gc.c"
                group_strings_474=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 2077, "list$1charph"));
                # 2084 "libcomelang2-str-gc.c"
                for(                i_475=1;                i_475<regex_result_464;                i_475++                ){
                    # 2080 "libcomelang2-str-gc.c"
                    match_string_476=charp_substring(self,start_452[i_475],end_453[i_475]);
                    # 2081 "libcomelang2-str-gc.c"
                    list$1charph_push_back(group_strings_474,match_string_476);
                }
                # 2084 "libcomelang2-str-gc.c"
                match_string_477=charp_substring(self,start_452[0],end_453[0]);
                # 2086 "libcomelang2-str-gc.c"
                block_result_478=block(parent,match_string_477,group_strings_474);
                # 2091 "libcomelang2-str-gc.c"
                # 2088 "libcomelang2-str-gc.c"
                if(_if_conditional148=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional148) {
                    # 2089 "libcomelang2-str-gc.c"
                    __result183__ = __result_obj__ = buffer_to_string(result_460);
                    return __result183__;
                }
                # 2091 "libcomelang2-str-gc.c"
                buffer_append_str(result_460,block_result_478);
                # 2099 "libcomelang2-str-gc.c"
                # 2093 "libcomelang2-str-gc.c"
                if(_if_conditional149=!reg->global,                _if_conditional149) {
                    # 2094 "libcomelang2-str-gc.c"
                    str_479=charp_substring(self,offset_450,-1);
                    # 2095 "libcomelang2-str-gc.c"
                    buffer_append_str(result_460,str_479);
                    # 2096 "libcomelang2-str-gc.c"
                    break;
                }
                # 2104 "libcomelang2-str-gc.c"
                # 2099 "libcomelang2-str-gc.c"
                if(_if_conditional150=n_461==count,                _if_conditional150) {
                    # 2100 "libcomelang2-str-gc.c"
                    str_480=charp_substring(self,offset_450,-1);
                    # 2101 "libcomelang2-str-gc.c"
                    buffer_append_str(result_460,str_480);
                    # 2102 "libcomelang2-str-gc.c"
                    break;
                }
            }
            else {
                # 2107 "libcomelang2-str-gc.c"
                str_481=charp_substring(self,offset_450,-1);
                # 2108 "libcomelang2-str-gc.c"
                buffer_append_str(result_460,str_481);
                # 2109 "libcomelang2-str-gc.c"
                break;
            }
        }
    }
    # 2113 "libcomelang2-str-gc.c"
    __result184__ = __result_obj__ = buffer_to_string(result_460);
    return __result184__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
int result_482;
unsigned int* p_483;
_Bool _while_condtional24;
unsigned int __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_482, 0, sizeof(int));
memset(&p_483, 0, sizeof(unsigned int*));
    # 2118 "libcomelang2-str-gc.c"
    # 2120 "libcomelang2-str-gc.c"
    result_482=0;
    # 2121 "libcomelang2-str-gc.c"
    p_483=value;
    # 2126 "libcomelang2-str-gc.c"
    while(_while_condtional24=*p_483,    _while_condtional24) {
        # 2123 "libcomelang2-str-gc.c"
        result_482+=(*p_483);
        # 2124 "libcomelang2-str-gc.c"
        p_483++;
    }
    # 2126 "libcomelang2-str-gc.c"
    __result185__ = result_482;
    return __result185__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2137 "libcomelang2-str-gc.c"
    __result187__ = wcscmp(left,right)==0;
    return __result187__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2147 "libcomelang2-str-gc.c"
    __result189__ = left==right;
    return __result189__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2152 "libcomelang2-str-gc.c"
    __result190__ = left!=right;
    return __result190__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
unsigned int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2157 "libcomelang2-str-gc.c"
    __result191__ = value;
    return __result191__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2162 "libcomelang2-str-gc.c"
    __result192__ = left==right;
    return __result192__;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2167 "libcomelang2-str-gc.c"
    __result193__ = __result_obj__ = xsprintf("%ls",wc);
    return __result193__;
}

char* string_chomp(char* str){
void* __result_obj__;
char* result_484;
_Bool _if_conditional151;
char* __result194__;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_484, 0, sizeof(char*));
    # 2172 "libcomelang2-str-gc.c"
    result_484=__builtin_string(str);
    # 2178 "libcomelang2-str-gc.c"
    # 2174 "libcomelang2-str-gc.c"
    if(_if_conditional151=result_484[string_length(result_484)-1]==10,    _if_conditional151) {
        # 2175 "libcomelang2-str-gc.c"
        __result194__ = __result_obj__ = string_substring(result_484,0,-2);
        return __result194__;
    }
    # 2178 "libcomelang2-str-gc.c"
    __result195__ = __result_obj__ = result_484;
    return __result195__;
}

