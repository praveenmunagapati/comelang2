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
    struct list$1sNodeph** o2_saved_81;
    struct sNode** it_84;
    struct sClassNode** self;
    struct sInfo** info;
    struct sClass** klass_29;
    struct sClass** current_class_80;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct list$1sNodeph** o2_saved_119;
    struct sNode** it_120;
    int* n_109;
    struct sFunNode** self;
    struct sInfo** info;
    struct sMethod** method_87;
};
struct __current_stack3__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct list$1sNodeph** o2_saved_131;
    struct sNode** it_132;
    struct sKernelMethodCall** self;
    struct sInfo** info;
    struct sClass** kernel_class_124;
    struct sMethod** method_128;
    struct buffer** buf_129;
    int* n_130;
};
struct __current_stack4__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct list$1sNodeph** o2_saved_144;
    struct sNode** it_145;
    struct sClassMethodCall** self;
    struct sInfo** info;
    struct sClass** klass_139;
    struct sMethod** method_140;
    struct sMethod** initialize_method_141;
    struct buffer** buf_142;
    int* n_143;
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

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct list$1sNodeph* nodes, _Bool native_, struct sInfo* info);

static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
char* sClassNode_kind();

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void map$2charphsMethodphp_finalize(struct map$2charphsMethodph* self);
static void sMethod_finalize(struct sMethod* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct sClass* map$2charphsClassphp_operator_store_element(struct map$2charphsClassph* self, char* key, struct sClass* item);
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
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
void method_block1_02classc(struct __current_stack1__* parent);

_Bool sClassNode_terminated();

int sClassNode_sline(struct sClassNode* self, struct sInfo* info);

char* sClassNode_sname(struct sClassNode* self, struct sInfo* info);

struct sFunNode* sFunNode_initialize(struct sFunNode* self, char* name, struct list$1tuple2$2charphsTypephph* params, struct sType* result_type, struct list$1sNodeph* nodes, _Bool native_, struct sInfo* info);

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
char* sFunNode_kind();

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

static struct sMethod* map$2charphsMethodphp_operator_store_element(struct map$2charphsMethodph* self, char* key, struct sMethod* item);
static struct map$2charphsMethodph* map$2charphsMethodph_insert(struct map$2charphsMethodph* self, char* key, struct sMethod* item);
static void map$2charphsMethodph_rehash(struct map$2charphsMethodph* self);
static char* map$2charphsMethodph_begin(struct map$2charphsMethodph* self);
static _Bool map$2charphsMethodph_end(struct map$2charphsMethodph* self);
static char* map$2charphsMethodph_next(struct map$2charphsMethodph* self);
static struct sMethod* map$2charphsMethodph_at(struct map$2charphsMethodph* self, char* key, struct sMethod* default_value);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
void method_block2_02classc(struct __current_stack2__* parent);

_Bool sFunNode_terminated();

int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

struct sKernelMethodCall* sKernelMethodCall_initialize(struct sKernelMethodCall* self, char* name, struct list$1sNodeph* params, struct sInfo* info);

char* sKernelMethodCall_kind();

void check_assign_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

_Bool sKernelMethodCall_compile(struct sKernelMethodCall* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sMethod* map$2charphsMethodphp_operator_load_element(struct map$2charphsMethodph* self, char* key);
void method_block3_02classc(struct __current_stack3__* parent);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
_Bool sKernelMethodCall_terminated();

int sKernelMethodCall_sline(struct sKernelMethodCall* self, struct sInfo* info);

char* sKernelMethodCall_sname(struct sKernelMethodCall* self, struct sInfo* info);

struct sClassMethodCall* sClassMethodCall_initialize(struct sClassMethodCall* self, char* name, char* method_name, struct list$1sNodeph* params, struct sInfo* info);

char* sClassMethodCall_kind();

_Bool sClassMethodCall_compile(struct sClassMethodCall* self, struct sInfo* info);

void method_block4_02classc(struct __current_stack4__* parent);

_Bool sClassMethodCall_terminated();

int sClassMethodCall_sline(struct sClassMethodCall* self, struct sInfo* info);

char* sClassMethodCall_sname(struct sClassMethodCall* self, struct sInfo* info);

char* parse_word(struct sInfo* info);

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self);
static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self);
_Bool parse_cmp(char* word, struct sInfo* info);

static struct smart_pointer$1char* smart_pointer$1charp_operator_add(struct smart_pointer$1char* self, int value);
struct sNode* parse_class(char* name, _Bool native_, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
struct sType* parse_type(struct sInfo* info);

struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* parse_params(struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* tuple2$2list$1tuple2$2charphsTypephphphsTypeph_initialize(struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* self, struct list$1tuple2$2charphsTypephph* v1, struct sType* v2);
static void tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize(struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* self);
struct list$1sNodeph* parse_calling_params(struct sInfo* info);

struct sNode* parse_fun(char* name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
void expected_next_character(char c, struct sInfo* info);

struct sNode* string_node(char* buf, struct sInfo* info);

struct sNode* expression_v2(struct sInfo* info);

static void sClassMethodCall_finalize(struct sClassMethodCall* self);
static struct sClassMethodCall* sClassMethodCall_clone(struct sClassMethodCall* self);
static void sKernelMethodCall_finalize(struct sKernelMethodCall* self);
static struct sKernelMethodCall* sKernelMethodCall_clone(struct sKernelMethodCall* self);
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










void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    # 5 "02class.c"
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
int tmp_11;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
struct list$1CVALUEph* __result34__;
_Bool _if_conditional13;
_Bool _if_conditional20;
struct list_item$1CVALUEph* it_16;
int i_17;
_Bool _while_condtional3;
_Bool _if_conditional21;
struct list_item$1CVALUEph* prev_it_18;
_Bool _if_conditional22;
_Bool _if_conditional23;
struct list_item$1CVALUEph* it_19;
int i_20;
_Bool _while_condtional4;
_Bool _if_conditional24;
_Bool _if_conditional25;
struct list_item$1CVALUEph* prev_it_21;
struct list_item$1CVALUEph* it_22;
struct list_item$1CVALUEph* head_prev_it_23;
struct list_item$1CVALUEph* tail_it_24;
int i_25;
_Bool _while_condtional5;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
struct list_item$1CVALUEph* prev_it_26;
_Bool _if_conditional29;
_Bool _if_conditional30;
struct list$1CVALUEph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_11, 0, sizeof(int));
memset(&it_16, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_17, 0, sizeof(int));
memset(&prev_it_18, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_19, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_20, 0, sizeof(int));
memset(&prev_it_21, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_22, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_23, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_24, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_25, 0, sizeof(int));
memset(&prev_it_26, 0, sizeof(struct list_item$1CVALUEph*));
        # 467 "/usr/local/include/comelang2.h"
        # 464 "/usr/local/include/comelang2.h"
        if(_if_conditional7=head<0,        _if_conditional7) {
            # 465 "/usr/local/include/comelang2.h"
            head+=self->len;
        }
        # 471 "/usr/local/include/comelang2.h"
        # 467 "/usr/local/include/comelang2.h"
        if(_if_conditional8=tail<0,        _if_conditional8) {
            # 468 "/usr/local/include/comelang2.h"
            tail+=self->len+1;
        }
        # 477 "/usr/local/include/comelang2.h"
        # 471 "/usr/local/include/comelang2.h"
        if(_if_conditional9=head>tail,        _if_conditional9) {
            # 472 "/usr/local/include/comelang2.h"
            tmp_11=tail;
            # 473 "/usr/local/include/comelang2.h"
            tail=head;
            # 474 "/usr/local/include/comelang2.h"
            head=tmp_11;
        }
        # 481 "/usr/local/include/comelang2.h"
        # 477 "/usr/local/include/comelang2.h"
        if(_if_conditional10=head<0,        _if_conditional10) {
            # 478 "/usr/local/include/comelang2.h"
            head=0;
        }
        # 485 "/usr/local/include/comelang2.h"
        # 481 "/usr/local/include/comelang2.h"
        if(_if_conditional11=tail>self->len,        _if_conditional11) {
            # 482 "/usr/local/include/comelang2.h"
            tail=self->len;
        }
        # 489 "/usr/local/include/comelang2.h"
        # 485 "/usr/local/include/comelang2.h"
        if(_if_conditional12=head==tail,        _if_conditional12) {
            # 486 "/usr/local/include/comelang2.h"
            __result34__ = __result_obj__ = self;
            return __result34__;
        }
        # 584 "/usr/local/include/comelang2.h"
        # 489 "/usr/local/include/comelang2.h"
        if(_if_conditional13=head==0&&tail==self->len,        _if_conditional13) {
            # 491 "/usr/local/include/comelang2.h"
            list$1CVALUEph_reset(self);
        }
        else {
            # 584 "/usr/local/include/comelang2.h"
            # 493 "/usr/local/include/comelang2.h"
            if(_if_conditional20=head==0,            _if_conditional20) {
                # 494 "/usr/local/include/comelang2.h"
                it_16=self->head;
                # 495 "/usr/local/include/comelang2.h"
                i_17=0;
                # 517 "/usr/local/include/comelang2.h"
                while(_while_condtional3=it_16!=((void*)0),                _while_condtional3) {
                    # 516 "/usr/local/include/comelang2.h"
                    # 497 "/usr/local/include/comelang2.h"
                    if(_if_conditional21=i_17<tail,                    _if_conditional21) {
                        # 498 "/usr/local/include/comelang2.h"
                        prev_it_18=it_16;
                        # 500 "/usr/local/include/comelang2.h"
                        it_16=it_16->next;
                        # 501 "/usr/local/include/comelang2.h"
                        i_17++;
                        # 503 "/usr/local/include/comelang2.h"
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 505 "/usr/local/include/comelang2.h"
                        self->len--;
                    }
                    else {
                        # 516 "/usr/local/include/comelang2.h"
                        # 507 "/usr/local/include/comelang2.h"
                        if(_if_conditional22=i_17==tail,                        _if_conditional22) {
                            # 508 "/usr/local/include/comelang2.h"
                            self->head=it_16;
                            # 509 "/usr/local/include/comelang2.h"
                            self->head->prev=((void*)0);
                            # 510 "/usr/local/include/comelang2.h"
                            break;
                        }
                        else {
                            # 513 "/usr/local/include/comelang2.h"
                            it_16=it_16->next;
                            # 514 "/usr/local/include/comelang2.h"
                            i_17++;
                        }
                    }
                }
            }
            else {
                # 584 "/usr/local/include/comelang2.h"
                # 518 "/usr/local/include/comelang2.h"
                if(_if_conditional23=tail==self->len,                _if_conditional23) {
                    # 519 "/usr/local/include/comelang2.h"
                    it_19=self->head;
                    # 520 "/usr/local/include/comelang2.h"
                    i_20=0;
                    # 542 "/usr/local/include/comelang2.h"
                    while(_while_condtional4=it_19!=((void*)0),                    _while_condtional4) {
                        # 527 "/usr/local/include/comelang2.h"
                        # 522 "/usr/local/include/comelang2.h"
                        if(_if_conditional24=i_20==head,                        _if_conditional24) {
                            # 523 "/usr/local/include/comelang2.h"
                            self->tail=it_19->prev;
                            # 524 "/usr/local/include/comelang2.h"
                            self->tail->next=((void*)0);
                        }
                        # 541 "/usr/local/include/comelang2.h"
                        # 527 "/usr/local/include/comelang2.h"
                        if(_if_conditional25=i_20>=head,                        _if_conditional25) {
                            # 528 "/usr/local/include/comelang2.h"
                            prev_it_21=it_19;
                            # 530 "/usr/local/include/comelang2.h"
                            it_19=it_19->next;
                            # 531 "/usr/local/include/comelang2.h"
                            i_20++;
                            # 533 "/usr/local/include/comelang2.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 535 "/usr/local/include/comelang2.h"
                            self->len--;
                        }
                        else {
                            # 538 "/usr/local/include/comelang2.h"
                            it_19=it_19->next;
                            # 539 "/usr/local/include/comelang2.h"
                            i_20++;
                        }
                    }
                }
                else {
                    # 544 "/usr/local/include/comelang2.h"
                    it_22=self->head;
                    # 546 "/usr/local/include/comelang2.h"
                    head_prev_it_23=((void*)0);
                    # 547 "/usr/local/include/comelang2.h"
                    tail_it_24=((void*)0);
                    # 550 "/usr/local/include/comelang2.h"
                    i_25=0;
                    # 576 "/usr/local/include/comelang2.h"
                    while(_while_condtional5=it_22!=((void*)0),                    _while_condtional5) {
                        # 555 "/usr/local/include/comelang2.h"
                        # 552 "/usr/local/include/comelang2.h"
                        if(_if_conditional26=i_25==head,                        _if_conditional26) {
                            # 553 "/usr/local/include/comelang2.h"
                            head_prev_it_23=it_22->prev;
                        }
                        # 559 "/usr/local/include/comelang2.h"
                        # 555 "/usr/local/include/comelang2.h"
                        if(_if_conditional27=i_25==tail,                        _if_conditional27) {
                            # 556 "/usr/local/include/comelang2.h"
                            tail_it_24=it_22;
                        }
                        # 574 "/usr/local/include/comelang2.h"
                        # 559 "/usr/local/include/comelang2.h"
                        if(_if_conditional28=i_25>=head&&i_25<tail,                        _if_conditional28) {
                            # 561 "/usr/local/include/comelang2.h"
                            prev_it_26=it_22;
                            # 563 "/usr/local/include/comelang2.h"
                            it_22=it_22->next;
                            # 564 "/usr/local/include/comelang2.h"
                            i_25++;
                            # 566 "/usr/local/include/comelang2.h"
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 568 "/usr/local/include/comelang2.h"
                            self->len--;
                        }
                        else {
                            # 571 "/usr/local/include/comelang2.h"
                            it_22=it_22->next;
                            # 572 "/usr/local/include/comelang2.h"
                            i_25++;
                        }
                    }
                    # 579 "/usr/local/include/comelang2.h"
                    # 576 "/usr/local/include/comelang2.h"
                    if(_if_conditional29=head_prev_it_23!=((void*)0),                    _if_conditional29) {
                        # 577 "/usr/local/include/comelang2.h"
                        head_prev_it_23->next=tail_it_24;
                    }
                    # 582 "/usr/local/include/comelang2.h"
                    # 579 "/usr/local/include/comelang2.h"
                    if(_if_conditional30=tail_it_24!=((void*)0),                    _if_conditional30) {
                        # 580 "/usr/local/include/comelang2.h"
                        tail_it_24->prev=head_prev_it_23;
                    }
                }
            }
        }
        # 584 "/usr/local/include/comelang2.h"
        __result36__ = __result_obj__ = self;
        return __result36__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_12;
_Bool _while_condtional1;
struct list_item$1CVALUEph* prev_it_13;
struct list$1CVALUEph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1CVALUEph*));
                # 433 "/usr/local/include/comelang2.h"
                it_12=self->head;
                # 440 "/usr/local/include/comelang2.h"
                while(_while_condtional1=it_12!=((void*)0),                _while_condtional1) {
                    # 435 "/usr/local/include/comelang2.h"
                    prev_it_13=it_12;
                    # 436 "/usr/local/include/comelang2.h"
                    it_12=it_12->next;
                    # 437 "/usr/local/include/comelang2.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "/usr/local/include/comelang2.h"
                self->head=((void*)0);
                # 441 "/usr/local/include/comelang2.h"
                self->tail=((void*)0);
                # 443 "/usr/local/include/comelang2.h"
                self->len=0;
                # 445 "/usr/local/include/comelang2.h"
                __result35__ = __result_obj__ = self;
                return __result35__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional14) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "CVALUE_finalize"
                                # 0 "CVALUE_finalize"
                                if(_if_conditional15=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional15) {
                                    # 0 "CVALUE_finalize"
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "CVALUE_finalize"
                                # 1 "CVALUE_finalize"
                                if(_if_conditional16=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional16) {
                                    # 1 "CVALUE_finalize"
                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional17=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional17) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional19=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional19) {
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
                                                while(_while_condtional2=it_14!=((void*)0),                                                _while_condtional2) {
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
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional18) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct list$1sNodeph* nodes, _Bool native_, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct list$1sNodeph* __dec_obj13;
void* right_value49;
char* __dec_obj14;
struct sClassNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    # 20 "02class.c"
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 21 "02class.c"
    __dec_obj13=self->nodes;
    self->nodes=(struct list$1sNodeph*)come_increment_ref_count(nodes);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 22 "02class.c"
    self->native_=native_;
    # 24 "02class.c"
    self->sline=info->sline;
    # 25 "02class.c"
    __dec_obj14=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(info->sname))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 27 "02class.c"
    __result37__ = __result_obj__ = self;
    come_call_finalizer2(sClassNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result37__;
    come_call_finalizer2(sClassNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_27;
_Bool _while_condtional6;
struct list_item$1sNodeph* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_28, 0, sizeof(struct list_item$1sNodeph*));
                # 123 "/usr/local/include/comelang2.h"
                it_27=self->head;
                # 129 "/usr/local/include/comelang2.h"
                while(_while_condtional6=it_27!=((void*)0),                _while_condtional6) {
                    # 125 "/usr/local/include/comelang2.h"
                    prev_it_28=it_27;
                    # 126 "/usr/local/include/comelang2.h"
                    it_27=it_27->next;
                    # 127 "/usr/local/include/comelang2.h"
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sNodephp_finalize"
                        # 0 "list_item$1sNodephp_finalize"
                        if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional33) {
                            # 0 "list_item$1sNodephp_finalize"
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

char* sClassNode_kind(){
void* __result_obj__;
void* right_value50;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    # 32 "02class.c"
    __result38__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sClassNode")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value51;
void* right_value52;
void* right_value53;
void* right_value54;
struct sClass* klass_29;
void* right_value55;
void* right_value62;
struct sClass* current_class_80;
struct list$1sNodeph* o2_saved_81;
struct sNode* it_84;
struct __current_stack1__ __current_stack1__;
_Bool _if_conditional102;
void* right_value63;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&klass_29, 0, sizeof(struct sClass*));
right_value55 = (void*)0;
right_value62 = (void*)0;
memset(&current_class_80, 0, sizeof(struct sClass*));
memset(&o2_saved_81, 0, sizeof(struct list$1sNodeph*));
memset(&it_84, 0, sizeof(struct sNode*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value63 = (void*)0;
    # 41 "02class.c"
    # 37 "02class.c"
    if(_if_conditional35=!self->native_,    _if_conditional35) {
        # 38 "02class.c"
        add_come_code(info,((char*)(right_value52=xsprintf("class \%s\n",((char*)(right_value51=string_to_string(self->name)))))));
        right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 41 "02class.c"
    klass_29=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value54=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value53=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02class.c", 41, "sClass")))),self->name))));
    come_call_finalizer2(sClass_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 43 "02class.c"
    ((struct sClass*)(right_value62=map$2charphsClassphp_operator_store_element(info->classes,(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(self->name)))),(struct sClass*)come_increment_ref_count(klass_29))));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 45 "02class.c"
    current_class_80=info->current_class;
    # 46 "02class.c"
    info->current_class=klass_29;
    # 48 "02class.c"
    info->nest++;
    # 56 "02class.c"
    for(    o2_saved_81=(struct list$1sNodeph*)come_increment_ref_count((self->nodes)),it_84=list$1sNodeph_begin((o2_saved_81));    !list$1sNodeph_end((o2_saved_81));    it_84=list$1sNodeph_next((o2_saved_81))    ){
        # 54 "02class.c"
        __current_stack1__.o2_saved_81 = &o2_saved_81;
        __current_stack1__.it_84 = &it_84;
        __current_stack1__.self = &self;
        __current_stack1__.info = &info;
        __current_stack1__.klass_29 = &klass_29;
        __current_stack1__.current_class_80 = &current_class_80;
        bool_catch(it_84->compile(it_84->_protocol_obj,info),&__current_stack1__,(void*)method_block1_02classc);
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
        # 54 "02class.c"
        add_last_code_to_source(info);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 56 "02class.c"
    info->nest--;
    # 61 "02class.c"
    # 57 "02class.c"
    if(_if_conditional102=!self->native_,    _if_conditional102) {
        # 58 "02class.c"
        add_come_code(info,((char*)(right_value63=xsprintf("end\n"))));
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 61 "02class.c"
    info->current_class=current_class_80;
    # 63 "02class.c"
    __result71__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result71__;
    come_call_finalizer2(sClass_finalize,klass_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional48;
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
        if(_if_conditional48=self!=((void*)0)&&self->mClassMethods!=((void*)0),        _if_conditional48) {
            # 2 "sClass_finalize"
            come_call_finalizer2(map$2charphsMethodphp_finalize,self->mClassMethods, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void map$2charphsMethodphp_finalize(struct map$2charphsMethodph* self){
void* __result_obj__;
int i_30;
_Bool _if_conditional38;
_Bool _if_conditional39;
int i_33;
_Bool _if_conditional46;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_30, 0, sizeof(int));
memset(&i_33, 0, sizeof(int));
                # 1137 "/usr/local/include/comelang2.h"
                for(                i_30=0;                i_30<self->size;                i_30++                ){
                    # 1136 "/usr/local/include/comelang2.h"
                    # 1131 "/usr/local/include/comelang2.h"
                    if(_if_conditional38=self->item_existance[i_30],                    _if_conditional38) {
                        # 1135 "/usr/local/include/comelang2.h"
                        # 1132 "/usr/local/include/comelang2.h"
                        if(_if_conditional39=1,                        _if_conditional39) {
                            # 1133 "/usr/local/include/comelang2.h"
                            come_call_finalizer2(sMethod_finalize,self->items[i_30], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1137 "/usr/local/include/comelang2.h"
                come_free((char*)self->items);
                # 1146 "/usr/local/include/comelang2.h"
                for(                i_33=0;                i_33<self->size;                i_33++                ){
                    # 1145 "/usr/local/include/comelang2.h"
                    # 1140 "/usr/local/include/comelang2.h"
                    if(_if_conditional46=self->item_existance[i_33],                    _if_conditional46) {
                        # 1144 "/usr/local/include/comelang2.h"
                        # 1141 "/usr/local/include/comelang2.h"
                        if(_if_conditional47=1,                        _if_conditional47) {
                            # 1142 "/usr/local/include/comelang2.h"
                            self->keys[i_33] = come_decrement_ref_count2(self->keys[i_33], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void sMethod_finalize(struct sMethod* self){
void* __result_obj__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sMethod_finalize"
                                # 0 "sMethod_finalize"
                                if(_if_conditional40=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional40) {
                                    # 0 "sMethod_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sMethod_finalize"
                                # 1 "sMethod_finalize"
                                if(_if_conditional41=self!=((void*)0)&&self->mParams!=((void*)0),                                _if_conditional41) {
                                    # 1 "sMethod_finalize"
                                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mParams, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sMethod_finalize"
                                # 2 "sMethod_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional45) {
                                    # 2 "sMethod_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_31;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        # 123 "/usr/local/include/comelang2.h"
                                        it_31=self->head;
                                        # 129 "/usr/local/include/comelang2.h"
                                        while(_while_condtional7=it_31!=((void*)0),                                        _while_condtional7) {
                                            # 125 "/usr/local/include/comelang2.h"
                                            prev_it_32=it_31;
                                            # 126 "/usr/local/include/comelang2.h"
                                            it_31=it_31->next;
                                            # 127 "/usr/local/include/comelang2.h"
                                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                if(_if_conditional42=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional42) {
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                        # 0 "tuple2$2charphsTypephp_finalize"
                                                        if(_if_conditional43=self!=((void*)0)&&self->v1!=((void*)0),                                                        _if_conditional43) {
                                                            # 0 "tuple2$2charphsTypephp_finalize"
                                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "tuple2$2charphsTypephp_finalize"
                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                        if(_if_conditional44=self!=((void*)0)&&self->v2!=((void*)0),                                                        _if_conditional44) {
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_34;
_Bool _while_condtional8;
struct list_item$1charp* prev_it_35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_34, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_35, 0, sizeof(struct list_item$1charp*));
                    # 123 "/usr/local/include/comelang2.h"
                    it_34=self->head;
                    # 129 "/usr/local/include/comelang2.h"
                    while(_while_condtional8=it_34!=((void*)0),                    _while_condtional8) {
                        # 125 "/usr/local/include/comelang2.h"
                        prev_it_35=it_34;
                        # 126 "/usr/local/include/comelang2.h"
                        it_34=it_34->next;
                        # 127 "/usr/local/include/comelang2.h"
                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sClass* map$2charphsClassphp_operator_store_element(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
struct sClass* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1584 "/usr/local/include/comelang2.h"
        map$2charphsClassph_insert(self,(char*)come_increment_ref_count(key),(struct sClass*)come_increment_ref_count(item));
        # 1586 "/usr/local/include/comelang2.h"
        __result63__ = __result_obj__ = item;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result63__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional49;
_Bool _if_conditional61;
_Bool _if_conditional62;
unsigned int hash_53;
unsigned int it_54;
_Bool _while_condtional11;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool same_key_exist_71;
char* it2_74;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct map$2charphsClassph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_53, 0, sizeof(unsigned int));
memset(&it_54, 0, sizeof(unsigned int));
memset(&same_key_exist_71, 0, sizeof(_Bool));
memset(&it2_74, 0, sizeof(char*));
            # 1393 "/usr/local/include/comelang2.h"
            # 1390 "/usr/local/include/comelang2.h"
            if(_if_conditional49=self->len*10>=self->size,            _if_conditional49) {
                # 1391 "/usr/local/include/comelang2.h"
                map$2charphsClassph_rehash(self);
            }
            # 1400 "/usr/local/include/comelang2.h"
            # 1393 "/usr/local/include/comelang2.h"
            if(_if_conditional61=1,            _if_conditional61) {
                # 1399 "/usr/local/include/comelang2.h"
                # 1394 "/usr/local/include/comelang2.h"
                if(_if_conditional62=key==((void*)0),                _if_conditional62) {
                    # 1395 "/usr/local/include/comelang2.h"
                    stackframe();
                    # 1396 "/usr/local/include/comelang2.h"
                    puts("key is null");
                    # 1397 "/usr/local/include/comelang2.h"
                    exit(2);
                }
            }
            # 1400 "/usr/local/include/comelang2.h"
            hash_53=string_get_hash_key(key)%self->size;
            # 1401 "/usr/local/include/comelang2.h"
            it_54=hash_53;
            # 1459 "/usr/local/include/comelang2.h"
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                # 1457 "/usr/local/include/comelang2.h"
                # 1404 "/usr/local/include/comelang2.h"
                if(_if_conditional63=self->item_existance[it_54],                _if_conditional63) {
                    # 1427 "/usr/local/include/comelang2.h"
                    # 1406 "/usr/local/include/comelang2.h"
                    if(_if_conditional64=string_equals(self->keys[it_54],key),                    _if_conditional64) {
                        # 1417 "/usr/local/include/comelang2.h"
                        # 1408 "/usr/local/include/comelang2.h"
                        if(_if_conditional65=1,                        _if_conditional65) {
                            # 1409 "/usr/local/include/comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_54]);
                            # 1410 "/usr/local/include/comelang2.h"
                            self->keys[it_54] = come_decrement_ref_count2(self->keys[it_54], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1411 "/usr/local/include/comelang2.h"
                            self->keys[it_54]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1414 "/usr/local/include/comelang2.h"
                            list$1charp_remove(self->key_list,self->keys[it_54]);
                            # 1415 "/usr/local/include/comelang2.h"
                            self->keys[it_54]=key;
                        }
                        # 1424 "/usr/local/include/comelang2.h"
                        # 1417 "/usr/local/include/comelang2.h"
                        if(_if_conditional85=1,                        _if_conditional85) {
                            # 1418 "/usr/local/include/comelang2.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_54], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1419 "/usr/local/include/comelang2.h"
                            self->items[it_54]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1422 "/usr/local/include/comelang2.h"
                            self->items[it_54]=item;
                        }
                        # 1424 "/usr/local/include/comelang2.h"
                        break;
                    }
                    # 1427 "/usr/local/include/comelang2.h"
                    it_54++;
                    # 1437 "/usr/local/include/comelang2.h"
                    # 1429 "/usr/local/include/comelang2.h"
                    if(_if_conditional86=it_54>=self->size,                    _if_conditional86) {
                        # 1430 "/usr/local/include/comelang2.h"
                        it_54=0;
                    }
                    else {
                        # 1437 "/usr/local/include/comelang2.h"
                        # 1432 "/usr/local/include/comelang2.h"
                        if(_if_conditional87=it_54==hash_53,                        _if_conditional87) {
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
                    self->item_existance[it_54]=(_Bool)1;
                    # 1446 "/usr/local/include/comelang2.h"
                    # 1440 "/usr/local/include/comelang2.h"
                    if(_if_conditional88=1,                    _if_conditional88) {
                        # 1441 "/usr/local/include/comelang2.h"
                        self->keys[it_54]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1444 "/usr/local/include/comelang2.h"
                        self->keys[it_54]=key;
                    }
                    # 1453 "/usr/local/include/comelang2.h"
                    # 1446 "/usr/local/include/comelang2.h"
                    if(_if_conditional89=1,                    _if_conditional89) {
                        # 1447 "/usr/local/include/comelang2.h"
                        self->items[it_54]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1450 "/usr/local/include/comelang2.h"
                        self->items[it_54]=item;
                    }
                    # 1453 "/usr/local/include/comelang2.h"
                    self->len++;
                    # 1455 "/usr/local/include/comelang2.h"
                    break;
                }
            }
            # 1459 "/usr/local/include/comelang2.h"
            same_key_exist_71=(_Bool)0;
            # 1468 "/usr/local/include/comelang2.h"
            for(            it2_74=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_74=list$1charp_next(self->key_list)            ){
                # 1466 "/usr/local/include/comelang2.h"
                # 1462 "/usr/local/include/comelang2.h"
                if(_if_conditional94=string_equals(it2_74,key),                _if_conditional94) {
                    # 1463 "/usr/local/include/comelang2.h"
                    puts("SAME KEY");
                    # 1464 "/usr/local/include/comelang2.h"
                    same_key_exist_71=(_Bool)1;
                }
            }
            # 1472 "/usr/local/include/comelang2.h"
            # 1468 "/usr/local/include/comelang2.h"
            if(_if_conditional95=!same_key_exist_71,            _if_conditional95) {
                # 1469 "/usr/local/include/comelang2.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1472 "/usr/local/include/comelang2.h"
            __result62__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result62__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_36;
void* right_value56;
char** keys_37;
void* right_value57;
struct sClass** items_38;
void* right_value58;
_Bool* item_existance_39;
int len_40;
char* it_43;
struct sClass* default_value_46;
struct sClass* it2_49;
unsigned int hash_50;
int n_51;
_Bool _while_condtional10;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
struct sClass* default_value_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_36, 0, sizeof(int));
right_value56 = (void*)0;
memset(&keys_37, 0, sizeof(char**));
right_value57 = (void*)0;
memset(&items_38, 0, sizeof(struct sClass**));
right_value58 = (void*)0;
memset(&item_existance_39, 0, sizeof(_Bool*));
memset(&len_40, 0, sizeof(int));
memset(&it_43, 0, sizeof(char*));
memset(&default_value_46, 0, sizeof(struct sClass*));
memset(&it2_49, 0, sizeof(struct sClass*));
memset(&hash_50, 0, sizeof(unsigned int));
memset(&n_51, 0, sizeof(int));
memset(&default_value_52, 0, sizeof(struct sClass*));
                    # 1337 "/usr/local/include/comelang2.h"
                    size_36=self->size*10;
                    # 1338 "/usr/local/include/comelang2.h"
                    keys_37=(char**)come_increment_ref_count(((char**)(right_value56=(char**)come_calloc(1, sizeof(char*)*(1*(size_36)), "/usr/local/include/comelang2.h", 1338, "char*%"))));
                    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "/usr/local/include/comelang2.h"
                    items_38=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value57=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_36)), "/usr/local/include/comelang2.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "/usr/local/include/comelang2.h"
                    item_existance_39=(_Bool*)come_increment_ref_count(((_Bool*)(right_value58=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_36)), "/usr/local/include/comelang2.h", 1340, "bool"))));
                    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "/usr/local/include/comelang2.h"
                    len_40=0;
                    # 1377 "/usr/local/include/comelang2.h"
                    for(                    it_43=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_43=map$2charphsClassph_next(self)                    ){
                        # 1345 "/usr/local/include/comelang2.h"
                        # 1346 "/usr/local/include/comelang2.h"
                        memset(&default_value_46,0,sizeof(struct sClass*));
                        # 1347 "/usr/local/include/comelang2.h"
                        it2_49=map$2charphsClassph_at(self,it_43,default_value_46);
                        # 1348 "/usr/local/include/comelang2.h"
                        hash_50=string_get_hash_key(it_43)%size_36;
                        # 1349 "/usr/local/include/comelang2.h"
                        n_51=hash_50;
                        # 1375 "/usr/local/include/comelang2.h"
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            # 1374 "/usr/local/include/comelang2.h"
                            # 1352 "/usr/local/include/comelang2.h"
                            if(_if_conditional58=item_existance_39[n_51],                            _if_conditional58) {
                                # 1354 "/usr/local/include/comelang2.h"
                                n_51++;
                                # 1364 "/usr/local/include/comelang2.h"
                                # 1356 "/usr/local/include/comelang2.h"
                                if(_if_conditional59=n_51>=size_36,                                _if_conditional59) {
                                    # 1357 "/usr/local/include/comelang2.h"
                                    n_51=0;
                                }
                                else {
                                    # 1364 "/usr/local/include/comelang2.h"
                                    # 1359 "/usr/local/include/comelang2.h"
                                    if(_if_conditional60=n_51==hash_50,                                    _if_conditional60) {
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
                                item_existance_39[n_51]=(_Bool)1;
                                # 1367 "/usr/local/include/comelang2.h"
                                keys_37[n_51]=it_43;
                                # 1368 "/usr/local/include/comelang2.h"
                                # 1369 "/usr/local/include/comelang2.h"
                                items_38[n_51]=map$2charphsClassph_at(self,it_43,default_value_52);
                                # 1371 "/usr/local/include/comelang2.h"
                                len_40++;
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
                    self->keys=keys_37;
                    # 1382 "/usr/local/include/comelang2.h"
                    self->items=items_38;
                    # 1383 "/usr/local/include/comelang2.h"
                    self->item_existance=item_existance_39;
                    # 1385 "/usr/local/include/comelang2.h"
                    self->size=size_36;
                    # 1386 "/usr/local/include/comelang2.h"
                    self->len=len_40;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional50;
char* result_41;
char* __result39__;
_Bool _if_conditional51;
char* __result40__;
char* result_42;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_41, 0, sizeof(char*));
memset(&result_42, 0, sizeof(char*));
                        # 1304 "/usr/local/include/comelang2.h"
                        # 1299 "/usr/local/include/comelang2.h"
                        if(_if_conditional50=self==((void*)0),                        _if_conditional50) {
                            # 1300 "/usr/local/include/comelang2.h"
                            # 1301 "/usr/local/include/comelang2.h"
                            memset(&result_41,0,sizeof(char*));
                            # 1302 "/usr/local/include/comelang2.h"
                            __result39__ = __result_obj__ = result_41;
                            return __result39__;
                        }
                        # 1304 "/usr/local/include/comelang2.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "/usr/local/include/comelang2.h"
                        # 1306 "/usr/local/include/comelang2.h"
                        if(self->key_list->it) {
                            # 1307 "/usr/local/include/comelang2.h"
                            __result40__ = __result_obj__ = self->key_list->it->item;
                            return __result40__;
                        }
                        # 1310 "/usr/local/include/comelang2.h"
                        # 1311 "/usr/local/include/comelang2.h"
                        memset(&result_42,0,sizeof(char*));
                        # 1312 "/usr/local/include/comelang2.h"
                        __result41__ = __result_obj__ = result_42;
                        return __result41__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "/usr/local/include/comelang2.h"
                        __result42__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result42__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional52;
char* result_44;
char* __result43__;
_Bool _if_conditional53;
char* __result44__;
char* result_45;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
memset(&result_45, 0, sizeof(char*));
                        # 1321 "/usr/local/include/comelang2.h"
                        # 1316 "/usr/local/include/comelang2.h"
                        if(_if_conditional52=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional52) {
                            # 1317 "/usr/local/include/comelang2.h"
                            # 1318 "/usr/local/include/comelang2.h"
                            memset(&result_44,0,sizeof(char*));
                            # 1319 "/usr/local/include/comelang2.h"
                            __result43__ = __result_obj__ = result_44;
                            return __result43__;
                        }
                        # 1321 "/usr/local/include/comelang2.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "/usr/local/include/comelang2.h"
                        # 1323 "/usr/local/include/comelang2.h"
                        if(self->key_list->it) {
                            # 1324 "/usr/local/include/comelang2.h"
                            __result44__ = __result_obj__ = self->key_list->it->item;
                            return __result44__;
                        }
                        # 1327 "/usr/local/include/comelang2.h"
                        # 1328 "/usr/local/include/comelang2.h"
                        memset(&result_45,0,sizeof(char*));
                        # 1329 "/usr/local/include/comelang2.h"
                        __result45__ = __result_obj__ = result_45;
                        return __result45__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional9;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sClass* __result46__;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sClass* __result47__;
struct sClass* __result48__;
struct sClass* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
                            # 1226 "/usr/local/include/comelang2.h"
                            hash_47=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "/usr/local/include/comelang2.h"
                            it_48=hash_47;
                            # 1251 "/usr/local/include/comelang2.h"
                            while(_while_condtional9=(_Bool)1,                            _while_condtional9) {
                                # 1249 "/usr/local/include/comelang2.h"
                                # 1230 "/usr/local/include/comelang2.h"
                                if(_if_conditional54=self->item_existance[it_48],                                _if_conditional54) {
                                    # 1237 "/usr/local/include/comelang2.h"
                                    # 1232 "/usr/local/include/comelang2.h"
                                    if(_if_conditional55=string_equals(self->keys[it_48],key),                                    _if_conditional55) {
                                        # 1234 "/usr/local/include/comelang2.h"
                                        __result46__ = __result_obj__ = self->items[it_48];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result46__;
                                    }
                                    # 1237 "/usr/local/include/comelang2.h"
                                    it_48++;
                                    # 1245 "/usr/local/include/comelang2.h"
                                    # 1239 "/usr/local/include/comelang2.h"
                                    if(_if_conditional56=it_48>=self->size,                                    _if_conditional56) {
                                        # 1240 "/usr/local/include/comelang2.h"
                                        it_48=0;
                                    }
                                    else {
                                        # 1245 "/usr/local/include/comelang2.h"
                                        # 1242 "/usr/local/include/comelang2.h"
                                        if(_if_conditional57=it_48==hash_47,                                        _if_conditional57) {
                                            # 1243 "/usr/local/include/comelang2.h"
                                            __result47__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result47__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "/usr/local/include/comelang2.h"
                                    __result48__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result48__;
                                }
                            }
                            # 1251 "/usr/local/include/comelang2.h"
                            __result49__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result49__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_55;
struct list_item$1charp* it_56;
_Bool _while_condtional12;
_Bool _if_conditional66;
struct list$1charp* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_55, 0, sizeof(int));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
                                # 448 "/usr/local/include/comelang2.h"
                                it2_55=0;
                                # 449 "/usr/local/include/comelang2.h"
                                it_56=self->head;
                                # 460 "/usr/local/include/comelang2.h"
                                while(_while_condtional12=it_56!=((void*)0),                                _while_condtional12) {
                                    # 455 "/usr/local/include/comelang2.h"
                                    # 451 "/usr/local/include/comelang2.h"
                                    if(_if_conditional66=string_equals(it_56->item,item),                                    _if_conditional66) {
                                        # 452 "/usr/local/include/comelang2.h"
                                        list$1charp_delete(self,it2_55,it2_55+1);
                                        # 453 "/usr/local/include/comelang2.h"
                                        break;
                                    }
                                    # 455 "/usr/local/include/comelang2.h"
                                    it2_55++;
                                    # 457 "/usr/local/include/comelang2.h"
                                    it_56=it_56->next;
                                }
                                # 460 "/usr/local/include/comelang2.h"
                                __result53__ = __result_obj__ = self;
                                return __result53__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
int tmp_57;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
struct list$1charp* __result50__;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct list_item$1charp* it_60;
int i_61;
_Bool _while_condtional14;
_Bool _if_conditional75;
struct list_item$1charp* prev_it_62;
_Bool _if_conditional76;
_Bool _if_conditional77;
struct list_item$1charp* it_63;
int i_64;
_Bool _while_condtional15;
_Bool _if_conditional78;
_Bool _if_conditional79;
struct list_item$1charp* prev_it_65;
struct list_item$1charp* it_66;
struct list_item$1charp* head_prev_it_67;
struct list_item$1charp* tail_it_68;
int i_69;
_Bool _while_condtional16;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
struct list_item$1charp* prev_it_70;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct list$1charp* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_57, 0, sizeof(int));
memset(&it_60, 0, sizeof(struct list_item$1charp*));
memset(&i_61, 0, sizeof(int));
memset(&prev_it_62, 0, sizeof(struct list_item$1charp*));
memset(&it_63, 0, sizeof(struct list_item$1charp*));
memset(&i_64, 0, sizeof(int));
memset(&prev_it_65, 0, sizeof(struct list_item$1charp*));
memset(&it_66, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_67, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_68, 0, sizeof(struct list_item$1charp*));
memset(&i_69, 0, sizeof(int));
memset(&prev_it_70, 0, sizeof(struct list_item$1charp*));
                                            # 467 "/usr/local/include/comelang2.h"
                                            # 464 "/usr/local/include/comelang2.h"
                                            if(_if_conditional67=head<0,                                            _if_conditional67) {
                                                # 465 "/usr/local/include/comelang2.h"
                                                head+=self->len;
                                            }
                                            # 471 "/usr/local/include/comelang2.h"
                                            # 467 "/usr/local/include/comelang2.h"
                                            if(_if_conditional68=tail<0,                                            _if_conditional68) {
                                                # 468 "/usr/local/include/comelang2.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "/usr/local/include/comelang2.h"
                                            # 471 "/usr/local/include/comelang2.h"
                                            if(_if_conditional69=head>tail,                                            _if_conditional69) {
                                                # 472 "/usr/local/include/comelang2.h"
                                                tmp_57=tail;
                                                # 473 "/usr/local/include/comelang2.h"
                                                tail=head;
                                                # 474 "/usr/local/include/comelang2.h"
                                                head=tmp_57;
                                            }
                                            # 481 "/usr/local/include/comelang2.h"
                                            # 477 "/usr/local/include/comelang2.h"
                                            if(_if_conditional70=head<0,                                            _if_conditional70) {
                                                # 478 "/usr/local/include/comelang2.h"
                                                head=0;
                                            }
                                            # 485 "/usr/local/include/comelang2.h"
                                            # 481 "/usr/local/include/comelang2.h"
                                            if(_if_conditional71=tail>self->len,                                            _if_conditional71) {
                                                # 482 "/usr/local/include/comelang2.h"
                                                tail=self->len;
                                            }
                                            # 489 "/usr/local/include/comelang2.h"
                                            # 485 "/usr/local/include/comelang2.h"
                                            if(_if_conditional72=head==tail,                                            _if_conditional72) {
                                                # 486 "/usr/local/include/comelang2.h"
                                                __result50__ = __result_obj__ = self;
                                                return __result50__;
                                            }
                                            # 584 "/usr/local/include/comelang2.h"
                                            # 489 "/usr/local/include/comelang2.h"
                                            if(_if_conditional73=head==0&&tail==self->len,                                            _if_conditional73) {
                                                # 491 "/usr/local/include/comelang2.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "/usr/local/include/comelang2.h"
                                                # 493 "/usr/local/include/comelang2.h"
                                                if(_if_conditional74=head==0,                                                _if_conditional74) {
                                                    # 494 "/usr/local/include/comelang2.h"
                                                    it_60=self->head;
                                                    # 495 "/usr/local/include/comelang2.h"
                                                    i_61=0;
                                                    # 517 "/usr/local/include/comelang2.h"
                                                    while(_while_condtional14=it_60!=((void*)0),                                                    _while_condtional14) {
                                                        # 516 "/usr/local/include/comelang2.h"
                                                        # 497 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional75=i_61<tail,                                                        _if_conditional75) {
                                                            # 498 "/usr/local/include/comelang2.h"
                                                            prev_it_62=it_60;
                                                            # 500 "/usr/local/include/comelang2.h"
                                                            it_60=it_60->next;
                                                            # 501 "/usr/local/include/comelang2.h"
                                                            i_61++;
                                                            # 503 "/usr/local/include/comelang2.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "/usr/local/include/comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "/usr/local/include/comelang2.h"
                                                            # 507 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional76=i_61==tail,                                                            _if_conditional76) {
                                                                # 508 "/usr/local/include/comelang2.h"
                                                                self->head=it_60;
                                                                # 509 "/usr/local/include/comelang2.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "/usr/local/include/comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "/usr/local/include/comelang2.h"
                                                                it_60=it_60->next;
                                                                # 514 "/usr/local/include/comelang2.h"
                                                                i_61++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "/usr/local/include/comelang2.h"
                                                    # 518 "/usr/local/include/comelang2.h"
                                                    if(_if_conditional77=tail==self->len,                                                    _if_conditional77) {
                                                        # 519 "/usr/local/include/comelang2.h"
                                                        it_63=self->head;
                                                        # 520 "/usr/local/include/comelang2.h"
                                                        i_64=0;
                                                        # 542 "/usr/local/include/comelang2.h"
                                                        while(_while_condtional15=it_63!=((void*)0),                                                        _while_condtional15) {
                                                            # 527 "/usr/local/include/comelang2.h"
                                                            # 522 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional78=i_64==head,                                                            _if_conditional78) {
                                                                # 523 "/usr/local/include/comelang2.h"
                                                                self->tail=it_63->prev;
                                                                # 524 "/usr/local/include/comelang2.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "/usr/local/include/comelang2.h"
                                                            # 527 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional79=i_64>=head,                                                            _if_conditional79) {
                                                                # 528 "/usr/local/include/comelang2.h"
                                                                prev_it_65=it_63;
                                                                # 530 "/usr/local/include/comelang2.h"
                                                                it_63=it_63->next;
                                                                # 531 "/usr/local/include/comelang2.h"
                                                                i_64++;
                                                                # 533 "/usr/local/include/comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "/usr/local/include/comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "/usr/local/include/comelang2.h"
                                                                it_63=it_63->next;
                                                                # 539 "/usr/local/include/comelang2.h"
                                                                i_64++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "/usr/local/include/comelang2.h"
                                                        it_66=self->head;
                                                        # 546 "/usr/local/include/comelang2.h"
                                                        head_prev_it_67=((void*)0);
                                                        # 547 "/usr/local/include/comelang2.h"
                                                        tail_it_68=((void*)0);
                                                        # 550 "/usr/local/include/comelang2.h"
                                                        i_69=0;
                                                        # 576 "/usr/local/include/comelang2.h"
                                                        while(_while_condtional16=it_66!=((void*)0),                                                        _while_condtional16) {
                                                            # 555 "/usr/local/include/comelang2.h"
                                                            # 552 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional80=i_69==head,                                                            _if_conditional80) {
                                                                # 553 "/usr/local/include/comelang2.h"
                                                                head_prev_it_67=it_66->prev;
                                                            }
                                                            # 559 "/usr/local/include/comelang2.h"
                                                            # 555 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional81=i_69==tail,                                                            _if_conditional81) {
                                                                # 556 "/usr/local/include/comelang2.h"
                                                                tail_it_68=it_66;
                                                            }
                                                            # 574 "/usr/local/include/comelang2.h"
                                                            # 559 "/usr/local/include/comelang2.h"
                                                            if(_if_conditional82=i_69>=head&&i_69<tail,                                                            _if_conditional82) {
                                                                # 561 "/usr/local/include/comelang2.h"
                                                                prev_it_70=it_66;
                                                                # 563 "/usr/local/include/comelang2.h"
                                                                it_66=it_66->next;
                                                                # 564 "/usr/local/include/comelang2.h"
                                                                i_69++;
                                                                # 566 "/usr/local/include/comelang2.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "/usr/local/include/comelang2.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "/usr/local/include/comelang2.h"
                                                                it_66=it_66->next;
                                                                # 572 "/usr/local/include/comelang2.h"
                                                                i_69++;
                                                            }
                                                        }
                                                        # 579 "/usr/local/include/comelang2.h"
                                                        # 576 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional83=head_prev_it_67!=((void*)0),                                                        _if_conditional83) {
                                                            # 577 "/usr/local/include/comelang2.h"
                                                            head_prev_it_67->next=tail_it_68;
                                                        }
                                                        # 582 "/usr/local/include/comelang2.h"
                                                        # 579 "/usr/local/include/comelang2.h"
                                                        if(_if_conditional84=tail_it_68!=((void*)0),                                                        _if_conditional84) {
                                                            # 580 "/usr/local/include/comelang2.h"
                                                            tail_it_68->prev=head_prev_it_67;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "/usr/local/include/comelang2.h"
                                            __result52__ = __result_obj__ = self;
                                            return __result52__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_58;
_Bool _while_condtional13;
struct list_item$1charp* prev_it_59;
struct list$1charp* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "/usr/local/include/comelang2.h"
                                                    it_58=self->head;
                                                    # 440 "/usr/local/include/comelang2.h"
                                                    while(_while_condtional13=it_58!=((void*)0),                                                    _while_condtional13) {
                                                        # 435 "/usr/local/include/comelang2.h"
                                                        prev_it_59=it_58;
                                                        # 436 "/usr/local/include/comelang2.h"
                                                        it_58=it_58->next;
                                                        # 437 "/usr/local/include/comelang2.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "/usr/local/include/comelang2.h"
                                                    self->head=((void*)0);
                                                    # 441 "/usr/local/include/comelang2.h"
                                                    self->tail=((void*)0);
                                                    # 443 "/usr/local/include/comelang2.h"
                                                    self->len=0;
                                                    # 445 "/usr/local/include/comelang2.h"
                                                    __result51__ = __result_obj__ = self;
                                                    return __result51__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional90;
char* result_72;
char* __result54__;
_Bool _if_conditional91;
char* __result55__;
char* result_73;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                # 290 "/usr/local/include/comelang2.h"
                # 285 "/usr/local/include/comelang2.h"
                if(_if_conditional90=self==((void*)0),                _if_conditional90) {
                    # 286 "/usr/local/include/comelang2.h"
                    # 287 "/usr/local/include/comelang2.h"
                    memset(&result_72,0,sizeof(char*));
                    # 288 "/usr/local/include/comelang2.h"
                    __result54__ = __result_obj__ = result_72;
                    return __result54__;
                }
                # 290 "/usr/local/include/comelang2.h"
                self->it=self->head;
                # 296 "/usr/local/include/comelang2.h"
                # 292 "/usr/local/include/comelang2.h"
                if(self->it) {
                    # 293 "/usr/local/include/comelang2.h"
                    __result55__ = __result_obj__ = self->it->item;
                    return __result55__;
                }
                # 296 "/usr/local/include/comelang2.h"
                # 297 "/usr/local/include/comelang2.h"
                memset(&result_73,0,sizeof(char*));
                # 298 "/usr/local/include/comelang2.h"
                __result56__ = __result_obj__ = result_73;
                return __result56__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "/usr/local/include/comelang2.h"
                __result57__ = self==((void*)0)||self->it==((void*)0);
                return __result57__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional92;
char* result_75;
char* __result58__;
_Bool _if_conditional93;
char* __result59__;
char* result_76;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_75, 0, sizeof(char*));
memset(&result_76, 0, sizeof(char*));
                # 308 "/usr/local/include/comelang2.h"
                # 302 "/usr/local/include/comelang2.h"
                if(_if_conditional92=self==((void*)0)||self->it==((void*)0),                _if_conditional92) {
                    # 303 "/usr/local/include/comelang2.h"
                    # 304 "/usr/local/include/comelang2.h"
                    memset(&result_75,0,sizeof(char*));
                    # 305 "/usr/local/include/comelang2.h"
                    __result58__ = __result_obj__ = result_75;
                    return __result58__;
                }
                # 308 "/usr/local/include/comelang2.h"
                self->it=self->it->next;
                # 314 "/usr/local/include/comelang2.h"
                # 310 "/usr/local/include/comelang2.h"
                if(self->it) {
                    # 311 "/usr/local/include/comelang2.h"
                    __result59__ = __result_obj__ = self->it->item;
                    return __result59__;
                }
                # 314 "/usr/local/include/comelang2.h"
                # 315 "/usr/local/include/comelang2.h"
                memset(&result_76,0,sizeof(char*));
                # 316 "/usr/local/include/comelang2.h"
                __result60__ = __result_obj__ = result_76;
                return __result60__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional96;
void* right_value59;
struct list_item$1charp* litem_77;
_Bool _if_conditional97;
void* right_value60;
struct list_item$1charp* litem_78;
void* right_value61;
struct list_item$1charp* litem_79;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charp*));
right_value60 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charp*));
right_value61 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charp*));
                    # 256 "/usr/local/include/comelang2.h"
                    # 225 "/usr/local/include/comelang2.h"
                    if(_if_conditional96=self->len==0,                    _if_conditional96) {
                        # 226 "/usr/local/include/comelang2.h"
                        litem_77=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value59=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "/usr/local/include/comelang2.h"
                        litem_77->prev=((void*)0);
                        # 229 "/usr/local/include/comelang2.h"
                        litem_77->next=((void*)0);
                        # 230 "/usr/local/include/comelang2.h"
                        litem_77->item=item;
                        # 232 "/usr/local/include/comelang2.h"
                        self->tail=litem_77;
                        # 233 "/usr/local/include/comelang2.h"
                        self->head=litem_77;
                    }
                    else {
                        # 256 "/usr/local/include/comelang2.h"
                        # 235 "/usr/local/include/comelang2.h"
                        if(_if_conditional97=self->len==1,                        _if_conditional97) {
                            # 236 "/usr/local/include/comelang2.h"
                            litem_78=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value60=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "/usr/local/include/comelang2.h"
                            litem_78->prev=self->head;
                            # 239 "/usr/local/include/comelang2.h"
                            litem_78->next=((void*)0);
                            # 240 "/usr/local/include/comelang2.h"
                            litem_78->item=item;
                            # 242 "/usr/local/include/comelang2.h"
                            self->tail=litem_78;
                            # 243 "/usr/local/include/comelang2.h"
                            self->head->next=litem_78;
                        }
                        else {
                            # 246 "/usr/local/include/comelang2.h"
                            litem_79=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value61=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "/usr/local/include/comelang2.h"
                            litem_79->prev=self->tail;
                            # 249 "/usr/local/include/comelang2.h"
                            litem_79->next=((void*)0);
                            # 250 "/usr/local/include/comelang2.h"
                            litem_79->item=item;
                            # 252 "/usr/local/include/comelang2.h"
                            self->tail->next=litem_79;
                            # 253 "/usr/local/include/comelang2.h"
                            self->tail=litem_79;
                        }
                    }
                    # 256 "/usr/local/include/comelang2.h"
                    self->len++;
                    # 258 "/usr/local/include/comelang2.h"
                    __result61__ = __result_obj__ = self;
                    return __result61__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional98;
struct sNode* result_82;
struct sNode* __result64__;
_Bool _if_conditional99;
struct sNode* __result65__;
struct sNode* result_83;
struct sNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct sNode*));
memset(&result_83, 0, sizeof(struct sNode*));
        # 290 "/usr/local/include/comelang2.h"
        # 285 "/usr/local/include/comelang2.h"
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            # 286 "/usr/local/include/comelang2.h"
            # 287 "/usr/local/include/comelang2.h"
            memset(&result_82,0,sizeof(struct sNode*));
            # 288 "/usr/local/include/comelang2.h"
            __result64__ = __result_obj__ = result_82;
            return __result64__;
        }
        # 290 "/usr/local/include/comelang2.h"
        self->it=self->head;
        # 296 "/usr/local/include/comelang2.h"
        # 292 "/usr/local/include/comelang2.h"
        if(self->it) {
            # 293 "/usr/local/include/comelang2.h"
            __result65__ = __result_obj__ = self->it->item;
            return __result65__;
        }
        # 296 "/usr/local/include/comelang2.h"
        # 297 "/usr/local/include/comelang2.h"
        memset(&result_83,0,sizeof(struct sNode*));
        # 298 "/usr/local/include/comelang2.h"
        __result66__ = __result_obj__ = result_83;
        return __result66__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "/usr/local/include/comelang2.h"
        __result67__ = self==((void*)0)||self->it==((void*)0);
        return __result67__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional100;
struct sNode* result_85;
struct sNode* __result68__;
_Bool _if_conditional101;
struct sNode* __result69__;
struct sNode* result_86;
struct sNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct sNode*));
memset(&result_86, 0, sizeof(struct sNode*));
        # 308 "/usr/local/include/comelang2.h"
        # 302 "/usr/local/include/comelang2.h"
        if(_if_conditional100=self==((void*)0)||self->it==((void*)0),        _if_conditional100) {
            # 303 "/usr/local/include/comelang2.h"
            # 304 "/usr/local/include/comelang2.h"
            memset(&result_85,0,sizeof(struct sNode*));
            # 305 "/usr/local/include/comelang2.h"
            __result68__ = __result_obj__ = result_85;
            return __result68__;
        }
        # 308 "/usr/local/include/comelang2.h"
        self->it=self->it->next;
        # 314 "/usr/local/include/comelang2.h"
        # 310 "/usr/local/include/comelang2.h"
        if(self->it) {
            # 311 "/usr/local/include/comelang2.h"
            __result69__ = __result_obj__ = self->it->item;
            return __result69__;
        }
        # 314 "/usr/local/include/comelang2.h"
        # 315 "/usr/local/include/comelang2.h"
        memset(&result_86,0,sizeof(struct sNode*));
        # 316 "/usr/local/include/comelang2.h"
        __result70__ = __result_obj__ = result_86;
        return __result70__;
}

void method_block1_02classc(struct __current_stack1__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            # 52 "02class.c"
            puts("compile error");
            # 53 "02class.c"
            exit(2);
}

_Bool sClassNode_terminated(){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    # 68 "02class.c"
    __result72__ = (_Bool)0;
    return __result72__;
}

int sClassNode_sline(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    # 73 "02class.c"
    __result73__ = self->sline;
    return __result73__;
}

char* sClassNode_sname(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value64;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
    # 78 "02class.c"
    __result74__ = __result_obj__ = ((char*)(right_value64=__builtin_string(self->sname)));
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, char* name, struct list$1tuple2$2charphsTypephph* params, struct sType* result_type, struct list$1sNodeph* nodes, _Bool native_, struct sInfo* info){
void* __result_obj__;
char* __dec_obj15;
struct list$1sNodeph* __dec_obj16;
struct list$1tuple2$2charphsTypephph* __dec_obj17;
struct sType* __dec_obj18;
void* right_value65;
char* __dec_obj19;
struct sFunNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
    # 96 "02class.c"
    __dec_obj15=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 97 "02class.c"
    __dec_obj16=self->nodes;
    self->nodes=(struct list$1sNodeph*)come_increment_ref_count(nodes);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 98 "02class.c"
    __dec_obj17=self->params;
    self->params=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(params);
    come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 99 "02class.c"
    self->native_=native_;
    # 100 "02class.c"
    __dec_obj18=self->result_type;
    self->result_type=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 102 "02class.c"
    self->sline=info->sline;
    # 103 "02class.c"
    __dec_obj19=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value65=__builtin_string(info->sname))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 105 "02class.c"
    __result75__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result75__;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value66;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
    # 110 "02class.c"
    __result76__ = __result_obj__ = ((char*)(right_value66=__builtin_string("sFunNode")));
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional108;
void* right_value67;
void* right_value68;
struct sType* __dec_obj20;
void* right_value69;
void* right_value70;
struct sMethod* method_87;
_Bool _if_conditional109;
void* right_value71;
void* right_value75;
void* right_value76;
void* right_value77;
_Bool _if_conditional134;
void* right_value78;
void* right_value79;
int n_109;
struct list$1tuple2$2charphsTypephph* o2_saved_110;
struct tuple2$2charphsTypeph* it_113;
void* right_value80;
void* right_value81;
_Bool _if_conditional142;
struct list$1sNodeph* o2_saved_119;
struct sNode* it_120;
struct __current_stack2__ __current_stack2__;
void* right_value82;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
memset(&method_87, 0, sizeof(struct sMethod*));
right_value71 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&n_109, 0, sizeof(int));
memset(&o2_saved_110, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_113, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&o2_saved_119, 0, sizeof(struct list$1sNodeph*));
memset(&it_120, 0, sizeof(struct sNode*));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
right_value82 = (void*)0;
    # 119 "02class.c"
    # 115 "02class.c"
    if(_if_conditional108=string_operator_equals(self->name,"initialize"),    _if_conditional108) {
        # 116 "02class.c"
        __dec_obj20=self->result_type;
        self->result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value67=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02class.c", 116, "sType")))),info->current_class->mName,info))));
        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 119 "02class.c"
    method_87=(struct sMethod*)come_increment_ref_count(((struct sMethod*)(right_value70=sMethod_initialize((struct sMethod*)come_increment_ref_count(((struct sMethod*)(right_value69=(struct sMethod*)come_calloc(1, sizeof(struct sMethod)*(1), "02class.c", 119, "sMethod")))),self->name,(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(self->params),(struct sType*)come_increment_ref_count(self->result_type),self->native_))));
    come_call_finalizer2(sMethod_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sMethod_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 128 "02class.c"
    # 121 "02class.c"
    if(info->current_class) {
        # 122 "02class.c"
        ((struct sMethod*)(right_value75=map$2charphsMethodphp_operator_store_element(info->current_class->mMethods,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(self->name)))),(struct sMethod*)come_increment_ref_count(method_87))));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sMethod_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 125 "02class.c"
        ((struct sMethod*)(right_value77=map$2charphsMethodphp_operator_store_element(info->methods,(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(self->name)))),(struct sMethod*)come_increment_ref_count(method_87))));
        right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sMethod_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 157 "02class.c"
    # 128 "02class.c"
    if(self->native_) {
    }
    else {
        # 131 "02class.c"
        add_come_code(info,((char*)(right_value79=xsprintf("def \%s(",((char*)(right_value78=string_to_string(self->name)))))));
        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 132 "02class.c"
        n_109=0;
        # 143 "02class.c"
        for(        o2_saved_110=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((self->params)),it_113=list$1tuple2$2charphsTypephph_begin((o2_saved_110));        !list$1tuple2$2charphsTypephph_end((o2_saved_110));        it_113=list$1tuple2$2charphsTypephph_next((o2_saved_110))        ){
            # 134 "02class.c"
            add_come_code_without_nest(info,((char*)(right_value81=xsprintf("\%s",((char*)(right_value80=string_to_string(list$1tuple2$2charphsTypephphp_operator_load_element(self->params,n_109)->v1)))))));
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 136 "02class.c"
            n_109++;
            # 142 "02class.c"
            # 137 "02class.c"
            if(_if_conditional142=n_109==list$1tuple2$2charphsTypephph_length(self->params),            _if_conditional142) {
            }
            else {
                # 140 "02class.c"
                add_come_code_without_nest(info,",");
            }
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 143 "02class.c"
        add_come_code_without_nest(info,")\n");
        # 145 "02class.c"
        info->nest++;
        # 153 "02class.c"
        for(        o2_saved_119=(struct list$1sNodeph*)come_increment_ref_count((self->nodes)),it_120=list$1sNodeph_begin((o2_saved_119));        !list$1sNodeph_end((o2_saved_119));        it_120=list$1sNodeph_next((o2_saved_119))        ){
            # 151 "02class.c"
            __current_stack2__.o2_saved_119 = &o2_saved_119;
            __current_stack2__.it_120 = &it_120;
            __current_stack2__.n_109 = &n_109;
            __current_stack2__.self = &self;
            __current_stack2__.info = &info;
            __current_stack2__.method_87 = &method_87;
            bool_catch(it_120->compile(it_120->_protocol_obj,info),&__current_stack2__,(void*)method_block2_02classc);
                                    if(__current_stack2__.__method_block_result_kind__ == 1)
                        {
                            break;
                        }
                        else if(__current_stack2__.__method_block_result_kind__ == 2)
                        {
                            continue;
                        }
                        else if(__current_stack2__.__method_block_result_kind__ == 3)
                        {
                            return (_Bool)__current_stack2__.__method_block_return_value__;
                        }
            # 151 "02class.c"
            add_last_code_to_source(info);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 153 "02class.c"
        info->nest--;
        # 154 "02class.c"
        add_come_code(info,((char*)(right_value82=xsprintf("end\n"))));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 157 "02class.c"
    __result101__ = (_Bool)1;
    come_call_finalizer2(sMethod_finalize,method_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(sMethod_finalize,method_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sMethod* map$2charphsMethodphp_operator_store_element(struct map$2charphsMethodph* self, char* key, struct sMethod* item){
void* __result_obj__;
struct sMethod* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1584 "/usr/local/include/comelang2.h"
            map$2charphsMethodph_insert(self,(char*)come_increment_ref_count(key),(struct sMethod*)come_increment_ref_count(item));
            # 1586 "/usr/local/include/comelang2.h"
            __result89__ = __result_obj__ = item;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sMethod_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result89__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sMethod_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsMethodph* map$2charphsMethodph_insert(struct map$2charphsMethodph* self, char* key, struct sMethod* item){
void* __result_obj__;
_Bool _if_conditional110;
_Bool _if_conditional122;
_Bool _if_conditional123;
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional19;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool same_key_exist_107;
char* it2_108;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct map$2charphsMethodph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
memset(&same_key_exist_107, 0, sizeof(_Bool));
memset(&it2_108, 0, sizeof(char*));
                # 1393 "/usr/local/include/comelang2.h"
                # 1390 "/usr/local/include/comelang2.h"
                if(_if_conditional110=self->len*10>=self->size,                _if_conditional110) {
                    # 1391 "/usr/local/include/comelang2.h"
                    map$2charphsMethodph_rehash(self);
                }
                # 1400 "/usr/local/include/comelang2.h"
                # 1393 "/usr/local/include/comelang2.h"
                if(_if_conditional122=1,                _if_conditional122) {
                    # 1399 "/usr/local/include/comelang2.h"
                    # 1394 "/usr/local/include/comelang2.h"
                    if(_if_conditional123=key==((void*)0),                    _if_conditional123) {
                        # 1395 "/usr/local/include/comelang2.h"
                        stackframe();
                        # 1396 "/usr/local/include/comelang2.h"
                        puts("key is null");
                        # 1397 "/usr/local/include/comelang2.h"
                        exit(2);
                    }
                }
                # 1400 "/usr/local/include/comelang2.h"
                hash_105=string_get_hash_key(key)%self->size;
                # 1401 "/usr/local/include/comelang2.h"
                it_106=hash_105;
                # 1459 "/usr/local/include/comelang2.h"
                while(_while_condtional19=(_Bool)1,                _while_condtional19) {
                    # 1457 "/usr/local/include/comelang2.h"
                    # 1404 "/usr/local/include/comelang2.h"
                    if(_if_conditional124=self->item_existance[it_106],                    _if_conditional124) {
                        # 1427 "/usr/local/include/comelang2.h"
                        # 1406 "/usr/local/include/comelang2.h"
                        if(_if_conditional125=string_equals(self->keys[it_106],key),                        _if_conditional125) {
                            # 1417 "/usr/local/include/comelang2.h"
                            # 1408 "/usr/local/include/comelang2.h"
                            if(_if_conditional126=1,                            _if_conditional126) {
                                # 1409 "/usr/local/include/comelang2.h"
                                list$1charp_remove(self->key_list,self->keys[it_106]);
                                # 1410 "/usr/local/include/comelang2.h"
                                self->keys[it_106] = come_decrement_ref_count2(self->keys[it_106], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                # 1411 "/usr/local/include/comelang2.h"
                                self->keys[it_106]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                # 1414 "/usr/local/include/comelang2.h"
                                list$1charp_remove(self->key_list,self->keys[it_106]);
                                # 1415 "/usr/local/include/comelang2.h"
                                self->keys[it_106]=key;
                            }
                            # 1424 "/usr/local/include/comelang2.h"
                            # 1417 "/usr/local/include/comelang2.h"
                            if(_if_conditional127=1,                            _if_conditional127) {
                                # 1418 "/usr/local/include/comelang2.h"
                                come_call_finalizer2(sMethod_finalize,self->items[it_106], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 1419 "/usr/local/include/comelang2.h"
                                self->items[it_106]=(struct sMethod*)come_increment_ref_count(item);
                            }
                            else {
                                # 1422 "/usr/local/include/comelang2.h"
                                self->items[it_106]=item;
                            }
                            # 1424 "/usr/local/include/comelang2.h"
                            break;
                        }
                        # 1427 "/usr/local/include/comelang2.h"
                        it_106++;
                        # 1437 "/usr/local/include/comelang2.h"
                        # 1429 "/usr/local/include/comelang2.h"
                        if(_if_conditional128=it_106>=self->size,                        _if_conditional128) {
                            # 1430 "/usr/local/include/comelang2.h"
                            it_106=0;
                        }
                        else {
                            # 1437 "/usr/local/include/comelang2.h"
                            # 1432 "/usr/local/include/comelang2.h"
                            if(_if_conditional129=it_106==hash_105,                            _if_conditional129) {
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
                        self->item_existance[it_106]=(_Bool)1;
                        # 1446 "/usr/local/include/comelang2.h"
                        # 1440 "/usr/local/include/comelang2.h"
                        if(_if_conditional130=1,                        _if_conditional130) {
                            # 1441 "/usr/local/include/comelang2.h"
                            self->keys[it_106]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1444 "/usr/local/include/comelang2.h"
                            self->keys[it_106]=key;
                        }
                        # 1453 "/usr/local/include/comelang2.h"
                        # 1446 "/usr/local/include/comelang2.h"
                        if(_if_conditional131=1,                        _if_conditional131) {
                            # 1447 "/usr/local/include/comelang2.h"
                            self->items[it_106]=(struct sMethod*)come_increment_ref_count(item);
                        }
                        else {
                            # 1450 "/usr/local/include/comelang2.h"
                            self->items[it_106]=item;
                        }
                        # 1453 "/usr/local/include/comelang2.h"
                        self->len++;
                        # 1455 "/usr/local/include/comelang2.h"
                        break;
                    }
                }
                # 1459 "/usr/local/include/comelang2.h"
                same_key_exist_107=(_Bool)0;
                # 1468 "/usr/local/include/comelang2.h"
                for(                it2_108=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_108=list$1charp_next(self->key_list)                ){
                    # 1466 "/usr/local/include/comelang2.h"
                    # 1462 "/usr/local/include/comelang2.h"
                    if(_if_conditional132=string_equals(it2_108,key),                    _if_conditional132) {
                        # 1463 "/usr/local/include/comelang2.h"
                        puts("SAME KEY");
                        # 1464 "/usr/local/include/comelang2.h"
                        same_key_exist_107=(_Bool)1;
                    }
                }
                # 1472 "/usr/local/include/comelang2.h"
                # 1468 "/usr/local/include/comelang2.h"
                if(_if_conditional133=!same_key_exist_107,                _if_conditional133) {
                    # 1469 "/usr/local/include/comelang2.h"
                    list$1charp_push_back(self->key_list,key);
                }
                # 1472 "/usr/local/include/comelang2.h"
                __result88__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sMethod_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result88__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sMethod_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsMethodph_rehash(struct map$2charphsMethodph* self){
void* __result_obj__;
int size_88;
void* right_value72;
char** keys_89;
void* right_value73;
struct sMethod** items_90;
void* right_value74;
_Bool* item_existance_91;
int len_92;
char* it_95;
struct sMethod* default_value_98;
struct sMethod* it2_101;
unsigned int hash_102;
int n_103;
_Bool _while_condtional18;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sMethod* default_value_104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_88, 0, sizeof(int));
right_value72 = (void*)0;
memset(&keys_89, 0, sizeof(char**));
right_value73 = (void*)0;
memset(&items_90, 0, sizeof(struct sMethod**));
right_value74 = (void*)0;
memset(&item_existance_91, 0, sizeof(_Bool*));
memset(&len_92, 0, sizeof(int));
memset(&it_95, 0, sizeof(char*));
memset(&default_value_98, 0, sizeof(struct sMethod*));
memset(&it2_101, 0, sizeof(struct sMethod*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&n_103, 0, sizeof(int));
memset(&default_value_104, 0, sizeof(struct sMethod*));
                        # 1337 "/usr/local/include/comelang2.h"
                        size_88=self->size*10;
                        # 1338 "/usr/local/include/comelang2.h"
                        keys_89=(char**)come_increment_ref_count(((char**)(right_value72=(char**)come_calloc(1, sizeof(char*)*(1*(size_88)), "/usr/local/include/comelang2.h", 1338, "char*%"))));
                        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1339 "/usr/local/include/comelang2.h"
                        items_90=(struct sMethod**)come_increment_ref_count(((struct sMethod**)(right_value73=(struct sMethod**)come_calloc(1, sizeof(struct sMethod*)*(1*(size_88)), "/usr/local/include/comelang2.h", 1339, "sMethod*%"))));
                        come_call_finalizer2(sMethod_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1340 "/usr/local/include/comelang2.h"
                        item_existance_91=(_Bool*)come_increment_ref_count(((_Bool*)(right_value74=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_88)), "/usr/local/include/comelang2.h", 1340, "bool"))));
                        right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1342 "/usr/local/include/comelang2.h"
                        len_92=0;
                        # 1377 "/usr/local/include/comelang2.h"
                        for(                        it_95=map$2charphsMethodph_begin(self);                        !map$2charphsMethodph_end(self);                        it_95=map$2charphsMethodph_next(self)                        ){
                            # 1345 "/usr/local/include/comelang2.h"
                            # 1346 "/usr/local/include/comelang2.h"
                            memset(&default_value_98,0,sizeof(struct sMethod*));
                            # 1347 "/usr/local/include/comelang2.h"
                            it2_101=map$2charphsMethodph_at(self,it_95,default_value_98);
                            # 1348 "/usr/local/include/comelang2.h"
                            hash_102=string_get_hash_key(it_95)%size_88;
                            # 1349 "/usr/local/include/comelang2.h"
                            n_103=hash_102;
                            # 1375 "/usr/local/include/comelang2.h"
                            while(_while_condtional18=(_Bool)1,                            _while_condtional18) {
                                # 1374 "/usr/local/include/comelang2.h"
                                # 1352 "/usr/local/include/comelang2.h"
                                if(_if_conditional119=item_existance_91[n_103],                                _if_conditional119) {
                                    # 1354 "/usr/local/include/comelang2.h"
                                    n_103++;
                                    # 1364 "/usr/local/include/comelang2.h"
                                    # 1356 "/usr/local/include/comelang2.h"
                                    if(_if_conditional120=n_103>=size_88,                                    _if_conditional120) {
                                        # 1357 "/usr/local/include/comelang2.h"
                                        n_103=0;
                                    }
                                    else {
                                        # 1364 "/usr/local/include/comelang2.h"
                                        # 1359 "/usr/local/include/comelang2.h"
                                        if(_if_conditional121=n_103==hash_102,                                        _if_conditional121) {
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
                                    item_existance_91[n_103]=(_Bool)1;
                                    # 1367 "/usr/local/include/comelang2.h"
                                    keys_89[n_103]=it_95;
                                    # 1368 "/usr/local/include/comelang2.h"
                                    # 1369 "/usr/local/include/comelang2.h"
                                    items_90[n_103]=map$2charphsMethodph_at(self,it_95,default_value_104);
                                    # 1371 "/usr/local/include/comelang2.h"
                                    len_92++;
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
                        self->keys=keys_89;
                        # 1382 "/usr/local/include/comelang2.h"
                        self->items=items_90;
                        # 1383 "/usr/local/include/comelang2.h"
                        self->item_existance=item_existance_91;
                        # 1385 "/usr/local/include/comelang2.h"
                        self->size=size_88;
                        # 1386 "/usr/local/include/comelang2.h"
                        self->len=len_92;
}

static char* map$2charphsMethodph_begin(struct map$2charphsMethodph* self){
void* __result_obj__;
_Bool _if_conditional111;
char* result_93;
char* __result77__;
_Bool _if_conditional112;
char* __result78__;
char* result_94;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                            # 1304 "/usr/local/include/comelang2.h"
                            # 1299 "/usr/local/include/comelang2.h"
                            if(_if_conditional111=self==((void*)0),                            _if_conditional111) {
                                # 1300 "/usr/local/include/comelang2.h"
                                # 1301 "/usr/local/include/comelang2.h"
                                memset(&result_93,0,sizeof(char*));
                                # 1302 "/usr/local/include/comelang2.h"
                                __result77__ = __result_obj__ = result_93;
                                return __result77__;
                            }
                            # 1304 "/usr/local/include/comelang2.h"
                            self->key_list->it=self->key_list->head;
                            # 1310 "/usr/local/include/comelang2.h"
                            # 1306 "/usr/local/include/comelang2.h"
                            if(self->key_list->it) {
                                # 1307 "/usr/local/include/comelang2.h"
                                __result78__ = __result_obj__ = self->key_list->it->item;
                                return __result78__;
                            }
                            # 1310 "/usr/local/include/comelang2.h"
                            # 1311 "/usr/local/include/comelang2.h"
                            memset(&result_94,0,sizeof(char*));
                            # 1312 "/usr/local/include/comelang2.h"
                            __result79__ = __result_obj__ = result_94;
                            return __result79__;
}

static _Bool map$2charphsMethodph_end(struct map$2charphsMethodph* self){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1333 "/usr/local/include/comelang2.h"
                            __result80__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result80__;
}

static char* map$2charphsMethodph_next(struct map$2charphsMethodph* self){
void* __result_obj__;
_Bool _if_conditional113;
char* result_96;
char* __result81__;
_Bool _if_conditional114;
char* __result82__;
char* result_97;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
                            # 1321 "/usr/local/include/comelang2.h"
                            # 1316 "/usr/local/include/comelang2.h"
                            if(_if_conditional113=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional113) {
                                # 1317 "/usr/local/include/comelang2.h"
                                # 1318 "/usr/local/include/comelang2.h"
                                memset(&result_96,0,sizeof(char*));
                                # 1319 "/usr/local/include/comelang2.h"
                                __result81__ = __result_obj__ = result_96;
                                return __result81__;
                            }
                            # 1321 "/usr/local/include/comelang2.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1327 "/usr/local/include/comelang2.h"
                            # 1323 "/usr/local/include/comelang2.h"
                            if(self->key_list->it) {
                                # 1324 "/usr/local/include/comelang2.h"
                                __result82__ = __result_obj__ = self->key_list->it->item;
                                return __result82__;
                            }
                            # 1327 "/usr/local/include/comelang2.h"
                            # 1328 "/usr/local/include/comelang2.h"
                            memset(&result_97,0,sizeof(char*));
                            # 1329 "/usr/local/include/comelang2.h"
                            __result83__ = __result_obj__ = result_97;
                            return __result83__;
}

static struct sMethod* map$2charphsMethodph_at(struct map$2charphsMethodph* self, char* key, struct sMethod* default_value){
void* __result_obj__;
unsigned int hash_99;
unsigned int it_100;
_Bool _while_condtional17;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sMethod* __result84__;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sMethod* __result85__;
struct sMethod* __result86__;
struct sMethod* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&it_100, 0, sizeof(unsigned int));
                                # 1226 "/usr/local/include/comelang2.h"
                                hash_99=string_get_hash_key(((char*)key))%self->size;
                                # 1227 "/usr/local/include/comelang2.h"
                                it_100=hash_99;
                                # 1251 "/usr/local/include/comelang2.h"
                                while(_while_condtional17=(_Bool)1,                                _while_condtional17) {
                                    # 1249 "/usr/local/include/comelang2.h"
                                    # 1230 "/usr/local/include/comelang2.h"
                                    if(_if_conditional115=self->item_existance[it_100],                                    _if_conditional115) {
                                        # 1237 "/usr/local/include/comelang2.h"
                                        # 1232 "/usr/local/include/comelang2.h"
                                        if(_if_conditional116=string_equals(self->keys[it_100],key),                                        _if_conditional116) {
                                            # 1234 "/usr/local/include/comelang2.h"
                                            __result84__ = __result_obj__ = self->items[it_100];
                                            come_call_finalizer2(sMethod_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result84__;
                                        }
                                        # 1237 "/usr/local/include/comelang2.h"
                                        it_100++;
                                        # 1245 "/usr/local/include/comelang2.h"
                                        # 1239 "/usr/local/include/comelang2.h"
                                        if(_if_conditional117=it_100>=self->size,                                        _if_conditional117) {
                                            # 1240 "/usr/local/include/comelang2.h"
                                            it_100=0;
                                        }
                                        else {
                                            # 1245 "/usr/local/include/comelang2.h"
                                            # 1242 "/usr/local/include/comelang2.h"
                                            if(_if_conditional118=it_100==hash_99,                                            _if_conditional118) {
                                                # 1243 "/usr/local/include/comelang2.h"
                                                __result85__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sMethod_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result85__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1247 "/usr/local/include/comelang2.h"
                                        __result86__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sMethod_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result86__;
                                    }
                                }
                                # 1251 "/usr/local/include/comelang2.h"
                                __result87__ = __result_obj__ = default_value;
                                come_call_finalizer2(sMethod_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result87__;
                                come_call_finalizer2(sMethod_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional135;
struct tuple2$2charphsTypeph* result_111;
struct tuple2$2charphsTypeph* __result90__;
_Bool _if_conditional136;
struct tuple2$2charphsTypeph* __result91__;
struct tuple2$2charphsTypeph* result_112;
struct tuple2$2charphsTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_112, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 290 "/usr/local/include/comelang2.h"
            # 285 "/usr/local/include/comelang2.h"
            if(_if_conditional135=self==((void*)0),            _if_conditional135) {
                # 286 "/usr/local/include/comelang2.h"
                # 287 "/usr/local/include/comelang2.h"
                memset(&result_111,0,sizeof(struct tuple2$2charphsTypeph*));
                # 288 "/usr/local/include/comelang2.h"
                __result90__ = __result_obj__ = result_111;
                return __result90__;
            }
            # 290 "/usr/local/include/comelang2.h"
            self->it=self->head;
            # 296 "/usr/local/include/comelang2.h"
            # 292 "/usr/local/include/comelang2.h"
            if(self->it) {
                # 293 "/usr/local/include/comelang2.h"
                __result91__ = __result_obj__ = self->it->item;
                return __result91__;
            }
            # 296 "/usr/local/include/comelang2.h"
            # 297 "/usr/local/include/comelang2.h"
            memset(&result_112,0,sizeof(struct tuple2$2charphsTypeph*));
            # 298 "/usr/local/include/comelang2.h"
            __result92__ = __result_obj__ = result_112;
            return __result92__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "/usr/local/include/comelang2.h"
            __result93__ = self==((void*)0)||self->it==((void*)0);
            return __result93__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional137;
struct tuple2$2charphsTypeph* result_114;
struct tuple2$2charphsTypeph* __result94__;
_Bool _if_conditional138;
struct tuple2$2charphsTypeph* __result95__;
struct tuple2$2charphsTypeph* result_115;
struct tuple2$2charphsTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_114, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_115, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 308 "/usr/local/include/comelang2.h"
            # 302 "/usr/local/include/comelang2.h"
            if(_if_conditional137=self==((void*)0)||self->it==((void*)0),            _if_conditional137) {
                # 303 "/usr/local/include/comelang2.h"
                # 304 "/usr/local/include/comelang2.h"
                memset(&result_114,0,sizeof(struct tuple2$2charphsTypeph*));
                # 305 "/usr/local/include/comelang2.h"
                __result94__ = __result_obj__ = result_114;
                return __result94__;
            }
            # 308 "/usr/local/include/comelang2.h"
            self->it=self->it->next;
            # 314 "/usr/local/include/comelang2.h"
            # 310 "/usr/local/include/comelang2.h"
            if(self->it) {
                # 311 "/usr/local/include/comelang2.h"
                __result95__ = __result_obj__ = self->it->item;
                return __result95__;
            }
            # 314 "/usr/local/include/comelang2.h"
            # 315 "/usr/local/include/comelang2.h"
            memset(&result_115,0,sizeof(struct tuple2$2charphsTypeph*));
            # 316 "/usr/local/include/comelang2.h"
            __result96__ = __result_obj__ = result_115;
            return __result96__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional139;
struct list_item$1tuple2$2charphsTypephph* it_116;
int i_117;
_Bool _while_condtional20;
_Bool _if_conditional140;
struct tuple2$2charphsTypeph* __result97__;
struct tuple2$2charphsTypeph* default_value_118;
struct tuple2$2charphsTypeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_117, 0, sizeof(int));
memset(&default_value_118, 0, sizeof(struct tuple2$2charphsTypeph*));
                # 686 "/usr/local/include/comelang2.h"
                # 682 "/usr/local/include/comelang2.h"
                if(_if_conditional139=position<0,                _if_conditional139) {
                    # 683 "/usr/local/include/comelang2.h"
                    position+=self->len;
                }
                # 686 "/usr/local/include/comelang2.h"
                it_116=self->head;
                # 687 "/usr/local/include/comelang2.h"
                i_117=0;
                # 694 "/usr/local/include/comelang2.h"
                while(_while_condtional20=it_116!=((void*)0),                _while_condtional20) {
                    # 692 "/usr/local/include/comelang2.h"
                    # 689 "/usr/local/include/comelang2.h"
                    if(_if_conditional140=position==i_117,                    _if_conditional140) {
                        # 690 "/usr/local/include/comelang2.h"
                        __result97__ = __result_obj__ = it_116->item;
                        return __result97__;
                    }
                    # 692 "/usr/local/include/comelang2.h"
                    it_116=it_116->next;
                    # 693 "/usr/local/include/comelang2.h"
                    i_117++;
                }
                # 696 "/usr/local/include/comelang2.h"
                # 697 "/usr/local/include/comelang2.h"
                memset(&default_value_118,0,sizeof(struct tuple2$2charphsTypeph*));
                # 698 "/usr/local/include/comelang2.h"
                __result98__ = __result_obj__ = default_value_118;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result98__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional141;
int __result99__;
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "/usr/local/include/comelang2.h"
                # 364 "/usr/local/include/comelang2.h"
                if(_if_conditional141=self==((void*)0),                _if_conditional141) {
                    # 365 "/usr/local/include/comelang2.h"
                    __result99__ = 0;
                    return __result99__;
                }
                # 367 "/usr/local/include/comelang2.h"
                __result100__ = self->len;
                return __result100__;
}

void method_block2_02classc(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                # 149 "02class.c"
                puts("compile error");
                # 150 "02class.c"
                exit(2);
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    # 162 "02class.c"
    __result102__ = (_Bool)0;
    return __result102__;
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    # 167 "02class.c"
    __result103__ = self->sline;
    return __result103__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value83;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
    # 172 "02class.c"
    __result104__ = __result_obj__ = ((char*)(right_value83=__builtin_string(self->sname)));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result104__;
}

struct sKernelMethodCall* sKernelMethodCall_initialize(struct sKernelMethodCall* self, char* name, struct list$1sNodeph* params, struct sInfo* info){
void* __result_obj__;
char* __dec_obj21;
struct list$1sNodeph* __dec_obj22;
void* right_value84;
char* __dec_obj23;
struct sKernelMethodCall* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    # 186 "02class.c"
    __dec_obj21=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 187 "02class.c"
    __dec_obj22=self->params;
    self->params=(struct list$1sNodeph*)come_increment_ref_count(params);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 189 "02class.c"
    self->sline=info->sline;
    # 190 "02class.c"
    __dec_obj23=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(info->sname))));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 192 "02class.c"
    __result105__ = __result_obj__ = self;
    come_call_finalizer2(sKernelMethodCall_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer2(sKernelMethodCall_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sKernelMethodCall_kind(){
void* __result_obj__;
void* right_value85;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
    # 197 "02class.c"
    __result106__ = __result_obj__ = ((char*)(right_value85=__builtin_string("sKernelMethodCall")));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

void check_assign_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional146;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
    # 208 "02class.c"
    # 202 "02class.c"
    if(_if_conditional146=string_operator_not_equals(left_type->mClass->mName,right_type->mClass->mName),    _if_conditional146) {
        # 203 "02class.c"
        err_msg(info,"invalid type");
        # 204 "02class.c"
        puts(((char*)(right_value87=xsprintf("left type is \%s",((char*)(right_value86=string_to_string(left_type->mClass->mName)))))));
        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 205 "02class.c"
        puts(((char*)(right_value89=xsprintf("right type is \%s",((char*)(right_value88=string_to_string(right_type->mClass->mName)))))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 206 "02class.c"
        exit(2);
    }
}

_Bool sKernelMethodCall_compile(struct sKernelMethodCall* self, struct sInfo* info){
void* __result_obj__;
struct sClass* kernel_class_124;
_Bool _if_conditional151;
_Bool __result111__;
struct sMethod* method_128;
_Bool _if_conditional156;
_Bool __result116__;
void* right_value90;
void* right_value91;
struct buffer* buf_129;
void* right_value92;
void* right_value93;
int n_130;
struct list$1sNodeph* o2_saved_131;
struct sNode* it_132;
struct __current_stack3__ __current_stack3__;
void* right_value94;
struct CVALUE* come_value_133;
struct sType* left_type_134;
_Bool _if_conditional157;
void* right_value95;
void* right_value96;
_Bool _if_conditional159;
void* right_value97;
void* right_value98;
void* right_value99;
struct CVALUE* come_value_135;
void* right_value100;
char* __dec_obj24;
struct sType* __dec_obj25;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&kernel_class_124, 0, sizeof(struct sClass*));
memset(&method_128, 0, sizeof(struct sMethod*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&buf_129, 0, sizeof(struct buffer*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&n_130, 0, sizeof(int));
memset(&o2_saved_131, 0, sizeof(struct list$1sNodeph*));
memset(&it_132, 0, sizeof(struct sNode*));
memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
right_value94 = (void*)0;
memset(&come_value_133, 0, sizeof(struct CVALUE*));
memset(&left_type_134, 0, sizeof(struct sType*));
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&come_value_135, 0, sizeof(struct CVALUE*));
right_value100 = (void*)0;
    # 212 "02class.c"
    kernel_class_124=map$2charphsClassphp_operator_load_element(info->classes,"Kernel");
    # 219 "02class.c"
    # 214 "02class.c"
    if(_if_conditional151=kernel_class_124==((void*)0),    _if_conditional151) {
        # 215 "02class.c"
        err_msg(info,"require Kernel class");
        # 216 "02class.c"
        __result111__ = (_Bool)0;
        return __result111__;
    }
    # 219 "02class.c"
    method_128=map$2charphsMethodphp_operator_load_element(kernel_class_124->mMethods,self->name);
    # 226 "02class.c"
    # 221 "02class.c"
    if(_if_conditional156=method_128==((void*)0),    _if_conditional156) {
        # 222 "02class.c"
        err_msg(info,"require Kernel method (%s)",self->name);
        # 223 "02class.c"
        __result116__ = (_Bool)0;
        return __result116__;
    }
    # 226 "02class.c"
    buf_129=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02class.c", 226, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 227 "02class.c"
    buffer_append_str(buf_129,((char*)(right_value93=xsprintf("\%s(",((char*)(right_value92=string_to_string(self->name)))))));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 228 "02class.c"
    n_130=0;
    # 254 "02class.c"
    for(    o2_saved_131=(struct list$1sNodeph*)come_increment_ref_count((self->params)),it_132=list$1sNodeph_begin((o2_saved_131));    !list$1sNodeph_end((o2_saved_131));    it_132=list$1sNodeph_next((o2_saved_131))    ){
        # 234 "02class.c"
        __current_stack3__.o2_saved_131 = &o2_saved_131;
        __current_stack3__.it_132 = &it_132;
        __current_stack3__.self = &self;
        __current_stack3__.info = &info;
        __current_stack3__.kernel_class_124 = &kernel_class_124;
        __current_stack3__.method_128 = &method_128;
        __current_stack3__.buf_129 = &buf_129;
        __current_stack3__.n_130 = &n_130;
        bool_catch(it_132->compile(it_132->_protocol_obj,info),&__current_stack3__,(void*)method_block3_02classc);
                                if(__current_stack3__.__method_block_result_kind__ == 1)
                        {
                            break;
                        }
                        else if(__current_stack3__.__method_block_result_kind__ == 2)
                        {
                            continue;
                        }
                        else if(__current_stack3__.__method_block_result_kind__ == 3)
                        {
                            return (_Bool)__current_stack3__.__method_block_return_value__;
                        }
        # 234 "02class.c"
        come_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value94=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 235 "02class.c"
        dec_stack_ptr(1,info);
        # 237 "02class.c"
        left_type_134=list$1tuple2$2charphsTypephphp_operator_load_element(method_128->mParams,n_130)->v2;
        # 244 "02class.c"
        # 239 "02class.c"
        if(_if_conditional157=left_type_134==((void*)0),        _if_conditional157) {
            # 240 "02class.c"
            err_msg(info,"invalid params number(%s)",self->name);
            # 241 "02class.c"
            exit(2);
        }
        # 244 "02class.c"
        check_assign_type(left_type_134,come_value_133->type,come_value_133,info);
        # 246 "02class.c"
        buffer_append_str(buf_129,((char*)(right_value96=xsprintf("\%s",((char*)(right_value95=string_to_string(come_value_133->c_value)))))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 248 "02class.c"
        n_130++;
        # 253 "02class.c"
        # 250 "02class.c"
        if(_if_conditional159=n_130!=list$1sNodeph_length(self->params),        _if_conditional159) {
            # 251 "02class.c"
            buffer_append_str(buf_129,((char*)(right_value97=xsprintf(","))));
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(CVALUE_finalize,come_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 254 "02class.c"
    buffer_append_str(buf_129,((char*)(right_value98=xsprintf(")"))));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 256 "02class.c"
    come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "02class.c", 256, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 258 "02class.c"
    __dec_obj24=come_value_135->c_value;
    come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value100=buffer_to_string(buf_129))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 259 "02class.c"
    __dec_obj25=come_value_135->type;
    come_value_135->type=(struct sType*)come_increment_ref_count(method_128->mResultType);
    come_call_finalizer2(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 260 "02class.c"
    come_value_135->var=((void*)0);
    # 262 "02class.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
    # 264 "02class.c"
    add_come_last_code(info,"%s\n",come_value_135->c_value);
    # 266 "02class.c"
    __result120__ = (_Bool)1;
    come_call_finalizer2(buffer_finalize,buf_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer2(buffer_finalize,buf_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_121;
unsigned int hash_122;
unsigned int it_123;
_Bool _while_condtional21;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sClass* __result107__;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct sClass* __result108__;
struct sClass* __result109__;
struct sClass* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_121, 0, sizeof(struct sClass*));
memset(&hash_122, 0, sizeof(unsigned int));
memset(&it_123, 0, sizeof(unsigned int));
        # 1552 "/usr/local/include/comelang2.h"
        # 1553 "/usr/local/include/comelang2.h"
        memset(&default_value_121,0,sizeof(struct sClass*));
        # 1555 "/usr/local/include/comelang2.h"
        hash_122=string_get_hash_key(((char*)key))%self->size;
        # 1556 "/usr/local/include/comelang2.h"
        it_123=hash_122;
        # 1580 "/usr/local/include/comelang2.h"
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            # 1578 "/usr/local/include/comelang2.h"
            # 1559 "/usr/local/include/comelang2.h"
            if(_if_conditional147=self->item_existance[it_123],            _if_conditional147) {
                # 1566 "/usr/local/include/comelang2.h"
                # 1561 "/usr/local/include/comelang2.h"
                if(_if_conditional148=string_equals(self->keys[it_123],key),                _if_conditional148) {
                    # 1563 "/usr/local/include/comelang2.h"
                    __result107__ = __result_obj__ = self->items[it_123];
                    come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result107__;
                }
                # 1566 "/usr/local/include/comelang2.h"
                it_123++;
                # 1574 "/usr/local/include/comelang2.h"
                # 1568 "/usr/local/include/comelang2.h"
                if(_if_conditional149=it_123>=self->size,                _if_conditional149) {
                    # 1569 "/usr/local/include/comelang2.h"
                    it_123=0;
                }
                else {
                    # 1574 "/usr/local/include/comelang2.h"
                    # 1571 "/usr/local/include/comelang2.h"
                    if(_if_conditional150=it_123==hash_122,                    _if_conditional150) {
                        # 1572 "/usr/local/include/comelang2.h"
                        __result108__ = __result_obj__ = default_value_121;
                        come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result108__;
                    }
                }
            }
            else {
                # 1576 "/usr/local/include/comelang2.h"
                __result109__ = __result_obj__ = default_value_121;
                come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result109__;
            }
        }
        # 1580 "/usr/local/include/comelang2.h"
        __result110__ = __result_obj__ = default_value_121;
        come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result110__;
        come_call_finalizer2(sClass_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sMethod* map$2charphsMethodphp_operator_load_element(struct map$2charphsMethodph* self, char* key){
void* __result_obj__;
struct sMethod* default_value_125;
unsigned int hash_126;
unsigned int it_127;
_Bool _while_condtional22;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct sMethod* __result112__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sMethod* __result113__;
struct sMethod* __result114__;
struct sMethod* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_125, 0, sizeof(struct sMethod*));
memset(&hash_126, 0, sizeof(unsigned int));
memset(&it_127, 0, sizeof(unsigned int));
        # 1552 "/usr/local/include/comelang2.h"
        # 1553 "/usr/local/include/comelang2.h"
        memset(&default_value_125,0,sizeof(struct sMethod*));
        # 1555 "/usr/local/include/comelang2.h"
        hash_126=string_get_hash_key(((char*)key))%self->size;
        # 1556 "/usr/local/include/comelang2.h"
        it_127=hash_126;
        # 1580 "/usr/local/include/comelang2.h"
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            # 1578 "/usr/local/include/comelang2.h"
            # 1559 "/usr/local/include/comelang2.h"
            if(_if_conditional152=self->item_existance[it_127],            _if_conditional152) {
                # 1566 "/usr/local/include/comelang2.h"
                # 1561 "/usr/local/include/comelang2.h"
                if(_if_conditional153=string_equals(self->keys[it_127],key),                _if_conditional153) {
                    # 1563 "/usr/local/include/comelang2.h"
                    __result112__ = __result_obj__ = self->items[it_127];
                    come_call_finalizer2(sMethod_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result112__;
                }
                # 1566 "/usr/local/include/comelang2.h"
                it_127++;
                # 1574 "/usr/local/include/comelang2.h"
                # 1568 "/usr/local/include/comelang2.h"
                if(_if_conditional154=it_127>=self->size,                _if_conditional154) {
                    # 1569 "/usr/local/include/comelang2.h"
                    it_127=0;
                }
                else {
                    # 1574 "/usr/local/include/comelang2.h"
                    # 1571 "/usr/local/include/comelang2.h"
                    if(_if_conditional155=it_127==hash_126,                    _if_conditional155) {
                        # 1572 "/usr/local/include/comelang2.h"
                        __result113__ = __result_obj__ = default_value_125;
                        come_call_finalizer2(sMethod_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result113__;
                    }
                }
            }
            else {
                # 1576 "/usr/local/include/comelang2.h"
                __result114__ = __result_obj__ = default_value_125;
                come_call_finalizer2(sMethod_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result114__;
            }
        }
        # 1580 "/usr/local/include/comelang2.h"
        __result115__ = __result_obj__ = default_value_125;
        come_call_finalizer2(sMethod_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result115__;
        come_call_finalizer2(sMethod_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void method_block3_02classc(struct __current_stack3__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            # 232 "02class.c"
            puts("compile error");
            # 233 "02class.c"
            exit(2);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional158;
int __result117__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "/usr/local/include/comelang2.h"
            # 364 "/usr/local/include/comelang2.h"
            if(_if_conditional158=self==((void*)0),            _if_conditional158) {
                # 365 "/usr/local/include/comelang2.h"
                __result117__ = 0;
                return __result117__;
            }
            # 367 "/usr/local/include/comelang2.h"
            __result118__ = self->len;
            return __result118__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value101;
struct list_item$1CVALUEph* litem_136;
struct CVALUE* __dec_obj26;
_Bool _if_conditional161;
void* right_value102;
struct list_item$1CVALUEph* litem_137;
struct CVALUE* __dec_obj27;
void* right_value103;
struct list_item$1CVALUEph* litem_138;
struct CVALUE* __dec_obj28;
struct list$1CVALUEph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1CVALUEph*));
right_value102 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1CVALUEph*));
right_value103 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "/usr/local/include/comelang2.h"
        # 225 "/usr/local/include/comelang2.h"
        if(_if_conditional160=self->len==0,        _if_conditional160) {
            # 226 "/usr/local/include/comelang2.h"
            litem_136=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value101=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "/usr/local/include/comelang2.h"
            litem_136->prev=((void*)0);
            # 229 "/usr/local/include/comelang2.h"
            litem_136->next=((void*)0);
            # 230 "/usr/local/include/comelang2.h"
            __dec_obj26=litem_136->item;
            litem_136->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "/usr/local/include/comelang2.h"
            self->tail=litem_136;
            # 233 "/usr/local/include/comelang2.h"
            self->head=litem_136;
        }
        else {
            # 256 "/usr/local/include/comelang2.h"
            # 235 "/usr/local/include/comelang2.h"
            if(_if_conditional161=self->len==1,            _if_conditional161) {
                # 236 "/usr/local/include/comelang2.h"
                litem_137=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value102=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "/usr/local/include/comelang2.h"
                litem_137->prev=self->head;
                # 239 "/usr/local/include/comelang2.h"
                litem_137->next=((void*)0);
                # 240 "/usr/local/include/comelang2.h"
                __dec_obj27=litem_137->item;
                litem_137->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "/usr/local/include/comelang2.h"
                self->tail=litem_137;
                # 243 "/usr/local/include/comelang2.h"
                self->head->next=litem_137;
            }
            else {
                # 246 "/usr/local/include/comelang2.h"
                litem_138=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value103=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "/usr/local/include/comelang2.h"
                litem_138->prev=self->tail;
                # 249 "/usr/local/include/comelang2.h"
                litem_138->next=((void*)0);
                # 250 "/usr/local/include/comelang2.h"
                __dec_obj28=litem_138->item;
                litem_138->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "/usr/local/include/comelang2.h"
                self->tail->next=litem_138;
                # 253 "/usr/local/include/comelang2.h"
                self->tail=litem_138;
            }
        }
        # 256 "/usr/local/include/comelang2.h"
        self->len++;
        # 258 "/usr/local/include/comelang2.h"
        __result119__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result119__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sKernelMethodCall_terminated(){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    # 271 "02class.c"
    __result121__ = (_Bool)0;
    return __result121__;
}

int sKernelMethodCall_sline(struct sKernelMethodCall* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 276 "02class.c"
    __result122__ = self->sline;
    return __result122__;
}

char* sKernelMethodCall_sname(struct sKernelMethodCall* self, struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
    # 281 "02class.c"
    __result123__ = __result_obj__ = ((char*)(right_value104=__builtin_string(self->sname)));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

struct sClassMethodCall* sClassMethodCall_initialize(struct sClassMethodCall* self, char* name, char* method_name, struct list$1sNodeph* params, struct sInfo* info){
void* __result_obj__;
char* __dec_obj29;
char* __dec_obj30;
struct list$1sNodeph* __dec_obj31;
void* right_value105;
char* __dec_obj32;
struct sClassMethodCall* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
    # 297 "02class.c"
    __dec_obj29=self->name;
    self->name=(char*)come_increment_ref_count(name);
    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 298 "02class.c"
    __dec_obj30=self->method_name;
    self->method_name=(char*)come_increment_ref_count(method_name);
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 299 "02class.c"
    __dec_obj31=self->params;
    self->params=(struct list$1sNodeph*)come_increment_ref_count(params);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 301 "02class.c"
    self->sline=info->sline;
    # 302 "02class.c"
    __dec_obj32=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string(info->sname))));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 304 "02class.c"
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sClassMethodCall_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    method_name = come_decrement_ref_count2(method_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(sClassMethodCall_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    method_name = come_decrement_ref_count2(method_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

char* sClassMethodCall_kind(){
void* __result_obj__;
void* right_value106;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    # 309 "02class.c"
    __result125__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sClassMethodCall")));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sClassMethodCall_compile(struct sClassMethodCall* self, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_139;
_Bool _if_conditional166;
_Bool __result126__;
struct sMethod* method_140;
struct sMethod* initialize_method_141;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool __result127__;
_Bool _if_conditional169;
_Bool __result128__;
void* right_value107;
void* right_value108;
struct buffer* buf_142;
void* right_value109;
void* right_value110;
void* right_value111;
int n_143;
struct list$1sNodeph* o2_saved_144;
struct sNode* it_145;
struct __current_stack4__ __current_stack4__;
void* right_value112;
struct CVALUE* come_value_146;
struct sType* left_type_147;
_Bool _if_conditional170;
void* right_value113;
void* right_value114;
_Bool _if_conditional171;
void* right_value115;
void* right_value116;
void* right_value117;
struct CVALUE* come_value_148;
void* right_value118;
char* __dec_obj33;
struct sType* __dec_obj34;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_139, 0, sizeof(struct sClass*));
memset(&method_140, 0, sizeof(struct sMethod*));
memset(&initialize_method_141, 0, sizeof(struct sMethod*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&buf_142, 0, sizeof(struct buffer*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&n_143, 0, sizeof(int));
memset(&o2_saved_144, 0, sizeof(struct list$1sNodeph*));
memset(&it_145, 0, sizeof(struct sNode*));
memset(&__current_stack4__, 0, sizeof(struct __current_stack4__));
right_value112 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
memset(&left_type_147, 0, sizeof(struct sType*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value118 = (void*)0;
    # 314 "02class.c"
    klass_139=map$2charphsClassphp_operator_load_element(info->classes,self->name);
    # 321 "02class.c"
    # 316 "02class.c"
    if(_if_conditional166=klass_139==((void*)0),    _if_conditional166) {
        # 317 "02class.c"
        err_msg(info,"require Kernel class");
        # 318 "02class.c"
        __result126__ = (_Bool)0;
        return __result126__;
    }
    # 321 "02class.c"
    method_140=map$2charphsMethodphp_operator_load_element(klass_139->mMethods,self->method_name);
    # 322 "02class.c"
    initialize_method_141=map$2charphsMethodphp_operator_load_element(klass_139->mMethods,"initialize");
    # 339 "02class.c"
    # 324 "02class.c"
    if(_if_conditional167=string_operator_equals(self->method_name,"new"),    _if_conditional167) {
        # 330 "02class.c"
        # 325 "02class.c"
        if(_if_conditional168=initialize_method_141==((void*)0),        _if_conditional168) {
            # 326 "02class.c"
            err_msg(info,"require class(%s) initialize method",self->name);
            # 327 "02class.c"
            __result127__ = (_Bool)0;
            return __result127__;
        }
        # 330 "02class.c"
        method_140=initialize_method_141;
    }
    else {
        # 337 "02class.c"
        # 333 "02class.c"
        if(_if_conditional169=method_140==((void*)0),        _if_conditional169) {
            # 334 "02class.c"
            err_msg(info,"require class(%s) method (%s)",self->name,self->method_name);
            # 335 "02class.c"
            __result128__ = (_Bool)0;
            return __result128__;
        }
    }
    # 339 "02class.c"
    buf_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02class.c", 339, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 340 "02class.c"
    buffer_append_str(buf_142,((char*)(right_value111=xsprintf("\%s.\%s(",((char*)(right_value109=string_to_string(self->name))),((char*)(right_value110=string_to_string(self->method_name)))))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 341 "02class.c"
    n_143=0;
    # 367 "02class.c"
    for(    o2_saved_144=(struct list$1sNodeph*)come_increment_ref_count((self->params)),it_145=list$1sNodeph_begin((o2_saved_144));    !list$1sNodeph_end((o2_saved_144));    it_145=list$1sNodeph_next((o2_saved_144))    ){
        # 347 "02class.c"
        __current_stack4__.o2_saved_144 = &o2_saved_144;
        __current_stack4__.it_145 = &it_145;
        __current_stack4__.self = &self;
        __current_stack4__.info = &info;
        __current_stack4__.klass_139 = &klass_139;
        __current_stack4__.method_140 = &method_140;
        __current_stack4__.initialize_method_141 = &initialize_method_141;
        __current_stack4__.buf_142 = &buf_142;
        __current_stack4__.n_143 = &n_143;
        bool_catch(it_145->compile(it_145->_protocol_obj,info),&__current_stack4__,(void*)method_block4_02classc);
                                if(__current_stack4__.__method_block_result_kind__ == 1)
                        {
                            break;
                        }
                        else if(__current_stack4__.__method_block_result_kind__ == 2)
                        {
                            continue;
                        }
                        else if(__current_stack4__.__method_block_result_kind__ == 3)
                        {
                            return (_Bool)__current_stack4__.__method_block_return_value__;
                        }
        # 347 "02class.c"
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 348 "02class.c"
        dec_stack_ptr(1,info);
        # 350 "02class.c"
        left_type_147=list$1tuple2$2charphsTypephphp_operator_load_element(method_140->mParams,n_143)->v2;
        # 357 "02class.c"
        # 352 "02class.c"
        if(_if_conditional170=left_type_147==((void*)0),        _if_conditional170) {
            # 353 "02class.c"
            err_msg(info,"invalid params number(%s)",self->method_name);
            # 354 "02class.c"
            exit(2);
        }
        # 357 "02class.c"
        check_assign_type(left_type_147,come_value_146->type,come_value_146,info);
        # 359 "02class.c"
        buffer_append_str(buf_142,((char*)(right_value114=xsprintf("\%s",((char*)(right_value113=string_to_string(come_value_146->c_value)))))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 361 "02class.c"
        n_143++;
        # 366 "02class.c"
        # 363 "02class.c"
        if(_if_conditional171=n_143!=list$1sNodeph_length(self->params),        _if_conditional171) {
            # 364 "02class.c"
            buffer_append_str(buf_142,((char*)(right_value115=xsprintf(","))));
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 367 "02class.c"
    buffer_append_str(buf_142,((char*)(right_value116=xsprintf(")"))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 369 "02class.c"
    come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "02class.c", 369, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 371 "02class.c"
    __dec_obj33=come_value_148->c_value;
    come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value118=buffer_to_string(buf_142))));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 372 "02class.c"
    __dec_obj34=come_value_148->type;
    come_value_148->type=(struct sType*)come_increment_ref_count(method_140->mResultType);
    come_call_finalizer2(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 373 "02class.c"
    come_value_148->var=((void*)0);
    # 375 "02class.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
    # 377 "02class.c"
    add_come_last_code(info,"%s\n",come_value_148->c_value);
    # 379 "02class.c"
    __result129__ = (_Bool)1;
    come_call_finalizer2(buffer_finalize,buf_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result129__;
    come_call_finalizer2(buffer_finalize,buf_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void method_block4_02classc(struct __current_stack4__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            # 345 "02class.c"
            puts("compile error");
            # 346 "02class.c"
            exit(2);
}

_Bool sClassMethodCall_terminated(){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    # 384 "02class.c"
    __result130__ = (_Bool)0;
    return __result130__;
}

int sClassMethodCall_sline(struct sClassMethodCall* self, struct sInfo* info){
void* __result_obj__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    # 389 "02class.c"
    __result131__ = self->sline;
    return __result131__;
}

char* sClassMethodCall_sname(struct sClassMethodCall* self, struct sInfo* info){
void* __result_obj__;
void* right_value119;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    # 394 "02class.c"
    __result132__ = __result_obj__ = ((char*)(right_value119=__builtin_string(self->sname)));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value120;
void* right_value121;
struct buffer* buf_149;
_Bool _while_condtional23;
void* right_value122;
_Bool _if_conditional173;
void* right_value123;
char* __result135__;
void* right_value124;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&buf_149, 0, sizeof(struct buffer*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
    # 399 "02class.c"
    buf_149=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02class.c", 399, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 406 "02class.c"
    while(_while_condtional23=(smart_pointer$1charp_operator_derefference(info->p)>=97&&smart_pointer$1charp_operator_derefference(info->p)<=122)||(smart_pointer$1charp_operator_derefference(info->p)>=65&&smart_pointer$1charp_operator_derefference(info->p)<=90)||smart_pointer$1charp_operator_derefference(info->p)==95||(smart_pointer$1charp_operator_derefference(info->p)>=48&&smart_pointer$1charp_operator_derefference(info->p)<=57)||(smart_pointer$1charp_operator_derefference(info->p)==36),    _while_condtional23) {
        # 403 "02class.c"
        buffer_append_char(buf_149,smart_pointer$1charp_operator_derefference(info->p));
        # 404 "02class.c"
        smart_pointer$1charp_operator_plus_plus(info->p);
    }
    # 406 "02class.c"
    skip_spaces_and_lf(info);
    # 413 "02class.c"
    # 408 "02class.c"
    if(_if_conditional173=string_length(((char*)(right_value122=buffer_to_string(buf_149))))==0,    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional173) {
        # 409 "02class.c"
        err_msg(info,"unexpected character(%c). expected word character",smart_pointer$1charp_operator_derefference(info->p));
        # 410 "02class.c"
        __result135__ = __result_obj__ = ((char*)(right_value123=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result135__;
    }
    # 413 "02class.c"
    __result136__ = __result_obj__ = ((char*)(right_value124=buffer_to_string(buf_149)));
    come_call_finalizer2(buffer_finalize,buf_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
    come_call_finalizer2(buffer_finalize,buf_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char smart_pointer$1charp_operator_derefference(struct smart_pointer$1char* self){
void* __result_obj__;
char* p_150;
char __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_150, 0, sizeof(char*));
        # 2097 "/usr/local/include/comelang2.h"
        p_150=self->p;
        # 2098 "/usr/local/include/comelang2.h"
        __result133__ = *p_150;
        return __result133__;
}

static struct smart_pointer$1char* smart_pointer$1charp_operator_plus_plus(struct smart_pointer$1char* self){
void* __result_obj__;
int n_151;
_Bool _if_conditional172;
struct smart_pointer$1char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_151, 0, sizeof(int));
            # 2103 "/usr/local/include/comelang2.h"
            n_151=self->p-(char*)self->memory->buf;
            # 2104 "/usr/local/include/comelang2.h"
            self->p=((char*)self->memory->buf)+n_151+1;
            # 2112 "/usr/local/include/comelang2.h"
            # 2106 "/usr/local/include/comelang2.h"
            if(_if_conditional172=(char*)self->p>self->memory->buf+self->memory->len,            _if_conditional172) {
                # 2107 "/usr/local/include/comelang2.h"
                puts("out of range of smart pointer");
                # 2108 "/usr/local/include/comelang2.h"
                stackframe();
                # 2109 "/usr/local/include/comelang2.h"
                exit(1);
            }
            # 2112 "/usr/local/include/comelang2.h"
            __result134__ = __result_obj__ = self;
            return __result134__;
}

_Bool parse_cmp(char* word, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional174;
void* right_value126;
char c_154;
_Bool _if_conditional176;
_Bool __result138__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&c_154, 0, sizeof(char));
    # 427 "02class.c"
    # 418 "02class.c"
    if(_if_conditional174=strlen(info->p->p)>=strlen(word)&&memcmp(info->p->p,word,strlen(word))==0,    _if_conditional174) {
        # 420 "02class.c"
        c_154=smart_pointer$1charp_operator_derefference((((struct smart_pointer$1char*)(right_value126=smart_pointer$1charp_operator_add(info->p,strlen(word))))));
        come_call_finalizer2(smart_pointer$1charp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 425 "02class.c"
        # 422 "02class.c"
        if(_if_conditional176=c_154==9||c_154==32||c_154==0||c_154==10,        _if_conditional176) {
            # 423 "02class.c"
            __result138__ = (_Bool)1;
            return __result138__;
        }
    }
    # 427 "02class.c"
    __result139__ = (_Bool)0;
    return __result139__;
}

static struct smart_pointer$1char* smart_pointer$1charp_operator_add(struct smart_pointer$1char* self, int value){
void* __result_obj__;
void* right_value125;
struct smart_pointer$1char* result_152;
struct buffer* __dec_obj35;
int n_153;
_Bool _if_conditional175;
struct smart_pointer$1char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_152, 0, sizeof(struct smart_pointer$1char*));
memset(&n_153, 0, sizeof(int));
            # 2063 "/usr/local/include/comelang2.h"
            result_152=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value125=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2063, "smart_pointer$1char"))));
            come_call_finalizer2(smart_pointer$1charp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 2065 "/usr/local/include/comelang2.h"
            __dec_obj35=result_152->memory;
            result_152->memory=(struct buffer*)come_increment_ref_count(self->memory);
            come_call_finalizer2(buffer_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 2066 "/usr/local/include/comelang2.h"
            n_153=self->p-(char*)self->memory->buf;
            # 2067 "/usr/local/include/comelang2.h"
            result_152->p=((char*)result_152->memory->buf)+n_153+value;
            # 2075 "/usr/local/include/comelang2.h"
            # 2069 "/usr/local/include/comelang2.h"
            if(_if_conditional175=(char*)result_152->p>result_152->memory->buf+result_152->memory->len,            _if_conditional175) {
                # 2070 "/usr/local/include/comelang2.h"
                puts("out of range of smart pointer");
                # 2071 "/usr/local/include/comelang2.h"
                stackframe();
                # 2072 "/usr/local/include/comelang2.h"
                exit(1);
            }
            # 2075 "/usr/local/include/comelang2.h"
            __result137__ = __result_obj__ = result_152;
            come_call_finalizer2(smart_pointer$1charp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result137__;
            come_call_finalizer2(smart_pointer$1charp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_class(char* name, _Bool native_, struct sInfo* info){
void* __result_obj__;
void* right_value127;
void* right_value128;
struct list$1sNodeph* nodes_155;
_Bool _while_condtional24;
_Bool _if_conditional177;
void* right_value129;
struct sNode* node_156;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional182;
void* right_value133;
void* right_value134;
struct sNode* _inf_value1;
struct sClassNode* _inf_obj_value1;
void* right_value143;
struct sNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&nodes_155, 0, sizeof(struct list$1sNodeph*));
right_value129 = (void*)0;
memset(&node_156, 0, sizeof(struct sNode*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value143 = (void*)0;
    # 432 "02class.c"
    expected_next_character(123,info);
    # 434 "02class.c"
    nodes_155=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value128=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value127=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02class.c", 434, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 463 "02class.c"
    while(_while_condtional24=(_Bool)1,    _while_condtional24) {
        # 442 "02class.c"
        # 436 "02class.c"
        if(_if_conditional177=smart_pointer$1charp_operator_derefference(info->p)==125,        _if_conditional177) {
            # 437 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 438 "02class.c"
            skip_spaces_and_lf(info);
            # 439 "02class.c"
            break;
        }
        # 442 "02class.c"
        node_156=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=expression_v3(info))));
        if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 449 "02class.c"
        # 444 "02class.c"
        if(_if_conditional178=node_156==((void*)0),        _if_conditional178) {
            # 445 "02class.c"
            err_msg(info,"null node");
            # 446 "02class.c"
            exit(2);
        }
        # 454 "02class.c"
        # 449 "02class.c"
        if(_if_conditional179=smart_pointer$1charp_operator_derefference(info->p)==59,        _if_conditional179) {
            # 450 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 451 "02class.c"
            skip_spaces_and_lf(info);
        }
        # 454 "02class.c"
        list$1sNodeph_add(nodes_155,(struct sNode*)come_increment_ref_count(node_156));
        # 461 "02class.c"
        # 456 "02class.c"
        if(_if_conditional182=smart_pointer$1charp_operator_derefference(info->p)==125,        _if_conditional182) {
            # 457 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 458 "02class.c"
            skip_spaces_and_lf(info);
            # 459 "02class.c"
            if(node_156) { node_156 = come_decrement_ref_count2(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        if(node_156) { node_156 = come_decrement_ref_count2(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 463 "02class.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "02class.c", 463, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sClassNode*)(right_value134=sClassNode_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value133=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "02class.c", 463, "sClassNode")))),(char*)come_increment_ref_count(name),(struct list$1sNodeph*)come_increment_ref_count(nodes_155),native_,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sClassNode_finalize;
    _inf_value1->clone=(void*)sClassNode_clone;
    _inf_value1->compile=(void*)sClassNode_compile;
    _inf_value1->sline=(void*)sClassNode_sline;
    _inf_value1->sname=(void*)sClassNode_sname;
    _inf_value1->terminated=(void*)sClassNode_terminated;
    _inf_value1->kind=(void*)sClassNode_kind;
    __result148__ = __result_obj__ = ((struct sNode*)(right_value143=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClassNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClassNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result148__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "/usr/local/include/comelang2.h"
        self->head=((void*)0);
        # 105 "/usr/local/include/comelang2.h"
        self->tail=((void*)0);
        # 106 "/usr/local/include/comelang2.h"
        self->len=0;
        # 108 "/usr/local/include/comelang2.h"
        __result140__ = __result_obj__ = self;
        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result140__;
        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional180;
void* right_value130;
struct list_item$1sNodeph* litem_157;
struct sNode* __dec_obj36;
_Bool _if_conditional181;
void* right_value131;
struct list_item$1sNodeph* litem_158;
struct sNode* __dec_obj37;
void* right_value132;
struct list_item$1sNodeph* litem_159;
struct sNode* __dec_obj38;
struct list$1sNodeph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sNodeph*));
right_value131 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1sNodeph*));
right_value132 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1sNodeph*));
            # 186 "/usr/local/include/comelang2.h"
            # 155 "/usr/local/include/comelang2.h"
            if(_if_conditional180=self->len==0,            _if_conditional180) {
                # 156 "/usr/local/include/comelang2.h"
                litem_157=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value130=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 158 "/usr/local/include/comelang2.h"
                litem_157->prev=((void*)0);
                # 159 "/usr/local/include/comelang2.h"
                litem_157->next=((void*)0);
                # 160 "/usr/local/include/comelang2.h"
                __dec_obj36=litem_157->item;
                litem_157->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
                # 162 "/usr/local/include/comelang2.h"
                self->tail=litem_157;
                # 163 "/usr/local/include/comelang2.h"
                self->head=litem_157;
            }
            else {
                # 186 "/usr/local/include/comelang2.h"
                # 165 "/usr/local/include/comelang2.h"
                if(_if_conditional181=self->len==1,                _if_conditional181) {
                    # 166 "/usr/local/include/comelang2.h"
                    litem_158=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value131=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 168 "/usr/local/include/comelang2.h"
                    litem_158->prev=self->head;
                    # 169 "/usr/local/include/comelang2.h"
                    litem_158->next=((void*)0);
                    # 170 "/usr/local/include/comelang2.h"
                    __dec_obj37=litem_158->item;
                    litem_158->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                    # 172 "/usr/local/include/comelang2.h"
                    self->tail=litem_158;
                    # 173 "/usr/local/include/comelang2.h"
                    self->head->next=litem_158;
                }
                else {
                    # 176 "/usr/local/include/comelang2.h"
                    litem_159=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 178 "/usr/local/include/comelang2.h"
                    litem_159->prev=self->tail;
                    # 179 "/usr/local/include/comelang2.h"
                    litem_159->next=((void*)0);
                    # 180 "/usr/local/include/comelang2.h"
                    __dec_obj38=litem_159->item;
                    litem_159->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                    # 182 "/usr/local/include/comelang2.h"
                    self->tail->next=litem_159;
                    # 183 "/usr/local/include/comelang2.h"
                    self->tail=litem_159;
                }
            }
            # 186 "/usr/local/include/comelang2.h"
            self->len++;
            # 188 "/usr/local/include/comelang2.h"
            __result141__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result141__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sClassNode_finalize(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sClassNode_finalize"
        # 0 "sClassNode_finalize"
        if(_if_conditional183=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional183) {
            # 0 "sClassNode_finalize"
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sClassNode_finalize"
        # 1 "sClassNode_finalize"
        if(_if_conditional184=self!=((void*)0)&&self->nodes!=((void*)0),        _if_conditional184) {
            # 1 "sClassNode_finalize"
            come_call_finalizer2(list$1sNodephp_finalize,self->nodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sClassNode_finalize"
        # 2 "sClassNode_finalize"
        if(_if_conditional185=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional185) {
            # 2 "sClassNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional186;
struct sClassNode* __result142__;
void* right_value135;
struct sClassNode* result_160;
_Bool _if_conditional187;
void* right_value136;
char* __dec_obj39;
_Bool _if_conditional188;
void* right_value141;
struct list$1sNodeph* __dec_obj40;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value142;
char* __dec_obj41;
struct sClassNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_160, 0, sizeof(struct sClassNode*));
right_value136 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
        # 3 "sClassNode_clone"
        # 2 "sClassNode_clone"
        if(_if_conditional186=self==(void*)0,        _if_conditional186) {
            # 2 "sClassNode_clone"
            __result142__ = __result_obj__ = (void*)0;
            return __result142__;
        }
        # 3 "sClassNode_clone"
        result_160=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value135=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"))));
        come_call_finalizer2(sClassNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sClassNode_clone"
        # 4 "sClassNode_clone"
        if(_if_conditional187=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional187) {
            # 4 "sClassNode_clone"
            __dec_obj39=result_160->name;
            result_160->name=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->name))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "sClassNode_clone"
        # 5 "sClassNode_clone"
        if(_if_conditional188=self!=((void*)0)&&self->nodes!=((void*)0),        _if_conditional188) {
            # 5 "sClassNode_clone"
            __dec_obj40=result_160->nodes;
            result_160->nodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value141=list$1sNodephp_clone(self->nodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sClassNode_clone"
        # 6 "sClassNode_clone"
        if(_if_conditional199=self!=((void*)0),        _if_conditional199) {
            # 6 "sClassNode_clone"
            result_160->native_=self->native_;
        }
        # 8 "sClassNode_clone"
        # 7 "sClassNode_clone"
        if(_if_conditional200=self!=((void*)0),        _if_conditional200) {
            # 7 "sClassNode_clone"
            result_160->sline=self->sline;
        }
        # 9 "sClassNode_clone"
        # 8 "sClassNode_clone"
        if(_if_conditional201=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional201) {
            # 8 "sClassNode_clone"
            __dec_obj41=result_160->sname;
            result_160->sname=(char*)come_increment_ref_count(((char*)(right_value142=string_clone(self->sname))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 9 "sClassNode_clone"
        __result147__ = __result_obj__ = result_160;
        come_call_finalizer2(sClassNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result147__;
        come_call_finalizer2(sClassNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional189;
struct list$1sNodeph* __result143__;
void* right_value137;
void* right_value138;
struct list$1sNodeph* result_161;
struct list_item$1sNodeph* it_162;
_Bool _while_condtional25;
void* right_value140;
struct list$1sNodeph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&result_161, 0, sizeof(struct list$1sNodeph*));
memset(&it_162, 0, sizeof(struct list_item$1sNodeph*));
right_value140 = (void*)0;
                # 142 "/usr/local/include/comelang2.h"
                # 139 "/usr/local/include/comelang2.h"
                if(_if_conditional189=self==((void*)0),                _if_conditional189) {
                    # 140 "/usr/local/include/comelang2.h"
                    __result143__ = __result_obj__ = ((void*)0);
                    return __result143__;
                }
                # 142 "/usr/local/include/comelang2.h"
                result_161=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value138=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "/usr/local/include/comelang2.h"
                it_162=self->head;
                # 151 "/usr/local/include/comelang2.h"
                while(_while_condtional25=it_162!=((void*)0),                _while_condtional25) {
                    # 146 "/usr/local/include/comelang2.h"
                    list$1sNodeph_add(result_161,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=sNode_clone(it_162->item)))));
                    if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "/usr/local/include/comelang2.h"
                    it_162=it_162->next;
                }
                # 151 "/usr/local/include/comelang2.h"
                __result146__ = __result_obj__ = result_161;
                come_call_finalizer2(list$1sNodephp_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result146__;
                come_call_finalizer2(list$1sNodephp_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional190;
struct sNode* __result144__;
void* right_value139;
struct sNode* result_163;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
struct sNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&result_163, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional190=self==(void*)0,                        _if_conditional190) {
                            # 2 "sNode_clone"
                            __result144__ = __result_obj__ = (void*)0;
                            return __result144__;
                        }
                        # 3 "sNode_clone"
                        result_163=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional191=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional191) {
                            # 4 "sNode_clone"
                            result_163->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional192=self!=((void*)0),                        _if_conditional192) {
                            # 5 "sNode_clone"
                            result_163->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional193=self!=((void*)0),                        _if_conditional193) {
                            # 6 "sNode_clone"
                            result_163->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional194=self!=((void*)0),                        _if_conditional194) {
                            # 7 "sNode_clone"
                            result_163->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional195=self!=((void*)0),                        _if_conditional195) {
                            # 8 "sNode_clone"
                            result_163->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional196=self!=((void*)0),                        _if_conditional196) {
                            # 9 "sNode_clone"
                            result_163->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional197=self!=((void*)0),                        _if_conditional197) {
                            # 10 "sNode_clone"
                            result_163->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional198=self!=((void*)0),                        _if_conditional198) {
                            # 11 "sNode_clone"
                            result_163->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result145__ = __result_obj__ = result_163;
                        if(result_163) { result_163 = come_decrement_ref_count2(result_163, ((struct sNode*)result_163)->finalize, ((struct sNode*)result_163)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result145__;
                        if(result_163) { result_163 = come_decrement_ref_count2(result_163, ((struct sNode*)result_163)->finalize, ((struct sNode*)result_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sType* parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value144;
char* type_name_164;
void* right_value145;
void* right_value146;
struct sType* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&type_name_164, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
    # 468 "02class.c"
    type_name_164=(char*)come_increment_ref_count(((char*)(right_value144=parse_word(info))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 470 "02class.c"
    __result149__ = __result_obj__ = ((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02class.c", 470, "sType")))),type_name_164,info)));
    type_name_164 = come_decrement_ref_count2(type_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result149__;
    type_name_164 = come_decrement_ref_count2(type_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value147;
void* right_value148;
struct list$1tuple2$2charphsTypephph* params_165;
_Bool _while_condtional26;
_Bool _if_conditional202;
void* right_value149;
char* name_166;
void* right_value150;
struct sType* type_167;
void* right_value154;
void* right_value155;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sType* result_type_171;
_Bool _if_conditional210;
void* right_value156;
struct sType* __dec_obj47;
void* right_value157;
void* right_value158;
struct sType* __dec_obj48;
void* right_value159;
void* right_value160;
struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&params_165, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
right_value149 = (void*)0;
memset(&name_166, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&type_167, 0, sizeof(struct sType*));
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&result_type_171, 0, sizeof(struct sType*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    # 475 "02class.c"
    expected_next_character(40,info);
    # 477 "02class.c"
    params_165=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value148=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value147=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02class.c", 477, "list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 509 "02class.c"
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        # 486 "02class.c"
        # 480 "02class.c"
        if(_if_conditional202=smart_pointer$1charp_operator_derefference(info->p)==41,        _if_conditional202) {
            # 481 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 482 "02class.c"
            skip_spaces_and_lf(info);
            # 483 "02class.c"
            break;
        }
        # 486 "02class.c"
        name_166=(char*)come_increment_ref_count(((char*)(right_value149=parse_word(info))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 488 "02class.c"
        expected_next_character(58,info);
        # 490 "02class.c"
        type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=parse_type(info))));
        come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 492 "02class.c"
        list$1tuple2$2charphsTypephph_add(params_165,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value155=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value154=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02class.c", 492, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(type_167))))));
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 507 "02class.c"
        # 494 "02class.c"
        if(_if_conditional207=smart_pointer$1charp_operator_derefference(info->p)==44,        _if_conditional207) {
            # 495 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 496 "02class.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 507 "02class.c"
            # 498 "02class.c"
            if(_if_conditional208=smart_pointer$1charp_operator_derefference(info->p)==41,            _if_conditional208) {
                # 499 "02class.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 500 "02class.c"
                skip_spaces_and_lf(info);
                # 501 "02class.c"
                name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            else {
                # 507 "02class.c"
                # 503 "02class.c"
                if(_if_conditional209=smart_pointer$1charp_operator_derefference(info->p)==0,                _if_conditional209) {
                    # 504 "02class.c"
                    err_msg(info,"invalid source end");
                    # 505 "02class.c"
                    exit(2);
                }
            }
        }
        name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 509 "02class.c"
    result_type_171=((void*)0);
    # 520 "02class.c"
    # 510 "02class.c"
    if(_if_conditional210=smart_pointer$1charp_operator_derefference(info->p)==58,    _if_conditional210) {
        # 511 "02class.c"
        smart_pointer$1charp_operator_plus_plus(info->p);
        # 512 "02class.c"
        skip_spaces_and_lf(info);
        # 514 "02class.c"
        __dec_obj47=result_type_171;
        result_type_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=parse_type(info))));
        come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 517 "02class.c"
        __dec_obj48=result_type_171;
        result_type_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02class.c", 517, "sType")))),"void",info))));
        come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 520 "02class.c"
    __result154__ = __result_obj__ = ((struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph*)(right_value160=tuple2$2list$1tuple2$2charphsTypephphphsTypeph_initialize((struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph*)come_increment_ref_count(((struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph*)(right_value159=(struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph*)come_calloc(1, sizeof(struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph)*(1), "02class.c", 520, "struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph")))),(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(params_165),(struct sType*)come_increment_ref_count(result_type_171))));
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result154__;
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "/usr/local/include/comelang2.h"
        self->head=((void*)0);
        # 105 "/usr/local/include/comelang2.h"
        self->tail=((void*)0);
        # 106 "/usr/local/include/comelang2.h"
        self->len=0;
        # 108 "/usr/local/include/comelang2.h"
        __result150__ = __result_obj__ = self;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result150__;
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional203;
void* right_value151;
struct list_item$1tuple2$2charphsTypephph* litem_168;
struct tuple2$2charphsTypeph* __dec_obj42;
_Bool _if_conditional206;
void* right_value152;
struct list_item$1tuple2$2charphsTypephph* litem_169;
struct tuple2$2charphsTypeph* __dec_obj43;
void* right_value153;
struct list_item$1tuple2$2charphsTypephph* litem_170;
struct tuple2$2charphsTypeph* __dec_obj44;
struct list$1tuple2$2charphsTypephph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value152 = (void*)0;
memset(&litem_169, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value153 = (void*)0;
memset(&litem_170, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 186 "/usr/local/include/comelang2.h"
            # 155 "/usr/local/include/comelang2.h"
            if(_if_conditional203=self->len==0,            _if_conditional203) {
                # 156 "/usr/local/include/comelang2.h"
                litem_168=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value151=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 158 "/usr/local/include/comelang2.h"
                litem_168->prev=((void*)0);
                # 159 "/usr/local/include/comelang2.h"
                litem_168->next=((void*)0);
                # 160 "/usr/local/include/comelang2.h"
                __dec_obj42=litem_168->item;
                litem_168->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 162 "/usr/local/include/comelang2.h"
                self->tail=litem_168;
                # 163 "/usr/local/include/comelang2.h"
                self->head=litem_168;
            }
            else {
                # 186 "/usr/local/include/comelang2.h"
                # 165 "/usr/local/include/comelang2.h"
                if(_if_conditional206=self->len==1,                _if_conditional206) {
                    # 166 "/usr/local/include/comelang2.h"
                    litem_169=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value152=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 168 "/usr/local/include/comelang2.h"
                    litem_169->prev=self->head;
                    # 169 "/usr/local/include/comelang2.h"
                    litem_169->next=((void*)0);
                    # 170 "/usr/local/include/comelang2.h"
                    __dec_obj43=litem_169->item;
                    litem_169->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 172 "/usr/local/include/comelang2.h"
                    self->tail=litem_169;
                    # 173 "/usr/local/include/comelang2.h"
                    self->head->next=litem_169;
                }
                else {
                    # 176 "/usr/local/include/comelang2.h"
                    litem_170=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value153=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 178 "/usr/local/include/comelang2.h"
                    litem_170->prev=self->tail;
                    # 179 "/usr/local/include/comelang2.h"
                    litem_170->next=((void*)0);
                    # 180 "/usr/local/include/comelang2.h"
                    __dec_obj44=litem_170->item;
                    litem_170->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 182 "/usr/local/include/comelang2.h"
                    self->tail->next=litem_170;
                    # 183 "/usr/local/include/comelang2.h"
                    self->tail=litem_170;
                }
            }
            # 186 "/usr/local/include/comelang2.h"
            self->len++;
            # 188 "/usr/local/include/comelang2.h"
            __result151__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result151__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsTypeph_finalize"
                    # 0 "tuple2$2charphsTypeph_finalize"
                    if(_if_conditional204=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional204) {
                        # 0 "tuple2$2charphsTypeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsTypeph_finalize"
                    # 1 "tuple2$2charphsTypeph_finalize"
                    if(_if_conditional205=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional205) {
                        # 1 "tuple2$2charphsTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj45;
struct sType* __dec_obj46;
struct tuple2$2charphsTypeph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1775 "/usr/local/include/comelang2.h"
            __dec_obj45=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1776 "/usr/local/include/comelang2.h"
            __dec_obj46=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1778 "/usr/local/include/comelang2.h"
            __result152__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result152__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* tuple2$2list$1tuple2$2charphsTypephphphsTypeph_initialize(struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* self, struct list$1tuple2$2charphsTypephph* v1, struct sType* v2){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __dec_obj49;
struct sType* __dec_obj50;
struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1775 "/usr/local/include/comelang2.h"
        __dec_obj49=self->v1;
        self->v1=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(v1);
        come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1776 "/usr/local/include/comelang2.h"
        __dec_obj50=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1778 "/usr/local/include/comelang2.h"
        __result153__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result153__;
        come_call_finalizer2(tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize(struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional211;
_Bool _if_conditional212;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize"
            # 0 "tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize"
            if(_if_conditional211=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional211) {
                # 0 "tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize"
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize"
            # 1 "tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize"
            if(_if_conditional212=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional212) {
                # 1 "tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize"
                come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

struct list$1sNodeph* parse_calling_params(struct sInfo* info){
void* __result_obj__;
void* right_value161;
void* right_value162;
struct list$1sNodeph* params_172;
_Bool _while_condtional27;
_Bool _if_conditional213;
void* right_value163;
struct sNode* exp_173;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct list$1sNodeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&params_172, 0, sizeof(struct list$1sNodeph*));
right_value163 = (void*)0;
memset(&exp_173, 0, sizeof(struct sNode*));
    # 525 "02class.c"
    expected_next_character(40,info);
    # 527 "02class.c"
    params_172=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value162=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value161=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02class.c", 527, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 560 "02class.c"
    while(_while_condtional27=(_Bool)1,    _while_condtional27) {
        # 536 "02class.c"
        # 530 "02class.c"
        if(_if_conditional213=smart_pointer$1charp_operator_derefference(info->p)==41,        _if_conditional213) {
            # 531 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 532 "02class.c"
            skip_spaces_and_lf(info);
            # 533 "02class.c"
            break;
        }
        # 536 "02class.c"
        exp_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=expression_v3(info))));
        if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 543 "02class.c"
        # 538 "02class.c"
        if(_if_conditional214=exp_173==((void*)0),        _if_conditional214) {
            # 539 "02class.c"
            err_msg(info,"require node");
            # 540 "02class.c"
            exit(1);
        }
        # 543 "02class.c"
        list$1sNodeph_add(params_172,(struct sNode*)come_increment_ref_count(exp_173));
        # 558 "02class.c"
        # 545 "02class.c"
        if(_if_conditional215=smart_pointer$1charp_operator_derefference(info->p)==44,        _if_conditional215) {
            # 546 "02class.c"
            smart_pointer$1charp_operator_plus_plus(info->p);
            # 547 "02class.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 558 "02class.c"
            # 549 "02class.c"
            if(_if_conditional216=smart_pointer$1charp_operator_derefference(info->p)==41,            _if_conditional216) {
                # 550 "02class.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 551 "02class.c"
                skip_spaces_and_lf(info);
                # 552 "02class.c"
                if(exp_173) { exp_173 = come_decrement_ref_count2(exp_173, ((struct sNode*)exp_173)->finalize, ((struct sNode*)exp_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                # 558 "02class.c"
                # 554 "02class.c"
                if(_if_conditional217=smart_pointer$1charp_operator_derefference(info->p)==0,                _if_conditional217) {
                    # 555 "02class.c"
                    err_msg(info,"invalid source end");
                    # 556 "02class.c"
                    exit(2);
                }
            }
        }
        if(exp_173) { exp_173 = come_decrement_ref_count2(exp_173, ((struct sNode*)exp_173)->finalize, ((struct sNode*)exp_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 560 "02class.c"
    __result155__ = __result_obj__ = params_172;
    come_call_finalizer2(list$1sNodephp_finalize,params_172, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result155__;
    come_call_finalizer2(list$1sNodephp_finalize,params_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_fun(char* name, struct sInfo* info){
void* __result_obj__;
_Bool native__174;
void* right_value164;
struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph* multiple_assign_var1;
struct list$1tuple2$2charphsTypephph* params_175;
struct sType* result_type_176;
void* right_value165;
void* right_value166;
struct list$1sNodeph* nodes_177;
_Bool _if_conditional218;
_Bool _while_condtional28;
_Bool _if_conditional219;
void* right_value167;
struct sNode* node_178;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value168;
void* right_value169;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value191;
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&native__174, 0, sizeof(_Bool));
right_value164 = (void*)0;
memset(&params_175, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&result_type_176, 0, sizeof(struct sType*));
memset(&params_175, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&result_type_176, 0, sizeof(struct sType*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&nodes_177, 0, sizeof(struct list$1sNodeph*));
right_value167 = (void*)0;
memset(&node_178, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value191 = (void*)0;
    # 565 "02class.c"
    native__174=(_Bool)0;
    # 566 "02class.c"
    multiple_assign_var1=((struct tuple2$2list$1tuple2$2charphsTypephphphsTypeph*)(right_value164=parse_params(info)));
    params_175=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(multiple_assign_var1->v1);
    result_type_176=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
    come_call_finalizer2(tuple2$2list$1tuple2$2charphsTypephphphsTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 568 "02class.c"
    nodes_177=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value166=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value165=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02class.c", 568, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 608 "02class.c"
    # 570 "02class.c"
    if(_if_conditional218=smart_pointer$1charp_operator_derefference(info->p)==59,    _if_conditional218) {
        # 571 "02class.c"
        smart_pointer$1charp_operator_plus_plus(info->p);
        # 572 "02class.c"
        skip_spaces_and_lf(info);
        # 574 "02class.c"
        native__174=(_Bool)1;
    }
    else {
        # 577 "02class.c"
        expected_next_character(123,info);
        # 606 "02class.c"
        while(_while_condtional28=(_Bool)1,        _while_condtional28) {
            # 586 "02class.c"
            # 580 "02class.c"
            if(_if_conditional219=smart_pointer$1charp_operator_derefference(info->p)==125,            _if_conditional219) {
                # 581 "02class.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 582 "02class.c"
                skip_spaces_and_lf(info);
                # 583 "02class.c"
                break;
            }
            # 586 "02class.c"
            node_178=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=expression_v3(info))));
            if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 593 "02class.c"
            # 588 "02class.c"
            if(_if_conditional220=node_178==((void*)0),            _if_conditional220) {
                # 589 "02class.c"
                err_msg(info,"null node");
                # 590 "02class.c"
                exit(2);
            }
            # 598 "02class.c"
            # 593 "02class.c"
            if(_if_conditional221=smart_pointer$1charp_operator_derefference(info->p)==59,            _if_conditional221) {
                # 594 "02class.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 595 "02class.c"
                skip_spaces_and_lf(info);
            }
            # 598 "02class.c"
            list$1sNodeph_add(nodes_177,(struct sNode*)come_increment_ref_count(node_178));
            # 605 "02class.c"
            # 600 "02class.c"
            if(_if_conditional222=smart_pointer$1charp_operator_derefference(info->p)==125,            _if_conditional222) {
                # 601 "02class.c"
                smart_pointer$1charp_operator_plus_plus(info->p);
                # 602 "02class.c"
                skip_spaces_and_lf(info);
                # 603 "02class.c"
                if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 608 "02class.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "02class.c", 608, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value169=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value168=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "02class.c", 608, "sFunNode")))),(char*)come_increment_ref_count(name),(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(params_175),(struct sType*)come_increment_ref_count(result_type_176),(struct list$1sNodeph*)come_increment_ref_count(nodes_177),native__174,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    __result168__ = __result_obj__ = ((struct sNode*)(right_value191=_inf_value2));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFunNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result168__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,params_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,nodes_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFunNode_finalize"
        # 0 "sFunNode_finalize"
        if(_if_conditional223=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional223) {
            # 0 "sFunNode_finalize"
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFunNode_finalize"
        # 1 "sFunNode_finalize"
        if(_if_conditional224=self!=((void*)0)&&self->nodes!=((void*)0),        _if_conditional224) {
            # 1 "sFunNode_finalize"
            come_call_finalizer2(list$1sNodephp_finalize,self->nodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sFunNode_finalize"
        # 2 "sFunNode_finalize"
        if(_if_conditional225=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional225) {
            # 2 "sFunNode_finalize"
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFunNode_finalize"
        # 3 "sFunNode_finalize"
        if(_if_conditional226=self!=((void*)0)&&self->result_type!=((void*)0),        _if_conditional226) {
            # 3 "sFunNode_finalize"
            come_call_finalizer2(sType_finalize,self->result_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sFunNode_finalize"
        # 4 "sFunNode_finalize"
        if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional227) {
            # 4 "sFunNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional228;
struct sFunNode* __result156__;
void* right_value170;
struct sFunNode* result_179;
_Bool _if_conditional229;
void* right_value171;
char* __dec_obj51;
_Bool _if_conditional230;
void* right_value172;
struct list$1sNodeph* __dec_obj52;
_Bool _if_conditional231;
void* right_value188;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
_Bool _if_conditional243;
void* right_value189;
struct sType* __dec_obj61;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value190;
char* __dec_obj62;
struct sFunNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&result_179, 0, sizeof(struct sFunNode*));
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
        # 3 "sFunNode_clone"
        # 2 "sFunNode_clone"
        if(_if_conditional228=self==(void*)0,        _if_conditional228) {
            # 2 "sFunNode_clone"
            __result156__ = __result_obj__ = (void*)0;
            return __result156__;
        }
        # 3 "sFunNode_clone"
        result_179=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value170=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
        come_call_finalizer2(sFunNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sFunNode_clone"
        # 4 "sFunNode_clone"
        if(_if_conditional229=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional229) {
            # 4 "sFunNode_clone"
            __dec_obj51=result_179->name;
            result_179->name=(char*)come_increment_ref_count(((char*)(right_value171=string_clone(self->name))));
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "sFunNode_clone"
        # 5 "sFunNode_clone"
        if(_if_conditional230=self!=((void*)0)&&self->nodes!=((void*)0),        _if_conditional230) {
            # 5 "sFunNode_clone"
            __dec_obj52=result_179->nodes;
            result_179->nodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value172=list$1sNodephp_clone(self->nodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sFunNode_clone"
        # 6 "sFunNode_clone"
        if(_if_conditional231=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional231) {
            # 6 "sFunNode_clone"
            __dec_obj60=result_179->params;
            result_179->params=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value188=list$1tuple2$2charphsTypephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sFunNode_clone"
        # 7 "sFunNode_clone"
        if(_if_conditional243=self!=((void*)0)&&self->result_type!=((void*)0),        _if_conditional243) {
            # 7 "sFunNode_clone"
            __dec_obj61=result_179->result_type;
            result_179->result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(self->result_type))));
            come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sFunNode_clone"
        # 8 "sFunNode_clone"
        if(_if_conditional244=self!=((void*)0),        _if_conditional244) {
            # 8 "sFunNode_clone"
            result_179->native_=self->native_;
        }
        # 10 "sFunNode_clone"
        # 9 "sFunNode_clone"
        if(_if_conditional245=self!=((void*)0),        _if_conditional245) {
            # 9 "sFunNode_clone"
            result_179->sline=self->sline;
        }
        # 11 "sFunNode_clone"
        # 10 "sFunNode_clone"
        if(_if_conditional246=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional246) {
            # 10 "sFunNode_clone"
            __dec_obj62=result_179->sname;
            result_179->sname=(char*)come_increment_ref_count(((char*)(right_value190=string_clone(self->sname))));
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 11 "sFunNode_clone"
        __result167__ = __result_obj__ = result_179;
        come_call_finalizer2(sFunNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result167__;
        come_call_finalizer2(sFunNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional232;
struct list$1tuple2$2charphsTypephph* __result157__;
void* right_value173;
void* right_value174;
struct list$1tuple2$2charphsTypephph* result_180;
struct list_item$1tuple2$2charphsTypephph* it_181;
_Bool _while_condtional29;
void* right_value187;
struct list$1tuple2$2charphsTypephph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&result_180, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_181, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value187 = (void*)0;
                # 142 "/usr/local/include/comelang2.h"
                # 139 "/usr/local/include/comelang2.h"
                if(_if_conditional232=self==((void*)0),                _if_conditional232) {
                    # 140 "/usr/local/include/comelang2.h"
                    __result157__ = __result_obj__ = ((void*)0);
                    return __result157__;
                }
                # 142 "/usr/local/include/comelang2.h"
                result_180=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value174=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value173=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "/usr/local/include/comelang2.h"
                it_181=self->head;
                # 151 "/usr/local/include/comelang2.h"
                while(_while_condtional29=it_181!=((void*)0),                _while_condtional29) {
                    # 146 "/usr/local/include/comelang2.h"
                    list$1tuple2$2charphsTypephph_add(result_180,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value187=tuple2$2charphsTypephp_clone(it_181->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "/usr/local/include/comelang2.h"
                    it_181=it_181->next;
                }
                # 151 "/usr/local/include/comelang2.h"
                __result166__ = __result_obj__ = result_180;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result166__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct tuple2$2charphsTypeph* __result158__;
void* right_value175;
struct tuple2$2charphsTypeph* result_182;
_Bool _if_conditional234;
void* right_value176;
char* __dec_obj53;
_Bool _if_conditional235;
void* right_value186;
struct sType* __dec_obj59;
struct tuple2$2charphsTypeph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&result_182, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value176 = (void*)0;
right_value186 = (void*)0;
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional233=self==(void*)0,                        _if_conditional233) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result158__ = __result_obj__ = (void*)0;
                            return __result158__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_182=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value175=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional234=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional234) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj53=result_182->v1;
                            result_182->v1=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(self->v1))));
                            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional235=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional235) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj59=result_182->v2;
                            result_182->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result165__ = __result_obj__ = result_182;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_182, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional236;
struct sType* __result159__;
void* right_value177;
struct sType* result_183;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value184;
struct list$1sTypeph* __dec_obj57;
_Bool _if_conditional242;
void* right_value185;
struct list$1sTypeph* __dec_obj58;
struct sType* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&result_183, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
                                # 3 "sType_clone"
                                # 2 "sType_clone"
                                if(_if_conditional236=self==(void*)0,                                _if_conditional236) {
                                    # 2 "sType_clone"
                                    __result159__ = __result_obj__ = (void*)0;
                                    return __result159__;
                                }
                                # 3 "sType_clone"
                                result_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sType_clone"
                                # 4 "sType_clone"
                                if(_if_conditional237=self!=((void*)0),                                _if_conditional237) {
                                    # 4 "sType_clone"
                                    result_183->mClass=self->mClass;
                                }
                                # 6 "sType_clone"
                                # 5 "sType_clone"
                                if(_if_conditional238=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional238) {
                                    # 5 "sType_clone"
                                    __dec_obj57=result_183->mMultipleTypes;
                                    result_183->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value184=list$1sTypeph_clone(self->mMultipleTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sType_clone"
                                # 6 "sType_clone"
                                if(_if_conditional242=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional242) {
                                    # 6 "sType_clone"
                                    __dec_obj58=result_183->mGenericsTypes;
                                    result_183->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value185=list$1sTypeph_clone(self->mGenericsTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sType_clone"
                                __result164__ = __result_obj__ = result_183;
                                come_call_finalizer2(sType_finalize,result_183, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                                come_call_finalizer2(sType_finalize,result_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional239;
struct list$1sTypeph* __result160__;
void* right_value178;
void* right_value179;
struct list$1sTypeph* result_184;
struct list_item$1sTypeph* it_185;
_Bool _while_condtional30;
void* right_value183;
struct list$1sTypeph* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_184, 0, sizeof(struct list$1sTypeph*));
memset(&it_185, 0, sizeof(struct list_item$1sTypeph*));
right_value183 = (void*)0;
                                        # 142 "/usr/local/include/comelang2.h"
                                        # 139 "/usr/local/include/comelang2.h"
                                        if(_if_conditional239=self==((void*)0),                                        _if_conditional239) {
                                            # 140 "/usr/local/include/comelang2.h"
                                            __result160__ = __result_obj__ = ((void*)0);
                                            return __result160__;
                                        }
                                        # 142 "/usr/local/include/comelang2.h"
                                        result_184=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value179=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value178=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sTypeph"))))))));
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 144 "/usr/local/include/comelang2.h"
                                        it_185=self->head;
                                        # 151 "/usr/local/include/comelang2.h"
                                        while(_while_condtional30=it_185!=((void*)0),                                        _while_condtional30) {
                                            # 146 "/usr/local/include/comelang2.h"
                                            list$1sTypeph_add(result_184,(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(it_185->item)))));
                                            come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 148 "/usr/local/include/comelang2.h"
                                            it_185=it_185->next;
                                        }
                                        # 151 "/usr/local/include/comelang2.h"
                                        __result163__ = __result_obj__ = result_184;
                                        come_call_finalizer2(list$1sTypephp_finalize,result_184, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result163__;
                                        come_call_finalizer2(list$1sTypephp_finalize,result_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 104 "/usr/local/include/comelang2.h"
                                            self->head=((void*)0);
                                            # 105 "/usr/local/include/comelang2.h"
                                            self->tail=((void*)0);
                                            # 106 "/usr/local/include/comelang2.h"
                                            self->len=0;
                                            # 108 "/usr/local/include/comelang2.h"
                                            __result161__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result161__;
                                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional240;
void* right_value180;
struct list_item$1sTypeph* litem_186;
struct sType* __dec_obj54;
_Bool _if_conditional241;
void* right_value181;
struct list_item$1sTypeph* litem_187;
struct sType* __dec_obj55;
void* right_value182;
struct list_item$1sTypeph* litem_188;
struct sType* __dec_obj56;
struct list$1sTypeph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&litem_186, 0, sizeof(struct list_item$1sTypeph*));
right_value181 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1sTypeph*));
right_value182 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1sTypeph*));
                                                # 186 "/usr/local/include/comelang2.h"
                                                # 155 "/usr/local/include/comelang2.h"
                                                if(_if_conditional240=self->len==0,                                                _if_conditional240) {
                                                    # 156 "/usr/local/include/comelang2.h"
                                                    litem_186=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value180=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sTypeph"))));
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    # 158 "/usr/local/include/comelang2.h"
                                                    litem_186->prev=((void*)0);
                                                    # 159 "/usr/local/include/comelang2.h"
                                                    litem_186->next=((void*)0);
                                                    # 160 "/usr/local/include/comelang2.h"
                                                    __dec_obj54=litem_186->item;
                                                    litem_186->item=(struct sType*)come_increment_ref_count(item);
                                                    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 162 "/usr/local/include/comelang2.h"
                                                    self->tail=litem_186;
                                                    # 163 "/usr/local/include/comelang2.h"
                                                    self->head=litem_186;
                                                }
                                                else {
                                                    # 186 "/usr/local/include/comelang2.h"
                                                    # 165 "/usr/local/include/comelang2.h"
                                                    if(_if_conditional241=self->len==1,                                                    _if_conditional241) {
                                                        # 166 "/usr/local/include/comelang2.h"
                                                        litem_187=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value181=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 168 "/usr/local/include/comelang2.h"
                                                        litem_187->prev=self->head;
                                                        # 169 "/usr/local/include/comelang2.h"
                                                        litem_187->next=((void*)0);
                                                        # 170 "/usr/local/include/comelang2.h"
                                                        __dec_obj55=litem_187->item;
                                                        litem_187->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 172 "/usr/local/include/comelang2.h"
                                                        self->tail=litem_187;
                                                        # 173 "/usr/local/include/comelang2.h"
                                                        self->head->next=litem_187;
                                                    }
                                                    else {
                                                        # 176 "/usr/local/include/comelang2.h"
                                                        litem_188=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value182=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 178 "/usr/local/include/comelang2.h"
                                                        litem_188->prev=self->tail;
                                                        # 179 "/usr/local/include/comelang2.h"
                                                        litem_188->next=((void*)0);
                                                        # 180 "/usr/local/include/comelang2.h"
                                                        __dec_obj56=litem_188->item;
                                                        litem_188->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 182 "/usr/local/include/comelang2.h"
                                                        self->tail->next=litem_188;
                                                        # 183 "/usr/local/include/comelang2.h"
                                                        self->tail=litem_188;
                                                    }
                                                }
                                                # 186 "/usr/local/include/comelang2.h"
                                                self->len++;
                                                # 188 "/usr/local/include/comelang2.h"
                                                __result162__ = __result_obj__ = self;
                                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result162__;
                                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
    # 620 "02class.c"
    # 613 "02class.c"
    if(_if_conditional247=smart_pointer$1charp_operator_derefference(info->p)!=c,    _if_conditional247) {
        # 618 "02class.c"
        # 614 "02class.c"
        if(_if_conditional248=!info->no_output_err,        _if_conditional248) {
            # 615 "02class.c"
            err_msg(info,"expected next charaster is %c, but %c\n",c,smart_pointer$1charp_operator_derefference(info->p));
            # 616 "02class.c"
            exit(2);
        }
    }
    # 620 "02class.c"
    smart_pointer$1charp_operator_plus_plus(info->p);
    # 621 "02class.c"
    skip_spaces_and_lf(info);
}

struct sNode* string_node(char* buf, struct sInfo* info){
void* __result_obj__;
struct sNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 626 "02class.c"
    __result169__ = __result_obj__ = ((void*)0);
    buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result169__;
    buf = come_decrement_ref_count2(buf, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* expression_v2(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional249;
void* right_value192;
char* buf_189;
_Bool kernel_method_190;
struct sClass* kernel_class_191;
_Bool _if_conditional250;
struct sMethod* method_192;
_Bool _if_conditional251;
_Bool class_method_193;
struct sClass* klass_194;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value193;
char* __dec_obj63;
_Bool _if_conditional255;
void* right_value194;
char* name_195;
void* right_value195;
struct sNode* node_196;
struct sNode* __result170__;
struct sNode* __result171__;
_Bool _if_conditional256;
void* right_value196;
char* name_197;
void* right_value197;
struct sNode* node_198;
struct sNode* __result172__;
_Bool _if_conditional257;
void* right_value198;
char* name_199;
void* right_value199;
struct sNode* node_200;
struct sNode* __result173__;
_Bool _if_conditional258;
void* right_value200;
char* method_name_201;
void* right_value201;
struct list$1sNodeph* params_202;
void* right_value202;
void* right_value203;
struct sNode* _inf_value3;
struct sClassMethodCall* _inf_obj_value3;
void* right_value209;
struct sNode* __result176__;
_Bool _if_conditional269;
void* right_value210;
struct list$1sNodeph* params_204;
void* right_value211;
void* right_value212;
struct sNode* _inf_value4;
struct sKernelMethodCall* _inf_obj_value4;
void* right_value217;
struct sNode* __result179__;
void* right_value218;
struct sNode* __result180__;
void* right_value219;
struct sNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
memset(&buf_189, 0, sizeof(char*));
memset(&kernel_method_190, 0, sizeof(_Bool));
memset(&kernel_class_191, 0, sizeof(struct sClass*));
memset(&method_192, 0, sizeof(struct sMethod*));
memset(&class_method_193, 0, sizeof(_Bool));
memset(&klass_194, 0, sizeof(struct sClass*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&name_195, 0, sizeof(char*));
right_value195 = (void*)0;
memset(&node_196, 0, sizeof(struct sNode*));
right_value196 = (void*)0;
memset(&name_197, 0, sizeof(char*));
right_value197 = (void*)0;
memset(&node_198, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&name_199, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&node_200, 0, sizeof(struct sNode*));
right_value200 = (void*)0;
memset(&method_name_201, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&params_202, 0, sizeof(struct list$1sNodeph*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&params_204, 0, sizeof(struct list$1sNodeph*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
    # 705 "02class.c"
    # 631 "02class.c"
    if(_if_conditional249=xisalpha(smart_pointer$1charp_operator_derefference(info->p)),    _if_conditional249) {
        # 632 "02class.c"
        buf_189=(char*)come_increment_ref_count(((char*)(right_value192=parse_word(info))));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 634 "02class.c"
        kernel_method_190=(_Bool)0;
        # 647 "02class.c"
        {
            # 636 "02class.c"
            kernel_class_191=map$2charphsClassphp_operator_load_element(info->classes,"Kernel");
            # 645 "02class.c"
            # 638 "02class.c"
            if(kernel_class_191) {
                # 639 "02class.c"
                method_192=map$2charphsMethodphp_operator_load_element(kernel_class_191->mMethods,buf_189);
                # 644 "02class.c"
                # 641 "02class.c"
                if(method_192) {
                    # 642 "02class.c"
                    kernel_method_190=(_Bool)1;
                }
            }
        }
        # 647 "02class.c"
        class_method_193=(_Bool)0;
        # 658 "02class.c"
        {
            # 649 "02class.c"
            klass_194=map$2charphsClassphp_operator_load_element(info->classes,buf_189);
            # 656 "02class.c"
            # 651 "02class.c"
            if(klass_194) {
                # 655 "02class.c"
                # 652 "02class.c"
                if(_if_conditional253=smart_pointer$1charp_operator_derefference(info->p)==46,                _if_conditional253) {
                    # 653 "02class.c"
                    class_method_193=(_Bool)1;
                }
            }
        }
        # 703 "02class.c"
        # 658 "02class.c"
        if(_if_conditional254=string_operator_equals(buf_189,"native"),        _if_conditional254) {
            # 659 "02class.c"
            __dec_obj63=buf_189;
            buf_189=(char*)come_increment_ref_count(((char*)(right_value193=parse_word(info))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 671 "02class.c"
            # 661 "02class.c"
            if(_if_conditional255=string_operator_equals(buf_189,"class"),            _if_conditional255) {
                # 662 "02class.c"
                name_195=(char*)come_increment_ref_count(((char*)(right_value194=parse_word(info))));
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 664 "02class.c"
                node_196=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=parse_class((char*)come_increment_ref_count(name_195),(_Bool)1,info))));
                if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 666 "02class.c"
                __result170__ = __result_obj__ = node_196;
                name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_196) { node_196 = come_decrement_ref_count2(node_196, ((struct sNode*)node_196)->finalize, ((struct sNode*)node_196)->_protocol_obj, 0, 1, 0, (void*)0); } 
                buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result170__;
                name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_196) { node_196 = come_decrement_ref_count2(node_196, ((struct sNode*)node_196)->finalize, ((struct sNode*)node_196)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 669 "02class.c"
                __result171__ = __result_obj__ = ((void*)0);
                buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result171__;
            }
        }
        else {
            # 703 "02class.c"
            # 672 "02class.c"
            if(_if_conditional256=string_operator_equals(buf_189,"class"),            _if_conditional256) {
                # 673 "02class.c"
                name_197=(char*)come_increment_ref_count(((char*)(right_value196=parse_word(info))));
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 675 "02class.c"
                node_198=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=parse_class((char*)come_increment_ref_count(name_197),(_Bool)0,info))));
                if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 677 "02class.c"
                __result172__ = __result_obj__ = node_198;
                name_197 = come_decrement_ref_count2(name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 1, 0, (void*)0); } 
                buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result172__;
                name_197 = come_decrement_ref_count2(name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 703 "02class.c"
                # 679 "02class.c"
                if(_if_conditional257=string_operator_equals(buf_189,"def"),                _if_conditional257) {
                    # 680 "02class.c"
                    name_199=(char*)come_increment_ref_count(((char*)(right_value198=parse_word(info))));
                    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 682 "02class.c"
                    node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=parse_fun((char*)come_increment_ref_count(name_199),info))));
                    if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 684 "02class.c"
                    __result173__ = __result_obj__ = node_200;
                    name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_200) { node_200 = come_decrement_ref_count2(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result173__;
                    name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_200) { node_200 = come_decrement_ref_count2(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 703 "02class.c"
                    # 686 "02class.c"
                    if(class_method_193) {
                        # 687 "02class.c"
                        expected_next_character(46,info);
                        # 689 "02class.c"
                        method_name_201=(char*)come_increment_ref_count(((char*)(right_value200=parse_word(info))));
                        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 691 "02class.c"
                        params_202=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value201=parse_calling_params(info))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 693 "02class.c"
                        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "02class.c", 693, "struct sNode");
                        _inf_obj_value3=come_increment_ref_count(((struct sClassMethodCall*)(right_value203=sClassMethodCall_initialize((struct sClassMethodCall*)come_increment_ref_count(((struct sClassMethodCall*)(right_value202=(struct sClassMethodCall*)come_calloc(1, sizeof(struct sClassMethodCall)*(1), "02class.c", 693, "sClassMethodCall")))),(char*)come_increment_ref_count(buf_189),(char*)come_increment_ref_count(method_name_201),(struct list$1sNodeph*)come_increment_ref_count(params_202),info))));
                        _inf_value3->_protocol_obj=_inf_obj_value3;
                        _inf_value3->finalize=(void*)sClassMethodCall_finalize;
                        _inf_value3->clone=(void*)sClassMethodCall_clone;
                        _inf_value3->compile=(void*)sClassMethodCall_compile;
                        _inf_value3->sline=(void*)sClassMethodCall_sline;
                        _inf_value3->sname=(void*)sClassMethodCall_sname;
                        _inf_value3->terminated=(void*)sClassMethodCall_terminated;
                        _inf_value3->kind=(void*)sClassMethodCall_kind;
                        __result176__ = __result_obj__ = ((struct sNode*)(right_value209=_inf_value3));
                        method_name_201 = come_decrement_ref_count2(method_name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sNodephp_finalize,params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClassMethodCall_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sClassMethodCall_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result176__;
                        method_name_201 = come_decrement_ref_count2(method_name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sNodephp_finalize,params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 703 "02class.c"
                        # 695 "02class.c"
                        if(kernel_method_190) {
                            # 696 "02class.c"
                            params_204=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value210=parse_calling_params(info))));
                            come_call_finalizer2(list$1sNodephp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 698 "02class.c"
                            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "02class.c", 698, "struct sNode");
                            _inf_obj_value4=come_increment_ref_count(((struct sKernelMethodCall*)(right_value212=sKernelMethodCall_initialize((struct sKernelMethodCall*)come_increment_ref_count(((struct sKernelMethodCall*)(right_value211=(struct sKernelMethodCall*)come_calloc(1, sizeof(struct sKernelMethodCall)*(1), "02class.c", 698, "sKernelMethodCall")))),(char*)come_increment_ref_count(buf_189),(struct list$1sNodeph*)come_increment_ref_count(params_204),info))));
                            _inf_value4->_protocol_obj=_inf_obj_value4;
                            _inf_value4->finalize=(void*)sKernelMethodCall_finalize;
                            _inf_value4->clone=(void*)sKernelMethodCall_clone;
                            _inf_value4->compile=(void*)sKernelMethodCall_compile;
                            _inf_value4->sline=(void*)sKernelMethodCall_sline;
                            _inf_value4->sname=(void*)sKernelMethodCall_sname;
                            _inf_value4->terminated=(void*)sKernelMethodCall_terminated;
                            _inf_value4->kind=(void*)sKernelMethodCall_kind;
                            __result179__ = __result_obj__ = ((struct sNode*)(right_value217=_inf_value4));
                            come_call_finalizer2(list$1sNodephp_finalize,params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sKernelMethodCall_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sKernelMethodCall_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result179__;
                            come_call_finalizer2(list$1sNodephp_finalize,params_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 701 "02class.c"
                            __result180__ = __result_obj__ = ((struct sNode*)(right_value218=string_node_v2((char*)come_increment_ref_count(buf_189),info)));
                            buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result180__;
                        }
                    }
                }
            }
        }
        buf_189 = come_decrement_ref_count2(buf_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 705 "02class.c"
    __result181__ = __result_obj__ = ((struct sNode*)(right_value219=add_sub_expression_node(info)));
    if(right_value219) { right_value219 = come_decrement_ref_count2(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result181__;
}

static void sClassMethodCall_finalize(struct sClassMethodCall* self){
void* __result_obj__;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sClassMethodCall_finalize"
                            # 0 "sClassMethodCall_finalize"
                            if(_if_conditional259=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional259) {
                                # 0 "sClassMethodCall_finalize"
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sClassMethodCall_finalize"
                            # 1 "sClassMethodCall_finalize"
                            if(_if_conditional260=self!=((void*)0)&&self->method_name!=((void*)0),                            _if_conditional260) {
                                # 1 "sClassMethodCall_finalize"
                                self->method_name = come_decrement_ref_count2(self->method_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sClassMethodCall_finalize"
                            # 2 "sClassMethodCall_finalize"
                            if(_if_conditional261=self!=((void*)0)&&self->params!=((void*)0),                            _if_conditional261) {
                                # 2 "sClassMethodCall_finalize"
                                come_call_finalizer2(list$1sNodephp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sClassMethodCall_finalize"
                            # 3 "sClassMethodCall_finalize"
                            if(_if_conditional262=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional262) {
                                # 3 "sClassMethodCall_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sClassMethodCall* sClassMethodCall_clone(struct sClassMethodCall* self){
void* __result_obj__;
_Bool _if_conditional263;
struct sClassMethodCall* __result174__;
void* right_value204;
struct sClassMethodCall* result_203;
_Bool _if_conditional264;
void* right_value205;
char* __dec_obj64;
_Bool _if_conditional265;
void* right_value206;
char* __dec_obj65;
_Bool _if_conditional266;
void* right_value207;
struct list$1sNodeph* __dec_obj66;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value208;
char* __dec_obj67;
struct sClassMethodCall* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
memset(&result_203, 0, sizeof(struct sClassMethodCall*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
                            # 3 "sClassMethodCall_clone"
                            # 2 "sClassMethodCall_clone"
                            if(_if_conditional263=self==(void*)0,                            _if_conditional263) {
                                # 2 "sClassMethodCall_clone"
                                __result174__ = __result_obj__ = (void*)0;
                                return __result174__;
                            }
                            # 3 "sClassMethodCall_clone"
                            result_203=(struct sClassMethodCall*)come_increment_ref_count(((struct sClassMethodCall*)(right_value204=(struct sClassMethodCall*)come_calloc(1, sizeof(struct sClassMethodCall)*(1), "sClassMethodCall_clone", 3, "sClassMethodCall"))));
                            come_call_finalizer2(sClassMethodCall_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sClassMethodCall_clone"
                            # 4 "sClassMethodCall_clone"
                            if(_if_conditional264=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional264) {
                                # 4 "sClassMethodCall_clone"
                                __dec_obj64=result_203->name;
                                result_203->name=(char*)come_increment_ref_count(((char*)(right_value205=string_clone(self->name))));
                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "sClassMethodCall_clone"
                            # 5 "sClassMethodCall_clone"
                            if(_if_conditional265=self!=((void*)0)&&self->method_name!=((void*)0),                            _if_conditional265) {
                                # 5 "sClassMethodCall_clone"
                                __dec_obj65=result_203->method_name;
                                result_203->method_name=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->method_name))));
                                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sClassMethodCall_clone"
                            # 6 "sClassMethodCall_clone"
                            if(_if_conditional266=self!=((void*)0)&&self->params!=((void*)0),                            _if_conditional266) {
                                # 6 "sClassMethodCall_clone"
                                __dec_obj66=result_203->params;
                                result_203->params=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value207=list$1sNodephp_clone(self->params))));
                                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sNodephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            # 8 "sClassMethodCall_clone"
                            # 7 "sClassMethodCall_clone"
                            if(_if_conditional267=self!=((void*)0),                            _if_conditional267) {
                                # 7 "sClassMethodCall_clone"
                                result_203->sline=self->sline;
                            }
                            # 9 "sClassMethodCall_clone"
                            # 8 "sClassMethodCall_clone"
                            if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional268) {
                                # 8 "sClassMethodCall_clone"
                                __dec_obj67=result_203->sname;
                                result_203->sname=(char*)come_increment_ref_count(((char*)(right_value208=string_clone(self->sname))));
                                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 9 "sClassMethodCall_clone"
                            __result175__ = __result_obj__ = result_203;
                            come_call_finalizer2(sClassMethodCall_finalize,result_203, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result175__;
                            come_call_finalizer2(sClassMethodCall_finalize,result_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sKernelMethodCall_finalize(struct sKernelMethodCall* self){
void* __result_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sKernelMethodCall_finalize"
                                # 0 "sKernelMethodCall_finalize"
                                if(_if_conditional270=self!=((void*)0)&&self->name!=((void*)0),                                _if_conditional270) {
                                    # 0 "sKernelMethodCall_finalize"
                                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sKernelMethodCall_finalize"
                                # 1 "sKernelMethodCall_finalize"
                                if(_if_conditional271=self!=((void*)0)&&self->params!=((void*)0),                                _if_conditional271) {
                                    # 1 "sKernelMethodCall_finalize"
                                    come_call_finalizer2(list$1sNodephp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sKernelMethodCall_finalize"
                                # 2 "sKernelMethodCall_finalize"
                                if(_if_conditional272=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional272) {
                                    # 2 "sKernelMethodCall_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sKernelMethodCall* sKernelMethodCall_clone(struct sKernelMethodCall* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sKernelMethodCall* __result177__;
void* right_value213;
struct sKernelMethodCall* result_205;
_Bool _if_conditional274;
void* right_value214;
char* __dec_obj68;
_Bool _if_conditional275;
void* right_value215;
struct list$1sNodeph* __dec_obj69;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value216;
char* __dec_obj70;
struct sKernelMethodCall* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
memset(&result_205, 0, sizeof(struct sKernelMethodCall*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
                                # 3 "sKernelMethodCall_clone"
                                # 2 "sKernelMethodCall_clone"
                                if(_if_conditional273=self==(void*)0,                                _if_conditional273) {
                                    # 2 "sKernelMethodCall_clone"
                                    __result177__ = __result_obj__ = (void*)0;
                                    return __result177__;
                                }
                                # 3 "sKernelMethodCall_clone"
                                result_205=(struct sKernelMethodCall*)come_increment_ref_count(((struct sKernelMethodCall*)(right_value213=(struct sKernelMethodCall*)come_calloc(1, sizeof(struct sKernelMethodCall)*(1), "sKernelMethodCall_clone", 3, "sKernelMethodCall"))));
                                come_call_finalizer2(sKernelMethodCall_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sKernelMethodCall_clone"
                                # 4 "sKernelMethodCall_clone"
                                if(_if_conditional274=self!=((void*)0)&&self->name!=((void*)0),                                _if_conditional274) {
                                    # 4 "sKernelMethodCall_clone"
                                    __dec_obj68=result_205->name;
                                    result_205->name=(char*)come_increment_ref_count(((char*)(right_value214=string_clone(self->name))));
                                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 6 "sKernelMethodCall_clone"
                                # 5 "sKernelMethodCall_clone"
                                if(_if_conditional275=self!=((void*)0)&&self->params!=((void*)0),                                _if_conditional275) {
                                    # 5 "sKernelMethodCall_clone"
                                    __dec_obj69=result_205->params;
                                    result_205->params=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value215=list$1sNodephp_clone(self->params))));
                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sKernelMethodCall_clone"
                                # 6 "sKernelMethodCall_clone"
                                if(_if_conditional276=self!=((void*)0),                                _if_conditional276) {
                                    # 6 "sKernelMethodCall_clone"
                                    result_205->sline=self->sline;
                                }
                                # 8 "sKernelMethodCall_clone"
                                # 7 "sKernelMethodCall_clone"
                                if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional277) {
                                    # 7 "sKernelMethodCall_clone"
                                    __dec_obj70=result_205->sname;
                                    result_205->sname=(char*)come_increment_ref_count(((char*)(right_value216=string_clone(self->sname))));
                                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sKernelMethodCall_clone"
                                __result178__ = __result_obj__ = result_205;
                                come_call_finalizer2(sKernelMethodCall_finalize,result_205, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result178__;
                                come_call_finalizer2(sKernelMethodCall_finalize,result_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

