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
struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};
struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX618, int anonymous_var_nameX619, const char** anonymous_var_nameX620, int* anonymous_var_nameX621, const unsigned char* anonymous_var_nameX622);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX623, int anonymous_var_nameX624, const char** anonymous_var_nameX625, int* anonymous_var_nameX626, const unsigned char* anonymous_var_nameX627);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX628, int anonymous_var_nameX629, const char** anonymous_var_nameX630, int* anonymous_var_nameX631, const unsigned char* anonymous_var_nameX632);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX633, int anonymous_var_nameX634, int* anonymous_var_nameX635, const char** anonymous_var_nameX636, int* anonymous_var_nameX637, const unsigned char* anonymous_var_nameX638);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX639, int anonymous_var_nameX640, int* anonymous_var_nameX641, const char** anonymous_var_nameX642, int* anonymous_var_nameX643, const unsigned char* anonymous_var_nameX644);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX645, int anonymous_var_nameX646, int* anonymous_var_nameX647, const char** anonymous_var_nameX648, int* anonymous_var_nameX649, const unsigned char* anonymous_var_nameX650);

int pcre_config(int anonymous_var_nameX651, void* anonymous_var_nameX652);

int pcre16_config(int anonymous_var_nameX653, void* anonymous_var_nameX654);

int pcre32_config(int anonymous_var_nameX655, void* anonymous_var_nameX656);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX657, const char* anonymous_var_nameX658, int* anonymous_var_nameX659, int anonymous_var_nameX660, const char* anonymous_var_nameX661, char* anonymous_var_nameX662, int anonymous_var_nameX663);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX664, const unsigned short int* anonymous_var_nameX665, int* anonymous_var_nameX666, int anonymous_var_nameX667, const unsigned short int* anonymous_var_nameX668, unsigned short int* anonymous_var_nameX669, int anonymous_var_nameX670);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX671, const unsigned int* anonymous_var_nameX672, int* anonymous_var_nameX673, int anonymous_var_nameX674, const unsigned int* anonymous_var_nameX675, unsigned int* anonymous_var_nameX676, int anonymous_var_nameX677);

int pcre_copy_substring(const char* anonymous_var_nameX678, int* anonymous_var_nameX679, int anonymous_var_nameX680, int anonymous_var_nameX681, char* anonymous_var_nameX682, int anonymous_var_nameX683);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX684, int* anonymous_var_nameX685, int anonymous_var_nameX686, int anonymous_var_nameX687, unsigned short int* anonymous_var_nameX688, int anonymous_var_nameX689);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX690, int* anonymous_var_nameX691, int anonymous_var_nameX692, int anonymous_var_nameX693, unsigned int* anonymous_var_nameX694, int anonymous_var_nameX695);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX696, const struct pcre_extra* anonymous_var_nameX697, const char* anonymous_var_nameX698, int anonymous_var_nameX699, int anonymous_var_nameX700, int anonymous_var_nameX701, int* anonymous_var_nameX702, int anonymous_var_nameX703, int* anonymous_var_nameX704, int anonymous_var_nameX705);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX706, const struct pcre16_extra* anonymous_var_nameX707, const unsigned short int* anonymous_var_nameX708, int anonymous_var_nameX709, int anonymous_var_nameX710, int anonymous_var_nameX711, int* anonymous_var_nameX712, int anonymous_var_nameX713, int* anonymous_var_nameX714, int anonymous_var_nameX715);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX716, const struct pcre32_extra* anonymous_var_nameX717, const unsigned int* anonymous_var_nameX718, int anonymous_var_nameX719, int anonymous_var_nameX720, int anonymous_var_nameX721, int* anonymous_var_nameX722, int anonymous_var_nameX723, int* anonymous_var_nameX724, int anonymous_var_nameX725);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX726, const struct pcre_extra* anonymous_var_nameX727, const char* anonymous_var_nameX728, int anonymous_var_nameX729, int anonymous_var_nameX730, int anonymous_var_nameX731, int* anonymous_var_nameX732, int anonymous_var_nameX733);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX734, const struct pcre16_extra* anonymous_var_nameX735, const unsigned short int* anonymous_var_nameX736, int anonymous_var_nameX737, int anonymous_var_nameX738, int anonymous_var_nameX739, int* anonymous_var_nameX740, int anonymous_var_nameX741);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX742, const struct pcre32_extra* anonymous_var_nameX743, const unsigned int* anonymous_var_nameX744, int anonymous_var_nameX745, int anonymous_var_nameX746, int anonymous_var_nameX747, int* anonymous_var_nameX748, int anonymous_var_nameX749);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX750, const struct pcre_extra* anonymous_var_nameX751, const char* anonymous_var_nameX752, int anonymous_var_nameX753, int anonymous_var_nameX754, int anonymous_var_nameX755, int* anonymous_var_nameX756, int anonymous_var_nameX757, struct real_pcre_jit_stack* anonymous_var_nameX758);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX759, const struct pcre16_extra* anonymous_var_nameX760, const unsigned short int* anonymous_var_nameX761, int anonymous_var_nameX762, int anonymous_var_nameX763, int anonymous_var_nameX764, int* anonymous_var_nameX765, int anonymous_var_nameX766, struct real_pcre16_jit_stack* anonymous_var_nameX767);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX768, const struct pcre32_extra* anonymous_var_nameX769, const unsigned int* anonymous_var_nameX770, int anonymous_var_nameX771, int anonymous_var_nameX772, int anonymous_var_nameX773, int* anonymous_var_nameX774, int anonymous_var_nameX775, struct real_pcre32_jit_stack* anonymous_var_nameX776);

void pcre_free_substring(const char* anonymous_var_nameX777);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX778);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX779);

void pcre_free_substring_list(const char** anonymous_var_nameX780);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX781);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX782);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX783, const struct pcre_extra* anonymous_var_nameX784, int anonymous_var_nameX785, void* anonymous_var_nameX786);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX787, const struct pcre16_extra* anonymous_var_nameX788, int anonymous_var_nameX789, void* anonymous_var_nameX790);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX791, const struct pcre32_extra* anonymous_var_nameX792, int anonymous_var_nameX793, void* anonymous_var_nameX794);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX795, const char* anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798, const char* anonymous_var_nameX799, const char** anonymous_var_nameX800);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX801, const unsigned short int* anonymous_var_nameX802, int* anonymous_var_nameX803, int anonymous_var_nameX804, const unsigned short int* anonymous_var_nameX805, const unsigned short int** anonymous_var_nameX806);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX807, const unsigned int* anonymous_var_nameX808, int* anonymous_var_nameX809, int anonymous_var_nameX810, const unsigned int* anonymous_var_nameX811, const unsigned int** anonymous_var_nameX812);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX813, const char* anonymous_var_nameX814);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX815, const unsigned short int* anonymous_var_nameX816);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX817, const unsigned int* anonymous_var_nameX818);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX819, const char* anonymous_var_nameX820, char** anonymous_var_nameX821, char** anonymous_var_nameX822);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX823, const unsigned short int* anonymous_var_nameX824, unsigned short int** anonymous_var_nameX825, unsigned short int** anonymous_var_nameX826);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX827, const unsigned int* anonymous_var_nameX828, unsigned int** anonymous_var_nameX829, unsigned int** anonymous_var_nameX830);

int pcre_get_substring(const char* anonymous_var_nameX831, int* anonymous_var_nameX832, int anonymous_var_nameX833, int anonymous_var_nameX834, const char** anonymous_var_nameX835);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX836, int* anonymous_var_nameX837, int anonymous_var_nameX838, int anonymous_var_nameX839, const unsigned short int** anonymous_var_nameX840);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX841, int* anonymous_var_nameX842, int anonymous_var_nameX843, int anonymous_var_nameX844, const unsigned int** anonymous_var_nameX845);

int pcre_get_substring_list(const char* anonymous_var_nameX846, int* anonymous_var_nameX847, int anonymous_var_nameX848, const char*** anonymous_var_nameX849);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX850, int* anonymous_var_nameX851, int anonymous_var_nameX852, const unsigned short int*** anonymous_var_nameX853);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX854, int* anonymous_var_nameX855, int anonymous_var_nameX856, const unsigned int*** anonymous_var_nameX857);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX858, int anonymous_var_nameX859);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX860, int anonymous_var_nameX861);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX862, int anonymous_var_nameX863);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX864, int anonymous_var_nameX865, const char** anonymous_var_nameX866);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX867, int anonymous_var_nameX868, const char** anonymous_var_nameX869);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX870, int anonymous_var_nameX871, const char** anonymous_var_nameX872);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX873);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX874);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX875);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX876, struct pcre_extra* anonymous_var_nameX877, const unsigned char* anonymous_var_nameX878);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX879, struct pcre16_extra* anonymous_var_nameX880, const unsigned char* anonymous_var_nameX881);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX882, struct pcre32_extra* anonymous_var_nameX883, const unsigned char* anonymous_var_nameX884);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX885, const unsigned short int* anonymous_var_nameX886, int anonymous_var_nameX887, int* anonymous_var_nameX888, int anonymous_var_nameX889);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX890, const unsigned int* anonymous_var_nameX891, int anonymous_var_nameX892, int* anonymous_var_nameX893, int anonymous_var_nameX894);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX895, int anonymous_var_nameX896);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX897, int anonymous_var_nameX898);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX899, int anonymous_var_nameX900);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX901);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX902);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX903);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX904, struct real_pcre_jit_stack* (*anonymous_var_nameX905)(void*), void* anonymous_var_nameX906);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX907, struct real_pcre16_jit_stack* (*anonymous_var_nameX908)(void*), void* anonymous_var_nameX909);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX910, struct real_pcre32_jit_stack* (*anonymous_var_nameX911)(void*), void* anonymous_var_nameX912);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

unsigned int* wcscpy(unsigned int* anonymous_var_nameX913, const unsigned int* anonymous_var_nameX914);

unsigned int* wcsncpy(unsigned int* anonymous_var_nameX915, const unsigned int* anonymous_var_nameX916, unsigned long int anonymous_var_nameX917);

unsigned int* wcscat(unsigned int* anonymous_var_nameX918, const unsigned int* anonymous_var_nameX919);

unsigned int* wcsncat(unsigned int* anonymous_var_nameX920, const unsigned int* anonymous_var_nameX921, unsigned long int anonymous_var_nameX922);

int wcscmp(const unsigned int* anonymous_var_nameX923, const unsigned int* anonymous_var_nameX924);

int wcsncmp(const unsigned int* anonymous_var_nameX925, const unsigned int* anonymous_var_nameX926, unsigned long int anonymous_var_nameX927);

int wcscoll(const unsigned int* anonymous_var_nameX928, const unsigned int* anonymous_var_nameX929);

unsigned long int wcsxfrm(unsigned int* anonymous_var_nameX930, const unsigned int* anonymous_var_nameX931, unsigned long int anonymous_var_nameX932);

unsigned int* wcschr(const unsigned int* anonymous_var_nameX933, unsigned int anonymous_var_nameX934);

unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX935, unsigned int anonymous_var_nameX936);

unsigned long int wcscspn(const unsigned int* anonymous_var_nameX937, const unsigned int* anonymous_var_nameX938);

unsigned long int wcsspn(const unsigned int* anonymous_var_nameX939, const unsigned int* anonymous_var_nameX940);

unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX941, const unsigned int* anonymous_var_nameX942);

unsigned int* wcstok(unsigned int* anonymous_var_nameX943, const unsigned int* anonymous_var_nameX944, unsigned int** anonymous_var_nameX945);

unsigned long int wcslen(const unsigned int* anonymous_var_nameX946);

unsigned int* wcsstr(const unsigned int* anonymous_var_nameX947, const unsigned int* anonymous_var_nameX948);

unsigned int* wcswcs(const unsigned int* anonymous_var_nameX949, const unsigned int* anonymous_var_nameX950);

unsigned int* wmemchr(const unsigned int* anonymous_var_nameX951, unsigned int anonymous_var_nameX952, unsigned long int anonymous_var_nameX953);

int wmemcmp(const unsigned int* anonymous_var_nameX954, const unsigned int* anonymous_var_nameX955, unsigned long int anonymous_var_nameX956);

unsigned int* wmemcpy(unsigned int* anonymous_var_nameX957, const unsigned int* anonymous_var_nameX958, unsigned long int anonymous_var_nameX959);

unsigned int* wmemmove(unsigned int* anonymous_var_nameX960, const unsigned int* anonymous_var_nameX961, unsigned long int anonymous_var_nameX962);

unsigned int* wmemset(unsigned int* anonymous_var_nameX963, unsigned int anonymous_var_nameX964, unsigned long int anonymous_var_nameX965);

unsigned int btowc(int anonymous_var_nameX966);

int wctob(unsigned int anonymous_var_nameX967);

int mbsinit(const struct __mbstate_t* anonymous_var_nameX968);

unsigned long int mbrtowc(unsigned int* anonymous_var_nameX969, const char* anonymous_var_nameX970, unsigned long int anonymous_var_nameX971, struct __mbstate_t* anonymous_var_nameX972);

unsigned long int wcrtomb(char* anonymous_var_nameX973, unsigned int anonymous_var_nameX974, struct __mbstate_t* anonymous_var_nameX975);

unsigned long int mbrlen(const char* anonymous_var_nameX976, unsigned long int anonymous_var_nameX977, struct __mbstate_t* anonymous_var_nameX978);

unsigned long int mbsrtowcs(unsigned int* anonymous_var_nameX979, const char** anonymous_var_nameX980, unsigned long int anonymous_var_nameX981, struct __mbstate_t* anonymous_var_nameX982);

unsigned long int wcsrtombs(char* anonymous_var_nameX983, const unsigned int** anonymous_var_nameX984, unsigned long int anonymous_var_nameX985, struct __mbstate_t* anonymous_var_nameX986);

float wcstof(const unsigned int* anonymous_var_nameX987, unsigned int** anonymous_var_nameX988);

double wcstod(const unsigned int* anonymous_var_nameX989, unsigned int** anonymous_var_nameX990);

long double wcstold(const unsigned int* anonymous_var_nameX991, unsigned int** anonymous_var_nameX992);

long wcstol(const unsigned int* anonymous_var_nameX993, unsigned int** anonymous_var_nameX994, int anonymous_var_nameX995);

unsigned long int wcstoul(const unsigned int* anonymous_var_nameX996, unsigned int** anonymous_var_nameX997, int anonymous_var_nameX998);

long long wcstoll(const unsigned int* anonymous_var_nameX999, unsigned int** anonymous_var_nameX1000, int anonymous_var_nameX1001);

unsigned long long wcstoull(const unsigned int* anonymous_var_nameX1002, unsigned int** anonymous_var_nameX1003, int anonymous_var_nameX1004);

int fwide(struct _IO_FILE* anonymous_var_nameX1005, int anonymous_var_nameX1006);

int wprintf(const unsigned int* anonymous_var_nameX1007, ...);

int fwprintf(struct _IO_FILE* anonymous_var_nameX1008, const unsigned int* anonymous_var_nameX1009, ...);

int swprintf(unsigned int* anonymous_var_nameX1010, unsigned long int anonymous_var_nameX1011, const unsigned int* anonymous_var_nameX1012, ...);

int vwprintf(const unsigned int* anonymous_var_nameX1013, va_list anonymous_var_nameX1014);

int vfwprintf(struct _IO_FILE* anonymous_var_nameX1015, const unsigned int* anonymous_var_nameX1016, va_list anonymous_var_nameX1017);

int vswprintf(unsigned int* anonymous_var_nameX1018, unsigned long int anonymous_var_nameX1019, const unsigned int* anonymous_var_nameX1020, va_list anonymous_var_nameX1021);

int wscanf(const unsigned int* anonymous_var_nameX1022, ...);

int fwscanf(struct _IO_FILE* anonymous_var_nameX1023, const unsigned int* anonymous_var_nameX1024, ...);

int swscanf(const unsigned int* anonymous_var_nameX1025, const unsigned int* anonymous_var_nameX1026, ...);

int vwscanf(const unsigned int* anonymous_var_nameX1027, va_list anonymous_var_nameX1028);

int vfwscanf(struct _IO_FILE* anonymous_var_nameX1029, const unsigned int* anonymous_var_nameX1030, va_list anonymous_var_nameX1031);

int vswscanf(const unsigned int* anonymous_var_nameX1032, const unsigned int* anonymous_var_nameX1033, va_list anonymous_var_nameX1034);

unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX1035);

unsigned int getwc(struct _IO_FILE* anonymous_var_nameX1036);

unsigned int getwchar();

unsigned int fputwc(unsigned int anonymous_var_nameX1037, struct _IO_FILE* anonymous_var_nameX1038);

unsigned int putwc(unsigned int anonymous_var_nameX1039, struct _IO_FILE* anonymous_var_nameX1040);

unsigned int putwchar(unsigned int anonymous_var_nameX1041);

unsigned int* fgetws(unsigned int* anonymous_var_nameX1042, int anonymous_var_nameX1043, struct _IO_FILE* anonymous_var_nameX1044);

int fputws(const unsigned int* anonymous_var_nameX1045, struct _IO_FILE* anonymous_var_nameX1046);

unsigned int ungetwc(unsigned int anonymous_var_nameX1047, struct _IO_FILE* anonymous_var_nameX1048);

unsigned long int wcsftime(unsigned int* anonymous_var_nameX1049, unsigned long int anonymous_var_nameX1050, const unsigned int* anonymous_var_nameX1051, const struct tm* anonymous_var_nameX1052);

unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX1053);

unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX1054);

unsigned int getwchar_unlocked();

unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX1055, struct _IO_FILE* anonymous_var_nameX1056);

unsigned int putwc_unlocked(unsigned int anonymous_var_nameX1057, struct _IO_FILE* anonymous_var_nameX1058);

unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX1059);

unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX1060, int anonymous_var_nameX1061, struct _IO_FILE* anonymous_var_nameX1062);

int fputws_unlocked(const unsigned int* anonymous_var_nameX1063, struct _IO_FILE* anonymous_var_nameX1064);

unsigned long int wcsftime_l(unsigned int* anonymous_var_nameX1065, unsigned long int anonymous_var_nameX1066, const unsigned int* anonymous_var_nameX1067, const struct tm* anonymous_var_nameX1068, struct __locale_struct* anonymous_var_nameX1069);

struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX1070, unsigned long int* anonymous_var_nameX1071);

unsigned long int mbsnrtowcs(unsigned int* anonymous_var_nameX1072, const char** anonymous_var_nameX1073, unsigned long int anonymous_var_nameX1074, unsigned long int anonymous_var_nameX1075, struct __mbstate_t* anonymous_var_nameX1076);

unsigned long int wcsnrtombs(char* anonymous_var_nameX1077, const unsigned int** anonymous_var_nameX1078, unsigned long int anonymous_var_nameX1079, unsigned long int anonymous_var_nameX1080, struct __mbstate_t* anonymous_var_nameX1081);

unsigned int* wcsdup(const unsigned int* anonymous_var_nameX1082);

unsigned long int wcsnlen(const unsigned int* anonymous_var_nameX1083, unsigned long int anonymous_var_nameX1084);

unsigned int* wcpcpy(unsigned int* anonymous_var_nameX1085, const unsigned int* anonymous_var_nameX1086);

unsigned int* wcpncpy(unsigned int* anonymous_var_nameX1087, const unsigned int* anonymous_var_nameX1088, unsigned long int anonymous_var_nameX1089);

int wcscasecmp(const unsigned int* anonymous_var_nameX1090, const unsigned int* anonymous_var_nameX1091);

int wcscasecmp_l(const unsigned int* anonymous_var_nameX1092, const unsigned int* anonymous_var_nameX1093, struct __locale_struct* anonymous_var_nameX1094);

int wcsncasecmp(const unsigned int* anonymous_var_nameX1095, const unsigned int* anonymous_var_nameX1096, unsigned long int anonymous_var_nameX1097);

int wcsncasecmp_l(const unsigned int* anonymous_var_nameX1098, const unsigned int* anonymous_var_nameX1099, unsigned long int anonymous_var_nameX1100, struct __locale_struct* anonymous_var_nameX1101);

int wcscoll_l(const unsigned int* anonymous_var_nameX1102, const unsigned int* anonymous_var_nameX1103, struct __locale_struct* anonymous_var_nameX1104);

unsigned long int wcsxfrm_l(unsigned int* anonymous_var_nameX1105, const unsigned int* anonymous_var_nameX1106, unsigned long int anonymous_var_nameX1107, struct __locale_struct* anonymous_var_nameX1108);

int wcwidth(unsigned int anonymous_var_nameX1109);

int wcswidth(const unsigned int* anonymous_var_nameX1110, unsigned long int anonymous_var_nameX1111);

int iswalnum(unsigned int anonymous_var_nameX1112);

int iswalpha(unsigned int anonymous_var_nameX1113);

int iswblank(unsigned int anonymous_var_nameX1114);

int iswcntrl(unsigned int anonymous_var_nameX1115);

int iswdigit(unsigned int anonymous_var_nameX1116);

int iswgraph(unsigned int anonymous_var_nameX1117);

int iswlower(unsigned int anonymous_var_nameX1118);

int iswprint(unsigned int anonymous_var_nameX1119);

int iswpunct(unsigned int anonymous_var_nameX1120);

int iswspace(unsigned int anonymous_var_nameX1121);

int iswupper(unsigned int anonymous_var_nameX1122);

int iswxdigit(unsigned int anonymous_var_nameX1123);

int iswctype(unsigned int anonymous_var_nameX1124, unsigned long int anonymous_var_nameX1125);

unsigned int towlower(unsigned int anonymous_var_nameX1126);

unsigned int towupper(unsigned int anonymous_var_nameX1127);

unsigned long int wctype(const char* anonymous_var_nameX1128);

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1142)(unsigned long int));

void* (*GC_get_oom_fn())(unsigned long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1144)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1146)(enum anonymous_typeY5));

void (*GC_get_on_collection_event())(enum anonymous_typeY5);

void GC_set_find_leak(int anonymous_var_nameX1147);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1148);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1149);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1150);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1151)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1152);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1153);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1154);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1155);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1156);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1157);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1158);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1159);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1160);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1161);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1162);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(unsigned long int anonymous_var_nameX1163);

unsigned long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1164);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1165);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1166);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1167);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(unsigned long int anonymous_var_nameX1168);

void* GC_malloc_atomic(unsigned long int anonymous_var_nameX1169);

char* GC_strdup(const char* anonymous_var_nameX1170);

char* GC_strndup(const char* anonymous_var_nameX1171, unsigned long int anonymous_var_nameX1172);

void* GC_malloc_uncollectable(unsigned long int anonymous_var_nameX1173);

void* GC_malloc_stubborn(unsigned long int anonymous_var_nameX1174);

void* GC_memalign(unsigned long int anonymous_var_nameX1175, unsigned long int anonymous_var_nameX1176);

int GC_posix_memalign(void** anonymous_var_nameX1177, unsigned long int anonymous_var_nameX1178, unsigned long int anonymous_var_nameX1179);

void GC_free(void* anonymous_var_nameX1180);

void GC_change_stubborn(const void* anonymous_var_nameX1181);

void GC_end_stubborn_change(const void* anonymous_var_nameX1182);

void* GC_base(void* anonymous_var_nameX1183);

int GC_is_heap_ptr(const void* anonymous_var_nameX1184);

unsigned long int GC_size(const void* anonymous_var_nameX1185);

void* GC_realloc(void* anonymous_var_nameX1186, unsigned long int anonymous_var_nameX1187);

int GC_expand_hp(unsigned long int anonymous_var_nameX1188);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1189);

void GC_exclude_static_roots(void* anonymous_var_nameX1190, void* anonymous_var_nameX1191);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1192, void* anonymous_var_nameX1193);

void GC_remove_roots(void* anonymous_var_nameX1194, void* anonymous_var_nameX1195);

void GC_register_displacement(unsigned long int anonymous_var_nameX1196);

void GC_debug_register_displacement(unsigned long int anonymous_var_nameX1197);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1198)());

void GC_set_stop_func(int (*anonymous_var_nameX1199)());

int (*GC_get_stop_func())();

unsigned long int GC_get_heap_size();

unsigned long int GC_get_free_bytes();

unsigned long int GC_get_unmapped_bytes();

unsigned long int GC_get_bytes_since_gc();

unsigned long int GC_get_expl_freed_bytes_since_gc();

unsigned long int GC_get_total_bytes();

unsigned long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1200, unsigned long int* anonymous_var_nameX1201, unsigned long int* anonymous_var_nameX1202, unsigned long int* anonymous_var_nameX1203, unsigned long int* anonymous_var_nameX1204);

unsigned long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1205, unsigned long int anonymous_var_nameX1206);

unsigned long int GC_get_size_map_at(int i);

unsigned long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1207);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1208);

void* GC_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1209);

void* GC_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1210);

void* GC_debug_malloc_atomic_uncollectable(unsigned long int anonymous_var_nameX1211, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc(unsigned long int anonymous_var_nameX1212, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic(unsigned long int anonymous_var_nameX1213, unsigned long int ra, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1214, unsigned long int ra, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1215, unsigned long int anonymous_var_nameX1216, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_uncollectable(unsigned long int anonymous_var_nameX1217, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_stubborn(unsigned long int anonymous_var_nameX1218, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(unsigned long int anonymous_var_nameX1219, unsigned long int ra, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(unsigned long int anonymous_var_nameX1220, unsigned long int ra, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1221);

void* GC_debug_realloc(void* anonymous_var_nameX1222, unsigned long int anonymous_var_nameX1223, unsigned long int ra, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1224);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1225);

void* GC_debug_malloc_replacement(unsigned long int anonymous_var_nameX1226);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1227, unsigned long int anonymous_var_nameX1228);

void GC_register_finalizer(void* anonymous_var_nameX1231, void (*anonymous_var_nameX1232)(void*,void*), void* anonymous_var_nameX1233, void (*anonymous_var_nameX1234)(void*,void*), void** anonymous_var_nameX1235);

void GC_debug_register_finalizer(void* anonymous_var_nameX1236, void (*anonymous_var_nameX1237)(void*,void*), void* anonymous_var_nameX1238, void (*anonymous_var_nameX1239)(void*,void*), void** anonymous_var_nameX1240);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1241, void (*anonymous_var_nameX1242)(void*,void*), void* anonymous_var_nameX1243, void (*anonymous_var_nameX1244)(void*,void*), void** anonymous_var_nameX1245);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1246, void (*anonymous_var_nameX1247)(void*,void*), void* anonymous_var_nameX1248, void (*anonymous_var_nameX1249)(void*,void*), void** anonymous_var_nameX1250);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1251, void (*anonymous_var_nameX1252)(void*,void*), void* anonymous_var_nameX1253, void (*anonymous_var_nameX1254)(void*,void*), void** anonymous_var_nameX1255);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1256, void (*anonymous_var_nameX1257)(void*,void*), void* anonymous_var_nameX1258, void (*anonymous_var_nameX1259)(void*,void*), void** anonymous_var_nameX1260);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1261, void (*anonymous_var_nameX1262)(void*,void*), void* anonymous_var_nameX1263, void (*anonymous_var_nameX1264)(void*,void*), void** anonymous_var_nameX1265);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1266, void (*anonymous_var_nameX1267)(void*,void*), void* anonymous_var_nameX1268, void (*anonymous_var_nameX1269)(void*,void*), void** anonymous_var_nameX1270);

int GC_register_disappearing_link(void** anonymous_var_nameX1271);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1272, const void* anonymous_var_nameX1273);

int GC_move_disappearing_link(void** anonymous_var_nameX1274, void** anonymous_var_nameX1275);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1276);

int GC_register_long_link(void** anonymous_var_nameX1277, const void* anonymous_var_nameX1278);

int GC_move_long_link(void** anonymous_var_nameX1279, void** anonymous_var_nameX1280);

int GC_unregister_long_link(void** anonymous_var_nameX1281);

void GC_set_toggleref_func(enum anonymous_typeY6 (*anonymous_var_nameX1283)(void*));

enum anonymous_typeY6 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1284, int anonymous_var_nameX1285);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1287)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1288);

void GC_set_warn_proc(void (*anonymous_var_nameX1291)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1292, unsigned long int anonymous_var_nameX1293);

void GC_set_log_fd(int anonymous_var_nameX1294);

void GC_set_abort_func(void (*anonymous_var_nameX1296)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1298)(void*), void* anonymous_var_nameX1299);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1302)(struct GC_stack_base*,void*), void* anonymous_var_nameX1303);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1304)(void*), void* anonymous_var_nameX1305);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1306)(void*), void* anonymous_var_nameX1307);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1308);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1309);

void GC_set_stackbottom(void* anonymous_var_nameX1310, const struct GC_stack_base* anonymous_var_nameX1311);

void* GC_same_obj(void* anonymous_var_nameX1312, void* anonymous_var_nameX1313);

void* GC_pre_incr(void** anonymous_var_nameX1314, long anonymous_var_nameX1315);

void* GC_post_incr(void** anonymous_var_nameX1316, long anonymous_var_nameX1317);

void* GC_is_visible(void* anonymous_var_nameX1318);

void* GC_is_valid_displacement(void* anonymous_var_nameX1319);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1320);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1321, const void* anonymous_var_nameX1322);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1323, const void* anonymous_var_nameX1324);

void* GC_malloc_many(unsigned long int anonymous_var_nameX1345);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1349)(const char*,void*,unsigned long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1350);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
    if(right_value0) { come_call_finalizer2(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value1) { come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0) { come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result2__;
    if(result_0) { come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
    if(right_value2) { come_call_finalizer2(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value3) { come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1) { come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result3__;
    if(result_1) { come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
    if(right_value4) { come_call_finalizer2(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value5) { come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2) { come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result4__;
    if(result_2) { come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
    if(right_value6) { come_call_finalizer2(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value7) { come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3) { come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result5__;
    if(result_3) { come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
    if(right_value8) { come_call_finalizer2(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value9) { come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4) { come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result6__;
    if(result_4) { come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value10;
unsigned int* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((unsigned int*)(right_value10=wchar_tp_substring(str,head,tail)));
    if(right_value10) { right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
    if(right_value11) { come_call_finalizer2(list$1charphp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result13__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value12;
struct list$1charph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result14__ = __result_obj__ = ((struct list$1charph*)(right_value12=charp_scan_block_count(self,reg,count,parent,block)));
    if(right_value12) { come_call_finalizer2(list$1charphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result14__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value13;
struct list$1charph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    __result15__ = __result_obj__ = ((struct list$1charph*)(right_value13=charp_split_block(self,reg,parent,block)));
    if(right_value13) { come_call_finalizer2(list$1charphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result15__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value14;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result16__ = __result_obj__ = ((struct list$1charph*)(right_value14=charp_split_block_count(self,reg,count,parent,block)));
    if(right_value14) { come_call_finalizer2(list$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result16__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value15;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
    __result17__ = __result_obj__ = ((struct list$1charph*)(right_value15=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    if(right_value15) { come_call_finalizer2(list$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result17__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value16;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
    __result18__ = __result_obj__ = ((char*)(right_value16=charp_strip(self)));
    if(right_value16) { right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result18__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value17;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value17=string_printable(str)));
    if(right_value17) { right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result19__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value18;
unsigned int* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
    __result20__ = __result_obj__ = ((unsigned int*)(right_value18=charp_to_wstring(str)));
    if(right_value18) { right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result20__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__;
void* right_value19;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value19=wchar_tp_to_string(wstr)));
    if(right_value19) { right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result21__;
}
static inline int wstring_length(unsigned int* str){
void* __result_obj__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = wchar_tp_length(str);
    return __result22__;
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
void* right_value20;
unsigned int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
    __result23__ = __result_obj__ = ((unsigned int*)(right_value20=wchar_tp_delete(str,head,tail)));
    if(right_value20) { right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result23__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = wchar_tp_index(str,search_str,default_value);
    return __result24__;
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = wchar_tp_rindex(str,search_str,default_value);
    return __result25__;
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__;
void* right_value21;
unsigned int* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
    __result26__ = __result_obj__ = ((unsigned int*)(right_value21=wchar_tp_reverse(str)));
    if(right_value21) { right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result26__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__;
void* right_value22;
unsigned int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
    __result27__ = __result_obj__ = ((unsigned int*)(right_value22=wchar_tp_multiply(str,n)));
    if(right_value22) { right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result27__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__;
void* right_value23;
unsigned int* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
    __result28__ = __result_obj__ = ((unsigned int*)(right_value23=wchar_tp_printable(str)));
    if(right_value23) { right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result28__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
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
    if(right_value24) { right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result33__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value25;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
    __result34__ = __result_obj__ = ((char*)(right_value25=charp_multiply(str,n)));
    if(right_value25) { right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result34__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value26;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
    __result35__ = __result_obj__ = ((char*)(right_value26=charp_sub(self,reg,replace)));
    if(right_value26) { right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result35__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value27;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value27=charp_sub_count(self,reg,replace,count)));
    if(right_value27) { right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result36__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value28;
struct list$1charph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
    __result37__ = __result_obj__ = ((struct list$1charph*)(right_value28=charp_split_str(self,str)));
    if(right_value28) { come_call_finalizer2(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result37__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value29;
struct list$1charph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
    __result38__ = __result_obj__ = ((struct list$1charph*)(right_value29=charp_scan(self,reg)));
    if(right_value29) { come_call_finalizer2(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result38__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value30;
struct list$1charph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
    __result39__ = __result_obj__ = ((struct list$1charph*)(right_value30=charp_split(self,reg)));
    if(right_value30) { come_call_finalizer2(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
    if(right_value31) { come_call_finalizer2(list$1charphp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
    if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result44__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value33;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
    __result45__ = __result_obj__ = ((char*)(right_value33=charp_sub_block_count(self,reg,count,parent,block)));
    if(right_value33) { right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result45__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value35;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result47__ = __result_obj__ = ((char*)(right_value35=string_chomp(str)));
    if(right_value35) { right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result47__;
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory) { come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
            if(prev_it_6) { come_call_finalizer2(list_item$1charphp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional5=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional5) {
                    if(self->item) { self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
}


































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_7;
int erro_ofs_8;
int options_9;
void* right_value36;
char* __dec_obj6;
_Bool _if_conditional6;
struct come_regex* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_8, 0, sizeof(int));
memset(&options_9, 0, sizeof(int));
right_value36 = (void*)0;
    options_9=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj6=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value36=__builtin_string(str))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value36) { right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
    __result48__ = __result_obj__ = self;
    if(self) { come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result48__;
    if(self) { come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional7=reg&&reg->str,    _if_conditional7) {
        if(reg->str) { reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
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
    if(right_value37) { come_call_finalizer2(come_regex_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value38) { come_call_finalizer2(come_regex_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
    if(right_value39) { come_call_finalizer2(come_regex_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value40) { come_call_finalizer2(come_regex_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    return __result50__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional9;
struct come_regex* __result51__;
void* right_value41;
struct come_regex* result_10;
void* right_value42;
char* __dec_obj7;
const char* err_11;
int erro_ofs_12;
_Bool _if_conditional10;
struct come_regex* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value41 = (void*)0;
memset(&result_10, 0, sizeof(struct come_regex*));
right_value42 = (void*)0;
memset(&erro_ofs_12, 0, sizeof(int));
    if(_if_conditional9=reg==((void*)0),    _if_conditional9) {
        __result51__ = __result_obj__ = ((void*)0);
        return __result51__;
    }
    result_10=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value41=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 80, "struct come_regex"))));
    if(right_value41) { come_call_finalizer2(come_regex_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    __dec_obj7=result_10->str;
    result_10->str=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(reg->str))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value42) { right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
    __result52__ = __result_obj__ = result_10;
    if(result_10) { come_call_finalizer2(come_regex_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result52__;
    if(result_10) { come_call_finalizer2(come_regex_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
void* right_value43;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value43=__builtin_string(regex->str)));
    if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result53__;
}

char* string_lower_case(char* str){
void* __result_obj__;
void* right_value44;
char* result_13;
int i_14;
_Bool _for_condtionalA1;
_Bool _if_conditional11;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
memset(&result_13, 0, sizeof(char*));
memset(&i_14, 0, sizeof(int));
    result_13=(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(str))));
    if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    for(
    i_14=0 ,    0;    _for_condtionalA1=    i_14<strlen(str) ,    _for_condtionalA1;    i_14++ ,    0    ){
        if(_if_conditional11=str[i_14]>=65&&str[i_14]<=90,        _if_conditional11) {
            result_13[i_14]=str[i_14]-65+97;
        }
    }
    __result54__ = __result_obj__ = result_13;
    if(result_13) { result_13 = come_decrement_ref_count2(result_13, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result54__;
    if(result_13) { result_13 = come_decrement_ref_count2(result_13, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

char* string_upper_case(char* str){
void* __result_obj__;
void* right_value45;
char* result_15;
int i_16;
_Bool _for_condtionalA2;
_Bool _if_conditional12;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
memset(&result_15, 0, sizeof(char*));
memset(&i_16, 0, sizeof(int));
    result_15=(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string(str))));
    if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    for(
    i_16=0 ,    0;    _for_condtionalA2=    i_16<strlen(str) ,    _for_condtionalA2;    i_16++ ,    0    ){
        if(_if_conditional12=str[i_16]>=97&&str[i_16]<=122,        _if_conditional12) {
            result_15[i_16]=str[i_16]-97+65;
        }
    }
    __result55__ = __result_obj__ = result_15;
    if(result_15) { result_15 = come_decrement_ref_count2(result_15, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result55__;
    if(result_15) { result_15 = come_decrement_ref_count2(result_15, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value46;
unsigned int* __result56__;
int len_17;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
void* right_value47;
unsigned int* __result57__;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value48;
unsigned int* __result58__;
_Bool _if_conditional20;
void* right_value49;
unsigned int* __result59__;
void* right_value50;
unsigned int* result_18;
unsigned int* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&len_17, 0, sizeof(int));
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&result_18, 0, sizeof(unsigned int*));
    if(_if_conditional13=str==((void*)0),    _if_conditional13) {
        __result56__ = __result_obj__ = ((unsigned int*)(right_value46=__builtin_wstring("")));
        if(right_value46) { right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result56__;
    }
    len_17=wcslen(str);
    if(_if_conditional14=head<0,    _if_conditional14) {
        head+=len_17;
    }
    if(_if_conditional15=tail<0,    _if_conditional15) {
        tail+=len_17+1;
    }
    if(_if_conditional16=head>tail,    _if_conditional16) {
        __result57__ = __result_obj__ = ((unsigned int*)(right_value47=__builtin_wstring("")));
        if(right_value47) { right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result57__;
    }
    if(_if_conditional17=head<0,    _if_conditional17) {
        head=0;
    }
    if(_if_conditional18=tail>=len_17,    _if_conditional18) {
        tail=len_17;
    }
    if(_if_conditional19=head==tail,    _if_conditional19) {
        __result58__ = __result_obj__ = ((unsigned int*)(right_value48=__builtin_wstring("")));
        if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result58__;
    }
    if(_if_conditional20=tail-head+1<1,    _if_conditional20) {
        __result59__ = __result_obj__ = ((unsigned int*)(right_value49=__builtin_wstring("")));
        if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result59__;
    }
    result_18=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value50=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang2-str.c", 175, "unsigned int"))));
    if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    memcpy(result_18,str+head,sizeof(unsigned int)*(tail-head));
    result_18[tail-head]=0;
    __result60__ = __result_obj__ = result_18;
    if(result_18) { result_18 = come_decrement_ref_count2(result_18, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result60__;
    if(result_18) { result_18 = come_decrement_ref_count2(result_18, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional21;
unsigned int* __result61__;
int len_19;
void* right_value51;
unsigned int* wstr_20;
int ret_21;
_Bool _if_conditional22;
unsigned int* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_19, 0, sizeof(int));
right_value51 = (void*)0;
memset(&wstr_20, 0, sizeof(unsigned int*));
memset(&ret_21, 0, sizeof(int));
    if(_if_conditional21=str==((void*)0),    _if_conditional21) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    len_19=strlen(str);
    wstr_20=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value51=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_19+1)), "libcomelang2-str.c", 190, "unsigned int"))));
    if(right_value51) { right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    ret_21=mbstowcs(wstr_20,str,len_19+1);
    wstr_20[ret_21]=0;
    if(_if_conditional22=ret_21<0,    _if_conditional22) {
        wstr_20[0]=0;
    }
    __result62__ = __result_obj__ = wstr_20;
    if(wstr_20) { wstr_20 = come_decrement_ref_count2(wstr_20, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result62__;
    if(wstr_20) { wstr_20 = come_decrement_ref_count2(wstr_20, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_22;
int len_23;
int i_24;
_Bool _for_condtionalA3;
int len2_25;
int j_26;
_Bool _for_condtionalA4;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_22, 0, sizeof(int));
memset(&len_23, 0, sizeof(int));
memset(&i_24, 0, sizeof(int));
memset(&len2_25, 0, sizeof(int));
memset(&j_26, 0, sizeof(int));
    n_22=0;
    len_23=strlen(str);
    for(
    i_24=0 ,    0;    _for_condtionalA3=    i_24<len_23 ,    _for_condtionalA3;    i_24++ ,    0    ){
        len2_25=strlen(search_str);
        for(
        j_26=0 ,        0;        _for_condtionalA4=        j_26<len2_25 ,        _for_condtionalA4;        j_26++ ,        0        ){
            if(_if_conditional23=str[i_24+j_26]!=search_str[j_26],            _if_conditional23) {
                break;
            }
        }
        if(_if_conditional24=j_26==len2_25,        _if_conditional24) {
            n_22++;
            if(_if_conditional25=n_22==count,            _if_conditional25) {
                __result63__ = i_24;
                return __result63__;
            }
        }
    }
    __result64__ = default_value;
    return __result64__;
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
_Bool _for_condtionalA5;
int i_43;
_Bool _for_condtionalA6;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
int __result65__;
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
        for(
        i_42=0 ,        0;        _for_condtionalA5=        i_42<ovec_max_27 ,        _for_condtionalA5;        i_42++ ,        0        ){
            start_28[i_42]=ovec_value_30[i_42*2];
        }
        for(
        i_43=0 ,        0;        _for_condtionalA6=        i_43<ovec_max_27 ,        _for_condtionalA6;        i_43++ ,        0        ){
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
    __result65__ = result_31;
    return __result65__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_44;
char* p_45;
_Bool _while_condtional3;
_Bool _if_conditional29;
int __result66__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_44, 0, sizeof(int));
memset(&p_45, 0, sizeof(char*));
    len_44=strlen(search_str);
    p_45=str+strlen(str)-len_44;
    while(_while_condtional3=p_45>=str,    _while_condtional3) {
        if(_if_conditional29=strncmp(p_45,search_str,len_44)==0,        _if_conditional29) {
            __result66__ = p_45-str;
            return __result66__;
        }
        p_45--;
    }
    __result67__ = default_value;
    return __result67__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_46;
int erro_ofs_47;
int options_48;
char* str_49;
struct real_pcre8_or_16* re_50;
void* right_value52;
char* self2_51;
int ovec_max_52;
int result_56;
int offset_57;
_Bool _while_condtional4;
int options_58;
int len_59;
int regex_result_60;
int i_61;
_Bool _for_condtionalA7;
int i_62;
_Bool _for_condtionalA8;
_Bool _if_conditional30;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_47, 0, sizeof(int));
memset(&options_48, 0, sizeof(int));
memset(&str_49, 0, sizeof(char*));
memset(&re_50, 0, sizeof(struct real_pcre8_or_16*));
right_value52 = (void*)0;
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
    self2_51=(char*)come_increment_ref_count(((char*)(right_value52=charp_reverse(self))));
    if(right_value52) { right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
        for(
        i_61=0 ,        0;        _for_condtionalA7=        i_61<ovec_max_52 ,        _for_condtionalA7;        i_61++ ,        0        ){
            start_53[i_61]=ovec_value_55[i_61*2];
        }
        for(
        i_62=0 ,        0;        _for_condtionalA8=        i_62<ovec_max_52 ,        _for_condtionalA8;        i_62++ ,        0        ){
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
    __result68__ = result_56;
    if(self2_51) { self2_51 = come_decrement_ref_count2(self2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result68__;
    if(self2_51) { self2_51 = come_decrement_ref_count2(self2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_63;
char* p_64;
int n_65;
_Bool _while_condtional5;
_Bool _if_conditional31;
_Bool _if_conditional32;
int __result69__;
int __result70__;
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
                __result69__ = p_64-str;
                return __result69__;
            }
        }
        p_64--;
    }
    __result70__ = default_value;
    return __result70__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value53;
void* right_value54;
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
_Bool _for_condtionalA9;
int i_81;
_Bool _for_condtionalA10;
_Bool _if_conditional33;
void* right_value55;
char* str_82;
void* right_value56;
void* right_value57;
struct list$1charph* group_strings_83;
void* right_value58;
char* str2_84;
_Bool _if_conditional34;
struct list$1charph* __result72__;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value62;
char* str_88;
void* right_value63;
void* right_value64;
struct list$1charph* group_strings_89;
int i_90;
_Bool _for_condtionalA11;
void* right_value65;
char* match_string_91;
void* right_value66;
char* str2_92;
_Bool _if_conditional39;
struct list$1charph* __result74__;
_Bool _if_conditional40;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
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
right_value55 = (void*)0;
memset(&str_82, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&group_strings_83, 0, sizeof(struct list$1charph*));
right_value58 = (void*)0;
memset(&str2_84, 0, sizeof(char*));
right_value62 = (void*)0;
memset(&str_88, 0, sizeof(char*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&group_strings_89, 0, sizeof(struct list$1charph*));
memset(&i_90, 0, sizeof(int));
right_value65 = (void*)0;
memset(&match_string_91, 0, sizeof(char*));
right_value66 = (void*)0;
memset(&str2_92, 0, sizeof(char*));
    result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 376, "struct list$1charph"))))))));
    if(right_value53) { come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value54) { come_call_finalizer2(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_80=0 ,        0;        _for_condtionalA9=        i_80<ovec_max_68 ,        _for_condtionalA9;        i_80++ ,        0        ){
            start_69[i_80]=ovec_value_71[i_80*2];
        }
        for(
        i_81=0 ,        0;        _for_condtionalA10=        i_81<ovec_max_68 ,        _for_condtionalA10;        i_81++ ,        0        ){
            end_70[i_81]=ovec_value_71[i_81*2+1];
        }
        if(_if_conditional33=regex_result_79==1,        _if_conditional33) {
            str_82=(char*)come_increment_ref_count(((char*)(right_value55=charp_substring(self,start_69[0],end_70[0]))));
            if(right_value55) { right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            group_strings_83=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 410, "struct list$1charph"))))))));
            if(right_value56) { come_call_finalizer2(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(right_value57) { come_call_finalizer2(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            str2_84=(char*)come_increment_ref_count(((char*)(right_value58=block(parent,str_82,group_strings_83))));
            if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional34=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional34) {
                __result72__ = __result_obj__ = result_66;
                if(str_82) { str_82 = come_decrement_ref_count2(str_82, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_83) { come_call_finalizer2(list$1charphp_finalize,group_strings_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_84) { str2_84 = come_decrement_ref_count2(str2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(result_66) { come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result72__;
            }
            list$1charph_push_back(result_66,(char*)come_increment_ref_count(str2_84));
            if(_if_conditional37=offset_67==end_70[0],            _if_conditional37) {
                offset_67++;
            }
            else {
                offset_67=end_70[0];
            }
            if(str_82) { str_82 = come_decrement_ref_count2(str_82, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(group_strings_83) { come_call_finalizer2(list$1charphp_finalize,group_strings_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(str2_84) { str2_84 = come_decrement_ref_count2(str2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional38=regex_result_79>1,            _if_conditional38) {
                str_88=(char*)come_increment_ref_count(((char*)(right_value62=charp_substring(self,start_69[0],end_70[0]))));
                if(right_value62) { right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                group_strings_89=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value64=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value63=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 431, "struct list$1charph"))))))));
                if(right_value63) { come_call_finalizer2(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value64) { come_call_finalizer2(list$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                for(
                i_90=1 ,                0;                _for_condtionalA11=                i_90<regex_result_79 ,                _for_condtionalA11;                i_90++ ,                0                ){
                    match_string_91=(char*)come_increment_ref_count(((char*)(right_value65=charp_substring(self,start_69[i_90],end_70[i_90]))));
                    if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(group_strings_89,(char*)come_increment_ref_count(match_string_91));
                    if(match_string_91) { match_string_91 = come_decrement_ref_count2(match_string_91, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                str2_92=(char*)come_increment_ref_count(((char*)(right_value66=block(parent,str_88,group_strings_89))));
                if(right_value66) { right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional39=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional39) {
                    __result74__ = __result_obj__ = result_66;
                    if(str_88) { str_88 = come_decrement_ref_count2(str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_89) { come_call_finalizer2(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(str2_92) { str2_92 = come_decrement_ref_count2(str2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(result_66) { come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                    return __result74__;
                }
                list$1charph_push_back(result_66,(char*)come_increment_ref_count(str2_92));
                if(_if_conditional40=offset_67==end_70[0],                _if_conditional40) {
                    offset_67++;
                }
                else {
                    offset_67=end_70[0];
                }
                if(str_88) { str_88 = come_decrement_ref_count2(str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_89) { come_call_finalizer2(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_92) { str2_92 = come_decrement_ref_count2(str2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                break;
            }
        }
    }
    __result75__ = __result_obj__ = result_66;
    if(result_66) { come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result75__;
    if(result_66) { come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result71__ = __result_obj__ = self;
        if(self) { come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
        return __result71__;
        if(self) { come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value59;
struct list_item$1charph* litem_85;
char* __dec_obj8;
_Bool _if_conditional36;
void* right_value60;
struct list_item$1charph* litem_86;
char* __dec_obj9;
void* right_value61;
struct list_item$1charph* litem_87;
char* __dec_obj10;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
right_value60 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
right_value61 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional35=self->len==0,                _if_conditional35) {
                    litem_85=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                    if(right_value59) { come_call_finalizer2(list_item$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                    litem_85->prev=((void*)0);
                    litem_85->next=((void*)0);
                    __dec_obj8=litem_85->item;
                    litem_85->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    self->tail=litem_85;
                    self->head=litem_85;
                }
                else {
                    if(_if_conditional36=self->len==1,                    _if_conditional36) {
                        litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                        if(right_value60) { come_call_finalizer2(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        litem_86->prev=self->head;
                        litem_86->next=((void*)0);
                        __dec_obj9=litem_86->item;
                        litem_86->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        self->tail=litem_86;
                        self->head->next=litem_86;
                    }
                    else {
                        litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                        if(right_value61) { come_call_finalizer2(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                        litem_87->prev=self->tail;
                        litem_87->next=((void*)0);
                        __dec_obj10=litem_87->item;
                        litem_87->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        self->tail->next=litem_87;
                        self->tail=litem_87;
                    }
                }
                self->len++;
                __result73__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                return __result73__;
                if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value67;
void* right_value68;
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
_Bool _for_condtionalA12;
int i_109;
_Bool _for_condtionalA13;
_Bool _if_conditional41;
void* right_value69;
char* str_110;
void* right_value70;
void* right_value71;
struct list$1charph* group_strings_111;
void* right_value72;
char* str2_112;
_Bool _if_conditional42;
struct list$1charph* __result76__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value73;
char* str_113;
void* right_value74;
void* right_value75;
struct list$1charph* group_strings_114;
int i_115;
_Bool _for_condtionalA14;
void* right_value76;
char* match_string_116;
void* right_value77;
char* str2_117;
_Bool _if_conditional46;
struct list$1charph* __result77__;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
right_value68 = (void*)0;
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
right_value69 = (void*)0;
memset(&str_110, 0, sizeof(char*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&group_strings_111, 0, sizeof(struct list$1charph*));
right_value72 = (void*)0;
memset(&str2_112, 0, sizeof(char*));
right_value73 = (void*)0;
memset(&str_113, 0, sizeof(char*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&group_strings_114, 0, sizeof(struct list$1charph*));
memset(&i_115, 0, sizeof(int));
right_value76 = (void*)0;
memset(&match_string_116, 0, sizeof(char*));
right_value77 = (void*)0;
memset(&str2_117, 0, sizeof(char*));
    result_93=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 465, "struct list$1charph"))))))));
    if(right_value67) { come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value68) { come_call_finalizer2(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_108=0 ,        0;        _for_condtionalA12=        i_108<ovec_max_95 ,        _for_condtionalA12;        i_108++ ,        0        ){
            start_96[i_108]=ovec_value_98[i_108*2];
        }
        for(
        i_109=0 ,        0;        _for_condtionalA13=        i_109<ovec_max_95 ,        _for_condtionalA13;        i_109++ ,        0        ){
            end_97[i_109]=ovec_value_98[i_109*2+1];
        }
        if(_if_conditional41=regex_result_107==1,        _if_conditional41) {
            str_110=(char*)come_increment_ref_count(((char*)(right_value69=charp_substring(self,start_96[0],end_97[0]))));
            if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            group_strings_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value70=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 501, "struct list$1charph"))))))));
            if(right_value70) { come_call_finalizer2(list$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(right_value71) { come_call_finalizer2(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            str2_112=(char*)come_increment_ref_count(((char*)(right_value72=block(parent,str_110,group_strings_111))));
            if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional42=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional42) {
                __result76__ = __result_obj__ = result_93;
                if(str_110) { str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_111) { come_call_finalizer2(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_112) { str2_112 = come_decrement_ref_count2(str2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(result_93) { come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result76__;
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
                if(str_110) { str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_111) { come_call_finalizer2(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_112) { str2_112 = come_decrement_ref_count2(str2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
            }
            if(str_110) { str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(group_strings_111) { come_call_finalizer2(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(str2_112) { str2_112 = come_decrement_ref_count2(str2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional45=regex_result_107>1,            _if_conditional45) {
                str_113=(char*)come_increment_ref_count(((char*)(right_value73=charp_substring(self,start_96[0],end_97[0]))));
                if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                group_strings_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 527, "struct list$1charph"))))))));
                if(right_value74) { come_call_finalizer2(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value75) { come_call_finalizer2(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                for(
                i_115=1 ,                0;                _for_condtionalA14=                i_115<regex_result_107 ,                _for_condtionalA14;                i_115++ ,                0                ){
                    match_string_116=(char*)come_increment_ref_count(((char*)(right_value76=charp_substring(self,start_96[i_115],end_97[i_115]))));
                    if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(group_strings_114,(char*)come_increment_ref_count(match_string_116));
                    if(match_string_116) { match_string_116 = come_decrement_ref_count2(match_string_116, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                str2_117=(char*)come_increment_ref_count(((char*)(right_value77=block(parent,str_113,group_strings_114))));
                if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional46=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional46) {
                    __result77__ = __result_obj__ = result_93;
                    if(str_113) { str_113 = come_decrement_ref_count2(str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_114) { come_call_finalizer2(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(str2_117) { str2_117 = come_decrement_ref_count2(str2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(result_93) { come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                    return __result77__;
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
                    if(str_113) { str_113 = come_decrement_ref_count2(str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_114) { come_call_finalizer2(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(str2_117) { str2_117 = come_decrement_ref_count2(str2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    break;
                }
                if(str_113) { str_113 = come_decrement_ref_count2(str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_114) { come_call_finalizer2(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_117) { str2_117 = come_decrement_ref_count2(str2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                break;
            }
        }
    }
    __result78__ = __result_obj__ = result_93;
    if(result_93) { come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result78__;
    if(result_93) { come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_118;
int erro_ofs_119;
int options_120;
char* str_121;
struct real_pcre8_or_16* re_122;
void* right_value78;
void* right_value79;
struct list$1charph* result_123;
int offset_124;
int ovec_max_125;
_Bool _while_condtional8;
int options_129;
int len_130;
int regex_result_131;
int i_132;
_Bool _for_condtionalA15;
int i_133;
_Bool _for_condtionalA16;
_Bool _if_conditional49;
void* right_value80;
char* str_134;
void* right_value81;
void* right_value82;
struct list$1charph* match_strings_135;
void* right_value83;
char* str2_136;
_Bool _if_conditional50;
struct list$1charph* __result79__;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value84;
char* str_137;
_Bool _if_conditional53;
void* right_value85;
void* right_value86;
struct list$1charph* match_strings_138;
int i_139;
_Bool _for_condtionalA17;
void* right_value87;
char* match_str_140;
void* right_value88;
char* str2_141;
_Bool _if_conditional54;
struct list$1charph* __result80__;
_Bool _if_conditional55;
void* right_value89;
char* str_142;
void* right_value90;
void* right_value91;
struct list$1charph* match_strings_143;
void* right_value92;
char* str2_144;
_Bool _if_conditional56;
struct list$1charph* __result81__;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_119, 0, sizeof(int));
memset(&options_120, 0, sizeof(int));
memset(&str_121, 0, sizeof(char*));
memset(&re_122, 0, sizeof(struct real_pcre8_or_16*));
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&result_123, 0, sizeof(struct list$1charph*));
memset(&offset_124, 0, sizeof(int));
memset(&ovec_max_125, 0, sizeof(int));
memset(&options_129, 0, sizeof(int));
memset(&len_130, 0, sizeof(int));
memset(&regex_result_131, 0, sizeof(int));
memset(&i_132, 0, sizeof(int));
memset(&i_133, 0, sizeof(int));
right_value80 = (void*)0;
memset(&str_134, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&match_strings_135, 0, sizeof(struct list$1charph*));
right_value83 = (void*)0;
memset(&str2_136, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&str_137, 0, sizeof(char*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&match_strings_138, 0, sizeof(struct list$1charph*));
memset(&i_139, 0, sizeof(int));
right_value87 = (void*)0;
memset(&match_str_140, 0, sizeof(char*));
right_value88 = (void*)0;
memset(&str2_141, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&str_142, 0, sizeof(char*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&match_strings_143, 0, sizeof(struct list$1charph*));
right_value92 = (void*)0;
memset(&str2_144, 0, sizeof(char*));
    options_120=reg->options;
    str_121=reg->str;
    re_122=reg->re;
    result_123=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 573, "struct list$1charph"))))))));
    if(right_value78) { come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value79) { come_call_finalizer2(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_132=0 ,        0;        _for_condtionalA15=        i_132<ovec_max_125 ,        _for_condtionalA15;        i_132++ ,        0        ){
            start_126[i_132]=ovec_value_128[i_132*2];
        }
        for(
        i_133=0 ,        0;        _for_condtionalA16=        i_133<ovec_max_125 ,        _for_condtionalA16;        i_133++ ,        0        ){
            end_127[i_133]=ovec_value_128[i_133*2+1];
        }
        if(_if_conditional49=regex_result_131==1,        _if_conditional49) {
            str_134=(char*)come_increment_ref_count(((char*)(right_value80=charp_substring(self,offset_124,start_126[0]))));
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            match_strings_135=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 600, "struct list$1charph"))))))));
            if(right_value81) { come_call_finalizer2(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(right_value82) { come_call_finalizer2(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            str2_136=(char*)come_increment_ref_count(((char*)(right_value83=block(parent,str_134,match_strings_135))));
            if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional50=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional50) {
                __result79__ = __result_obj__ = result_123;
                if(str_134) { str_134 = come_decrement_ref_count2(str_134, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(match_strings_135) { come_call_finalizer2(list$1charphp_finalize,match_strings_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_136) { str2_136 = come_decrement_ref_count2(str2_136, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(result_123) { come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result79__;
            }
            list$1charph_push_back(result_123,(char*)come_increment_ref_count(str2_136));
            if(_if_conditional51=offset_124==end_127[0],            _if_conditional51) {
                offset_124++;
            }
            else {
                offset_124=end_127[0];
            }
            if(str_134) { str_134 = come_decrement_ref_count2(str_134, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(match_strings_135) { come_call_finalizer2(list$1charphp_finalize,match_strings_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(str2_136) { str2_136 = come_decrement_ref_count2(str2_136, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional52=regex_result_131>1,            _if_conditional52) {
                str_137=(char*)come_increment_ref_count(((char*)(right_value84=charp_substring(self,offset_124,start_126[0]))));
                if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional53=offset_124==end_127[0],                _if_conditional53) {
                    offset_124++;
                }
                else {
                    offset_124=end_127[0];
                }
                match_strings_138=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 627, "struct list$1charph"))))))));
                if(right_value85) { come_call_finalizer2(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value86) { come_call_finalizer2(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                for(
                i_139=1 ,                0;                _for_condtionalA17=                i_139<regex_result_131 ,                _for_condtionalA17;                i_139++ ,                0                ){
                    match_str_140=(char*)come_increment_ref_count(((char*)(right_value87=charp_substring(self,start_126[i_139],end_127[i_139]))));
                    if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(match_strings_138,(char*)come_increment_ref_count(match_str_140));
                    if(match_str_140) { match_str_140 = come_decrement_ref_count2(match_str_140, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                str2_141=(char*)come_increment_ref_count(((char*)(right_value88=block(parent,str_137,match_strings_138))));
                if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional54=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional54) {
                    __result80__ = __result_obj__ = result_123;
                    if(str_137) { str_137 = come_decrement_ref_count2(str_137, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(match_strings_138) { come_call_finalizer2(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(str2_141) { str2_141 = come_decrement_ref_count2(str2_141, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(result_123) { come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                    return __result80__;
                }
                list$1charph_push_back(result_123,(char*)come_increment_ref_count(str2_141));
                if(str_137) { str_137 = come_decrement_ref_count2(str_137, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(match_strings_138) { come_call_finalizer2(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_141) { str2_141 = come_decrement_ref_count2(str2_141, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional55=offset_124<charp_length(self),    _if_conditional55) {
        str_142=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(self,offset_124,-1))));
        if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        match_strings_143=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 649, "struct list$1charph"))))))));
        if(right_value90) { come_call_finalizer2(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        if(right_value91) { come_call_finalizer2(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
        str2_144=(char*)come_increment_ref_count(((char*)(right_value92=block(parent,str_142,match_strings_143))));
        if(right_value92) { right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(_if_conditional56=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional56) {
            __result81__ = __result_obj__ = result_123;
            if(str_142) { str_142 = come_decrement_ref_count2(str_142, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(match_strings_143) { come_call_finalizer2(list$1charphp_finalize,match_strings_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(str2_144) { str2_144 = come_decrement_ref_count2(str2_144, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(result_123) { come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
            return __result81__;
        }
        list$1charph_push_back(result_123,(char*)come_increment_ref_count(str2_144));
        if(str_142) { str_142 = come_decrement_ref_count2(str_142, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(match_strings_143) { come_call_finalizer2(list$1charphp_finalize,match_strings_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
        if(str2_144) { str2_144 = come_decrement_ref_count2(str2_144, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    __result82__ = __result_obj__ = result_123;
    if(result_123) { come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result82__;
    if(result_123) { come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_145;
int erro_ofs_146;
int options_147;
char* str_148;
struct real_pcre8_or_16* re_149;
void* right_value93;
void* right_value94;
struct list$1charph* result_150;
int offset_151;
int ovec_max_152;
int n_156;
_Bool _while_condtional9;
int options_157;
int len_158;
int regex_result_159;
int i_160;
_Bool _for_condtionalA18;
int i_161;
_Bool _for_condtionalA19;
_Bool _if_conditional57;
void* right_value95;
char* str_162;
void* right_value96;
void* right_value97;
struct list$1charph* match_strings_163;
void* right_value98;
char* str2_164;
_Bool _if_conditional58;
struct list$1charph* __result83__;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value99;
char* str_165;
_Bool _if_conditional61;
void* right_value100;
void* right_value101;
struct list$1charph* match_strings_166;
int i_167;
_Bool _for_condtionalA20;
void* right_value102;
char* match_str_168;
void* right_value103;
char* str2_169;
_Bool _if_conditional62;
struct list$1charph* __result84__;
_Bool _if_conditional63;
struct list$1charph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_146, 0, sizeof(int));
memset(&options_147, 0, sizeof(int));
memset(&str_148, 0, sizeof(char*));
memset(&re_149, 0, sizeof(struct real_pcre8_or_16*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_150, 0, sizeof(struct list$1charph*));
memset(&offset_151, 0, sizeof(int));
memset(&ovec_max_152, 0, sizeof(int));
memset(&n_156, 0, sizeof(int));
memset(&options_157, 0, sizeof(int));
memset(&len_158, 0, sizeof(int));
memset(&regex_result_159, 0, sizeof(int));
memset(&i_160, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
right_value95 = (void*)0;
memset(&str_162, 0, sizeof(char*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&match_strings_163, 0, sizeof(struct list$1charph*));
right_value98 = (void*)0;
memset(&str2_164, 0, sizeof(char*));
right_value99 = (void*)0;
memset(&str_165, 0, sizeof(char*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&match_strings_166, 0, sizeof(struct list$1charph*));
memset(&i_167, 0, sizeof(int));
right_value102 = (void*)0;
memset(&match_str_168, 0, sizeof(char*));
right_value103 = (void*)0;
memset(&str2_169, 0, sizeof(char*));
    options_147=reg->options;
    str_148=reg->str;
    re_149=reg->re;
    result_150=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 671, "struct list$1charph"))))))));
    if(right_value93) { come_call_finalizer2(list$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value94) { come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_160=0 ,        0;        _for_condtionalA18=        i_160<ovec_max_152 ,        _for_condtionalA18;        i_160++ ,        0        ){
            start_153[i_160]=ovec_value_155[i_160*2];
        }
        for(
        i_161=0 ,        0;        _for_condtionalA19=        i_161<ovec_max_152 ,        _for_condtionalA19;        i_161++ ,        0        ){
            end_154[i_161]=ovec_value_155[i_161*2+1];
        }
        if(_if_conditional57=regex_result_159==1,        _if_conditional57) {
            str_162=(char*)come_increment_ref_count(((char*)(right_value95=charp_substring(self,offset_151,start_153[0]))));
            if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            match_strings_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value97=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 700, "struct list$1charph"))))))));
            if(right_value96) { come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(right_value97) { come_call_finalizer2(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            str2_164=(char*)come_increment_ref_count(((char*)(right_value98=block(parent,str_162,match_strings_163))));
            if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional58=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional58) {
                __result83__ = __result_obj__ = result_150;
                if(str_162) { str_162 = come_decrement_ref_count2(str_162, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(match_strings_163) { come_call_finalizer2(list$1charphp_finalize,match_strings_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_164) { str2_164 = come_decrement_ref_count2(str2_164, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(result_150) { come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                return __result83__;
            }
            list$1charph_push_back(result_150,(char*)come_increment_ref_count(str2_164));
            if(_if_conditional59=offset_151==end_154[0],            _if_conditional59) {
                offset_151++;
            }
            else {
                offset_151=end_154[0];
            }
            if(str_162) { str_162 = come_decrement_ref_count2(str_162, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(match_strings_163) { come_call_finalizer2(list$1charphp_finalize,match_strings_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(str2_164) { str2_164 = come_decrement_ref_count2(str2_164, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional60=regex_result_159>1,            _if_conditional60) {
                str_165=(char*)come_increment_ref_count(((char*)(right_value99=charp_substring(self,offset_151,start_153[0]))));
                if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional61=offset_151==end_154[0],                _if_conditional61) {
                    offset_151++;
                }
                else {
                    offset_151=end_154[0];
                }
                match_strings_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value101=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value100=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 726, "struct list$1charph"))))))));
                if(right_value100) { come_call_finalizer2(list$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value101) { come_call_finalizer2(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                for(
                i_167=1 ,                0;                _for_condtionalA20=                i_167<regex_result_159 ,                _for_condtionalA20;                i_167++ ,                0                ){
                    match_str_168=(char*)come_increment_ref_count(((char*)(right_value102=charp_substring(self,start_153[i_167],end_154[i_167]))));
                    if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(match_strings_166,(char*)come_increment_ref_count(match_str_168));
                    if(match_str_168) { match_str_168 = come_decrement_ref_count2(match_str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                str2_169=(char*)come_increment_ref_count(((char*)(right_value103=block(parent,str_165,match_strings_166))));
                if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional62=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional62) {
                    __result84__ = __result_obj__ = result_150;
                    if(str_165) { str_165 = come_decrement_ref_count2(str_165, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(match_strings_166) { come_call_finalizer2(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(str2_169) { str2_169 = come_decrement_ref_count2(str2_169, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(result_150) { come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
                    return __result84__;
                }
                list$1charph_push_back(result_150,(char*)come_increment_ref_count(str2_169));
                if(str_165) { str_165 = come_decrement_ref_count2(str_165, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(match_strings_166) { come_call_finalizer2(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(str2_169) { str2_169 = come_decrement_ref_count2(str2_169, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
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
    __result85__ = __result_obj__ = result_150;
    if(result_150) { come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result85__;
    if(result_150) { come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
_Bool _for_condtionalA21;
int i_185;
_Bool _for_condtionalA22;
_Bool _if_conditional74;
void* right_value106;
char* str_186;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value107;
char* str_187;
_Bool _if_conditional77;
int i_188;
_Bool _for_condtionalA23;
void* right_value108;
char* match_string_189;
struct list$1charph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
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
right_value106 = (void*)0;
memset(&str_186, 0, sizeof(char*));
right_value107 = (void*)0;
memset(&str_187, 0, sizeof(char*));
memset(&i_188, 0, sizeof(int));
right_value108 = (void*)0;
memset(&match_string_189, 0, sizeof(char*));
    result_170=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 794, "struct list$1charph"))))))));
    if(right_value104) { come_call_finalizer2(list$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value105) { come_call_finalizer2(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_184=0 ,        0;        _for_condtionalA21=        i_184<ovec_max_172 ,        _for_condtionalA21;        i_184++ ,        0        ){
            start_173[i_184]=ovec_value_175[i_184*2];
        }
        for(
        i_185=0 ,        0;        _for_condtionalA22=        i_185<ovec_max_172 ,        _for_condtionalA22;        i_185++ ,        0        ){
            end_174[i_185]=ovec_value_175[i_185*2+1];
        }
        if(_if_conditional74=regex_result_183==1,        _if_conditional74) {
            str_186=(char*)come_increment_ref_count(((char*)(right_value106=charp_substring(self,start_173[0],end_174[0]))));
            if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            list$1charph_push_back(result_170,(char*)come_increment_ref_count(str_186));
            if(_if_conditional75=offset_171==end_174[0],            _if_conditional75) {
                offset_171++;
            }
            else {
                offset_171=end_174[0];
            }
            if(str_186) { str_186 = come_decrement_ref_count2(str_186, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional76=regex_result_183>1,            _if_conditional76) {
                str_187=(char*)come_increment_ref_count(((char*)(right_value107=charp_substring(self,start_173[0],end_174[0]))));
                if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                list$1charph_push_back(result_170,(char*)come_increment_ref_count(str_187));
                if(_if_conditional77=offset_171==end_174[0],                _if_conditional77) {
                    offset_171++;
                }
                else {
                    offset_171=end_174[0];
                }
                *num_group_string_in_regex=regex_result_183-1;
                for(
                i_188=1 ,                0;                _for_condtionalA23=                i_188<regex_result_183 ,                _for_condtionalA23;                i_188++ ,                0                ){
                    match_string_189=(char*)come_increment_ref_count(((char*)(right_value108=charp_substring(self,start_173[i_188],end_174[i_188]))));
                    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_189));
                    if(match_string_189) { match_string_189 = come_decrement_ref_count2(match_string_189, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(str_187) { str_187 = come_decrement_ref_count2(str_187, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                break;
            }
        }
    }
    __result97__ = __result_obj__ = result_170;
    if(result_170) { come_call_finalizer2(list$1charphp_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result97__;
    if(result_170) { come_call_finalizer2(list$1charphp_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

char* charp_strip(char* self){
void* __result_obj__;
void* right_value109;
char* result_190;
int len_191;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&result_190, 0, sizeof(char*));
memset(&len_191, 0, sizeof(int));
    result_190=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(self))));
    if(right_value109) { right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
    __result98__ = __result_obj__ = result_190;
    if(result_190) { result_190 = come_decrement_ref_count2(result_190, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result98__;
    if(result_190) { result_190 = come_decrement_ref_count2(result_190, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

char* charp_printable(char* str){
void* __result_obj__;
int len_192;
void* right_value110;
char* result_193;
int n_194;
int i_195;
_Bool _for_condtionalA24;
char c_196;
_Bool _if_conditional81;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_192, 0, sizeof(int));
right_value110 = (void*)0;
memset(&result_193, 0, sizeof(char*));
memset(&n_194, 0, sizeof(int));
memset(&i_195, 0, sizeof(int));
memset(&c_196, 0, sizeof(char));
    len_192=charp_length(str);
    result_193=(char*)come_increment_ref_count(((char*)(right_value110=(char*)come_calloc(1, sizeof(char)*(1*(len_192*2+1)), "libcomelang2-str.c", 888, "char"))));
    if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    n_194=0;
    for(
    i_195=0 ,    0;    _for_condtionalA24=    i_195<len_192 ,    _for_condtionalA24;    i_195++ ,    0    ){
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
    __result99__ = __result_obj__ = result_193;
    if(result_193) { result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result99__;
    if(result_193) { result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__;
int len_197;
void* right_value111;
char* result_198;
_Bool _if_conditional82;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_197, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_198, 0, sizeof(char*));
    len_197=4*(wcslen(wstr)+1);
    result_198=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_197)), "libcomelang2-str.c", 914, "char"))));
    if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional82=wcstombs(result_198,wstr,len_197)<0,    _if_conditional82) {
        strncpy(result_198,"",len_197);
    }
    __result100__ = __result_obj__ = result_198;
    if(result_198) { result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result100__;
    if(result_198) { result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__;
void* right_value112;
unsigned int* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    __result101__ = __result_obj__ = ((unsigned int*)(right_value112=__builtin_wstring(str)));
    if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result101__;
}

int wchar_tp_length(unsigned int* str){
void* __result_obj__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = wcslen(str);
    return __result102__;
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__;
int len_199;
_Bool _if_conditional83;
void* right_value113;
void* right_value114;
unsigned int* __result103__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value115;
void* right_value116;
unsigned int* __result104__;
_Bool _if_conditional88;
void* right_value117;
unsigned int* sub_str_200;
void* right_value118;
void* right_value119;
unsigned int* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_199, 0, sizeof(int));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&sub_str_200, 0, sizeof(unsigned int*));
right_value118 = (void*)0;
right_value119 = (void*)0;
    len_199=wcslen(str);
    if(_if_conditional83=len_199==0,    _if_conditional83) {
        __result103__ = __result_obj__ = ((unsigned int*)(right_value114=string_to_wstring(((char*)(right_value113=wchar_tp_to_string(str))))));
        if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result103__;
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
        __result104__ = __result_obj__ = ((unsigned int*)(right_value116=string_to_wstring(((char*)(right_value115=wchar_tp_to_string(str))))));
        if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result104__;
    }
    if(_if_conditional88=tail>=len_199,    _if_conditional88) {
        tail=len_199;
    }
    sub_str_200=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value117=wchar_tp_substring(str,tail,-1))));
    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    memcpy(str+head,sub_str_200,sizeof(unsigned int)*(wstring_length(sub_str_200)+1));
    __result105__ = __result_obj__ = ((unsigned int*)(right_value119=string_to_wstring(((char*)(right_value118=wchar_tp_to_string(str))))));
    if(sub_str_200) { sub_str_200 = come_decrement_ref_count2(sub_str_200, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result105__;
    if(sub_str_200) { sub_str_200 = come_decrement_ref_count2(sub_str_200, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
unsigned int* head_201;
_Bool _if_conditional89;
int __result106__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_201, 0, sizeof(unsigned int*));
    head_201=wcsstr(str,search_str);
    if(_if_conditional89=head_201==((void*)0),    _if_conditional89) {
        __result106__ = default_value;
        return __result106__;
    }
    __result107__ = head_201-str;
    return __result107__;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
void* __result_obj__;
int len_202;
unsigned int* p_203;
_Bool _while_condtional11;
int len2_204;
_Bool result_205;
int i_206;
_Bool _for_condtionalA25;
_Bool _if_conditional90;
_Bool _if_conditional91;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_202, 0, sizeof(int));
memset(&p_203, 0, sizeof(unsigned int*));
memset(&len2_204, 0, sizeof(int));
memset(&result_205, 0, sizeof(_Bool));
memset(&i_206, 0, sizeof(int));
    len_202=wcslen(search_str);
    p_203=str+wcslen(str)-len_202;
    while(_while_condtional11=p_203>=str,    _while_condtional11) {
        len2_204=wcslen(p_203);
        result_205=(_Bool)1;
        for(
        i_206=0 ,        0;        _for_condtionalA25=        i_206<len_202&&i_206<len2_204 ,        _for_condtionalA25;        i_206++ ,        0        ){
            if(_if_conditional90=p_203[i_206]!=search_str[i_206],            _if_conditional90) {
                result_205=(_Bool)0;
            }
        }
        if(_if_conditional91=result_205,        _if_conditional91) {
            __result108__ = (p_203-str);
            return __result108__;
        }
        p_203--;
    }
    __result109__ = default_value;
    return __result109__;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__;
int len_207;
void* right_value120;
unsigned int* result_208;
int i_209;
_Bool _for_condtionalA26;
unsigned int* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_207, 0, sizeof(int));
right_value120 = (void*)0;
memset(&result_208, 0, sizeof(unsigned int*));
memset(&i_209, 0, sizeof(int));
    len_207=wcslen(str);
    result_208=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value120=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_207+1)), "libcomelang2-str.c", 1014, "unsigned int"))));
    if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    for(
    i_209=0 ,    0;    _for_condtionalA26=    i_209<len_207 ,    _for_condtionalA26;    i_209++ ,    0    ){
        result_208[i_209]=str[len_207-i_209-1];
    }
    result_208[len_207]=0;
    __result110__ = __result_obj__ = result_208;
    if(result_208) { result_208 = come_decrement_ref_count2(result_208, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result110__;
    if(result_208) { result_208 = come_decrement_ref_count2(result_208, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__;
int len_210;
void* right_value121;
unsigned int* result_211;
int i_212;
_Bool _for_condtionalA27;
unsigned int* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_210, 0, sizeof(int));
right_value121 = (void*)0;
memset(&result_211, 0, sizeof(unsigned int*));
memset(&i_212, 0, sizeof(int));
    len_210=wcslen(str)*n+1;
    result_211=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value121=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_210)), "libcomelang2-str.c", 1029, "unsigned int"))));
    if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    result_211[0]=0;
    for(
    i_212=0 ,    0;    _for_condtionalA27=    i_212<n ,    _for_condtionalA27;    i_212++ ,    0    ){
        wcscat(result_211,str);
    }
    __result111__ = __result_obj__ = result_211;
    if(result_211) { result_211 = come_decrement_ref_count2(result_211, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result111__;
    if(result_211) { result_211 = come_decrement_ref_count2(result_211, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__;
int len_213;
void* right_value122;
unsigned int* result_214;
int n_215;
int i_216;
_Bool _for_condtionalA28;
unsigned int c_217;
_Bool _if_conditional92;
unsigned int* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_213, 0, sizeof(int));
right_value122 = (void*)0;
memset(&result_214, 0, sizeof(unsigned int*));
memset(&n_215, 0, sizeof(int));
memset(&i_216, 0, sizeof(int));
memset(&c_217, 0, sizeof(unsigned int));
    len_213=wchar_tp_length(str);
    result_214=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value122=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_213*2+1)), "libcomelang2-str.c", 1043, "unsigned int"))));
    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    n_215=0;
    for(
    i_216=0 ,    0;    _for_condtionalA28=    i_216<len_213 ,    _for_condtionalA28;    i_216++ ,    0    ){
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
    __result112__ = __result_obj__ = result_214;
    if(result_214) { result_214 = come_decrement_ref_count2(result_214, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result112__;
    if(result_214) { result_214 = come_decrement_ref_count2(result_214, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
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
_Bool _for_condtionalA29;
int i_233;
_Bool _for_condtionalA30;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result113__;
_Bool _if_conditional95;
_Bool _if_conditional96;
int i_236;
_Bool _for_condtionalA31;
void* right_value123;
char* match_string_237;
_Bool _if_conditional97;
_Bool __result115__;
_Bool _if_conditional98;
_Bool __result116__;
_Bool __result117__;
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
right_value123 = (void*)0;
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
        for(
        i_232=0 ,        0;        _for_condtionalA29=        i_232<ovec_max_219 ,        _for_condtionalA29;        i_232++ ,        0        ){
            start_220[i_232]=ovec_value_222[i_232*2];
        }
        for(
        i_233=0 ,        0;        _for_condtionalA30=        i_233<ovec_max_219 ,        _for_condtionalA30;        i_233++ ,        0        ){
            end_221[i_233]=ovec_value_222[i_233*2+1];
        }
        if(_if_conditional93=regex_result_231==1||(group_strings==((void*)0)&&regex_result_231>0),        _if_conditional93) {
            n_228++;
            if(_if_conditional94=n_228==count,            _if_conditional94) {
                __result113__ = (_Bool)1;
                return __result113__;
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
                for(
                i_236=1 ,                0;                _for_condtionalA31=                i_236<regex_result_231 ,                _for_condtionalA31;                i_236++ ,                0                ){
                    match_string_237=(char*)come_increment_ref_count(((char*)(right_value123=charp_substring(self,start_220[i_236],end_221[i_236]))));
                    if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_237));
                    if(match_string_237) { match_string_237 = come_decrement_ref_count2(match_string_237, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional97=n_228==count,                _if_conditional97) {
                    __result115__ = (_Bool)1;
                    return __result115__;
                }
                if(_if_conditional98=offset_218==end_221[0],                _if_conditional98) {
                    offset_218++;
                }
                else {
                    offset_218=end_221[0];
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
struct list_item$1charph* it_234;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_235;
struct list$1charph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_234, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_235, 0, sizeof(struct list_item$1charph*));
                    it_234=self->head;
                    while(_while_condtional13=it_234!=((void*)0),                    _while_condtional13) {
                        prev_it_235=it_234;
                        it_234=it_234->next;
                        if(prev_it_235) { come_call_finalizer2(list_item$1charphp_finalize,prev_it_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result114__ = __result_obj__ = self;
                    return __result114__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = wcscmp(left,right);
    return __result118__;
}

int wstring_compare(unsigned int* left, unsigned int* right){
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

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = left==right;
    return __result121__;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__;
void* right_value124;
unsigned int* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result122__ = __result_obj__ = ((unsigned int*)(right_value124=wchar_tp_multiply(str,n)));
    if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result122__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__;
void* right_value125;
unsigned int* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result123__ = __result_obj__ = ((unsigned int*)(right_value125=wchar_tp_multiply(str,n)));
    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result123__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = wcscmp(left,right)==0;
    return __result124__;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = wcscmp(left,right)==0;
    return __result125__;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = wcscmp(left,right)!=0;
    return __result126__;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
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

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
void* right_value126;
unsigned int* result_238;
unsigned int* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&result_238, 0, sizeof(unsigned int*));
    result_238=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value126=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1207, "unsigned int"))));
    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    wcscpy(result_238,left);
    wcscat(result_238,right);
    __result130__ = __result_obj__ = result_238;
    if(result_238) { result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result130__;
    if(result_238) { result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__;
void* right_value127;
unsigned int* result_239;
unsigned int* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&result_239, 0, sizeof(unsigned int*));
    result_239=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value127=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1217, "unsigned int"))));
    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    wcscpy(result_239,left);
    wcscat(result_239,right);
    __result131__ = __result_obj__ = result_239;
    if(result_239) { result_239 = come_decrement_ref_count2(result_239, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result131__;
    if(result_239) { result_239 = come_decrement_ref_count2(result_239, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_240;
_Bool _if_conditional99;
int __result132__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_240, 0, sizeof(char*));
    head_240=strstr(str,search_str);
    if(_if_conditional99=head_240==((void*)0),    _if_conditional99) {
        __result132__ = default_value;
        return __result132__;
    }
    __result133__ = head_240-str;
    return __result133__;
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
_Bool _for_condtionalA32;
int i_256;
_Bool _for_condtionalA33;
_Bool _if_conditional100;
int __result134__;
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
        for(
        i_255=0 ,        0;        _for_condtionalA32=        i_255<ovec_max_241 ,        _for_condtionalA32;        i_255++ ,        0        ){
            start_242[i_255]=ovec_value_244[i_255*2];
        }
        for(
        i_256=0 ,        0;        _for_condtionalA33=        i_256<ovec_max_241 ,        _for_condtionalA33;        i_256++ ,        0        ){
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
    __result134__ = result_245;
    return __result134__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_257;
_Bool _if_conditional101;
void* right_value128;
char* __result135__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value129;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_257, 0, sizeof(int));
right_value128 = (void*)0;
right_value129 = (void*)0;
    len_257=strlen(self);
    if(_if_conditional101=strcmp(self,"")==0,    _if_conditional101) {
        __result135__ = __result_obj__ = ((char*)(right_value128=__builtin_string(self)));
        if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result135__;
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
    __result136__ = __result_obj__ = ((char*)(right_value129=__builtin_string(self)));
    if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result136__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_258;
void* right_value130;
char* result_259;
int i_260;
_Bool _for_condtionalA34;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_258, 0, sizeof(int));
right_value130 = (void*)0;
memset(&result_259, 0, sizeof(char*));
memset(&i_260, 0, sizeof(int));
    len_258=strlen(str)*n+1;
    result_259=(char*)come_increment_ref_count(((char*)(right_value130=(char*)come_calloc(1, sizeof(char)*(1*(len_258)), "libcomelang2-str.c", 1315, "char"))));
    if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    result_259[0]=0;
    for(
    i_260=0 ,    0;    _for_condtionalA34=    i_260<n ,    _for_condtionalA34;    i_260++ ,    0    ){
        strcat(result_259,str);
    }
    __result137__ = __result_obj__ = result_259;
    if(result_259) { result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result137__;
    if(result_259) { result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
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
void* right_value131;
void* right_value132;
struct buffer* result_271;
_Bool _while_condtional15;
int options_272;
int len_273;
int regex_result_274;
int i_275;
_Bool _for_condtionalA35;
int i_276;
_Bool _for_condtionalA36;
_Bool _if_conditional105;
void* right_value133;
char* str_277;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value134;
char* str_278;
void* right_value135;
char* str_279;
void* right_value136;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_261, 0, sizeof(int));
memset(&ovec_max_262, 0, sizeof(int));
memset(&erro_ofs_267, 0, sizeof(int));
memset(&options_268, 0, sizeof(int));
memset(&str_269, 0, sizeof(char*));
memset(&re_270, 0, sizeof(struct real_pcre8_or_16*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&result_271, 0, sizeof(struct buffer*));
memset(&options_272, 0, sizeof(int));
memset(&len_273, 0, sizeof(int));
memset(&regex_result_274, 0, sizeof(int));
memset(&i_275, 0, sizeof(int));
memset(&i_276, 0, sizeof(int));
right_value133 = (void*)0;
memset(&str_277, 0, sizeof(char*));
right_value134 = (void*)0;
memset(&str_278, 0, sizeof(char*));
right_value135 = (void*)0;
memset(&str_279, 0, sizeof(char*));
right_value136 = (void*)0;
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
    result_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1343, "struct buffer"))))))));
    if(right_value131) { come_call_finalizer2(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value132) { come_call_finalizer2(buffer_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_272=2097152;
        len_273=strlen(self);
        regex_result_274=pcre_exec(re_270,(struct pcre_extra*)0,self,len_273,offset_261,options_272,ovec_value_265,ovec_max_262*3);
        for(
        i_275=0 ,        0;        _for_condtionalA35=        i_275<ovec_max_262 ,        _for_condtionalA35;        i_275++ ,        0        ){
            start_263[i_275]=ovec_value_265[i_275*2];
        }
        for(
        i_276=0 ,        0;        _for_condtionalA36=        i_276<ovec_max_262 ,        _for_condtionalA36;        i_276++ ,        0        ){
            end_264[i_276]=ovec_value_265[i_276*2+1];
        }
        if(_if_conditional105=regex_result_274==1,        _if_conditional105) {
            str_277=(char*)come_increment_ref_count(((char*)(right_value133=charp_substring(self,offset_261,start_263[0]))));
            if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_append_str(result_271,str_277);
            buffer_append_str(result_271,replace);
            if(_if_conditional106=offset_261==end_264[0],            _if_conditional106) {
                offset_261++;
            }
            else {
                offset_261=end_264[0];
            }
            if(_if_conditional107=!reg->global,            _if_conditional107) {
                str_278=(char*)come_increment_ref_count(((char*)(right_value134=charp_substring(self,offset_261,-1))));
                if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_271,str_278);
                if(str_278) { str_278 = come_decrement_ref_count2(str_278, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(str_277) { str_277 = come_decrement_ref_count2(str_277, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_278) { str_278 = come_decrement_ref_count2(str_278, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(str_277) { str_277 = come_decrement_ref_count2(str_277, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            str_279=(char*)come_increment_ref_count(((char*)(right_value135=charp_substring(self,offset_261,-1))));
            if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_append_str(result_271,str_279);
            if(str_279) { str_279 = come_decrement_ref_count2(str_279, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            break;
            if(str_279) { str_279 = come_decrement_ref_count2(str_279, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
    }
    __result138__ = __result_obj__ = ((char*)(right_value136=buffer_to_string(result_271)));
    if(result_271) { come_call_finalizer2(buffer_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value136) { right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result138__;
    if(result_271) { come_call_finalizer2(buffer_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
void* right_value137;
void* right_value138;
struct buffer* result_290;
int n_291;
_Bool _while_condtional16;
int options_292;
int len_293;
int regex_result_294;
int i_295;
_Bool _for_condtionalA37;
int i_296;
_Bool _for_condtionalA38;
_Bool _if_conditional108;
void* right_value139;
char* str_297;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value140;
char* str_298;
_Bool _if_conditional111;
void* right_value141;
char* str_299;
void* right_value142;
char* str_300;
void* right_value143;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_280, 0, sizeof(int));
memset(&ovec_max_281, 0, sizeof(int));
memset(&erro_ofs_286, 0, sizeof(int));
memset(&options_287, 0, sizeof(int));
memset(&str_288, 0, sizeof(char*));
memset(&re_289, 0, sizeof(struct real_pcre8_or_16*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&result_290, 0, sizeof(struct buffer*));
memset(&n_291, 0, sizeof(int));
memset(&options_292, 0, sizeof(int));
memset(&len_293, 0, sizeof(int));
memset(&regex_result_294, 0, sizeof(int));
memset(&i_295, 0, sizeof(int));
memset(&i_296, 0, sizeof(int));
right_value139 = (void*)0;
memset(&str_297, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&str_298, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&str_299, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&str_300, 0, sizeof(char*));
right_value143 = (void*)0;
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
    result_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1406, "struct buffer"))))))));
    if(right_value137) { come_call_finalizer2(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value138) { come_call_finalizer2(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    n_291=0;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_292=2097152;
        len_293=strlen(self);
        regex_result_294=pcre_exec(re_289,(struct pcre_extra*)0,self,len_293,offset_280,options_292,ovec_value_284,ovec_max_281*3);
        for(
        i_295=0 ,        0;        _for_condtionalA37=        i_295<ovec_max_281 ,        _for_condtionalA37;        i_295++ ,        0        ){
            start_282[i_295]=ovec_value_284[i_295*2];
        }
        for(
        i_296=0 ,        0;        _for_condtionalA38=        i_296<ovec_max_281 ,        _for_condtionalA38;        i_296++ ,        0        ){
            end_283[i_296]=ovec_value_284[i_296*2+1];
        }
        if(_if_conditional108=regex_result_294==1,        _if_conditional108) {
            n_291++;
            str_297=(char*)come_increment_ref_count(((char*)(right_value139=charp_substring(self,offset_280,start_282[0]))));
            if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_append_str(result_290,str_297);
            buffer_append_str(result_290,replace);
            if(_if_conditional109=offset_280==end_283[0],            _if_conditional109) {
                offset_280++;
            }
            else {
                offset_280=end_283[0];
            }
            if(_if_conditional110=!reg->global,            _if_conditional110) {
                str_298=(char*)come_increment_ref_count(((char*)(right_value140=charp_substring(self,offset_280,-1))));
                if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_290,str_298);
                if(str_298) { str_298 = come_decrement_ref_count2(str_298, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(str_297) { str_297 = come_decrement_ref_count2(str_297, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_298) { str_298 = come_decrement_ref_count2(str_298, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional111=n_291==count,            _if_conditional111) {
                str_299=(char*)come_increment_ref_count(((char*)(right_value141=charp_substring(self,offset_280,-1))));
                if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_290,str_299);
                if(str_299) { str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(str_297) { str_297 = come_decrement_ref_count2(str_297, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_299) { str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(str_297) { str_297 = come_decrement_ref_count2(str_297, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            str_300=(char*)come_increment_ref_count(((char*)(right_value142=charp_substring(self,offset_280,-1))));
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_append_str(result_290,str_300);
            if(str_300) { str_300 = come_decrement_ref_count2(str_300, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            break;
            if(str_300) { str_300 = come_decrement_ref_count2(str_300, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
    }
    __result139__ = __result_obj__ = ((char*)(right_value143=buffer_to_string(result_290)));
    if(result_290) { come_call_finalizer2(buffer_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result139__;
    if(result_290) { come_call_finalizer2(buffer_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
void* right_value144;
void* right_value145;
struct list$1charph* result_301;
void* right_value146;
void* right_value147;
struct buffer* buf_302;
int i_303;
_Bool _for_condtionalA39;
_Bool _if_conditional112;
void* right_value148;
_Bool _if_conditional113;
void* right_value149;
struct list$1charph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_301, 0, sizeof(struct list$1charph*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&buf_302, 0, sizeof(struct buffer*));
memset(&i_303, 0, sizeof(int));
right_value148 = (void*)0;
right_value149 = (void*)0;
    result_301=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1465, "struct list$1charph"))))))));
    if(right_value144) { come_call_finalizer2(list$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value145) { come_call_finalizer2(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    buf_302=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value146=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1467, "struct buffer"))))))));
    if(right_value146) { come_call_finalizer2(buffer_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value147) { come_call_finalizer2(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    for(
    i_303=0 ,    0;    _for_condtionalA39=    i_303<charp_length(self) ,    _for_condtionalA39;    i_303++ ,    0    ){
        if(_if_conditional112=strstr(self+i_303,str)==self+i_303,        _if_conditional112) {
            list$1charph_push_back(result_301,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(buf_302->buf)))));
            if(right_value148) { right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_reset(buf_302);
            i_303+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_302,self[i_303]);
        }
    }
    if(_if_conditional113=buffer_length(buf_302)!=0,    _if_conditional113) {
        list$1charph_push_back(result_301,(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(buf_302->buf)))));
        if(right_value149) { right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    }
    __result140__ = __result_obj__ = result_301;
    if(result_301) { come_call_finalizer2(list$1charphp_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    if(buf_302) { come_call_finalizer2(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    return __result140__;
    if(result_301) { come_call_finalizer2(list$1charphp_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(buf_302) { come_call_finalizer2(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value150;
void* right_value151;
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
_Bool _for_condtionalA40;
int i_319;
_Bool _for_condtionalA41;
_Bool _if_conditional114;
void* right_value152;
char* str_320;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value153;
char* str_321;
_Bool _if_conditional117;
int i_322;
_Bool _for_condtionalA42;
void* right_value154;
char* match_string_323;
struct list$1charph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
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
right_value152 = (void*)0;
memset(&str_320, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&str_321, 0, sizeof(char*));
memset(&i_322, 0, sizeof(int));
right_value154 = (void*)0;
memset(&match_string_323, 0, sizeof(char*));
    result_304=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1488, "struct list$1charph"))))))));
    if(right_value150) { come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value151) { come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_318=0 ,        0;        _for_condtionalA40=        i_318<ovec_max_306 ,        _for_condtionalA40;        i_318++ ,        0        ){
            start_307[i_318]=ovec_value_309[i_318*2];
        }
        for(
        i_319=0 ,        0;        _for_condtionalA41=        i_319<ovec_max_306 ,        _for_condtionalA41;        i_319++ ,        0        ){
            end_308[i_319]=ovec_value_309[i_319*2+1];
        }
        if(_if_conditional114=regex_result_317==1,        _if_conditional114) {
            str_320=(char*)come_increment_ref_count(((char*)(right_value152=charp_substring(self,start_307[0],end_308[0]))));
            if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            list$1charph_push_back(result_304,(char*)come_increment_ref_count(str_320));
            if(_if_conditional115=offset_305==end_308[0],            _if_conditional115) {
                offset_305++;
            }
            else {
                offset_305=end_308[0];
            }
            if(str_320) { str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional116=regex_result_317>1,            _if_conditional116) {
                str_321=(char*)come_increment_ref_count(((char*)(right_value153=charp_substring(self,start_307[0],end_308[0]))));
                if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                list$1charph_push_back(result_304,(char*)come_increment_ref_count(str_321));
                if(_if_conditional117=offset_305==end_308[0],                _if_conditional117) {
                    offset_305++;
                }
                else {
                    offset_305=end_308[0];
                }
                for(
                i_322=1 ,                0;                _for_condtionalA42=                i_322<regex_result_317 ,                _for_condtionalA42;                i_322++ ,                0                ){
                    match_string_323=(char*)come_increment_ref_count(((char*)(right_value154=charp_substring(self,start_307[i_322],end_308[i_322]))));
                    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(result_304,(char*)come_increment_ref_count(match_string_323));
                    if(match_string_323) { match_string_323 = come_decrement_ref_count2(match_string_323, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(str_321) { str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                break;
            }
        }
    }
    __result141__ = __result_obj__ = result_304;
    if(result_304) { come_call_finalizer2(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result141__;
    if(result_304) { come_call_finalizer2(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_324;
int erro_ofs_325;
int options_326;
char* str_327;
struct real_pcre8_or_16* re_328;
void* right_value155;
void* right_value156;
struct list$1charph* result_329;
int offset_330;
int ovec_max_331;
_Bool _while_condtional18;
int options_335;
int len_336;
int regex_result_337;
int i_338;
_Bool _for_condtionalA43;
int i_339;
_Bool _for_condtionalA44;
_Bool _if_conditional118;
void* right_value157;
char* str_340;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value158;
char* str_341;
_Bool _if_conditional121;
int i_342;
_Bool _for_condtionalA45;
void* right_value159;
char* match_str_343;
_Bool _if_conditional122;
void* right_value160;
char* str_344;
struct list$1charph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_325, 0, sizeof(int));
memset(&options_326, 0, sizeof(int));
memset(&str_327, 0, sizeof(char*));
memset(&re_328, 0, sizeof(struct real_pcre8_or_16*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&result_329, 0, sizeof(struct list$1charph*));
memset(&offset_330, 0, sizeof(int));
memset(&ovec_max_331, 0, sizeof(int));
memset(&options_335, 0, sizeof(int));
memset(&len_336, 0, sizeof(int));
memset(&regex_result_337, 0, sizeof(int));
memset(&i_338, 0, sizeof(int));
memset(&i_339, 0, sizeof(int));
right_value157 = (void*)0;
memset(&str_340, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&str_341, 0, sizeof(char*));
memset(&i_342, 0, sizeof(int));
right_value159 = (void*)0;
memset(&match_str_343, 0, sizeof(char*));
right_value160 = (void*)0;
memset(&str_344, 0, sizeof(char*));
    options_326=reg->options;
    str_327=reg->str;
    re_328=reg->re;
    result_329=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1569, "struct list$1charph"))))))));
    if(right_value155) { come_call_finalizer2(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value156) { come_call_finalizer2(list$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_338=0 ,        0;        _for_condtionalA43=        i_338<ovec_max_331 ,        _for_condtionalA43;        i_338++ ,        0        ){
            start_332[i_338]=ovec_value_334[i_338*2];
        }
        for(
        i_339=0 ,        0;        _for_condtionalA44=        i_339<ovec_max_331 ,        _for_condtionalA44;        i_339++ ,        0        ){
            end_333[i_339]=ovec_value_334[i_339*2+1];
        }
        if(_if_conditional118=regex_result_337==1,        _if_conditional118) {
            str_340=(char*)come_increment_ref_count(((char*)(right_value157=charp_substring(self,offset_330,start_332[0]))));
            if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            list$1charph_push_back(result_329,(char*)come_increment_ref_count(str_340));
            if(_if_conditional119=offset_330==end_333[0],            _if_conditional119) {
                offset_330++;
            }
            else {
                offset_330=end_333[0];
            }
            if(str_340) { str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional120=regex_result_337>1,            _if_conditional120) {
                str_341=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(self,offset_330,start_332[0]))));
                if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                list$1charph_push_back(result_329,(char*)come_increment_ref_count(str_341));
                if(_if_conditional121=offset_330==end_333[0],                _if_conditional121) {
                    offset_330++;
                }
                else {
                    offset_330=end_333[0];
                }
                for(
                i_342=1 ,                0;                _for_condtionalA45=                i_342<regex_result_337 ,                _for_condtionalA45;                i_342++ ,                0                ){
                    match_str_343=(char*)come_increment_ref_count(((char*)(right_value159=charp_substring(self,start_332[i_342],end_333[i_342]))));
                    if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(result_329,(char*)come_increment_ref_count(match_str_343));
                    if(match_str_343) { match_str_343 = come_decrement_ref_count2(match_str_343, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(str_341) { str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional122=offset_330<charp_length(self),    _if_conditional122) {
        str_344=(char*)come_increment_ref_count(((char*)(right_value160=charp_substring(self,offset_330,-1))));
        if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        list$1charph_push_back(result_329,(char*)come_increment_ref_count(str_344));
        if(str_344) { str_344 = come_decrement_ref_count2(str_344, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    __result142__ = __result_obj__ = result_329;
    if(result_329) { come_call_finalizer2(list$1charphp_finalize,result_329, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result142__;
    if(result_329) { come_call_finalizer2(list$1charphp_finalize,result_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
_Bool _for_condtionalA46;
int i_359;
_Bool _for_condtionalA47;
_Bool _if_conditional123;
_Bool __result143__;
_Bool __result144__;
_Bool __result145__;
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
        for(
        i_358=0 ,        0;        _for_condtionalA46=        i_358<ovec_max_346 ,        _for_condtionalA46;        i_358++ ,        0        ){
            start_347[i_358]=ovec_value_349[i_358*2];
        }
        for(
        i_359=0 ,        0;        _for_condtionalA47=        i_359<ovec_max_346 ,        _for_condtionalA47;        i_359++ ,        0        ){
            end_348[i_359]=ovec_value_349[i_359*2+1];
        }
        if(_if_conditional123=regex_result_357>0,        _if_conditional123) {
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
const char* err_360;
int erro_ofs_361;
int options_362;
char* str_363;
struct real_pcre8_or_16* re_364;
void* right_value161;
void* right_value162;
struct list$1charph* result_365;
int offset_366;
int ovec_max_367;
int n_371;
_Bool _while_condtional20;
int options_372;
int len_373;
int regex_result_374;
int i_375;
_Bool _for_condtionalA48;
int i_376;
_Bool _for_condtionalA49;
_Bool _if_conditional124;
void* right_value163;
char* str_377;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value164;
char* str_378;
_Bool _if_conditional127;
int i_379;
_Bool _for_condtionalA50;
void* right_value165;
char* match_str_380;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value166;
char* str_381;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_361, 0, sizeof(int));
memset(&options_362, 0, sizeof(int));
memset(&str_363, 0, sizeof(char*));
memset(&re_364, 0, sizeof(struct real_pcre8_or_16*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&result_365, 0, sizeof(struct list$1charph*));
memset(&offset_366, 0, sizeof(int));
memset(&ovec_max_367, 0, sizeof(int));
memset(&n_371, 0, sizeof(int));
memset(&options_372, 0, sizeof(int));
memset(&len_373, 0, sizeof(int));
memset(&regex_result_374, 0, sizeof(int));
memset(&i_375, 0, sizeof(int));
memset(&i_376, 0, sizeof(int));
right_value163 = (void*)0;
memset(&str_377, 0, sizeof(char*));
right_value164 = (void*)0;
memset(&str_378, 0, sizeof(char*));
memset(&i_379, 0, sizeof(int));
right_value165 = (void*)0;
memset(&match_str_380, 0, sizeof(char*));
right_value166 = (void*)0;
memset(&str_381, 0, sizeof(char*));
    options_362=reg->options;
    str_363=reg->str;
    re_364=reg->re;
    result_365=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1691, "struct list$1charph"))))))));
    if(right_value161) { come_call_finalizer2(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value162) { come_call_finalizer2(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
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
        for(
        i_375=0 ,        0;        _for_condtionalA48=        i_375<ovec_max_367 ,        _for_condtionalA48;        i_375++ ,        0        ){
            start_368[i_375]=ovec_value_370[i_375*2];
        }
        for(
        i_376=0 ,        0;        _for_condtionalA49=        i_376<ovec_max_367 ,        _for_condtionalA49;        i_376++ ,        0        ){
            end_369[i_376]=ovec_value_370[i_376*2+1];
        }
        if(_if_conditional124=regex_result_374==1,        _if_conditional124) {
            str_377=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(self,offset_366,start_368[0]))));
            if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_377));
            if(_if_conditional125=offset_366==end_369[0],            _if_conditional125) {
                offset_366++;
            }
            else {
                offset_366=end_369[0];
            }
            if(str_377) { str_377 = come_decrement_ref_count2(str_377, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional126=regex_result_374>1,            _if_conditional126) {
                str_378=(char*)come_increment_ref_count(((char*)(right_value164=charp_substring(self,offset_366,start_368[0]))));
                if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_378));
                if(_if_conditional127=offset_366==end_369[0],                _if_conditional127) {
                    offset_366++;
                }
                else {
                    offset_366=end_369[0];
                }
                for(
                i_379=1 ,                0;                _for_condtionalA50=                i_379<regex_result_374 ,                _for_condtionalA50;                i_379++ ,                0                ){
                    match_str_380=(char*)come_increment_ref_count(((char*)(right_value165=charp_substring(self,start_368[i_379],end_369[i_379]))));
                    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(result_365,(char*)come_increment_ref_count(match_str_380));
                    if(match_str_380) { match_str_380 = come_decrement_ref_count2(match_str_380, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(str_378) { str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
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
        str_381=(char*)come_increment_ref_count(((char*)(right_value166=charp_substring(self,offset_366,-1))));
        if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_381));
        if(str_381) { str_381 = come_decrement_ref_count2(str_381, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    __result146__ = __result_obj__ = result_365;
    if(result_365) { come_call_finalizer2(list$1charphp_finalize,result_365, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0); }
    return __result146__;
    if(result_365) { come_call_finalizer2(list$1charphp_finalize,result_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_382;
int erro_ofs_383;
int options_384;
char* str_385;
struct real_pcre8_or_16* re_386;
void* right_value167;
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
_Bool _for_condtionalA51;
int i_399;
_Bool _for_condtionalA52;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_383, 0, sizeof(int));
memset(&options_384, 0, sizeof(int));
memset(&str_385, 0, sizeof(char*));
memset(&re_386, 0, sizeof(struct real_pcre8_or_16*));
right_value167 = (void*)0;
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
    self2_387=(char*)come_increment_ref_count(((char*)(right_value167=charp_reverse(self))));
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
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
        for(
        i_398=0 ,        0;        _for_condtionalA51=        i_398<ovec_max_388 ,        _for_condtionalA51;        i_398++ ,        0        ){
            start_389[i_398]=ovec_value_391[i_398*2];
        }
        for(
        i_399=0 ,        0;        _for_condtionalA52=        i_399<ovec_max_388 ,        _for_condtionalA52;        i_399++ ,        0        ){
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
    __result147__ = result_392;
    if(self2_387) { self2_387 = come_decrement_ref_count2(self2_387, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result147__;
    if(self2_387) { self2_387 = come_decrement_ref_count2(self2_387, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
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
_Bool _for_condtionalA53;
int i_415;
_Bool _for_condtionalA54;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool __result148__;
_Bool _if_conditional135;
_Bool __result149__;
_Bool __result150__;
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
        for(
        i_414=0 ,        0;        _for_condtionalA53=        i_414<ovec_max_401 ,        _for_condtionalA53;        i_414++ ,        0        ){
            start_402[i_414]=ovec_value_404[i_414*2];
        }
        for(
        i_415=0 ,        0;        _for_condtionalA54=        i_415<ovec_max_401 ,        _for_condtionalA54;        i_415++ ,        0        ){
            end_403[i_415]=ovec_value_404[i_415*2+1];
        }
        if(_if_conditional133=regex_result_413>0,        _if_conditional133) {
            n_410++;
            if(_if_conditional134=count==n_410,            _if_conditional134) {
                __result148__ = (_Bool)1;
                return __result148__;
            }
            if(_if_conditional135=offset_400==end_403[0],            _if_conditional135) {
                offset_400++;
            }
            else {
                offset_400=end_403[0];
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
int offset_416;
int ovec_max_417;
const char* err_421;
int erro_ofs_422;
int options_423;
char* str_424;
struct real_pcre8_or_16* re_425;
void* right_value168;
void* right_value169;
struct buffer* result_426;
_Bool _while_condtional23;
int options_427;
int len_428;
int regex_result_429;
int i_430;
_Bool _for_condtionalA55;
int i_431;
_Bool _for_condtionalA56;
_Bool _if_conditional136;
void* right_value170;
char* str_432;
void* right_value171;
void* right_value172;
struct list$1charph* group_strings_433;
void* right_value173;
char* match_string_434;
void* right_value174;
void* right_value175;
char* block_result_435;
_Bool _if_conditional137;
void* right_value176;
char* __result151__;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value177;
char* str_436;
_Bool _if_conditional140;
void* right_value178;
char* str_437;
_Bool _if_conditional141;
void* right_value179;
void* right_value180;
struct list$1charph* group_strings_438;
int i_439;
_Bool _for_condtionalA57;
void* right_value181;
char* match_string_440;
void* right_value182;
char* match_string_441;
void* right_value183;
char* block_result_442;
_Bool _if_conditional142;
void* right_value184;
char* __result152__;
_Bool _if_conditional143;
void* right_value185;
char* str_443;
void* right_value186;
char* str_444;
void* right_value187;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_416, 0, sizeof(int));
memset(&ovec_max_417, 0, sizeof(int));
memset(&erro_ofs_422, 0, sizeof(int));
memset(&options_423, 0, sizeof(int));
memset(&str_424, 0, sizeof(char*));
memset(&re_425, 0, sizeof(struct real_pcre8_or_16*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&result_426, 0, sizeof(struct buffer*));
memset(&options_427, 0, sizeof(int));
memset(&len_428, 0, sizeof(int));
memset(&regex_result_429, 0, sizeof(int));
memset(&i_430, 0, sizeof(int));
memset(&i_431, 0, sizeof(int));
right_value170 = (void*)0;
memset(&str_432, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&group_strings_433, 0, sizeof(struct list$1charph*));
right_value173 = (void*)0;
memset(&match_string_434, 0, sizeof(char*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&block_result_435, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&str_436, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&str_437, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&group_strings_438, 0, sizeof(struct list$1charph*));
memset(&i_439, 0, sizeof(int));
right_value181 = (void*)0;
memset(&match_string_440, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&match_string_441, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&block_result_442, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&str_443, 0, sizeof(char*));
right_value186 = (void*)0;
memset(&str_444, 0, sizeof(char*));
right_value187 = (void*)0;
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
    result_426=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1903, "struct buffer"))))))));
    if(right_value168) { come_call_finalizer2(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value169) { come_call_finalizer2(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_427=2097152;
        len_428=strlen(self);
        regex_result_429=pcre_exec(re_425,(struct pcre_extra*)0,self,len_428,offset_416,options_427,ovec_value_420,ovec_max_417*3);
        for(
        i_430=0 ,        0;        _for_condtionalA55=        i_430<ovec_max_417 ,        _for_condtionalA55;        i_430++ ,        0        ){
            start_418[i_430]=ovec_value_420[i_430*2];
        }
        for(
        i_431=0 ,        0;        _for_condtionalA56=        i_431<ovec_max_417 ,        _for_condtionalA56;        i_431++ ,        0        ){
            end_419[i_431]=ovec_value_420[i_431*2+1];
        }
        if(_if_conditional136=regex_result_429==1,        _if_conditional136) {
            str_432=(char*)come_increment_ref_count(((char*)(right_value170=charp_substring(self,offset_416,start_418[0]))));
            if(right_value170) { right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_append_str(result_426,str_432);
            group_strings_433=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1923, "struct list$1charph"))))))));
            if(right_value171) { come_call_finalizer2(list$1charphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(right_value172) { come_call_finalizer2(list$1charphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            match_string_434=(char*)come_increment_ref_count(((char*)(right_value173=charp_substring(self,start_418[0],end_419[0]))));
            if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            list$1charph_push_back(group_strings_433,(char*)come_increment_ref_count(((char*)(right_value174=charp_substring(self,start_418[0],end_419[0])))));
            if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            block_result_435=(char*)come_increment_ref_count(((char*)(right_value175=block(parent,match_string_434,group_strings_433))));
            if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional137=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional137) {
                __result151__ = __result_obj__ = ((char*)(right_value176=buffer_to_string(result_426)));
                if(str_432) { str_432 = come_decrement_ref_count2(str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_433) { come_call_finalizer2(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_434) { match_string_434 = come_decrement_ref_count2(match_string_434, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_435) { block_result_435 = come_decrement_ref_count2(block_result_435, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(result_426) { come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                return __result151__;
            }
            buffer_append_str(result_426,block_result_435);
            if(_if_conditional138=offset_416==end_419[0],            _if_conditional138) {
                offset_416++;
            }
            else {
                offset_416=end_419[0];
            }
            if(_if_conditional139=!reg->global,            _if_conditional139) {
                str_436=(char*)come_increment_ref_count(((char*)(right_value177=charp_substring(self,offset_416,-1))));
                if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_426,str_436);
                if(str_436) { str_436 = come_decrement_ref_count2(str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(str_432) { str_432 = come_decrement_ref_count2(str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_433) { come_call_finalizer2(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_434) { match_string_434 = come_decrement_ref_count2(match_string_434, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_435) { block_result_435 = come_decrement_ref_count2(block_result_435, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_436) { str_436 = come_decrement_ref_count2(str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(str_432) { str_432 = come_decrement_ref_count2(str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(group_strings_433) { come_call_finalizer2(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(match_string_434) { match_string_434 = come_decrement_ref_count2(match_string_434, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(block_result_435) { block_result_435 = come_decrement_ref_count2(block_result_435, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional140=regex_result_429>1,            _if_conditional140) {
                str_437=(char*)come_increment_ref_count(((char*)(right_value178=charp_substring(self,offset_416,start_418[0]))));
                if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_426,str_437);
                if(_if_conditional141=offset_416==end_419[0],                _if_conditional141) {
                    offset_416++;
                }
                else {
                    offset_416=end_419[0];
                }
                group_strings_438=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value180=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1962, "struct list$1charph"))))))));
                if(right_value179) { come_call_finalizer2(list$1charphp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value180) { come_call_finalizer2(list$1charphp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                for(
                i_439=1 ,                0;                _for_condtionalA57=                i_439<regex_result_429 ,                _for_condtionalA57;                i_439++ ,                0                ){
                    match_string_440=(char*)come_increment_ref_count(((char*)(right_value181=charp_substring(self,start_418[i_439],end_419[i_439]))));
                    if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(group_strings_438,(char*)come_increment_ref_count(match_string_440));
                    if(match_string_440) { match_string_440 = come_decrement_ref_count2(match_string_440, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                match_string_441=(char*)come_increment_ref_count(((char*)(right_value182=charp_substring(self,start_418[0],end_419[0]))));
                if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                block_result_442=(char*)come_increment_ref_count(((char*)(right_value183=block(parent,match_string_441,group_strings_438))));
                if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional142=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional142) {
                    __result152__ = __result_obj__ = ((char*)(right_value184=buffer_to_string(result_426)));
                    if(str_437) { str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_438) { come_call_finalizer2(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(match_string_441) { match_string_441 = come_decrement_ref_count2(match_string_441, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(block_result_442) { block_result_442 = come_decrement_ref_count2(block_result_442, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(result_426) { come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    return __result152__;
                }
                buffer_append_str(result_426,block_result_442);
                if(_if_conditional143=!reg->global,                _if_conditional143) {
                    str_443=(char*)come_increment_ref_count(((char*)(right_value185=charp_substring(self,offset_416,-1))));
                    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    buffer_append_str(result_426,str_443);
                    if(str_443) { str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(str_437) { str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_438) { come_call_finalizer2(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(match_string_441) { match_string_441 = come_decrement_ref_count2(match_string_441, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(block_result_442) { block_result_442 = come_decrement_ref_count2(block_result_442, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    break;
                    if(str_443) { str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(str_437) { str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_438) { come_call_finalizer2(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_441) { match_string_441 = come_decrement_ref_count2(match_string_441, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_442) { block_result_442 = come_decrement_ref_count2(block_result_442, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                str_444=(char*)come_increment_ref_count(((char*)(right_value186=charp_substring(self,offset_416,-1))));
                if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_426,str_444);
                if(str_444) { str_444 = come_decrement_ref_count2(str_444, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_444) { str_444 = come_decrement_ref_count2(str_444, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
        }
    }
    __result153__ = __result_obj__ = ((char*)(right_value187=buffer_to_string(result_426)));
    if(result_426) { come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result153__;
    if(result_426) { come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
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
void* right_value188;
void* right_value189;
struct buffer* result_455;
int n_456;
_Bool _while_condtional24;
int options_457;
int len_458;
int regex_result_459;
int i_460;
_Bool _for_condtionalA58;
int i_461;
_Bool _for_condtionalA59;
_Bool _if_conditional144;
void* right_value190;
char* str_462;
void* right_value191;
void* right_value192;
struct list$1charph* group_strings_463;
void* right_value193;
void* right_value194;
char* match_string_464;
void* right_value195;
char* block_result_465;
_Bool _if_conditional145;
void* right_value196;
char* __result154__;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value197;
char* str_466;
_Bool _if_conditional148;
void* right_value198;
char* str_467;
_Bool _if_conditional149;
void* right_value199;
char* str_468;
_Bool _if_conditional150;
void* right_value200;
void* right_value201;
struct list$1charph* group_strings_469;
int i_470;
_Bool _for_condtionalA60;
void* right_value202;
char* match_string_471;
void* right_value203;
char* match_string_472;
void* right_value204;
char* block_result_473;
_Bool _if_conditional151;
void* right_value205;
char* __result155__;
_Bool _if_conditional152;
void* right_value206;
char* str_474;
_Bool _if_conditional153;
void* right_value207;
char* str_475;
void* right_value208;
char* str_476;
void* right_value209;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_445, 0, sizeof(int));
memset(&ovec_max_446, 0, sizeof(int));
memset(&erro_ofs_451, 0, sizeof(int));
memset(&options_452, 0, sizeof(int));
memset(&str_453, 0, sizeof(char*));
memset(&re_454, 0, sizeof(struct real_pcre8_or_16*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&result_455, 0, sizeof(struct buffer*));
memset(&n_456, 0, sizeof(int));
memset(&options_457, 0, sizeof(int));
memset(&len_458, 0, sizeof(int));
memset(&regex_result_459, 0, sizeof(int));
memset(&i_460, 0, sizeof(int));
memset(&i_461, 0, sizeof(int));
right_value190 = (void*)0;
memset(&str_462, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&group_strings_463, 0, sizeof(struct list$1charph*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&match_string_464, 0, sizeof(char*));
right_value195 = (void*)0;
memset(&block_result_465, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&str_466, 0, sizeof(char*));
right_value198 = (void*)0;
memset(&str_467, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&str_468, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&group_strings_469, 0, sizeof(struct list$1charph*));
memset(&i_470, 0, sizeof(int));
right_value202 = (void*)0;
memset(&match_string_471, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&match_string_472, 0, sizeof(char*));
right_value204 = (void*)0;
memset(&block_result_473, 0, sizeof(char*));
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&str_474, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&str_475, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&str_476, 0, sizeof(char*));
right_value209 = (void*)0;
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
    result_455=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value189=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value188=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2011, "struct buffer"))))))));
    if(right_value188) { come_call_finalizer2(buffer_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    if(right_value189) { come_call_finalizer2(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
    n_456=0;
    while(_while_condtional24=(_Bool)1,    _while_condtional24) {
        options_457=2097152;
        len_458=strlen(self);
        regex_result_459=pcre_exec(re_454,(struct pcre_extra*)0,self,len_458,offset_445,options_457,ovec_value_449,ovec_max_446*3);
        for(
        i_460=0 ,        0;        _for_condtionalA58=        i_460<ovec_max_446 ,        _for_condtionalA58;        i_460++ ,        0        ){
            start_447[i_460]=ovec_value_449[i_460*2];
        }
        for(
        i_461=0 ,        0;        _for_condtionalA59=        i_461<ovec_max_446 ,        _for_condtionalA59;        i_461++ ,        0        ){
            end_448[i_461]=ovec_value_449[i_461*2+1];
        }
        if(_if_conditional144=regex_result_459==1,        _if_conditional144) {
            n_456++;
            str_462=(char*)come_increment_ref_count(((char*)(right_value190=charp_substring(self,offset_445,start_447[0]))));
            if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            buffer_append_str(result_455,str_462);
            group_strings_463=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2034, "struct list$1charph"))))))));
            if(right_value191) { come_call_finalizer2(list$1charphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            if(right_value192) { come_call_finalizer2(list$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
            list$1charph_push_back(group_strings_463,(char*)come_increment_ref_count(((char*)(right_value193=charp_substring(self,start_447[0],end_448[0])))));
            if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            match_string_464=(char*)come_increment_ref_count(((char*)(right_value194=charp_substring(self,start_447[0],end_448[0]))));
            if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            block_result_465=(char*)come_increment_ref_count(((char*)(right_value195=block(parent,match_string_464,group_strings_463))));
            if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            if(_if_conditional145=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional145) {
                __result154__ = __result_obj__ = ((char*)(right_value196=buffer_to_string(result_455)));
                if(str_462) { str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_463) { come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_464) { match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_465) { block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(result_455) { come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                return __result154__;
            }
            buffer_append_str(result_455,block_result_465);
            if(_if_conditional146=offset_445==end_448[0],            _if_conditional146) {
                offset_445++;
            }
            else {
                offset_445=end_448[0];
            }
            if(_if_conditional147=!reg->global,            _if_conditional147) {
                str_466=(char*)come_increment_ref_count(((char*)(right_value197=charp_substring(self,offset_445,-1))));
                if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_455,str_466);
                if(str_466) { str_466 = come_decrement_ref_count2(str_466, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(str_462) { str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_463) { come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_464) { match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_465) { block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_466) { str_466 = come_decrement_ref_count2(str_466, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional148=n_456==count,            _if_conditional148) {
                str_467=(char*)come_increment_ref_count(((char*)(right_value198=charp_substring(self,offset_445,-1))));
                if(right_value198) { right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_455,str_467);
                if(str_467) { str_467 = come_decrement_ref_count2(str_467, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(str_462) { str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_463) { come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_464) { match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_465) { block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_467) { str_467 = come_decrement_ref_count2(str_467, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(str_462) { str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(group_strings_463) { come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
            if(match_string_464) { match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            if(block_result_465) { block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        else {
            if(_if_conditional149=regex_result_459>1,            _if_conditional149) {
                n_456++;
                str_468=(char*)come_increment_ref_count(((char*)(right_value199=charp_substring(self,offset_445,start_447[0]))));
                if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_455,str_468);
                if(_if_conditional150=offset_445==end_448[0],                _if_conditional150) {
                    offset_445++;
                }
                else {
                    offset_445=end_448[0];
                }
                group_strings_469=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2081, "struct list$1charph"))))))));
                if(right_value200) { come_call_finalizer2(list$1charphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                if(right_value201) { come_call_finalizer2(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__); }
                for(
                i_470=1 ,                0;                _for_condtionalA60=                i_470<regex_result_459 ,                _for_condtionalA60;                i_470++ ,                0                ){
                    match_string_471=(char*)come_increment_ref_count(((char*)(right_value202=charp_substring(self,start_447[i_470],end_448[i_470]))));
                    if(right_value202) { right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    list$1charph_push_back(group_strings_469,(char*)come_increment_ref_count(match_string_471));
                    if(match_string_471) { match_string_471 = come_decrement_ref_count2(match_string_471, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                match_string_472=(char*)come_increment_ref_count(((char*)(right_value203=charp_substring(self,start_447[0],end_448[0]))));
                if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                block_result_473=(char*)come_increment_ref_count(((char*)(right_value204=block(parent,match_string_472,group_strings_469))));
                if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(_if_conditional151=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional151) {
                    __result155__ = __result_obj__ = ((char*)(right_value205=buffer_to_string(result_455)));
                    if(str_468) { str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_469) { come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(match_string_472) { match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(block_result_473) { block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(result_455) { come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    return __result155__;
                }
                buffer_append_str(result_455,block_result_473);
                if(_if_conditional152=!reg->global,                _if_conditional152) {
                    str_474=(char*)come_increment_ref_count(((char*)(right_value206=charp_substring(self,offset_445,-1))));
                    if(right_value206) { right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    buffer_append_str(result_455,str_474);
                    if(str_474) { str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(str_468) { str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_469) { come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(match_string_472) { match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(block_result_473) { block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    break;
                    if(str_474) { str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(_if_conditional153=n_456==count,                _if_conditional153) {
                    str_475=(char*)come_increment_ref_count(((char*)(right_value207=charp_substring(self,offset_445,-1))));
                    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    buffer_append_str(result_455,str_475);
                    if(str_475) { str_475 = come_decrement_ref_count2(str_475, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(str_468) { str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(group_strings_469) { come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                    if(match_string_472) { match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(block_result_473) { block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    break;
                    if(str_475) { str_475 = come_decrement_ref_count2(str_475, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                if(str_468) { str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(group_strings_469) { come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
                if(match_string_472) { match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(block_result_473) { block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                str_476=(char*)come_increment_ref_count(((char*)(right_value208=charp_substring(self,offset_445,-1))));
                if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                buffer_append_str(result_455,str_476);
                if(str_476) { str_476 = come_decrement_ref_count2(str_476, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
                if(str_476) { str_476 = come_decrement_ref_count2(str_476, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
        }
    }
    __result156__ = __result_obj__ = ((char*)(right_value209=buffer_to_string(result_455)));
    if(result_455) { come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
    if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result156__;
    if(result_455) { come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0); }
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
void* __result_obj__;
int result_477;
unsigned int* p_478;
_Bool _while_condtional25;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_477, 0, sizeof(int));
memset(&p_478, 0, sizeof(unsigned int*));
    result_477=0;
    p_478=value;
    while(_while_condtional25=*p_478,    _while_condtional25) {
        result_477+=(*p_478);
        p_478++;
    }
    __result157__ = result_477;
    return __result157__;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = wcscmp(left,right)==0;
    return __result159__;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = left==right;
    return __result161__;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = left!=right;
    return __result162__;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
void* __result_obj__;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = value;
    return __result163__;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = left==right;
    return __result164__;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__;
void* right_value210;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    __result165__ = __result_obj__ = ((char*)(right_value210=xsprintf("%ls",wc)));
    if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result165__;
}

char* string_chomp(char* str){
void* __result_obj__;
void* right_value211;
char* result_479;
_Bool _if_conditional154;
void* right_value212;
char* __result166__;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&result_479, 0, sizeof(char*));
right_value212 = (void*)0;
    result_479=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(str))));
    if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    if(_if_conditional154=result_479[string_length(result_479)-1]==10,    _if_conditional154) {
        __result166__ = __result_obj__ = ((char*)(right_value212=string_substring(result_479,0,-2)));
        if(result_479) { result_479 = come_decrement_ref_count2(result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        return __result166__;
    }
    __result167__ = __result_obj__ = result_479;
    if(result_479) { result_479 = come_decrement_ref_count2(result_479, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
    return __result167__;
    if(result_479) { result_479 = come_decrement_ref_count2(result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

