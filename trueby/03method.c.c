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
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct list$1sNodeph** o2_saved_33;
    struct sNode** it_36;
    struct sMethodCall** self;
    struct sInfo** info;
    struct CVALUE** come_value_22;
    struct sType** type_23;
    struct sClass** klass_24;
    struct sMethod** method_30;
    struct buffer** buf_31;
    int* n_32;
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

struct sMethodCall* sMethodCall_initialize(struct sMethodCall* self, struct sNode* obj, char* name, struct list$1sNodeph* params, struct sInfo* info);

static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
char* sMethodCall_kind();

_Bool sMethodCall_compile(struct sMethodCall* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct sMethod* map$2charphsMethodphp_operator_load_element(struct map$2charphsMethodph* self, char* key);
static void sMethod_finalize(struct sMethod* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
void method_block1_03methodc(struct __current_stack1__* parent);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
_Bool sMethodCall_terminated();

int sMethodCall_sline(struct sMethodCall* self, struct sInfo* info);

char* sMethodCall_sname(struct sMethodCall* self, struct sInfo* info);

struct sNode* post_expression(struct sNode* node, struct sInfo* info);

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self);
static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self);
static void sMethodCall_finalize(struct sMethodCall* self);
static struct sMethodCall* sMethodCall_clone(struct sMethodCall* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
struct sNode* expression_v3(struct sInfo* info);

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










struct sMethodCall* sMethodCall_initialize(struct sMethodCall* self, struct sNode* obj, char* name, struct list$1sNodeph* params, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj12;
char* __dec_obj13;
struct list$1sNodeph* __dec_obj14;
void* right_value49;
char* __dec_obj15;
struct sMethodCall* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    # 15 "03method.c"
    __dec_obj12=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(obj);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    # 16 "03method.c"
    __dec_obj13=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 17 "03method.c"
    __dec_obj14=self->params;
    self->params=(struct list$1sNodeph*)come_increment_ref_count(params);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 19 "03method.c"
    self->sline=info->sline;
    # 20 "03method.c"
    __dec_obj15=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 22 "03method.c"
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sMethodCall_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sMethodCall_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_11;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                # 123 "/usr/local/include/comelang2.h"
                it_11=self->head;
                # 129 "/usr/local/include/comelang2.h"
                while(_while_condtional1=it_11!=((void*)0),                _while_condtional1) {
                    # 125 "/usr/local/include/comelang2.h"
                    prev_it_12=it_11;
                    # 126 "/usr/local/include/comelang2.h"
                    it_11=it_11->next;
                    # 127 "/usr/local/include/comelang2.h"
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sNodephp_finalize"
                        # 0 "list_item$1sNodephp_finalize"
                        if(_if_conditional10=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional10) {
                            # 0 "list_item$1sNodephp_finalize"
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

char* sMethodCall_kind(){
void* __result_obj__;
void* right_value50;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    # 27 "03method.c"
    __result35__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sMethodCall")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

_Bool sMethodCall_compile(struct sMethodCall* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional12;
_Bool __result36__;
void* right_value51;
void* right_value64;
struct CVALUE* come_value_22;
struct sType* type_23;
_Bool _if_conditional29;
_Bool __result45__;
struct sClass* klass_24;
_Bool _if_conditional30;
_Bool __result46__;
struct sMethod* method_30;
_Bool _if_conditional41;
_Bool __result51__;
void* right_value65;
void* right_value66;
struct buffer* buf_31;
void* right_value67;
void* right_value68;
void* right_value69;
int n_32;
struct list$1sNodeph* o2_saved_33;
struct sNode* it_36;
struct __current_stack1__ __current_stack1__;
void* right_value70;
struct CVALUE* come_value_39;
struct sType* left_type_43;
_Bool _if_conditional48;
void* right_value71;
void* right_value72;
_Bool _if_conditional50;
void* right_value73;
void* right_value74;
void* right_value75;
struct CVALUE* come_value2_44;
void* right_value76;
char* __dec_obj23;
struct sType* __dec_obj24;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value64 = (void*)0;
memset(&come_value_22, 0, sizeof(struct CVALUE*));
memset(&type_23, 0, sizeof(struct sType*));
memset(&klass_24, 0, sizeof(struct sClass*));
memset(&method_30, 0, sizeof(struct sMethod*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&buf_31, 0, sizeof(struct buffer*));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&n_32, 0, sizeof(int));
memset(&o2_saved_33, 0, sizeof(struct list$1sNodeph*));
memset(&it_36, 0, sizeof(struct sNode*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value70 = (void*)0;
memset(&come_value_39, 0, sizeof(struct CVALUE*));
memset(&left_type_43, 0, sizeof(struct sType*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&come_value2_44, 0, sizeof(struct CVALUE*));
right_value76 = (void*)0;
    # 36 "03method.c"
    # 32 "03method.c"
    if(_if_conditional12=!self->obj->compile(self->obj->_protocol_obj,info),    _if_conditional12) {
        # 33 "03method.c"
        __result36__ = (_Bool)0;
        return __result36__;
    }
    # 36 "03method.c"
    come_value_22=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value64=CVALUE_clone(((struct CVALUE*)(right_value51=get_value_from_stack(-1,info)))))));
    come_call_finalizer2(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(CVALUE_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 37 "03method.c"
    dec_stack_ptr(1,info);
    # 39 "03method.c"
    type_23=come_value_22->type;
    # 46 "03method.c"
    # 41 "03method.c"
    if(_if_conditional29=type_23==((void*)0),    _if_conditional29) {
        # 42 "03method.c"
        err_msg(info,"require type");
        # 43 "03method.c"
        __result45__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result45__;
    }
    # 46 "03method.c"
    klass_24=type_23->mClass;
    # 53 "03method.c"
    # 48 "03method.c"
    if(_if_conditional30=klass_24==((void*)0),    _if_conditional30) {
        # 49 "03method.c"
        err_msg(info,"require class");
        # 50 "03method.c"
        __result46__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result46__;
    }
    # 53 "03method.c"
    method_30=map$2charphsMethodphp_operator_load_element(klass_24->mMethods,self->name);
    # 60 "03method.c"
    # 55 "03method.c"
    if(_if_conditional41=method_30==((void*)0),    _if_conditional41) {
        # 56 "03method.c"
        err_msg(info,"require Kernel method (%s)",self->name);
        # 57 "03method.c"
        __result51__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result51__;
    }
    # 60 "03method.c"
    buf_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value66=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value65=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03method.c", 60, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 61 "03method.c"
    buffer_append_str(buf_31,((char*)(right_value69=xsprintf("\%s.\%s(",((char*)(right_value67=string_to_string(come_value_22->c_value))),((char*)(right_value68=string_to_string(self->name)))))));
    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 62 "03method.c"
    n_32=0;
    # 88 "03method.c"
    for(    o2_saved_33=(struct list$1sNodeph*)come_increment_ref_count((self->params)),it_36=list$1sNodeph_begin((o2_saved_33));    !list$1sNodeph_end((o2_saved_33));    it_36=list$1sNodeph_next((o2_saved_33))    ){
        # 68 "03method.c"
        __current_stack1__.o2_saved_33 = &o2_saved_33;
        __current_stack1__.it_36 = &it_36;
        __current_stack1__.self = &self;
        __current_stack1__.info = &info;
        __current_stack1__.come_value_22 = &come_value_22;
        __current_stack1__.type_23 = &type_23;
        __current_stack1__.klass_24 = &klass_24;
        __current_stack1__.method_30 = &method_30;
        __current_stack1__.buf_31 = &buf_31;
        __current_stack1__.n_32 = &n_32;
        bool_catch(it_36->compile(it_36->_protocol_obj,info),&__current_stack1__,(void*)method_block1_03methodc);
                                if(__current_stack1__.__method_block_result_kind__ == 1)
                        {
                            break;
                        }
                        else if(__current_stack1__.__method_block_result_kind__ == 2)
                        {
                            continue;
                        }
                        else if(__current_stack1__.__method_block_result_kind__ == 3)
                        {
                            return (_Bool)__current_stack1__.__method_block_return_value__;
                        }
        # 68 "03method.c"
        come_value_39=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value70=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 69 "03method.c"
        dec_stack_ptr(1,info);
        # 71 "03method.c"
        left_type_43=list$1tuple2$2charphsTypephphp_operator_load_element(method_30->mParams,n_32)->v2;
        # 78 "03method.c"
        # 73 "03method.c"
        if(_if_conditional48=left_type_43==((void*)0),        _if_conditional48) {
            # 74 "03method.c"
            err_msg(info,"invalid params number(%s)",self->name);
            # 75 "03method.c"
            exit(2);
        }
        # 78 "03method.c"
        check_assign_type(left_type_43,come_value_39->type,come_value_39,info);
        # 80 "03method.c"
        buffer_append_str(buf_31,((char*)(right_value72=xsprintf("\%s",((char*)(right_value71=string_to_string(come_value_39->c_value)))))));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 82 "03method.c"
        n_32++;
        # 87 "03method.c"
        # 84 "03method.c"
        if(_if_conditional50=n_32!=list$1sNodeph_length(self->params),        _if_conditional50) {
            # 85 "03method.c"
            buffer_append_str(buf_31,((char*)(right_value73=xsprintf(","))));
            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(CVALUE_finalize,come_value_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 88 "03method.c"
    buffer_append_str(buf_31,((char*)(right_value74=xsprintf(")"))));
    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 90 "03method.c"
    come_value2_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "03method.c", 90, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 92 "03method.c"
    __dec_obj23=come_value2_44->c_value;
    come_value2_44->c_value=(char*)come_increment_ref_count(((char*)(right_value76=buffer_to_string(buf_31))));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 93 "03method.c"
    __dec_obj24=come_value2_44->type;
    come_value2_44->type=(struct sType*)come_increment_ref_count(method_30->mResultType);
    come_call_finalizer2(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 94 "03method.c"
    come_value2_44->var=((void*)0);
    # 96 "03method.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_44));
    # 98 "03method.c"
    add_come_last_code(info,"%s\n",come_value2_44->c_value);
    # 100 "03method.c"
    __result64__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result64__;
    come_call_finalizer2(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional13;
struct CVALUE* __result37__;
void* right_value52;
struct CVALUE* result_13;
_Bool _if_conditional19;
void* right_value53;
char* __dec_obj16;
_Bool _if_conditional20;
void* right_value63;
struct sType* __dec_obj22;
_Bool _if_conditional28;
struct CVALUE* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_13, 0, sizeof(struct CVALUE*));
right_value53 = (void*)0;
right_value63 = (void*)0;
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional13=self==(void*)0,        _if_conditional13) {
            # 2 "CVALUE_clone"
            __result37__ = __result_obj__ = (void*)0;
            return __result37__;
        }
        # 3 "CVALUE_clone"
        result_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional19=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional19) {
            # 4 "CVALUE_clone"
            __dec_obj16=result_13->c_value;
            result_13->c_value=(char*)come_increment_ref_count(((char*)(right_value53=string_clone(self->c_value))));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional20=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional20) {
            # 5 "CVALUE_clone"
            __dec_obj22=result_13->type;
            result_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
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
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional14) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional15) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional16=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional16) {
                        # 0 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional18=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional18) {
                        # 1 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sTypeph*));
                            # 123 "/usr/local/include/comelang2.h"
                            it_14=self->head;
                            # 129 "/usr/local/include/comelang2.h"
                            while(_while_condtional2=it_14!=((void*)0),                            _while_condtional2) {
                                # 125 "/usr/local/include/comelang2.h"
                                prev_it_15=it_14;
                                # 126 "/usr/local/include/comelang2.h"
                                it_14=it_14->next;
                                # 127 "/usr/local/include/comelang2.h"
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional17) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
struct sType* __result38__;
void* right_value54;
struct sType* result_16;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value61;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional27;
void* right_value62;
struct list$1sTypeph* __dec_obj21;
struct sType* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&result_16, 0, sizeof(struct sType*));
right_value61 = (void*)0;
right_value62 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional21=self==(void*)0,                _if_conditional21) {
                    # 2 "sType_clone"
                    __result38__ = __result_obj__ = (void*)0;
                    return __result38__;
                }
                # 3 "sType_clone"
                result_16=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional22=self!=((void*)0),                _if_conditional22) {
                    # 4 "sType_clone"
                    result_16->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional23=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional23) {
                    # 5 "sType_clone"
                    __dec_obj20=result_16->mMultipleTypes;
                    result_16->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value61=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional27) {
                    # 6 "sType_clone"
                    __dec_obj21=result_16->mGenericsTypes;
                    result_16->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value62=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                __result43__ = __result_obj__ = result_16;
                come_call_finalizer2(sType_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result43__;
                come_call_finalizer2(sType_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
struct list$1sTypeph* __result39__;
void* right_value55;
void* right_value56;
struct list$1sTypeph* result_17;
struct list_item$1sTypeph* it_18;
_Bool _while_condtional3;
void* right_value60;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
right_value56 = (void*)0;
memset(&result_17, 0, sizeof(struct list$1sTypeph*));
memset(&it_18, 0, sizeof(struct list_item$1sTypeph*));
right_value60 = (void*)0;
                        # 142 "/usr/local/include/comelang2.h"
                        # 139 "/usr/local/include/comelang2.h"
                        if(_if_conditional24=self==((void*)0),                        _if_conditional24) {
                            # 140 "/usr/local/include/comelang2.h"
                            __result39__ = __result_obj__ = ((void*)0);
                            return __result39__;
                        }
                        # 142 "/usr/local/include/comelang2.h"
                        result_17=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "/usr/local/include/comelang2.h"
                        it_18=self->head;
                        # 151 "/usr/local/include/comelang2.h"
                        while(_while_condtional3=it_18!=((void*)0),                        _while_condtional3) {
                            # 146 "/usr/local/include/comelang2.h"
                            list$1sTypeph_add(result_17,(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(it_18->item)))));
                            come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "/usr/local/include/comelang2.h"
                            it_18=it_18->next;
                        }
                        # 151 "/usr/local/include/comelang2.h"
                        __result42__ = __result_obj__ = result_17;
                        come_call_finalizer2(list$1sTypephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value57;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj17;
_Bool _if_conditional26;
void* right_value58;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj18;
void* right_value59;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj19;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
right_value58 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value59 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
                                # 186 "/usr/local/include/comelang2.h"
                                # 155 "/usr/local/include/comelang2.h"
                                if(_if_conditional25=self->len==0,                                _if_conditional25) {
                                    # 156 "/usr/local/include/comelang2.h"
                                    litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "/usr/local/include/comelang2.h"
                                    litem_19->prev=((void*)0);
                                    # 159 "/usr/local/include/comelang2.h"
                                    litem_19->next=((void*)0);
                                    # 160 "/usr/local/include/comelang2.h"
                                    __dec_obj17=litem_19->item;
                                    litem_19->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "/usr/local/include/comelang2.h"
                                    self->tail=litem_19;
                                    # 163 "/usr/local/include/comelang2.h"
                                    self->head=litem_19;
                                }
                                else {
                                    # 186 "/usr/local/include/comelang2.h"
                                    # 165 "/usr/local/include/comelang2.h"
                                    if(_if_conditional26=self->len==1,                                    _if_conditional26) {
                                        # 166 "/usr/local/include/comelang2.h"
                                        litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "/usr/local/include/comelang2.h"
                                        litem_20->prev=self->head;
                                        # 169 "/usr/local/include/comelang2.h"
                                        litem_20->next=((void*)0);
                                        # 170 "/usr/local/include/comelang2.h"
                                        __dec_obj18=litem_20->item;
                                        litem_20->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "/usr/local/include/comelang2.h"
                                        self->tail=litem_20;
                                        # 173 "/usr/local/include/comelang2.h"
                                        self->head->next=litem_20;
                                    }
                                    else {
                                        # 176 "/usr/local/include/comelang2.h"
                                        litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value59=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "/usr/local/include/comelang2.h"
                                        litem_21->prev=self->tail;
                                        # 179 "/usr/local/include/comelang2.h"
                                        litem_21->next=((void*)0);
                                        # 180 "/usr/local/include/comelang2.h"
                                        __dec_obj19=litem_21->item;
                                        litem_21->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "/usr/local/include/comelang2.h"
                                        self->tail->next=litem_21;
                                        # 183 "/usr/local/include/comelang2.h"
                                        self->tail=litem_21;
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

static struct sMethod* map$2charphsMethodphp_operator_load_element(struct map$2charphsMethodph* self, char* key){
void* __result_obj__;
struct sMethod* default_value_25;
unsigned int hash_26;
unsigned int it_27;
_Bool _while_condtional4;
_Bool _if_conditional31;
_Bool _if_conditional32;
struct sMethod* __result47__;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct sMethod* __result48__;
struct sMethod* __result49__;
struct sMethod* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_25, 0, sizeof(struct sMethod*));
memset(&hash_26, 0, sizeof(unsigned int));
memset(&it_27, 0, sizeof(unsigned int));
        # 1552 "/usr/local/include/comelang2.h"
        # 1553 "/usr/local/include/comelang2.h"
        memset(&default_value_25,0,sizeof(struct sMethod*));
        # 1555 "/usr/local/include/comelang2.h"
        hash_26=string_get_hash_key(((char*)key))%self->size;
        # 1556 "/usr/local/include/comelang2.h"
        it_27=hash_26;
        # 1580 "/usr/local/include/comelang2.h"
        while(_while_condtional4=(_Bool)1,        _while_condtional4) {
            # 1578 "/usr/local/include/comelang2.h"
            # 1559 "/usr/local/include/comelang2.h"
            if(_if_conditional31=self->item_existance[it_27],            _if_conditional31) {
                # 1566 "/usr/local/include/comelang2.h"
                # 1561 "/usr/local/include/comelang2.h"
                if(_if_conditional32=string_equals(self->keys[it_27],key),                _if_conditional32) {
                    # 1563 "/usr/local/include/comelang2.h"
                    __result47__ = __result_obj__ = self->items[it_27];
                    come_call_finalizer2(sMethod_finalize,default_value_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result47__;
                }
                # 1566 "/usr/local/include/comelang2.h"
                it_27++;
                # 1574 "/usr/local/include/comelang2.h"
                # 1568 "/usr/local/include/comelang2.h"
                if(_if_conditional39=it_27>=self->size,                _if_conditional39) {
                    # 1569 "/usr/local/include/comelang2.h"
                    it_27=0;
                }
                else {
                    # 1574 "/usr/local/include/comelang2.h"
                    # 1571 "/usr/local/include/comelang2.h"
                    if(_if_conditional40=it_27==hash_26,                    _if_conditional40) {
                        # 1572 "/usr/local/include/comelang2.h"
                        __result48__ = __result_obj__ = default_value_25;
                        come_call_finalizer2(sMethod_finalize,default_value_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                    }
                }
            }
            else {
                # 1576 "/usr/local/include/comelang2.h"
                __result49__ = __result_obj__ = default_value_25;
                come_call_finalizer2(sMethod_finalize,default_value_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result49__;
            }
        }
        # 1580 "/usr/local/include/comelang2.h"
        __result50__ = __result_obj__ = default_value_25;
        come_call_finalizer2(sMethod_finalize,default_value_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result50__;
        come_call_finalizer2(sMethod_finalize,default_value_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMethod_finalize(struct sMethod* self){
void* __result_obj__;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sMethod_finalize"
                        # 0 "sMethod_finalize"
                        if(_if_conditional33=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional33) {
                            # 0 "sMethod_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sMethod_finalize"
                        # 1 "sMethod_finalize"
                        if(_if_conditional34=self!=((void*)0)&&self->mParams!=((void*)0),                        _if_conditional34) {
                            # 1 "sMethod_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mParams, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sMethod_finalize"
                        # 2 "sMethod_finalize"
                        if(_if_conditional38=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional38) {
                            # 2 "sMethod_finalize"
                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_28;
_Bool _while_condtional5;
struct list_item$1tuple2$2charphsTypephph* prev_it_29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_28, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_29, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "/usr/local/include/comelang2.h"
                                it_28=self->head;
                                # 129 "/usr/local/include/comelang2.h"
                                while(_while_condtional5=it_28!=((void*)0),                                _while_condtional5) {
                                    # 125 "/usr/local/include/comelang2.h"
                                    prev_it_29=it_28;
                                    # 126 "/usr/local/include/comelang2.h"
                                    it_28=it_28->next;
                                    # 127 "/usr/local/include/comelang2.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional35) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional36) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional37=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional37) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional42;
struct sNode* result_34;
struct sNode* __result52__;
_Bool _if_conditional43;
struct sNode* __result53__;
struct sNode* result_35;
struct sNode* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct sNode*));
memset(&result_35, 0, sizeof(struct sNode*));
        # 290 "/usr/local/include/comelang2.h"
        # 285 "/usr/local/include/comelang2.h"
        if(_if_conditional42=self==((void*)0),        _if_conditional42) {
            # 286 "/usr/local/include/comelang2.h"
            # 287 "/usr/local/include/comelang2.h"
            memset(&result_34,0,sizeof(struct sNode*));
            # 288 "/usr/local/include/comelang2.h"
            __result52__ = __result_obj__ = result_34;
            return __result52__;
        }
        # 290 "/usr/local/include/comelang2.h"
        self->it=self->head;
        # 296 "/usr/local/include/comelang2.h"
        # 292 "/usr/local/include/comelang2.h"
        if(self->it) {
            # 293 "/usr/local/include/comelang2.h"
            __result53__ = __result_obj__ = self->it->item;
            return __result53__;
        }
        # 296 "/usr/local/include/comelang2.h"
        # 297 "/usr/local/include/comelang2.h"
        memset(&result_35,0,sizeof(struct sNode*));
        # 298 "/usr/local/include/comelang2.h"
        __result54__ = __result_obj__ = result_35;
        return __result54__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "/usr/local/include/comelang2.h"
        __result55__ = self==((void*)0)||self->it==((void*)0);
        return __result55__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct sNode* result_37;
struct sNode* __result56__;
_Bool _if_conditional45;
struct sNode* __result57__;
struct sNode* result_38;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct sNode*));
memset(&result_38, 0, sizeof(struct sNode*));
        # 308 "/usr/local/include/comelang2.h"
        # 302 "/usr/local/include/comelang2.h"
        if(_if_conditional44=self==((void*)0)||self->it==((void*)0),        _if_conditional44) {
            # 303 "/usr/local/include/comelang2.h"
            # 304 "/usr/local/include/comelang2.h"
            memset(&result_37,0,sizeof(struct sNode*));
            # 305 "/usr/local/include/comelang2.h"
            __result56__ = __result_obj__ = result_37;
            return __result56__;
        }
        # 308 "/usr/local/include/comelang2.h"
        self->it=self->it->next;
        # 314 "/usr/local/include/comelang2.h"
        # 310 "/usr/local/include/comelang2.h"
        if(self->it) {
            # 311 "/usr/local/include/comelang2.h"
            __result57__ = __result_obj__ = self->it->item;
            return __result57__;
        }
        # 314 "/usr/local/include/comelang2.h"
        # 315 "/usr/local/include/comelang2.h"
        memset(&result_38,0,sizeof(struct sNode*));
        # 316 "/usr/local/include/comelang2.h"
        __result58__ = __result_obj__ = result_38;
        return __result58__;
}

void method_block1_03methodc(struct __current_stack1__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            # 66 "03method.c"
            puts("compile error");
            # 67 "03method.c"
            exit(2);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional46;
struct list_item$1tuple2$2charphsTypephph* it_40;
int i_41;
_Bool _while_condtional6;
_Bool _if_conditional47;
struct tuple2$2charphsTypeph* __result59__;
struct tuple2$2charphsTypeph* default_value_42;
struct tuple2$2charphsTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_40, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_41, 0, sizeof(int));
memset(&default_value_42, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 686 "/usr/local/include/comelang2.h"
            # 682 "/usr/local/include/comelang2.h"
            if(_if_conditional46=position<0,            _if_conditional46) {
                # 683 "/usr/local/include/comelang2.h"
                position+=self->len;
            }
            # 686 "/usr/local/include/comelang2.h"
            it_40=self->head;
            # 687 "/usr/local/include/comelang2.h"
            i_41=0;
            # 694 "/usr/local/include/comelang2.h"
            while(_while_condtional6=it_40!=((void*)0),            _while_condtional6) {
                # 692 "/usr/local/include/comelang2.h"
                # 689 "/usr/local/include/comelang2.h"
                if(_if_conditional47=position==i_41,                _if_conditional47) {
                    # 690 "/usr/local/include/comelang2.h"
                    __result59__ = __result_obj__ = it_40->item;
                    return __result59__;
                }
                # 692 "/usr/local/include/comelang2.h"
                it_40=it_40->next;
                # 693 "/usr/local/include/comelang2.h"
                i_41++;
            }
            # 696 "/usr/local/include/comelang2.h"
            # 697 "/usr/local/include/comelang2.h"
            memset(&default_value_42,0,sizeof(struct tuple2$2charphsTypeph*));
            # 698 "/usr/local/include/comelang2.h"
            __result60__ = __result_obj__ = default_value_42;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_42, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result60__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional49;
int __result61__;
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "/usr/local/include/comelang2.h"
            # 364 "/usr/local/include/comelang2.h"
            if(_if_conditional49=self==((void*)0),            _if_conditional49) {
                # 365 "/usr/local/include/comelang2.h"
                __result61__ = 0;
                return __result61__;
            }
            # 367 "/usr/local/include/comelang2.h"
            __result62__ = self->len;
            return __result62__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value77;
struct list_item$1CVALUEph* litem_45;
struct CVALUE* __dec_obj25;
_Bool _if_conditional53;
void* right_value78;
struct list_item$1CVALUEph* litem_46;
struct CVALUE* __dec_obj26;
void* right_value79;
struct list_item$1CVALUEph* litem_47;
struct CVALUE* __dec_obj27;
struct list$1CVALUEph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1CVALUEph*));
right_value78 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1CVALUEph*));
right_value79 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "/usr/local/include/comelang2.h"
        # 225 "/usr/local/include/comelang2.h"
        if(_if_conditional51=self->len==0,        _if_conditional51) {
            # 226 "/usr/local/include/comelang2.h"
            litem_45=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value77=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "/usr/local/include/comelang2.h"
            litem_45->prev=((void*)0);
            # 229 "/usr/local/include/comelang2.h"
            litem_45->next=((void*)0);
            # 230 "/usr/local/include/comelang2.h"
            __dec_obj25=litem_45->item;
            litem_45->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "/usr/local/include/comelang2.h"
            self->tail=litem_45;
            # 233 "/usr/local/include/comelang2.h"
            self->head=litem_45;
        }
        else {
            # 256 "/usr/local/include/comelang2.h"
            # 235 "/usr/local/include/comelang2.h"
            if(_if_conditional53=self->len==1,            _if_conditional53) {
                # 236 "/usr/local/include/comelang2.h"
                litem_46=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value78=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "/usr/local/include/comelang2.h"
                litem_46->prev=self->head;
                # 239 "/usr/local/include/comelang2.h"
                litem_46->next=((void*)0);
                # 240 "/usr/local/include/comelang2.h"
                __dec_obj26=litem_46->item;
                litem_46->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "/usr/local/include/comelang2.h"
                self->tail=litem_46;
                # 243 "/usr/local/include/comelang2.h"
                self->head->next=litem_46;
            }
            else {
                # 246 "/usr/local/include/comelang2.h"
                litem_47=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value79=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "/usr/local/include/comelang2.h"
                litem_47->prev=self->tail;
                # 249 "/usr/local/include/comelang2.h"
                litem_47->next=((void*)0);
                # 250 "/usr/local/include/comelang2.h"
                __dec_obj27=litem_47->item;
                litem_47->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "/usr/local/include/comelang2.h"
                self->tail->next=litem_47;
                # 253 "/usr/local/include/comelang2.h"
                self->tail=litem_47;
            }
        }
        # 256 "/usr/local/include/comelang2.h"
        self->len++;
        # 258 "/usr/local/include/comelang2.h"
        __result63__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result63__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional52=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional52) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

_Bool sMethodCall_terminated(){
void* __result_obj__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    # 105 "03method.c"
    __result65__ = (_Bool)0;
    return __result65__;
}

int sMethodCall_sline(struct sMethodCall* self, struct sInfo* info){
void* __result_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    # 110 "03method.c"
    __result66__ = self->sline;
    return __result66__;
}

char* sMethodCall_sname(struct sMethodCall* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 115 "03method.c"
    __result67__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self->sname)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

struct sNode* post_expression(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional7;
_Bool _if_conditional54;
void* right_value81;
char* buf_50;
_Bool _if_conditional56;
void* right_value82;
struct list$1sNodeph* params_51;
void* right_value83;
void* right_value84;
struct sNode* _inf_value1;
struct sMethodCall* _inf_obj_value1;
void* right_value97;
struct sNode* __dec_obj35;
struct sNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&buf_50, 0, sizeof(char*));
right_value82 = (void*)0;
memset(&params_51, 0, sizeof(struct list$1sNodeph*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value97 = (void*)0;
    # 143 "03method.c"
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        # 141 "03method.c"
        # 121 "03method.c"
        if(_if_conditional54=smart_pointer$1charp_operator_derefference(info->p)==46,        _if_conditional54) {
            # 122 "03method.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 123 "03method.c"
            skip_spaces_and_lf(info);
            # 125 "03method.c"
            buf_50=(char*)come_increment_ref_count(((char*)(right_value81=parse_word(info))));
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 137 "03method.c"
            # 128 "03method.c"
            if(_if_conditional56=smart_pointer$1charp_operator_derefference(info->p)==40,            _if_conditional56) {
                # 129 "03method.c"
                params_51=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value82=parse_calling_params(info))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 131 "03method.c"
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "03method.c", 131, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sMethodCall*)(right_value84=sMethodCall_initialize((struct sMethodCall*)come_increment_ref_count(((struct sMethodCall*)(right_value83=(struct sMethodCall*)come_calloc(1, sizeof(struct sMethodCall)*(1), "03method.c", 131, "sMethodCall")))),(struct sNode*)come_increment_ref_count(node),(char*)come_increment_ref_count(buf_50),(struct list$1sNodeph*)come_increment_ref_count(params_51),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sMethodCall_finalize;
                _inf_value1->clone=(void*)sMethodCall_clone;
                _inf_value1->compile=(void*)sMethodCall_compile;
                _inf_value1->sline=(void*)sMethodCall_sline;
                _inf_value1->sname=(void*)sMethodCall_sname;
                _inf_value1->terminated=(void*)sMethodCall_terminated;
                _inf_value1->kind=(void*)sMethodCall_kind;
                __dec_obj35=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=_inf_value1)));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer2(sMethodCall_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sMethodCall_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                come_call_finalizer2(list$1sNodephp_finalize,params_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
            }
            buf_50 = come_decrement_ref_count2(buf_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 139 "03method.c"
            break;
        }
    }
    # 143 "03method.c"
    __result78__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result78__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self){
void* __result_obj__;
char* p_48;
char __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_48, 0, sizeof(char*));
            # 2097 "/usr/local/include/comelang2.h"
            p_48=self->p;
            # 2098 "/usr/local/include/comelang2.h"
            __result68__ = *p_48;
            return __result68__;
}

static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self){
void* __result_obj__;
int n_49;
_Bool _if_conditional55;
struct smart_pointer$1char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_49, 0, sizeof(int));
                # 2103 "/usr/local/include/comelang2.h"
                n_49=self->p-(char*)self->memory->buf;
                # 2104 "/usr/local/include/comelang2.h"
                self->p=((char*)self->memory->buf)+n_49+1;
                # 2112 "/usr/local/include/comelang2.h"
                # 2106 "/usr/local/include/comelang2.h"
                if(_if_conditional55=(char*)self->p>self->memory->buf+self->memory->len,                _if_conditional55) {
                    # 2107 "/usr/local/include/comelang2.h"
                    puts("out of range of smart pointer");
                    # 2108 "/usr/local/include/comelang2.h"
                    stackframe();
                    # 2109 "/usr/local/include/comelang2.h"
                    exit(1);
                }
                # 2112 "/usr/local/include/comelang2.h"
                __result69__ = __result_obj__ = self;
                return __result69__;
}

static void sMethodCall_finalize(struct sMethodCall* self){
void* __result_obj__;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sMethodCall_finalize"
                    # 0 "sMethodCall_finalize"
                    if(_if_conditional57=self!=((void*)0)&&self->obj!=((void*)0),                    _if_conditional57) {
                        # 0 "sMethodCall_finalize"
                        if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sMethodCall_finalize"
                    # 1 "sMethodCall_finalize"
                    if(_if_conditional58=self!=((void*)0)&&self->name!=((void*)0),                    _if_conditional58) {
                        # 1 "sMethodCall_finalize"
                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sMethodCall_finalize"
                    # 2 "sMethodCall_finalize"
                    if(_if_conditional59=self!=((void*)0)&&self->params!=((void*)0),                    _if_conditional59) {
                        # 2 "sMethodCall_finalize"
                        come_call_finalizer2(list$1sNodephp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sMethodCall_finalize"
                    # 3 "sMethodCall_finalize"
                    if(_if_conditional60=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional60) {
                        # 3 "sMethodCall_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sMethodCall* sMethodCall_clone(struct sMethodCall* self){
void* __result_obj__;
_Bool _if_conditional61;
struct sMethodCall* __result70__;
void* right_value85;
struct sMethodCall* result_52;
_Bool _if_conditional62;
void* right_value87;
struct sNode* __dec_obj28;
_Bool _if_conditional72;
void* right_value88;
char* __dec_obj29;
_Bool _if_conditional73;
void* right_value95;
struct list$1sNodeph* __dec_obj33;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value96;
char* __dec_obj34;
struct sMethodCall* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&result_52, 0, sizeof(struct sMethodCall*));
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
                    # 3 "sMethodCall_clone"
                    # 2 "sMethodCall_clone"
                    if(_if_conditional61=self==(void*)0,                    _if_conditional61) {
                        # 2 "sMethodCall_clone"
                        __result70__ = __result_obj__ = (void*)0;
                        return __result70__;
                    }
                    # 3 "sMethodCall_clone"
                    result_52=(struct sMethodCall*)come_increment_ref_count(((struct sMethodCall*)(right_value85=(struct sMethodCall*)come_calloc(1, sizeof(struct sMethodCall)*(1), "sMethodCall_clone", 3, "sMethodCall"))));
                    come_call_finalizer2(sMethodCall_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sMethodCall_clone"
                    # 4 "sMethodCall_clone"
                    if(_if_conditional62=self!=((void*)0)&&self->obj!=((void*)0),                    _if_conditional62) {
                        # 4 "sMethodCall_clone"
                        __dec_obj28=result_52->obj;
                        result_52->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(self->obj))));
                        if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sMethodCall_clone"
                    # 5 "sMethodCall_clone"
                    if(_if_conditional72=self!=((void*)0)&&self->name!=((void*)0),                    _if_conditional72) {
                        # 5 "sMethodCall_clone"
                        __dec_obj29=result_52->name;
                        result_52->name=(char*)come_increment_ref_count(((char*)(right_value88=string_clone(self->name))));
                        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sMethodCall_clone"
                    # 6 "sMethodCall_clone"
                    if(_if_conditional73=self!=((void*)0)&&self->params!=((void*)0),                    _if_conditional73) {
                        # 6 "sMethodCall_clone"
                        __dec_obj33=result_52->params;
                        result_52->params=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodephp_clone(self->params))));
                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 8 "sMethodCall_clone"
                    # 7 "sMethodCall_clone"
                    if(_if_conditional77=self!=((void*)0),                    _if_conditional77) {
                        # 7 "sMethodCall_clone"
                        result_52->sline=self->sline;
                    }
                    # 9 "sMethodCall_clone"
                    # 8 "sMethodCall_clone"
                    if(_if_conditional78=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional78) {
                        # 8 "sMethodCall_clone"
                        __dec_obj34=result_52->sname;
                        result_52->sname=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->sname))));
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sMethodCall_clone"
                    __result77__ = __result_obj__ = result_52;
                    come_call_finalizer2(sMethodCall_finalize,result_52, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result77__;
                    come_call_finalizer2(sMethodCall_finalize,result_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional63;
struct sNode* __result71__;
void* right_value86;
struct sNode* result_53;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_53, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional63=self==(void*)0,                            _if_conditional63) {
                                # 2 "sNode_clone"
                                __result71__ = __result_obj__ = (void*)0;
                                return __result71__;
                            }
                            # 3 "sNode_clone"
                            result_53=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value86=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value86) { right_value86 = come_decrement_ref_count2(right_value86, ((struct sNode*)right_value86)->finalize, ((struct sNode*)right_value86)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional64=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional64) {
                                # 4 "sNode_clone"
                                result_53->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                # 5 "sNode_clone"
                                result_53->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                # 6 "sNode_clone"
                                result_53->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional67=self!=((void*)0),                            _if_conditional67) {
                                # 7 "sNode_clone"
                                result_53->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional68=self!=((void*)0),                            _if_conditional68) {
                                # 8 "sNode_clone"
                                result_53->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional69=self!=((void*)0),                            _if_conditional69) {
                                # 9 "sNode_clone"
                                result_53->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional70=self!=((void*)0),                            _if_conditional70) {
                                # 10 "sNode_clone"
                                result_53->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional71=self!=((void*)0),                            _if_conditional71) {
                                # 11 "sNode_clone"
                                result_53->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result72__ = __result_obj__ = result_53;
                            if(result_53) { result_53 = come_decrement_ref_count2(result_53, ((struct sNode*)result_53)->finalize, ((struct sNode*)result_53)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result72__;
                            if(result_53) { result_53 = come_decrement_ref_count2(result_53, ((struct sNode*)result_53)->finalize, ((struct sNode*)result_53)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional74;
struct list$1sNodeph* __result73__;
void* right_value89;
void* right_value90;
struct list$1sNodeph* result_54;
struct list_item$1sNodeph* it_55;
_Bool _while_condtional8;
void* right_value94;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sNodeph*));
memset(&it_55, 0, sizeof(struct list_item$1sNodeph*));
right_value94 = (void*)0;
                            # 142 "/usr/local/include/comelang2.h"
                            # 139 "/usr/local/include/comelang2.h"
                            if(_if_conditional74=self==((void*)0),                            _if_conditional74) {
                                # 140 "/usr/local/include/comelang2.h"
                                __result73__ = __result_obj__ = ((void*)0);
                                return __result73__;
                            }
                            # 142 "/usr/local/include/comelang2.h"
                            result_54=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value90=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value89=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sNodeph"))))))));
                            come_call_finalizer2(list$1sNodephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 144 "/usr/local/include/comelang2.h"
                            it_55=self->head;
                            # 151 "/usr/local/include/comelang2.h"
                            while(_while_condtional8=it_55!=((void*)0),                            _while_condtional8) {
                                # 146 "/usr/local/include/comelang2.h"
                                list$1sNodeph_add(result_54,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(it_55->item)))));
                                if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 148 "/usr/local/include/comelang2.h"
                                it_55=it_55->next;
                            }
                            # 151 "/usr/local/include/comelang2.h"
                            __result76__ = __result_obj__ = result_54;
                            come_call_finalizer2(list$1sNodephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result76__;
                            come_call_finalizer2(list$1sNodephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 104 "/usr/local/include/comelang2.h"
                                self->head=((void*)0);
                                # 105 "/usr/local/include/comelang2.h"
                                self->tail=((void*)0);
                                # 106 "/usr/local/include/comelang2.h"
                                self->len=0;
                                # 108 "/usr/local/include/comelang2.h"
                                __result74__ = __result_obj__ = self;
                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result74__;
                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional75;
void* right_value91;
struct list_item$1sNodeph* litem_56;
struct sNode* __dec_obj30;
_Bool _if_conditional76;
void* right_value92;
struct list_item$1sNodeph* litem_57;
struct sNode* __dec_obj31;
void* right_value93;
struct list_item$1sNodeph* litem_58;
struct sNode* __dec_obj32;
struct list$1sNodeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sNodeph*));
right_value92 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sNodeph*));
right_value93 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sNodeph*));
                                    # 186 "/usr/local/include/comelang2.h"
                                    # 155 "/usr/local/include/comelang2.h"
                                    if(_if_conditional75=self->len==0,                                    _if_conditional75) {
                                        # 156 "/usr/local/include/comelang2.h"
                                        litem_56=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value91=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 158 "/usr/local/include/comelang2.h"
                                        litem_56->prev=((void*)0);
                                        # 159 "/usr/local/include/comelang2.h"
                                        litem_56->next=((void*)0);
                                        # 160 "/usr/local/include/comelang2.h"
                                        __dec_obj30=litem_56->item;
                                        litem_56->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 162 "/usr/local/include/comelang2.h"
                                        self->tail=litem_56;
                                        # 163 "/usr/local/include/comelang2.h"
                                        self->head=litem_56;
                                    }
                                    else {
                                        # 186 "/usr/local/include/comelang2.h"
                                        # 165 "/usr/local/include/comelang2.h"
                                        if(_if_conditional76=self->len==1,                                        _if_conditional76) {
                                            # 166 "/usr/local/include/comelang2.h"
                                            litem_57=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value92=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sNodeph"))));
                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 168 "/usr/local/include/comelang2.h"
                                            litem_57->prev=self->head;
                                            # 169 "/usr/local/include/comelang2.h"
                                            litem_57->next=((void*)0);
                                            # 170 "/usr/local/include/comelang2.h"
                                            __dec_obj31=litem_57->item;
                                            litem_57->item=(struct sNode*)come_increment_ref_count(item);
                                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                                            # 172 "/usr/local/include/comelang2.h"
                                            self->tail=litem_57;
                                            # 173 "/usr/local/include/comelang2.h"
                                            self->head->next=litem_57;
                                        }
                                        else {
                                            # 176 "/usr/local/include/comelang2.h"
                                            litem_58=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value93=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sNodeph"))));
                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 178 "/usr/local/include/comelang2.h"
                                            litem_58->prev=self->tail;
                                            # 179 "/usr/local/include/comelang2.h"
                                            litem_58->next=((void*)0);
                                            # 180 "/usr/local/include/comelang2.h"
                                            __dec_obj32=litem_58->item;
                                            litem_58->item=(struct sNode*)come_increment_ref_count(item);
                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                                            # 182 "/usr/local/include/comelang2.h"
                                            self->tail->next=litem_58;
                                            # 183 "/usr/local/include/comelang2.h"
                                            self->tail=litem_58;
                                        }
                                    }
                                    # 186 "/usr/local/include/comelang2.h"
                                    self->len++;
                                    # 188 "/usr/local/include/comelang2.h"
                                    __result75__ = __result_obj__ = self;
                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result75__;
                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_v3(struct sInfo* info){
void* __result_obj__;
void* right_value98;
struct sNode* node_59;
_Bool _if_conditional79;
struct sNode* __result79__;
_Bool _if_conditional80;
void* right_value99;
struct sNode* __result80__;
struct sNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&node_59, 0, sizeof(struct sNode*));
right_value99 = (void*)0;
    # 148 "03method.c"
    node_59=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=expression_v2(info))));
    if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 154 "03method.c"
    # 150 "03method.c"
    if(_if_conditional79=node_59==((void*)0),    _if_conditional79) {
        # 151 "03method.c"
        __result79__ = __result_obj__ = ((void*)0);
        if(node_59) { node_59 = come_decrement_ref_count2(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result79__;
    }
    # 160 "03method.c"
    # 154 "03method.c"
    if(_if_conditional80=smart_pointer$1charp_operator_derefference(info->p)==46,    _if_conditional80) {
        # 156 "03method.c"
        __result80__ = __result_obj__ = ((struct sNode*)(right_value99=post_expression((struct sNode*)come_increment_ref_count(node_59),info)));
        if(node_59) { node_59 = come_decrement_ref_count2(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result80__;
    }
    else {
        # 158 "03method.c"
        __result81__ = __result_obj__ = node_59;
        if(node_59) { node_59 = come_decrement_ref_count2(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result81__;
    }
    if(node_59) { node_59 = come_decrement_ref_count2(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

