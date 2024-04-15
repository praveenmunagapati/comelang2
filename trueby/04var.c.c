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

struct sMethod* sMethod_initialize(struct sMethod* self, char* name, struct list$1tuple2$2charphsTypephph* params, struct sType* result_type, _Bool native_);

struct sClass* sClass_initialize(struct sClass* self, char* name);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_code_without_nest(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

void skip_spaces_and_lf(struct sInfo* info);

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

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

struct sNode* add_sub_expression_node(struct sInfo* info);

struct sNode* expression_v1(struct sInfo* info);

_Bool output_source(struct sInfo* info);

void init_typed_ruby(struct sInfo* info);

int main(int argc, char** argv);

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

static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
char* sStoreLocalVariable_kind();

_Bool sStoreLocalVariable_compile(struct sStoreLocalVariable* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
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

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self);
static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self);
static struct sNode* sNode_clone(struct sNode* self);
static void sStoreLocalVariable_finalize(struct sStoreLocalVariable* self);
static struct sStoreLocalVariable* sStoreLocalVariable_clone(struct sStoreLocalVariable* self);
static void sLoadLocalVariable_finalize(struct sLoadLocalVariable* self);
static struct sLoadLocalVariable* sLoadLocalVariable_clone(struct sLoadLocalVariable* self);
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










struct sStoreLocalVariable* sStoreLocalVariable_initialize(struct sStoreLocalVariable* self, char* name, struct sNode* right_value, _Bool alloc, struct sType* var_type, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct sNode* __dec_obj13;
struct sType* __dec_obj14;
void* right_value49;
char* __dec_obj15;
struct sStoreLocalVariable* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    # 16 "04var.c"
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 17 "04var.c"
    __dec_obj13=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
    # 18 "04var.c"
    self->alloc=alloc;
    # 19 "04var.c"
    __dec_obj14=self->var_type;
    self->var_type=(struct sType*)come_increment_ref_count(var_type);
    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 21 "04var.c"
    self->sline=info->sline;
    # 22 "04var.c"
    __dec_obj15=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 24 "04var.c"
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sStoreLocalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,var_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sStoreLocalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,var_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sType_finalize"
        # 0 "sType_finalize"
        if(_if_conditional7=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional7) {
            # 0 "sType_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sType_finalize"
        # 1 "sType_finalize"
        if(_if_conditional9=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional9) {
            # 1 "sType_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_11;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sTypeph*));
                # 123 "/usr/local/include/comelang2.h"
                it_11=self->head;
                # 129 "/usr/local/include/comelang2.h"
                while(_while_condtional1=it_11!=((void*)0),                _while_condtional1) {
                    # 125 "/usr/local/include/comelang2.h"
                    prev_it_12=it_11;
                    # 126 "/usr/local/include/comelang2.h"
                    it_11=it_11->next;
                    # 127 "/usr/local/include/comelang2.h"
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional8) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

char* sStoreLocalVariable_kind(){
void* __result_obj__;
void* right_value50;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    # 29 "04var.c"
    __result35__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sStoreLocalVariable")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

_Bool sStoreLocalVariable_compile(struct sStoreLocalVariable* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional14;
_Bool __result36__;
void* right_value51;
void* right_value64;
struct CVALUE* come_value_20;
struct sType* right_type_21;
_Bool _if_conditional28;
_Bool __result45__;
struct sType* var_type_22;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value65;
struct sVar* var__23;
char* __dec_obj23;
void* right_value66;
struct sType* __dec_obj24;
char* __dec_obj25;
struct sVar* var__71;
_Bool _if_conditional87;
void* right_value73;
struct CVALUE* come_value2_72;
void* right_value74;
void* right_value75;
void* right_value76;
char* __dec_obj26;
struct sType* __dec_obj27;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value64 = (void*)0;
memset(&come_value_20, 0, sizeof(struct CVALUE*));
memset(&right_type_21, 0, sizeof(struct sType*));
memset(&var_type_22, 0, sizeof(struct sType*));
right_value65 = (void*)0;
memset(&var__23, 0, sizeof(struct sVar*));
right_value66 = (void*)0;
memset(&var__71, 0, sizeof(struct sVar*));
right_value73 = (void*)0;
memset(&come_value2_72, 0, sizeof(struct CVALUE*));
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
    # 38 "04var.c"
    # 34 "04var.c"
    if(_if_conditional14=!self->right_value->compile(self->right_value->_protocol_obj,info),    _if_conditional14) {
        # 35 "04var.c"
        __result36__ = (_Bool)0;
        return __result36__;
    }
    # 38 "04var.c"
    come_value_20=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value64=CVALUE_clone(((struct CVALUE*)(right_value51=get_value_from_stack(-1,info)))))));
    come_call_finalizer2(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(CVALUE_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 39 "04var.c"
    dec_stack_ptr(1,info);
    # 41 "04var.c"
    right_type_21=come_value_20->type;
    # 48 "04var.c"
    # 43 "04var.c"
    if(_if_conditional28=right_type_21==((void*)0),    _if_conditional28) {
        # 44 "04var.c"
        err_msg(info,"require type");
        # 45 "04var.c"
        __result45__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,come_value_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result45__;
    }
    # 48 "04var.c"
    # 76 "04var.c"
    # 49 "04var.c"
    if(self->alloc) {
        # 57 "04var.c"
        # 50 "04var.c"
        if(_if_conditional30=self->var_type==((void*)0),        _if_conditional30) {
            # 51 "04var.c"
            var_type_22=right_type_21;
        }
        else {
            # 54 "04var.c"
            var_type_22=self->var_type;
        }
        # 57 "04var.c"
        var__23=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value65=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "04var.c", 57, "sVar"))));
        come_call_finalizer2(sVar_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 59 "04var.c"
        __dec_obj23=var__23->mName;
        var__23->mName=(char*)come_increment_ref_count(self->name);
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 60 "04var.c"
        __dec_obj24=var__23->mType;
        var__23->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(var_type_22))));
        come_call_finalizer2(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 63 "04var.c"
        __dec_obj25=var__23->mCValueName;
        var__23->mCValueName=(char*)come_increment_ref_count(self->name);
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 63 "04var.c"
        map$2charphsVarph_insert(info->lv_table,(char*)come_increment_ref_count(self->name),(struct sVar*)come_increment_ref_count(var__23));
        come_call_finalizer2(sVar_finalize,var__23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 66 "04var.c"
        var__71=map$2charphsVarphp_operator_load_element(info->lv_table,self->name);
        # 68 "04var.c"
        var_type_22=var__71->mType;
        # 74 "04var.c"
        # 70 "04var.c"
        if(_if_conditional87=var_type_22==((void*)0),        _if_conditional87) {
            # 71 "04var.c"
            err_msg(info,"require var type");
            # 72 "04var.c"
            exit(2);
        }
    }
    # 76 "04var.c"
    check_assign_type(var_type_22,right_type_21,come_value_20,info);
    # 78 "04var.c"
    come_value2_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value73=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "04var.c", 78, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 80 "04var.c"
    __dec_obj26=come_value2_72->c_value;
    come_value2_72->c_value=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("\%s=\%s",((char*)(right_value74=string_to_string(self->name))),((char*)(right_value75=string_to_string(come_value_20->c_value)))))));
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 81 "04var.c"
    __dec_obj27=come_value2_72->type;
    come_value2_72->type=(struct sType*)come_increment_ref_count(come_value_20->type);
    come_call_finalizer2(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 82 "04var.c"
    come_value2_72->var=((void*)0);
    # 84 "04var.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_72));
    # 86 "04var.c"
    add_come_last_code(info,"%s\n",come_value2_72->c_value);
    # 88 "04var.c"
    __result75__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer2(CVALUE_finalize,come_value_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional15;
struct CVALUE* __result37__;
void* right_value52;
struct CVALUE* result_13;
_Bool _if_conditional18;
void* right_value53;
char* __dec_obj16;
_Bool _if_conditional19;
void* right_value63;
struct sType* __dec_obj22;
_Bool _if_conditional27;
struct CVALUE* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_13, 0, sizeof(struct CVALUE*));
right_value53 = (void*)0;
right_value63 = (void*)0;
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional15=self==(void*)0,        _if_conditional15) {
            # 2 "CVALUE_clone"
            __result37__ = __result_obj__ = (void*)0;
            return __result37__;
        }
        # 3 "CVALUE_clone"
        result_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional18=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional18) {
            # 4 "CVALUE_clone"
            __dec_obj16=result_13->c_value;
            result_13->c_value=(char*)come_increment_ref_count(((char*)(right_value53=string_clone(self->c_value))));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional19=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional19) {
            # 5 "CVALUE_clone"
            __dec_obj22=result_13->type;
            result_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional27=self!=((void*)0),        _if_conditional27) {
            # 6 "CVALUE_clone"
            result_13->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result44__ = __result_obj__ = result_13;
        come_call_finalizer2(CVALUE_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result44__;
        come_call_finalizer2(CVALUE_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional16=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional16) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional17) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result38__;
void* right_value54;
struct sType* result_14;
_Bool _if_conditional21;
_Bool _if_conditional22;
void* right_value61;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional26;
void* right_value62;
struct list$1sTypeph* __dec_obj21;
struct sType* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&result_14, 0, sizeof(struct sType*));
right_value61 = (void*)0;
right_value62 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional20=self==(void*)0,                _if_conditional20) {
                    # 2 "sType_clone"
                    __result38__ = __result_obj__ = (void*)0;
                    return __result38__;
                }
                # 3 "sType_clone"
                result_14=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional21=self!=((void*)0),                _if_conditional21) {
                    # 4 "sType_clone"
                    result_14->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional22=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional22) {
                    # 5 "sType_clone"
                    __dec_obj20=result_14->mMultipleTypes;
                    result_14->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value61=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional26) {
                    # 6 "sType_clone"
                    __dec_obj21=result_14->mGenericsTypes;
                    result_14->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value62=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                __result43__ = __result_obj__ = result_14;
                come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result43__;
                come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
struct list$1sTypeph* __result39__;
void* right_value55;
void* right_value56;
struct list$1sTypeph* result_15;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional2;
void* right_value60;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
right_value56 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sTypeph*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
right_value60 = (void*)0;
                        # 142 "/usr/local/include/comelang2.h"
                        # 139 "/usr/local/include/comelang2.h"
                        if(_if_conditional23=self==((void*)0),                        _if_conditional23) {
                            # 140 "/usr/local/include/comelang2.h"
                            __result39__ = __result_obj__ = ((void*)0);
                            return __result39__;
                        }
                        # 142 "/usr/local/include/comelang2.h"
                        result_15=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "/usr/local/include/comelang2.h"
                        it_16=self->head;
                        # 151 "/usr/local/include/comelang2.h"
                        while(_while_condtional2=it_16!=((void*)0),                        _while_condtional2) {
                            # 146 "/usr/local/include/comelang2.h"
                            list$1sTypeph_add(result_15,(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(it_16->item)))));
                            come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "/usr/local/include/comelang2.h"
                            it_16=it_16->next;
                        }
                        # 151 "/usr/local/include/comelang2.h"
                        __result42__ = __result_obj__ = result_15;
                        come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional24;
void* right_value57;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj17;
_Bool _if_conditional25;
void* right_value58;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj18;
void* right_value59;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj19;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
right_value58 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
right_value59 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "/usr/local/include/comelang2.h"
                                # 155 "/usr/local/include/comelang2.h"
                                if(_if_conditional24=self->len==0,                                _if_conditional24) {
                                    # 156 "/usr/local/include/comelang2.h"
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "/usr/local/include/comelang2.h"
                                    litem_17->prev=((void*)0);
                                    # 159 "/usr/local/include/comelang2.h"
                                    litem_17->next=((void*)0);
                                    # 160 "/usr/local/include/comelang2.h"
                                    __dec_obj17=litem_17->item;
                                    litem_17->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "/usr/local/include/comelang2.h"
                                    self->tail=litem_17;
                                    # 163 "/usr/local/include/comelang2.h"
                                    self->head=litem_17;
                                }
                                else {
                                    # 186 "/usr/local/include/comelang2.h"
                                    # 165 "/usr/local/include/comelang2.h"
                                    if(_if_conditional25=self->len==1,                                    _if_conditional25) {
                                        # 166 "/usr/local/include/comelang2.h"
                                        litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "/usr/local/include/comelang2.h"
                                        litem_18->prev=self->head;
                                        # 169 "/usr/local/include/comelang2.h"
                                        litem_18->next=((void*)0);
                                        # 170 "/usr/local/include/comelang2.h"
                                        __dec_obj18=litem_18->item;
                                        litem_18->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "/usr/local/include/comelang2.h"
                                        self->tail=litem_18;
                                        # 173 "/usr/local/include/comelang2.h"
                                        self->head->next=litem_18;
                                    }
                                    else {
                                        # 176 "/usr/local/include/comelang2.h"
                                        litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value59=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "/usr/local/include/comelang2.h"
                                        litem_19->prev=self->tail;
                                        # 179 "/usr/local/include/comelang2.h"
                                        litem_19->next=((void*)0);
                                        # 180 "/usr/local/include/comelang2.h"
                                        __dec_obj19=litem_19->item;
                                        litem_19->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "/usr/local/include/comelang2.h"
                                        self->tail->next=litem_19;
                                        # 183 "/usr/local/include/comelang2.h"
                                        self->tail=litem_19;
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

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sVar_finalize"
            # 0 "sVar_finalize"
            if(_if_conditional31=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional31) {
                # 0 "sVar_finalize"
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sVar_finalize"
            # 1 "sVar_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional32) {
                # 1 "sVar_finalize"
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 3 "sVar_finalize"
            # 2 "sVar_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional33) {
                # 2 "sVar_finalize"
                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional34;
_Bool _if_conditional46;
_Bool _if_conditional47;
unsigned int hash_41;
unsigned int it_42;
_Bool _while_condtional5;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool same_key_exist_59;
char* it2_62;
_Bool _if_conditional79;
_Bool _if_conditional80;
struct map$2charphsVarph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
memset(&same_key_exist_59, 0, sizeof(_Bool));
memset(&it2_62, 0, sizeof(char*));
            # 1393 "/usr/local/include/comelang2.h"
            # 1390 "/usr/local/include/comelang2.h"
            if(_if_conditional34=self->len*10>=self->size,            _if_conditional34) {
                # 1391 "/usr/local/include/comelang2.h"
                map$2charphsVarph_rehash(self);
            }
            # 1400 "/usr/local/include/comelang2.h"
            # 1393 "/usr/local/include/comelang2.h"
            if(_if_conditional46=1,            _if_conditional46) {
                # 1399 "/usr/local/include/comelang2.h"
                # 1394 "/usr/local/include/comelang2.h"
                if(_if_conditional47=key==((void*)0),                _if_conditional47) {
                    # 1395 "/usr/local/include/comelang2.h"
                    stackframe();
                    # 1396 "/usr/local/include/comelang2.h"
                    puts("key is null");
                    # 1397 "/usr/local/include/comelang2.h"
                    exit(2);
                }
            }
            # 1400 "/usr/local/include/comelang2.h"
            hash_41=string_get_hash_key(key)%self->size;
            # 1401 "/usr/local/include/comelang2.h"
            it_42=hash_41;
            # 1459 "/usr/local/include/comelang2.h"
            while(_while_condtional5=(_Bool)1,            _while_condtional5) {
                # 1457 "/usr/local/include/comelang2.h"
                # 1404 "/usr/local/include/comelang2.h"
                if(_if_conditional48=self->item_existance[it_42],                _if_conditional48) {
                    # 1427 "/usr/local/include/comelang2.h"
                    # 1406 "/usr/local/include/comelang2.h"
                    if(_if_conditional49=string_equals(self->keys[it_42],key),                    _if_conditional49) {
                        # 1417 "/usr/local/include/comelang2.h"
                        # 1408 "/usr/local/include/comelang2.h"
                        if(_if_conditional50=1,                        _if_conditional50) {
                            # 1409 "/usr/local/include/comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_42]);
                            # 1410 "/usr/local/include/comelang2.h"
                            self->keys[it_42] = come_decrement_ref_count2(self->keys[it_42], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1411 "/usr/local/include/comelang2.h"
                            self->keys[it_42]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1414 "/usr/local/include/comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_42]);
                            # 1415 "/usr/local/include/comelang2.h"
                            self->keys[it_42]=key;
                        }
                        # 1424 "/usr/local/include/comelang2.h"
                        # 1417 "/usr/local/include/comelang2.h"
                        if(_if_conditional70=1,                        _if_conditional70) {
                            # 1418 "/usr/local/include/comelang2.h"
                            come_call_finalizer2(sVar_finalize,self->items[it_42], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1419 "/usr/local/include/comelang2.h"
                            self->items[it_42]=(struct sVar*)come_increment_ref_count(item);
                        }
                        else {
                            # 1422 "/usr/local/include/comelang2.h"
                            self->items[it_42]=item;
                        }
                        # 1424 "/usr/local/include/comelang2.h"
                        break;
                    }
                    # 1427 "/usr/local/include/comelang2.h"
                    it_42++;
                    # 1437 "/usr/local/include/comelang2.h"
                    # 1429 "/usr/local/include/comelang2.h"
                    if(_if_conditional71=it_42>=self->size,                    _if_conditional71) {
                        # 1430 "/usr/local/include/comelang2.h"
                        it_42=0;
                    }
                    else {
                        # 1437 "/usr/local/include/comelang2.h"
                        # 1432 "/usr/local/include/comelang2.h"
                        if(_if_conditional72=it_42==hash_41,                        _if_conditional72) {
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
                    self->item_existance[it_42]=(_Bool)1;
                    # 1446 "/usr/local/include/comelang2.h"
                    # 1440 "/usr/local/include/comelang2.h"
                    if(_if_conditional73=1,                    _if_conditional73) {
                        # 1441 "/usr/local/include/comelang2.h"
                        self->keys[it_42]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1444 "/usr/local/include/comelang2.h"
                        self->keys[it_42]=key;
                    }
                    # 1453 "/usr/local/include/comelang2.h"
                    # 1446 "/usr/local/include/comelang2.h"
                    if(_if_conditional74=1,                    _if_conditional74) {
                        # 1447 "/usr/local/include/comelang2.h"
                        self->items[it_42]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        # 1450 "/usr/local/include/comelang2.h"
                        self->items[it_42]=item;
                    }
                    # 1453 "/usr/local/include/comelang2.h"
                    self->len++;
                    # 1455 "/usr/local/include/comelang2.h"
                    break;
                }
            }
            # 1459 "/usr/local/include/comelang2.h"
            same_key_exist_59=(_Bool)0;
            # 1468 "/usr/local/include/comelang2.h"
            for(            it2_62=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_62=list$1charp_next(self->key_list)            ){
                # 1466 "/usr/local/include/comelang2.h"
                # 1462 "/usr/local/include/comelang2.h"
                if(_if_conditional79=string_equals(it2_62,key),                _if_conditional79) {
                    # 1463 "/usr/local/include/comelang2.h"
                    puts("SAME KEY");
                    # 1464 "/usr/local/include/comelang2.h"
                    same_key_exist_59=(_Bool)1;
                }
            }
            # 1472 "/usr/local/include/comelang2.h"
            # 1468 "/usr/local/include/comelang2.h"
            if(_if_conditional80=!same_key_exist_59,            _if_conditional80) {
                # 1469 "/usr/local/include/comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1472 "/usr/local/include/comelang2.h"
            __result69__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result69__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_24;
void* right_value67;
char** keys_25;
void* right_value68;
struct sVar** items_26;
void* right_value69;
_Bool* item_existance_27;
int len_28;
char* it_31;
struct sVar* default_value_34;
struct sVar* it2_37;
unsigned int hash_38;
int n_39;
_Bool _while_condtional4;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sVar* default_value_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_24, 0, sizeof(int));
right_value67 = (void*)0;
memset(&keys_25, 0, sizeof(char**));
right_value68 = (void*)0;
memset(&items_26, 0, sizeof(struct sVar**));
right_value69 = (void*)0;
memset(&item_existance_27, 0, sizeof(_Bool*));
memset(&len_28, 0, sizeof(int));
memset(&it_31, 0, sizeof(char*));
memset(&default_value_34, 0, sizeof(struct sVar*));
memset(&it2_37, 0, sizeof(struct sVar*));
memset(&hash_38, 0, sizeof(unsigned int));
memset(&n_39, 0, sizeof(int));
memset(&default_value_40, 0, sizeof(struct sVar*));
                    # 1337 "/usr/local/include/comelang2.h"
                    size_24=self->size*10;
                    # 1338 "/usr/local/include/comelang2.h"
                    keys_25=(char**)come_increment_ref_count(((char**)(right_value67=(char**)come_calloc(1, sizeof(char*)*(1*(size_24)), "/usr/local/include/comelang2.h", 1338, "char*%"))));
                    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "/usr/local/include/comelang2.h"
                    items_26=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value68=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_24)), "/usr/local/include/comelang2.h", 1339, "sVar*%"))));
                    come_call_finalizer2(sVar_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "/usr/local/include/comelang2.h"
                    item_existance_27=(_Bool*)come_increment_ref_count(((_Bool*)(right_value69=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_24)), "/usr/local/include/comelang2.h", 1340, "bool"))));
                    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "/usr/local/include/comelang2.h"
                    len_28=0;
                    # 1377 "/usr/local/include/comelang2.h"
                    for(                    it_31=map$2charphsVarph_begin(self);                    !map$2charphsVarph_end(self);                    it_31=map$2charphsVarph_next(self)                    ){
                        # 1345 "/usr/local/include/comelang2.h"
                        # 1346 "/usr/local/include/comelang2.h"
                        memset(&default_value_34,0,sizeof(struct sVar*));
                        # 1347 "/usr/local/include/comelang2.h"
                        it2_37=map$2charphsVarph_at(self,it_31,default_value_34);
                        # 1348 "/usr/local/include/comelang2.h"
                        hash_38=string_get_hash_key(it_31)%size_24;
                        # 1349 "/usr/local/include/comelang2.h"
                        n_39=hash_38;
                        # 1375 "/usr/local/include/comelang2.h"
                        while(_while_condtional4=(_Bool)1,                        _while_condtional4) {
                            # 1374 "/usr/local/include/comelang2.h"
                            # 1352 "/usr/local/include/comelang2.h"
                            if(_if_conditional43=item_existance_27[n_39],                            _if_conditional43) {
                                # 1354 "/usr/local/include/comelang2.h"
                                n_39++;
                                # 1364 "/usr/local/include/comelang2.h"
                                # 1356 "/usr/local/include/comelang2.h"
                                if(_if_conditional44=n_39>=size_24,                                _if_conditional44) {
                                    # 1357 "/usr/local/include/comelang2.h"
                                    n_39=0;
                                }
                                else {
                                    # 1364 "/usr/local/include/comelang2.h"
                                    # 1359 "/usr/local/include/comelang2.h"
                                    if(_if_conditional45=n_39==hash_38,                                    _if_conditional45) {
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
                                item_existance_27[n_39]=(_Bool)1;
                                # 1367 "/usr/local/include/comelang2.h"
                                keys_25[n_39]=it_31;
                                # 1368 "/usr/local/include/comelang2.h"
                                # 1369 "/usr/local/include/comelang2.h"
                                items_26[n_39]=map$2charphsVarph_at(self,it_31,default_value_40);
                                # 1371 "/usr/local/include/comelang2.h"
                                len_28++;
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
                    self->keys=keys_25;
                    # 1382 "/usr/local/include/comelang2.h"
                    self->items=items_26;
                    # 1383 "/usr/local/include/comelang2.h"
                    self->item_existance=item_existance_27;
                    # 1385 "/usr/local/include/comelang2.h"
                    self->size=size_24;
                    # 1386 "/usr/local/include/comelang2.h"
                    self->len=len_28;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional35;
char* result_29;
char* __result46__;
_Bool _if_conditional36;
char* __result47__;
char* result_30;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_29, 0, sizeof(char*));
memset(&result_30, 0, sizeof(char*));
                        # 1304 "/usr/local/include/comelang2.h"
                        # 1299 "/usr/local/include/comelang2.h"
                        if(_if_conditional35=self==((void*)0),                        _if_conditional35) {
                            # 1300 "/usr/local/include/comelang2.h"
                            # 1301 "/usr/local/include/comelang2.h"
                            memset(&result_29,0,sizeof(char*));
                            # 1302 "/usr/local/include/comelang2.h"
                            __result46__ = __result_obj__ = result_29;
                            return __result46__;
                        }
                        # 1304 "/usr/local/include/comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "/usr/local/include/comelang2.h"
                        # 1306 "/usr/local/include/comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "/usr/local/include/comelang2.h"
                            __result47__ = __result_obj__ = self->key_list->it->item;
                            return __result47__;
                        }
                        # 1310 "/usr/local/include/comelang2.h"
                        # 1311 "/usr/local/include/comelang2.h"
                        memset(&result_30,0,sizeof(char*));
                        # 1312 "/usr/local/include/comelang2.h"
                        __result48__ = __result_obj__ = result_30;
                        return __result48__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "/usr/local/include/comelang2.h"
                        __result49__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result49__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional37;
char* result_32;
char* __result50__;
_Bool _if_conditional38;
char* __result51__;
char* result_33;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_32, 0, sizeof(char*));
memset(&result_33, 0, sizeof(char*));
                        # 1321 "/usr/local/include/comelang2.h"
                        # 1316 "/usr/local/include/comelang2.h"
                        if(_if_conditional37=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional37) {
                            # 1317 "/usr/local/include/comelang2.h"
                            # 1318 "/usr/local/include/comelang2.h"
                            memset(&result_32,0,sizeof(char*));
                            # 1319 "/usr/local/include/comelang2.h"
                            __result50__ = __result_obj__ = result_32;
                            return __result50__;
                        }
                        # 1321 "/usr/local/include/comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "/usr/local/include/comelang2.h"
                        # 1323 "/usr/local/include/comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "/usr/local/include/comelang2.h"
                            __result51__ = __result_obj__ = self->key_list->it->item;
                            return __result51__;
                        }
                        # 1327 "/usr/local/include/comelang2.h"
                        # 1328 "/usr/local/include/comelang2.h"
                        memset(&result_33,0,sizeof(char*));
                        # 1329 "/usr/local/include/comelang2.h"
                        __result52__ = __result_obj__ = result_33;
                        return __result52__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_35;
unsigned int it_36;
_Bool _while_condtional3;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct sVar* __result53__;
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sVar* __result54__;
struct sVar* __result55__;
struct sVar* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_35, 0, sizeof(unsigned int));
memset(&it_36, 0, sizeof(unsigned int));
                            # 1226 "/usr/local/include/comelang2.h"
                            hash_35=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "/usr/local/include/comelang2.h"
                            it_36=hash_35;
                            # 1251 "/usr/local/include/comelang2.h"
                            while(_while_condtional3=(_Bool)1,                            _while_condtional3) {
                                # 1249 "/usr/local/include/comelang2.h"
                                # 1230 "/usr/local/include/comelang2.h"
                                if(_if_conditional39=self->item_existance[it_36],                                _if_conditional39) {
                                    # 1237 "/usr/local/include/comelang2.h"
                                    # 1232 "/usr/local/include/comelang2.h"
                                    if(_if_conditional40=string_equals(self->keys[it_36],key),                                    _if_conditional40) {
                                        # 1234 "/usr/local/include/comelang2.h"
                                        __result53__ = __result_obj__ = self->items[it_36];
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result53__;
                                    }
                                    # 1237 "/usr/local/include/comelang2.h"
                                    it_36++;
                                    # 1245 "/usr/local/include/comelang2.h"
                                    # 1239 "/usr/local/include/comelang2.h"
                                    if(_if_conditional41=it_36>=self->size,                                    _if_conditional41) {
                                        # 1240 "/usr/local/include/comelang2.h"
                                        it_36=0;
                                    }
                                    else {
                                        # 1245 "/usr/local/include/comelang2.h"
                                        # 1242 "/usr/local/include/comelang2.h"
                                        if(_if_conditional42=it_36==hash_35,                                        _if_conditional42) {
                                            # 1243 "/usr/local/include/comelang2.h"
                                            __result54__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result54__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "/usr/local/include/comelang2.h"
                                    __result55__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result55__;
                                }
                            }
                            # 1251 "/usr/local/include/comelang2.h"
                            __result56__ = __result_obj__ = default_value;
                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result56__;
                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_43;
struct list_item$1charp* it_44;
_Bool _while_condtional6;
_Bool _if_conditional51;
struct list$1charp* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_43, 0, sizeof(int));
memset(&it_44, 0, sizeof(struct list_item$1charp*));
                                # 448 "/usr/local/include/comelang2.h"
                                it2_43=0;
                                # 449 "/usr/local/include/comelang2.h"
                                it_44=self->head;
                                # 460 "/usr/local/include/comelang2.h"
                                while(_while_condtional6=it_44!=((void*)0),                                _while_condtional6) {
                                    # 455 "/usr/local/include/comelang2.h"
                                    # 451 "/usr/local/include/comelang2.h"
                                    if(_if_conditional51=string_equals(it_44->item,item),                                    _if_conditional51) {
                                        # 452 "/usr/local/include/comelang2.h"
                                        list$1charp_delete(self,it2_43,it2_43+1);
                                        # 453 "/usr/local/include/comelang2.h"
                                        break;
                                    }
                                    # 455 "/usr/local/include/comelang2.h"
                                    it2_43++;
                                    # 457 "/usr/local/include/comelang2.h"
                                    it_44=it_44->next;
                                }
                                # 460 "/usr/local/include/comelang2.h"
                                __result60__ = __result_obj__ = self;
                                return __result60__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
int tmp_45;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct list$1charp* __result57__;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct list_item$1charp* it_48;
int i_49;
_Bool _while_condtional8;
_Bool _if_conditional60;
struct list_item$1charp* prev_it_50;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct list_item$1charp* it_51;
int i_52;
_Bool _while_condtional9;
_Bool _if_conditional63;
_Bool _if_conditional64;
struct list_item$1charp* prev_it_53;
struct list_item$1charp* it_54;
struct list_item$1charp* head_prev_it_55;
struct list_item$1charp* tail_it_56;
int i_57;
_Bool _while_condtional10;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct list_item$1charp* prev_it_58;
_Bool _if_conditional68;
_Bool _if_conditional69;
struct list$1charp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_45, 0, sizeof(int));
memset(&it_48, 0, sizeof(struct list_item$1charp*));
memset(&i_49, 0, sizeof(int));
memset(&prev_it_50, 0, sizeof(struct list_item$1charp*));
memset(&it_51, 0, sizeof(struct list_item$1charp*));
memset(&i_52, 0, sizeof(int));
memset(&prev_it_53, 0, sizeof(struct list_item$1charp*));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_55, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
                                            # 467 "/usr/local/include/comelang2.h"
                                            # 464 "/usr/local/include/comelang2.h"
                                            if(_if_conditional52=head<0,                                            _if_conditional52) {
                                                # 465 "/usr/local/include/comelang2.h"
                                                head+=self->len;
                                            }
                                            # 471 "/usr/local/include/comelang2.h"
                                            # 467 "/usr/local/include/comelang2.h"
                                            if(_if_conditional53=tail<0,                                            _if_conditional53) {
                                                # 468 "/usr/local/include/comelang2.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "/usr/local/include/comelang2.h"
                                            # 471 "/usr/local/include/comelang2.h"
                                            if(_if_conditional54=head>tail,                                            _if_conditional54) {
                                                # 472 "/usr/local/include/comelang2.h"
                                                tmp_45=tail;
                                                # 473 "/usr/local/include/comelang2.h"
                                                tail=head;
                                                # 474 "/usr/local/include/comelang2.h"
                                                head=tmp_45;
                                            }
                                            # 481 "/usr/local/include/comelang2.h"
                                            # 477 "/usr/local/include/comelang2.h"
                                            if(_if_conditional55=head<0,                                            _if_conditional55) {
                                                # 478 "/usr/local/include/comelang2.h"
                                                head=0;
                                            }
                                            # 485 "/usr/local/include/comelang2.h"
                                            # 481 "/usr/local/include/comelang2.h"
                                            if(_if_conditional56=tail>self->len,                                            _if_conditional56) {
                                                # 482 "/usr/local/include/comelang2.h"
                                                tail=self->len;
                                            }
                                            # 489 "/usr/local/include/comelang2.h"
                                            # 485 "/usr/local/include/comelang2.h"
                                            if(_if_conditional57=head==tail,                                            _if_conditional57) {
                                                # 486 "/usr/local/include/comelang2.h"
                                                __result57__ = __result_obj__ = self;
                                                return __result57__;
                                            }
                                            # 584 "/usr/local/include/comelang2.h"
                                            # 489 "/usr/local/include/comelang2.h"
                                            if(_if_conditional58=head==0&&tail==self->len,                                            _if_conditional58) {
                                                # 491 "/usr/local/include/comelang2.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "/usr/local/include/comelang2.h"
                                                # 493 "/usr/local/include/comelang2.h"
                                                if(_if_conditional59=head==0,                                                _if_conditional59) {
                                                    # 494 "/usr/local/include/comelang2.h"
                                                    it_48=self->head;
                                                    # 495 "/usr/local/include/comelang2.h"
                                                    i_49=0;
                                                    # 517 "/usr/local/include/comelang2.h"
                                                    while(_while_condtional8=it_48!=((void*)0),                                                    _while_condtional8) {
                                                        # 516 "/usr/local/include/comelang2.h"
                                                        # 497 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional60=i_49<tail,                                                        _if_conditional60) {
                                                            # 498 "/usr/local/include/comelang2.h"
                                                            prev_it_50=it_48;
                                                            # 500 "/usr/local/include/comelang2.h"
                                                            it_48=it_48->next;
                                                            # 501 "/usr/local/include/comelang2.h"
                                                            i_49++;
                                                            # 503 "/usr/local/include/comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "/usr/local/include/comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "/usr/local/include/comelang2.h"
                                                            # 507 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional61=i_49==tail,                                                            _if_conditional61) {
                                                                # 508 "/usr/local/include/comelang2.h"
                                                                self->head=it_48;
                                                                # 509 "/usr/local/include/comelang2.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "/usr/local/include/comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "/usr/local/include/comelang2.h"
                                                                it_48=it_48->next;
                                                                # 514 "/usr/local/include/comelang2.h"
                                                                i_49++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "/usr/local/include/comelang2.h"
                                                    # 518 "/usr/local/include/comelang2.h"
                                                    if(_if_conditional62=tail==self->len,                                                    _if_conditional62) {
                                                        # 519 "/usr/local/include/comelang2.h"
                                                        it_51=self->head;
                                                        # 520 "/usr/local/include/comelang2.h"
                                                        i_52=0;
                                                        # 542 "/usr/local/include/comelang2.h"
                                                        while(_while_condtional9=it_51!=((void*)0),                                                        _while_condtional9) {
                                                            # 527 "/usr/local/include/comelang2.h"
                                                            # 522 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional63=i_52==head,                                                            _if_conditional63) {
                                                                # 523 "/usr/local/include/comelang2.h"
                                                                self->tail=it_51->prev;
                                                                # 524 "/usr/local/include/comelang2.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "/usr/local/include/comelang2.h"
                                                            # 527 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional64=i_52>=head,                                                            _if_conditional64) {
                                                                # 528 "/usr/local/include/comelang2.h"
                                                                prev_it_53=it_51;
                                                                # 530 "/usr/local/include/comelang2.h"
                                                                it_51=it_51->next;
                                                                # 531 "/usr/local/include/comelang2.h"
                                                                i_52++;
                                                                # 533 "/usr/local/include/comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "/usr/local/include/comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "/usr/local/include/comelang2.h"
                                                                it_51=it_51->next;
                                                                # 539 "/usr/local/include/comelang2.h"
                                                                i_52++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "/usr/local/include/comelang2.h"
                                                        it_54=self->head;
                                                        # 546 "/usr/local/include/comelang2.h"
                                                        head_prev_it_55=((void*)0);
                                                        # 547 "/usr/local/include/comelang2.h"
                                                        tail_it_56=((void*)0);
                                                        # 550 "/usr/local/include/comelang2.h"
                                                        i_57=0;
                                                        # 576 "/usr/local/include/comelang2.h"
                                                        while(_while_condtional10=it_54!=((void*)0),                                                        _while_condtional10) {
                                                            # 555 "/usr/local/include/comelang2.h"
                                                            # 552 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional65=i_57==head,                                                            _if_conditional65) {
                                                                # 553 "/usr/local/include/comelang2.h"
                                                                head_prev_it_55=it_54->prev;
                                                            }
                                                            # 559 "/usr/local/include/comelang2.h"
                                                            # 555 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional66=i_57==tail,                                                            _if_conditional66) {
                                                                # 556 "/usr/local/include/comelang2.h"
                                                                tail_it_56=it_54;
                                                            }
                                                            # 574 "/usr/local/include/comelang2.h"
                                                            # 559 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional67=i_57>=head&&i_57<tail,                                                            _if_conditional67) {
                                                                # 561 "/usr/local/include/comelang2.h"
                                                                prev_it_58=it_54;
                                                                # 563 "/usr/local/include/comelang2.h"
                                                                it_54=it_54->next;
                                                                # 564 "/usr/local/include/comelang2.h"
                                                                i_57++;
                                                                # 566 "/usr/local/include/comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "/usr/local/include/comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "/usr/local/include/comelang2.h"
                                                                it_54=it_54->next;
                                                                # 572 "/usr/local/include/comelang2.h"
                                                                i_57++;
                                                            }
                                                        }
                                                        # 579 "/usr/local/include/comelang2.h"
                                                        # 576 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional68=head_prev_it_55!=((void*)0),                                                        _if_conditional68) {
                                                            # 577 "/usr/local/include/comelang2.h"
                                                            head_prev_it_55->next=tail_it_56;
                                                        }
                                                        # 582 "/usr/local/include/comelang2.h"
                                                        # 579 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional69=tail_it_56!=((void*)0),                                                        _if_conditional69) {
                                                            # 580 "/usr/local/include/comelang2.h"
                                                            tail_it_56->prev=head_prev_it_55;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "/usr/local/include/comelang2.h"
                                            __result59__ = __result_obj__ = self;
                                            return __result59__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_46;
_Bool _while_condtional7;
struct list_item$1charp* prev_it_47;
struct list$1charp* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_46, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_47, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "/usr/local/include/comelang2.h"
                                                    it_46=self->head;
                                                    # 440 "/usr/local/include/comelang2.h"
                                                    while(_while_condtional7=it_46!=((void*)0),                                                    _while_condtional7) {
                                                        # 435 "/usr/local/include/comelang2.h"
                                                        prev_it_47=it_46;
                                                        # 436 "/usr/local/include/comelang2.h"
                                                        it_46=it_46->next;
                                                        # 437 "/usr/local/include/comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "/usr/local/include/comelang2.h"
                                                    self->head=((void*)0);
                                                    # 441 "/usr/local/include/comelang2.h"
                                                    self->tail=((void*)0);
                                                    # 443 "/usr/local/include/comelang2.h"
                                                    self->len=0;
                                                    # 445 "/usr/local/include/comelang2.h"
                                                    __result58__ = __result_obj__ = self;
                                                    return __result58__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional75;
char* result_60;
char* __result61__;
_Bool _if_conditional76;
char* __result62__;
char* result_61;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_60, 0, sizeof(char*));
memset(&result_61, 0, sizeof(char*));
                # 290 "/usr/local/include/comelang2.h"
                # 285 "/usr/local/include/comelang2.h"
                if(_if_conditional75=self==((void*)0),                _if_conditional75) {
                    # 286 "/usr/local/include/comelang2.h"
                    # 287 "/usr/local/include/comelang2.h"
                    memset(&result_60,0,sizeof(char*));
                    # 288 "/usr/local/include/comelang2.h"
                    __result61__ = __result_obj__ = result_60;
                    return __result61__;
                }
                # 290 "/usr/local/include/comelang2.h"
                self->it=self->head;
                # 296 "/usr/local/include/comelang2.h"
                # 292 "/usr/local/include/comelang2.h"
                if(self->it) {
                    # 293 "/usr/local/include/comelang2.h"
                    __result62__ = __result_obj__ = self->it->item;
                    return __result62__;
                }
                # 296 "/usr/local/include/comelang2.h"
                # 297 "/usr/local/include/comelang2.h"
                memset(&result_61,0,sizeof(char*));
                # 298 "/usr/local/include/comelang2.h"
                __result63__ = __result_obj__ = result_61;
                return __result63__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "/usr/local/include/comelang2.h"
                __result64__ = self==((void*)0)||self->it==((void*)0);
                return __result64__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional77;
char* result_63;
char* __result65__;
_Bool _if_conditional78;
char* __result66__;
char* result_64;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_63, 0, sizeof(char*));
memset(&result_64, 0, sizeof(char*));
                # 308 "/usr/local/include/comelang2.h"
                # 302 "/usr/local/include/comelang2.h"
                if(_if_conditional77=self==((void*)0)||self->it==((void*)0),                _if_conditional77) {
                    # 303 "/usr/local/include/comelang2.h"
                    # 304 "/usr/local/include/comelang2.h"
                    memset(&result_63,0,sizeof(char*));
                    # 305 "/usr/local/include/comelang2.h"
                    __result65__ = __result_obj__ = result_63;
                    return __result65__;
                }
                # 308 "/usr/local/include/comelang2.h"
                self->it=self->it->next;
                # 314 "/usr/local/include/comelang2.h"
                # 310 "/usr/local/include/comelang2.h"
                if(self->it) {
                    # 311 "/usr/local/include/comelang2.h"
                    __result66__ = __result_obj__ = self->it->item;
                    return __result66__;
                }
                # 314 "/usr/local/include/comelang2.h"
                # 315 "/usr/local/include/comelang2.h"
                memset(&result_64,0,sizeof(char*));
                # 316 "/usr/local/include/comelang2.h"
                __result67__ = __result_obj__ = result_64;
                return __result67__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional81;
void* right_value70;
struct list_item$1charp* litem_65;
_Bool _if_conditional82;
void* right_value71;
struct list_item$1charp* litem_66;
void* right_value72;
struct list_item$1charp* litem_67;
struct list$1charp* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1charp*));
right_value71 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1charp*));
right_value72 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1charp*));
                    # 256 "/usr/local/include/comelang2.h"
                    # 225 "/usr/local/include/comelang2.h"
                    if(_if_conditional81=self->len==0,                    _if_conditional81) {
                        # 226 "/usr/local/include/comelang2.h"
                        litem_65=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value70=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "/usr/local/include/comelang2.h"
                        litem_65->prev=((void*)0);
                        # 229 "/usr/local/include/comelang2.h"
                        litem_65->next=((void*)0);
                        # 230 "/usr/local/include/comelang2.h"
                        litem_65->item=item;
                        # 232 "/usr/local/include/comelang2.h"
                        self->tail=litem_65;
                        # 233 "/usr/local/include/comelang2.h"
                        self->head=litem_65;
                    }
                    else {
                        # 256 "/usr/local/include/comelang2.h"
                        # 235 "/usr/local/include/comelang2.h"
                        if(_if_conditional82=self->len==1,                        _if_conditional82) {
                            # 236 "/usr/local/include/comelang2.h"
                            litem_66=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value71=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "/usr/local/include/comelang2.h"
                            litem_66->prev=self->head;
                            # 239 "/usr/local/include/comelang2.h"
                            litem_66->next=((void*)0);
                            # 240 "/usr/local/include/comelang2.h"
                            litem_66->item=item;
                            # 242 "/usr/local/include/comelang2.h"
                            self->tail=litem_66;
                            # 243 "/usr/local/include/comelang2.h"
                            self->head->next=litem_66;
                        }
                        else {
                            # 246 "/usr/local/include/comelang2.h"
                            litem_67=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value72=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "/usr/local/include/comelang2.h"
                            litem_67->prev=self->tail;
                            # 249 "/usr/local/include/comelang2.h"
                            litem_67->next=((void*)0);
                            # 250 "/usr/local/include/comelang2.h"
                            litem_67->item=item;
                            # 252 "/usr/local/include/comelang2.h"
                            self->tail->next=litem_67;
                            # 253 "/usr/local/include/comelang2.h"
                            self->tail=litem_67;
                        }
                    }
                    # 256 "/usr/local/include/comelang2.h"
                    self->len++;
                    # 258 "/usr/local/include/comelang2.h"
                    __result68__ = __result_obj__ = self;
                    return __result68__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_68;
unsigned int hash_69;
unsigned int it_70;
_Bool _while_condtional11;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct sVar* __result70__;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct sVar* __result71__;
struct sVar* __result72__;
struct sVar* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_68, 0, sizeof(struct sVar*));
memset(&hash_69, 0, sizeof(unsigned int));
memset(&it_70, 0, sizeof(unsigned int));
            # 1552 "/usr/local/include/comelang2.h"
            # 1553 "/usr/local/include/comelang2.h"
            memset(&default_value_68,0,sizeof(struct sVar*));
            # 1555 "/usr/local/include/comelang2.h"
            hash_69=string_get_hash_key(((char*)key))%self->size;
            # 1556 "/usr/local/include/comelang2.h"
            it_70=hash_69;
            # 1580 "/usr/local/include/comelang2.h"
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                # 1578 "/usr/local/include/comelang2.h"
                # 1559 "/usr/local/include/comelang2.h"
                if(_if_conditional83=self->item_existance[it_70],                _if_conditional83) {
                    # 1566 "/usr/local/include/comelang2.h"
                    # 1561 "/usr/local/include/comelang2.h"
                    if(_if_conditional84=string_equals(self->keys[it_70],key),                    _if_conditional84) {
                        # 1563 "/usr/local/include/comelang2.h"
                        __result70__ = __result_obj__ = self->items[it_70];
                        come_call_finalizer2(sVar_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result70__;
                    }
                    # 1566 "/usr/local/include/comelang2.h"
                    it_70++;
                    # 1574 "/usr/local/include/comelang2.h"
                    # 1568 "/usr/local/include/comelang2.h"
                    if(_if_conditional85=it_70>=self->size,                    _if_conditional85) {
                        # 1569 "/usr/local/include/comelang2.h"
                        it_70=0;
                    }
                    else {
                        # 1574 "/usr/local/include/comelang2.h"
                        # 1571 "/usr/local/include/comelang2.h"
                        if(_if_conditional86=it_70==hash_69,                        _if_conditional86) {
                            # 1572 "/usr/local/include/comelang2.h"
                            __result71__ = __result_obj__ = default_value_68;
                            come_call_finalizer2(sVar_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result71__;
                        }
                    }
                }
                else {
                    # 1576 "/usr/local/include/comelang2.h"
                    __result72__ = __result_obj__ = default_value_68;
                    come_call_finalizer2(sVar_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                }
            }
            # 1580 "/usr/local/include/comelang2.h"
            __result73__ = __result_obj__ = default_value_68;
            come_call_finalizer2(sVar_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer2(sVar_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional88;
void* right_value77;
struct list_item$1CVALUEph* litem_73;
struct CVALUE* __dec_obj28;
_Bool _if_conditional90;
void* right_value78;
struct list_item$1CVALUEph* litem_74;
struct CVALUE* __dec_obj29;
void* right_value79;
struct list_item$1CVALUEph* litem_75;
struct CVALUE* __dec_obj30;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1CVALUEph*));
right_value78 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1CVALUEph*));
right_value79 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "/usr/local/include/comelang2.h"
        # 225 "/usr/local/include/comelang2.h"
        if(_if_conditional88=self->len==0,        _if_conditional88) {
            # 226 "/usr/local/include/comelang2.h"
            litem_73=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value77=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "/usr/local/include/comelang2.h"
            litem_73->prev=((void*)0);
            # 229 "/usr/local/include/comelang2.h"
            litem_73->next=((void*)0);
            # 230 "/usr/local/include/comelang2.h"
            __dec_obj28=litem_73->item;
            litem_73->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "/usr/local/include/comelang2.h"
            self->tail=litem_73;
            # 233 "/usr/local/include/comelang2.h"
            self->head=litem_73;
        }
        else {
            # 256 "/usr/local/include/comelang2.h"
            # 235 "/usr/local/include/comelang2.h"
            if(_if_conditional90=self->len==1,            _if_conditional90) {
                # 236 "/usr/local/include/comelang2.h"
                litem_74=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value78=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "/usr/local/include/comelang2.h"
                litem_74->prev=self->head;
                # 239 "/usr/local/include/comelang2.h"
                litem_74->next=((void*)0);
                # 240 "/usr/local/include/comelang2.h"
                __dec_obj29=litem_74->item;
                litem_74->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "/usr/local/include/comelang2.h"
                self->tail=litem_74;
                # 243 "/usr/local/include/comelang2.h"
                self->head->next=litem_74;
            }
            else {
                # 246 "/usr/local/include/comelang2.h"
                litem_75=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value79=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "/usr/local/include/comelang2.h"
                litem_75->prev=self->tail;
                # 249 "/usr/local/include/comelang2.h"
                litem_75->next=((void*)0);
                # 250 "/usr/local/include/comelang2.h"
                __dec_obj30=litem_75->item;
                litem_75->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "/usr/local/include/comelang2.h"
                self->tail->next=litem_75;
                # 253 "/usr/local/include/comelang2.h"
                self->tail=litem_75;
            }
        }
        # 256 "/usr/local/include/comelang2.h"
        self->len++;
        # 258 "/usr/local/include/comelang2.h"
        __result74__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional89;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional89=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional89) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

_Bool sStoreLocalVariable_terminated(){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 93 "04var.c"
    __result76__ = (_Bool)0;
    return __result76__;
}

int sStoreLocalVariable_sline(struct sStoreLocalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 98 "04var.c"
    __result77__ = self->sline;
    return __result77__;
}

char* sStoreLocalVariable_sname(struct sStoreLocalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 103 "04var.c"
    __result78__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self->sname)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

struct sLoadLocalVariable* sLoadLocalVariable_initialize(struct sLoadLocalVariable* self, char* name, struct sInfo* info){
void* __result_obj__;
char* __dec_obj31;
void* right_value81;
char* __dec_obj32;
struct sLoadLocalVariable* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 116 "04var.c"
    __dec_obj31=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 118 "04var.c"
    self->sline=info->sline;
    # 119 "04var.c"
    __dec_obj32=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value81=__builtin_string(info->sname))));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 121 "04var.c"
    __result79__ = __result_obj__ = self;
    come_call_finalizer2(sLoadLocalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(sLoadLocalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadLocalVariable_kind(){
void* __result_obj__;
void* right_value82;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    # 126 "04var.c"
    __result80__ = __result_obj__ = ((char*)(right_value82=__builtin_string("sLoadLocalVariable")));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}

_Bool sLoadLocalVariable_compile(struct sLoadLocalVariable* self, struct sInfo* info){
void* __result_obj__;
struct sVar* var__76;
_Bool _if_conditional93;
struct sType* var_type_77;
void* right_value83;
struct CVALUE* come_value_78;
void* right_value84;
void* right_value85;
char* __dec_obj33;
void* right_value86;
struct sType* __dec_obj34;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&var__76, 0, sizeof(struct sVar*));
memset(&var_type_77, 0, sizeof(struct sType*));
right_value83 = (void*)0;
memset(&come_value_78, 0, sizeof(struct CVALUE*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
    # 131 "04var.c"
    var__76=map$2charphsVarphp_operator_load_element(info->lv_table,self->name);
    # 138 "04var.c"
    # 133 "04var.c"
    if(_if_conditional93=var__76==((void*)0),    _if_conditional93) {
        # 134 "04var.c"
        err_msg(info,"invalid var name");
        # 135 "04var.c"
        exit(2);
    }
    # 138 "04var.c"
    var_type_77=var__76->mType;
    # 140 "04var.c"
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "04var.c", 140, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 142 "04var.c"
    __dec_obj33=come_value_78->c_value;
    come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("\%s",((char*)(right_value84=string_to_string(self->name)))))));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 143 "04var.c"
    __dec_obj34=come_value_78->type;
    come_value_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(var_type_77))));
    come_call_finalizer2(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 144 "04var.c"
    come_value_78->var=((void*)0);
    # 146 "04var.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    # 148 "04var.c"
    add_come_last_code(info,"%s\n",come_value_78->c_value);
    # 150 "04var.c"
    __result81__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result81__;
    come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool sLoadLocalVariable_terminated(){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 155 "04var.c"
    __result82__ = (_Bool)0;
    return __result82__;
}

int sLoadLocalVariable_sline(struct sLoadLocalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 160 "04var.c"
    __result83__ = self->sline;
    return __result83__;
}

char* sLoadLocalVariable_sname(struct sLoadLocalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value87;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
    # 165 "04var.c"
    __result84__ = __result_obj__ = ((char*)(right_value87=__builtin_string(self->sname)));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

struct sNode* string_node_v2(char* buf, struct sInfo* info){
void* __result_obj__;
_Bool local_variable_79;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional97;
void* right_value88;
struct sNode* right_value_82;
void* right_value89;
void* right_value90;
struct sNode* _inf_value1;
struct sStoreLocalVariable* _inf_obj_value1;
void* right_value97;
struct sNode* __result91__;
void* right_value98;
struct sType* var_type_85;
_Bool _if_conditional118;
void* right_value99;
struct sNode* right_value_86;
void* right_value100;
void* right_value101;
struct sNode* _inf_value2;
struct sStoreLocalVariable* _inf_obj_value2;
void* right_value107;
struct sNode* __result94__;
_Bool _if_conditional130;
void* right_value108;
struct sNode* right_value_88;
void* right_value109;
void* right_value110;
struct sNode* _inf_value3;
struct sStoreLocalVariable* _inf_obj_value3;
void* right_value116;
struct sNode* __result97__;
_Bool _if_conditional142;
void* right_value117;
void* right_value118;
struct sNode* _inf_value4;
struct sLoadLocalVariable* _inf_obj_value4;
void* right_value122;
struct sNode* __result100__;
void* right_value123;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&local_variable_79, 0, sizeof(_Bool));
right_value88 = (void*)0;
memset(&right_value_82, 0, sizeof(struct sNode*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&var_type_85, 0, sizeof(struct sType*));
right_value99 = (void*)0;
memset(&right_value_86, 0, sizeof(struct sNode*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&right_value_88, 0, sizeof(struct sNode*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    # 170 "04var.c"
    local_variable_79=(_Bool)0;
    # 177 "04var.c"
    {
        # 175 "04var.c"
        # 172 "04var.c"
        if(_if_conditional94=map$2charphsVarphp_operator_load_element(info->lv_table,buf),        _if_conditional94) {
            # 173 "04var.c"
            local_variable_79=(_Bool)1;
        }
    }
    # 220 "04var.c"
    # 177 "04var.c"
    if(_if_conditional95=smart_pointer$1charp_operator_derefference(info->p)==58,    _if_conditional95) {
        # 178 "04var.c"
        smart_pointer$1charp_operator_plus_plus(info->p);
        # 179 "04var.c"
        skip_spaces_and_lf(info);
        # 205 "04var.c"
        # 181 "04var.c"
        if(_if_conditional97=smart_pointer$1charp_operator_derefference(info->p)==61,        _if_conditional97) {
            # 182 "04var.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 183 "04var.c"
            skip_spaces_and_lf(info);
            # 185 "04var.c"
            right_value_82=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=expression_v3(info))));
            if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 187 "04var.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "04var.c", 187, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sStoreLocalVariable*)(right_value90=sStoreLocalVariable_initialize((struct sStoreLocalVariable*)come_increment_ref_count(((struct sStoreLocalVariable*)(right_value89=(struct sStoreLocalVariable*)come_calloc(1, sizeof(struct sStoreLocalVariable)*(1), "04var.c", 187, "sStoreLocalVariable")))),(char*)come_increment_ref_count(buf),(struct sNode*)come_increment_ref_count(right_value_82),(_Bool)1,((void*)0),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sStoreLocalVariable_finalize;
            _inf_value1->clone=(void*)sStoreLocalVariable_clone;
            _inf_value1->compile=(void*)sStoreLocalVariable_compile;
            _inf_value1->sline=(void*)sStoreLocalVariable_sline;
            _inf_value1->sname=(void*)sStoreLocalVariable_sname;
            _inf_value1->terminated=(void*)sStoreLocalVariable_terminated;
            _inf_value1->kind=(void*)sStoreLocalVariable_kind;
            __result91__ = __result_obj__ = ((struct sNode*)(right_value97=_inf_value1));
            if(right_value_82) { right_value_82 = come_decrement_ref_count2(right_value_82, ((struct sNode*)right_value_82)->finalize, ((struct sNode*)right_value_82)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sStoreLocalVariable_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreLocalVariable_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result91__;
            if(right_value_82) { right_value_82 = come_decrement_ref_count2(right_value_82, ((struct sNode*)right_value_82)->finalize, ((struct sNode*)right_value_82)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 190 "04var.c"
            var_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=parse_type(info))));
            come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 204 "04var.c"
            # 192 "04var.c"
            if(_if_conditional118=smart_pointer$1charp_operator_derefference(info->p)==61,            _if_conditional118) {
                # 193 "04var.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 194 "04var.c"
                skip_spaces_and_lf(info);
                # 196 "04var.c"
                right_value_86=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=expression_v3(info))));
                if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 198 "04var.c"
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "04var.c", 198, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sStoreLocalVariable*)(right_value101=sStoreLocalVariable_initialize((struct sStoreLocalVariable*)come_increment_ref_count(((struct sStoreLocalVariable*)(right_value100=(struct sStoreLocalVariable*)come_calloc(1, sizeof(struct sStoreLocalVariable)*(1), "04var.c", 198, "sStoreLocalVariable")))),(char*)come_increment_ref_count(buf),(struct sNode*)come_increment_ref_count(right_value_86),(_Bool)1,(struct sType*)come_increment_ref_count(var_type_85),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sStoreLocalVariable_finalize;
                _inf_value2->clone=(void*)sStoreLocalVariable_clone;
                _inf_value2->compile=(void*)sStoreLocalVariable_compile;
                _inf_value2->sline=(void*)sStoreLocalVariable_sline;
                _inf_value2->sname=(void*)sStoreLocalVariable_sname;
                _inf_value2->terminated=(void*)sStoreLocalVariable_terminated;
                _inf_value2->kind=(void*)sStoreLocalVariable_kind;
                __result94__ = __result_obj__ = ((struct sNode*)(right_value107=_inf_value2));
                if(right_value_86) { right_value_86 = come_decrement_ref_count2(right_value_86, ((struct sNode*)right_value_86)->finalize, ((struct sNode*)right_value_86)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,var_type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sStoreLocalVariable_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStoreLocalVariable_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result94__;
                if(right_value_86) { right_value_86 = come_decrement_ref_count2(right_value_86, ((struct sNode*)right_value_86)->finalize, ((struct sNode*)right_value_86)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 201 "04var.c"
                err_msg(info,"require right value");
                # 202 "04var.c"
                exit(2);
            }
            come_call_finalizer2(sType_finalize,var_type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 220 "04var.c"
        # 206 "04var.c"
        if(_if_conditional130=smart_pointer$1charp_operator_derefference(info->p)==61,        _if_conditional130) {
            # 207 "04var.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 208 "04var.c"
            skip_spaces_and_lf(info);
            # 210 "04var.c"
            right_value_88=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value108=expression_v3(info))));
            if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 212 "04var.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "04var.c", 212, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreLocalVariable*)(right_value110=sStoreLocalVariable_initialize((struct sStoreLocalVariable*)come_increment_ref_count(((struct sStoreLocalVariable*)(right_value109=(struct sStoreLocalVariable*)come_calloc(1, sizeof(struct sStoreLocalVariable)*(1), "04var.c", 212, "sStoreLocalVariable")))),(char*)come_increment_ref_count(buf),(struct sNode*)come_increment_ref_count(right_value_88),(_Bool)0,((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreLocalVariable_finalize;
            _inf_value3->clone=(void*)sStoreLocalVariable_clone;
            _inf_value3->compile=(void*)sStoreLocalVariable_compile;
            _inf_value3->sline=(void*)sStoreLocalVariable_sline;
            _inf_value3->sname=(void*)sStoreLocalVariable_sname;
            _inf_value3->terminated=(void*)sStoreLocalVariable_terminated;
            _inf_value3->kind=(void*)sStoreLocalVariable_kind;
            __result97__ = __result_obj__ = ((struct sNode*)(right_value116=_inf_value3));
            if(right_value_88) { right_value_88 = come_decrement_ref_count2(right_value_88, ((struct sNode*)right_value_88)->finalize, ((struct sNode*)right_value_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sStoreLocalVariable_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStoreLocalVariable_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result97__;
            if(right_value_88) { right_value_88 = come_decrement_ref_count2(right_value_88, ((struct sNode*)right_value_88)->finalize, ((struct sNode*)right_value_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 220 "04var.c"
            # 214 "04var.c"
            if(local_variable_79) {
                # 215 "04var.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "04var.c", 215, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sLoadLocalVariable*)(right_value118=sLoadLocalVariable_initialize((struct sLoadLocalVariable*)come_increment_ref_count(((struct sLoadLocalVariable*)(right_value117=(struct sLoadLocalVariable*)come_calloc(1, sizeof(struct sLoadLocalVariable)*(1), "04var.c", 215, "sLoadLocalVariable")))),(char*)come_increment_ref_count(buf),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sLoadLocalVariable_finalize;
                _inf_value4->clone=(void*)sLoadLocalVariable_clone;
                _inf_value4->compile=(void*)sLoadLocalVariable_compile;
                _inf_value4->sline=(void*)sLoadLocalVariable_sline;
                _inf_value4->sname=(void*)sLoadLocalVariable_sname;
                _inf_value4->terminated=(void*)sLoadLocalVariable_terminated;
                _inf_value4->kind=(void*)sLoadLocalVariable_kind;
                __result100__ = __result_obj__ = ((struct sNode*)(right_value122=_inf_value4));
                buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sLoadLocalVariable_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLoadLocalVariable_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result100__;
            }
            else {
                # 218 "04var.c"
                __result101__ = __result_obj__ = ((struct sNode*)(right_value123=string_node((char*)come_increment_ref_count(buf),info)));
                buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result101__;
            }
        }
    }
    buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self){
void* __result_obj__;
char* p_80;
char __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_80, 0, sizeof(char*));
        # 2097 "/usr/local/include/comelang2.h"
        p_80=self->p;
        # 2098 "/usr/local/include/comelang2.h"
        __result85__ = *p_80;
        return __result85__;
}

static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self){
void* __result_obj__;
int n_81;
_Bool _if_conditional96;
struct smart_pointer$1char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_81, 0, sizeof(int));
            # 2103 "/usr/local/include/comelang2.h"
            n_81=self->p-(char*)self->memory->buf;
            # 2104 "/usr/local/include/comelang2.h"
            self->p=((char*)self->memory->buf)+n_81+1;
            # 2112 "/usr/local/include/comelang2.h"
            # 2106 "/usr/local/include/comelang2.h"
            if(_if_conditional96=(char*)self->p>self->memory->buf+self->memory->len,            _if_conditional96) {
                # 2107 "/usr/local/include/comelang2.h"
                puts("out of range of smart pointer");
                # 2108 "/usr/local/include/comelang2.h"
                stackframe();
                # 2109 "/usr/local/include/comelang2.h"
                exit(1);
            }
            # 2112 "/usr/local/include/comelang2.h"
            __result86__ = __result_obj__ = self;
            return __result86__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional105;
struct sNode* __result88__;
void* right_value93;
struct sNode* result_84;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&result_84, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional105=self==(void*)0,                        _if_conditional105) {
                            # 2 "sNode_clone"
                            __result88__ = __result_obj__ = (void*)0;
                            return __result88__;
                        }
                        # 3 "sNode_clone"
                        result_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional106=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional106) {
                            # 4 "sNode_clone"
                            result_84->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional107=self!=((void*)0),                        _if_conditional107) {
                            # 5 "sNode_clone"
                            result_84->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional108=self!=((void*)0),                        _if_conditional108) {
                            # 6 "sNode_clone"
                            result_84->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional109=self!=((void*)0),                        _if_conditional109) {
                            # 7 "sNode_clone"
                            result_84->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional110=self!=((void*)0),                        _if_conditional110) {
                            # 8 "sNode_clone"
                            result_84->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional111=self!=((void*)0),                        _if_conditional111) {
                            # 9 "sNode_clone"
                            result_84->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional112=self!=((void*)0),                        _if_conditional112) {
                            # 10 "sNode_clone"
                            result_84->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional113=self!=((void*)0),                        _if_conditional113) {
                            # 11 "sNode_clone"
                            result_84->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result89__ = __result_obj__ = result_84;
                        if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result89__;
                        if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sStoreLocalVariable_finalize(struct sStoreLocalVariable* self){
void* __result_obj__;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStoreLocalVariable_finalize"
                # 0 "sStoreLocalVariable_finalize"
                if(_if_conditional131=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional131) {
                    # 0 "sStoreLocalVariable_finalize"
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStoreLocalVariable_finalize"
                # 1 "sStoreLocalVariable_finalize"
                if(_if_conditional132=self!=((void*)0)&&self->right_value!=((void*)0),                _if_conditional132) {
                    # 1 "sStoreLocalVariable_finalize"
                    if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sStoreLocalVariable_finalize"
                # 2 "sStoreLocalVariable_finalize"
                if(_if_conditional133=self!=((void*)0)&&self->var_type!=((void*)0),                _if_conditional133) {
                    # 2 "sStoreLocalVariable_finalize"
                    come_call_finalizer2(sType_finalize,self->var_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sStoreLocalVariable_finalize"
                # 3 "sStoreLocalVariable_finalize"
                if(_if_conditional134=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional134) {
                    # 3 "sStoreLocalVariable_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStoreLocalVariable* sStoreLocalVariable_clone(struct sStoreLocalVariable* self){
void* __result_obj__;
_Bool _if_conditional135;
struct sStoreLocalVariable* __result95__;
void* right_value111;
struct sStoreLocalVariable* result_89;
_Bool _if_conditional136;
void* right_value112;
char* __dec_obj43;
_Bool _if_conditional137;
void* right_value113;
struct sNode* __dec_obj44;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value114;
struct sType* __dec_obj45;
_Bool _if_conditional140;
_Bool _if_conditional141;
void* right_value115;
char* __dec_obj46;
struct sStoreLocalVariable* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&result_89, 0, sizeof(struct sStoreLocalVariable*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
                # 3 "sStoreLocalVariable_clone"
                # 2 "sStoreLocalVariable_clone"
                if(_if_conditional135=self==(void*)0,                _if_conditional135) {
                    # 2 "sStoreLocalVariable_clone"
                    __result95__ = __result_obj__ = (void*)0;
                    return __result95__;
                }
                # 3 "sStoreLocalVariable_clone"
                result_89=(struct sStoreLocalVariable*)come_increment_ref_count(((struct sStoreLocalVariable*)(right_value111=(struct sStoreLocalVariable*)come_calloc(1, sizeof(struct sStoreLocalVariable)*(1), "sStoreLocalVariable_clone", 3, "sStoreLocalVariable"))));
                come_call_finalizer2(sStoreLocalVariable_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sStoreLocalVariable_clone"
                # 4 "sStoreLocalVariable_clone"
                if(_if_conditional136=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional136) {
                    # 4 "sStoreLocalVariable_clone"
                    __dec_obj43=result_89->name;
                    result_89->name=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->name))));
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sStoreLocalVariable_clone"
                # 5 "sStoreLocalVariable_clone"
                if(_if_conditional137=self!=((void*)0)&&self->right_value!=((void*)0),                _if_conditional137) {
                    # 5 "sStoreLocalVariable_clone"
                    __dec_obj44=result_89->right_value;
                    result_89->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->right_value))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 7 "sStoreLocalVariable_clone"
                # 6 "sStoreLocalVariable_clone"
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    # 6 "sStoreLocalVariable_clone"
                    result_89->alloc=self->alloc;
                }
                # 8 "sStoreLocalVariable_clone"
                # 7 "sStoreLocalVariable_clone"
                if(_if_conditional139=self!=((void*)0)&&self->var_type!=((void*)0),                _if_conditional139) {
                    # 7 "sStoreLocalVariable_clone"
                    __dec_obj45=result_89->var_type;
                    result_89->var_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(self->var_type))));
                    come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sStoreLocalVariable_clone"
                # 8 "sStoreLocalVariable_clone"
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    # 8 "sStoreLocalVariable_clone"
                    result_89->sline=self->sline;
                }
                # 10 "sStoreLocalVariable_clone"
                # 9 "sStoreLocalVariable_clone"
                if(_if_conditional141=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional141) {
                    # 9 "sStoreLocalVariable_clone"
                    __dec_obj46=result_89->sname;
                    result_89->sname=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->sname))));
                    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sStoreLocalVariable_clone"
                __result96__ = __result_obj__ = result_89;
                come_call_finalizer2(sStoreLocalVariable_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result96__;
                come_call_finalizer2(sStoreLocalVariable_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadLocalVariable_finalize(struct sLoadLocalVariable* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sLoadLocalVariable_finalize"
                    # 0 "sLoadLocalVariable_finalize"
                    if(_if_conditional143=self!=((void*)0)&&self->name!=((void*)0),                    _if_conditional143) {
                        # 0 "sLoadLocalVariable_finalize"
                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sLoadLocalVariable_finalize"
                    # 1 "sLoadLocalVariable_finalize"
                    if(_if_conditional144=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional144) {
                        # 1 "sLoadLocalVariable_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sLoadLocalVariable* sLoadLocalVariable_clone(struct sLoadLocalVariable* self){
void* __result_obj__;
_Bool _if_conditional145;
struct sLoadLocalVariable* __result98__;
void* right_value119;
struct sLoadLocalVariable* result_90;
_Bool _if_conditional146;
void* right_value120;
char* __dec_obj47;
_Bool _if_conditional147;
_Bool _if_conditional148;
void* right_value121;
char* __dec_obj48;
struct sLoadLocalVariable* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&result_90, 0, sizeof(struct sLoadLocalVariable*));
right_value120 = (void*)0;
right_value121 = (void*)0;
                    # 3 "sLoadLocalVariable_clone"
                    # 2 "sLoadLocalVariable_clone"
                    if(_if_conditional145=self==(void*)0,                    _if_conditional145) {
                        # 2 "sLoadLocalVariable_clone"
                        __result98__ = __result_obj__ = (void*)0;
                        return __result98__;
                    }
                    # 3 "sLoadLocalVariable_clone"
                    result_90=(struct sLoadLocalVariable*)come_increment_ref_count(((struct sLoadLocalVariable*)(right_value119=(struct sLoadLocalVariable*)come_calloc(1, sizeof(struct sLoadLocalVariable)*(1), "sLoadLocalVariable_clone", 3, "sLoadLocalVariable"))));
                    come_call_finalizer2(sLoadLocalVariable_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sLoadLocalVariable_clone"
                    # 4 "sLoadLocalVariable_clone"
                    if(_if_conditional146=self!=((void*)0)&&self->name!=((void*)0),                    _if_conditional146) {
                        # 4 "sLoadLocalVariable_clone"
                        __dec_obj47=result_90->name;
                        result_90->name=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->name))));
                        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sLoadLocalVariable_clone"
                    # 5 "sLoadLocalVariable_clone"
                    if(_if_conditional147=self!=((void*)0),                    _if_conditional147) {
                        # 5 "sLoadLocalVariable_clone"
                        result_90->sline=self->sline;
                    }
                    # 7 "sLoadLocalVariable_clone"
                    # 6 "sLoadLocalVariable_clone"
                    if(_if_conditional148=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional148) {
                        # 6 "sLoadLocalVariable_clone"
                        __dec_obj48=result_90->sname;
                        result_90->sname=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(self->sname))));
                        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sLoadLocalVariable_clone"
                    __result99__ = __result_obj__ = result_90;
                    come_call_finalizer2(sLoadLocalVariable_finalize,result_90, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result99__;
                    come_call_finalizer2(sLoadLocalVariable_finalize,result_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

