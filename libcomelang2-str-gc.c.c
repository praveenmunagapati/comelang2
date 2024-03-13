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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX570, int anonymous_var_nameX571, const char** anonymous_var_nameX572, int* anonymous_var_nameX573, const unsigned char* anonymous_var_nameX574);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX575, int anonymous_var_nameX576, const char** anonymous_var_nameX577, int* anonymous_var_nameX578, const unsigned char* anonymous_var_nameX579);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX580, int anonymous_var_nameX581, const char** anonymous_var_nameX582, int* anonymous_var_nameX583, const unsigned char* anonymous_var_nameX584);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX585, int anonymous_var_nameX586, int* anonymous_var_nameX587, const char** anonymous_var_nameX588, int* anonymous_var_nameX589, const unsigned char* anonymous_var_nameX590);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX591, int anonymous_var_nameX592, int* anonymous_var_nameX593, const char** anonymous_var_nameX594, int* anonymous_var_nameX595, const unsigned char* anonymous_var_nameX596);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX597, int anonymous_var_nameX598, int* anonymous_var_nameX599, const char** anonymous_var_nameX600, int* anonymous_var_nameX601, const unsigned char* anonymous_var_nameX602);

int pcre_config(int anonymous_var_nameX603, void* anonymous_var_nameX604);

int pcre16_config(int anonymous_var_nameX605, void* anonymous_var_nameX606);

int pcre32_config(int anonymous_var_nameX607, void* anonymous_var_nameX608);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX609, const char* anonymous_var_nameX610, int* anonymous_var_nameX611, int anonymous_var_nameX612, const char* anonymous_var_nameX613, char* anonymous_var_nameX614, int anonymous_var_nameX615);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX616, const unsigned short int* anonymous_var_nameX617, int* anonymous_var_nameX618, int anonymous_var_nameX619, const unsigned short int* anonymous_var_nameX620, unsigned short int* anonymous_var_nameX621, int anonymous_var_nameX622);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX623, const unsigned int* anonymous_var_nameX624, int* anonymous_var_nameX625, int anonymous_var_nameX626, const unsigned int* anonymous_var_nameX627, unsigned int* anonymous_var_nameX628, int anonymous_var_nameX629);

int pcre_copy_substring(const char* anonymous_var_nameX630, int* anonymous_var_nameX631, int anonymous_var_nameX632, int anonymous_var_nameX633, char* anonymous_var_nameX634, int anonymous_var_nameX635);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX636, int* anonymous_var_nameX637, int anonymous_var_nameX638, int anonymous_var_nameX639, unsigned short int* anonymous_var_nameX640, int anonymous_var_nameX641);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX642, int* anonymous_var_nameX643, int anonymous_var_nameX644, int anonymous_var_nameX645, unsigned int* anonymous_var_nameX646, int anonymous_var_nameX647);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX648, const struct pcre_extra* anonymous_var_nameX649, const char* anonymous_var_nameX650, int anonymous_var_nameX651, int anonymous_var_nameX652, int anonymous_var_nameX653, int* anonymous_var_nameX654, int anonymous_var_nameX655, int* anonymous_var_nameX656, int anonymous_var_nameX657);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX658, const struct pcre16_extra* anonymous_var_nameX659, const unsigned short int* anonymous_var_nameX660, int anonymous_var_nameX661, int anonymous_var_nameX662, int anonymous_var_nameX663, int* anonymous_var_nameX664, int anonymous_var_nameX665, int* anonymous_var_nameX666, int anonymous_var_nameX667);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX668, const struct pcre32_extra* anonymous_var_nameX669, const unsigned int* anonymous_var_nameX670, int anonymous_var_nameX671, int anonymous_var_nameX672, int anonymous_var_nameX673, int* anonymous_var_nameX674, int anonymous_var_nameX675, int* anonymous_var_nameX676, int anonymous_var_nameX677);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX678, const struct pcre_extra* anonymous_var_nameX679, const char* anonymous_var_nameX680, int anonymous_var_nameX681, int anonymous_var_nameX682, int anonymous_var_nameX683, int* anonymous_var_nameX684, int anonymous_var_nameX685);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX686, const struct pcre16_extra* anonymous_var_nameX687, const unsigned short int* anonymous_var_nameX688, int anonymous_var_nameX689, int anonymous_var_nameX690, int anonymous_var_nameX691, int* anonymous_var_nameX692, int anonymous_var_nameX693);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX694, const struct pcre32_extra* anonymous_var_nameX695, const unsigned int* anonymous_var_nameX696, int anonymous_var_nameX697, int anonymous_var_nameX698, int anonymous_var_nameX699, int* anonymous_var_nameX700, int anonymous_var_nameX701);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX702, const struct pcre_extra* anonymous_var_nameX703, const char* anonymous_var_nameX704, int anonymous_var_nameX705, int anonymous_var_nameX706, int anonymous_var_nameX707, int* anonymous_var_nameX708, int anonymous_var_nameX709, struct real_pcre_jit_stack* anonymous_var_nameX710);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX711, const struct pcre16_extra* anonymous_var_nameX712, const unsigned short int* anonymous_var_nameX713, int anonymous_var_nameX714, int anonymous_var_nameX715, int anonymous_var_nameX716, int* anonymous_var_nameX717, int anonymous_var_nameX718, struct real_pcre16_jit_stack* anonymous_var_nameX719);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX720, const struct pcre32_extra* anonymous_var_nameX721, const unsigned int* anonymous_var_nameX722, int anonymous_var_nameX723, int anonymous_var_nameX724, int anonymous_var_nameX725, int* anonymous_var_nameX726, int anonymous_var_nameX727, struct real_pcre32_jit_stack* anonymous_var_nameX728);

void pcre_free_substring(const char* anonymous_var_nameX729);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX730);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX731);

void pcre_free_substring_list(const char** anonymous_var_nameX732);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX733);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX734);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX735, const struct pcre_extra* anonymous_var_nameX736, int anonymous_var_nameX737, void* anonymous_var_nameX738);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX739, const struct pcre16_extra* anonymous_var_nameX740, int anonymous_var_nameX741, void* anonymous_var_nameX742);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX743, const struct pcre32_extra* anonymous_var_nameX744, int anonymous_var_nameX745, void* anonymous_var_nameX746);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX747, const char* anonymous_var_nameX748, int* anonymous_var_nameX749, int anonymous_var_nameX750, const char* anonymous_var_nameX751, const char** anonymous_var_nameX752);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX753, const unsigned short int* anonymous_var_nameX754, int* anonymous_var_nameX755, int anonymous_var_nameX756, const unsigned short int* anonymous_var_nameX757, const unsigned short int** anonymous_var_nameX758);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX759, const unsigned int* anonymous_var_nameX760, int* anonymous_var_nameX761, int anonymous_var_nameX762, const unsigned int* anonymous_var_nameX763, const unsigned int** anonymous_var_nameX764);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX765, const char* anonymous_var_nameX766);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX767, const unsigned short int* anonymous_var_nameX768);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX769, const unsigned int* anonymous_var_nameX770);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX771, const char* anonymous_var_nameX772, char** anonymous_var_nameX773, char** anonymous_var_nameX774);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX775, const unsigned short int* anonymous_var_nameX776, unsigned short int** anonymous_var_nameX777, unsigned short int** anonymous_var_nameX778);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX779, const unsigned int* anonymous_var_nameX780, unsigned int** anonymous_var_nameX781, unsigned int** anonymous_var_nameX782);

int pcre_get_substring(const char* anonymous_var_nameX783, int* anonymous_var_nameX784, int anonymous_var_nameX785, int anonymous_var_nameX786, const char** anonymous_var_nameX787);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX788, int* anonymous_var_nameX789, int anonymous_var_nameX790, int anonymous_var_nameX791, const unsigned short int** anonymous_var_nameX792);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX793, int* anonymous_var_nameX794, int anonymous_var_nameX795, int anonymous_var_nameX796, const unsigned int** anonymous_var_nameX797);

int pcre_get_substring_list(const char* anonymous_var_nameX798, int* anonymous_var_nameX799, int anonymous_var_nameX800, const char*** anonymous_var_nameX801);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX802, int* anonymous_var_nameX803, int anonymous_var_nameX804, const unsigned short int*** anonymous_var_nameX805);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX806, int* anonymous_var_nameX807, int anonymous_var_nameX808, const unsigned int*** anonymous_var_nameX809);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX810, int anonymous_var_nameX811);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX812, int anonymous_var_nameX813);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX814, int anonymous_var_nameX815);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX816, int anonymous_var_nameX817, const char** anonymous_var_nameX818);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX819, int anonymous_var_nameX820, const char** anonymous_var_nameX821);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX822, int anonymous_var_nameX823, const char** anonymous_var_nameX824);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX825);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX826);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX827);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX828, struct pcre_extra* anonymous_var_nameX829, const unsigned char* anonymous_var_nameX830);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX831, struct pcre16_extra* anonymous_var_nameX832, const unsigned char* anonymous_var_nameX833);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX834, struct pcre32_extra* anonymous_var_nameX835, const unsigned char* anonymous_var_nameX836);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX837, const unsigned short int* anonymous_var_nameX838, int anonymous_var_nameX839, int* anonymous_var_nameX840, int anonymous_var_nameX841);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX842, const unsigned int* anonymous_var_nameX843, int anonymous_var_nameX844, int* anonymous_var_nameX845, int anonymous_var_nameX846);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX847, int anonymous_var_nameX848);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX849, int anonymous_var_nameX850);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX851, int anonymous_var_nameX852);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX853);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX854);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX855);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX856, struct real_pcre_jit_stack* (*anonymous_var_nameX857)(void*), void* anonymous_var_nameX858);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX859, struct real_pcre16_jit_stack* (*anonymous_var_nameX860)(void*), void* anonymous_var_nameX861);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX862, struct real_pcre32_jit_stack* (*anonymous_var_nameX863)(void*), void* anonymous_var_nameX864);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX865, const unsigned int* anonymous_var_nameX866);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, unsigned long int anonymous_var_nameX869);

unsigned int* wcscat(unsigned int* anonymous_var_nameX870, const unsigned int* anonymous_var_nameX871);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX872, const unsigned int* anonymous_var_nameX873, unsigned long int anonymous_var_nameX874);

int wcscmp(const unsigned int* anonymous_var_nameX875, const unsigned int* anonymous_var_nameX876);

int wcsncmp(const unsigned int* anonymous_var_nameX877, const unsigned int* anonymous_var_nameX878, unsigned long int anonymous_var_nameX879);

int wcscoll(const unsigned int* anonymous_var_nameX880, const unsigned int* anonymous_var_nameX881);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX882, const unsigned int* anonymous_var_nameX883, unsigned long int anonymous_var_nameX884);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX885, unsigned int anonymous_var_nameX886);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX887, unsigned int anonymous_var_nameX888);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX889, const unsigned int* anonymous_var_nameX890);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX891, const unsigned int* anonymous_var_nameX892);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX893, const unsigned int* anonymous_var_nameX894);

unsigned int* wcstok(unsigned int* anonymous_var_nameX895, const unsigned int* anonymous_var_nameX896, unsigned int** anonymous_var_nameX897);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX898);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX899, const unsigned int* anonymous_var_nameX900);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX901, const unsigned int* anonymous_var_nameX902);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX903, unsigned int anonymous_var_nameX904, unsigned long int anonymous_var_nameX905);

int wmemcmp(const unsigned int* anonymous_var_nameX906, const unsigned int* anonymous_var_nameX907, unsigned long int anonymous_var_nameX908);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX909, const unsigned int* anonymous_var_nameX910, unsigned long int anonymous_var_nameX911);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX912, const unsigned int* anonymous_var_nameX913, unsigned long int anonymous_var_nameX914);

unsigned int* wmemset(unsigned int* anonymous_var_nameX915, unsigned int anonymous_var_nameX916, unsigned long int anonymous_var_nameX917);

unsigned int btowc(int anonymous_var_nameX918);

int wctob(unsigned int anonymous_var_nameX919);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX920);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX921, const char* anonymous_var_nameX922, unsigned long int anonymous_var_nameX923, struct __mbstate_t* anonymous_var_nameX924);

unsigned long int wcrtomb(char* anonymous_var_nameX925, unsigned int anonymous_var_nameX926, struct __mbstate_t* anonymous_var_nameX927);

unsigned long int mbrlen(const char* anonymous_var_nameX928, unsigned long int anonymous_var_nameX929, struct __mbstate_t* anonymous_var_nameX930);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX931, const char** anonymous_var_nameX932, unsigned long int anonymous_var_nameX933, struct __mbstate_t* anonymous_var_nameX934);

unsigned long int wcsrtombs(char* anonymous_var_nameX935, const unsigned int** anonymous_var_nameX936, unsigned long int anonymous_var_nameX937, struct __mbstate_t* anonymous_var_nameX938);

float wcstof(const unsigned int* anonymous_var_nameX939, unsigned int** anonymous_var_nameX940);

double wcstod(const unsigned int* anonymous_var_nameX941, unsigned int** anonymous_var_nameX942);

long double wcstold(const unsigned int* anonymous_var_nameX943, unsigned int** anonymous_var_nameX944);

long wcstol(const unsigned int* anonymous_var_nameX945, unsigned int** anonymous_var_nameX946, int anonymous_var_nameX947);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX948, unsigned int** anonymous_var_nameX949, int anonymous_var_nameX950);

long long wcstoll(const unsigned int* anonymous_var_nameX951, unsigned int** anonymous_var_nameX952, int anonymous_var_nameX953);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX954, unsigned int** anonymous_var_nameX955, int anonymous_var_nameX956);

int fwide(struct _IO_FILE* anonymous_var_nameX957, int anonymous_var_nameX958);

int wprintf(const unsigned int* anonymous_var_nameX959, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX960, const unsigned int* anonymous_var_nameX961, ...);

int swprintf(unsigned int* anonymous_var_nameX962, unsigned long int anonymous_var_nameX963, const unsigned int* anonymous_var_nameX964, ...);

int vwprintf(const unsigned int* anonymous_var_nameX965, va_list anonymous_var_nameX966);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX967, const unsigned int* anonymous_var_nameX968, va_list anonymous_var_nameX969);

int vswprintf(unsigned int* anonymous_var_nameX970, unsigned long int anonymous_var_nameX971, const unsigned int* anonymous_var_nameX972, va_list anonymous_var_nameX973);

int wscanf(const unsigned int* anonymous_var_nameX974, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX975, const unsigned int* anonymous_var_nameX976, ...);

int swscanf(const unsigned int* anonymous_var_nameX977, const unsigned int* anonymous_var_nameX978, ...);

int vwscanf(const unsigned int* anonymous_var_nameX979, va_list anonymous_var_nameX980);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX981, const unsigned int* anonymous_var_nameX982, va_list anonymous_var_nameX983);

int vswscanf(const unsigned int* anonymous_var_nameX984, const unsigned int* anonymous_var_nameX985, va_list anonymous_var_nameX986);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX987);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX988);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX989, struct _IO_FILE* anonymous_var_nameX990);

unsigned int putwc(unsigned int anonymous_var_nameX991, struct _IO_FILE* anonymous_var_nameX992);

unsigned int putwchar(unsigned int anonymous_var_nameX993);

unsigned int* fgetws(unsigned int* anonymous_var_nameX994, int anonymous_var_nameX995, struct _IO_FILE* anonymous_var_nameX996);

int fputws(const unsigned int* anonymous_var_nameX997, struct _IO_FILE* anonymous_var_nameX998);

unsigned int ungetwc(unsigned int anonymous_var_nameX999, struct _IO_FILE* anonymous_var_nameX1000);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1001, unsigned long int anonymous_var_nameX1002, const unsigned int* anonymous_var_nameX1003, const struct tm* anonymous_var_nameX1004);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1005);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1006);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1007, struct _IO_FILE* anonymous_var_nameX1008);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1009, struct _IO_FILE* anonymous_var_nameX1010);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1011);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1012, int anonymous_var_nameX1013, struct _IO_FILE* anonymous_var_nameX1014);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1015, struct _IO_FILE* anonymous_var_nameX1016);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1017, unsigned long int anonymous_var_nameX1018, const unsigned int* anonymous_var_nameX1019, const struct tm* anonymous_var_nameX1020, struct __locale_struct* anonymous_var_nameX1021);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1022, unsigned long int* anonymous_var_nameX1023);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1024, const char** anonymous_var_nameX1025, unsigned long int anonymous_var_nameX1026, unsigned long int anonymous_var_nameX1027, struct __mbstate_t* anonymous_var_nameX1028);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1029, const unsigned int** anonymous_var_nameX1030, unsigned long int anonymous_var_nameX1031, unsigned long int anonymous_var_nameX1032, struct __mbstate_t* anonymous_var_nameX1033);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1034);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1035, unsigned long int anonymous_var_nameX1036);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1037, const unsigned int* anonymous_var_nameX1038);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1039, const unsigned int* anonymous_var_nameX1040, unsigned long int anonymous_var_nameX1041);

int wcscasecmp(const unsigned int* anonymous_var_nameX1042, const unsigned int* anonymous_var_nameX1043);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1044, const unsigned int* anonymous_var_nameX1045, struct __locale_struct* anonymous_var_nameX1046);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1047, const unsigned int* anonymous_var_nameX1048, unsigned long int anonymous_var_nameX1049);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1050, const unsigned int* anonymous_var_nameX1051, unsigned long int anonymous_var_nameX1052, struct __locale_struct* anonymous_var_nameX1053);

int wcscoll_l(const unsigned int* anonymous_var_nameX1054, const unsigned int* anonymous_var_nameX1055, struct __locale_struct* anonymous_var_nameX1056);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1057, const unsigned int* anonymous_var_nameX1058, unsigned long int anonymous_var_nameX1059, struct __locale_struct* anonymous_var_nameX1060);

int wcwidth(unsigned int anonymous_var_nameX1061);

int wcswidth(const unsigned int* anonymous_var_nameX1062, unsigned long int anonymous_var_nameX1063);

int iswalnum(unsigned int anonymous_var_nameX1064);

int iswalpha(unsigned int anonymous_var_nameX1065);

int iswblank(unsigned int anonymous_var_nameX1066);

int iswcntrl(unsigned int anonymous_var_nameX1067);

int iswdigit(unsigned int anonymous_var_nameX1068);

int iswgraph(unsigned int anonymous_var_nameX1069);

int iswlower(unsigned int anonymous_var_nameX1070);

int iswprint(unsigned int anonymous_var_nameX1071);

int iswpunct(unsigned int anonymous_var_nameX1072);

int iswspace(unsigned int anonymous_var_nameX1073);

int iswupper(unsigned int anonymous_var_nameX1074);

int iswxdigit(unsigned int anonymous_var_nameX1075);

int iswctype(unsigned int anonymous_var_nameX1076, unsigned long int anonymous_var_nameX1077);

unsigned int towlower(unsigned int anonymous_var_nameX1078);

unsigned int towupper(unsigned int anonymous_var_nameX1079);

unsigned long int wctype(const char* anonymous_var_nameX1080);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1082)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1084)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1086)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1087);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1088);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1089);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1090);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1091)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1092);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1093);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1094);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1095);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1096);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1097);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1098);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1099);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1100);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1101);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1102);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1103);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1104);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1105);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1106);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1107);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1108);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1109);

char* GC_strdup(const char* anonymous_var_nameX1110);

char* GC_strndup(const char* anonymous_var_nameX1111, unsigned long int anonymous_var_nameX1112);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1113);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1114);

void* GC_memalign(unsigned long int anonymous_var_nameX1115, unsigned long int anonymous_var_nameX1116);

int GC_posix_memalign(void** anonymous_var_nameX1117, unsigned long int anonymous_var_nameX1118, unsigned long int anonymous_var_nameX1119);

void GC_free(void* anonymous_var_nameX1120);

void GC_change_stubborn(const void* anonymous_var_nameX1121);

void GC_end_stubborn_change(const void* anonymous_var_nameX1122);

void* GC_base(void* anonymous_var_nameX1123);

int GC_is_heap_ptr(const void* anonymous_var_nameX1124);

unsigned long int GC_size(const void* anonymous_var_nameX1125);

void* GC_realloc(void* anonymous_var_nameX1126, unsigned long int anonymous_var_nameX1127);

int GC_expand_hp(unsigned long int anonymous_var_nameX1128);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1129);

void GC_exclude_static_roots(void* anonymous_var_nameX1130, void* anonymous_var_nameX1131);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1132, void* anonymous_var_nameX1133);

void GC_remove_roots(void* anonymous_var_nameX1134, void* anonymous_var_nameX1135);

void GC_register_displacement(unsigned long int anonymous_var_nameX1136);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1137);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1138)());

void GC_set_stop_func(int (*anonymous_var_nameX1139)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1140, unsigned long int* anonymous_var_nameX1141, unsigned long int* anonymous_var_nameX1142, unsigned long int* anonymous_var_nameX1143, unsigned long int* anonymous_var_nameX1144);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1145, unsigned long int anonymous_var_nameX1146);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1147);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1148);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1149);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1150);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1151, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1152, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1153, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1154, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1155, unsigned long int anonymous_var_nameX1156, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1157, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1158, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1159, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1160, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1161);

void* GC_debug_realloc(void* anonymous_var_nameX1162, unsigned long int anonymous_var_nameX1163, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1164);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1165);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1166);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1167, unsigned long int anonymous_var_nameX1168);

void GC_register_finalizer(void* anonymous_var_nameX1171, void (*anonymous_var_nameX1172)(void*,void*), void* anonymous_var_nameX1173, void (*anonymous_var_nameX1174)(void*,void*), void** anonymous_var_nameX1175);

void GC_debug_register_finalizer(void* anonymous_var_nameX1176, void (*anonymous_var_nameX1177)(void*,void*), void* anonymous_var_nameX1178, void (*anonymous_var_nameX1179)(void*,void*), void** anonymous_var_nameX1180);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1181, void (*anonymous_var_nameX1182)(void*,void*), void* anonymous_var_nameX1183, void (*anonymous_var_nameX1184)(void*,void*), void** anonymous_var_nameX1185);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1186, void (*anonymous_var_nameX1187)(void*,void*), void* anonymous_var_nameX1188, void (*anonymous_var_nameX1189)(void*,void*), void** anonymous_var_nameX1190);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1191, void (*anonymous_var_nameX1192)(void*,void*), void* anonymous_var_nameX1193, void (*anonymous_var_nameX1194)(void*,void*), void** anonymous_var_nameX1195);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1196, void (*anonymous_var_nameX1197)(void*,void*), void* anonymous_var_nameX1198, void (*anonymous_var_nameX1199)(void*,void*), void** anonymous_var_nameX1200);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1201, void (*anonymous_var_nameX1202)(void*,void*), void* anonymous_var_nameX1203, void (*anonymous_var_nameX1204)(void*,void*), void** anonymous_var_nameX1205);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1206, void (*anonymous_var_nameX1207)(void*,void*), void* anonymous_var_nameX1208, void (*anonymous_var_nameX1209)(void*,void*), void** anonymous_var_nameX1210);

int GC_register_disappearing_link(void** anonymous_var_nameX1211);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1212, const void* anonymous_var_nameX1213);

int GC_move_disappearing_link(void** anonymous_var_nameX1214, void** anonymous_var_nameX1215);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1216);

int GC_register_long_link(void** anonymous_var_nameX1217, const void* anonymous_var_nameX1218);

int GC_move_long_link(void** anonymous_var_nameX1219, void** anonymous_var_nameX1220);

int GC_unregister_long_link(void** anonymous_var_nameX1221);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1223)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1224, int anonymous_var_nameX1225);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1227)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1228);

void GC_set_warn_proc(void (*anonymous_var_nameX1231)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1232, unsigned long int anonymous_var_nameX1233);

void GC_set_log_fd(int anonymous_var_nameX1234);

void GC_set_abort_func(void (*anonymous_var_nameX1236)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1238)(void*), void* anonymous_var_nameX1239);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1242)(struct GC_stack_base*,void*), void* anonymous_var_nameX1243);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1244)(void*), void* anonymous_var_nameX1245);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1246)(void*), void* anonymous_var_nameX1247);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1248);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1249);

void GC_set_stackbottom(void* anonymous_var_nameX1250, const struct GC_stack_base* anonymous_var_nameX1251);

void* GC_same_obj(void* anonymous_var_nameX1252, void* anonymous_var_nameX1253);

void* GC_pre_incr(void** anonymous_var_nameX1254, long anonymous_var_nameX1255);

void* GC_post_incr(void** anonymous_var_nameX1256, long anonymous_var_nameX1257);

void* GC_is_visible(void* anonymous_var_nameX1258);

void* GC_is_valid_displacement(void* anonymous_var_nameX1259);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1260);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1261, const void* anonymous_var_nameX1262);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1263, const void* anonymous_var_nameX1264);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1285);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1289)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1290);

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
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "smart_pointer$1char");
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
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "smart_pointer$1char");
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
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "smart_pointer$1short");
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
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "smart_pointer$1int");
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
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "smart_pointer$1long");
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
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __result10__;
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
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
unsigned int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = __result_obj__ = charp_to_wstring(str);
    return __result23__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = __result_obj__ = wchar_tp_to_string(wstr);
    return __result24__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__;
unsigned int* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    return __result25__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = wchar_tp_length(str);
    return __result26__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
unsigned int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = __result_obj__ = wchar_tp_delete(str,head,tail);
    return __result27__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = wchar_tp_index(str,search_str,default_value);
    return __result28__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = wchar_tp_rindex(str,search_str,default_value);
    return __result29__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
unsigned int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = __result_obj__ = wchar_tp_reverse(str);
    return __result30__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result31__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
unsigned int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = __result_obj__ = wchar_tp_printable(str);
    return __result32__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
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

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional10;
unsigned int* __result60__;
int len_16;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
unsigned int* __result61__;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
unsigned int* __result62__;
_Bool _if_conditional17;
unsigned int* __result63__;
unsigned int* result_17;
unsigned int* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_16, 0, sizeof(int));
memset(&result_17, 0, sizeof(unsigned int*));
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
    result_17=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str-gc.c", 171, "int");
    memcpy(result_17,str+head,sizeof(unsigned int)*(tail-head));
    result_17[tail-head]=0;
    __result64__ = __result_obj__ = result_17;
    return __result64__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional18;
unsigned int* __result65__;
int len_18;
unsigned int* wstr_19;
int ret_20;
_Bool _if_conditional19;
unsigned int* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_18, 0, sizeof(int));
memset(&wstr_19, 0, sizeof(unsigned int*));
memset(&ret_20, 0, sizeof(int));
    if(_if_conditional18=str==((void*)0),    _if_conditional18) {
        __result65__ = __result_obj__ = ((void*)0);
        return __result65__;
    }
    len_18=strlen(str);
    wstr_19=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_18+1)), "libcomelang2-str-gc.c", 186, "int");
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
                    litem_84=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph");
                    litem_84->prev=((void*)0);
                    litem_84->next=((void*)0);
                    litem_84->item=item;
                    self->tail=litem_84;
                    self->head=litem_84;
                }
                else {
                    if(_if_conditional33=self->len==1,                    _if_conditional33) {
                        litem_85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph");
                        litem_85->prev=self->head;
                        litem_85->next=((void*)0);
                        litem_85->item=item;
                        self->tail=litem_85;
                        self->head->next=litem_85;
                    }
                    else {
                        litem_86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph");
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

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
int len_196;
char* result_197;
_Bool _if_conditional79;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_196, 0, sizeof(int));
memset(&result_197, 0, sizeof(char*));
    len_196=4*(wcslen(wstr)+1);
    result_197=(char*)come_calloc(1, sizeof(char)*(1*(len_196)), "libcomelang2-str-gc.c", 910, "char");
    if(_if_conditional79=wcstombs(result_197,wstr,len_196)<0,    _if_conditional79) {
        strncpy(result_197,"",len_196);
    }
    __result104__ = __result_obj__ = result_197;
    return __result104__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
unsigned int* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = __result_obj__ = __builtin_wstring(str);
    return __result105__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = wcslen(str);
    return __result106__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
int len_198;
_Bool _if_conditional80;
unsigned int* __result107__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
unsigned int* __result108__;
_Bool _if_conditional85;
unsigned int* sub_str_199;
unsigned int* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_198, 0, sizeof(int));
memset(&sub_str_199, 0, sizeof(unsigned int*));
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
    memcpy(str+head,sub_str_199,sizeof(unsigned int)*(wstring_length(sub_str_199)+1));
    __result109__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    return __result109__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* head_200;
_Bool _if_conditional86;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_200, 0, sizeof(unsigned int*));
    head_200=wcsstr(str,search_str);
    if(_if_conditional86=head_200==((void*)0),    _if_conditional86) {
        __result110__ = default_value;
        return __result110__;
    }
    __result111__ = head_200-str;
    return __result111__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int len_201;
unsigned int* p_202;
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
memset(&p_202, 0, sizeof(unsigned int*));
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

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
int len_206;
unsigned int* result_207;
int i_208;
unsigned int* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_206, 0, sizeof(int));
memset(&result_207, 0, sizeof(unsigned int*));
memset(&i_208, 0, sizeof(int));
    len_206=wcslen(str);
    result_207=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_206+1)), "libcomelang2-str-gc.c", 1010, "int");
    for(    i_208=0;    i_208<len_206;    i_208++    ){
        result_207[i_208]=str[len_206-i_208-1];
    }
    result_207[len_206]=0;
    __result114__ = __result_obj__ = result_207;
    return __result114__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
int len_209;
unsigned int* result_210;
int i_211;
unsigned int* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_209, 0, sizeof(int));
memset(&result_210, 0, sizeof(unsigned int*));
memset(&i_211, 0, sizeof(int));
    len_209=wcslen(str)*n+1;
    result_210=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_209)), "libcomelang2-str-gc.c", 1025, "int");
    result_210[0]=0;
    for(    i_211=0;    i_211<n;    i_211++    ){
        wcscat(result_210,str);
    }
    __result115__ = __result_obj__ = result_210;
    return __result115__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
int len_212;
unsigned int* result_213;
int n_214;
int i_215;
unsigned int c_216;
_Bool _if_conditional89;
unsigned int* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_212, 0, sizeof(int));
memset(&result_213, 0, sizeof(unsigned int*));
memset(&n_214, 0, sizeof(int));
memset(&i_215, 0, sizeof(int));
memset(&c_216, 0, sizeof(unsigned int));
    len_212=wchar_tp_length(str);
    result_213=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_212*2+1)), "libcomelang2-str-gc.c", 1039, "int");
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

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = wcscmp(left,right);
    return __result122__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
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

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = left==right;
    return __result125__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result126__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
unsigned int* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result127__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = wcscmp(left,right)==0;
    return __result128__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = wcscmp(left,right)==0;
    return __result129__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = wcscmp(left,right)!=0;
    return __result130__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
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

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned int* result_237;
unsigned int* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_237, 0, sizeof(unsigned int*));
    result_237=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1203, "int");
    wcscpy(result_237,left);
    wcscat(result_237,right);
    __result134__ = __result_obj__ = result_237;
    return __result134__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
unsigned int* result_238;
unsigned int* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_238, 0, sizeof(unsigned int*));
    result_238=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1213, "int");
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

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
int result_476;
unsigned int* p_477;
_Bool _while_condtional24;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_476, 0, sizeof(int));
memset(&p_477, 0, sizeof(unsigned int*));
    result_476=0;
    p_477=value;
    while(_while_condtional24=*p_477,    _while_condtional24) {
        result_476+=(*p_477);
        p_477++;
    }
    __result161__ = result_476;
    return __result161__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = wcscmp(left,right)==0;
    return __result163__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = left==right;
    return __result165__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = left!=right;
    return __result166__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
unsigned int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = value;
    return __result167__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = left==right;
    return __result168__;
}

char* wchar_t_to_string(unsigned int wc){
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

