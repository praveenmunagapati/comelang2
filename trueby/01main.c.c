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
struct sMethod
{
    char* mName;
    struct list$1tuple2$2charphsTypephph* mParams;
    _Bool mNative;
    struct sType* mResultType;
};
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
struct map$2charphsMethodph
{
    char** keys;
    _Bool* item_existance;
    struct sMethod** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sClass
{
    char* mName;
    struct map$2charphsMethodph* mMethods;
    struct map$2charphsMethodph* mClassMethods;
};
struct sType;
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
struct sType
{
    struct sClass* mClass;
    struct list$1sTypeph* mMultipleTypes;
    struct list$1sTypeph* mGenericsTypes;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
};
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sModule
{
    char* mLastCode;
    struct buffer* mSource;
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
struct sInfo
{
    struct buffer* source;
    struct smart_pointer$1char* p;
    char* sname;
    int sline;
    struct list$1CVALUEph* stack;
    struct sType* type;
    struct map$2charphsClassph* classes;
    _Bool no_output_come_code;
    int err_num;
    struct sModule* module;
    _Bool no_output_err;
    int nest;
    struct sClass* current_class;
    struct map$2charphsMethodph* methods;
    struct map$2charphsVarph* lv_table;
};
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
struct sIntNode
{
    int value;
    int sline;
    char* sname;
};
struct sAddNode
{
    struct sNode* left_node;
    struct sNode* right_node;
    int sline;
    char* sname;
};
struct sSubNode
{
    struct sNode* left_node;
    struct sNode* right_node;
    int sline;
    char* sname;
};
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
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
struct sClassNode
{
    char* name;
    struct list$1sNodeph* nodes;
    _Bool native_;
    int sline;
    char* sname;
};
struct sFunNode
{
    char* name;
    struct list$1sNodeph* nodes;
    struct list$1tuple2$2charphsTypephph* params;
    struct sType* result_type;
    _Bool native_;
    int sline;
    char* sname;
};
struct sKernelMethodCall
{
    char* name;
    struct list$1sNodeph* params;
    int sline;
    char* sname;
};
struct sClassMethodCall
{
    char* name;
    char* method_name;
    struct list$1sNodeph* params;
    int sline;
    char* sname;
};
struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph
{
    struct list$1tuple2$2charphsTypephph* v1;
    struct sType* v2;
};
struct sMethodCall
{
    struct sNode* obj;
    char* name;
    struct list$1sNodeph* params;
    int sline;
    char* sname;
};
struct sStoreLocalVariable
{
    char* name;
    struct sNode* right_value;
    _Bool alloc;
    struct sType* var_type;
    int sline;
    char* sname;
};
struct sLoadLocalVariable
{
    char* name;
    int sline;
    char* sname;
};
struct sType;
struct sType;

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

void dec_stack_ptr(int value, struct sInfo* info);

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct list$1sNodeph* nodes, _Bool native_, struct sInfo* info);

char* sClassNode_kind();

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);

_Bool sClassNode_terminated();

int sClassNode_sline(struct sClassNode* self, struct sInfo* info);

char* sClassNode_sname(struct sClassNode* self, struct sInfo* info);

struct sFunNode* sFunNode_initialize(struct sFunNode* self, char* name, struct list$1tuple2$2charphsTypephph* params, struct sType* result_type, struct list$1sNodeph* nodes, _Bool native_, struct sInfo* info);

char* sFunNode_kind();

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

struct sKernelMethodCall* sKernelMethodCall_initialize(struct sKernelMethodCall* self, char* name, struct list$1sNodeph* params, struct sInfo* info);

char* sKernelMethodCall_kind();

void check_assign_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

_Bool sKernelMethodCall_compile(struct sKernelMethodCall* self, struct sInfo* info);

_Bool sKernelMethodCall_terminated();

int sKernelMethodCall_sline(struct sKernelMethodCall* self, struct sInfo* info);

char* sKernelMethodCall_sname(struct sKernelMethodCall* self, struct sInfo* info);

struct sClassMethodCall* sClassMethodCall_initialize(struct sClassMethodCall* self, char* name, char* method_name, struct list$1sNodeph* params, struct sInfo* info);

char* sClassMethodCall_kind();

_Bool sClassMethodCall_compile(struct sClassMethodCall* self, struct sInfo* info);

_Bool sClassMethodCall_terminated();

int sClassMethodCall_sline(struct sClassMethodCall* self, struct sInfo* info);

char* sClassMethodCall_sname(struct sClassMethodCall* self, struct sInfo* info);

char* parse_word(struct sInfo* info);

_Bool parse_cmp(char* word, struct sInfo* info);

struct sNode* parse_class(char* name, _Bool native_, struct sInfo* info);

struct sType* parse_type(struct sInfo* info);

struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* parse_params(struct sInfo* info);

struct list$1sNodeph* parse_calling_params(struct sInfo* info);

struct sNode* parse_fun(char* name, struct sInfo* info);

void expected_next_character(char c, struct sInfo* info);

struct sNode* string_node(char* buf, struct sInfo* info);

struct sNode* expression_v2(struct sInfo* info);

struct sMethodCall* sMethodCall_initialize(struct sMethodCall* self, struct sNode* obj, char* name, struct list$1sNodeph* params, struct sInfo* info);

char* sMethodCall_kind();

_Bool sMethodCall_compile(struct sMethodCall* self, struct sInfo* info);

_Bool sMethodCall_terminated();

int sMethodCall_sline(struct sMethodCall* self, struct sInfo* info);

char* sMethodCall_sname(struct sMethodCall* self, struct sInfo* info);

struct sNode* post_expression(struct sNode* node, struct sInfo* info);

struct sNode* expression_v3(struct sInfo* info);

struct sStoreLocalVariable* sStoreLocalVariable_initialize(struct sStoreLocalVariable* self, char* name, struct sNode* right_value, _Bool alloc, struct sType* var_type, struct sInfo* info);

char* sStoreLocalVariable_kind();

_Bool sStoreLocalVariable_compile(struct sStoreLocalVariable* self, struct sInfo* info);

_Bool sStoreLocalVariable_terminated();

int sStoreLocalVariable_sline(struct sStoreLocalVariable* self, struct sInfo* info);

char* sStoreLocalVariable_sname(struct sStoreLocalVariable* self, struct sInfo* info);

struct sLoadLocalVariable* sLoadLocalVariable_initialize(struct sLoadLocalVariable* self, char* name, struct sInfo* info);

char* sLoadLocalVariable_kind();

_Bool sLoadLocalVariable_compile(struct sLoadLocalVariable* self, struct sInfo* info);

_Bool sLoadLocalVariable_terminated();

int sLoadLocalVariable_sline(struct sLoadLocalVariable* self, struct sInfo* info);

char* sLoadLocalVariable_sname(struct sLoadLocalVariable* self, struct sInfo* info);

struct sNode* string_node_v2(char* buf, struct sInfo* info);

struct sMethod* sMethod_initialize(struct sMethod* self, char* name, struct list$1tuple2$2charphsTypephph* params, struct sType* result_type, _Bool native_);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void sMethod_finalize(struct sMethod* self);
struct sClass* sClass_initialize(struct sClass* self, char* name);

static struct map$2charphsMethodph* map$2charphsMethodph_initialize(struct map$2charphsMethodph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsMethodphp_finalize(struct map$2charphsMethodph* self);
static void map$2charphsMethodph_finalize(struct map$2charphsMethodph* self);
static void sClass_finalize(struct sClass* self);
struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_without_nest(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void err_msg(struct sInfo* info, char* msg, ...);

void skip_spaces_and_lf(struct sInfo* info);

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self);
static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self);
struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
_Bool sIntNode_terminated();

int sIntNode_sline(struct sIntNode* self, struct sInfo* info);

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left_node, struct sNode* right_node, struct sInfo* info);

char* sAddNode_kind();

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

_Bool sAddNode_terminated();

int sAddNode_sline(struct sAddNode* self, struct sInfo* info);

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left_node, struct sNode* right_node, struct sInfo* info);

char* sSubNode_kind();

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

_Bool sSubNode_terminated();

int sSubNode_sline(struct sSubNode* self, struct sInfo* info);

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info);

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sNode* expression_node(struct sInfo* info);

static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sNode* add_sub_expression_node(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sNode* sNode_clone(struct sNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* expression_v1(struct sInfo* info);

_Bool output_source(struct sInfo* info);

void init_typed_ruby(struct sInfo* info);

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
int main(int argc, char** argv);

static void smart_pointer$1char_finalize(struct smart_pointer$1char* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sInfo_finalize(struct sInfo* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "/usr/local/include/comelang2.h"
    perror(msg);
    # 51 "/usr/local/include/comelang2.h"
    stackframe();
    # 52 "/usr/local/include/comelang2.h"
    exit(4);
    # 54 "/usr/local/include/comelang2.h"
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
    # 1950 "/usr/local/include/comelang2.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1950, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1951 "/usr/local/include/comelang2.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1952 "/usr/local/include/comelang2.h"
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
    # 1957 "/usr/local/include/comelang2.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1957, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1958 "/usr/local/include/comelang2.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1959 "/usr/local/include/comelang2.h"
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
    # 1964 "/usr/local/include/comelang2.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1964, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1965 "/usr/local/include/comelang2.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1966 "/usr/local/include/comelang2.h"
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
    # 1971 "/usr/local/include/comelang2.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1971, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1972 "/usr/local/include/comelang2.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1973 "/usr/local/include/comelang2.h"
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
    # 1978 "/usr/local/include/comelang2.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1978, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1979 "/usr/local/include/comelang2.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1980 "/usr/local/include/comelang2.h"
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
    # 1985 "/usr/local/include/comelang2.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 1985, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1986 "/usr/local/include/comelang2.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1987 "/usr/local/include/comelang2.h"
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
    # 2000 "/usr/local/include/comelang2.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2000, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2002 "/usr/local/include/comelang2.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2003 "/usr/local/include/comelang2.h"
    result_6->p=result_6->memory->buf;
    # 2005 "/usr/local/include/comelang2.h"
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
    # 2010 "/usr/local/include/comelang2.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2010, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2012 "/usr/local/include/comelang2.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2013 "/usr/local/include/comelang2.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2015 "/usr/local/include/comelang2.h"
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
    # 2020 "/usr/local/include/comelang2.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 2020, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2022 "/usr/local/include/comelang2.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2023 "/usr/local/include/comelang2.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2025 "/usr/local/include/comelang2.h"
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
    # 2030 "/usr/local/include/comelang2.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 2030, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2032 "/usr/local/include/comelang2.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2033 "/usr/local/include/comelang2.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2035 "/usr/local/include/comelang2.h"
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
    # 2040 "/usr/local/include/comelang2.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 2040, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2042 "/usr/local/include/comelang2.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2043 "/usr/local/include/comelang2.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2045 "/usr/local/include/comelang2.h"
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
    # 2208 "/usr/local/include/comelang2.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2208, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    # 2213 "/usr/local/include/comelang2.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 2213, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    # 2218 "/usr/local/include/comelang2.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 2218, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    # 2223 "/usr/local/include/comelang2.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 2223, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    # 2228 "/usr/local/include/comelang2.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang2.h", 2228, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    # 2233 "/usr/local/include/comelang2.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang2.h", 2233, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2262 "/usr/local/include/comelang2.h"
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2267 "/usr/local/include/comelang2.h"
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2272 "/usr/local/include/comelang2.h"
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2277 "/usr/local/include/comelang2.h"
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2282 "/usr/local/include/comelang2.h"
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2287 "/usr/local/include/comelang2.h"
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    # 2348 "/usr/local/include/comelang2.h"
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
    # 2353 "/usr/local/include/comelang2.h"
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
    # 2358 "/usr/local/include/comelang2.h"
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
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
        # 2052 "/usr/local/include/comelang2.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "/usr/local/include/comelang2.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2056 "/usr/local/include/comelang2.h"
        self->p=(char*)self->memory->buf;
        # 2058 "/usr/local/include/comelang2.h"
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
        # 2052 "/usr/local/include/comelang2.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "/usr/local/include/comelang2.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2056 "/usr/local/include/comelang2.h"
        self->p=(short short*)self->memory->buf;
        # 2058 "/usr/local/include/comelang2.h"
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
        # 2052 "/usr/local/include/comelang2.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "/usr/local/include/comelang2.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2056 "/usr/local/include/comelang2.h"
        self->p=(int*)self->memory->buf;
        # 2058 "/usr/local/include/comelang2.h"
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
        # 2052 "/usr/local/include/comelang2.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "/usr/local/include/comelang2.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2056 "/usr/local/include/comelang2.h"
        self->p=(long*)self->memory->buf;
        # 2058 "/usr/local/include/comelang2.h"
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
        # 2052 "/usr/local/include/comelang2.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "/usr/local/include/comelang2.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2056 "/usr/local/include/comelang2.h"
        self->p=(float*)self->memory->buf;
        # 2058 "/usr/local/include/comelang2.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
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
        # 2052 "/usr/local/include/comelang2.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang2.h", 2052, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2054 "/usr/local/include/comelang2.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2056 "/usr/local/include/comelang2.h"
        self->p=(double*)self->memory->buf;
        # 2058 "/usr/local/include/comelang2.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










struct sMethod* sMethod_initialize(struct sMethod* self, char* name, struct list$1tuple2$2charphsTypephph* params, struct sType* result_type, _Bool native_){
void* __result_obj__;
void* right_value49;
char* __dec_obj12;
void* right_value68;
struct list$1tuple2$2charphsTypephph* __dec_obj23;
struct sType* __dec_obj24;
struct sMethod* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value68 = (void*)0;
    # 16 "01main.c"
    __dec_obj12=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 17 "01main.c"
    __dec_obj23=self->mParams;
    self->mParams=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value68=list$1tuple2$2charphsTypephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 18 "01main.c"
    self->mNative=native_;
    # 19 "01main.c"
    __dec_obj24=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 21 "01main.c"
    __result46__ = __result_obj__ = self;
    come_call_finalizer2(sMethod_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result46__;
    come_call_finalizer2(sMethod_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional7;
struct list$1tuple2$2charphsTypephph* __result34__;
void* right_value50;
void* right_value51;
struct list$1tuple2$2charphsTypephph* result_15;
struct list_item$1tuple2$2charphsTypephph* it_16;
_Bool _while_condtional3;
void* right_value67;
struct list$1tuple2$2charphsTypephph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_16, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value67 = (void*)0;
        # 142 "/usr/local/include/comelang2.h"
        # 139 "/usr/local/include/comelang2.h"
        if(_if_conditional7=self==((void*)0),        _if_conditional7) {
            # 140 "/usr/local/include/comelang2.h"
            __result34__ = __result_obj__ = ((void*)0);
            return __result34__;
        }
        # 142 "/usr/local/include/comelang2.h"
        result_15=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value51=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value50=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "/usr/local/include/comelang2.h"
        it_16=self->head;
        # 151 "/usr/local/include/comelang2.h"
        while(_while_condtional3=it_16!=((void*)0),        _while_condtional3) {
            # 146 "/usr/local/include/comelang2.h"
            list$1tuple2$2charphsTypephph_add(result_15,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value67=tuple2$2charphsTypephp_clone(it_16->item)))));
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "/usr/local/include/comelang2.h"
            it_16=it_16->next;
        }
        # 151 "/usr/local/include/comelang2.h"
        __result45__ = __result_obj__ = result_15;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result45__;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "/usr/local/include/comelang2.h"
            self->head=((void*)0);
            # 105 "/usr/local/include/comelang2.h"
            self->tail=((void*)0);
            # 106 "/usr/local/include/comelang2.h"
            self->len=0;
            # 108 "/usr/local/include/comelang2.h"
            __result35__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result35__;
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_11;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 123 "/usr/local/include/comelang2.h"
                it_11=self->head;
                # 129 "/usr/local/include/comelang2.h"
                while(_while_condtional1=it_11!=((void*)0),                _while_condtional1) {
                    # 125 "/usr/local/include/comelang2.h"
                    prev_it_12=it_11;
                    # 126 "/usr/local/include/comelang2.h"
                    it_11=it_11->next;
                    # 127 "/usr/local/include/comelang2.h"
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional8) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypephp_finalize"
                                # 0 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional9) {
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypephp_finalize"
                                # 1 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional10) {
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional11=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional11) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional13) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                                                # 123 "/usr/local/include/comelang2.h"
                                                it_13=self->head;
                                                # 129 "/usr/local/include/comelang2.h"
                                                while(_while_condtional2=it_13!=((void*)0),                                                _while_condtional2) {
                                                    # 125 "/usr/local/include/comelang2.h"
                                                    prev_it_14=it_13;
                                                    # 126 "/usr/local/include/comelang2.h"
                                                    it_13=it_13->next;
                                                    # 127 "/usr/local/include/comelang2.h"
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional12) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional14;
void* right_value52;
struct list_item$1tuple2$2charphsTypephph* litem_17;
struct tuple2$2charphsTypeph* __dec_obj13;
_Bool _if_conditional17;
void* right_value53;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj14;
void* right_value54;
struct list_item$1tuple2$2charphsTypephph* litem_19;
struct tuple2$2charphsTypeph* __dec_obj15;
struct list$1tuple2$2charphsTypephph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value53 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value54 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 186 "/usr/local/include/comelang2.h"
                # 155 "/usr/local/include/comelang2.h"
                if(_if_conditional14=self->len==0,                _if_conditional14) {
                    # 156 "/usr/local/include/comelang2.h"
                    litem_17=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value52=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "/usr/local/include/comelang2.h"
                    litem_17->prev=((void*)0);
                    # 159 "/usr/local/include/comelang2.h"
                    litem_17->next=((void*)0);
                    # 160 "/usr/local/include/comelang2.h"
                    __dec_obj13=litem_17->item;
                    litem_17->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "/usr/local/include/comelang2.h"
                    self->tail=litem_17;
                    # 163 "/usr/local/include/comelang2.h"
                    self->head=litem_17;
                }
                else {
                    # 186 "/usr/local/include/comelang2.h"
                    # 165 "/usr/local/include/comelang2.h"
                    if(_if_conditional17=self->len==1,                    _if_conditional17) {
                        # 166 "/usr/local/include/comelang2.h"
                        litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value53=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "/usr/local/include/comelang2.h"
                        litem_18->prev=self->head;
                        # 169 "/usr/local/include/comelang2.h"
                        litem_18->next=((void*)0);
                        # 170 "/usr/local/include/comelang2.h"
                        __dec_obj14=litem_18->item;
                        litem_18->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "/usr/local/include/comelang2.h"
                        self->tail=litem_18;
                        # 173 "/usr/local/include/comelang2.h"
                        self->head->next=litem_18;
                    }
                    else {
                        # 176 "/usr/local/include/comelang2.h"
                        litem_19=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value54=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "/usr/local/include/comelang2.h"
                        litem_19->prev=self->tail;
                        # 179 "/usr/local/include/comelang2.h"
                        litem_19->next=((void*)0);
                        # 180 "/usr/local/include/comelang2.h"
                        __dec_obj15=litem_19->item;
                        litem_19->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "/usr/local/include/comelang2.h"
                        self->tail->next=litem_19;
                        # 183 "/usr/local/include/comelang2.h"
                        self->tail=litem_19;
                    }
                }
                # 186 "/usr/local/include/comelang2.h"
                self->len++;
                # 188 "/usr/local/include/comelang2.h"
                __result36__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result36__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsTypeph_finalize"
                        # 0 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional15=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional15) {
                            # 0 "tuple2$2charphsTypeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsTypeph_finalize"
                        # 1 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional16=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional16) {
                            # 1 "tuple2$2charphsTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional18;
struct tuple2$2charphsTypeph* __result37__;
void* right_value55;
struct tuple2$2charphsTypeph* result_20;
_Bool _if_conditional19;
void* right_value56;
char* __dec_obj16;
_Bool _if_conditional20;
void* right_value66;
struct sType* __dec_obj22;
struct tuple2$2charphsTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&result_20, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value56 = (void*)0;
right_value66 = (void*)0;
                # 3 "tuple2$2charphsTypephp_clone"
                # 2 "tuple2$2charphsTypephp_clone"
                if(_if_conditional18=self==(void*)0,                _if_conditional18) {
                    # 2 "tuple2$2charphsTypephp_clone"
                    __result37__ = __result_obj__ = (void*)0;
                    return __result37__;
                }
                # 3 "tuple2$2charphsTypephp_clone"
                result_20=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value55=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsTypephp_clone"
                # 4 "tuple2$2charphsTypephp_clone"
                if(_if_conditional19=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional19) {
                    # 4 "tuple2$2charphsTypephp_clone"
                    __dec_obj16=result_20->v1;
                    result_20->v1=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->v1))));
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsTypephp_clone"
                # 5 "tuple2$2charphsTypephp_clone"
                if(_if_conditional20=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional20) {
                    # 5 "tuple2$2charphsTypephp_clone"
                    __dec_obj22=result_20->v2;
                    result_20->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(self->v2))));
                    come_call_finalizer2(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsTypephp_clone"
                __result44__ = __result_obj__ = result_20;
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result44__;
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
struct sType* __result38__;
void* right_value57;
struct sType* result_21;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value64;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional27;
void* right_value65;
struct list$1sTypeph* __dec_obj21;
struct sType* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_21, 0, sizeof(struct sType*));
right_value64 = (void*)0;
right_value65 = (void*)0;
                        # 3 "sType_clone"
                        # 2 "sType_clone"
                        if(_if_conditional21=self==(void*)0,                        _if_conditional21) {
                            # 2 "sType_clone"
                            __result38__ = __result_obj__ = (void*)0;
                            return __result38__;
                        }
                        # 3 "sType_clone"
                        result_21=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                        come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sType_clone"
                        # 4 "sType_clone"
                        if(_if_conditional22=self!=((void*)0),                        _if_conditional22) {
                            # 4 "sType_clone"
                            result_21->mClass=self->mClass;
                        }
                        # 6 "sType_clone"
                        # 5 "sType_clone"
                        if(_if_conditional23=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                        _if_conditional23) {
                            # 5 "sType_clone"
                            __dec_obj20=result_21->mMultipleTypes;
                            result_21->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypeph_clone(self->mMultipleTypes))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sType_clone"
                        # 6 "sType_clone"
                        if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                        _if_conditional27) {
                            # 6 "sType_clone"
                            __dec_obj21=result_21->mGenericsTypes;
                            result_21->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypeph_clone(self->mGenericsTypes))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sType_clone"
                        __result43__ = __result_obj__ = result_21;
                        come_call_finalizer2(sType_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result43__;
                        come_call_finalizer2(sType_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
struct list$1sTypeph* __result39__;
void* right_value58;
void* right_value59;
struct list$1sTypeph* result_22;
struct list_item$1sTypeph* it_23;
_Bool _while_condtional4;
void* right_value63;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&result_22, 0, sizeof(struct list$1sTypeph*));
memset(&it_23, 0, sizeof(struct list_item$1sTypeph*));
right_value63 = (void*)0;
                                # 142 "/usr/local/include/comelang2.h"
                                # 139 "/usr/local/include/comelang2.h"
                                if(_if_conditional24=self==((void*)0),                                _if_conditional24) {
                                    # 140 "/usr/local/include/comelang2.h"
                                    __result39__ = __result_obj__ = ((void*)0);
                                    return __result39__;
                                }
                                # 142 "/usr/local/include/comelang2.h"
                                result_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sTypeph"))))))));
                                come_call_finalizer2(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 144 "/usr/local/include/comelang2.h"
                                it_23=self->head;
                                # 151 "/usr/local/include/comelang2.h"
                                while(_while_condtional4=it_23!=((void*)0),                                _while_condtional4) {
                                    # 146 "/usr/local/include/comelang2.h"
                                    list$1sTypeph_add(result_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(it_23->item)))));
                                    come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 148 "/usr/local/include/comelang2.h"
                                    it_23=it_23->next;
                                }
                                # 151 "/usr/local/include/comelang2.h"
                                __result42__ = __result_obj__ = result_22;
                                come_call_finalizer2(list$1sTypephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result42__;
                                come_call_finalizer2(list$1sTypephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 104 "/usr/local/include/comelang2.h"
                                    self->head=((void*)0);
                                    # 105 "/usr/local/include/comelang2.h"
                                    self->tail=((void*)0);
                                    # 106 "/usr/local/include/comelang2.h"
                                    self->len=0;
                                    # 108 "/usr/local/include/comelang2.h"
                                    __result40__ = __result_obj__ = self;
                                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result40__;
                                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional25;
void* right_value60;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj17;
_Bool _if_conditional26;
void* right_value61;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj18;
void* right_value62;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj19;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
right_value61 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
right_value62 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*));
                                        # 186 "/usr/local/include/comelang2.h"
                                        # 155 "/usr/local/include/comelang2.h"
                                        if(_if_conditional25=self->len==0,                                        _if_conditional25) {
                                            # 156 "/usr/local/include/comelang2.h"
                                            litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value60=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sTypeph"))));
                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 158 "/usr/local/include/comelang2.h"
                                            litem_24->prev=((void*)0);
                                            # 159 "/usr/local/include/comelang2.h"
                                            litem_24->next=((void*)0);
                                            # 160 "/usr/local/include/comelang2.h"
                                            __dec_obj17=litem_24->item;
                                            litem_24->item=(struct sType*)come_increment_ref_count(item);
                                            come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            # 162 "/usr/local/include/comelang2.h"
                                            self->tail=litem_24;
                                            # 163 "/usr/local/include/comelang2.h"
                                            self->head=litem_24;
                                        }
                                        else {
                                            # 186 "/usr/local/include/comelang2.h"
                                            # 165 "/usr/local/include/comelang2.h"
                                            if(_if_conditional26=self->len==1,                                            _if_conditional26) {
                                                # 166 "/usr/local/include/comelang2.h"
                                                litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sTypeph"))));
                                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 168 "/usr/local/include/comelang2.h"
                                                litem_25->prev=self->head;
                                                # 169 "/usr/local/include/comelang2.h"
                                                litem_25->next=((void*)0);
                                                # 170 "/usr/local/include/comelang2.h"
                                                __dec_obj18=litem_25->item;
                                                litem_25->item=(struct sType*)come_increment_ref_count(item);
                                                come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 172 "/usr/local/include/comelang2.h"
                                                self->tail=litem_25;
                                                # 173 "/usr/local/include/comelang2.h"
                                                self->head->next=litem_25;
                                            }
                                            else {
                                                # 176 "/usr/local/include/comelang2.h"
                                                litem_26=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sTypeph"))));
                                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 178 "/usr/local/include/comelang2.h"
                                                litem_26->prev=self->tail;
                                                # 179 "/usr/local/include/comelang2.h"
                                                litem_26->next=((void*)0);
                                                # 180 "/usr/local/include/comelang2.h"
                                                __dec_obj19=litem_26->item;
                                                litem_26->item=(struct sType*)come_increment_ref_count(item);
                                                come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 182 "/usr/local/include/comelang2.h"
                                                self->tail->next=litem_26;
                                                # 183 "/usr/local/include/comelang2.h"
                                                self->tail=litem_26;
                                            }
                                        }
                                        # 186 "/usr/local/include/comelang2.h"
                                        self->len++;
                                        # 188 "/usr/local/include/comelang2.h"
                                        __result41__ = __result_obj__ = self;
                                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result41__;
                                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void sMethod_finalize(struct sMethod* self){
void* __result_obj__;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sMethod_finalize"
        # 0 "sMethod_finalize"
        if(_if_conditional28=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional28) {
            # 0 "sMethod_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sMethod_finalize"
        # 1 "sMethod_finalize"
        if(_if_conditional29=self!=((void*)0)&&self->mParams!=((void*)0),        _if_conditional29) {
            # 1 "sMethod_finalize"
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mParams, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sMethod_finalize"
        # 2 "sMethod_finalize"
        if(_if_conditional30=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional30) {
            # 2 "sMethod_finalize"
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

struct sClass* sClass_initialize(struct sClass* self, char* name){
void* __result_obj__;
void* right_value69;
char* __dec_obj25;
void* right_value70;
void* right_value76;
struct map$2charphsMethodph* __dec_obj27;
void* right_value77;
void* right_value78;
struct map$2charphsMethodph* __dec_obj28;
struct sClass* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
    # 32 "01main.c"
    __dec_obj25=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(name))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 33 "01main.c"
    __dec_obj27=self->mMethods;
    self->mMethods=(struct map$2charphsMethodph*)come_increment_ref_count(((struct map$2charphsMethodph*)(right_value76=map$2charphsMethodph_initialize((struct map$2charphsMethodph*)come_increment_ref_count(((struct map$2charphsMethodph*)(right_value70=(struct map$2charphsMethodph*)come_calloc(1, sizeof(struct map$2charphsMethodph)*(1), "01main.c", 33, "map$2charphsMethodph"))))))));
    come_call_finalizer2(map$2charphsMethodph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsMethodphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsMethodphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 34 "01main.c"
    __dec_obj28=self->mClassMethods;
    self->mClassMethods=(struct map$2charphsMethodph*)come_increment_ref_count(((struct map$2charphsMethodph*)(right_value78=map$2charphsMethodph_initialize((struct map$2charphsMethodph*)come_increment_ref_count(((struct map$2charphsMethodph*)(right_value77=(struct map$2charphsMethodph*)come_calloc(1, sizeof(struct map$2charphsMethodph)*(1), "01main.c", 34, "map$2charphsMethodph"))))))));
    come_call_finalizer2(map$2charphsMethodph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsMethodphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsMethodphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 36 "01main.c"
    __result49__ = __result_obj__ = self;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result49__;
    come_call_finalizer2(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsMethodph* map$2charphsMethodph_initialize(struct map$2charphsMethodph* self){
void* __result_obj__;
void* right_value71;
void* right_value72;
void* right_value73;
int i_27;
void* right_value74;
void* right_value75;
struct list$1charp* __dec_obj26;
struct map$2charphsMethodph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&i_27, 0, sizeof(int));
right_value74 = (void*)0;
right_value75 = (void*)0;
        # 1087 "/usr/local/include/comelang2.h"
        self->keys=(char**)come_increment_ref_count(((char**)(right_value71=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1087, "char*%"))));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1088 "/usr/local/include/comelang2.h"
        self->items=(struct sMethod**)come_increment_ref_count(((struct sMethod**)(right_value72=(struct sMethod**)come_calloc(1, sizeof(struct sMethod*)*(1*(1024)), "/usr/local/include/comelang2.h", 1088, "sMethod*%"))));
        come_call_finalizer2(sMethod_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1089 "/usr/local/include/comelang2.h"
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value73=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1089, "bool"))));
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1096 "/usr/local/include/comelang2.h"
        for(        i_27=0;        i_27<1024;        i_27++        ){
            # 1093 "/usr/local/include/comelang2.h"
            self->item_existance[i_27]=(_Bool)0;
        }
        # 1096 "/usr/local/include/comelang2.h"
        self->size=1024;
        # 1097 "/usr/local/include/comelang2.h"
        self->len=0;
        # 1099 "/usr/local/include/comelang2.h"
        __dec_obj26=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value75=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value74=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1099, "list$1charp"))))))));
        come_call_finalizer2(list$1charp_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charpp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charpp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1101 "/usr/local/include/comelang2.h"
        self->it=0;
        # 1103 "/usr/local/include/comelang2.h"
        __result48__ = __result_obj__ = self;
        come_call_finalizer2(map$2charphsMethodphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result48__;
        come_call_finalizer2(map$2charphsMethodphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "/usr/local/include/comelang2.h"
            self->head=((void*)0);
            # 105 "/usr/local/include/comelang2.h"
            self->tail=((void*)0);
            # 106 "/usr/local/include/comelang2.h"
            self->len=0;
            # 108 "/usr/local/include/comelang2.h"
            __result47__ = __result_obj__ = self;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result47__;
            come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_28;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_28, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_29, 0, sizeof(struct list_item$1charp*));
                # 123 "/usr/local/include/comelang2.h"
                it_28=self->head;
                # 129 "/usr/local/include/comelang2.h"
                while(_while_condtional5=it_28!=((void*)0),                _while_condtional5) {
                    # 125 "/usr/local/include/comelang2.h"
                    prev_it_29=it_28;
                    # 126 "/usr/local/include/comelang2.h"
                    it_28=it_28->next;
                    # 127 "/usr/local/include/comelang2.h"
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsMethodphp_finalize(struct map$2charphsMethodph* self){
void* __result_obj__;
int i_30;
_Bool _if_conditional31;
_Bool _if_conditional32;
int i_31;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_30, 0, sizeof(int));
memset(&i_31, 0, sizeof(int));
            # 1137 "/usr/local/include/comelang2.h"
            for(            i_30=0;            i_30<self->size;            i_30++            ){
                # 1136 "/usr/local/include/comelang2.h"
                # 1131 "/usr/local/include/comelang2.h"
                if(_if_conditional31=self->item_existance[i_30],                _if_conditional31) {
                    # 1135 "/usr/local/include/comelang2.h"
                    # 1132 "/usr/local/include/comelang2.h"
                    if(_if_conditional32=1,                    _if_conditional32) {
                        # 1133 "/usr/local/include/comelang2.h"
                        come_call_finalizer2(sMethod_finalize,self->items[i_30], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1137 "/usr/local/include/comelang2.h"
            come_free((char*)self->items);
            # 1146 "/usr/local/include/comelang2.h"
            for(            i_31=0;            i_31<self->size;            i_31++            ){
                # 1145 "/usr/local/include/comelang2.h"
                # 1140 "/usr/local/include/comelang2.h"
                if(_if_conditional33=self->item_existance[i_31],                _if_conditional33) {
                    # 1144 "/usr/local/include/comelang2.h"
                    # 1141 "/usr/local/include/comelang2.h"
                    if(_if_conditional34=1,                    _if_conditional34) {
                        # 1142 "/usr/local/include/comelang2.h"
                        self->keys[i_31] = come_decrement_ref_count2(self->keys[i_31], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1146 "/usr/local/include/comelang2.h"
            come_free((char*)self->keys);
            # 1148 "/usr/local/include/comelang2.h"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1150 "/usr/local/include/comelang2.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsMethodph_finalize(struct map$2charphsMethodph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "map$2charphsMethodph_finalize"
        # 0 "map$2charphsMethodph_finalize"
        if(_if_conditional35=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional35) {
            # 0 "map$2charphsMethodph_finalize"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sClass_finalize"
        # 0 "sClass_finalize"
        if(_if_conditional36=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional36) {
            # 0 "sClass_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sClass_finalize"
        # 1 "sClass_finalize"
        if(_if_conditional37=self!=((void*)0)&&self->mMethods!=((void*)0),        _if_conditional37) {
            # 1 "sClass_finalize"
            come_call_finalizer2(map$2charphsMethodphp_finalize,self->mMethods, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sClass_finalize"
        # 2 "sClass_finalize"
        if(_if_conditional38=self!=((void*)0)&&self->mClassMethods!=((void*)0),        _if_conditional38) {
            # 2 "sClass_finalize"
            come_call_finalizer2(map$2charphsMethodphp_finalize,self->mClassMethods, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
char* __dec_obj29;
void* right_value79;
void* right_value80;
struct buffer* __dec_obj30;
struct sModule* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    # 96 "01main.c"
    __dec_obj29=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 97 "01main.c"
    __dec_obj30=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 97, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 99 "01main.c"
    __result50__ = __result_obj__ = self;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result50__;
    come_call_finalizer2(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional39;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sModule_finalize"
        # 0 "sModule_finalize"
        if(_if_conditional39=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional39) {
            # 0 "sModule_finalize"
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sModule_finalize"
        # 1 "sModule_finalize"
        if(_if_conditional40=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional40) {
            # 1 "sModule_finalize"
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_35;
void* right_value81;
void* right_value82;
struct list$1sTypeph* __dec_obj31;
void* right_value83;
void* right_value84;
struct list$1sTypeph* __dec_obj32;
struct sType* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_35, 0, sizeof(struct sClass*));
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
    # 104 "01main.c"
    klass_35=map$2charphsClassphp_operator_load_element(info->classes,name);
    # 106 "01main.c"
    self->mClass=klass_35;
    # 107 "01main.c"
    __dec_obj31=self->mMultipleTypes;
    self->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "01main.c", 107, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 108 "01main.c"
    __dec_obj32=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "01main.c", 108, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 110 "01main.c"
    __result55__ = __result_obj__ = self;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result55__;
    come_call_finalizer2(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_32;
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional6;
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sClass* __result51__;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct sClass* __result52__;
struct sClass* __result53__;
struct sClass* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_32, 0, sizeof(struct sClass*));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
        # 1552 "/usr/local/include/comelang2.h"
        # 1553 "/usr/local/include/comelang2.h"
        memset(&default_value_32,0,sizeof(struct sClass*));
        # 1555 "/usr/local/include/comelang2.h"
        hash_33=string_get_hash_key(((char*)key))%self->size;
        # 1556 "/usr/local/include/comelang2.h"
        it_34=hash_33;
        # 1580 "/usr/local/include/comelang2.h"
        while(_while_condtional6=(_Bool)1,        _while_condtional6) {
            # 1578 "/usr/local/include/comelang2.h"
            # 1559 "/usr/local/include/comelang2.h"
            if(_if_conditional41=self->item_existance[it_34],            _if_conditional41) {
                # 1566 "/usr/local/include/comelang2.h"
                # 1561 "/usr/local/include/comelang2.h"
                if(_if_conditional42=string_equals(self->keys[it_34],key),                _if_conditional42) {
                    # 1563 "/usr/local/include/comelang2.h"
                    __result51__ = __result_obj__ = self->items[it_34];
                    come_call_finalizer2(sClass_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result51__;
                }
                # 1566 "/usr/local/include/comelang2.h"
                it_34++;
                # 1574 "/usr/local/include/comelang2.h"
                # 1568 "/usr/local/include/comelang2.h"
                if(_if_conditional43=it_34>=self->size,                _if_conditional43) {
                    # 1569 "/usr/local/include/comelang2.h"
                    it_34=0;
                }
                else {
                    # 1574 "/usr/local/include/comelang2.h"
                    # 1571 "/usr/local/include/comelang2.h"
                    if(_if_conditional44=it_34==hash_33,                    _if_conditional44) {
                        # 1572 "/usr/local/include/comelang2.h"
                        __result52__ = __result_obj__ = default_value_32;
                        come_call_finalizer2(sClass_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result52__;
                    }
                }
            }
            else {
                # 1576 "/usr/local/include/comelang2.h"
                __result53__ = __result_obj__ = default_value_32;
                come_call_finalizer2(sClass_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result53__;
            }
        }
        # 1580 "/usr/local/include/comelang2.h"
        __result54__ = __result_obj__ = default_value_32;
        come_call_finalizer2(sClass_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer2(sClass_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional45;
char* msg2_36;
va_list args_37;
int len_38;
int i_39;
void* right_value85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_36, 0, sizeof(char*));
memset(&args_37, 0, sizeof(va_list));
memset(&len_38, 0, sizeof(int));
memset(&i_39, 0, sizeof(int));
right_value85 = (void*)0;
    # 118 "01main.c"
    # 115 "01main.c"
    if(info->no_output_come_code) {
        # 116 "01main.c"
        return;
    }
    # 118 "01main.c"
    # 120 "01main.c"
    # 121 "01main.c"
    __builtin_va_start(args_37,msg);
    # 122 "01main.c"
    len_38=vasprintf(&msg2_36,msg,args_37);
    # 123 "01main.c"
    __builtin_va_end(args_37);
    # 128 "01main.c"
    for(    i_39=0;    i_39<info->nest;    i_39++    ){
        # 126 "01main.c"
        buffer_append_str(info->module->mSource,"    ");
    }
    # 128 "01main.c"
    buffer_append_str(info->module->mSource,((char*)(right_value85=xsprintf("%s",msg2_36))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 130 "01main.c"
    free(msg2_36);
    come_call_finalizer2(va_list_finalize,(&args_37), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_without_nest(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional46;
char* msg2_40;
va_list args_41;
int len_42;
void* right_value86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_40, 0, sizeof(char*));
memset(&args_41, 0, sizeof(va_list));
memset(&len_42, 0, sizeof(int));
right_value86 = (void*)0;
    # 138 "01main.c"
    # 135 "01main.c"
    if(info->no_output_come_code) {
        # 136 "01main.c"
        return;
    }
    # 138 "01main.c"
    # 140 "01main.c"
    # 141 "01main.c"
    __builtin_va_start(args_41,msg);
    # 142 "01main.c"
    len_42=vasprintf(&msg2_40,msg,args_41);
    # 143 "01main.c"
    __builtin_va_end(args_41);
    # 145 "01main.c"
    buffer_append_str(info->module->mSource,((char*)(right_value86=xsprintf("%s",msg2_40))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 147 "01main.c"
    free(msg2_40);
    come_call_finalizer2(va_list_finalize,(&args_41), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional47;
_Bool _if_conditional48;
char* __dec_obj33;
memset(&__result_obj__, 0, sizeof(void*));
    # 155 "01main.c"
    # 152 "01main.c"
    if(info->no_output_come_code) {
        # 153 "01main.c"
        return;
    }
    # 159 "01main.c"
    # 155 "01main.c"
    if(info->module->mLastCode) {
        # 156 "01main.c"
        add_come_code(info,"%s",info->module->mLastCode);
        # 157 "01main.c"
        __dec_obj33=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional49;
char* msg2_43;
va_list args_44;
int len_45;
void* right_value87;
char* __dec_obj34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_43, 0, sizeof(char*));
memset(&args_44, 0, sizeof(va_list));
memset(&len_45, 0, sizeof(int));
right_value87 = (void*)0;
    # 166 "01main.c"
    # 163 "01main.c"
    if(info->no_output_come_code) {
        # 164 "01main.c"
        return;
    }
    # 166 "01main.c"
    # 168 "01main.c"
    # 169 "01main.c"
    __builtin_va_start(args_44,msg);
    # 170 "01main.c"
    len_45=vasprintf(&msg2_43,msg,args_44);
    # 171 "01main.c"
    __builtin_va_end(args_44);
    # 173 "01main.c"
    __dec_obj34=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value87=xsprintf("%s",msg2_43))));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 175 "01main.c"
    free(msg2_43);
    come_call_finalizer2(va_list_finalize,(&args_44), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj35;
void* right_value91;
struct CVALUE* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
    # 180 "01main.c"
    __dec_obj35=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 181 "01main.c"
    __result60__ = __result_obj__ = ((struct CVALUE*)(right_value91=CVALUE_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result60__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional50;
struct list_item$1CVALUEph* it_46;
int i_47;
_Bool _while_condtional7;
_Bool _if_conditional51;
struct CVALUE* __result56__;
struct CVALUE* default_value_48;
struct CVALUE* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_46, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_47, 0, sizeof(int));
memset(&default_value_48, 0, sizeof(struct CVALUE*));
        # 686 "/usr/local/include/comelang2.h"
        # 682 "/usr/local/include/comelang2.h"
        if(_if_conditional50=position<0,        _if_conditional50) {
            # 683 "/usr/local/include/comelang2.h"
            position+=self->len;
        }
        # 686 "/usr/local/include/comelang2.h"
        it_46=self->head;
        # 687 "/usr/local/include/comelang2.h"
        i_47=0;
        # 694 "/usr/local/include/comelang2.h"
        while(_while_condtional7=it_46!=((void*)0),        _while_condtional7) {
            # 692 "/usr/local/include/comelang2.h"
            # 689 "/usr/local/include/comelang2.h"
            if(_if_conditional51=position==i_47,            _if_conditional51) {
                # 690 "/usr/local/include/comelang2.h"
                __result56__ = __result_obj__ = it_46->item;
                return __result56__;
            }
            # 692 "/usr/local/include/comelang2.h"
            it_46=it_46->next;
            # 693 "/usr/local/include/comelang2.h"
            i_47++;
        }
        # 696 "/usr/local/include/comelang2.h"
        # 697 "/usr/local/include/comelang2.h"
        memset(&default_value_48,0,sizeof(struct CVALUE*));
        # 698 "/usr/local/include/comelang2.h"
        __result57__ = __result_obj__ = default_value_48;
        come_call_finalizer2(CVALUE_finalize,default_value_48, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result57__;
        come_call_finalizer2(CVALUE_finalize,default_value_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional52;
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional52=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional52) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional53=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional53) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional54;
struct CVALUE* __result58__;
void* right_value88;
struct CVALUE* result_49;
_Bool _if_conditional55;
void* right_value89;
char* __dec_obj36;
_Bool _if_conditional56;
void* right_value90;
struct sType* __dec_obj37;
_Bool _if_conditional57;
struct CVALUE* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_49, 0, sizeof(struct CVALUE*));
right_value89 = (void*)0;
right_value90 = (void*)0;
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional54=self==(void*)0,        _if_conditional54) {
            # 2 "CVALUE_clone"
            __result58__ = __result_obj__ = (void*)0;
            return __result58__;
        }
        # 3 "CVALUE_clone"
        result_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional55=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional55) {
            # 4 "CVALUE_clone"
            __dec_obj36=result_49->c_value;
            result_49->c_value=(char*)come_increment_ref_count(((char*)(right_value89=string_clone(self->c_value))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional56=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional56) {
            # 5 "CVALUE_clone"
            __dec_obj37=result_49->type;
            result_49->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            # 6 "CVALUE_clone"
            result_49->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result59__ = __result_obj__ = result_49;
        come_call_finalizer2(CVALUE_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result59__;
        come_call_finalizer2(CVALUE_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional58;
char* msg2_50;
va_list args_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_50, 0, sizeof(char*));
memset(&args_51, 0, sizeof(va_list));
    # 200 "01main.c"
    # 186 "01main.c"
    if(_if_conditional58=!info->no_output_err,    _if_conditional58) {
        # 187 "01main.c"
        # 189 "01main.c"
        # 190 "01main.c"
        __builtin_va_start(args_51,msg);
        # 191 "01main.c"
        vasprintf(&msg2_50,msg,args_51);
        # 192 "01main.c"
        __builtin_va_end(args_51);
        # 194 "01main.c"
        printf("%s %d: %s\n",info->sname,info->sline,msg2_50);
        # 195 "01main.c"
        info->err_num++;
        # 196 "01main.c"
        stackframe();
        # 198 "01main.c"
        free(msg2_50);
        come_call_finalizer2(va_list_finalize,(&args_51), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    }
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional8;
memset(&__result_obj__, 0, sizeof(void*));
    # 207 "01main.c"
    while(_while_condtional8=smart_pointer$1charp_operator_derefference(info->p)==32||smart_pointer$1charp_operator_derefference(info->p)==9||(smart_pointer$1charp_operator_derefference(info->p)==10&&info->sline++),    _while_condtional8) {
        # 205 "01main.c"
        smart_pointer$1charp_operator_plus_plus(info->p);
    }
}

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self){
void* __result_obj__;
char* p_52;
char __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_52, 0, sizeof(char*));
        # 2097 "/usr/local/include/comelang2.h"
        p_52=self->p;
        # 2098 "/usr/local/include/comelang2.h"
        __result61__ = *p_52;
        return __result61__;
}

static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self){
void* __result_obj__;
int n_53;
_Bool _if_conditional59;
struct smart_pointer$1char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_53, 0, sizeof(int));
            # 2103 "/usr/local/include/comelang2.h"
            n_53=self->p-(char*)self->memory->buf;
            # 2104 "/usr/local/include/comelang2.h"
            self->p=((char*)self->memory->buf)+n_53+1;
            # 2112 "/usr/local/include/comelang2.h"
            # 2106 "/usr/local/include/comelang2.h"
            if(_if_conditional59=(char*)self->p>self->memory->buf+self->memory->len,            _if_conditional59) {
                # 2107 "/usr/local/include/comelang2.h"
                puts("out of range of smart pointer");
                # 2108 "/usr/local/include/comelang2.h"
                stackframe();
                # 2109 "/usr/local/include/comelang2.h"
                exit(1);
            }
            # 2112 "/usr/local/include/comelang2.h"
            __result62__ = __result_obj__ = self;
            return __result62__;
}

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value92;
char* __dec_obj38;
struct sIntNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    # 226 "01main.c"
    self->value=value;
    # 228 "01main.c"
    self->sline=info->sline;
    # 229 "01main.c"
    __dec_obj38=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 231 "01main.c"
    __result63__ = __result_obj__ = self;
    come_call_finalizer2(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result63__;
    come_call_finalizer2(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sIntNode_kind(){
void* __result_obj__;
void* right_value93;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    # 236 "01main.c"
    __result64__ = __result_obj__ = ((char*)(right_value93=__builtin_string("sIntNode")));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value94;
struct CVALUE* come_value_54;
void* right_value95;
char* __dec_obj39;
void* right_value96;
void* right_value97;
struct sType* __dec_obj40;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
    # 241 "01main.c"
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value94=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "01main.c", 241, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 243 "01main.c"
    __dec_obj39=come_value_54->c_value;
    come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value95=xsprintf("%d",self->value))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 244 "01main.c"
    __dec_obj40=come_value_54->type;
    come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value96=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 244, "sType")))),"Integer",info))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 245 "01main.c"
    come_value_54->var=((void*)0);
    # 247 "01main.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    # 249 "01main.c"
    add_come_last_code(info,"%s\n",come_value_54->c_value);
    # 251 "01main.c"
    __result66__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value98;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj41;
_Bool _if_conditional63;
void* right_value99;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj42;
void* right_value100;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value99 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
right_value100 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "/usr/local/include/comelang2.h"
        # 225 "/usr/local/include/comelang2.h"
        if(_if_conditional61=self->len==0,        _if_conditional61) {
            # 226 "/usr/local/include/comelang2.h"
            litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "/usr/local/include/comelang2.h"
            litem_55->prev=((void*)0);
            # 229 "/usr/local/include/comelang2.h"
            litem_55->next=((void*)0);
            # 230 "/usr/local/include/comelang2.h"
            __dec_obj41=litem_55->item;
            litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "/usr/local/include/comelang2.h"
            self->tail=litem_55;
            # 233 "/usr/local/include/comelang2.h"
            self->head=litem_55;
        }
        else {
            # 256 "/usr/local/include/comelang2.h"
            # 235 "/usr/local/include/comelang2.h"
            if(_if_conditional63=self->len==1,            _if_conditional63) {
                # 236 "/usr/local/include/comelang2.h"
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "/usr/local/include/comelang2.h"
                litem_56->prev=self->head;
                # 239 "/usr/local/include/comelang2.h"
                litem_56->next=((void*)0);
                # 240 "/usr/local/include/comelang2.h"
                __dec_obj42=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "/usr/local/include/comelang2.h"
                self->tail=litem_56;
                # 243 "/usr/local/include/comelang2.h"
                self->head->next=litem_56;
            }
            else {
                # 246 "/usr/local/include/comelang2.h"
                litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "/usr/local/include/comelang2.h"
                litem_57->prev=self->tail;
                # 249 "/usr/local/include/comelang2.h"
                litem_57->next=((void*)0);
                # 250 "/usr/local/include/comelang2.h"
                __dec_obj43=litem_57->item;
                litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "/usr/local/include/comelang2.h"
                self->tail->next=litem_57;
                # 253 "/usr/local/include/comelang2.h"
                self->tail=litem_57;
            }
        }
        # 256 "/usr/local/include/comelang2.h"
        self->len++;
        # 258 "/usr/local/include/comelang2.h"
        __result65__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result65__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional62=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional62) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

_Bool sIntNode_terminated(){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    # 256 "01main.c"
    __result67__ = (_Bool)0;
    return __result67__;
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 261 "01main.c"
    __result68__ = self->sline;
    return __result68__;
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value101;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    # 266 "01main.c"
    __result69__ = __result_obj__ = ((char*)(right_value101=__builtin_string(self->sname)));
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left_node, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj44;
struct sNode* __dec_obj45;
void* right_value102;
char* __dec_obj46;
struct sAddNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    # 280 "01main.c"
    __dec_obj44=self->left_node;
    self->left_node=(struct sNode*)come_increment_ref_count(left_node);
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
    # 281 "01main.c"
    __dec_obj45=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
    # 283 "01main.c"
    self->sline=info->sline;
    # 284 "01main.c"
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 286 "01main.c"
    __result70__ = __result_obj__ = self;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left_node) { left_node = come_decrement_ref_count2(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result70__;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left_node) { left_node = come_decrement_ref_count2(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAddNode_kind(){
void* __result_obj__;
void* right_value103;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    # 291 "01main.c"
    __result71__ = __result_obj__ = ((char*)(right_value103=__builtin_string("sAddNode")));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_58;
_Bool _if_conditional67;
void* right_value104;
struct CVALUE* left_value_59;
struct sNode* right_node_60;
_Bool _if_conditional68;
void* right_value105;
struct CVALUE* right_value_61;
void* right_value106;
struct CVALUE* come_value_62;
_Bool _if_conditional69;
_Bool __result72__;
void* right_value107;
char* __dec_obj47;
void* right_value108;
struct sType* __dec_obj48;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_58, 0, sizeof(struct sNode*));
right_value104 = (void*)0;
memset(&left_value_59, 0, sizeof(struct CVALUE*));
memset(&right_node_60, 0, sizeof(struct sNode*));
right_value105 = (void*)0;
memset(&right_value_61, 0, sizeof(struct CVALUE*));
right_value106 = (void*)0;
memset(&come_value_62, 0, sizeof(struct CVALUE*));
right_value107 = (void*)0;
right_value108 = (void*)0;
    # 296 "01main.c"
    left_node_58=(struct sNode*)come_increment_ref_count(self->left_node);
    # 302 "01main.c"
    # 297 "01main.c"
    if(_if_conditional67=!left_node_58->compile(left_node_58->_protocol_obj,info),    _if_conditional67) {
        # 298 "01main.c"
        puts("compile error");
        # 299 "01main.c"
        exit(2);
    }
    # 302 "01main.c"
    left_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 304 "01main.c"
    right_node_60=(struct sNode*)come_increment_ref_count(self->right_node);
    # 310 "01main.c"
    # 305 "01main.c"
    if(_if_conditional68=!right_node_60->compile(right_node_60->_protocol_obj,info),    _if_conditional68) {
        # 306 "01main.c"
        puts("compile error");
        # 307 "01main.c"
        exit(2);
    }
    # 310 "01main.c"
    right_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value105=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 312 "01main.c"
    come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "01main.c", 312, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 319 "01main.c"
    # 314 "01main.c"
    if(_if_conditional69=string_operator_not_equals(left_value_59->type->mClass->mName,right_value_61->type->mClass->mName),    _if_conditional69) {
        # 315 "01main.c"
        err_msg(info,"invalid type +");
        # 316 "01main.c"
        __result72__ = (_Bool)0;
        if(left_node_58) { left_node_58 = come_decrement_ref_count2(left_node_58, ((struct sNode*)left_node_58)->finalize, ((struct sNode*)left_node_58)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(right_node_60) { right_node_60 = come_decrement_ref_count2(right_node_60, ((struct sNode*)right_node_60)->finalize, ((struct sNode*)right_node_60)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result72__;
    }
    # 319 "01main.c"
    __dec_obj47=come_value_62->c_value;
    come_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value107=xsprintf("%s+%s",left_value_59->c_value,right_value_61->c_value))));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 320 "01main.c"
    __dec_obj48=come_value_62->type;
    come_value_62->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(left_value_59->type))));
    come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 321 "01main.c"
    come_value_62->var=((void*)0);
    # 323 "01main.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_62));
    # 325 "01main.c"
    add_come_last_code(info,"%s\n",come_value_62->c_value);
    # 327 "01main.c"
    __result73__ = (_Bool)1;
    if(left_node_58) { left_node_58 = come_decrement_ref_count2(left_node_58, ((struct sNode*)left_node_58)->finalize, ((struct sNode*)left_node_58)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(right_node_60) { right_node_60 = come_decrement_ref_count2(right_node_60, ((struct sNode*)right_node_60)->finalize, ((struct sNode*)right_node_60)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result73__;
    if(left_node_58) { left_node_58 = come_decrement_ref_count2(left_node_58, ((struct sNode*)left_node_58)->finalize, ((struct sNode*)left_node_58)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(right_node_60) { right_node_60 = come_decrement_ref_count2(right_node_60, ((struct sNode*)right_node_60)->finalize, ((struct sNode*)right_node_60)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    # 332 "01main.c"
    __result74__ = (_Bool)0;
    return __result74__;
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 337 "01main.c"
    __result75__ = self->sline;
    return __result75__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value109;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    # 342 "01main.c"
    __result76__ = __result_obj__ = ((char*)(right_value109=__builtin_string(self->sname)));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left_node, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj49;
struct sNode* __dec_obj50;
void* right_value110;
char* __dec_obj51;
struct sSubNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
    # 356 "01main.c"
    __dec_obj49=self->left_node;
    self->left_node=(struct sNode*)come_increment_ref_count(left_node);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
    # 357 "01main.c"
    __dec_obj50=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
    # 359 "01main.c"
    self->sline=info->sline;
    # 360 "01main.c"
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 362 "01main.c"
    __result77__ = __result_obj__ = self;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left_node) { left_node = come_decrement_ref_count2(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result77__;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left_node) { left_node = come_decrement_ref_count2(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sSubNode_kind(){
void* __result_obj__;
void* right_value111;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
    # 367 "01main.c"
    __result78__ = __result_obj__ = ((char*)(right_value111=__builtin_string("sSubNode")));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_63;
_Bool _if_conditional73;
void* right_value112;
struct CVALUE* left_value_64;
struct sNode* right_node_65;
_Bool _if_conditional74;
void* right_value113;
struct CVALUE* right_value_66;
_Bool _if_conditional75;
_Bool __result79__;
void* right_value114;
struct CVALUE* come_value_67;
void* right_value115;
char* __dec_obj52;
void* right_value116;
struct sType* __dec_obj53;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_63, 0, sizeof(struct sNode*));
right_value112 = (void*)0;
memset(&left_value_64, 0, sizeof(struct CVALUE*));
memset(&right_node_65, 0, sizeof(struct sNode*));
right_value113 = (void*)0;
memset(&right_value_66, 0, sizeof(struct CVALUE*));
right_value114 = (void*)0;
memset(&come_value_67, 0, sizeof(struct CVALUE*));
right_value115 = (void*)0;
right_value116 = (void*)0;
    # 372 "01main.c"
    left_node_63=(struct sNode*)come_increment_ref_count(self->left_node);
    # 378 "01main.c"
    # 373 "01main.c"
    if(_if_conditional73=!left_node_63->compile(left_node_63->_protocol_obj,info),    _if_conditional73) {
        # 374 "01main.c"
        puts("compile error");
        # 375 "01main.c"
        exit(2);
    }
    # 378 "01main.c"
    left_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 380 "01main.c"
    right_node_65=(struct sNode*)come_increment_ref_count(self->right_node);
    # 386 "01main.c"
    # 381 "01main.c"
    if(_if_conditional74=!right_node_65->compile(right_node_65->_protocol_obj,info),    _if_conditional74) {
        # 382 "01main.c"
        puts("compile error");
        # 383 "01main.c"
        exit(2);
    }
    # 386 "01main.c"
    right_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value113=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 393 "01main.c"
    # 388 "01main.c"
    if(_if_conditional75=string_operator_not_equals(left_value_64->type->mClass->mName,right_value_66->type->mClass->mName),    _if_conditional75) {
        # 389 "01main.c"
        err_msg(info,"invalid type +");
        # 390 "01main.c"
        __result79__ = (_Bool)0;
        if(left_node_63) { left_node_63 = come_decrement_ref_count2(left_node_63, ((struct sNode*)left_node_63)->finalize, ((struct sNode*)left_node_63)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(right_node_65) { right_node_65 = come_decrement_ref_count2(right_node_65, ((struct sNode*)right_node_65)->finalize, ((struct sNode*)right_node_65)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,right_value_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    # 393 "01main.c"
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "01main.c", 393, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 395 "01main.c"
    __dec_obj52=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s-%s",left_value_64->c_value,right_value_66->c_value))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 396 "01main.c"
    __dec_obj53=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(left_value_64->type))));
    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 397 "01main.c"
    come_value_67->var=((void*)0);
    # 399 "01main.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    # 401 "01main.c"
    add_come_last_code(info,"%s\n",come_value_67->c_value);
    # 403 "01main.c"
    __result80__ = (_Bool)1;
    if(left_node_63) { left_node_63 = come_decrement_ref_count2(left_node_63, ((struct sNode*)left_node_63)->finalize, ((struct sNode*)left_node_63)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(right_node_65) { right_node_65 = come_decrement_ref_count2(right_node_65, ((struct sNode*)right_node_65)->finalize, ((struct sNode*)right_node_65)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,right_value_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result80__;
    if(left_node_63) { left_node_63 = come_decrement_ref_count2(left_node_63, ((struct sNode*)left_node_63)->finalize, ((struct sNode*)left_node_63)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(right_node_65) { right_node_65 = come_decrement_ref_count2(right_node_65, ((struct sNode*)right_node_65)->finalize, ((struct sNode*)right_node_65)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,right_value_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 408 "01main.c"
    __result81__ = (_Bool)0;
    return __result81__;
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 413 "01main.c"
    __result82__ = self->sline;
    return __result82__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value117;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
    # 418 "01main.c"
    __result83__ = __result_obj__ = ((char*)(right_value117=__builtin_string(self->sname)));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value118;
char* __dec_obj54;
void* right_value119;
char* __dec_obj55;
struct sStrNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
    # 430 "01main.c"
    __dec_obj54=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(value))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 432 "01main.c"
    self->sline=sline;
    # 433 "01main.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 435 "01main.c"
    __result84__ = __result_obj__ = self;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    # 440 "01main.c"
    __result85__ = (_Bool)0;
    return __result85__;
}

char* sStrNode_kind(){
void* __result_obj__;
void* right_value120;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
    # 446 "01main.c"
    __result86__ = __result_obj__ = ((char*)(right_value120=__builtin_string("sStrNode")));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value121;
struct CVALUE* come_value_68;
void* right_value122;
char* __dec_obj56;
void* right_value123;
void* right_value124;
struct sType* __dec_obj57;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&come_value_68, 0, sizeof(struct CVALUE*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
    # 451 "01main.c"
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "01main.c", 451, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 453 "01main.c"
    __dec_obj56=come_value_68->c_value;
    come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("\"%s\"",self->value))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 454 "01main.c"
    __dec_obj57=come_value_68->type;
    come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value123=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 454, "sType")))),"String",info))));
    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 455 "01main.c"
    come_value_68->var=((void*)0);
    # 457 "01main.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
    # 459 "01main.c"
    add_come_last_code(info,"%s\n",come_value_68->c_value);
    # 461 "01main.c"
    __result87__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result87__;
    come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    # 466 "01main.c"
    __result88__ = self->sline;
    return __result88__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    # 471 "01main.c"
    __result89__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

struct sNode* expression_node(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional78;
int n_69;
_Bool _while_condtional9;
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value126;
void* right_value127;
struct sNode* _inf_value1;
struct sIntNode* _inf_obj_value1;
void* right_value130;
struct sNode* __result92__;
_Bool _if_conditional86;
int sline_71;
void* right_value131;
void* right_value132;
struct buffer* value_72;
_Bool _while_condtional10;
_Bool _if_conditional87;
char* p_73;
int sline_74;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
int sline2_75;
_Bool _if_conditional92;
void* right_value133;
void* right_value134;
void* right_value135;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value139;
struct sNode* __result95__;
struct sNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_69, 0, sizeof(int));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value130 = (void*)0;
memset(&sline_71, 0, sizeof(int));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&value_72, 0, sizeof(struct buffer*));
memset(&p_73, 0, sizeof(char*));
memset(&sline_74, 0, sizeof(int));
memset(&sline2_75, 0, sizeof(int));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value139 = (void*)0;
    # 552 "01main.c"
    # 476 "01main.c"
    if(_if_conditional78=xisdigit(smart_pointer$1charp_operator_derefference(info->p)),    _if_conditional78) {
        # 477 "01main.c"
        n_69=0;
        # 491 "01main.c"
        while(_while_condtional9=(_Bool)1,        _while_condtional9) {
            # 489 "01main.c"
            # 479 "01main.c"
            if(_if_conditional79=xisdigit(smart_pointer$1charp_operator_derefference(info->p)),            _if_conditional79) {
                # 480 "01main.c"
                n_69=n_69*10+(smart_pointer$1charp_operator_derefference(info->p)-48);
                # 481 "01main.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
            }
            else {
                # 489 "01main.c"
                # 483 "01main.c"
                if(_if_conditional80=smart_pointer$1charp_operator_derefference(info->p)==95,                _if_conditional80) {
                    # 484 "01main.c"
                    smart_pointer$1charp_operator_plus_plus(info->p);
                }
                else {
                    # 487 "01main.c"
                    break;
                }
            }
        }
        # 491 "01main.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "01main.c", 491, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sIntNode*)(right_value127=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value126=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "01main.c", 491, "sIntNode")))),n_69,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sIntNode_finalize;
        _inf_value1->clone=(void*)sIntNode_clone;
        _inf_value1->compile=(void*)sIntNode_compile;
        _inf_value1->sline=(void*)sIntNode_sline;
        _inf_value1->sname=(void*)sIntNode_sname;
        _inf_value1->terminated=(void*)sIntNode_terminated;
        _inf_value1->kind=(void*)sIntNode_kind;
        __result92__ = __result_obj__ = ((struct sNode*)(right_value130=_inf_value1));
        come_call_finalizer2(sIntNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sIntNode_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result92__;
    }
    else {
        # 552 "01main.c"
        # 493 "01main.c"
        if(_if_conditional86=smart_pointer$1charp_operator_derefference(info->p)==34,        _if_conditional86) {
            # 495 "01main.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 497 "01main.c"
            sline_71=info->sline;
            # 499 "01main.c"
            value_72=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 499, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 547 "01main.c"
            while(_while_condtional10=1,            _while_condtional10) {
                # 545 "01main.c"
                # 502 "01main.c"
                if(_if_conditional87=smart_pointer$1charp_operator_derefference(info->p)==34,                _if_conditional87) {
                    # 503 "01main.c"
                    smart_pointer$1charp_operator_plus_plus(info->p);
                    # 505 "01main.c"
                    p_73=info->p->p;
                    # 506 "01main.c"
                    sline_74=info->sline;
                    # 508 "01main.c"
                    skip_spaces_and_lf(info);
                    # 518 "01main.c"
                    # 510 "01main.c"
                    if(_if_conditional88=smart_pointer$1charp_operator_derefference(info->p)==34,                    _if_conditional88) {
                        # 511 "01main.c"
                        smart_pointer$1charp_operator_plus_plus(info->p);
                    }
                    else {
                        # 514 "01main.c"
                        info->p->p=p_73;
                        # 515 "01main.c"
                        info->sline=sline_74;
                        # 516 "01main.c"
                        break;
                    }
                }
                else {
                    # 545 "01main.c"
                    # 519 "01main.c"
                    if(_if_conditional89=smart_pointer$1charp_operator_derefference(info->p)==92,                    _if_conditional89) {
                        # 520 "01main.c"
                        buffer_append_char(value_72,92);
                        # 521 "01main.c"
                        smart_pointer$1charp_operator_plus_plus(info->p);
                        # 531 "01main.c"
                        # 523 "01main.c"
                        if(_if_conditional90=smart_pointer$1charp_operator_derefference(info->p)==34,                        _if_conditional90) {
                            # 524 "01main.c"
                            buffer_append_char(value_72,34);
                            # 525 "01main.c"
                            smart_pointer$1charp_operator_plus_plus(info->p);
                        }
                        else {
                            # 528 "01main.c"
                            buffer_append_char(value_72,smart_pointer$1charp_operator_derefference(info->p));
                            # 529 "01main.c"
                            smart_pointer$1charp_operator_plus_plus(info->p);
                        }
                    }
                    else {
                        # 545 "01main.c"
                        # 532 "01main.c"
                        if(_if_conditional91=smart_pointer$1charp_operator_derefference(info->p)==0,                        _if_conditional91) {
                            # 533 "01main.c"
                            sline2_75=info->sline;
                            # 534 "01main.c"
                            info->sline=sline_71;
                            # 535 "01main.c"
                            err_msg(info,"close \" to make string value");
                            # 536 "01main.c"
                            info->sline=sline2_75;
                            # 537 "01main.c"
                            exit(2);
                        }
                        else {
                            # 540 "01main.c"
                            # 540 "01main.c"
                            if(_if_conditional92=smart_pointer$1charp_operator_derefference(info->p)==10,                            _if_conditional92) {
                                # 540 "01main.c"
                                info->sline++;
                            }
                            # 542 "01main.c"
                            buffer_append_char(value_72,smart_pointer$1charp_operator_derefference(info->p));
                            # 543 "01main.c"
                            smart_pointer$1charp_operator_plus_plus(info->p);
                        }
                    }
                }
            }
            # 547 "01main.c"
            skip_spaces_and_lf(info);
            # 549 "01main.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "01main.c", 549, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value135=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value133=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "01main.c", 549, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value134=buffer_to_string(value_72)))),sline_71,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sStrNode_sline;
            _inf_value2->sname=(void*)sStrNode_sname;
            _inf_value2->terminated=(void*)sStrNode_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result95__ = __result_obj__ = ((struct sNode*)(right_value139=_inf_value2));
            come_call_finalizer2(buffer_finalize,value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStrNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStrNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result95__;
            come_call_finalizer2(buffer_finalize,value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 552 "01main.c"
    __result96__ = __result_obj__ = ((void*)0);
    return __result96__;
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sIntNode_finalize"
            # 0 "sIntNode_finalize"
            if(_if_conditional81=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional81) {
                # 0 "sIntNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional82;
struct sIntNode* __result90__;
void* right_value128;
struct sIntNode* result_70;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value129;
char* __dec_obj58;
struct sIntNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&result_70, 0, sizeof(struct sIntNode*));
right_value129 = (void*)0;
            # 3 "sIntNode_clone"
            # 2 "sIntNode_clone"
            if(_if_conditional82=self==(void*)0,            _if_conditional82) {
                # 2 "sIntNode_clone"
                __result90__ = __result_obj__ = (void*)0;
                return __result90__;
            }
            # 3 "sIntNode_clone"
            result_70=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value128=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "sIntNode"))));
            come_call_finalizer2(sIntNode_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sIntNode_clone"
            # 4 "sIntNode_clone"
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                # 4 "sIntNode_clone"
                result_70->value=self->value;
            }
            # 6 "sIntNode_clone"
            # 5 "sIntNode_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 5 "sIntNode_clone"
                result_70->sline=self->sline;
            }
            # 7 "sIntNode_clone"
            # 6 "sIntNode_clone"
            if(_if_conditional85=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional85) {
                # 6 "sIntNode_clone"
                __dec_obj58=result_70->sname;
                result_70->sname=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->sname))));
                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sIntNode_clone"
            __result91__ = __result_obj__ = result_70;
            come_call_finalizer2(sIntNode_finalize,result_70, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result91__;
            come_call_finalizer2(sIntNode_finalize,result_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional93;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStrNode_finalize"
                # 0 "sStrNode_finalize"
                if(_if_conditional93=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional93) {
                    # 0 "sStrNode_finalize"
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStrNode_finalize"
                # 1 "sStrNode_finalize"
                if(_if_conditional94=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional94) {
                    # 1 "sStrNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional95;
struct sStrNode* __result93__;
void* right_value136;
struct sStrNode* result_76;
_Bool _if_conditional96;
void* right_value137;
char* __dec_obj59;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value138;
char* __dec_obj60;
struct sStrNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&result_76, 0, sizeof(struct sStrNode*));
right_value137 = (void*)0;
right_value138 = (void*)0;
                # 3 "sStrNode_clone"
                # 2 "sStrNode_clone"
                if(_if_conditional95=self==(void*)0,                _if_conditional95) {
                    # 2 "sStrNode_clone"
                    __result93__ = __result_obj__ = (void*)0;
                    return __result93__;
                }
                # 3 "sStrNode_clone"
                result_76=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value136=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer2(sStrNode_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sStrNode_clone"
                # 4 "sStrNode_clone"
                if(_if_conditional96=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional96) {
                    # 4 "sStrNode_clone"
                    __dec_obj59=result_76->value;
                    result_76->value=(char*)come_increment_ref_count(((char*)(right_value137=string_clone(self->value))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sStrNode_clone"
                # 5 "sStrNode_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 5 "sStrNode_clone"
                    result_76->sline=self->sline;
                }
                # 7 "sStrNode_clone"
                # 6 "sStrNode_clone"
                if(_if_conditional98=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional98) {
                    # 6 "sStrNode_clone"
                    __dec_obj60=result_76->sname;
                    result_76->sname=(char*)come_increment_ref_count(((char*)(right_value138=string_clone(self->sname))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStrNode_clone"
                __result94__ = __result_obj__ = result_76;
                come_call_finalizer2(sStrNode_finalize,result_76, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result94__;
                come_call_finalizer2(sStrNode_finalize,result_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_sub_expression_node(struct sInfo* info){
void* __result_obj__;
void* right_value140;
struct sNode* node_77;
_Bool _while_condtional11;
_Bool _if_conditional99;
void* right_value141;
struct sNode* right_node_78;
_Bool _if_conditional100;
struct sNode* __result97__;
_Bool _if_conditional101;
struct sNode* __result98__;
void* right_value142;
void* right_value143;
struct sNode* _inf_value3;
struct sAddNode* _inf_obj_value3;
void* right_value149;
struct sNode* __result103__;
_Bool _if_conditional119;
void* right_value150;
struct sNode* right_node_81;
_Bool _if_conditional120;
struct sNode* __result104__;
_Bool _if_conditional121;
struct sNode* __result105__;
void* right_value151;
void* right_value152;
struct sNode* _inf_value4;
struct sSubNode* _inf_obj_value4;
void* right_value157;
struct sNode* __result108__;
struct sNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&node_77, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
memset(&right_node_78, 0, sizeof(struct sNode*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&right_node_81, 0, sizeof(struct sNode*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value157 = (void*)0;
    # 557 "01main.c"
    node_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=expression_node(info))));
    if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 595 "01main.c"
    while(_while_condtional11=(_Bool)1,    _while_condtional11) {
        # 593 "01main.c"
        # 560 "01main.c"
        if(_if_conditional99=smart_pointer$1charp_operator_derefference(info->p)==43&&((smart_pointer$1charp_operator_derefference(info->p)+1)!=43||(smart_pointer$1charp_operator_derefference(info->p)+1)!=61),        _if_conditional99) {
            # 561 "01main.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 562 "01main.c"
            skip_spaces_and_lf(info);
            # 564 "01main.c"
            right_node_78=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=expression_node(info))));
            if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 569 "01main.c"
            # 566 "01main.c"
            if(_if_conditional100=node_77==((void*)0),            _if_conditional100) {
                # 567 "01main.c"
                __result97__ = __result_obj__ = ((void*)0);
                if(right_node_78) { right_node_78 = come_decrement_ref_count2(right_node_78, ((struct sNode*)right_node_78)->finalize, ((struct sNode*)right_node_78)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
                return __result97__;
            }
            # 573 "01main.c"
            # 569 "01main.c"
            if(_if_conditional101=right_node_78==((void*)0),            _if_conditional101) {
                # 570 "01main.c"
                __result98__ = __result_obj__ = ((void*)0);
                if(right_node_78) { right_node_78 = come_decrement_ref_count2(right_node_78, ((struct sNode*)right_node_78)->finalize, ((struct sNode*)right_node_78)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
                return __result98__;
            }
            # 573 "01main.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "01main.c", 573, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sAddNode*)(right_value143=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value142=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "01main.c", 573, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_77),(struct sNode*)come_increment_ref_count(right_node_78),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sAddNode_finalize;
            _inf_value3->clone=(void*)sAddNode_clone;
            _inf_value3->compile=(void*)sAddNode_compile;
            _inf_value3->sline=(void*)sAddNode_sline;
            _inf_value3->sname=(void*)sAddNode_sname;
            _inf_value3->terminated=(void*)sAddNode_terminated;
            _inf_value3->kind=(void*)sAddNode_kind;
            __result103__ = __result_obj__ = ((struct sNode*)(right_value149=_inf_value3));
            if(right_node_78) { right_node_78 = come_decrement_ref_count2(right_node_78, ((struct sNode*)right_node_78)->finalize, ((struct sNode*)right_node_78)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAddNode_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAddNode_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value149) { right_value149 = come_decrement_ref_count2(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result103__;
            if(right_node_78) { right_node_78 = come_decrement_ref_count2(right_node_78, ((struct sNode*)right_node_78)->finalize, ((struct sNode*)right_node_78)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 593 "01main.c"
            # 575 "01main.c"
            if(_if_conditional119=smart_pointer$1charp_operator_derefference(info->p)==45&&((smart_pointer$1charp_operator_derefference(info->p)+1)!=45||(smart_pointer$1charp_operator_derefference(info->p)+1)!=61),            _if_conditional119) {
                # 576 "01main.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 577 "01main.c"
                skip_spaces_and_lf(info);
                # 579 "01main.c"
                right_node_81=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=expression_node(info))));
                if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 584 "01main.c"
                # 581 "01main.c"
                if(_if_conditional120=node_77==((void*)0),                _if_conditional120) {
                    # 582 "01main.c"
                    __result104__ = __result_obj__ = ((void*)0);
                    if(right_node_81) { right_node_81 = come_decrement_ref_count2(right_node_81, ((struct sNode*)right_node_81)->finalize, ((struct sNode*)right_node_81)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    return __result104__;
                }
                # 588 "01main.c"
                # 584 "01main.c"
                if(_if_conditional121=right_node_81==((void*)0),                _if_conditional121) {
                    # 585 "01main.c"
                    __result105__ = __result_obj__ = ((void*)0);
                    if(right_node_81) { right_node_81 = come_decrement_ref_count2(right_node_81, ((struct sNode*)right_node_81)->finalize, ((struct sNode*)right_node_81)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    return __result105__;
                }
                # 588 "01main.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "01main.c", 588, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sSubNode*)(right_value152=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value151=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "01main.c", 588, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_77),(struct sNode*)come_increment_ref_count(right_node_81),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sSubNode_finalize;
                _inf_value4->clone=(void*)sSubNode_clone;
                _inf_value4->compile=(void*)sSubNode_compile;
                _inf_value4->sline=(void*)sSubNode_sline;
                _inf_value4->sname=(void*)sSubNode_sname;
                _inf_value4->terminated=(void*)sSubNode_terminated;
                _inf_value4->kind=(void*)sSubNode_kind;
                __result108__ = __result_obj__ = ((struct sNode*)(right_value157=_inf_value4));
                if(right_node_81) { right_node_81 = come_decrement_ref_count2(right_node_81, ((struct sNode*)right_node_81)->finalize, ((struct sNode*)right_node_81)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sSubNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sSubNode_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result108__;
                if(right_node_81) { right_node_81 = come_decrement_ref_count2(right_node_81, ((struct sNode*)right_node_81)->finalize, ((struct sNode*)right_node_81)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 591 "01main.c"
                break;
            }
        }
    }
    # 595 "01main.c"
    __result109__ = __result_obj__ = node_77;
    if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    if(node_77) { node_77 = come_decrement_ref_count2(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sAddNode_finalize"
                # 0 "sAddNode_finalize"
                if(_if_conditional102=self!=((void*)0)&&self->left_node!=((void*)0),                _if_conditional102) {
                    # 0 "sAddNode_finalize"
                    if(self->left_node) { self->left_node = come_decrement_ref_count2(self->left_node, ((struct sNode*)self->left_node)->finalize, ((struct sNode*)self->left_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sAddNode_finalize"
                # 1 "sAddNode_finalize"
                if(_if_conditional103=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional103) {
                    # 1 "sAddNode_finalize"
                    if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sAddNode_finalize"
                # 2 "sAddNode_finalize"
                if(_if_conditional104=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional104) {
                    # 2 "sAddNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional105;
struct sAddNode* __result99__;
void* right_value144;
struct sAddNode* result_79;
_Bool _if_conditional106;
void* right_value146;
struct sNode* __dec_obj61;
_Bool _if_conditional116;
void* right_value147;
struct sNode* __dec_obj62;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value148;
char* __dec_obj63;
struct sAddNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&result_79, 0, sizeof(struct sAddNode*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
                # 3 "sAddNode_clone"
                # 2 "sAddNode_clone"
                if(_if_conditional105=self==(void*)0,                _if_conditional105) {
                    # 2 "sAddNode_clone"
                    __result99__ = __result_obj__ = (void*)0;
                    return __result99__;
                }
                # 3 "sAddNode_clone"
                result_79=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value144=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                come_call_finalizer2(sAddNode_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sAddNode_clone"
                # 4 "sAddNode_clone"
                if(_if_conditional106=self!=((void*)0)&&self->left_node!=((void*)0),                _if_conditional106) {
                    # 4 "sAddNode_clone"
                    __dec_obj61=result_79->left_node;
                    result_79->left_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(self->left_node))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sAddNode_clone"
                # 5 "sAddNode_clone"
                if(_if_conditional116=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional116) {
                    # 5 "sAddNode_clone"
                    __dec_obj62=result_79->right_node;
                    result_79->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(self->right_node))));
                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 7 "sAddNode_clone"
                # 6 "sAddNode_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 6 "sAddNode_clone"
                    result_79->sline=self->sline;
                }
                # 8 "sAddNode_clone"
                # 7 "sAddNode_clone"
                if(_if_conditional118=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional118) {
                    # 7 "sAddNode_clone"
                    __dec_obj63=result_79->sname;
                    result_79->sname=(char*)come_increment_ref_count(((char*)(right_value148=string_clone(self->sname))));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sAddNode_clone"
                __result102__ = __result_obj__ = result_79;
                come_call_finalizer2(sAddNode_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result102__;
                come_call_finalizer2(sAddNode_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional107;
struct sNode* __result100__;
void* right_value145;
struct sNode* result_80;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&result_80, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional107=self==(void*)0,                        _if_conditional107) {
                            # 2 "sNode_clone"
                            __result100__ = __result_obj__ = (void*)0;
                            return __result100__;
                        }
                        # 3 "sNode_clone"
                        result_80=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional108=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional108) {
                            # 4 "sNode_clone"
                            result_80->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional109=self!=((void*)0),                        _if_conditional109) {
                            # 5 "sNode_clone"
                            result_80->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional110=self!=((void*)0),                        _if_conditional110) {
                            # 6 "sNode_clone"
                            result_80->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional111=self!=((void*)0),                        _if_conditional111) {
                            # 7 "sNode_clone"
                            result_80->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional112=self!=((void*)0),                        _if_conditional112) {
                            # 8 "sNode_clone"
                            result_80->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional113=self!=((void*)0),                        _if_conditional113) {
                            # 9 "sNode_clone"
                            result_80->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional114=self!=((void*)0),                        _if_conditional114) {
                            # 10 "sNode_clone"
                            result_80->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional115=self!=((void*)0),                        _if_conditional115) {
                            # 11 "sNode_clone"
                            result_80->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result101__ = __result_obj__ = result_80;
                        if(result_80) { result_80 = come_decrement_ref_count2(result_80, ((struct sNode*)result_80)->finalize, ((struct sNode*)result_80)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result101__;
                        if(result_80) { result_80 = come_decrement_ref_count2(result_80, ((struct sNode*)result_80)->finalize, ((struct sNode*)result_80)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sSubNode_finalize"
                    # 0 "sSubNode_finalize"
                    if(_if_conditional122=self!=((void*)0)&&self->left_node!=((void*)0),                    _if_conditional122) {
                        # 0 "sSubNode_finalize"
                        if(self->left_node) { self->left_node = come_decrement_ref_count2(self->left_node, ((struct sNode*)self->left_node)->finalize, ((struct sNode*)self->left_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sSubNode_finalize"
                    # 1 "sSubNode_finalize"
                    if(_if_conditional123=self!=((void*)0)&&self->right_node!=((void*)0),                    _if_conditional123) {
                        # 1 "sSubNode_finalize"
                        if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sSubNode_finalize"
                    # 2 "sSubNode_finalize"
                    if(_if_conditional124=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional124) {
                        # 2 "sSubNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional125;
struct sSubNode* __result106__;
void* right_value153;
struct sSubNode* result_82;
_Bool _if_conditional126;
void* right_value154;
struct sNode* __dec_obj64;
_Bool _if_conditional127;
void* right_value155;
struct sNode* __dec_obj65;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value156;
char* __dec_obj66;
struct sSubNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
memset(&result_82, 0, sizeof(struct sSubNode*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
                    # 3 "sSubNode_clone"
                    # 2 "sSubNode_clone"
                    if(_if_conditional125=self==(void*)0,                    _if_conditional125) {
                        # 2 "sSubNode_clone"
                        __result106__ = __result_obj__ = (void*)0;
                        return __result106__;
                    }
                    # 3 "sSubNode_clone"
                    result_82=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value153=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                    come_call_finalizer2(sSubNode_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sSubNode_clone"
                    # 4 "sSubNode_clone"
                    if(_if_conditional126=self!=((void*)0)&&self->left_node!=((void*)0),                    _if_conditional126) {
                        # 4 "sSubNode_clone"
                        __dec_obj64=result_82->left_node;
                        result_82->left_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(self->left_node))));
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sSubNode_clone"
                    # 5 "sSubNode_clone"
                    if(_if_conditional127=self!=((void*)0)&&self->right_node!=((void*)0),                    _if_conditional127) {
                        # 5 "sSubNode_clone"
                        __dec_obj65=result_82->right_node;
                        result_82->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(self->right_node))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sSubNode_clone"
                    # 6 "sSubNode_clone"
                    if(_if_conditional128=self!=((void*)0),                    _if_conditional128) {
                        # 6 "sSubNode_clone"
                        result_82->sline=self->sline;
                    }
                    # 8 "sSubNode_clone"
                    # 7 "sSubNode_clone"
                    if(_if_conditional129=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional129) {
                        # 7 "sSubNode_clone"
                        __dec_obj66=result_82->sname;
                        result_82->sname=(char*)come_increment_ref_count(((char*)(right_value156=string_clone(self->sname))));
                        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 8 "sSubNode_clone"
                    __result107__ = __result_obj__ = result_82;
                    come_call_finalizer2(sSubNode_finalize,result_82, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                    come_call_finalizer2(sSubNode_finalize,result_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v1(struct sInfo* info){
void* __result_obj__;
void* right_value158;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    # 600 "01main.c"
    __result110__ = __result_obj__ = ((struct sNode*)(right_value158=add_sub_expression_node(info)));
    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result110__;
}

_Bool output_source(struct sInfo* info){
void* __result_obj__;
void* right_value159;
void* right_value160;
char* sname_83;
void* right_value161;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&sname_83, 0, sizeof(char*));
right_value161 = (void*)0;
    # 605 "01main.c"
    sname_83=(char*)come_increment_ref_count(((char*)(right_value160=string_operator_add(((char*)(right_value159=xnoextname(info->sname))),".rb"))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 606 "01main.c"
    string_write(((char*)(right_value161=buffer_to_string(info->module->mSource))),sname_83,(_Bool)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 608 "01main.c"
    __result111__ = (_Bool)1;
    sname_83 = come_decrement_ref_count2(sname_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result111__;
    sname_83 = come_decrement_ref_count2(sname_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void init_typed_ruby(struct sInfo* info){
void* __result_obj__;
void* right_value162;
void* right_value163;
struct sClass* integer_class_84;
void* right_value170;
void* right_value171;
void* right_value172;
struct sClass* void_class_129;
void* right_value173;
void* right_value174;
void* right_value175;
struct sClass* string_class_130;
void* right_value176;
void* right_value177;
void* right_value178;
struct sClass* kernel_class_131;
void* right_value179;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&integer_class_84, 0, sizeof(struct sClass*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&void_class_129, 0, sizeof(struct sClass*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&string_class_130, 0, sizeof(struct sClass*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&kernel_class_131, 0, sizeof(struct sClass*));
right_value179 = (void*)0;
    # 613 "01main.c"
    integer_class_84=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value163=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value162=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 613, "sClass")))),"Integer"))));
    come_call_finalizer2(sClass_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 615 "01main.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("Integer")))),(struct sClass*)come_increment_ref_count(integer_class_84));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 617 "01main.c"
    void_class_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value172=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 617, "sClass")))),"void"))));
    come_call_finalizer2(sClass_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 619 "01main.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(void_class_129));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 621 "01main.c"
    string_class_130=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value175=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value174=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 621, "sClass")))),"String"))));
    come_call_finalizer2(sClass_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 623 "01main.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string("String")))),(struct sClass*)come_increment_ref_count(string_class_130));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 625 "01main.c"
    kernel_class_131=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value178=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value177=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 625, "sClass")))),"Kernel"))));
    come_call_finalizer2(sClass_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 627 "01main.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string("Kernel")))),(struct sClass*)come_increment_ref_count(kernel_class_131));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,integer_class_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,void_class_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,string_class_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,kernel_class_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional130;
_Bool _if_conditional142;
_Bool _if_conditional143;
unsigned int hash_102;
unsigned int it_103;
_Bool _while_condtional14;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool same_key_exist_120;
char* it2_123;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct map$2charphsClassph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&it_103, 0, sizeof(unsigned int));
memset(&same_key_exist_120, 0, sizeof(_Bool));
memset(&it2_123, 0, sizeof(char*));
        # 1393 "/usr/local/include/comelang2.h"
        # 1390 "/usr/local/include/comelang2.h"
        if(_if_conditional130=self->len*10>=self->size,        _if_conditional130) {
            # 1391 "/usr/local/include/comelang2.h"
            map$2charphsClassph_rehash(self);
        }
        # 1400 "/usr/local/include/comelang2.h"
        # 1393 "/usr/local/include/comelang2.h"
        if(_if_conditional142=1,        _if_conditional142) {
            # 1399 "/usr/local/include/comelang2.h"
            # 1394 "/usr/local/include/comelang2.h"
            if(_if_conditional143=key==((void*)0),            _if_conditional143) {
                # 1395 "/usr/local/include/comelang2.h"
                stackframe();
                # 1396 "/usr/local/include/comelang2.h"
                puts("key is null");
                # 1397 "/usr/local/include/comelang2.h"
                exit(2);
            }
        }
        # 1400 "/usr/local/include/comelang2.h"
        hash_102=string_get_hash_key(key)%self->size;
        # 1401 "/usr/local/include/comelang2.h"
        it_103=hash_102;
        # 1459 "/usr/local/include/comelang2.h"
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            # 1457 "/usr/local/include/comelang2.h"
            # 1404 "/usr/local/include/comelang2.h"
            if(_if_conditional144=self->item_existance[it_103],            _if_conditional144) {
                # 1427 "/usr/local/include/comelang2.h"
                # 1406 "/usr/local/include/comelang2.h"
                if(_if_conditional145=string_equals(self->keys[it_103],key),                _if_conditional145) {
                    # 1417 "/usr/local/include/comelang2.h"
                    # 1408 "/usr/local/include/comelang2.h"
                    if(_if_conditional146=1,                    _if_conditional146) {
                        # 1409 "/usr/local/include/comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_103]);
                        # 1410 "/usr/local/include/comelang2.h"
                        self->keys[it_103] = come_decrement_ref_count2(self->keys[it_103], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1411 "/usr/local/include/comelang2.h"
                        self->keys[it_103]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1414 "/usr/local/include/comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_103]);
                        # 1415 "/usr/local/include/comelang2.h"
                        self->keys[it_103]=key;
                    }
                    # 1424 "/usr/local/include/comelang2.h"
                    # 1417 "/usr/local/include/comelang2.h"
                    if(_if_conditional166=1,                    _if_conditional166) {
                        # 1418 "/usr/local/include/comelang2.h"
                        come_call_finalizer2(sClass_finalize,self->items[it_103], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1419 "/usr/local/include/comelang2.h"
                        self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1422 "/usr/local/include/comelang2.h"
                        self->items[it_103]=item;
                    }
                    # 1424 "/usr/local/include/comelang2.h"
                    break;
                }
                # 1427 "/usr/local/include/comelang2.h"
                it_103++;
                # 1437 "/usr/local/include/comelang2.h"
                # 1429 "/usr/local/include/comelang2.h"
                if(_if_conditional167=it_103>=self->size,                _if_conditional167) {
                    # 1430 "/usr/local/include/comelang2.h"
                    it_103=0;
                }
                else {
                    # 1437 "/usr/local/include/comelang2.h"
                    # 1432 "/usr/local/include/comelang2.h"
                    if(_if_conditional168=it_103==hash_102,                    _if_conditional168) {
                        # 1433 "/usr/local/include/comelang2.h"
                        printf("unexpected error in map.insert\n");
                        # 1434 "/usr/local/include/comelang2.h"
                        stackframe();
                        # 1435 "/usr/local/include/comelang2.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1439 "/usr/local/include/comelang2.h"
                self->item_existance[it_103]=(_Bool)1;
                # 1446 "/usr/local/include/comelang2.h"
                # 1440 "/usr/local/include/comelang2.h"
                if(_if_conditional169=1,                _if_conditional169) {
                    # 1441 "/usr/local/include/comelang2.h"
                    self->keys[it_103]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1444 "/usr/local/include/comelang2.h"
                    self->keys[it_103]=key;
                }
                # 1453 "/usr/local/include/comelang2.h"
                # 1446 "/usr/local/include/comelang2.h"
                if(_if_conditional170=1,                _if_conditional170) {
                    # 1447 "/usr/local/include/comelang2.h"
                    self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1450 "/usr/local/include/comelang2.h"
                    self->items[it_103]=item;
                }
                # 1453 "/usr/local/include/comelang2.h"
                self->len++;
                # 1455 "/usr/local/include/comelang2.h"
                break;
            }
        }
        # 1459 "/usr/local/include/comelang2.h"
        same_key_exist_120=(_Bool)0;
        # 1468 "/usr/local/include/comelang2.h"
        for(        it2_123=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_123=list$1charp_next(self->key_list)        ){
            # 1466 "/usr/local/include/comelang2.h"
            # 1462 "/usr/local/include/comelang2.h"
            if(_if_conditional175=string_equals(it2_123,key),            _if_conditional175) {
                # 1463 "/usr/local/include/comelang2.h"
                puts("SAME KEY");
                # 1464 "/usr/local/include/comelang2.h"
                same_key_exist_120=(_Bool)1;
            }
        }
        # 1472 "/usr/local/include/comelang2.h"
        # 1468 "/usr/local/include/comelang2.h"
        if(_if_conditional176=!same_key_exist_120,        _if_conditional176) {
            # 1469 "/usr/local/include/comelang2.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1472 "/usr/local/include/comelang2.h"
        __result135__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result135__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_85;
void* right_value164;
char** keys_86;
void* right_value165;
struct sClass** items_87;
void* right_value166;
_Bool* item_existance_88;
int len_89;
char* it_92;
struct sClass* default_value_95;
struct sClass* it2_98;
unsigned int hash_99;
int n_100;
_Bool _while_condtional13;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sClass* default_value_101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_85, 0, sizeof(int));
right_value164 = (void*)0;
memset(&keys_86, 0, sizeof(char**));
right_value165 = (void*)0;
memset(&items_87, 0, sizeof(struct sClass**));
right_value166 = (void*)0;
memset(&item_existance_88, 0, sizeof(_Bool*));
memset(&len_89, 0, sizeof(int));
memset(&it_92, 0, sizeof(char*));
memset(&default_value_95, 0, sizeof(struct sClass*));
memset(&it2_98, 0, sizeof(struct sClass*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&n_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sClass*));
                # 1337 "/usr/local/include/comelang2.h"
                size_85=self->size*10;
                # 1338 "/usr/local/include/comelang2.h"
                keys_86=(char**)come_increment_ref_count(((char**)(right_value164=(char**)come_calloc(1, sizeof(char*)*(1*(size_85)), "/usr/local/include/comelang2.h", 1338, "char*%"))));
                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "/usr/local/include/comelang2.h"
                items_87=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value165=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_85)), "/usr/local/include/comelang2.h", 1339, "sClass*%"))));
                come_call_finalizer2(sClass_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "/usr/local/include/comelang2.h"
                item_existance_88=(_Bool*)come_increment_ref_count(((_Bool*)(right_value166=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_85)), "/usr/local/include/comelang2.h", 1340, "bool"))));
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "/usr/local/include/comelang2.h"
                len_89=0;
                # 1377 "/usr/local/include/comelang2.h"
                for(                it_92=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_92=map$2charphsClassph_next(self)                ){
                    # 1345 "/usr/local/include/comelang2.h"
                    # 1346 "/usr/local/include/comelang2.h"
                    memset(&default_value_95,0,sizeof(struct sClass*));
                    # 1347 "/usr/local/include/comelang2.h"
                    it2_98=map$2charphsClassph_at(self,it_92,default_value_95);
                    # 1348 "/usr/local/include/comelang2.h"
                    hash_99=string_get_hash_key(it_92)%size_85;
                    # 1349 "/usr/local/include/comelang2.h"
                    n_100=hash_99;
                    # 1375 "/usr/local/include/comelang2.h"
                    while(_while_condtional13=(_Bool)1,                    _while_condtional13) {
                        # 1374 "/usr/local/include/comelang2.h"
                        # 1352 "/usr/local/include/comelang2.h"
                        if(_if_conditional139=item_existance_88[n_100],                        _if_conditional139) {
                            # 1354 "/usr/local/include/comelang2.h"
                            n_100++;
                            # 1364 "/usr/local/include/comelang2.h"
                            # 1356 "/usr/local/include/comelang2.h"
                            if(_if_conditional140=n_100>=size_85,                            _if_conditional140) {
                                # 1357 "/usr/local/include/comelang2.h"
                                n_100=0;
                            }
                            else {
                                # 1364 "/usr/local/include/comelang2.h"
                                # 1359 "/usr/local/include/comelang2.h"
                                if(_if_conditional141=n_100==hash_99,                                _if_conditional141) {
                                    # 1360 "/usr/local/include/comelang2.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1361 "/usr/local/include/comelang2.h"
                                    stackframe();
                                    # 1362 "/usr/local/include/comelang2.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1366 "/usr/local/include/comelang2.h"
                            item_existance_88[n_100]=(_Bool)1;
                            # 1367 "/usr/local/include/comelang2.h"
                            keys_86[n_100]=it_92;
                            # 1368 "/usr/local/include/comelang2.h"
                            # 1369 "/usr/local/include/comelang2.h"
                            items_87[n_100]=map$2charphsClassph_at(self,it_92,default_value_101);
                            # 1371 "/usr/local/include/comelang2.h"
                            len_89++;
                            # 1372 "/usr/local/include/comelang2.h"
                            break;
                        }
                    }
                }
                # 1377 "/usr/local/include/comelang2.h"
                come_free((char*)self->items);
                # 1378 "/usr/local/include/comelang2.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1379 "/usr/local/include/comelang2.h"
                come_free((char*)self->keys);
                # 1381 "/usr/local/include/comelang2.h"
                self->keys=keys_86;
                # 1382 "/usr/local/include/comelang2.h"
                self->items=items_87;
                # 1383 "/usr/local/include/comelang2.h"
                self->item_existance=item_existance_88;
                # 1385 "/usr/local/include/comelang2.h"
                self->size=size_85;
                # 1386 "/usr/local/include/comelang2.h"
                self->len=len_89;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional131;
char* result_90;
char* __result112__;
_Bool _if_conditional132;
char* __result113__;
char* result_91;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(char*));
memset(&result_91, 0, sizeof(char*));
                    # 1304 "/usr/local/include/comelang2.h"
                    # 1299 "/usr/local/include/comelang2.h"
                    if(_if_conditional131=self==((void*)0),                    _if_conditional131) {
                        # 1300 "/usr/local/include/comelang2.h"
                        # 1301 "/usr/local/include/comelang2.h"
                        memset(&result_90,0,sizeof(char*));
                        # 1302 "/usr/local/include/comelang2.h"
                        __result112__ = __result_obj__ = result_90;
                        return __result112__;
                    }
                    # 1304 "/usr/local/include/comelang2.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "/usr/local/include/comelang2.h"
                    # 1306 "/usr/local/include/comelang2.h"
                    if(self->key_list->it) {
                        # 1307 "/usr/local/include/comelang2.h"
                        __result113__ = __result_obj__ = self->key_list->it->item;
                        return __result113__;
                    }
                    # 1310 "/usr/local/include/comelang2.h"
                    # 1311 "/usr/local/include/comelang2.h"
                    memset(&result_91,0,sizeof(char*));
                    # 1312 "/usr/local/include/comelang2.h"
                    __result114__ = __result_obj__ = result_91;
                    return __result114__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "/usr/local/include/comelang2.h"
                    __result115__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result115__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_93;
char* __result116__;
_Bool _if_conditional134;
char* __result117__;
char* result_94;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                    # 1321 "/usr/local/include/comelang2.h"
                    # 1316 "/usr/local/include/comelang2.h"
                    if(_if_conditional133=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional133) {
                        # 1317 "/usr/local/include/comelang2.h"
                        # 1318 "/usr/local/include/comelang2.h"
                        memset(&result_93,0,sizeof(char*));
                        # 1319 "/usr/local/include/comelang2.h"
                        __result116__ = __result_obj__ = result_93;
                        return __result116__;
                    }
                    # 1321 "/usr/local/include/comelang2.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "/usr/local/include/comelang2.h"
                    # 1323 "/usr/local/include/comelang2.h"
                    if(self->key_list->it) {
                        # 1324 "/usr/local/include/comelang2.h"
                        __result117__ = __result_obj__ = self->key_list->it->item;
                        return __result117__;
                    }
                    # 1327 "/usr/local/include/comelang2.h"
                    # 1328 "/usr/local/include/comelang2.h"
                    memset(&result_94,0,sizeof(char*));
                    # 1329 "/usr/local/include/comelang2.h"
                    __result118__ = __result_obj__ = result_94;
                    return __result118__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_96;
unsigned int it_97;
_Bool _while_condtional12;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sClass* __result119__;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct sClass* __result120__;
struct sClass* __result121__;
struct sClass* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_96, 0, sizeof(unsigned int));
memset(&it_97, 0, sizeof(unsigned int));
                        # 1226 "/usr/local/include/comelang2.h"
                        hash_96=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "/usr/local/include/comelang2.h"
                        it_97=hash_96;
                        # 1251 "/usr/local/include/comelang2.h"
                        while(_while_condtional12=(_Bool)1,                        _while_condtional12) {
                            # 1249 "/usr/local/include/comelang2.h"
                            # 1230 "/usr/local/include/comelang2.h"
                            if(_if_conditional135=self->item_existance[it_97],                            _if_conditional135) {
                                # 1237 "/usr/local/include/comelang2.h"
                                # 1232 "/usr/local/include/comelang2.h"
                                if(_if_conditional136=string_equals(self->keys[it_97],key),                                _if_conditional136) {
                                    # 1234 "/usr/local/include/comelang2.h"
                                    __result119__ = __result_obj__ = self->items[it_97];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result119__;
                                }
                                # 1237 "/usr/local/include/comelang2.h"
                                it_97++;
                                # 1245 "/usr/local/include/comelang2.h"
                                # 1239 "/usr/local/include/comelang2.h"
                                if(_if_conditional137=it_97>=self->size,                                _if_conditional137) {
                                    # 1240 "/usr/local/include/comelang2.h"
                                    it_97=0;
                                }
                                else {
                                    # 1245 "/usr/local/include/comelang2.h"
                                    # 1242 "/usr/local/include/comelang2.h"
                                    if(_if_conditional138=it_97==hash_96,                                    _if_conditional138) {
                                        # 1243 "/usr/local/include/comelang2.h"
                                        __result120__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result120__;
                                    }
                                }
                            }
                            else {
                                # 1247 "/usr/local/include/comelang2.h"
                                __result121__ = __result_obj__ = default_value;
                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result121__;
                            }
                        }
                        # 1251 "/usr/local/include/comelang2.h"
                        __result122__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result122__;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_104;
struct list_item$1charp* it_105;
_Bool _while_condtional15;
_Bool _if_conditional147;
struct list$1charp* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_104, 0, sizeof(int));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
                            # 448 "/usr/local/include/comelang2.h"
                            it2_104=0;
                            # 449 "/usr/local/include/comelang2.h"
                            it_105=self->head;
                            # 460 "/usr/local/include/comelang2.h"
                            while(_while_condtional15=it_105!=((void*)0),                            _while_condtional15) {
                                # 455 "/usr/local/include/comelang2.h"
                                # 451 "/usr/local/include/comelang2.h"
                                if(_if_conditional147=string_equals(it_105->item,item),                                _if_conditional147) {
                                    # 452 "/usr/local/include/comelang2.h"
                                    list$1charp_delete(self,it2_104,it2_104+1);
                                    # 453 "/usr/local/include/comelang2.h"
                                    break;
                                }
                                # 455 "/usr/local/include/comelang2.h"
                                it2_104++;
                                # 457 "/usr/local/include/comelang2.h"
                                it_105=it_105->next;
                            }
                            # 460 "/usr/local/include/comelang2.h"
                            __result126__ = __result_obj__ = self;
                            return __result126__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
int tmp_106;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result123__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_109;
int i_110;
_Bool _while_condtional17;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional18;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_114;
struct list_item$1charp* it_115;
struct list_item$1charp* head_prev_it_116;
struct list_item$1charp* tail_it_117;
int i_118;
_Bool _while_condtional19;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct list_item$1charp* prev_it_119;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list$1charp* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_106, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&it_115, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_116, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_117, 0, sizeof(struct list_item$1charp*));
memset(&i_118, 0, sizeof(int));
memset(&prev_it_119, 0, sizeof(struct list_item$1charp*));
                                        # 467 "/usr/local/include/comelang2.h"
                                        # 464 "/usr/local/include/comelang2.h"
                                        if(_if_conditional148=head<0,                                        _if_conditional148) {
                                            # 465 "/usr/local/include/comelang2.h"
                                            head+=self->len;
                                        }
                                        # 471 "/usr/local/include/comelang2.h"
                                        # 467 "/usr/local/include/comelang2.h"
                                        if(_if_conditional149=tail<0,                                        _if_conditional149) {
                                            # 468 "/usr/local/include/comelang2.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "/usr/local/include/comelang2.h"
                                        # 471 "/usr/local/include/comelang2.h"
                                        if(_if_conditional150=head>tail,                                        _if_conditional150) {
                                            # 472 "/usr/local/include/comelang2.h"
                                            tmp_106=tail;
                                            # 473 "/usr/local/include/comelang2.h"
                                            tail=head;
                                            # 474 "/usr/local/include/comelang2.h"
                                            head=tmp_106;
                                        }
                                        # 481 "/usr/local/include/comelang2.h"
                                        # 477 "/usr/local/include/comelang2.h"
                                        if(_if_conditional151=head<0,                                        _if_conditional151) {
                                            # 478 "/usr/local/include/comelang2.h"
                                            head=0;
                                        }
                                        # 485 "/usr/local/include/comelang2.h"
                                        # 481 "/usr/local/include/comelang2.h"
                                        if(_if_conditional152=tail>self->len,                                        _if_conditional152) {
                                            # 482 "/usr/local/include/comelang2.h"
                                            tail=self->len;
                                        }
                                        # 489 "/usr/local/include/comelang2.h"
                                        # 485 "/usr/local/include/comelang2.h"
                                        if(_if_conditional153=head==tail,                                        _if_conditional153) {
                                            # 486 "/usr/local/include/comelang2.h"
                                            __result123__ = __result_obj__ = self;
                                            return __result123__;
                                        }
                                        # 584 "/usr/local/include/comelang2.h"
                                        # 489 "/usr/local/include/comelang2.h"
                                        if(_if_conditional154=head==0&&tail==self->len,                                        _if_conditional154) {
                                            # 491 "/usr/local/include/comelang2.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "/usr/local/include/comelang2.h"
                                            # 493 "/usr/local/include/comelang2.h"
                                            if(_if_conditional155=head==0,                                            _if_conditional155) {
                                                # 494 "/usr/local/include/comelang2.h"
                                                it_109=self->head;
                                                # 495 "/usr/local/include/comelang2.h"
                                                i_110=0;
                                                # 517 "/usr/local/include/comelang2.h"
                                                while(_while_condtional17=it_109!=((void*)0),                                                _while_condtional17) {
                                                    # 516 "/usr/local/include/comelang2.h"
                                                    # 497 "/usr/local/include/comelang2.h"
                                                    if(_if_conditional156=i_110<tail,                                                    _if_conditional156) {
                                                        # 498 "/usr/local/include/comelang2.h"
                                                        prev_it_111=it_109;
                                                        # 500 "/usr/local/include/comelang2.h"
                                                        it_109=it_109->next;
                                                        # 501 "/usr/local/include/comelang2.h"
                                                        i_110++;
                                                        # 503 "/usr/local/include/comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "/usr/local/include/comelang2.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "/usr/local/include/comelang2.h"
                                                        # 507 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional157=i_110==tail,                                                        _if_conditional157) {
                                                            # 508 "/usr/local/include/comelang2.h"
                                                            self->head=it_109;
                                                            # 509 "/usr/local/include/comelang2.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "/usr/local/include/comelang2.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "/usr/local/include/comelang2.h"
                                                            it_109=it_109->next;
                                                            # 514 "/usr/local/include/comelang2.h"
                                                            i_110++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "/usr/local/include/comelang2.h"
                                                # 518 "/usr/local/include/comelang2.h"
                                                if(_if_conditional158=tail==self->len,                                                _if_conditional158) {
                                                    # 519 "/usr/local/include/comelang2.h"
                                                    it_112=self->head;
                                                    # 520 "/usr/local/include/comelang2.h"
                                                    i_113=0;
                                                    # 542 "/usr/local/include/comelang2.h"
                                                    while(_while_condtional18=it_112!=((void*)0),                                                    _while_condtional18) {
                                                        # 527 "/usr/local/include/comelang2.h"
                                                        # 522 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional159=i_113==head,                                                        _if_conditional159) {
                                                            # 523 "/usr/local/include/comelang2.h"
                                                            self->tail=it_112->prev;
                                                            # 524 "/usr/local/include/comelang2.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "/usr/local/include/comelang2.h"
                                                        # 527 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional160=i_113>=head,                                                        _if_conditional160) {
                                                            # 528 "/usr/local/include/comelang2.h"
                                                            prev_it_114=it_112;
                                                            # 530 "/usr/local/include/comelang2.h"
                                                            it_112=it_112->next;
                                                            # 531 "/usr/local/include/comelang2.h"
                                                            i_113++;
                                                            # 533 "/usr/local/include/comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "/usr/local/include/comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "/usr/local/include/comelang2.h"
                                                            it_112=it_112->next;
                                                            # 539 "/usr/local/include/comelang2.h"
                                                            i_113++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "/usr/local/include/comelang2.h"
                                                    it_115=self->head;
                                                    # 546 "/usr/local/include/comelang2.h"
                                                    head_prev_it_116=((void*)0);
                                                    # 547 "/usr/local/include/comelang2.h"
                                                    tail_it_117=((void*)0);
                                                    # 550 "/usr/local/include/comelang2.h"
                                                    i_118=0;
                                                    # 576 "/usr/local/include/comelang2.h"
                                                    while(_while_condtional19=it_115!=((void*)0),                                                    _while_condtional19) {
                                                        # 555 "/usr/local/include/comelang2.h"
                                                        # 552 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional161=i_118==head,                                                        _if_conditional161) {
                                                            # 553 "/usr/local/include/comelang2.h"
                                                            head_prev_it_116=it_115->prev;
                                                        }
                                                        # 559 "/usr/local/include/comelang2.h"
                                                        # 555 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional162=i_118==tail,                                                        _if_conditional162) {
                                                            # 556 "/usr/local/include/comelang2.h"
                                                            tail_it_117=it_115;
                                                        }
                                                        # 574 "/usr/local/include/comelang2.h"
                                                        # 559 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional163=i_118>=head&&i_118<tail,                                                        _if_conditional163) {
                                                            # 561 "/usr/local/include/comelang2.h"
                                                            prev_it_119=it_115;
                                                            # 563 "/usr/local/include/comelang2.h"
                                                            it_115=it_115->next;
                                                            # 564 "/usr/local/include/comelang2.h"
                                                            i_118++;
                                                            # 566 "/usr/local/include/comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "/usr/local/include/comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "/usr/local/include/comelang2.h"
                                                            it_115=it_115->next;
                                                            # 572 "/usr/local/include/comelang2.h"
                                                            i_118++;
                                                        }
                                                    }
                                                    # 579 "/usr/local/include/comelang2.h"
                                                    # 576 "/usr/local/include/comelang2.h"
                                                    if(_if_conditional164=head_prev_it_116!=((void*)0),                                                    _if_conditional164) {
                                                        # 577 "/usr/local/include/comelang2.h"
                                                        head_prev_it_116->next=tail_it_117;
                                                    }
                                                    # 582 "/usr/local/include/comelang2.h"
                                                    # 579 "/usr/local/include/comelang2.h"
                                                    if(_if_conditional165=tail_it_117!=((void*)0),                                                    _if_conditional165) {
                                                        # 580 "/usr/local/include/comelang2.h"
                                                        tail_it_117->prev=head_prev_it_116;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "/usr/local/include/comelang2.h"
                                        __result125__ = __result_obj__ = self;
                                        return __result125__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_107;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_108;
struct list$1charp* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                                # 433 "/usr/local/include/comelang2.h"
                                                it_107=self->head;
                                                # 440 "/usr/local/include/comelang2.h"
                                                while(_while_condtional16=it_107!=((void*)0),                                                _while_condtional16) {
                                                    # 435 "/usr/local/include/comelang2.h"
                                                    prev_it_108=it_107;
                                                    # 436 "/usr/local/include/comelang2.h"
                                                    it_107=it_107->next;
                                                    # 437 "/usr/local/include/comelang2.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "/usr/local/include/comelang2.h"
                                                self->head=((void*)0);
                                                # 441 "/usr/local/include/comelang2.h"
                                                self->tail=((void*)0);
                                                # 443 "/usr/local/include/comelang2.h"
                                                self->len=0;
                                                # 445 "/usr/local/include/comelang2.h"
                                                __result124__ = __result_obj__ = self;
                                                return __result124__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional171;
char* result_121;
char* __result127__;
_Bool _if_conditional172;
char* __result128__;
char* result_122;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
            # 290 "/usr/local/include/comelang2.h"
            # 285 "/usr/local/include/comelang2.h"
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                # 286 "/usr/local/include/comelang2.h"
                # 287 "/usr/local/include/comelang2.h"
                memset(&result_121,0,sizeof(char*));
                # 288 "/usr/local/include/comelang2.h"
                __result127__ = __result_obj__ = result_121;
                return __result127__;
            }
            # 290 "/usr/local/include/comelang2.h"
            self->it=self->head;
            # 296 "/usr/local/include/comelang2.h"
            # 292 "/usr/local/include/comelang2.h"
            if(self->it) {
                # 293 "/usr/local/include/comelang2.h"
                __result128__ = __result_obj__ = self->it->item;
                return __result128__;
            }
            # 296 "/usr/local/include/comelang2.h"
            # 297 "/usr/local/include/comelang2.h"
            memset(&result_122,0,sizeof(char*));
            # 298 "/usr/local/include/comelang2.h"
            __result129__ = __result_obj__ = result_122;
            return __result129__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "/usr/local/include/comelang2.h"
            __result130__ = self==((void*)0)||self->it==((void*)0);
            return __result130__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional173;
char* result_124;
char* __result131__;
_Bool _if_conditional174;
char* __result132__;
char* result_125;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
            # 308 "/usr/local/include/comelang2.h"
            # 302 "/usr/local/include/comelang2.h"
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                # 303 "/usr/local/include/comelang2.h"
                # 304 "/usr/local/include/comelang2.h"
                memset(&result_124,0,sizeof(char*));
                # 305 "/usr/local/include/comelang2.h"
                __result131__ = __result_obj__ = result_124;
                return __result131__;
            }
            # 308 "/usr/local/include/comelang2.h"
            self->it=self->it->next;
            # 314 "/usr/local/include/comelang2.h"
            # 310 "/usr/local/include/comelang2.h"
            if(self->it) {
                # 311 "/usr/local/include/comelang2.h"
                __result132__ = __result_obj__ = self->it->item;
                return __result132__;
            }
            # 314 "/usr/local/include/comelang2.h"
            # 315 "/usr/local/include/comelang2.h"
            memset(&result_125,0,sizeof(char*));
            # 316 "/usr/local/include/comelang2.h"
            __result133__ = __result_obj__ = result_125;
            return __result133__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional177;
void* right_value167;
struct list_item$1charp* litem_126;
_Bool _if_conditional178;
void* right_value168;
struct list_item$1charp* litem_127;
void* right_value169;
struct list_item$1charp* litem_128;
struct list$1charp* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1charp*));
right_value168 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1charp*));
right_value169 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
                # 256 "/usr/local/include/comelang2.h"
                # 225 "/usr/local/include/comelang2.h"
                if(_if_conditional177=self->len==0,                _if_conditional177) {
                    # 226 "/usr/local/include/comelang2.h"
                    litem_126=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value167=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "/usr/local/include/comelang2.h"
                    litem_126->prev=((void*)0);
                    # 229 "/usr/local/include/comelang2.h"
                    litem_126->next=((void*)0);
                    # 230 "/usr/local/include/comelang2.h"
                    litem_126->item=item;
                    # 232 "/usr/local/include/comelang2.h"
                    self->tail=litem_126;
                    # 233 "/usr/local/include/comelang2.h"
                    self->head=litem_126;
                }
                else {
                    # 256 "/usr/local/include/comelang2.h"
                    # 235 "/usr/local/include/comelang2.h"
                    if(_if_conditional178=self->len==1,                    _if_conditional178) {
                        # 236 "/usr/local/include/comelang2.h"
                        litem_127=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value168=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "/usr/local/include/comelang2.h"
                        litem_127->prev=self->head;
                        # 239 "/usr/local/include/comelang2.h"
                        litem_127->next=((void*)0);
                        # 240 "/usr/local/include/comelang2.h"
                        litem_127->item=item;
                        # 242 "/usr/local/include/comelang2.h"
                        self->tail=litem_127;
                        # 243 "/usr/local/include/comelang2.h"
                        self->head->next=litem_127;
                    }
                    else {
                        # 246 "/usr/local/include/comelang2.h"
                        litem_128=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value169=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "/usr/local/include/comelang2.h"
                        litem_128->prev=self->tail;
                        # 249 "/usr/local/include/comelang2.h"
                        litem_128->next=((void*)0);
                        # 250 "/usr/local/include/comelang2.h"
                        litem_128->item=item;
                        # 252 "/usr/local/include/comelang2.h"
                        self->tail->next=litem_128;
                        # 253 "/usr/local/include/comelang2.h"
                        self->tail=litem_128;
                    }
                }
                # 256 "/usr/local/include/comelang2.h"
                self->len++;
                # 258 "/usr/local/include/comelang2.h"
                __result134__ = __result_obj__ = self;
                return __result134__;
}

int main(int argc, char** argv){
void* __result_obj__;
char* file_name_132;
_Bool eval_133;
int i_134;
_Bool _if_conditional179;
void* right_value180;
char* __dec_obj67;
struct sInfo info_135;
void* right_value181;
void* right_value182;
struct buffer* __dec_obj68;
void* right_value183;
struct smart_pointer$1char* __dec_obj69;
void* right_value184;
char* __dec_obj70;
void* right_value185;
void* right_value186;
struct list$1CVALUEph* __dec_obj71;
struct sType* __dec_obj72;
void* right_value187;
void* right_value193;
struct map$2charphsClassph* __dec_obj74;
void* right_value194;
void* right_value195;
struct map$2charphsMethodph* __dec_obj75;
void* right_value196;
void* right_value197;
struct sModule* __dec_obj76;
void* right_value198;
void* right_value204;
struct map$2charphsVarph* __dec_obj78;
_Bool _while_condtional21;
void* right_value205;
struct sNode* node_144;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&file_name_132, 0, sizeof(char*));
memset(&eval_133, 0, sizeof(_Bool));
memset(&i_134, 0, sizeof(int));
right_value180 = (void*)0;
memset(&info_135, 0, sizeof(struct sInfo));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&node_144, 0, sizeof(struct sNode*));
come_heap_init(0, 0, 0);
    # 632 "01main.c"
    file_name_132=((void*)0);
    # 633 "01main.c"
    eval_133=(_Bool)0;
    # 643 "01main.c"
    for(    i_134=0;    i_134<argc;    i_134++    ){
        # 641 "01main.c"
        # 635 "01main.c"
        if(_if_conditional179=charp_operator_equals(argv[i_134],"-e"),        _if_conditional179) {
            # 636 "01main.c"
            eval_133=(_Bool)1;
        }
        else {
            # 639 "01main.c"
            __dec_obj67=file_name_132;
            file_name_132=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(argv[i_134]))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 643 "01main.c"
    # 645 "01main.c"
    __dec_obj68=info_135.source;
    info_135.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=string_to_buffer(((char*)(right_value181=string_read(come_null_check(file_name_132, "01main.c", 645, 0))))))));
    come_call_finalizer2(buffer_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 646 "01main.c"
    __dec_obj69=info_135.p;
    info_135.p=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value183=buffer_to_pointer(info_135.source))));
    come_call_finalizer2(smart_pointer$1char_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 647 "01main.c"
    __dec_obj70=info_135.sname;
    info_135.sname=(char*)come_increment_ref_count(come_null_check(((char*)(right_value184=string_clone(file_name_132))), "01main.c", 647, 1));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 648 "01main.c"
    info_135.sline=1;
    # 649 "01main.c"
    __dec_obj71=info_135.stack;
    info_135.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value186=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "01main.c", 649, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 650 "01main.c"
    __dec_obj72=info_135.type;
    info_135.type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 651 "01main.c"
    __dec_obj74=info_135.classes;
    info_135.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value193=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value187=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "01main.c", 651, "map$2charphsClassph"))))))));
    come_call_finalizer2(map$2charphsClassph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsClassphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsClassphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 652 "01main.c"
    __dec_obj75=info_135.methods;
    info_135.methods=(struct map$2charphsMethodph*)come_increment_ref_count(((struct map$2charphsMethodph*)(right_value195=map$2charphsMethodph_initialize((struct map$2charphsMethodph*)come_increment_ref_count(((struct map$2charphsMethodph*)(right_value194=(struct map$2charphsMethodph*)come_calloc(1, sizeof(struct map$2charphsMethodph)*(1), "01main.c", 652, "map$2charphsMethodph"))))))));
    come_call_finalizer2(map$2charphsMethodph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsMethodphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsMethodphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 653 "01main.c"
    info_135.no_output_come_code=(_Bool)0;
    # 654 "01main.c"
    __dec_obj76=info_135.module;
    info_135.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value197=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value196=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "01main.c", 654, "sModule"))))))));
    come_call_finalizer2(sModule_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sModule_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sModule_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 655 "01main.c"
    __dec_obj78=info_135.lv_table;
    info_135.lv_table=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value204=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value198=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "01main.c", 655, "map$2charphsVarph"))))))));
    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(map$2charphsVarphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(map$2charphsVarphp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 657 "01main.c"
    init_typed_ruby(&info_135);
    # 682 "01main.c"
    while(_while_condtional21=smart_pointer$1charp_operator_derefference(info_135.p),    _while_condtional21) {
        # 660 "01main.c"
        skip_spaces_and_lf(&info_135);
        # 661 "01main.c"
        node_144=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=expression_v3(&info_135))));
        if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 668 "01main.c"
        # 663 "01main.c"
        if(_if_conditional194=node_144==((void*)0),        _if_conditional194) {
            # 664 "01main.c"
            puts("parse error");
            # 665 "01main.c"
            exit(2);
        }
        # 668 "01main.c"
        skip_spaces_and_lf(&info_135);
        # 674 "01main.c"
        # 670 "01main.c"
        if(_if_conditional195=!node_144->compile(node_144->_protocol_obj,&info_135),        _if_conditional195) {
            # 671 "01main.c"
            puts("compile error");
            # 672 "01main.c"
            exit(2);
        }
        # 674 "01main.c"
        add_last_code_to_source(&info_135);
        # 680 "01main.c"
        # 676 "01main.c"
        if(_if_conditional196=smart_pointer$1charp_operator_derefference(info_135.p)==59,        _if_conditional196) {
            # 677 "01main.c"
            smart_pointer$1charp_operator_plus_plus(info_135.p);
            # 678 "01main.c"
            skip_spaces_and_lf(&info_135);
        }
        if(node_144) { node_144 = come_decrement_ref_count2(node_144, ((struct sNode*)node_144)->finalize, ((struct sNode*)node_144)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 687 "01main.c"
    # 682 "01main.c"
    if(_if_conditional197=!output_source(&info_135),    _if_conditional197) {
        # 683 "01main.c"
        puts("output source error");
        # 684 "01main.c"
        exit(2);
    }
    # 687 "01main.c"
    __result139__ = 0;
    file_name_132 = come_decrement_ref_count2(file_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sInfo_finalize,(&info_135), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result139__;
    file_name_132 = come_decrement_ref_count2(file_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sInfo_finalize,(&info_135), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
come_heap_final();
}

static void smart_pointer$1char_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1char_finalize"
        # 0 "smart_pointer$1char_finalize"
        if(_if_conditional180=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional180) {
            # 0 "smart_pointer$1char_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "/usr/local/include/comelang2.h"
        self->head=((void*)0);
        # 105 "/usr/local/include/comelang2.h"
        self->tail=((void*)0);
        # 106 "/usr/local/include/comelang2.h"
        self->len=0;
        # 108 "/usr/local/include/comelang2.h"
        __result136__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result136__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_136;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_136, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_137, 0, sizeof(struct list_item$1CVALUEph*));
            # 123 "/usr/local/include/comelang2.h"
            it_136=self->head;
            # 129 "/usr/local/include/comelang2.h"
            while(_while_condtional20=it_136!=((void*)0),            _while_condtional20) {
                # 125 "/usr/local/include/comelang2.h"
                prev_it_137=it_136;
                # 126 "/usr/local/include/comelang2.h"
                it_136=it_136->next;
                # 127 "/usr/local/include/comelang2.h"
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value188;
void* right_value189;
void* right_value190;
int i_138;
void* right_value191;
void* right_value192;
struct list$1charp* __dec_obj73;
struct map$2charphsClassph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&i_138, 0, sizeof(int));
right_value191 = (void*)0;
right_value192 = (void*)0;
        # 1087 "/usr/local/include/comelang2.h"
        self->keys=(char**)come_increment_ref_count(((char**)(right_value188=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1087, "char*%"))));
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1088 "/usr/local/include/comelang2.h"
        self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value189=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "/usr/local/include/comelang2.h", 1088, "sClass*%"))));
        come_call_finalizer2(sClass_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1089 "/usr/local/include/comelang2.h"
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value190=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1089, "bool"))));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1096 "/usr/local/include/comelang2.h"
        for(        i_138=0;        i_138<1024;        i_138++        ){
            # 1093 "/usr/local/include/comelang2.h"
            self->item_existance[i_138]=(_Bool)0;
        }
        # 1096 "/usr/local/include/comelang2.h"
        self->size=1024;
        # 1097 "/usr/local/include/comelang2.h"
        self->len=0;
        # 1099 "/usr/local/include/comelang2.h"
        __dec_obj73=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value192=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value191=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1099, "list$1charp"))))))));
        come_call_finalizer2(list$1charp_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charpp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charpp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1101 "/usr/local/include/comelang2.h"
        self->it=0;
        # 1103 "/usr/local/include/comelang2.h"
        __result137__ = __result_obj__ = self;
        come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result137__;
        come_call_finalizer2(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_139;
_Bool _if_conditional181;
_Bool _if_conditional182;
int i_140;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_139, 0, sizeof(int));
memset(&i_140, 0, sizeof(int));
            # 1137 "/usr/local/include/comelang2.h"
            for(            i_139=0;            i_139<self->size;            i_139++            ){
                # 1136 "/usr/local/include/comelang2.h"
                # 1131 "/usr/local/include/comelang2.h"
                if(_if_conditional181=self->item_existance[i_139],                _if_conditional181) {
                    # 1135 "/usr/local/include/comelang2.h"
                    # 1132 "/usr/local/include/comelang2.h"
                    if(_if_conditional182=1,                    _if_conditional182) {
                        # 1133 "/usr/local/include/comelang2.h"
                        come_call_finalizer2(sClass_finalize,self->items[i_139], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1137 "/usr/local/include/comelang2.h"
            come_free((char*)self->items);
            # 1146 "/usr/local/include/comelang2.h"
            for(            i_140=0;            i_140<self->size;            i_140++            ){
                # 1145 "/usr/local/include/comelang2.h"
                # 1140 "/usr/local/include/comelang2.h"
                if(_if_conditional183=self->item_existance[i_140],                _if_conditional183) {
                    # 1144 "/usr/local/include/comelang2.h"
                    # 1141 "/usr/local/include/comelang2.h"
                    if(_if_conditional184=1,                    _if_conditional184) {
                        # 1142 "/usr/local/include/comelang2.h"
                        self->keys[i_140] = come_decrement_ref_count2(self->keys[i_140], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1146 "/usr/local/include/comelang2.h"
            come_free((char*)self->keys);
            # 1148 "/usr/local/include/comelang2.h"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1150 "/usr/local/include/comelang2.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "map$2charphsClassph_finalize"
        # 0 "map$2charphsClassph_finalize"
        if(_if_conditional185=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional185) {
            # 0 "map$2charphsClassph_finalize"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value199;
void* right_value200;
void* right_value201;
int i_141;
void* right_value202;
void* right_value203;
struct list$1charp* __dec_obj77;
struct map$2charphsVarph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&i_141, 0, sizeof(int));
right_value202 = (void*)0;
right_value203 = (void*)0;
        # 1087 "/usr/local/include/comelang2.h"
        self->keys=(char**)come_increment_ref_count(((char**)(right_value199=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1087, "char*%"))));
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1088 "/usr/local/include/comelang2.h"
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value200=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "/usr/local/include/comelang2.h", 1088, "sVar*%"))));
        come_call_finalizer2(sVar_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1089 "/usr/local/include/comelang2.h"
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value201=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1089, "bool"))));
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1096 "/usr/local/include/comelang2.h"
        for(        i_141=0;        i_141<1024;        i_141++        ){
            # 1093 "/usr/local/include/comelang2.h"
            self->item_existance[i_141]=(_Bool)0;
        }
        # 1096 "/usr/local/include/comelang2.h"
        self->size=1024;
        # 1097 "/usr/local/include/comelang2.h"
        self->len=0;
        # 1099 "/usr/local/include/comelang2.h"
        __dec_obj77=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value203=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value202=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1099, "list$1charp"))))))));
        come_call_finalizer2(list$1charp_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charpp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charpp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1101 "/usr/local/include/comelang2.h"
        self->it=0;
        # 1103 "/usr/local/include/comelang2.h"
        __result138__ = __result_obj__ = self;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sVar_finalize"
            # 0 "sVar_finalize"
            if(_if_conditional186=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional186) {
                # 0 "sVar_finalize"
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sVar_finalize"
            # 1 "sVar_finalize"
            if(_if_conditional187=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional187) {
                # 1 "sVar_finalize"
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 3 "sVar_finalize"
            # 2 "sVar_finalize"
            if(_if_conditional188=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional188) {
                # 2 "sVar_finalize"
                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_142;
_Bool _if_conditional189;
_Bool _if_conditional190;
int i_143;
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_142, 0, sizeof(int));
memset(&i_143, 0, sizeof(int));
            # 1137 "/usr/local/include/comelang2.h"
            for(            i_142=0;            i_142<self->size;            i_142++            ){
                # 1136 "/usr/local/include/comelang2.h"
                # 1131 "/usr/local/include/comelang2.h"
                if(_if_conditional189=self->item_existance[i_142],                _if_conditional189) {
                    # 1135 "/usr/local/include/comelang2.h"
                    # 1132 "/usr/local/include/comelang2.h"
                    if(_if_conditional190=1,                    _if_conditional190) {
                        # 1133 "/usr/local/include/comelang2.h"
                        come_call_finalizer2(sVar_finalize,self->items[i_142], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1137 "/usr/local/include/comelang2.h"
            come_free((char*)self->items);
            # 1146 "/usr/local/include/comelang2.h"
            for(            i_143=0;            i_143<self->size;            i_143++            ){
                # 1145 "/usr/local/include/comelang2.h"
                # 1140 "/usr/local/include/comelang2.h"
                if(_if_conditional191=self->item_existance[i_143],                _if_conditional191) {
                    # 1144 "/usr/local/include/comelang2.h"
                    # 1141 "/usr/local/include/comelang2.h"
                    if(_if_conditional192=1,                    _if_conditional192) {
                        # 1142 "/usr/local/include/comelang2.h"
                        self->keys[i_143] = come_decrement_ref_count2(self->keys[i_143], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1146 "/usr/local/include/comelang2.h"
            come_free((char*)self->keys);
            # 1148 "/usr/local/include/comelang2.h"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1150 "/usr/local/include/comelang2.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "map$2charphsVarph_finalize"
        # 0 "map$2charphsVarph_finalize"
        if(_if_conditional193=self!=((void*)0)&&self->key_list!=((void*)0),        _if_conditional193) {
            # 0 "map$2charphsVarph_finalize"
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sInfo_finalize"
        # 0 "sInfo_finalize"
        if(_if_conditional198=self!=((void*)0)&&self->source!=((void*)0),        _if_conditional198) {
            # 0 "sInfo_finalize"
            come_call_finalizer2(buffer_finalize,self->source, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sInfo_finalize"
        # 1 "sInfo_finalize"
        if(_if_conditional199=self!=((void*)0)&&self->p!=((void*)0),        _if_conditional199) {
            # 1 "sInfo_finalize"
            come_call_finalizer2(smart_pointer$1charp_finalize,self->p, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sInfo_finalize"
        # 2 "sInfo_finalize"
        if(_if_conditional200=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional200) {
            # 2 "sInfo_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sInfo_finalize"
        # 3 "sInfo_finalize"
        if(_if_conditional201=self!=((void*)0)&&self->stack!=((void*)0),        _if_conditional201) {
            # 3 "sInfo_finalize"
            come_call_finalizer2(list$1CVALUEphp_finalize,self->stack, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sInfo_finalize"
        # 4 "sInfo_finalize"
        if(_if_conditional202=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional202) {
            # 4 "sInfo_finalize"
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sInfo_finalize"
        # 5 "sInfo_finalize"
        if(_if_conditional203=self!=((void*)0)&&self->classes!=((void*)0),        _if_conditional203) {
            # 5 "sInfo_finalize"
            come_call_finalizer2(map$2charphsClassphp_finalize,self->classes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 7 "sInfo_finalize"
        # 6 "sInfo_finalize"
        if(_if_conditional204=self!=((void*)0)&&self->module!=((void*)0),        _if_conditional204) {
            # 6 "sInfo_finalize"
            come_call_finalizer2(sModule_finalize,self->module, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 8 "sInfo_finalize"
        # 7 "sInfo_finalize"
        if(_if_conditional205=self!=((void*)0)&&self->methods!=((void*)0),        _if_conditional205) {
            # 7 "sInfo_finalize"
            come_call_finalizer2(map$2charphsMethodphp_finalize,self->methods, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 9 "sInfo_finalize"
        # 8 "sInfo_finalize"
        if(_if_conditional206=self!=((void*)0)&&self->lv_table!=((void*)0),        _if_conditional206) {
            # 8 "sInfo_finalize"
            come_call_finalizer2(map$2charphsVarphp_finalize,self->lv_table, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

