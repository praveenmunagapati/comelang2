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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX675, int anonymous_var_nameX676, const char** anonymous_var_nameX677, int* anonymous_var_nameX678, const unsigned char* anonymous_var_nameX679);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX680, int anonymous_var_nameX681, const char** anonymous_var_nameX682, int* anonymous_var_nameX683, const unsigned char* anonymous_var_nameX684);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX685, int anonymous_var_nameX686, const char** anonymous_var_nameX687, int* anonymous_var_nameX688, const unsigned char* anonymous_var_nameX689);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX690, int anonymous_var_nameX691, int* anonymous_var_nameX692, const char** anonymous_var_nameX693, int* anonymous_var_nameX694, const unsigned char* anonymous_var_nameX695);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX696, int anonymous_var_nameX697, int* anonymous_var_nameX698, const char** anonymous_var_nameX699, int* anonymous_var_nameX700, const unsigned char* anonymous_var_nameX701);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX702, int anonymous_var_nameX703, int* anonymous_var_nameX704, const char** anonymous_var_nameX705, int* anonymous_var_nameX706, const unsigned char* anonymous_var_nameX707);

int pcre_config(int anonymous_var_nameX708, void* anonymous_var_nameX709);

int pcre16_config(int anonymous_var_nameX710, void* anonymous_var_nameX711);

int pcre32_config(int anonymous_var_nameX712, void* anonymous_var_nameX713);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX714, const char* anonymous_var_nameX715, int* anonymous_var_nameX716, int anonymous_var_nameX717, const char* anonymous_var_nameX718, char* anonymous_var_nameX719, int anonymous_var_nameX720);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX721, const unsigned short int* anonymous_var_nameX722, int* anonymous_var_nameX723, int anonymous_var_nameX724, const unsigned short int* anonymous_var_nameX725, unsigned short int* anonymous_var_nameX726, int anonymous_var_nameX727);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX728, const unsigned int* anonymous_var_nameX729, int* anonymous_var_nameX730, int anonymous_var_nameX731, const unsigned int* anonymous_var_nameX732, unsigned int* anonymous_var_nameX733, int anonymous_var_nameX734);

int pcre_copy_substring(const char* anonymous_var_nameX735, int* anonymous_var_nameX736, int anonymous_var_nameX737, int anonymous_var_nameX738, char* anonymous_var_nameX739, int anonymous_var_nameX740);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX741, int* anonymous_var_nameX742, int anonymous_var_nameX743, int anonymous_var_nameX744, unsigned short int* anonymous_var_nameX745, int anonymous_var_nameX746);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX747, int* anonymous_var_nameX748, int anonymous_var_nameX749, int anonymous_var_nameX750, unsigned int* anonymous_var_nameX751, int anonymous_var_nameX752);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX753, const struct pcre_extra* anonymous_var_nameX754, const char* anonymous_var_nameX755, int anonymous_var_nameX756, int anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, int anonymous_var_nameX760, int* anonymous_var_nameX761, int anonymous_var_nameX762);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX763, const struct pcre16_extra* anonymous_var_nameX764, const unsigned short int* anonymous_var_nameX765, int anonymous_var_nameX766, int anonymous_var_nameX767, int anonymous_var_nameX768, int* anonymous_var_nameX769, int anonymous_var_nameX770, int* anonymous_var_nameX771, int anonymous_var_nameX772);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX773, const struct pcre32_extra* anonymous_var_nameX774, const unsigned int* anonymous_var_nameX775, int anonymous_var_nameX776, int anonymous_var_nameX777, int anonymous_var_nameX778, int* anonymous_var_nameX779, int anonymous_var_nameX780, int* anonymous_var_nameX781, int anonymous_var_nameX782);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX783, const struct pcre_extra* anonymous_var_nameX784, const char* anonymous_var_nameX785, int anonymous_var_nameX786, int anonymous_var_nameX787, int anonymous_var_nameX788, int* anonymous_var_nameX789, int anonymous_var_nameX790);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX791, const struct pcre16_extra* anonymous_var_nameX792, const unsigned short int* anonymous_var_nameX793, int anonymous_var_nameX794, int anonymous_var_nameX795, int anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX799, const struct pcre32_extra* anonymous_var_nameX800, const unsigned int* anonymous_var_nameX801, int anonymous_var_nameX802, int anonymous_var_nameX803, int anonymous_var_nameX804, int* anonymous_var_nameX805, int anonymous_var_nameX806);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX807, const struct pcre_extra* anonymous_var_nameX808, const char* anonymous_var_nameX809, int anonymous_var_nameX810, int anonymous_var_nameX811, int anonymous_var_nameX812, int* anonymous_var_nameX813, int anonymous_var_nameX814, struct real_pcre_jit_stack* anonymous_var_nameX815);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX816, const struct pcre16_extra* anonymous_var_nameX817, const unsigned short int* anonymous_var_nameX818, int anonymous_var_nameX819, int anonymous_var_nameX820, int anonymous_var_nameX821, int* anonymous_var_nameX822, int anonymous_var_nameX823, struct real_pcre16_jit_stack* anonymous_var_nameX824);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX825, const struct pcre32_extra* anonymous_var_nameX826, const unsigned int* anonymous_var_nameX827, int anonymous_var_nameX828, int anonymous_var_nameX829, int anonymous_var_nameX830, int* anonymous_var_nameX831, int anonymous_var_nameX832, struct real_pcre32_jit_stack* anonymous_var_nameX833);

void pcre_free_substring(const char* anonymous_var_nameX834);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX835);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX836);

void pcre_free_substring_list(const char** anonymous_var_nameX837);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX838);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX839);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX840, const struct pcre_extra* anonymous_var_nameX841, int anonymous_var_nameX842, void* anonymous_var_nameX843);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX844, const struct pcre16_extra* anonymous_var_nameX845, int anonymous_var_nameX846, void* anonymous_var_nameX847);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX848, const struct pcre32_extra* anonymous_var_nameX849, int anonymous_var_nameX850, void* anonymous_var_nameX851);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX852, const char* anonymous_var_nameX853, int* anonymous_var_nameX854, int anonymous_var_nameX855, const char* anonymous_var_nameX856, const char** anonymous_var_nameX857);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX858, const unsigned short int* anonymous_var_nameX859, int* anonymous_var_nameX860, int anonymous_var_nameX861, const unsigned short int* anonymous_var_nameX862, const unsigned short int** anonymous_var_nameX863);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX864, const unsigned int* anonymous_var_nameX865, int* anonymous_var_nameX866, int anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, const unsigned int** anonymous_var_nameX869);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX870, const char* anonymous_var_nameX871);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX872, const unsigned short int* anonymous_var_nameX873);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX874, const unsigned int* anonymous_var_nameX875);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX876, const char* anonymous_var_nameX877, char** anonymous_var_nameX878, char** anonymous_var_nameX879);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX880, const unsigned short int* anonymous_var_nameX881, unsigned short int** anonymous_var_nameX882, unsigned short int** anonymous_var_nameX883);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX884, const unsigned int* anonymous_var_nameX885, unsigned int** anonymous_var_nameX886, unsigned int** anonymous_var_nameX887);

int pcre_get_substring(const char* anonymous_var_nameX888, int* anonymous_var_nameX889, int anonymous_var_nameX890, int anonymous_var_nameX891, const char** anonymous_var_nameX892);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX893, int* anonymous_var_nameX894, int anonymous_var_nameX895, int anonymous_var_nameX896, const unsigned short int** anonymous_var_nameX897);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX898, int* anonymous_var_nameX899, int anonymous_var_nameX900, int anonymous_var_nameX901, const unsigned int** anonymous_var_nameX902);

int pcre_get_substring_list(const char* anonymous_var_nameX903, int* anonymous_var_nameX904, int anonymous_var_nameX905, const char*** anonymous_var_nameX906);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX907, int* anonymous_var_nameX908, int anonymous_var_nameX909, const unsigned short int*** anonymous_var_nameX910);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX911, int* anonymous_var_nameX912, int anonymous_var_nameX913, const unsigned int*** anonymous_var_nameX914);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX915, int anonymous_var_nameX916);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX917, int anonymous_var_nameX918);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX919, int anonymous_var_nameX920);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX921, int anonymous_var_nameX922, const char** anonymous_var_nameX923);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX924, int anonymous_var_nameX925, const char** anonymous_var_nameX926);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX927, int anonymous_var_nameX928, const char** anonymous_var_nameX929);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX930);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX931);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX932);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX933, struct pcre_extra* anonymous_var_nameX934, const unsigned char* anonymous_var_nameX935);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX936, struct pcre16_extra* anonymous_var_nameX937, const unsigned char* anonymous_var_nameX938);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX939, struct pcre32_extra* anonymous_var_nameX940, const unsigned char* anonymous_var_nameX941);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX942, const unsigned short int* anonymous_var_nameX943, int anonymous_var_nameX944, int* anonymous_var_nameX945, int anonymous_var_nameX946);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX947, const unsigned int* anonymous_var_nameX948, int anonymous_var_nameX949, int* anonymous_var_nameX950, int anonymous_var_nameX951);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX952, int anonymous_var_nameX953);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX954, int anonymous_var_nameX955);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX956, int anonymous_var_nameX957);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX958);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX959);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX960);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX961, struct real_pcre_jit_stack* (*anonymous_var_nameX962)(void*), void* anonymous_var_nameX963);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX964, struct real_pcre16_jit_stack* (*anonymous_var_nameX965)(void*), void* anonymous_var_nameX966);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX967, struct real_pcre32_jit_stack* (*anonymous_var_nameX968)(void*), void* anonymous_var_nameX969);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX970, const unsigned int* anonymous_var_nameX971);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX972, const unsigned int* anonymous_var_nameX973, unsigned long int anonymous_var_nameX974);

unsigned int* wcscat(unsigned int* anonymous_var_nameX975, const unsigned int* anonymous_var_nameX976);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX977, const unsigned int* anonymous_var_nameX978, unsigned long int anonymous_var_nameX979);

int wcscmp(const unsigned int* anonymous_var_nameX980, const unsigned int* anonymous_var_nameX981);

int wcsncmp(const unsigned int* anonymous_var_nameX982, const unsigned int* anonymous_var_nameX983, unsigned long int anonymous_var_nameX984);

int wcscoll(const unsigned int* anonymous_var_nameX985, const unsigned int* anonymous_var_nameX986);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX987, const unsigned int* anonymous_var_nameX988, unsigned long int anonymous_var_nameX989);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX990, unsigned int anonymous_var_nameX991);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX992, unsigned int anonymous_var_nameX993);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX994, const unsigned int* anonymous_var_nameX995);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX996, const unsigned int* anonymous_var_nameX997);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX998, const unsigned int* anonymous_var_nameX999);

unsigned int* wcstok(unsigned int* anonymous_var_nameX1000, const unsigned int* anonymous_var_nameX1001, unsigned int** anonymous_var_nameX1002);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX1003);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX1004, const unsigned int* anonymous_var_nameX1005);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX1006, const unsigned int* anonymous_var_nameX1007);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX1008, unsigned int anonymous_var_nameX1009, unsigned long int anonymous_var_nameX1010);

int wmemcmp(const unsigned int* anonymous_var_nameX1011, const unsigned int* anonymous_var_nameX1012, unsigned long int anonymous_var_nameX1013);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, unsigned long int anonymous_var_nameX1016);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX1017, const unsigned int* anonymous_var_nameX1018, unsigned long int anonymous_var_nameX1019);

unsigned int* wmemset(unsigned int* anonymous_var_nameX1020, unsigned int anonymous_var_nameX1021, unsigned long int anonymous_var_nameX1022);

unsigned int btowc(int anonymous_var_nameX1023);

int wctob(unsigned int anonymous_var_nameX1024);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX1025);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX1026, const char* anonymous_var_nameX1027, unsigned long int anonymous_var_nameX1028, struct __mbstate_t* anonymous_var_nameX1029);

unsigned long int wcrtomb(char* anonymous_var_nameX1030, unsigned int anonymous_var_nameX1031, struct __mbstate_t* anonymous_var_nameX1032);

unsigned long int mbrlen(const char* anonymous_var_nameX1033, unsigned long int anonymous_var_nameX1034, struct __mbstate_t* anonymous_var_nameX1035);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX1036, const char** anonymous_var_nameX1037, unsigned long int anonymous_var_nameX1038, struct __mbstate_t* anonymous_var_nameX1039);

unsigned long int wcsrtombs(char* anonymous_var_nameX1040, const unsigned int** anonymous_var_nameX1041, unsigned long int anonymous_var_nameX1042, struct __mbstate_t* anonymous_var_nameX1043);

float wcstof(const unsigned int* anonymous_var_nameX1044, unsigned int** anonymous_var_nameX1045);

double wcstod(const unsigned int* anonymous_var_nameX1046, unsigned int** anonymous_var_nameX1047);

long double wcstold(const unsigned int* anonymous_var_nameX1048, unsigned int** anonymous_var_nameX1049);

long wcstol(const unsigned int* anonymous_var_nameX1050, unsigned int** anonymous_var_nameX1051, int anonymous_var_nameX1052);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX1053, unsigned int** anonymous_var_nameX1054, int anonymous_var_nameX1055);

long long wcstoll(const unsigned int* anonymous_var_nameX1056, unsigned int** anonymous_var_nameX1057, int anonymous_var_nameX1058);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX1059, unsigned int** anonymous_var_nameX1060, int anonymous_var_nameX1061);

int fwide(struct _IO_FILE* anonymous_var_nameX1062, int anonymous_var_nameX1063);

int wprintf(const unsigned int* anonymous_var_nameX1064, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX1065, const unsigned int* anonymous_var_nameX1066, ...);

int swprintf(unsigned int* anonymous_var_nameX1067, unsigned long int anonymous_var_nameX1068, const unsigned int* anonymous_var_nameX1069, ...);

int vwprintf(const unsigned int* anonymous_var_nameX1070, va_list anonymous_var_nameX1071);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1072, const unsigned int* anonymous_var_nameX1073, va_list anonymous_var_nameX1074);

int vswprintf(unsigned int* anonymous_var_nameX1075, unsigned long int anonymous_var_nameX1076, const unsigned int* anonymous_var_nameX1077, va_list anonymous_var_nameX1078);

int wscanf(const unsigned int* anonymous_var_nameX1079, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1080, const unsigned int* anonymous_var_nameX1081, ...);

int swscanf(const unsigned int* anonymous_var_nameX1082, const unsigned int* anonymous_var_nameX1083, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1084, va_list anonymous_var_nameX1085);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1086, const unsigned int* anonymous_var_nameX1087, va_list anonymous_var_nameX1088);

int vswscanf(const unsigned int* anonymous_var_nameX1089, const unsigned int* anonymous_var_nameX1090, va_list anonymous_var_nameX1091);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1092);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1093);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1094, struct _IO_FILE* anonymous_var_nameX1095);

unsigned int putwc(unsigned int anonymous_var_nameX1096, struct _IO_FILE* anonymous_var_nameX1097);

unsigned int putwchar(unsigned int anonymous_var_nameX1098);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1099, int anonymous_var_nameX1100, struct _IO_FILE* anonymous_var_nameX1101);

int fputws(const unsigned int* anonymous_var_nameX1102, struct _IO_FILE* anonymous_var_nameX1103);

unsigned int ungetwc(unsigned int anonymous_var_nameX1104, struct _IO_FILE* anonymous_var_nameX1105);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1106, unsigned long int anonymous_var_nameX1107, const unsigned int* anonymous_var_nameX1108, const struct tm* anonymous_var_nameX1109);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1110);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1111);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1112, struct _IO_FILE* anonymous_var_nameX1113);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1114, struct _IO_FILE* anonymous_var_nameX1115);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1116);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1117, int anonymous_var_nameX1118, struct _IO_FILE* anonymous_var_nameX1119);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1120, struct _IO_FILE* anonymous_var_nameX1121);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1122, unsigned long int anonymous_var_nameX1123, const unsigned int* anonymous_var_nameX1124, const struct tm* anonymous_var_nameX1125, struct __locale_struct* anonymous_var_nameX1126);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1127, unsigned long int* anonymous_var_nameX1128);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1129, const char** anonymous_var_nameX1130, unsigned long int anonymous_var_nameX1131, unsigned long int anonymous_var_nameX1132, struct __mbstate_t* anonymous_var_nameX1133);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1134, const unsigned int** anonymous_var_nameX1135, unsigned long int anonymous_var_nameX1136, unsigned long int anonymous_var_nameX1137, struct __mbstate_t* anonymous_var_nameX1138);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1139);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1140, unsigned long int anonymous_var_nameX1141);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1142, const unsigned int* anonymous_var_nameX1143);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1144, const unsigned int* anonymous_var_nameX1145, unsigned long int anonymous_var_nameX1146);

int wcscasecmp(const unsigned int* anonymous_var_nameX1147, const unsigned int* anonymous_var_nameX1148);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1149, const unsigned int* anonymous_var_nameX1150, struct __locale_struct* anonymous_var_nameX1151);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1152, const unsigned int* anonymous_var_nameX1153, unsigned long int anonymous_var_nameX1154);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1155, const unsigned int* anonymous_var_nameX1156, unsigned long int anonymous_var_nameX1157, struct __locale_struct* anonymous_var_nameX1158);

int wcscoll_l(const unsigned int* anonymous_var_nameX1159, const unsigned int* anonymous_var_nameX1160, struct __locale_struct* anonymous_var_nameX1161);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1162, const unsigned int* anonymous_var_nameX1163, unsigned long int anonymous_var_nameX1164, struct __locale_struct* anonymous_var_nameX1165);

int wcwidth(unsigned int anonymous_var_nameX1166);

int wcswidth(const unsigned int* anonymous_var_nameX1167, unsigned long int anonymous_var_nameX1168);

int iswalnum(unsigned int anonymous_var_nameX1169);

int iswalpha(unsigned int anonymous_var_nameX1170);

int iswblank(unsigned int anonymous_var_nameX1171);

int iswcntrl(unsigned int anonymous_var_nameX1172);

int iswdigit(unsigned int anonymous_var_nameX1173);

int iswgraph(unsigned int anonymous_var_nameX1174);

int iswlower(unsigned int anonymous_var_nameX1175);

int iswprint(unsigned int anonymous_var_nameX1176);

int iswpunct(unsigned int anonymous_var_nameX1177);

int iswspace(unsigned int anonymous_var_nameX1178);

int iswupper(unsigned int anonymous_var_nameX1179);

int iswxdigit(unsigned int anonymous_var_nameX1180);

int iswctype(unsigned int anonymous_var_nameX1181, unsigned long int anonymous_var_nameX1182);

unsigned int towlower(unsigned int anonymous_var_nameX1183);

unsigned int towupper(unsigned int anonymous_var_nameX1184);

unsigned long int wctype(const char* anonymous_var_nameX1185);

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1199)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1201)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1203)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1204);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1205);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1206);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1207);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1208)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1209);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1210);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1211);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1212);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1213);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1214);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1215);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1216);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1217);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1218);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1219);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1220);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1221);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1222);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1223);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1224);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1225);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1226);

char* GC_strdup(const char* anonymous_var_nameX1227);

char* GC_strndup(const char* anonymous_var_nameX1228, unsigned long int anonymous_var_nameX1229);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1230);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1231);

void* GC_memalign(unsigned long int anonymous_var_nameX1232, unsigned long int anonymous_var_nameX1233);

int GC_posix_memalign(void** anonymous_var_nameX1234, unsigned long int anonymous_var_nameX1235, unsigned long int anonymous_var_nameX1236);

void GC_free(void* anonymous_var_nameX1237);

void GC_change_stubborn(const void* anonymous_var_nameX1238);

void GC_end_stubborn_change(const void* anonymous_var_nameX1239);

void* GC_base(void* anonymous_var_nameX1240);

int GC_is_heap_ptr(const void* anonymous_var_nameX1241);

unsigned long int GC_size(const void* anonymous_var_nameX1242);

void* GC_realloc(void* anonymous_var_nameX1243, unsigned long int anonymous_var_nameX1244);

int GC_expand_hp(unsigned long int anonymous_var_nameX1245);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1246);

void GC_exclude_static_roots(void* anonymous_var_nameX1247, void* anonymous_var_nameX1248);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1249, void* anonymous_var_nameX1250);

void GC_remove_roots(void* anonymous_var_nameX1251, void* anonymous_var_nameX1252);

void GC_register_displacement(unsigned long int anonymous_var_nameX1253);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1254);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1255)());

void GC_set_stop_func(int (*anonymous_var_nameX1256)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1257, unsigned long int* anonymous_var_nameX1258, unsigned long int* anonymous_var_nameX1259, unsigned long int* anonymous_var_nameX1260, unsigned long int* anonymous_var_nameX1261);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1262, unsigned long int anonymous_var_nameX1263);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1264);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1265);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1266);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1267);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1268, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1269, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1270, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1271, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1272, unsigned long int anonymous_var_nameX1273, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1274, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1275, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1276, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1277, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1278);

void* GC_debug_realloc(void* anonymous_var_nameX1279, unsigned long int anonymous_var_nameX1280, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1281);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1282);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1283);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1284, unsigned long int anonymous_var_nameX1285);

void GC_register_finalizer(void* anonymous_var_nameX1288, void (*anonymous_var_nameX1289)(void*,void*), void* anonymous_var_nameX1290, void (*anonymous_var_nameX1291)(void*,void*), void** anonymous_var_nameX1292);

void GC_debug_register_finalizer(void* anonymous_var_nameX1293, void (*anonymous_var_nameX1294)(void*,void*), void* anonymous_var_nameX1295, void (*anonymous_var_nameX1296)(void*,void*), void** anonymous_var_nameX1297);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1298, void (*anonymous_var_nameX1299)(void*,void*), void* anonymous_var_nameX1300, void (*anonymous_var_nameX1301)(void*,void*), void** anonymous_var_nameX1302);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1303, void (*anonymous_var_nameX1304)(void*,void*), void* anonymous_var_nameX1305, void (*anonymous_var_nameX1306)(void*,void*), void** anonymous_var_nameX1307);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1308, void (*anonymous_var_nameX1309)(void*,void*), void* anonymous_var_nameX1310, void (*anonymous_var_nameX1311)(void*,void*), void** anonymous_var_nameX1312);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1313, void (*anonymous_var_nameX1314)(void*,void*), void* anonymous_var_nameX1315, void (*anonymous_var_nameX1316)(void*,void*), void** anonymous_var_nameX1317);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1318, void (*anonymous_var_nameX1319)(void*,void*), void* anonymous_var_nameX1320, void (*anonymous_var_nameX1321)(void*,void*), void** anonymous_var_nameX1322);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1323, void (*anonymous_var_nameX1324)(void*,void*), void* anonymous_var_nameX1325, void (*anonymous_var_nameX1326)(void*,void*), void** anonymous_var_nameX1327);

int GC_register_disappearing_link(void** anonymous_var_nameX1328);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1329, const void* anonymous_var_nameX1330);

int GC_move_disappearing_link(void** anonymous_var_nameX1331, void** anonymous_var_nameX1332);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1333);

int GC_register_long_link(void** anonymous_var_nameX1334, const void* anonymous_var_nameX1335);

int GC_move_long_link(void** anonymous_var_nameX1336, void** anonymous_var_nameX1337);

int GC_unregister_long_link(void** anonymous_var_nameX1338);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1340)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1341, int anonymous_var_nameX1342);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1344)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1345);

void GC_set_warn_proc(void (*anonymous_var_nameX1348)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1349, unsigned long int anonymous_var_nameX1350);

void GC_set_log_fd(int anonymous_var_nameX1351);

void GC_set_abort_func(void (*anonymous_var_nameX1353)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1355)(void*), void* anonymous_var_nameX1356);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1359)(struct GC_stack_base*,void*), void* anonymous_var_nameX1360);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1361)(void*), void* anonymous_var_nameX1362);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1363)(void*), void* anonymous_var_nameX1364);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1365);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1366);

void GC_set_stackbottom(void* anonymous_var_nameX1367, const struct GC_stack_base* anonymous_var_nameX1368);

void* GC_same_obj(void* anonymous_var_nameX1369, void* anonymous_var_nameX1370);

void* GC_pre_incr(void** anonymous_var_nameX1371, long anonymous_var_nameX1372);

void* GC_post_incr(void** anonymous_var_nameX1373, long anonymous_var_nameX1374);

void* GC_is_visible(void* anonymous_var_nameX1375);

void* GC_is_valid_displacement(void* anonymous_var_nameX1376);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1377);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1378, const void* anonymous_var_nameX1379);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1380, const void* anonymous_var_nameX1381);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1402);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1406)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1407);

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
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(buffer_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer2(buffer_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(buffer_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer2(buffer_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(buffer_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer2(buffer_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(buffer_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer2(buffer_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(buffer_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer2(buffer_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1985, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer2(buffer_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer2(buffer_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2208, "smart_pointer$1char")))),self,sizeof(char)*len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2213, "smart_pointer$1short")))),self,sizeof(short short)*len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2218, "smart_pointer$1int")))),self,sizeof(int)*len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2223, "smart_pointer$1long")))),self,sizeof(long)*len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2228, "smart_pointer$1float")))),self,sizeof(float)*len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2233, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    __result31__ = __result_obj__ = ((char*)(right_value46=xsprintf(msg,self)));
    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result31__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value47;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
    __result32__ = __result_obj__ = ((char*)(right_value47=xsprintf(msg,self)));
    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value48;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value49;
unsigned int* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    __result34__ = __result_obj__ = ((unsigned int*)(right_value49=wchar_tp_substring(str,head,tail)));
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = charp_index_count(str,search_str,count,default_value);
    return __result35__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = charp_index_regex_count(self,reg,count,default_value);
    return __result36__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = charp_rindex(str,search_str,default_value);
    return __result37__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = charp_rindex_regex(self,reg,default_value);
    return __result38__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result39__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value50;
struct list$1charph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result40__ = __result_obj__ = ((struct list$1charph*)(right_value50=charp_scan_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result40__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value51;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
    __result41__ = __result_obj__ = ((struct list$1charph*)(right_value51=charp_scan_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result41__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value52;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
    __result42__ = __result_obj__ = ((struct list$1charph*)(right_value52=charp_split_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value53;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
    __result43__ = __result_obj__ = ((struct list$1charph*)(right_value53=charp_split_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value54;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
    __result44__ = __result_obj__ = ((struct list$1charph*)(right_value54=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    come_call_finalizer2(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result44__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value55;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
    __result45__ = __result_obj__ = ((char*)(right_value55=charp_strip(self)));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result45__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value56;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(right_value56=string_printable(str)));
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value57;
unsigned int* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result47__ = __result_obj__ = ((unsigned int*)(right_value57=charp_to_wstring(str)));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result47__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
void* right_value58;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
    __result48__ = __result_obj__ = ((char*)(right_value58=wchar_tp_to_string(wstr)));
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
void* right_value59;
void* right_value60;
unsigned int* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
right_value60 = (void*)0;
    __result49__ = __result_obj__ = ((unsigned int*)(right_value60=string_to_wstring(((char*)(right_value59=xsprintf("%d",self))))));
    right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = wchar_tp_length(str);
    return __result50__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value61;
unsigned int* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
    __result51__ = __result_obj__ = ((unsigned int*)(right_value61=wchar_tp_delete(str,head,tail)));
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = wchar_tp_index(str,search_str,default_value);
    return __result52__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = wchar_tp_rindex(str,search_str,default_value);
    return __result53__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
void* right_value62;
unsigned int* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
    __result54__ = __result_obj__ = ((unsigned int*)(right_value62=wchar_tp_reverse(str)));
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
void* right_value63;
unsigned int* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
    __result55__ = __result_obj__ = ((unsigned int*)(right_value63=wchar_tp_multiply(str,n)));
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
void* right_value64;
unsigned int* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
    __result56__ = __result_obj__ = ((unsigned int*)(right_value64=wchar_tp_printable(str)));
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
void* __result_obj__;
unsigned int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = wchar_tp_get_hash_key(value);
    return __result57__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result58__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = charp_index(str,search_str,default_value);
    return __result59__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    __result60__ = charp_index_regex(self,reg,default_value);
    return __result60__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
void* right_value65;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
    __result61__ = __result_obj__ = ((char*)(right_value65=charp_replace(self,index,c)));
    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result61__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value66;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
    __result62__ = __result_obj__ = ((char*)(right_value66=charp_multiply(str,n)));
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value67;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
    __result63__ = __result_obj__ = ((char*)(right_value67=charp_sub(self,reg,replace)));
    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value68;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value68=charp_sub_count(self,reg,replace,count)));
    right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value69;
struct list$1charph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
    __result65__ = __result_obj__ = ((struct list$1charph*)(right_value69=charp_split_str(self,str)));
    come_call_finalizer2(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result65__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value70;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
    __result66__ = __result_obj__ = ((struct list$1charph*)(right_value70=charp_scan(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result66__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value71;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
    __result67__ = __result_obj__ = ((struct list$1charph*)(right_value71=charp_split(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result67__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = charp_match(self,reg);
    return __result68__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
void* right_value72;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
    __result69__ = __result_obj__ = ((struct list$1charph*)(right_value72=charp_split_maxsplit(self,reg,maxsplit)));
    come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result69__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result70__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = charp_match_count(self,reg,count);
    return __result71__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value73;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
    __result72__ = __result_obj__ = ((char*)(right_value73=charp_sub_block(self,reg,parent,block)));
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value74;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
    __result73__ = __result_obj__ = ((char*)(right_value74=charp_sub_block_count(self,reg,count,parent,block)));
    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value76;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value76=string_chomp(str)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
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


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

















static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_11;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
        it_11=self->head;
        while(_while_condtional1=it_11!=((void*)0),        _while_condtional1) {
            prev_it_12=it_11;
            it_11=it_11->next;
            come_call_finalizer2(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional7=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional7) {
                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_13;
int erro_ofs_14;
int options_15;
void* right_value77;
char* __dec_obj12;
_Bool _if_conditional8;
struct come_regex* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_14, 0, sizeof(int));
memset(&options_15, 0, sizeof(int));
right_value77 = (void*)0;
    options_15=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj12=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string(str))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_15;
    self->re=pcre_compile(str,options_15,&err_13,&erro_ofs_14,((void*)0));
    if(_if_conditional8=self->re==((void*)0),    _if_conditional8) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
    }
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional9=reg&&reg->str,    _if_conditional9) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional10=reg&&reg->re,    _if_conditional10) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value78;
void* right_value79;
struct come_regex* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
right_value79 = (void*)0;
    __result77__ = __result_obj__ = ((struct come_regex*)(right_value79=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value78=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 65, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer2(come_regex_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(come_regex_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result77__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value80;
void* right_value81;
struct come_regex* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
    __result78__ = __result_obj__ = ((struct come_regex*)(right_value81=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value80=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 70, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer2(come_regex_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(come_regex_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result78__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional11;
struct come_regex* __result79__;
void* right_value82;
struct come_regex* result_16;
void* right_value83;
char* __dec_obj13;
const char* err_17;
int erro_ofs_18;
_Bool _if_conditional12;
struct come_regex* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_16, 0, sizeof(struct come_regex*));
right_value83 = (void*)0;
memset(&erro_ofs_18, 0, sizeof(int));
    if(_if_conditional11=reg==((void*)0),    _if_conditional11) {
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    result_16=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value82=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 80, "come_regex"))));
    come_call_finalizer2(come_regex_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=result_16->str;
    result_16->str=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(reg->str))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_16->ignore_case=reg->ignore_case;
    result_16->multiline=reg->multiline;
    result_16->global=reg->global;
    result_16->extended=reg->extended;
    result_16->dotall=reg->dotall;
    result_16->anchored=reg->anchored;
    result_16->dollar_endonly=reg->dollar_endonly;
    result_16->ungreedy=reg->ungreedy;
    result_16->options=reg->options;
    result_16->re=pcre_compile(result_16->str,result_16->options,&err_17,&erro_ofs_18,((void*)0));
    if(_if_conditional12=result_16->re==((void*)0),    _if_conditional12) {
        printf("regex compile error(%s)\n",result_16->str);
        stackframe();
        exit(1);
    }
    __result80__ = __result_obj__ = result_16;
    come_call_finalizer2(come_regex_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(come_regex_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
void* right_value84;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value84=__builtin_string(regex->str)));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

char* string_lower_case(char* str){
void* __result_obj__;
void* right_value85;
char* result_19;
int i_20;
_Bool _if_conditional13;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&result_19, 0, sizeof(char*));
memset(&i_20, 0, sizeof(int));
    result_19=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(str))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_20=0;    i_20<strlen(str);    i_20++    ){
        if(_if_conditional13=str[i_20]>=65&&str[i_20]<=90,        _if_conditional13) {
            result_19[i_20]=str[i_20]-65+97;
        }
    }
    __result82__ = __result_obj__ = result_19;
    result_19 = come_decrement_ref_count2(result_19, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result82__;
    result_19 = come_decrement_ref_count2(result_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_upper_case(char* str){
void* __result_obj__;
void* right_value86;
char* result_21;
int i_22;
_Bool _if_conditional14;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_21, 0, sizeof(char*));
memset(&i_22, 0, sizeof(int));
    result_21=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(str))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_22=0;    i_22<strlen(str);    i_22++    ){
        if(_if_conditional14=str[i_22]>=97&&str[i_22]<=122,        _if_conditional14) {
            result_21[i_22]=str[i_22]-97+65;
        }
    }
    __result83__ = __result_obj__ = result_21;
    result_21 = come_decrement_ref_count2(result_21, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result83__;
    result_21 = come_decrement_ref_count2(result_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value87;
unsigned int* __result84__;
int len_23;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
void* right_value88;
unsigned int* __result85__;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
void* right_value89;
unsigned int* __result86__;
_Bool _if_conditional22;
void* right_value90;
unsigned int* __result87__;
void* right_value91;
unsigned int* result_24;
unsigned int* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&len_23, 0, sizeof(int));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_24, 0, sizeof(unsigned int*));
    if(_if_conditional15=str==((void*)0),    _if_conditional15) {
        __result84__ = __result_obj__ = ((unsigned int*)(right_value87=__builtin_wstring("")));
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result84__;
    }
    len_23=wcslen(str);
    if(_if_conditional16=head<0,    _if_conditional16) {
        head+=len_23;
    }
    if(_if_conditional17=tail<0,    _if_conditional17) {
        tail+=len_23+1;
    }
    if(_if_conditional18=head>tail,    _if_conditional18) {
        __result85__ = __result_obj__ = ((unsigned int*)(right_value88=__builtin_wstring("")));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result85__;
    }
    if(_if_conditional19=head<0,    _if_conditional19) {
        head=0;
    }
    if(_if_conditional20=tail>=len_23,    _if_conditional20) {
        tail=len_23;
    }
    if(_if_conditional21=head==tail,    _if_conditional21) {
        __result86__ = __result_obj__ = ((unsigned int*)(right_value89=__builtin_wstring("")));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result86__;
    }
    if(_if_conditional22=tail-head+1<1,    _if_conditional22) {
        __result87__ = __result_obj__ = ((unsigned int*)(right_value90=__builtin_wstring("")));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result87__;
    }
    result_24=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value91=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str.c", 175, "int"))));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_24,str+head,sizeof(unsigned int)*(tail-head));
    result_24[tail-head]=0;
    __result88__ = __result_obj__ = result_24;
    result_24 = come_decrement_ref_count2(result_24, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result88__;
    result_24 = come_decrement_ref_count2(result_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional23;
unsigned int* __result89__;
int len_25;
void* right_value92;
unsigned int* wstr_26;
int ret_27;
_Bool _if_conditional24;
unsigned int* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_25, 0, sizeof(int));
right_value92 = (void*)0;
memset(&wstr_26, 0, sizeof(unsigned int*));
memset(&ret_27, 0, sizeof(int));
    if(_if_conditional23=str==((void*)0),    _if_conditional23) {
        __result89__ = __result_obj__ = ((void*)0);
        return __result89__;
    }
    len_25=strlen(str);
    wstr_26=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value92=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_25+1)), "libcomelang2-str.c", 190, "int"))));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ret_27=mbstowcs(wstr_26,str,len_25+1);
    wstr_26[ret_27]=0;
    if(_if_conditional24=ret_27<0,    _if_conditional24) {
        wstr_26[0]=0;
    }
    __result90__ = __result_obj__ = wstr_26;
    wstr_26 = come_decrement_ref_count2(wstr_26, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result90__;
    wstr_26 = come_decrement_ref_count2(wstr_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_28;
int len_29;
int i_30;
int len2_31;
int j_32;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_28, 0, sizeof(int));
memset(&len_29, 0, sizeof(int));
memset(&i_30, 0, sizeof(int));
memset(&len2_31, 0, sizeof(int));
memset(&j_32, 0, sizeof(int));
    n_28=0;
    len_29=strlen(str);
    for(    i_30=0;    i_30<len_29;    i_30++    ){
        len2_31=strlen(search_str);
        for(        j_32=0;        j_32<len2_31;        j_32++        ){
            if(_if_conditional25=str[i_30+j_32]!=search_str[j_32],            _if_conditional25) {
                break;
            }
        }
        if(_if_conditional26=j_32==len2_31,        _if_conditional26) {
            n_28++;
            if(_if_conditional27=n_28==count,            _if_conditional27) {
                __result91__ = i_30;
                return __result91__;
            }
        }
    }
    __result92__ = default_value;
    return __result92__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_33;
int result_37;
int offset_38;
const char* err_39;
int erro_ofs_40;
int options_41;
char* str_42;
struct real_pcre8_or_16* re_43;
int n_44;
_Bool _while_condtional2;
int options_45;
int len_46;
int regex_result_47;
int i_48;
int i_49;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_33, 0, sizeof(int));
memset(&result_37, 0, sizeof(int));
memset(&offset_38, 0, sizeof(int));
memset(&erro_ofs_40, 0, sizeof(int));
memset(&options_41, 0, sizeof(int));
memset(&str_42, 0, sizeof(char*));
memset(&re_43, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_44, 0, sizeof(int));
memset(&options_45, 0, sizeof(int));
memset(&len_46, 0, sizeof(int));
memset(&regex_result_47, 0, sizeof(int));
memset(&i_48, 0, sizeof(int));
memset(&i_49, 0, sizeof(int));
    ovec_max_33=16;
    int start_34[ovec_max_33];
    memset(&start_34, 0, sizeof(int)    *(ovec_max_33)    );
    int end_35[ovec_max_33];
    memset(&end_35, 0, sizeof(int)    *(ovec_max_33)    );
    int ovec_value_36[ovec_max_33*3];
    memset(&ovec_value_36, 0, sizeof(int)    *(ovec_max_33*3)    );
    result_37=default_value;
    offset_38=0;
    options_41=reg->options;
    str_42=reg->str;
    re_43=reg->re;
    n_44=0;
    while(_while_condtional2=(_Bool)1,    _while_condtional2) {
        options_45=2097152;
        len_46=strlen(self);
        regex_result_47=pcre_exec(re_43,(struct pcre_extra*)0,self,len_46,offset_38,options_45,ovec_value_36,ovec_max_33*3);
        for(        i_48=0;        i_48<ovec_max_33;        i_48++        ){
            start_34[i_48]=ovec_value_36[i_48*2];
        }
        for(        i_49=0;        i_49<ovec_max_33;        i_49++        ){
            end_35[i_49]=ovec_value_36[i_49*2+1];
        }
        if(_if_conditional28=regex_result_47>0,        _if_conditional28) {
            n_44++;
            if(_if_conditional29=offset_38==end_35[0],            _if_conditional29) {
                offset_38++;
            }
            else {
                offset_38=end_35[0];
            }
            if(_if_conditional30=n_44==count,            _if_conditional30) {
                result_37=start_34[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result93__ = result_37;
    return __result93__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_50;
char* p_51;
_Bool _while_condtional3;
_Bool _if_conditional31;
int __result94__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_50, 0, sizeof(int));
memset(&p_51, 0, sizeof(char*));
    len_50=strlen(search_str);
    p_51=str+strlen(str)-len_50;
    while(_while_condtional3=p_51>=str,    _while_condtional3) {
        if(_if_conditional31=strncmp(p_51,search_str,len_50)==0,        _if_conditional31) {
            __result94__ = p_51-str;
            return __result94__;
        }
        p_51--;
    }
    __result95__ = default_value;
    return __result95__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_52;
int erro_ofs_53;
int options_54;
char* str_55;
struct real_pcre8_or_16* re_56;
void* right_value93;
char* self2_57;
int ovec_max_58;
int result_62;
int offset_63;
_Bool _while_condtional4;
int options_64;
int len_65;
int regex_result_66;
int i_67;
int i_68;
_Bool _if_conditional32;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_53, 0, sizeof(int));
memset(&options_54, 0, sizeof(int));
memset(&str_55, 0, sizeof(char*));
memset(&re_56, 0, sizeof(struct real_pcre8_or_16*));
right_value93 = (void*)0;
memset(&self2_57, 0, sizeof(char*));
memset(&ovec_max_58, 0, sizeof(int));
memset(&result_62, 0, sizeof(int));
memset(&offset_63, 0, sizeof(int));
memset(&options_64, 0, sizeof(int));
memset(&len_65, 0, sizeof(int));
memset(&regex_result_66, 0, sizeof(int));
memset(&i_67, 0, sizeof(int));
memset(&i_68, 0, sizeof(int));
    options_54=reg->options;
    str_55=reg->str;
    re_56=reg->re;
    self2_57=(char*)come_increment_ref_count(((char*)(right_value93=charp_reverse(self))));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_58=16;
    int start_59[ovec_max_58];
    memset(&start_59, 0, sizeof(int)    *(ovec_max_58)    );
    int end_60[ovec_max_58];
    memset(&end_60, 0, sizeof(int)    *(ovec_max_58)    );
    int ovec_value_61[ovec_max_58*3];
    memset(&ovec_value_61, 0, sizeof(int)    *(ovec_max_58*3)    );
    result_62=default_value;
    offset_63=0;
    while(_while_condtional4=(_Bool)1,    _while_condtional4) {
        options_64=2097152;
        len_65=strlen(self2_57);
        regex_result_66=pcre_exec(re_56,(struct pcre_extra*)0,self2_57,len_65,offset_63,options_64,ovec_value_61,ovec_max_58*3);
        for(        i_67=0;        i_67<ovec_max_58;        i_67++        ){
            start_59[i_67]=ovec_value_61[i_67*2];
        }
        for(        i_68=0;        i_68<ovec_max_58;        i_68++        ){
            end_60[i_68]=ovec_value_61[i_68*2+1];
        }
        if(_if_conditional32=regex_result_66==1||regex_result_66>0,        _if_conditional32) {
            result_62=strlen(self)-1-start_59[0];
            break;
        }
        {
            break;
        }
    }
    __result96__ = result_62;
    self2_57 = come_decrement_ref_count2(self2_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result96__;
    self2_57 = come_decrement_ref_count2(self2_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_69;
char* p_70;
int n_71;
_Bool _while_condtional5;
_Bool _if_conditional33;
_Bool _if_conditional34;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_69, 0, sizeof(int));
memset(&p_70, 0, sizeof(char*));
memset(&n_71, 0, sizeof(int));
    len_69=strlen(search_str);
    p_70=str+strlen(str)-len_69;
    n_71=0;
    while(_while_condtional5=p_70>=str,    _while_condtional5) {
        if(_if_conditional33=strncmp(p_70,search_str,len_69)==0,        _if_conditional33) {
            n_71++;
            if(_if_conditional34=n_71==count,            _if_conditional34) {
                __result97__ = p_70-str;
                return __result97__;
            }
        }
        p_70--;
    }
    __result98__ = default_value;
    return __result98__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* result_72;
int offset_73;
int ovec_max_74;
const char* err_78;
int erro_ofs_79;
int options_80;
char* str_81;
struct real_pcre8_or_16* re_82;
_Bool _while_condtional6;
int options_83;
int len_84;
int regex_result_85;
int i_86;
int i_87;
_Bool _if_conditional35;
void* right_value96;
char* str_88;
void* right_value97;
void* right_value98;
struct list$1charph* group_strings_89;
void* right_value99;
char* str2_90;
_Bool _if_conditional36;
struct list$1charph* __result100__;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value103;
char* str_94;
void* right_value104;
void* right_value105;
struct list$1charph* group_strings_95;
int i_96;
void* right_value106;
char* match_string_97;
void* right_value107;
char* str2_98;
_Bool _if_conditional41;
struct list$1charph* __result102__;
_Bool _if_conditional42;
struct list$1charph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1charph*));
memset(&offset_73, 0, sizeof(int));
memset(&ovec_max_74, 0, sizeof(int));
memset(&erro_ofs_79, 0, sizeof(int));
memset(&options_80, 0, sizeof(int));
memset(&str_81, 0, sizeof(char*));
memset(&re_82, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_83, 0, sizeof(int));
memset(&len_84, 0, sizeof(int));
memset(&regex_result_85, 0, sizeof(int));
memset(&i_86, 0, sizeof(int));
memset(&i_87, 0, sizeof(int));
right_value96 = (void*)0;
memset(&str_88, 0, sizeof(char*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&group_strings_89, 0, sizeof(struct list$1charph*));
right_value99 = (void*)0;
memset(&str2_90, 0, sizeof(char*));
right_value103 = (void*)0;
memset(&str_94, 0, sizeof(char*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&group_strings_95, 0, sizeof(struct list$1charph*));
memset(&i_96, 0, sizeof(int));
right_value106 = (void*)0;
memset(&match_string_97, 0, sizeof(char*));
right_value107 = (void*)0;
memset(&str2_98, 0, sizeof(char*));
    result_72=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 376, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_73=0;
    ovec_max_74=16;
    int start_75[ovec_max_74];
    memset(&start_75, 0, sizeof(int)    *(ovec_max_74)    );
    int end_76[ovec_max_74];
    memset(&end_76, 0, sizeof(int)    *(ovec_max_74)    );
    int ovec_value_77[ovec_max_74*3];
    memset(&ovec_value_77, 0, sizeof(int)    *(ovec_max_74*3)    );
    options_80=reg->options;
    str_81=reg->str;
    re_82=reg->re;
    while(_while_condtional6=(_Bool)1,    _while_condtional6) {
        options_83=2097152;
        len_84=strlen(self);
        regex_result_85=pcre_exec(re_82,(struct pcre_extra*)0,self,len_84,offset_73,options_83,ovec_value_77,ovec_max_74*3);
        for(        i_86=0;        i_86<ovec_max_74;        i_86++        ){
            start_75[i_86]=ovec_value_77[i_86*2];
        }
        for(        i_87=0;        i_87<ovec_max_74;        i_87++        ){
            end_76[i_87]=ovec_value_77[i_87*2+1];
        }
        if(_if_conditional35=regex_result_85==1,        _if_conditional35) {
            str_88=(char*)come_increment_ref_count(((char*)(right_value96=charp_substring(self,start_75[0],end_76[0]))));
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_89=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value98=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value97=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 410, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_90=(char*)come_increment_ref_count(((char*)(right_value99=block(parent,str_88,group_strings_89))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional36=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional36) {
                __result100__ = __result_obj__ = result_72;
                str_88 = come_decrement_ref_count2(str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_90 = come_decrement_ref_count2(str2_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result100__;
            }
            list$1charph_push_back(result_72,(char*)come_increment_ref_count(str2_90));
            if(_if_conditional39=offset_73==end_76[0],            _if_conditional39) {
                offset_73++;
            }
            else {
                offset_73=end_76[0];
            }
            str_88 = come_decrement_ref_count2(str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_90 = come_decrement_ref_count2(str2_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional40=regex_result_85>1,            _if_conditional40) {
                str_94=(char*)come_increment_ref_count(((char*)(right_value103=charp_substring(self,start_75[0],end_76[0]))));
                right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_95=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 431, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_96=1;                i_96<regex_result_85;                i_96++                ){
                    match_string_97=(char*)come_increment_ref_count(((char*)(right_value106=charp_substring(self,start_75[i_96],end_76[i_96]))));
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_95,(char*)come_increment_ref_count(match_string_97));
                    match_string_97 = come_decrement_ref_count2(match_string_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_98=(char*)come_increment_ref_count(((char*)(right_value107=block(parent,str_94,group_strings_95))));
                right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional41=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional41) {
                    __result102__ = __result_obj__ = result_72;
                    str_94 = come_decrement_ref_count2(str_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_98 = come_decrement_ref_count2(str2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result102__;
                }
                list$1charph_push_back(result_72,(char*)come_increment_ref_count(str2_98));
                if(_if_conditional42=offset_73==end_76[0],                _if_conditional42) {
                    offset_73++;
                }
                else {
                    offset_73=end_76[0];
                }
                str_94 = come_decrement_ref_count2(str_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_98 = come_decrement_ref_count2(str2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result103__ = __result_obj__ = result_72;
    come_call_finalizer2(list$1charphp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(list$1charphp_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result99__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result99__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional37;
void* right_value100;
struct list_item$1charph* litem_91;
char* __dec_obj14;
_Bool _if_conditional38;
void* right_value101;
struct list_item$1charph* litem_92;
char* __dec_obj15;
void* right_value102;
struct list_item$1charph* litem_93;
char* __dec_obj16;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1charph*));
right_value101 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1charph*));
right_value102 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional37=self->len==0,                _if_conditional37) {
                    litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value100=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_91->prev=((void*)0);
                    litem_91->next=((void*)0);
                    __dec_obj14=litem_91->item;
                    litem_91->item=(char*)come_increment_ref_count(item);
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_91;
                    self->head=litem_91;
                }
                else {
                    if(_if_conditional38=self->len==1,                    _if_conditional38) {
                        litem_92=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value101=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_92->prev=self->head;
                        litem_92->next=((void*)0);
                        __dec_obj15=litem_92->item;
                        litem_92->item=(char*)come_increment_ref_count(item);
                        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_92;
                        self->head->next=litem_92;
                    }
                    else {
                        litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value102=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_93->prev=self->tail;
                        litem_93->next=((void*)0);
                        __dec_obj16=litem_93->item;
                        litem_93->item=(char*)come_increment_ref_count(item);
                        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_93;
                        self->tail=litem_93;
                    }
                }
                self->len++;
                __result101__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result101__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value108;
void* right_value109;
struct list$1charph* result_99;
int offset_100;
int ovec_max_101;
const char* err_105;
int erro_ofs_106;
int options_107;
char* str_108;
struct real_pcre8_or_16* re_109;
int n_110;
_Bool _while_condtional7;
int options_111;
int len_112;
int regex_result_113;
int i_114;
int i_115;
_Bool _if_conditional43;
void* right_value110;
char* str_116;
void* right_value111;
void* right_value112;
struct list$1charph* group_strings_117;
void* right_value113;
char* str2_118;
_Bool _if_conditional44;
struct list$1charph* __result104__;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value114;
char* str_119;
void* right_value115;
void* right_value116;
struct list$1charph* group_strings_120;
int i_121;
void* right_value117;
char* match_string_122;
void* right_value118;
char* str2_123;
_Bool _if_conditional48;
struct list$1charph* __result105__;
_Bool _if_conditional49;
_Bool _if_conditional50;
struct list$1charph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_99, 0, sizeof(struct list$1charph*));
memset(&offset_100, 0, sizeof(int));
memset(&ovec_max_101, 0, sizeof(int));
memset(&erro_ofs_106, 0, sizeof(int));
memset(&options_107, 0, sizeof(int));
memset(&str_108, 0, sizeof(char*));
memset(&re_109, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_110, 0, sizeof(int));
memset(&options_111, 0, sizeof(int));
memset(&len_112, 0, sizeof(int));
memset(&regex_result_113, 0, sizeof(int));
memset(&i_114, 0, sizeof(int));
memset(&i_115, 0, sizeof(int));
right_value110 = (void*)0;
memset(&str_116, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&group_strings_117, 0, sizeof(struct list$1charph*));
right_value113 = (void*)0;
memset(&str2_118, 0, sizeof(char*));
right_value114 = (void*)0;
memset(&str_119, 0, sizeof(char*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&group_strings_120, 0, sizeof(struct list$1charph*));
memset(&i_121, 0, sizeof(int));
right_value117 = (void*)0;
memset(&match_string_122, 0, sizeof(char*));
right_value118 = (void*)0;
memset(&str2_123, 0, sizeof(char*));
    result_99=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 465, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_100=0;
    ovec_max_101=16;
    int start_102[ovec_max_101];
    memset(&start_102, 0, sizeof(int)    *(ovec_max_101)    );
    int end_103[ovec_max_101];
    memset(&end_103, 0, sizeof(int)    *(ovec_max_101)    );
    int ovec_value_104[ovec_max_101*3];
    memset(&ovec_value_104, 0, sizeof(int)    *(ovec_max_101*3)    );
    options_107=reg->options;
    str_108=reg->str;
    re_109=reg->re;
    n_110=0;
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        options_111=2097152;
        len_112=strlen(self);
        regex_result_113=pcre_exec(re_109,(struct pcre_extra*)0,self,len_112,offset_100,options_111,ovec_value_104,ovec_max_101*3);
        for(        i_114=0;        i_114<ovec_max_101;        i_114++        ){
            start_102[i_114]=ovec_value_104[i_114*2];
        }
        for(        i_115=0;        i_115<ovec_max_101;        i_115++        ){
            end_103[i_115]=ovec_value_104[i_115*2+1];
        }
        if(_if_conditional43=regex_result_113==1,        _if_conditional43) {
            str_116=(char*)come_increment_ref_count(((char*)(right_value110=charp_substring(self,start_102[0],end_103[0]))));
            right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_117=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 501, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_118=(char*)come_increment_ref_count(((char*)(right_value113=block(parent,str_116,group_strings_117))));
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional44=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional44) {
                __result104__ = __result_obj__ = result_99;
                str_116 = come_decrement_ref_count2(str_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_118 = come_decrement_ref_count2(str2_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result104__;
            }
            list$1charph_push_back(result_99,(char*)come_increment_ref_count(str2_118));
            if(_if_conditional45=offset_100==end_103[0],            _if_conditional45) {
                offset_100++;
            }
            else {
                offset_100=end_103[0];
            }
            n_110++;
            if(_if_conditional46=n_110==count,            _if_conditional46) {
                str_116 = come_decrement_ref_count2(str_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_118 = come_decrement_ref_count2(str2_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_116 = come_decrement_ref_count2(str_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_118 = come_decrement_ref_count2(str2_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional47=regex_result_113>1,            _if_conditional47) {
                str_119=(char*)come_increment_ref_count(((char*)(right_value114=charp_substring(self,start_102[0],end_103[0]))));
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_120=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value115=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 527, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_121=1;                i_121<regex_result_113;                i_121++                ){
                    match_string_122=(char*)come_increment_ref_count(((char*)(right_value117=charp_substring(self,start_102[i_121],end_103[i_121]))));
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_120,(char*)come_increment_ref_count(match_string_122));
                    match_string_122 = come_decrement_ref_count2(match_string_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_123=(char*)come_increment_ref_count(((char*)(right_value118=block(parent,str_119,group_strings_120))));
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional48=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional48) {
                    __result105__ = __result_obj__ = result_99;
                    str_119 = come_decrement_ref_count2(str_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_123 = come_decrement_ref_count2(str2_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                }
                list$1charph_push_back(result_99,(char*)come_increment_ref_count(str2_123));
                if(_if_conditional49=offset_100==end_103[0],                _if_conditional49) {
                    offset_100++;
                }
                else {
                    offset_100=end_103[0];
                }
                n_110++;
                if(_if_conditional50=n_110==count,                _if_conditional50) {
                    str_119 = come_decrement_ref_count2(str_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_123 = come_decrement_ref_count2(str2_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                str_119 = come_decrement_ref_count2(str_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_123 = come_decrement_ref_count2(str2_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result106__ = __result_obj__ = result_99;
    come_call_finalizer2(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(list$1charphp_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_124;
int erro_ofs_125;
int options_126;
char* str_127;
struct real_pcre8_or_16* re_128;
void* right_value119;
void* right_value120;
struct list$1charph* result_129;
int offset_130;
int ovec_max_131;
_Bool _while_condtional8;
int options_135;
int len_136;
int regex_result_137;
int i_138;
int i_139;
_Bool _if_conditional51;
void* right_value121;
char* str_140;
void* right_value122;
void* right_value123;
struct list$1charph* match_strings_141;
void* right_value124;
char* str2_142;
_Bool _if_conditional52;
struct list$1charph* __result107__;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value125;
char* str_143;
_Bool _if_conditional55;
void* right_value126;
void* right_value127;
struct list$1charph* match_strings_144;
int i_145;
void* right_value128;
char* match_str_146;
void* right_value129;
char* str2_147;
_Bool _if_conditional56;
struct list$1charph* __result108__;
_Bool _if_conditional57;
void* right_value130;
char* str_148;
void* right_value131;
void* right_value132;
struct list$1charph* match_strings_149;
void* right_value133;
char* str2_150;
_Bool _if_conditional58;
struct list$1charph* __result109__;
struct list$1charph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_125, 0, sizeof(int));
memset(&options_126, 0, sizeof(int));
memset(&str_127, 0, sizeof(char*));
memset(&re_128, 0, sizeof(struct real_pcre8_or_16*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&result_129, 0, sizeof(struct list$1charph*));
memset(&offset_130, 0, sizeof(int));
memset(&ovec_max_131, 0, sizeof(int));
memset(&options_135, 0, sizeof(int));
memset(&len_136, 0, sizeof(int));
memset(&regex_result_137, 0, sizeof(int));
memset(&i_138, 0, sizeof(int));
memset(&i_139, 0, sizeof(int));
right_value121 = (void*)0;
memset(&str_140, 0, sizeof(char*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&match_strings_141, 0, sizeof(struct list$1charph*));
right_value124 = (void*)0;
memset(&str2_142, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&str_143, 0, sizeof(char*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&match_strings_144, 0, sizeof(struct list$1charph*));
memset(&i_145, 0, sizeof(int));
right_value128 = (void*)0;
memset(&match_str_146, 0, sizeof(char*));
right_value129 = (void*)0;
memset(&str2_147, 0, sizeof(char*));
right_value130 = (void*)0;
memset(&str_148, 0, sizeof(char*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&match_strings_149, 0, sizeof(struct list$1charph*));
right_value133 = (void*)0;
memset(&str2_150, 0, sizeof(char*));
    options_126=reg->options;
    str_127=reg->str;
    re_128=reg->re;
    result_129=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value119=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 573, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_130=0;
    ovec_max_131=16;
    int start_132[ovec_max_131];
    memset(&start_132, 0, sizeof(int)    *(ovec_max_131)    );
    int end_133[ovec_max_131];
    memset(&end_133, 0, sizeof(int)    *(ovec_max_131)    );
    int ovec_value_134[ovec_max_131*3];
    memset(&ovec_value_134, 0, sizeof(int)    *(ovec_max_131*3)    );
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_135=2097152;
        len_136=strlen(self);
        regex_result_137=pcre_exec(re_128,(struct pcre_extra*)0,self,len_136,offset_130,options_135,ovec_value_134,ovec_max_131*3);
        for(        i_138=0;        i_138<ovec_max_131;        i_138++        ){
            start_132[i_138]=ovec_value_134[i_138*2];
        }
        for(        i_139=0;        i_139<ovec_max_131;        i_139++        ){
            end_133[i_139]=ovec_value_134[i_139*2+1];
        }
        if(_if_conditional51=regex_result_137==1,        _if_conditional51) {
            str_140=(char*)come_increment_ref_count(((char*)(right_value121=charp_substring(self,offset_130,start_132[0]))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_141=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 600, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_142=(char*)come_increment_ref_count(((char*)(right_value124=block(parent,str_140,match_strings_141))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional52=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional52) {
                __result107__ = __result_obj__ = result_129;
                str_140 = come_decrement_ref_count2(str_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_142 = come_decrement_ref_count2(str2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result107__;
            }
            list$1charph_push_back(result_129,(char*)come_increment_ref_count(str2_142));
            if(_if_conditional53=offset_130==end_133[0],            _if_conditional53) {
                offset_130++;
            }
            else {
                offset_130=end_133[0];
            }
            str_140 = come_decrement_ref_count2(str_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_142 = come_decrement_ref_count2(str2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional54=regex_result_137>1,            _if_conditional54) {
                str_143=(char*)come_increment_ref_count(((char*)(right_value125=charp_substring(self,offset_130,start_132[0]))));
                right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional55=offset_130==end_133[0],                _if_conditional55) {
                    offset_130++;
                }
                else {
                    offset_130=end_133[0];
                }
                match_strings_144=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 627, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_145=1;                i_145<regex_result_137;                i_145++                ){
                    match_str_146=(char*)come_increment_ref_count(((char*)(right_value128=charp_substring(self,start_132[i_145],end_133[i_145]))));
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_144,(char*)come_increment_ref_count(match_str_146));
                    match_str_146 = come_decrement_ref_count2(match_str_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_147=(char*)come_increment_ref_count(((char*)(right_value129=block(parent,str_143,match_strings_144))));
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional56=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional56) {
                    __result108__ = __result_obj__ = result_129;
                    str_143 = come_decrement_ref_count2(str_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,match_strings_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_147 = come_decrement_ref_count2(str2_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result108__;
                }
                list$1charph_push_back(result_129,(char*)come_increment_ref_count(str2_147));
                str_143 = come_decrement_ref_count2(str_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_147 = come_decrement_ref_count2(str2_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional57=offset_130<charp_length(self),    _if_conditional57) {
        str_148=(char*)come_increment_ref_count(((char*)(right_value130=charp_substring(self,offset_130,-1))));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        match_strings_149=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value132=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 649, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        str2_150=(char*)come_increment_ref_count(((char*)(right_value133=block(parent,str_148,match_strings_149))));
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional58=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional58) {
            __result109__ = __result_obj__ = result_129;
            str_148 = come_decrement_ref_count2(str_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_150 = come_decrement_ref_count2(str2_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result109__;
        }
        list$1charph_push_back(result_129,(char*)come_increment_ref_count(str2_150));
        str_148 = come_decrement_ref_count2(str_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,match_strings_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str2_150 = come_decrement_ref_count2(str2_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result110__ = __result_obj__ = result_129;
    come_call_finalizer2(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result110__;
    come_call_finalizer2(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_151;
int erro_ofs_152;
int options_153;
char* str_154;
struct real_pcre8_or_16* re_155;
void* right_value134;
void* right_value135;
struct list$1charph* result_156;
int offset_157;
int ovec_max_158;
int n_162;
_Bool _while_condtional9;
int options_163;
int len_164;
int regex_result_165;
int i_166;
int i_167;
_Bool _if_conditional59;
void* right_value136;
char* str_168;
void* right_value137;
void* right_value138;
struct list$1charph* match_strings_169;
void* right_value139;
char* str2_170;
_Bool _if_conditional60;
struct list$1charph* __result111__;
_Bool _if_conditional61;
_Bool _if_conditional62;
void* right_value140;
char* str_171;
_Bool _if_conditional63;
void* right_value141;
void* right_value142;
struct list$1charph* match_strings_172;
int i_173;
void* right_value143;
char* match_str_174;
void* right_value144;
char* str2_175;
_Bool _if_conditional64;
struct list$1charph* __result112__;
_Bool _if_conditional65;
struct list$1charph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_152, 0, sizeof(int));
memset(&options_153, 0, sizeof(int));
memset(&str_154, 0, sizeof(char*));
memset(&re_155, 0, sizeof(struct real_pcre8_or_16*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&result_156, 0, sizeof(struct list$1charph*));
memset(&offset_157, 0, sizeof(int));
memset(&ovec_max_158, 0, sizeof(int));
memset(&n_162, 0, sizeof(int));
memset(&options_163, 0, sizeof(int));
memset(&len_164, 0, sizeof(int));
memset(&regex_result_165, 0, sizeof(int));
memset(&i_166, 0, sizeof(int));
memset(&i_167, 0, sizeof(int));
right_value136 = (void*)0;
memset(&str_168, 0, sizeof(char*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&match_strings_169, 0, sizeof(struct list$1charph*));
right_value139 = (void*)0;
memset(&str2_170, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&str_171, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&match_strings_172, 0, sizeof(struct list$1charph*));
memset(&i_173, 0, sizeof(int));
right_value143 = (void*)0;
memset(&match_str_174, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&str2_175, 0, sizeof(char*));
    options_153=reg->options;
    str_154=reg->str;
    re_155=reg->re;
    result_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 671, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_157=0;
    ovec_max_158=16;
    int start_159[ovec_max_158];
    memset(&start_159, 0, sizeof(int)    *(ovec_max_158)    );
    int end_160[ovec_max_158];
    memset(&end_160, 0, sizeof(int)    *(ovec_max_158)    );
    int ovec_value_161[ovec_max_158*3];
    memset(&ovec_value_161, 0, sizeof(int)    *(ovec_max_158*3)    );
    n_162=0;
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        options_163=2097152;
        len_164=strlen(self);
        regex_result_165=pcre_exec(re_155,(struct pcre_extra*)0,self,len_164,offset_157,options_163,ovec_value_161,ovec_max_158*3);
        for(        i_166=0;        i_166<ovec_max_158;        i_166++        ){
            start_159[i_166]=ovec_value_161[i_166*2];
        }
        for(        i_167=0;        i_167<ovec_max_158;        i_167++        ){
            end_160[i_167]=ovec_value_161[i_167*2+1];
        }
        if(_if_conditional59=regex_result_165==1,        _if_conditional59) {
            str_168=(char*)come_increment_ref_count(((char*)(right_value136=charp_substring(self,offset_157,start_159[0]))));
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_169=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 700, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_170=(char*)come_increment_ref_count(((char*)(right_value139=block(parent,str_168,match_strings_169))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional60=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional60) {
                __result111__ = __result_obj__ = result_156;
                str_168 = come_decrement_ref_count2(str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_170 = come_decrement_ref_count2(str2_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result111__;
            }
            list$1charph_push_back(result_156,(char*)come_increment_ref_count(str2_170));
            if(_if_conditional61=offset_157==end_160[0],            _if_conditional61) {
                offset_157++;
            }
            else {
                offset_157=end_160[0];
            }
            str_168 = come_decrement_ref_count2(str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_170 = come_decrement_ref_count2(str2_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional62=regex_result_165>1,            _if_conditional62) {
                str_171=(char*)come_increment_ref_count(((char*)(right_value140=charp_substring(self,offset_157,start_159[0]))));
                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional63=offset_157==end_160[0],                _if_conditional63) {
                    offset_157++;
                }
                else {
                    offset_157=end_160[0];
                }
                match_strings_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value142=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 726, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_173=1;                i_173<regex_result_165;                i_173++                ){
                    match_str_174=(char*)come_increment_ref_count(((char*)(right_value143=charp_substring(self,start_159[i_173],end_160[i_173]))));
                    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_172,(char*)come_increment_ref_count(match_str_174));
                    match_str_174 = come_decrement_ref_count2(match_str_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_175=(char*)come_increment_ref_count(((char*)(right_value144=block(parent,str_171,match_strings_172))));
                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional64=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional64) {
                    __result112__ = __result_obj__ = result_156;
                    str_171 = come_decrement_ref_count2(str_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,match_strings_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_175 = come_decrement_ref_count2(str2_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result112__;
                }
                list$1charph_push_back(result_156,(char*)come_increment_ref_count(str2_175));
                str_171 = come_decrement_ref_count2(str_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_175 = come_decrement_ref_count2(str2_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_162++;
        if(_if_conditional65=n_162==count,        _if_conditional65) {
            break;
        }
    }
    __result113__ = __result_obj__ = result_156;
    come_call_finalizer2(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result113__;
    come_call_finalizer2(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool _if_conditional66;
_Bool __result114__;
_Bool _if_conditional67;
_Bool __result115__;
_Bool _if_conditional68;
_Bool __result116__;
_Bool _if_conditional69;
_Bool __result117__;
_Bool _if_conditional70;
_Bool __result118__;
_Bool _if_conditional71;
_Bool __result119__;
_Bool _if_conditional72;
_Bool __result120__;
_Bool _if_conditional73;
_Bool __result121__;
_Bool _if_conditional74;
_Bool __result122__;
_Bool _if_conditional75;
_Bool __result123__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional66=strcmp(left->str,right->str)!=0,    _if_conditional66) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    if(_if_conditional67=left->ignore_case!=right->ignore_case,    _if_conditional67) {
        __result115__ = (_Bool)0;
        return __result115__;
    }
    if(_if_conditional68=left->multiline!=right->multiline,    _if_conditional68) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    if(_if_conditional69=left->global!=right->global,    _if_conditional69) {
        __result117__ = (_Bool)0;
        return __result117__;
    }
    if(_if_conditional70=left->extended!=right->extended,    _if_conditional70) {
        __result118__ = (_Bool)0;
        return __result118__;
    }
    if(_if_conditional71=left->dotall!=right->dotall,    _if_conditional71) {
        __result119__ = (_Bool)0;
        return __result119__;
    }
    if(_if_conditional72=left->anchored!=right->anchored,    _if_conditional72) {
        __result120__ = (_Bool)0;
        return __result120__;
    }
    if(_if_conditional73=left->dollar_endonly!=right->dollar_endonly,    _if_conditional73) {
        __result121__ = (_Bool)0;
        return __result121__;
    }
    if(_if_conditional74=left->ungreedy!=right->ungreedy,    _if_conditional74) {
        __result122__ = (_Bool)0;
        return __result122__;
    }
    if(_if_conditional75=left->options!=right->options,    _if_conditional75) {
        __result123__ = (_Bool)0;
        return __result123__;
    }
    __result124__ = (_Bool)1;
    return __result124__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value145;
void* right_value146;
struct list$1charph* result_176;
int offset_177;
int ovec_max_178;
const char* err_182;
int erro_ofs_183;
int options_184;
char* str_185;
struct real_pcre8_or_16* re_186;
_Bool _while_condtional10;
int options_187;
int len_188;
int regex_result_189;
int i_190;
int i_191;
_Bool _if_conditional76;
void* right_value147;
char* str_192;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value148;
char* str_193;
_Bool _if_conditional79;
int i_194;
void* right_value149;
char* match_string_195;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&result_176, 0, sizeof(struct list$1charph*));
memset(&offset_177, 0, sizeof(int));
memset(&ovec_max_178, 0, sizeof(int));
memset(&erro_ofs_183, 0, sizeof(int));
memset(&options_184, 0, sizeof(int));
memset(&str_185, 0, sizeof(char*));
memset(&re_186, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_187, 0, sizeof(int));
memset(&len_188, 0, sizeof(int));
memset(&regex_result_189, 0, sizeof(int));
memset(&i_190, 0, sizeof(int));
memset(&i_191, 0, sizeof(int));
right_value147 = (void*)0;
memset(&str_192, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&str_193, 0, sizeof(char*));
memset(&i_194, 0, sizeof(int));
right_value149 = (void*)0;
memset(&match_string_195, 0, sizeof(char*));
    result_176=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 794, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_177=0;
    ovec_max_178=16;
    int start_179[ovec_max_178];
    memset(&start_179, 0, sizeof(int)    *(ovec_max_178)    );
    int end_180[ovec_max_178];
    memset(&end_180, 0, sizeof(int)    *(ovec_max_178)    );
    int ovec_value_181[ovec_max_178*3];
    memset(&ovec_value_181, 0, sizeof(int)    *(ovec_max_178*3)    );
    options_184=reg->options;
    str_185=reg->str;
    re_186=reg->re;
    while(_while_condtional10=(_Bool)1,    _while_condtional10) {
        options_187=2097152;
        len_188=strlen(self);
        regex_result_189=pcre_exec(re_186,(struct pcre_extra*)0,self,len_188,offset_177,options_187,ovec_value_181,ovec_max_178*3);
        for(        i_190=0;        i_190<ovec_max_178;        i_190++        ){
            start_179[i_190]=ovec_value_181[i_190*2];
        }
        for(        i_191=0;        i_191<ovec_max_178;        i_191++        ){
            end_180[i_191]=ovec_value_181[i_191*2+1];
        }
        if(_if_conditional76=regex_result_189==1,        _if_conditional76) {
            str_192=(char*)come_increment_ref_count(((char*)(right_value147=charp_substring(self,start_179[0],end_180[0]))));
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_176,(char*)come_increment_ref_count(str_192));
            if(_if_conditional77=offset_177==end_180[0],            _if_conditional77) {
                offset_177++;
            }
            else {
                offset_177=end_180[0];
            }
            str_192 = come_decrement_ref_count2(str_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional78=regex_result_189>1,            _if_conditional78) {
                str_193=(char*)come_increment_ref_count(((char*)(right_value148=charp_substring(self,start_179[0],end_180[0]))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_176,(char*)come_increment_ref_count(str_193));
                if(_if_conditional79=offset_177==end_180[0],                _if_conditional79) {
                    offset_177++;
                }
                else {
                    offset_177=end_180[0];
                }
                *num_group_string_in_regex=regex_result_189-1;
                for(                i_194=1;                i_194<regex_result_189;                i_194++                ){
                    match_string_195=(char*)come_increment_ref_count(((char*)(right_value149=charp_substring(self,start_179[i_194],end_180[i_194]))));
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_195));
                    match_string_195 = come_decrement_ref_count2(match_string_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_193 = come_decrement_ref_count2(str_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result125__ = __result_obj__ = result_176;
    come_call_finalizer2(list$1charphp_finalize,result_176, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result125__;
    come_call_finalizer2(list$1charphp_finalize,result_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_strip(char* self){
void* __result_obj__;
void* right_value150;
char* result_196;
int len_197;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&result_196, 0, sizeof(char*));
memset(&len_197, 0, sizeof(int));
    result_196=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(self))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    len_197=strlen(self);
    if(_if_conditional80=self[len_197-1]==10,    _if_conditional80) {
        result_196[len_197-1]=0;
    }
    else {
        if(_if_conditional81=self[len_197-1]==13,        _if_conditional81) {
            result_196[len_197-1]=0;
        }
        else {
            if(_if_conditional82=len_197>2&&self[len_197-2]==13&&self[len_197-1]==10,            _if_conditional82) {
                result_196[len_197-2]=0;
            }
        }
    }
    __result126__ = __result_obj__ = result_196;
    result_196 = come_decrement_ref_count2(result_196, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result126__;
    result_196 = come_decrement_ref_count2(result_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_printable(char* str){
void* __result_obj__;
int len_198;
void* right_value151;
char* result_199;
int n_200;
int i_201;
char c_202;
_Bool _if_conditional83;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_198, 0, sizeof(int));
right_value151 = (void*)0;
memset(&result_199, 0, sizeof(char*));
memset(&n_200, 0, sizeof(int));
memset(&i_201, 0, sizeof(int));
memset(&c_202, 0, sizeof(char));
    len_198=charp_length(str);
    result_199=(char*)come_increment_ref_count(((char*)(right_value151=(char*)come_calloc(1, sizeof(char)*(1*(len_198*2+1)), "libcomelang2-str.c", 888, "char"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_200=0;
    for(    i_201=0;    i_201<len_198;    i_201++    ){
        c_202=str[i_201];
        if(_if_conditional83=(c_202>=0&&c_202<32)||c_202==127,        _if_conditional83) {
            result_199[n_200++]=94;
            result_199[n_200++]=c_202+65-1;
        }
        else {
            result_199[n_200++]=c_202;
        }
    }
    result_199[n_200]=0;
    __result127__ = __result_obj__ = result_199;
    result_199 = come_decrement_ref_count2(result_199, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result127__;
    result_199 = come_decrement_ref_count2(result_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
int len_203;
void* right_value152;
char* result_204;
_Bool _if_conditional84;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_203, 0, sizeof(int));
right_value152 = (void*)0;
memset(&result_204, 0, sizeof(char*));
    len_203=4*(wcslen(wstr)+1);
    result_204=(char*)come_increment_ref_count(((char*)(right_value152=(char*)come_calloc(1, sizeof(char)*(1*(len_203)), "libcomelang2-str.c", 914, "char"))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional84=wcstombs(result_204,wstr,len_203)<0,    _if_conditional84) {
        strncpy(result_204,"",len_203);
    }
    __result128__ = __result_obj__ = result_204;
    result_204 = come_decrement_ref_count2(result_204, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result128__;
    result_204 = come_decrement_ref_count2(result_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
void* right_value153;
unsigned int* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    __result129__ = __result_obj__ = ((unsigned int*)(right_value153=__builtin_wstring(str)));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = wcslen(str);
    return __result130__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
int len_205;
_Bool _if_conditional85;
void* right_value154;
void* right_value155;
unsigned int* __result131__;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value156;
void* right_value157;
unsigned int* __result132__;
_Bool _if_conditional90;
void* right_value158;
unsigned int* sub_str_206;
void* right_value159;
void* right_value160;
unsigned int* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_205, 0, sizeof(int));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&sub_str_206, 0, sizeof(unsigned int*));
right_value159 = (void*)0;
right_value160 = (void*)0;
    len_205=wcslen(str);
    if(_if_conditional85=len_205==0,    _if_conditional85) {
        __result131__ = __result_obj__ = ((unsigned int*)(right_value155=string_to_wstring(((char*)(right_value154=wchar_tp_to_string(str))))));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result131__;
    }
    if(_if_conditional86=head<0,    _if_conditional86) {
        head+=len_205;
    }
    if(_if_conditional87=tail<0,    _if_conditional87) {
        tail+=len_205+1;
    }
    if(_if_conditional88=head<0,    _if_conditional88) {
        head=0;
    }
    if(_if_conditional89=tail<0,    _if_conditional89) {
        __result132__ = __result_obj__ = ((unsigned int*)(right_value157=string_to_wstring(((char*)(right_value156=wchar_tp_to_string(str))))));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result132__;
    }
    if(_if_conditional90=tail>=len_205,    _if_conditional90) {
        tail=len_205;
    }
    sub_str_206=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value158=wchar_tp_substring(str,tail,-1))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_206,sizeof(unsigned int)*(wstring_length(sub_str_206)+1));
    __result133__ = __result_obj__ = ((unsigned int*)(right_value160=string_to_wstring(((char*)(right_value159=wchar_tp_to_string(str))))));
    sub_str_206 = come_decrement_ref_count2(sub_str_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
    sub_str_206 = come_decrement_ref_count2(sub_str_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* head_207;
_Bool _if_conditional91;
int __result134__;
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_207, 0, sizeof(unsigned int*));
    head_207=wcsstr(str,search_str);
    if(_if_conditional91=head_207==((void*)0),    _if_conditional91) {
        __result134__ = default_value;
        return __result134__;
    }
    __result135__ = head_207-str;
    return __result135__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int len_208;
unsigned int* p_209;
_Bool _while_condtional11;
int len2_210;
_Bool result_211;
int i_212;
_Bool _if_conditional92;
_Bool _if_conditional93;
int __result136__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_208, 0, sizeof(int));
memset(&p_209, 0, sizeof(unsigned int*));
memset(&len2_210, 0, sizeof(int));
memset(&result_211, 0, sizeof(_Bool));
memset(&i_212, 0, sizeof(int));
    len_208=wcslen(search_str);
    p_209=str+wcslen(str)-len_208;
    while(_while_condtional11=p_209>=str,    _while_condtional11) {
        len2_210=wcslen(p_209);
        result_211=(_Bool)1;
        for(        i_212=0;        i_212<len_208&&i_212<len2_210;        i_212++        ){
            if(_if_conditional92=p_209[i_212]!=search_str[i_212],            _if_conditional92) {
                result_211=(_Bool)0;
            }
        }
        if(result_211) {
            __result136__ = (p_209-str);
            return __result136__;
        }
        p_209--;
    }
    __result137__ = default_value;
    return __result137__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
int len_213;
void* right_value161;
unsigned int* result_214;
int i_215;
unsigned int* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_213, 0, sizeof(int));
right_value161 = (void*)0;
memset(&result_214, 0, sizeof(unsigned int*));
memset(&i_215, 0, sizeof(int));
    len_213=wcslen(str);
    result_214=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value161=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_213+1)), "libcomelang2-str.c", 1014, "int"))));
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_215=0;    i_215<len_213;    i_215++    ){
        result_214[i_215]=str[len_213-i_215-1];
    }
    result_214[len_213]=0;
    __result138__ = __result_obj__ = result_214;
    result_214 = come_decrement_ref_count2(result_214, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result138__;
    result_214 = come_decrement_ref_count2(result_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
int len_216;
void* right_value162;
unsigned int* result_217;
int i_218;
unsigned int* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_216, 0, sizeof(int));
right_value162 = (void*)0;
memset(&result_217, 0, sizeof(unsigned int*));
memset(&i_218, 0, sizeof(int));
    len_216=wcslen(str)*n+1;
    result_217=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value162=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_216)), "libcomelang2-str.c", 1029, "int"))));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_217[0]=0;
    for(    i_218=0;    i_218<n;    i_218++    ){
        wcscat(result_217,str);
    }
    __result139__ = __result_obj__ = result_217;
    result_217 = come_decrement_ref_count2(result_217, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result139__;
    result_217 = come_decrement_ref_count2(result_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
int len_219;
void* right_value163;
unsigned int* result_220;
int n_221;
int i_222;
unsigned int c_223;
_Bool _if_conditional94;
unsigned int* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_219, 0, sizeof(int));
right_value163 = (void*)0;
memset(&result_220, 0, sizeof(unsigned int*));
memset(&n_221, 0, sizeof(int));
memset(&i_222, 0, sizeof(int));
memset(&c_223, 0, sizeof(unsigned int));
    len_219=wchar_tp_length(str);
    result_220=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value163=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_219*2+1)), "libcomelang2-str.c", 1043, "int"))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_221=0;
    for(    i_222=0;    i_222<len_219;    i_222++    ){
        c_223=str[i_222];
        if(_if_conditional94=(c_223>=0&&c_223<32)||c_223==127,        _if_conditional94) {
            result_220[n_221++]=94;
            result_220[n_221++]=c_223+65-1;
        }
        else {
            result_220[n_221++]=c_223;
        }
    }
    result_220[n_221]=0;
    __result140__ = __result_obj__ = result_220;
    result_220 = come_decrement_ref_count2(result_220, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result140__;
    result_220 = come_decrement_ref_count2(result_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_224;
int ovec_max_225;
const char* err_229;
int erro_ofs_230;
int options_231;
char* str_232;
struct real_pcre8_or_16* re_233;
int n_234;
_Bool _while_condtional12;
int options_235;
int len_236;
int regex_result_237;
int i_238;
int i_239;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool __result141__;
_Bool _if_conditional97;
_Bool _if_conditional98;
int i_242;
void* right_value164;
char* match_string_243;
_Bool _if_conditional99;
_Bool __result143__;
_Bool _if_conditional100;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_224, 0, sizeof(int));
memset(&ovec_max_225, 0, sizeof(int));
memset(&erro_ofs_230, 0, sizeof(int));
memset(&options_231, 0, sizeof(int));
memset(&str_232, 0, sizeof(char*));
memset(&re_233, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_234, 0, sizeof(int));
memset(&options_235, 0, sizeof(int));
memset(&len_236, 0, sizeof(int));
memset(&regex_result_237, 0, sizeof(int));
memset(&i_238, 0, sizeof(int));
memset(&i_239, 0, sizeof(int));
memset(&i_242, 0, sizeof(int));
right_value164 = (void*)0;
memset(&match_string_243, 0, sizeof(char*));
    offset_224=0;
    ovec_max_225=16;
    int start_226[ovec_max_225];
    memset(&start_226, 0, sizeof(int)    *(ovec_max_225)    );
    int end_227[ovec_max_225];
    memset(&end_227, 0, sizeof(int)    *(ovec_max_225)    );
    int ovec_value_228[ovec_max_225*3];
    memset(&ovec_value_228, 0, sizeof(int)    *(ovec_max_225*3)    );
    options_231=reg->options;
    str_232=reg->str;
    re_233=reg->re;
    n_234=0;
    while(_while_condtional12=(_Bool)1,    _while_condtional12) {
        options_235=2097152;
        len_236=strlen(self);
        regex_result_237=pcre_exec(re_233,(struct pcre_extra*)0,self,len_236,offset_224,options_235,ovec_value_228,ovec_max_225*3);
        for(        i_238=0;        i_238<ovec_max_225;        i_238++        ){
            start_226[i_238]=ovec_value_228[i_238*2];
        }
        for(        i_239=0;        i_239<ovec_max_225;        i_239++        ){
            end_227[i_239]=ovec_value_228[i_239*2+1];
        }
        if(_if_conditional95=regex_result_237==1||(group_strings==((void*)0)&&regex_result_237>0),        _if_conditional95) {
            n_234++;
            if(_if_conditional96=n_234==count,            _if_conditional96) {
                __result141__ = (_Bool)1;
                return __result141__;
            }
            if(_if_conditional97=offset_224==end_227[0],            _if_conditional97) {
                offset_224++;
            }
            else {
                offset_224=end_227[0];
            }
        }
        else {
            if(_if_conditional98=regex_result_237>1,            _if_conditional98) {
                n_234++;
                list$1charph_reset(group_strings);
                for(                i_242=1;                i_242<regex_result_237;                i_242++                ){
                    match_string_243=(char*)come_increment_ref_count(((char*)(right_value164=charp_substring(self,start_226[i_242],end_227[i_242]))));
                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_243));
                    match_string_243 = come_decrement_ref_count2(match_string_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional99=n_234==count,                _if_conditional99) {
                    __result143__ = (_Bool)1;
                    return __result143__;
                }
                if(_if_conditional100=offset_224==end_227[0],                _if_conditional100) {
                    offset_224++;
                }
                else {
                    offset_224=end_227[0];
                }
            }
            else {
                __result144__ = (_Bool)0;
                return __result144__;
            }
        }
    }
    __result145__ = (_Bool)0;
    return __result145__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_240;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_241;
struct list$1charph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_240, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_241, 0, sizeof(struct list_item$1charph*));
                    it_240=self->head;
                    while(_while_condtional13=it_240!=((void*)0),                    _while_condtional13) {
                        prev_it_241=it_240;
                        it_240=it_240->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result142__ = __result_obj__ = self;
                    return __result142__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = wcscmp(left,right);
    return __result146__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = wcscmp(left,right);
    return __result147__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = string_get_hash_key(reg->str);
    return __result148__;
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = left==right;
    return __result149__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
void* right_value165;
unsigned int* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result150__ = __result_obj__ = ((unsigned int*)(right_value165=wchar_tp_multiply(str,n)));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
void* right_value166;
unsigned int* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result151__ = __result_obj__ = ((unsigned int*)(right_value166=wchar_tp_multiply(str,n)));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    __result152__ = wcscmp(left,right)==0;
    return __result152__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = wcscmp(left,right)==0;
    return __result153__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = wcscmp(left,right)!=0;
    return __result154__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = wcscmp(left,right)!=0;
    return __result155__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = come_regex_equals(left,right);
    return __result156__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = !come_regex_equals(left,right);
    return __result157__;
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
void* right_value167;
unsigned int* result_244;
unsigned int* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&result_244, 0, sizeof(unsigned int*));
    result_244=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value167=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1207, "int"))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_244,left);
    wcscat(result_244,right);
    __result158__ = __result_obj__ = result_244;
    result_244 = come_decrement_ref_count2(result_244, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result158__;
    result_244 = come_decrement_ref_count2(result_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
void* right_value168;
unsigned int* result_245;
unsigned int* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&result_245, 0, sizeof(unsigned int*));
    result_245=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value168=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1217, "int"))));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_245,left);
    wcscat(result_245,right);
    __result159__ = __result_obj__ = result_245;
    result_245 = come_decrement_ref_count2(result_245, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result159__;
    result_245 = come_decrement_ref_count2(result_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_246;
_Bool _if_conditional101;
int __result160__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_246, 0, sizeof(char*));
    head_246=strstr(str,search_str);
    if(_if_conditional101=head_246==((void*)0),    _if_conditional101) {
        __result160__ = default_value;
        return __result160__;
    }
    __result161__ = head_246-str;
    return __result161__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_247;
int result_251;
int offset_252;
const char* err_253;
int erro_ofs_254;
int options_255;
char* str_256;
struct real_pcre8_or_16* re_257;
_Bool _while_condtional14;
int options_258;
int len_259;
int regex_result_260;
int i_261;
int i_262;
_Bool _if_conditional102;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_247, 0, sizeof(int));
memset(&result_251, 0, sizeof(int));
memset(&offset_252, 0, sizeof(int));
memset(&erro_ofs_254, 0, sizeof(int));
memset(&options_255, 0, sizeof(int));
memset(&str_256, 0, sizeof(char*));
memset(&re_257, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_258, 0, sizeof(int));
memset(&len_259, 0, sizeof(int));
memset(&regex_result_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
memset(&i_262, 0, sizeof(int));
    ovec_max_247=16;
    int start_248[ovec_max_247];
    memset(&start_248, 0, sizeof(int)    *(ovec_max_247)    );
    int end_249[ovec_max_247];
    memset(&end_249, 0, sizeof(int)    *(ovec_max_247)    );
    int ovec_value_250[ovec_max_247*3];
    memset(&ovec_value_250, 0, sizeof(int)    *(ovec_max_247*3)    );
    result_251=default_value;
    offset_252=0;
    options_255=reg->options;
    str_256=reg->str;
    re_257=reg->re;
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        options_258=2097152;
        len_259=strlen(self);
        regex_result_260=pcre_exec(re_257,(struct pcre_extra*)0,self,len_259,offset_252,options_258,ovec_value_250,ovec_max_247*3);
        for(        i_261=0;        i_261<ovec_max_247;        i_261++        ){
            start_248[i_261]=ovec_value_250[i_261*2];
        }
        for(        i_262=0;        i_262<ovec_max_247;        i_262++        ){
            end_249[i_262]=ovec_value_250[i_262*2+1];
        }
        if(_if_conditional102=regex_result_260==1||regex_result_260>0,        _if_conditional102) {
            result_251=start_248[0];
            break;
        }
        {
            break;
        }
    }
    __result162__ = result_251;
    return __result162__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_263;
_Bool _if_conditional103;
void* right_value169;
char* __result163__;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value170;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_263, 0, sizeof(int));
right_value169 = (void*)0;
right_value170 = (void*)0;
    len_263=strlen(self);
    if(_if_conditional103=strcmp(self,"")==0,    _if_conditional103) {
        __result163__ = __result_obj__ = ((char*)(right_value169=__builtin_string(self)));
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result163__;
    }
    if(_if_conditional104=index<0,    _if_conditional104) {
        index+=len_263;
    }
    if(_if_conditional105=index>=len_263,    _if_conditional105) {
        index=len_263-1;
    }
    if(_if_conditional106=index<0,    _if_conditional106) {
        index=0;
    }
    self[index]=c;
    __result164__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self)));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_264;
void* right_value171;
char* result_265;
int i_266;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_264, 0, sizeof(int));
right_value171 = (void*)0;
memset(&result_265, 0, sizeof(char*));
memset(&i_266, 0, sizeof(int));
    len_264=strlen(str)*n+1;
    result_265=(char*)come_increment_ref_count(((char*)(right_value171=(char*)come_calloc(1, sizeof(char)*(1*(len_264)), "libcomelang2-str.c", 1315, "char"))));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_265[0]=0;
    for(    i_266=0;    i_266<n;    i_266++    ){
        strcat(result_265,str);
    }
    __result165__ = __result_obj__ = result_265;
    result_265 = come_decrement_ref_count2(result_265, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result165__;
    result_265 = come_decrement_ref_count2(result_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_267;
int ovec_max_268;
const char* err_272;
int erro_ofs_273;
int options_274;
char* str_275;
struct real_pcre8_or_16* re_276;
void* right_value172;
void* right_value173;
struct buffer* result_277;
_Bool _while_condtional15;
int options_278;
int len_279;
int regex_result_280;
int i_281;
int i_282;
_Bool _if_conditional107;
void* right_value174;
char* str_283;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value175;
char* str_284;
void* right_value176;
char* str_285;
void* right_value177;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_267, 0, sizeof(int));
memset(&ovec_max_268, 0, sizeof(int));
memset(&erro_ofs_273, 0, sizeof(int));
memset(&options_274, 0, sizeof(int));
memset(&str_275, 0, sizeof(char*));
memset(&re_276, 0, sizeof(struct real_pcre8_or_16*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&result_277, 0, sizeof(struct buffer*));
memset(&options_278, 0, sizeof(int));
memset(&len_279, 0, sizeof(int));
memset(&regex_result_280, 0, sizeof(int));
memset(&i_281, 0, sizeof(int));
memset(&i_282, 0, sizeof(int));
right_value174 = (void*)0;
memset(&str_283, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&str_284, 0, sizeof(char*));
right_value176 = (void*)0;
memset(&str_285, 0, sizeof(char*));
right_value177 = (void*)0;
    offset_267=0;
    ovec_max_268=16;
    int start_269[ovec_max_268];
    memset(&start_269, 0, sizeof(int)    *(ovec_max_268)    );
    int end_270[ovec_max_268];
    memset(&end_270, 0, sizeof(int)    *(ovec_max_268)    );
    int ovec_value_271[ovec_max_268*3];
    memset(&ovec_value_271, 0, sizeof(int)    *(ovec_max_268*3)    );
    options_274=reg->options;
    str_275=reg->str;
    re_276=reg->re;
    result_277=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1343, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_278=2097152;
        len_279=strlen(self);
        regex_result_280=pcre_exec(re_276,(struct pcre_extra*)0,self,len_279,offset_267,options_278,ovec_value_271,ovec_max_268*3);
        for(        i_281=0;        i_281<ovec_max_268;        i_281++        ){
            start_269[i_281]=ovec_value_271[i_281*2];
        }
        for(        i_282=0;        i_282<ovec_max_268;        i_282++        ){
            end_270[i_282]=ovec_value_271[i_282*2+1];
        }
        if(_if_conditional107=regex_result_280==1,        _if_conditional107) {
            str_283=(char*)come_increment_ref_count(((char*)(right_value174=charp_substring(self,offset_267,start_269[0]))));
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_277,str_283);
            buffer_append_str(result_277,replace);
            if(_if_conditional108=offset_267==end_270[0],            _if_conditional108) {
                offset_267++;
            }
            else {
                offset_267=end_270[0];
            }
            if(_if_conditional109=!reg->global,            _if_conditional109) {
                str_284=(char*)come_increment_ref_count(((char*)(right_value175=charp_substring(self,offset_267,-1))));
                right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_277,str_284);
                str_284 = come_decrement_ref_count2(str_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_283 = come_decrement_ref_count2(str_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_284 = come_decrement_ref_count2(str_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_283 = come_decrement_ref_count2(str_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_285=(char*)come_increment_ref_count(((char*)(right_value176=charp_substring(self,offset_267,-1))));
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_277,str_285);
            str_285 = come_decrement_ref_count2(str_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_285 = come_decrement_ref_count2(str_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result166__ = __result_obj__ = ((char*)(right_value177=buffer_to_string(result_277)));
    come_call_finalizer2(buffer_finalize,result_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result166__;
    come_call_finalizer2(buffer_finalize,result_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_286;
int ovec_max_287;
const char* err_291;
int erro_ofs_292;
int options_293;
char* str_294;
struct real_pcre8_or_16* re_295;
void* right_value178;
void* right_value179;
struct buffer* result_296;
int n_297;
_Bool _while_condtional16;
int options_298;
int len_299;
int regex_result_300;
int i_301;
int i_302;
_Bool _if_conditional110;
void* right_value180;
char* str_303;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value181;
char* str_304;
_Bool _if_conditional113;
void* right_value182;
char* str_305;
void* right_value183;
char* str_306;
void* right_value184;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_286, 0, sizeof(int));
memset(&ovec_max_287, 0, sizeof(int));
memset(&erro_ofs_292, 0, sizeof(int));
memset(&options_293, 0, sizeof(int));
memset(&str_294, 0, sizeof(char*));
memset(&re_295, 0, sizeof(struct real_pcre8_or_16*));
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_296, 0, sizeof(struct buffer*));
memset(&n_297, 0, sizeof(int));
memset(&options_298, 0, sizeof(int));
memset(&len_299, 0, sizeof(int));
memset(&regex_result_300, 0, sizeof(int));
memset(&i_301, 0, sizeof(int));
memset(&i_302, 0, sizeof(int));
right_value180 = (void*)0;
memset(&str_303, 0, sizeof(char*));
right_value181 = (void*)0;
memset(&str_304, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&str_305, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&str_306, 0, sizeof(char*));
right_value184 = (void*)0;
    offset_286=0;
    ovec_max_287=16;
    int start_288[ovec_max_287];
    memset(&start_288, 0, sizeof(int)    *(ovec_max_287)    );
    int end_289[ovec_max_287];
    memset(&end_289, 0, sizeof(int)    *(ovec_max_287)    );
    int ovec_value_290[ovec_max_287*3];
    memset(&ovec_value_290, 0, sizeof(int)    *(ovec_max_287*3)    );
    options_293=reg->options;
    str_294=reg->str;
    re_295=reg->re;
    result_296=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value179=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value178=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1406, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    n_297=0;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_298=2097152;
        len_299=strlen(self);
        regex_result_300=pcre_exec(re_295,(struct pcre_extra*)0,self,len_299,offset_286,options_298,ovec_value_290,ovec_max_287*3);
        for(        i_301=0;        i_301<ovec_max_287;        i_301++        ){
            start_288[i_301]=ovec_value_290[i_301*2];
        }
        for(        i_302=0;        i_302<ovec_max_287;        i_302++        ){
            end_289[i_302]=ovec_value_290[i_302*2+1];
        }
        if(_if_conditional110=regex_result_300==1,        _if_conditional110) {
            n_297++;
            str_303=(char*)come_increment_ref_count(((char*)(right_value180=charp_substring(self,offset_286,start_288[0]))));
            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_296,str_303);
            buffer_append_str(result_296,replace);
            if(_if_conditional111=offset_286==end_289[0],            _if_conditional111) {
                offset_286++;
            }
            else {
                offset_286=end_289[0];
            }
            if(_if_conditional112=!reg->global,            _if_conditional112) {
                str_304=(char*)come_increment_ref_count(((char*)(right_value181=charp_substring(self,offset_286,-1))));
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_296,str_304);
                str_304 = come_decrement_ref_count2(str_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_303 = come_decrement_ref_count2(str_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_304 = come_decrement_ref_count2(str_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional113=n_297==count,            _if_conditional113) {
                str_305=(char*)come_increment_ref_count(((char*)(right_value182=charp_substring(self,offset_286,-1))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_296,str_305);
                str_305 = come_decrement_ref_count2(str_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_303 = come_decrement_ref_count2(str_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_305 = come_decrement_ref_count2(str_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_303 = come_decrement_ref_count2(str_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_306=(char*)come_increment_ref_count(((char*)(right_value183=charp_substring(self,offset_286,-1))));
            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_296,str_306);
            str_306 = come_decrement_ref_count2(str_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_306 = come_decrement_ref_count2(str_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result167__ = __result_obj__ = ((char*)(right_value184=buffer_to_string(result_296)));
    come_call_finalizer2(buffer_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
    come_call_finalizer2(buffer_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
void* right_value185;
void* right_value186;
struct list$1charph* result_307;
void* right_value187;
void* right_value188;
struct buffer* buf_308;
int i_309;
_Bool _if_conditional114;
void* right_value189;
_Bool _if_conditional115;
void* right_value190;
struct list$1charph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&result_307, 0, sizeof(struct list$1charph*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&buf_308, 0, sizeof(struct buffer*));
memset(&i_309, 0, sizeof(int));
right_value189 = (void*)0;
right_value190 = (void*)0;
    result_307=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1465, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buf_308=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value188=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value187=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1467, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_309=0;    i_309<charp_length(self);    i_309++    ){
        if(_if_conditional114=strstr(self+i_309,str)==self+i_309,        _if_conditional114) {
            list$1charph_push_back(result_307,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(buf_308->buf)))));
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(buf_308);
            i_309+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_308,self[i_309]);
        }
    }
    if(_if_conditional115=buffer_length(buf_308)!=0,    _if_conditional115) {
        list$1charph_push_back(result_307,(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(buf_308->buf)))));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result168__ = __result_obj__ = result_307;
    come_call_finalizer2(list$1charphp_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result168__;
    come_call_finalizer2(list$1charphp_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value191;
void* right_value192;
struct list$1charph* result_310;
int offset_311;
int ovec_max_312;
const char* err_316;
int erro_ofs_317;
int options_318;
char* str_319;
struct real_pcre8_or_16* re_320;
_Bool _while_condtional17;
int options_321;
int len_322;
int regex_result_323;
int i_324;
int i_325;
_Bool _if_conditional116;
void* right_value193;
char* str_326;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value194;
char* str_327;
_Bool _if_conditional119;
int i_328;
void* right_value195;
char* match_string_329;
struct list$1charph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&result_310, 0, sizeof(struct list$1charph*));
memset(&offset_311, 0, sizeof(int));
memset(&ovec_max_312, 0, sizeof(int));
memset(&erro_ofs_317, 0, sizeof(int));
memset(&options_318, 0, sizeof(int));
memset(&str_319, 0, sizeof(char*));
memset(&re_320, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_321, 0, sizeof(int));
memset(&len_322, 0, sizeof(int));
memset(&regex_result_323, 0, sizeof(int));
memset(&i_324, 0, sizeof(int));
memset(&i_325, 0, sizeof(int));
right_value193 = (void*)0;
memset(&str_326, 0, sizeof(char*));
right_value194 = (void*)0;
memset(&str_327, 0, sizeof(char*));
memset(&i_328, 0, sizeof(int));
right_value195 = (void*)0;
memset(&match_string_329, 0, sizeof(char*));
    result_310=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1488, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_311=0;
    ovec_max_312=16;
    int start_313[ovec_max_312];
    memset(&start_313, 0, sizeof(int)    *(ovec_max_312)    );
    int end_314[ovec_max_312];
    memset(&end_314, 0, sizeof(int)    *(ovec_max_312)    );
    int ovec_value_315[ovec_max_312*3];
    memset(&ovec_value_315, 0, sizeof(int)    *(ovec_max_312*3)    );
    options_318=reg->options;
    str_319=reg->str;
    re_320=reg->re;
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        options_321=2097152;
        len_322=strlen(self);
        regex_result_323=pcre_exec(re_320,(struct pcre_extra*)0,self,len_322,offset_311,options_321,ovec_value_315,ovec_max_312*3);
        for(        i_324=0;        i_324<ovec_max_312;        i_324++        ){
            start_313[i_324]=ovec_value_315[i_324*2];
        }
        for(        i_325=0;        i_325<ovec_max_312;        i_325++        ){
            end_314[i_325]=ovec_value_315[i_325*2+1];
        }
        if(_if_conditional116=regex_result_323==1,        _if_conditional116) {
            str_326=(char*)come_increment_ref_count(((char*)(right_value193=charp_substring(self,start_313[0],end_314[0]))));
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_310,(char*)come_increment_ref_count(str_326));
            if(_if_conditional117=offset_311==end_314[0],            _if_conditional117) {
                offset_311++;
            }
            else {
                offset_311=end_314[0];
            }
            str_326 = come_decrement_ref_count2(str_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional118=regex_result_323>1,            _if_conditional118) {
                str_327=(char*)come_increment_ref_count(((char*)(right_value194=charp_substring(self,start_313[0],end_314[0]))));
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_310,(char*)come_increment_ref_count(str_327));
                if(_if_conditional119=offset_311==end_314[0],                _if_conditional119) {
                    offset_311++;
                }
                else {
                    offset_311=end_314[0];
                }
                for(                i_328=1;                i_328<regex_result_323;                i_328++                ){
                    match_string_329=(char*)come_increment_ref_count(((char*)(right_value195=charp_substring(self,start_313[i_328],end_314[i_328]))));
                    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_310,(char*)come_increment_ref_count(match_string_329));
                    match_string_329 = come_decrement_ref_count2(match_string_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_327 = come_decrement_ref_count2(str_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result169__ = __result_obj__ = result_310;
    come_call_finalizer2(list$1charphp_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result169__;
    come_call_finalizer2(list$1charphp_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_330;
int erro_ofs_331;
int options_332;
char* str_333;
struct real_pcre8_or_16* re_334;
void* right_value196;
void* right_value197;
struct list$1charph* result_335;
int offset_336;
int ovec_max_337;
_Bool _while_condtional18;
int options_341;
int len_342;
int regex_result_343;
int i_344;
int i_345;
_Bool _if_conditional120;
void* right_value198;
char* str_346;
_Bool _if_conditional121;
_Bool _if_conditional122;
void* right_value199;
char* str_347;
_Bool _if_conditional123;
int i_348;
void* right_value200;
char* match_str_349;
_Bool _if_conditional124;
void* right_value201;
char* str_350;
struct list$1charph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_331, 0, sizeof(int));
memset(&options_332, 0, sizeof(int));
memset(&str_333, 0, sizeof(char*));
memset(&re_334, 0, sizeof(struct real_pcre8_or_16*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&result_335, 0, sizeof(struct list$1charph*));
memset(&offset_336, 0, sizeof(int));
memset(&ovec_max_337, 0, sizeof(int));
memset(&options_341, 0, sizeof(int));
memset(&len_342, 0, sizeof(int));
memset(&regex_result_343, 0, sizeof(int));
memset(&i_344, 0, sizeof(int));
memset(&i_345, 0, sizeof(int));
right_value198 = (void*)0;
memset(&str_346, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&str_347, 0, sizeof(char*));
memset(&i_348, 0, sizeof(int));
right_value200 = (void*)0;
memset(&match_str_349, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&str_350, 0, sizeof(char*));
    options_332=reg->options;
    str_333=reg->str;
    re_334=reg->re;
    result_335=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value197=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value196=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1569, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_336=0;
    ovec_max_337=16;
    int start_338[ovec_max_337];
    memset(&start_338, 0, sizeof(int)    *(ovec_max_337)    );
    int end_339[ovec_max_337];
    memset(&end_339, 0, sizeof(int)    *(ovec_max_337)    );
    int ovec_value_340[ovec_max_337*3];
    memset(&ovec_value_340, 0, sizeof(int)    *(ovec_max_337*3)    );
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_341=2097152;
        len_342=strlen(self);
        regex_result_343=pcre_exec(re_334,(struct pcre_extra*)0,self,len_342,offset_336,options_341,ovec_value_340,ovec_max_337*3);
        for(        i_344=0;        i_344<ovec_max_337;        i_344++        ){
            start_338[i_344]=ovec_value_340[i_344*2];
        }
        for(        i_345=0;        i_345<ovec_max_337;        i_345++        ){
            end_339[i_345]=ovec_value_340[i_345*2+1];
        }
        if(_if_conditional120=regex_result_343==1,        _if_conditional120) {
            str_346=(char*)come_increment_ref_count(((char*)(right_value198=charp_substring(self,offset_336,start_338[0]))));
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_335,(char*)come_increment_ref_count(str_346));
            if(_if_conditional121=offset_336==end_339[0],            _if_conditional121) {
                offset_336++;
            }
            else {
                offset_336=end_339[0];
            }
            str_346 = come_decrement_ref_count2(str_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional122=regex_result_343>1,            _if_conditional122) {
                str_347=(char*)come_increment_ref_count(((char*)(right_value199=charp_substring(self,offset_336,start_338[0]))));
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_335,(char*)come_increment_ref_count(str_347));
                if(_if_conditional123=offset_336==end_339[0],                _if_conditional123) {
                    offset_336++;
                }
                else {
                    offset_336=end_339[0];
                }
                for(                i_348=1;                i_348<regex_result_343;                i_348++                ){
                    match_str_349=(char*)come_increment_ref_count(((char*)(right_value200=charp_substring(self,start_338[i_348],end_339[i_348]))));
                    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_335,(char*)come_increment_ref_count(match_str_349));
                    match_str_349 = come_decrement_ref_count2(match_str_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_347 = come_decrement_ref_count2(str_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional124=offset_336<charp_length(self),    _if_conditional124) {
        str_350=(char*)come_increment_ref_count(((char*)(right_value201=charp_substring(self,offset_336,-1))));
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_335,(char*)come_increment_ref_count(str_350));
        str_350 = come_decrement_ref_count2(str_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result170__ = __result_obj__ = result_335;
    come_call_finalizer2(list$1charphp_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result170__;
    come_call_finalizer2(list$1charphp_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_351;
int ovec_max_352;
const char* err_356;
int erro_ofs_357;
int options_358;
char* str_359;
struct real_pcre8_or_16* re_360;
_Bool _while_condtional19;
int options_361;
int len_362;
int regex_result_363;
int i_364;
int i_365;
_Bool _if_conditional125;
_Bool __result171__;
_Bool __result172__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_351, 0, sizeof(int));
memset(&ovec_max_352, 0, sizeof(int));
memset(&erro_ofs_357, 0, sizeof(int));
memset(&options_358, 0, sizeof(int));
memset(&str_359, 0, sizeof(char*));
memset(&re_360, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_361, 0, sizeof(int));
memset(&len_362, 0, sizeof(int));
memset(&regex_result_363, 0, sizeof(int));
memset(&i_364, 0, sizeof(int));
memset(&i_365, 0, sizeof(int));
    offset_351=0;
    ovec_max_352=16;
    int start_353[ovec_max_352];
    memset(&start_353, 0, sizeof(int)    *(ovec_max_352)    );
    int end_354[ovec_max_352];
    memset(&end_354, 0, sizeof(int)    *(ovec_max_352)    );
    int ovec_value_355[ovec_max_352*3];
    memset(&ovec_value_355, 0, sizeof(int)    *(ovec_max_352*3)    );
    options_358=reg->options;
    str_359=reg->str;
    re_360=reg->re;
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        options_361=2097152;
        len_362=strlen(self);
        regex_result_363=pcre_exec(re_360,(struct pcre_extra*)0,self,len_362,offset_351,options_361,ovec_value_355,ovec_max_352*3);
        for(        i_364=0;        i_364<ovec_max_352;        i_364++        ){
            start_353[i_364]=ovec_value_355[i_364*2];
        }
        for(        i_365=0;        i_365<ovec_max_352;        i_365++        ){
            end_354[i_365]=ovec_value_355[i_365*2+1];
        }
        if(_if_conditional125=regex_result_363>0,        _if_conditional125) {
            __result171__ = (_Bool)1;
            return __result171__;
        }
        else {
            __result172__ = (_Bool)0;
            return __result172__;
        }
    }
    __result173__ = (_Bool)0;
    return __result173__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
const char* err_366;
int erro_ofs_367;
int options_368;
char* str_369;
struct real_pcre8_or_16* re_370;
void* right_value202;
void* right_value203;
struct list$1charph* result_371;
int offset_372;
int ovec_max_373;
int n_377;
_Bool _while_condtional20;
int options_378;
int len_379;
int regex_result_380;
int i_381;
int i_382;
_Bool _if_conditional126;
void* right_value204;
char* str_383;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value205;
char* str_384;
_Bool _if_conditional129;
int i_385;
void* right_value206;
char* match_str_386;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value207;
char* str_387;
struct list$1charph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_367, 0, sizeof(int));
memset(&options_368, 0, sizeof(int));
memset(&str_369, 0, sizeof(char*));
memset(&re_370, 0, sizeof(struct real_pcre8_or_16*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&result_371, 0, sizeof(struct list$1charph*));
memset(&offset_372, 0, sizeof(int));
memset(&ovec_max_373, 0, sizeof(int));
memset(&n_377, 0, sizeof(int));
memset(&options_378, 0, sizeof(int));
memset(&len_379, 0, sizeof(int));
memset(&regex_result_380, 0, sizeof(int));
memset(&i_381, 0, sizeof(int));
memset(&i_382, 0, sizeof(int));
right_value204 = (void*)0;
memset(&str_383, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&str_384, 0, sizeof(char*));
memset(&i_385, 0, sizeof(int));
right_value206 = (void*)0;
memset(&match_str_386, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&str_387, 0, sizeof(char*));
    options_368=reg->options;
    str_369=reg->str;
    re_370=reg->re;
    result_371=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value203=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1691, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_372=0;
    ovec_max_373=16;
    int start_374[ovec_max_373];
    memset(&start_374, 0, sizeof(int)    *(ovec_max_373)    );
    int end_375[ovec_max_373];
    memset(&end_375, 0, sizeof(int)    *(ovec_max_373)    );
    int ovec_value_376[ovec_max_373*3];
    memset(&ovec_value_376, 0, sizeof(int)    *(ovec_max_373*3)    );
    n_377=0;
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_378=2097152;
        len_379=strlen(self);
        regex_result_380=pcre_exec(re_370,(struct pcre_extra*)0,self,len_379,offset_372,options_378,ovec_value_376,ovec_max_373*3);
        for(        i_381=0;        i_381<ovec_max_373;        i_381++        ){
            start_374[i_381]=ovec_value_376[i_381*2];
        }
        for(        i_382=0;        i_382<ovec_max_373;        i_382++        ){
            end_375[i_382]=ovec_value_376[i_382*2+1];
        }
        if(_if_conditional126=regex_result_380==1,        _if_conditional126) {
            str_383=(char*)come_increment_ref_count(((char*)(right_value204=charp_substring(self,offset_372,start_374[0]))));
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_383));
            if(_if_conditional127=offset_372==end_375[0],            _if_conditional127) {
                offset_372++;
            }
            else {
                offset_372=end_375[0];
            }
            str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional128=regex_result_380>1,            _if_conditional128) {
                str_384=(char*)come_increment_ref_count(((char*)(right_value205=charp_substring(self,offset_372,start_374[0]))));
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_384));
                if(_if_conditional129=offset_372==end_375[0],                _if_conditional129) {
                    offset_372++;
                }
                else {
                    offset_372=end_375[0];
                }
                for(                i_385=1;                i_385<regex_result_380;                i_385++                ){
                    match_str_386=(char*)come_increment_ref_count(((char*)(right_value206=charp_substring(self,start_374[i_385],end_375[i_385]))));
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_371,(char*)come_increment_ref_count(match_str_386));
                    match_str_386 = come_decrement_ref_count2(match_str_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_384 = come_decrement_ref_count2(str_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_377++;
        if(_if_conditional130=maxsplit==n_377,        _if_conditional130) {
            break;
        }
    }
    if(_if_conditional131=offset_372<charp_length(self),    _if_conditional131) {
        str_387=(char*)come_increment_ref_count(((char*)(right_value207=charp_substring(self,offset_372,-1))));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_371,(char*)come_increment_ref_count(str_387));
        str_387 = come_decrement_ref_count2(str_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result174__ = __result_obj__ = result_371;
    come_call_finalizer2(list$1charphp_finalize,result_371, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result174__;
    come_call_finalizer2(list$1charphp_finalize,result_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_388;
int erro_ofs_389;
int options_390;
char* str_391;
struct real_pcre8_or_16* re_392;
void* right_value208;
char* self2_393;
int ovec_max_394;
int result_398;
int offset_399;
int n_400;
_Bool _while_condtional21;
int options_401;
int len_402;
int regex_result_403;
int i_404;
int i_405;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_389, 0, sizeof(int));
memset(&options_390, 0, sizeof(int));
memset(&str_391, 0, sizeof(char*));
memset(&re_392, 0, sizeof(struct real_pcre8_or_16*));
right_value208 = (void*)0;
memset(&self2_393, 0, sizeof(char*));
memset(&ovec_max_394, 0, sizeof(int));
memset(&result_398, 0, sizeof(int));
memset(&offset_399, 0, sizeof(int));
memset(&n_400, 0, sizeof(int));
memset(&options_401, 0, sizeof(int));
memset(&len_402, 0, sizeof(int));
memset(&regex_result_403, 0, sizeof(int));
memset(&i_404, 0, sizeof(int));
memset(&i_405, 0, sizeof(int));
    options_390=reg->options;
    str_391=reg->str;
    re_392=reg->re;
    self2_393=(char*)come_increment_ref_count(((char*)(right_value208=charp_reverse(self))));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_394=16;
    int start_395[ovec_max_394];
    memset(&start_395, 0, sizeof(int)    *(ovec_max_394)    );
    int end_396[ovec_max_394];
    memset(&end_396, 0, sizeof(int)    *(ovec_max_394)    );
    int ovec_value_397[ovec_max_394*3];
    memset(&ovec_value_397, 0, sizeof(int)    *(ovec_max_394*3)    );
    result_398=default_value;
    offset_399=0;
    n_400=0;
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_401=2097152;
        len_402=strlen(self2_393);
        regex_result_403=pcre_exec(re_392,(struct pcre_extra*)0,self2_393,len_402,offset_399,options_401,ovec_value_397,ovec_max_394*3);
        for(        i_404=0;        i_404<ovec_max_394;        i_404++        ){
            start_395[i_404]=ovec_value_397[i_404*2];
        }
        for(        i_405=0;        i_405<ovec_max_394;        i_405++        ){
            end_396[i_405]=ovec_value_397[i_405*2+1];
        }
        if(_if_conditional132=regex_result_403>0,        _if_conditional132) {
            n_400++;
            if(_if_conditional133=offset_399==end_396[0],            _if_conditional133) {
                offset_399++;
            }
            else {
                offset_399=end_396[0];
            }
            if(_if_conditional134=n_400==count,            _if_conditional134) {
                result_398=strlen(self)-end_396[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result175__ = result_398;
    self2_393 = come_decrement_ref_count2(self2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result175__;
    self2_393 = come_decrement_ref_count2(self2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_406;
int ovec_max_407;
const char* err_411;
int erro_ofs_412;
int options_413;
char* str_414;
struct real_pcre8_or_16* re_415;
int n_416;
_Bool _while_condtional22;
int options_417;
int len_418;
int regex_result_419;
int i_420;
int i_421;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool __result176__;
_Bool _if_conditional137;
_Bool __result177__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_406, 0, sizeof(int));
memset(&ovec_max_407, 0, sizeof(int));
memset(&erro_ofs_412, 0, sizeof(int));
memset(&options_413, 0, sizeof(int));
memset(&str_414, 0, sizeof(char*));
memset(&re_415, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_416, 0, sizeof(int));
memset(&options_417, 0, sizeof(int));
memset(&len_418, 0, sizeof(int));
memset(&regex_result_419, 0, sizeof(int));
memset(&i_420, 0, sizeof(int));
memset(&i_421, 0, sizeof(int));
    offset_406=0;
    ovec_max_407=16;
    int start_408[ovec_max_407];
    memset(&start_408, 0, sizeof(int)    *(ovec_max_407)    );
    int end_409[ovec_max_407];
    memset(&end_409, 0, sizeof(int)    *(ovec_max_407)    );
    int ovec_value_410[ovec_max_407*3];
    memset(&ovec_value_410, 0, sizeof(int)    *(ovec_max_407*3)    );
    options_413=reg->options;
    str_414=reg->str;
    re_415=reg->re;
    n_416=0;
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_417=2097152;
        len_418=strlen(self);
        regex_result_419=pcre_exec(re_415,(struct pcre_extra*)0,self,len_418,offset_406,options_417,ovec_value_410,ovec_max_407*3);
        for(        i_420=0;        i_420<ovec_max_407;        i_420++        ){
            start_408[i_420]=ovec_value_410[i_420*2];
        }
        for(        i_421=0;        i_421<ovec_max_407;        i_421++        ){
            end_409[i_421]=ovec_value_410[i_421*2+1];
        }
        if(_if_conditional135=regex_result_419>0,        _if_conditional135) {
            n_416++;
            if(_if_conditional136=count==n_416,            _if_conditional136) {
                __result176__ = (_Bool)1;
                return __result176__;
            }
            if(_if_conditional137=offset_406==end_409[0],            _if_conditional137) {
                offset_406++;
            }
            else {
                offset_406=end_409[0];
            }
        }
        else {
            __result177__ = (_Bool)0;
            return __result177__;
        }
    }
    __result178__ = (_Bool)0;
    return __result178__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_422;
int ovec_max_423;
const char* err_427;
int erro_ofs_428;
int options_429;
char* str_430;
struct real_pcre8_or_16* re_431;
void* right_value209;
void* right_value210;
struct buffer* result_432;
_Bool _while_condtional23;
int options_433;
int len_434;
int regex_result_435;
int i_436;
int i_437;
_Bool _if_conditional138;
void* right_value211;
char* str_438;
void* right_value212;
void* right_value213;
struct list$1charph* group_strings_439;
void* right_value214;
char* match_string_440;
void* right_value215;
void* right_value216;
char* block_result_441;
_Bool _if_conditional139;
void* right_value217;
char* __result179__;
_Bool _if_conditional140;
_Bool _if_conditional141;
void* right_value218;
char* str_442;
_Bool _if_conditional142;
void* right_value219;
char* str_443;
_Bool _if_conditional143;
void* right_value220;
void* right_value221;
struct list$1charph* group_strings_444;
int i_445;
void* right_value222;
char* match_string_446;
void* right_value223;
char* match_string_447;
void* right_value224;
char* block_result_448;
_Bool _if_conditional144;
void* right_value225;
char* __result180__;
_Bool _if_conditional145;
void* right_value226;
char* str_449;
void* right_value227;
char* str_450;
void* right_value228;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_422, 0, sizeof(int));
memset(&ovec_max_423, 0, sizeof(int));
memset(&erro_ofs_428, 0, sizeof(int));
memset(&options_429, 0, sizeof(int));
memset(&str_430, 0, sizeof(char*));
memset(&re_431, 0, sizeof(struct real_pcre8_or_16*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&result_432, 0, sizeof(struct buffer*));
memset(&options_433, 0, sizeof(int));
memset(&len_434, 0, sizeof(int));
memset(&regex_result_435, 0, sizeof(int));
memset(&i_436, 0, sizeof(int));
memset(&i_437, 0, sizeof(int));
right_value211 = (void*)0;
memset(&str_438, 0, sizeof(char*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&group_strings_439, 0, sizeof(struct list$1charph*));
right_value214 = (void*)0;
memset(&match_string_440, 0, sizeof(char*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&block_result_441, 0, sizeof(char*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&str_442, 0, sizeof(char*));
right_value219 = (void*)0;
memset(&str_443, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&group_strings_444, 0, sizeof(struct list$1charph*));
memset(&i_445, 0, sizeof(int));
right_value222 = (void*)0;
memset(&match_string_446, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&match_string_447, 0, sizeof(char*));
right_value224 = (void*)0;
memset(&block_result_448, 0, sizeof(char*));
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&str_449, 0, sizeof(char*));
right_value227 = (void*)0;
memset(&str_450, 0, sizeof(char*));
right_value228 = (void*)0;
    offset_422=0;
    ovec_max_423=16;
    int start_424[ovec_max_423];
    memset(&start_424, 0, sizeof(int)    *(ovec_max_423)    );
    int end_425[ovec_max_423];
    memset(&end_425, 0, sizeof(int)    *(ovec_max_423)    );
    int ovec_value_426[ovec_max_423*3];
    memset(&ovec_value_426, 0, sizeof(int)    *(ovec_max_423*3)    );
    options_429=reg->options;
    str_430=reg->str;
    re_431=reg->re;
    result_432=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1903, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_433=2097152;
        len_434=strlen(self);
        regex_result_435=pcre_exec(re_431,(struct pcre_extra*)0,self,len_434,offset_422,options_433,ovec_value_426,ovec_max_423*3);
        for(        i_436=0;        i_436<ovec_max_423;        i_436++        ){
            start_424[i_436]=ovec_value_426[i_436*2];
        }
        for(        i_437=0;        i_437<ovec_max_423;        i_437++        ){
            end_425[i_437]=ovec_value_426[i_437*2+1];
        }
        if(_if_conditional138=regex_result_435==1,        _if_conditional138) {
            str_438=(char*)come_increment_ref_count(((char*)(right_value211=charp_substring(self,offset_422,start_424[0]))));
            right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_432,str_438);
            group_strings_439=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value212=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1923, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            match_string_440=(char*)come_increment_ref_count(((char*)(right_value214=charp_substring(self,start_424[0],end_425[0]))));
            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_439,(char*)come_increment_ref_count(((char*)(right_value215=charp_substring(self,start_424[0],end_425[0])))));
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_441=(char*)come_increment_ref_count(((char*)(right_value216=block(parent,match_string_440,group_strings_439))));
            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional139=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional139) {
                __result179__ = __result_obj__ = ((char*)(right_value217=buffer_to_string(result_432)));
                str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_440 = come_decrement_ref_count2(match_string_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_441 = come_decrement_ref_count2(block_result_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,result_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result179__;
            }
            buffer_append_str(result_432,block_result_441);
            if(_if_conditional140=offset_422==end_425[0],            _if_conditional140) {
                offset_422++;
            }
            else {
                offset_422=end_425[0];
            }
            if(_if_conditional141=!reg->global,            _if_conditional141) {
                str_442=(char*)come_increment_ref_count(((char*)(right_value218=charp_substring(self,offset_422,-1))));
                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_432,str_442);
                str_442 = come_decrement_ref_count2(str_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_440 = come_decrement_ref_count2(match_string_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_441 = come_decrement_ref_count2(block_result_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_442 = come_decrement_ref_count2(str_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            match_string_440 = come_decrement_ref_count2(match_string_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_441 = come_decrement_ref_count2(block_result_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional142=regex_result_435>1,            _if_conditional142) {
                str_443=(char*)come_increment_ref_count(((char*)(right_value219=charp_substring(self,offset_422,start_424[0]))));
                right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_432,str_443);
                if(_if_conditional143=offset_422==end_425[0],                _if_conditional143) {
                    offset_422++;
                }
                else {
                    offset_422=end_425[0];
                }
                group_strings_444=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value220=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1962, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_445=1;                i_445<regex_result_435;                i_445++                ){
                    match_string_446=(char*)come_increment_ref_count(((char*)(right_value222=charp_substring(self,start_424[i_445],end_425[i_445]))));
                    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_444,(char*)come_increment_ref_count(match_string_446));
                    match_string_446 = come_decrement_ref_count2(match_string_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_447=(char*)come_increment_ref_count(((char*)(right_value223=charp_substring(self,start_424[0],end_425[0]))));
                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_448=(char*)come_increment_ref_count(((char*)(right_value224=block(parent,match_string_447,group_strings_444))));
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional144=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional144) {
                    __result180__ = __result_obj__ = ((char*)(right_value225=buffer_to_string(result_432)));
                    str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_447 = come_decrement_ref_count2(match_string_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_448 = come_decrement_ref_count2(block_result_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,result_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result180__;
                }
                buffer_append_str(result_432,block_result_448);
                if(_if_conditional145=!reg->global,                _if_conditional145) {
                    str_449=(char*)come_increment_ref_count(((char*)(right_value226=charp_substring(self,offset_422,-1))));
                    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_432,str_449);
                    str_449 = come_decrement_ref_count2(str_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_447 = come_decrement_ref_count2(match_string_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_448 = come_decrement_ref_count2(block_result_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_449 = come_decrement_ref_count2(str_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_447 = come_decrement_ref_count2(match_string_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_448 = come_decrement_ref_count2(block_result_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_450=(char*)come_increment_ref_count(((char*)(right_value227=charp_substring(self,offset_422,-1))));
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_432,str_450);
                str_450 = come_decrement_ref_count2(str_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_450 = come_decrement_ref_count2(str_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result181__ = __result_obj__ = ((char*)(right_value228=buffer_to_string(result_432)));
    come_call_finalizer2(buffer_finalize,result_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
    come_call_finalizer2(buffer_finalize,result_432, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_451;
int ovec_max_452;
const char* err_456;
int erro_ofs_457;
int options_458;
char* str_459;
struct real_pcre8_or_16* re_460;
void* right_value229;
void* right_value230;
struct buffer* result_461;
int n_462;
_Bool _while_condtional24;
int options_463;
int len_464;
int regex_result_465;
int i_466;
int i_467;
_Bool _if_conditional146;
void* right_value231;
char* str_468;
void* right_value232;
void* right_value233;
struct list$1charph* group_strings_469;
void* right_value234;
void* right_value235;
char* match_string_470;
void* right_value236;
char* block_result_471;
_Bool _if_conditional147;
void* right_value237;
char* __result182__;
_Bool _if_conditional148;
_Bool _if_conditional149;
void* right_value238;
char* str_472;
_Bool _if_conditional150;
void* right_value239;
char* str_473;
_Bool _if_conditional151;
void* right_value240;
char* str_474;
_Bool _if_conditional152;
void* right_value241;
void* right_value242;
struct list$1charph* group_strings_475;
int i_476;
void* right_value243;
char* match_string_477;
void* right_value244;
char* match_string_478;
void* right_value245;
char* block_result_479;
_Bool _if_conditional153;
void* right_value246;
char* __result183__;
_Bool _if_conditional154;
void* right_value247;
char* str_480;
_Bool _if_conditional155;
void* right_value248;
char* str_481;
void* right_value249;
char* str_482;
void* right_value250;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_451, 0, sizeof(int));
memset(&ovec_max_452, 0, sizeof(int));
memset(&erro_ofs_457, 0, sizeof(int));
memset(&options_458, 0, sizeof(int));
memset(&str_459, 0, sizeof(char*));
memset(&re_460, 0, sizeof(struct real_pcre8_or_16*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&result_461, 0, sizeof(struct buffer*));
memset(&n_462, 0, sizeof(int));
memset(&options_463, 0, sizeof(int));
memset(&len_464, 0, sizeof(int));
memset(&regex_result_465, 0, sizeof(int));
memset(&i_466, 0, sizeof(int));
memset(&i_467, 0, sizeof(int));
right_value231 = (void*)0;
memset(&str_468, 0, sizeof(char*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&group_strings_469, 0, sizeof(struct list$1charph*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&match_string_470, 0, sizeof(char*));
right_value236 = (void*)0;
memset(&block_result_471, 0, sizeof(char*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&str_472, 0, sizeof(char*));
right_value239 = (void*)0;
memset(&str_473, 0, sizeof(char*));
right_value240 = (void*)0;
memset(&str_474, 0, sizeof(char*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&group_strings_475, 0, sizeof(struct list$1charph*));
memset(&i_476, 0, sizeof(int));
right_value243 = (void*)0;
memset(&match_string_477, 0, sizeof(char*));
right_value244 = (void*)0;
memset(&match_string_478, 0, sizeof(char*));
right_value245 = (void*)0;
memset(&block_result_479, 0, sizeof(char*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&str_480, 0, sizeof(char*));
right_value248 = (void*)0;
memset(&str_481, 0, sizeof(char*));
right_value249 = (void*)0;
memset(&str_482, 0, sizeof(char*));
right_value250 = (void*)0;
    offset_451=0;
    ovec_max_452=16;
    int start_453[ovec_max_452];
    memset(&start_453, 0, sizeof(int)    *(ovec_max_452)    );
    int end_454[ovec_max_452];
    memset(&end_454, 0, sizeof(int)    *(ovec_max_452)    );
    int ovec_value_455[ovec_max_452*3];
    memset(&ovec_value_455, 0, sizeof(int)    *(ovec_max_452*3)    );
    options_458=reg->options;
    str_459=reg->str;
    re_460=reg->re;
    result_461=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value230=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value229=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2011, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    n_462=0;
    while(_while_condtional24=(_Bool)1,    _while_condtional24) {
        options_463=2097152;
        len_464=strlen(self);
        regex_result_465=pcre_exec(re_460,(struct pcre_extra*)0,self,len_464,offset_451,options_463,ovec_value_455,ovec_max_452*3);
        for(        i_466=0;        i_466<ovec_max_452;        i_466++        ){
            start_453[i_466]=ovec_value_455[i_466*2];
        }
        for(        i_467=0;        i_467<ovec_max_452;        i_467++        ){
            end_454[i_467]=ovec_value_455[i_467*2+1];
        }
        if(_if_conditional146=regex_result_465==1,        _if_conditional146) {
            n_462++;
            str_468=(char*)come_increment_ref_count(((char*)(right_value231=charp_substring(self,offset_451,start_453[0]))));
            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_461,str_468);
            group_strings_469=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2034, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_469,(char*)come_increment_ref_count(((char*)(right_value234=charp_substring(self,start_453[0],end_454[0])))));
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_string_470=(char*)come_increment_ref_count(((char*)(right_value235=charp_substring(self,start_453[0],end_454[0]))));
            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_471=(char*)come_increment_ref_count(((char*)(right_value236=block(parent,match_string_470,group_strings_469))));
            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional147=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional147) {
                __result182__ = __result_obj__ = ((char*)(right_value237=buffer_to_string(result_461)));
                str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_470 = come_decrement_ref_count2(match_string_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_471 = come_decrement_ref_count2(block_result_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,result_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result182__;
            }
            buffer_append_str(result_461,block_result_471);
            if(_if_conditional148=offset_451==end_454[0],            _if_conditional148) {
                offset_451++;
            }
            else {
                offset_451=end_454[0];
            }
            if(_if_conditional149=!reg->global,            _if_conditional149) {
                str_472=(char*)come_increment_ref_count(((char*)(right_value238=charp_substring(self,offset_451,-1))));
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_461,str_472);
                str_472 = come_decrement_ref_count2(str_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_470 = come_decrement_ref_count2(match_string_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_471 = come_decrement_ref_count2(block_result_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_472 = come_decrement_ref_count2(str_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional150=n_462==count,            _if_conditional150) {
                str_473=(char*)come_increment_ref_count(((char*)(right_value239=charp_substring(self,offset_451,-1))));
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_461,str_473);
                str_473 = come_decrement_ref_count2(str_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_470 = come_decrement_ref_count2(match_string_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_471 = come_decrement_ref_count2(block_result_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_473 = come_decrement_ref_count2(str_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            match_string_470 = come_decrement_ref_count2(match_string_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_471 = come_decrement_ref_count2(block_result_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional151=regex_result_465>1,            _if_conditional151) {
                n_462++;
                str_474=(char*)come_increment_ref_count(((char*)(right_value240=charp_substring(self,offset_451,start_453[0]))));
                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_461,str_474);
                if(_if_conditional152=offset_451==end_454[0],                _if_conditional152) {
                    offset_451++;
                }
                else {
                    offset_451=end_454[0];
                }
                group_strings_475=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value241=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2081, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_476=1;                i_476<regex_result_465;                i_476++                ){
                    match_string_477=(char*)come_increment_ref_count(((char*)(right_value243=charp_substring(self,start_453[i_476],end_454[i_476]))));
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_475,(char*)come_increment_ref_count(match_string_477));
                    match_string_477 = come_decrement_ref_count2(match_string_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_478=(char*)come_increment_ref_count(((char*)(right_value244=charp_substring(self,start_453[0],end_454[0]))));
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_479=(char*)come_increment_ref_count(((char*)(right_value245=block(parent,match_string_478,group_strings_475))));
                right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional153=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional153) {
                    __result183__ = __result_obj__ = ((char*)(right_value246=buffer_to_string(result_461)));
                    str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_478 = come_decrement_ref_count2(match_string_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_479 = come_decrement_ref_count2(block_result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,result_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result183__;
                }
                buffer_append_str(result_461,block_result_479);
                if(_if_conditional154=!reg->global,                _if_conditional154) {
                    str_480=(char*)come_increment_ref_count(((char*)(right_value247=charp_substring(self,offset_451,-1))));
                    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_461,str_480);
                    str_480 = come_decrement_ref_count2(str_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_478 = come_decrement_ref_count2(match_string_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_479 = come_decrement_ref_count2(block_result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_480 = come_decrement_ref_count2(str_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional155=n_462==count,                _if_conditional155) {
                    str_481=(char*)come_increment_ref_count(((char*)(right_value248=charp_substring(self,offset_451,-1))));
                    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_461,str_481);
                    str_481 = come_decrement_ref_count2(str_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_478 = come_decrement_ref_count2(match_string_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_479 = come_decrement_ref_count2(block_result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_481 = come_decrement_ref_count2(str_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_478 = come_decrement_ref_count2(match_string_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_479 = come_decrement_ref_count2(block_result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_482=(char*)come_increment_ref_count(((char*)(right_value249=charp_substring(self,offset_451,-1))));
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_461,str_482);
                str_482 = come_decrement_ref_count2(str_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_482 = come_decrement_ref_count2(str_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result184__ = __result_obj__ = ((char*)(right_value250=buffer_to_string(result_461)));
    come_call_finalizer2(buffer_finalize,result_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
    come_call_finalizer2(buffer_finalize,result_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
int result_483;
unsigned int* p_484;
_Bool _while_condtional25;
unsigned int __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_483, 0, sizeof(int));
memset(&p_484, 0, sizeof(unsigned int*));
    result_483=0;
    p_484=value;
    while(_while_condtional25=*p_484,    _while_condtional25) {
        result_483+=(*p_484);
        p_484++;
    }
    __result185__ = result_483;
    return __result185__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    __result187__ = wcscmp(left,right)==0;
    return __result187__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    __result189__ = left==right;
    return __result189__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = left!=right;
    return __result190__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
unsigned int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    __result191__ = value;
    return __result191__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = left==right;
    return __result192__;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
void* right_value251;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
    __result193__ = __result_obj__ = ((char*)(right_value251=xsprintf("%ls",wc)));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result193__;
}

char* string_chomp(char* str){
void* __result_obj__;
void* right_value252;
char* result_485;
_Bool _if_conditional156;
void* right_value253;
char* __result194__;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
memset(&result_485, 0, sizeof(char*));
right_value253 = (void*)0;
    result_485=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(str))));
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional156=result_485[string_length(result_485)-1]==10,    _if_conditional156) {
        __result194__ = __result_obj__ = ((char*)(right_value253=string_substring(result_485,0,-2)));
        result_485 = come_decrement_ref_count2(result_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    __result195__ = __result_obj__ = result_485;
    result_485 = come_decrement_ref_count2(result_485, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result195__;
    result_485 = come_decrement_ref_count2(result_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

