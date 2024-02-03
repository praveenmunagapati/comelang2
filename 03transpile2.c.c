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
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
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
struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    char* mDeclareSName;
};
struct sInfo;
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
struct tuple1$1sTypeph
{
    struct sType* v1;
};
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
struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    char* mAsmName;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
};
struct sVarTable;
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
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
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
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};

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

void* come_calloc(long int count, long int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

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

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 39 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
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
    # 54 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
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
    # 75 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
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
    # 35 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
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
    # 41 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
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
    # 47 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
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
    # 108 "./comelang2.h"
    perror(msg);
    # 109 "./comelang2.h"
    stackframe();
    # 110 "./comelang2.h"
    exit(4);
    # 112 "./comelang2.h"
    __result7__ = (_Bool)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    # 1997 "./comelang2.h"
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    # 1999 "./comelang2.h"
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    # 2000 "./comelang2.h"
    result_0->p=result_0->memory->buf;
    # 2002 "./comelang2.h"
    __result8__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result8__;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    # 2007 "./comelang2.h"
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2007))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    # 2009 "./comelang2.h"
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    # 2010 "./comelang2.h"
    result_1->p=(char*)result_1->memory->buf;
    # 2012 "./comelang2.h"
    __result9__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result9__;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    # 2017 "./comelang2.h"
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2017))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    # 2019 "./comelang2.h"
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    # 2020 "./comelang2.h"
    result_2->p=(short short*)result_2->memory->buf;
    # 2022 "./comelang2.h"
    __result10__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result10__;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    # 2027 "./comelang2.h"
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    # 2029 "./comelang2.h"
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    # 2030 "./comelang2.h"
    result_3->p=(int*)result_3->memory->buf;
    # 2032 "./comelang2.h"
    __result11__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result11__;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    # 2037 "./comelang2.h"
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2037))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    # 2039 "./comelang2.h"
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    # 2040 "./comelang2.h"
    result_4->p=(long*)result_4->memory->buf;
    # 2042 "./comelang2.h"
    __result12__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result12__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void come_init_v3(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v3(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value12;
char* __result13__;
void* right_value13;
struct CVALUE* come_value_7;
void* right_value14;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
void* right_value15;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
_Bool _for_condtionalA1;
void* right_value16;
char* param_type_str_22;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value17;
char* __result22__;
_Bool _if_conditional53;
int i_23;
_Bool _for_condtionalA2;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value18;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
memset(&right_value16, 0, sizeof(void*));
memset(&param_type_str_22, 0, sizeof(char*));
memset(&right_value17, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
memset(&right_value18, 0, sizeof(void*));
    # 15 "03transpile2.c"
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    # 17 "03transpile2.c"
    class_name_6=type->mClass->mName;
    # 31 "03transpile2.c"
    # 19 "03transpile2.c"
    if(_if_conditional5=type->mAlignas,    _if_conditional5) {
        # 25 "03transpile2.c"
        # 20 "03transpile2.c"
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            # 21 "03transpile2.c"
            printf("_Alignas error\n");
            # 22 "03transpile2.c"
            __result13__ = __result_obj__ = ((char*)(right_value12=__builtin_string("")));
            if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12;
            __freed_obj__ = 0;
            return __result13__;
        }
        # 25 "03transpile2.c"
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value13=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
        # 26 "03transpile2.c"
        dec_stack_ptr(1,info);
        # 28 "03transpile2.c"
        buffer_append_str(buf_5,((char*)(right_value14=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
        if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value14;
        __freed_obj__ = 0;
        if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 35 "03transpile2.c"
    # 31 "03transpile2.c"
    if(_if_conditional25=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional25) {
        # 32 "03transpile2.c"
        buffer_append_str(buf_5,"static ");
    }
    # 39 "03transpile2.c"
    # 35 "03transpile2.c"
    if(_if_conditional26=type->mConstant,    _if_conditional26) {
        # 36 "03transpile2.c"
        buffer_append_str(buf_5,"const ");
    }
    # 44 "03transpile2.c"
    # 39 "03transpile2.c"
    if(_if_conditional27=type->mUnsigned,    _if_conditional27) {
        # 40 "03transpile2.c"
        buffer_append_str(buf_5,"unsigned ");
    }
    # 48 "03transpile2.c"
    # 44 "03transpile2.c"
    if(_if_conditional28=type->mShort,    _if_conditional28) {
        # 45 "03transpile2.c"
        buffer_append_str(buf_5,"short ");
    }
    # 128 "03transpile2.c"
    # 48 "03transpile2.c"
    if(_if_conditional29=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional29) {
        # 49 "03transpile2.c"
        buffer_append_str(buf_5,"va_list");
    }
    else {
        # 128 "03transpile2.c"
        # 51 "03transpile2.c"
        if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional30) {
            # 52 "03transpile2.c"
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            # 128 "03transpile2.c"
            # 54 "03transpile2.c"
            if(_if_conditional31=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional31) {
                # 61 "03transpile2.c"
                # 55 "03transpile2.c"
                if(_if_conditional32=in_header,                _if_conditional32) {
                    # 56 "03transpile2.c"
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    # 59 "03transpile2.c"
                    buffer_append_str(buf_5,"va_list");
                }
            }
            else {
                # 128 "03transpile2.c"
                # 62 "03transpile2.c"
                if(_if_conditional33=type->mClass->mStruct,                _if_conditional33) {
                    # 63 "03transpile2.c"
                    buffer_append_str(buf_5,"struct ");
                    # 64 "03transpile2.c"
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    # 128 "03transpile2.c"
                    # 66 "03transpile2.c"
                    if(_if_conditional34=type->mClass->mUnion,                    _if_conditional34) {
                        # 67 "03transpile2.c"
                        buffer_append_str(buf_5,"union ");
                        # 68 "03transpile2.c"
                        buffer_append_str(buf_5,class_name_6);
                    }
                    else {
                        # 128 "03transpile2.c"
                        # 70 "03transpile2.c"
                        if(_if_conditional35=type->mClass->mEnum,                        _if_conditional35) {
                            # 71 "03transpile2.c"
                            buffer_append_str(buf_5,"enum ");
                            # 72 "03transpile2.c"
                            buffer_append_str(buf_5,class_name_6);
                        }
                        else {
                            # 128 "03transpile2.c"
                            # 74 "03transpile2.c"
                            if(_if_conditional36=type->mLongLong,                            _if_conditional36) {
                                # 81 "03transpile2.c"
                                # 75 "03transpile2.c"
                                if(_if_conditional37=charp_operator_equals(class_name_6,"int"),                                _if_conditional37) {
                                    # 76 "03transpile2.c"
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    # 81 "03transpile2.c"
                                    # 78 "03transpile2.c"
                                    if(_if_conditional38=charp_operator_equals(class_name_6,"long"),                                    _if_conditional38) {
                                        # 79 "03transpile2.c"
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                # 128 "03transpile2.c"
                                # 82 "03transpile2.c"
                                if(_if_conditional39=type->mLong,                                _if_conditional39) {
                                    # 92 "03transpile2.c"
                                    # 83 "03transpile2.c"
                                    if(_if_conditional40=charp_operator_equals(class_name_6,"int"),                                    _if_conditional40) {
                                        # 84 "03transpile2.c"
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        # 92 "03transpile2.c"
                                        # 86 "03transpile2.c"
                                        if(_if_conditional41=charp_operator_equals(class_name_6,"long"),                                        _if_conditional41) {
                                            # 87 "03transpile2.c"
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            # 92 "03transpile2.c"
                                            # 89 "03transpile2.c"
                                            if(_if_conditional42=charp_operator_equals(class_name_6,"double"),                                            _if_conditional42) {
                                                # 90 "03transpile2.c"
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 128 "03transpile2.c"
                                    # 93 "03transpile2.c"
                                    if(_if_conditional43=charp_operator_equals(class_name_6,"long"),                                    _if_conditional43) {
                                        # 94 "03transpile2.c"
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        # 128 "03transpile2.c"
                                        # 96 "03transpile2.c"
                                        if(_if_conditional44=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional44) {
                                            # 97 "03transpile2.c"
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            # 128 "03transpile2.c"
                                            # 99 "03transpile2.c"
                                            if(_if_conditional45=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional45) {
                                                # 100 "03transpile2.c"
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                # 128 "03transpile2.c"
                                                # 102 "03transpile2.c"
                                                if(_if_conditional46=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional46) {
                                                    # 103 "03transpile2.c"
                                                    result_type_str_14=(char*)come_increment_ref_count(((char*)(right_value15=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                                                    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value15;
                                                    __freed_obj__ = 0;
                                                    # 104 "03transpile2.c"
                                                    buffer_append_str(buf_5,result_type_str_14);
                                                    # 105 "03transpile2.c"
                                                    buffer_append_str(buf_5," (*)(");
                                                    # 107 "03transpile2.c"
                                                    j_15=0;
                                                    # 118 "03transpile2.c"
                                                    for(
                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_19=list$1sTypeph_begin((o2_saved_16)) ,                                                    0;                                                    _for_condtionalA1=                                                    !list$1sTypeph_end((o2_saved_16)) ,                                                    _for_condtionalA1;                                                    it_19=list$1sTypeph_next((o2_saved_16)) ,                                                    0                                                    ){
                                                        # 109 "03transpile2.c"
                                                        param_type_str_22=(char*)come_increment_ref_count(((char*)(right_value16=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                                                        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value16;
                                                        __freed_obj__ = 0;
                                                        # 111 "03transpile2.c"
                                                        buffer_append_str(buf_5,param_type_str_22);
                                                        # 116 "03transpile2.c"
                                                        # 113 "03transpile2.c"
                                                        if(_if_conditional51=j_15!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional51) {
                                                            # 114 "03transpile2.c"
                                                            buffer_append_str(buf_5,",");
                                                        }
                                                        # 116 "03transpile2.c"
                                                        j_15++;
                                                        if(param_type_str_22 && !__freed_obj__) { param_type_str_22 = come_decrement_ref_count(param_type_str_22, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    # 118 "03transpile2.c"
                                                    buffer_append_str(buf_5,")");
                                                    if(result_type_str_14 && !__freed_obj__) { result_type_str_14 = come_decrement_ref_count(result_type_str_14, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    # 125 "03transpile2.c"
                                                    # 121 "03transpile2.c"
                                                    if(_if_conditional52=class_name_6==((void*)0),                                                    _if_conditional52) {
                                                        # 122 "03transpile2.c"
                                                        err_msg(info,"class name is null");
                                                        # 123 "03transpile2.c"
                                                        __result22__ = __result_obj__ = ((char*)(right_value17=__builtin_string("")));
                                                        if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                                        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value17;
                                                        __freed_obj__ = 0;
                                                        return __result22__;
                                                    }
                                                    # 125 "03transpile2.c"
                                                    buffer_append_str(buf_5,class_name_6);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 134 "03transpile2.c"
    # 128 "03transpile2.c"
    if(_if_conditional53=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional53) {
        # 132 "03transpile2.c"
        for(
        i_23=0 ,        0;        _for_condtionalA2=        i_23<type->mPointerNum ,        _for_condtionalA2;        i_23++ ,        0        ){
            # 130 "03transpile2.c"
            buffer_append_str(buf_5,"*");
        }
    }
    # 138 "03transpile2.c"
    # 134 "03transpile2.c"
    if(_if_conditional54=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional54) {
        # 135 "03transpile2.c"
        buffer_append_str(buf_5,"*");
    }
    # 142 "03transpile2.c"
    # 138 "03transpile2.c"
    if(_if_conditional55=type->mRestrict,    _if_conditional55) {
        # 139 "03transpile2.c"
        buffer_append_str(buf_5,"restrict");
    }
    # 142 "03transpile2.c"
    __result24__ = __result_obj__ = ((char*)(right_value18=buffer_to_string(buf_5)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value18;
    __freed_obj__ = 0;
    return __result24__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional7=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional7) {
                # 0 "CVALUE_finalize"
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional8=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional8) {
                # 1 "CVALUE_finalize"
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        # 0 "sType_finalize"
                        if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        # 1 "sType_finalize"
                        if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional12) {
                        # 2 "sType_finalize"
                        if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        # 3 "sType_finalize"
                        if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional15) {
                        # 4 "sType_finalize"
                        if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional17) {
                        # 5 "sType_finalize"
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional18) {
                        # 6 "sType_finalize"
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional20) {
                        # 7 "sType_finalize"
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional21) {
                        # 8 "sType_finalize"
                        if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional22) {
                        # 9 "sType_finalize"
                        if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        # 10 "sType_finalize"
                        if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional24) {
                        # 11 "sType_finalize"
                        if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional10) {
                                # 0 "tuple1$1sTypephp_finalize"
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                            # 176 "./comelang2.h"
                            it_8=self->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional1=it_8!=((void*)0),                            _while_condtional1) {
                                # 178 "./comelang2.h"
                                prev_it_9=it_8;
                                # 179 "./comelang2.h"
                                it_8=it_8->next;
                                # 180 "./comelang2.h"
                                if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional14) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                            # 176 "./comelang2.h"
                            it_10=self->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional2=it_10!=((void*)0),                            _while_condtional2) {
                                # 178 "./comelang2.h"
                                prev_it_11=it_10;
                                # 179 "./comelang2.h"
                                it_10=it_10->next;
                                # 180 "./comelang2.h"
                                if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional16) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                            # 176 "./comelang2.h"
                            it_12=self->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional3=it_12!=((void*)0),                            _while_condtional3) {
                                # 178 "./comelang2.h"
                                prev_it_13=it_12;
                                # 179 "./comelang2.h"
                                it_12=it_12->next;
                                # 180 "./comelang2.h"
                                if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "list_item$1charphp_finalize"
                                    # 0 "list_item$1charphp_finalize"
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        # 0 "list_item$1charphp_finalize"
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct sType* result_17;
struct sType* __result14__;
_Bool _if_conditional48;
struct sType* __result15__;
struct sType* result_18;
struct sType* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        # 343 "./comelang2.h"
                                                        # 338 "./comelang2.h"
                                                        if(_if_conditional47=self==((void*)0),                                                        _if_conditional47) {
                                                            # 339 "./comelang2.h"
                                                            # 340 "./comelang2.h"
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            # 341 "./comelang2.h"
                                                            __result14__ = __result_obj__ = result_17;
                                                            return __result14__;
                                                        }
                                                        # 343 "./comelang2.h"
                                                        self->it=self->head;
                                                        # 349 "./comelang2.h"
                                                        # 345 "./comelang2.h"
                                                        if(_if_conditional48=self->it,                                                        _if_conditional48) {
                                                            # 346 "./comelang2.h"
                                                            __result15__ = __result_obj__ = self->it->item;
                                                            return __result15__;
                                                        }
                                                        # 349 "./comelang2.h"
                                                        # 350 "./comelang2.h"
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        # 351 "./comelang2.h"
                                                        __result16__ = __result_obj__ = result_18;
                                                        return __result16__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 373 "./comelang2.h"
                                                        __result17__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result17__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* result_20;
struct sType* __result18__;
_Bool _if_conditional50;
struct sType* __result19__;
struct sType* result_21;
struct sType* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        # 361 "./comelang2.h"
                                                        # 355 "./comelang2.h"
                                                        if(_if_conditional49=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional49) {
                                                            # 356 "./comelang2.h"
                                                            # 357 "./comelang2.h"
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            # 358 "./comelang2.h"
                                                            __result18__ = __result_obj__ = result_20;
                                                            return __result18__;
                                                        }
                                                        # 361 "./comelang2.h"
                                                        self->it=self->it->next;
                                                        # 367 "./comelang2.h"
                                                        # 363 "./comelang2.h"
                                                        if(_if_conditional50=self->it,                                                        _if_conditional50) {
                                                            # 364 "./comelang2.h"
                                                            __result19__ = __result_obj__ = self->it->item;
                                                            return __result19__;
                                                        }
                                                        # 367 "./comelang2.h"
                                                        # 368 "./comelang2.h"
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        # 369 "./comelang2.h"
                                                        __result20__ = __result_obj__ = result_21;
                                                        return __result20__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            # 417 "./comelang2.h"
                                                            __result21__ = self->len;
                                                            return __result21__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 417 "./comelang2.h"
        __result23__ = self->len;
        return __result23__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value19;
void* right_value20;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional56;
int i_26;
_Bool _for_condtionalA3;
struct sType* gtype_30;
void* right_value21;
_Bool _if_conditional59;
_Bool _if_conditional60;
int i_31;
_Bool _for_condtionalA4;
_Bool _if_conditional61;
void* right_value22;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
memset(&gtype_30, 0, sizeof(struct sType*));
memset(&right_value21, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
    # 147 "03transpile2.c"
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value20;
    __freed_obj__ = 0;
    # 149 "03transpile2.c"
    class_name_25=type->mClass->mName;
    # 151 "03transpile2.c"
    buffer_append_str(buf_24,class_name_25);
    # 168 "03transpile2.c"
    # 153 "03transpile2.c"
    if(_if_conditional56=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional56) {
        # 154 "03transpile2.c"
        buffer_append_str(buf_24,"<");
        # 165 "03transpile2.c"
        for(
        i_26=0 ,        0;        _for_condtionalA3=        i_26<list$1sTypeph_length(type->mGenericsTypes) ,        _for_condtionalA3;        i_26++ ,        0        ){
            # 156 "03transpile2.c"
            gtype_30=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_26);
            # 158 "03transpile2.c"
            buffer_append_str(buf_24,((char*)(right_value21=make_come_type_name_string(gtype_30,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
            # 163 "03transpile2.c"
            # 160 "03transpile2.c"
            if(_if_conditional59=i_26!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional59) {
                # 161 "03transpile2.c"
                buffer_append_str(buf_24,",");
            }
        }
        # 165 "03transpile2.c"
        buffer_append_str(buf_24,">");
    }
    # 174 "03transpile2.c"
    # 168 "03transpile2.c"
    if(_if_conditional60=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    _if_conditional60) {
        # 172 "03transpile2.c"
        for(
        i_31=0 ,        0;        _for_condtionalA4=        i_31<type->mPointerNum ,        _for_condtionalA4;        i_31++ ,        0        ){
            # 170 "03transpile2.c"
            buffer_append_str(buf_24,"*");
        }
    }
    # 178 "03transpile2.c"
    # 174 "03transpile2.c"
    if(_if_conditional61=type->mHeap,    _if_conditional61) {
        # 175 "03transpile2.c"
        buffer_append_str(buf_24,"%");
    }
    # 178 "03transpile2.c"
    __result27__ = __result_obj__ = ((char*)(right_value22=buffer_to_string(buf_24)));
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value22;
    __freed_obj__ = 0;
    return __result27__;
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional58;
struct sType* __result25__;
struct sType* default_value_29;
struct sType* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&default_value_29, 0, sizeof(struct sType*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional57=position<0,                _if_conditional57) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_27=self->head;
                # 746 "./comelang2.h"
                i_28=0;
                # 753 "./comelang2.h"
                while(_while_condtional4=it_27!=((void*)0),                _while_condtional4) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional58=position==i_28,                    _if_conditional58) {
                        # 749 "./comelang2.h"
                        __result25__ = __result_obj__ = it_27->item;
                        return __result25__;
                    }
                    # 751 "./comelang2.h"
                    it_27=it_27->next;
                    # 752 "./comelang2.h"
                    i_28++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_29,0,sizeof(struct sType*));
                # 757 "./comelang2.h"
                __result26__ = __result_obj__ = default_value_29;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result26__;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    # 183 "03transpile2.c"
    puts(((char*)(right_value23=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23;
    __freed_obj__ = 0;
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
void* right_value25;
struct buffer* buf_32;
_Bool _if_conditional62;
void* right_value26;
char* __result28__;
_Bool _if_conditional63;
void* right_value27;
int i_33;
struct list$1sTypeph* o2_saved_34;
struct sType* it_35;
_Bool _for_condtionalA5;
void* right_value28;
_Bool _if_conditional64;
void* right_value29;
void* right_value30;
char* __result29__;
void* right_value31;
void* right_value32;
int i_36;
struct list$1sTypeph* o2_saved_37;
struct sType* it_38;
_Bool _for_condtionalA6;
void* right_value33;
_Bool _if_conditional65;
void* right_value34;
char* __result30__;
void* right_value35;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&buf_32, 0, sizeof(struct buffer*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&i_33, 0, sizeof(int));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_35, 0, sizeof(struct sType*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&i_36, 0, sizeof(int));
memset(&o2_saved_37, 0, sizeof(struct list$1sTypeph*));
memset(&it_38, 0, sizeof(struct sType*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
    # 188 "03transpile2.c"
    buf_32=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value25;
    __freed_obj__ = 0;
    # 194 "03transpile2.c"
    # 189 "03transpile2.c"
    if(_if_conditional62=type->mResultType==((void*)0),    _if_conditional62) {
        # 190 "03transpile2.c"
        err_msg(info,"invalid lambda type");
        # 191 "03transpile2.c"
        __result28__ = __result_obj__ = ((char*)(right_value26=__builtin_string("")));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value26;
        __freed_obj__ = 0;
        return __result28__;
    }
    # 230 "03transpile2.c"
    # 194 "03transpile2.c"
    if(_if_conditional63=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional63) {
        # 196 "03transpile2.c"
        buffer_append_str(buf_32,((char*)(right_value27=xsprintf("(*%s)(",var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27;
        __freed_obj__ = 0;
        # 198 "03transpile2.c"
        i_33=0;
        # 208 "03transpile2.c"
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_35=list$1sTypeph_begin((o2_saved_34)) ,        0;        _for_condtionalA5=        !list$1sTypeph_end((o2_saved_34)) ,        _for_condtionalA5;        it_35=list$1sTypeph_next((o2_saved_34)) ,        0        ){
            # 200 "03transpile2.c"
            buffer_append_str(buf_32,((char*)(right_value28=make_type_name_string(it_35,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value28;
            __freed_obj__ = 0;
            # 205 "03transpile2.c"
            # 201 "03transpile2.c"
            if(_if_conditional64=i_33!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional64) {
                # 202 "03transpile2.c"
                buffer_append_str(buf_32,",");
            }
            # 205 "03transpile2.c"
            i_33++;
        }
        if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 208 "03transpile2.c"
        buffer_append_str(buf_32,")");
        # 210 "03transpile2.c"
        __result29__ = __result_obj__ = ((char*)(right_value30=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value29=buffer_to_string(buf_32))),info)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value29;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value30;
        __freed_obj__ = 0;
        return __result29__;
    }
    else {
        # 213 "03transpile2.c"
        buffer_append_str(buf_32,((char*)(right_value32=xsprintf("%s (*%s)(",((char*)(right_value31=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value31;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value32;
        __freed_obj__ = 0;
        # 215 "03transpile2.c"
        i_36=0;
        # 225 "03transpile2.c"
        for(
        o2_saved_37=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_38=list$1sTypeph_begin((o2_saved_37)) ,        0;        _for_condtionalA6=        !list$1sTypeph_end((o2_saved_37)) ,        _for_condtionalA6;        it_38=list$1sTypeph_next((o2_saved_37)) ,        0        ){
            # 217 "03transpile2.c"
            buffer_append_str(buf_32,((char*)(right_value33=make_type_name_string(it_38,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value33;
            __freed_obj__ = 0;
            # 222 "03transpile2.c"
            # 218 "03transpile2.c"
            if(_if_conditional65=i_36!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional65) {
                # 219 "03transpile2.c"
                buffer_append_str(buf_32,",");
            }
            # 222 "03transpile2.c"
            i_36++;
        }
        if(o2_saved_37 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_37, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 225 "03transpile2.c"
        buffer_append_str(buf_32,")");
        # 227 "03transpile2.c"
        __result30__ = __result_obj__ = ((char*)(right_value34=buffer_to_string(buf_32)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value34;
        __freed_obj__ = 0;
        return __result30__;
    }
    # 230 "03transpile2.c"
    __result31__ = __result_obj__ = ((char*)(right_value35=buffer_to_string(buf_32)));
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value35;
    __freed_obj__ = 0;
    return __result31__;
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value36;
void* right_value37;
struct buffer* buf_39;
_Bool _if_conditional66;
void* right_value38;
char* str_40;
_Bool _if_conditional67;
void* right_value39;
char* str_41;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value40;
char* __result32__;
void* right_value41;
struct CVALUE* come_value_42;
void* right_value42;
char* type_str_43;
void* right_value43;
void* right_value44;
_Bool _if_conditional70;
void* right_value45;
_Bool _if_conditional71;
void* right_value46;
_Bool _if_conditional72;
void* right_value47;
char* type_str_44;
_Bool _if_conditional73;
void* right_value48;
_Bool _if_conditional74;
void* right_value49;
char* type_str_45;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list$1sNodeph* o2_saved_46;
struct sNode* it_49;
_Bool _for_condtionalA7;
_Bool _if_conditional81;
void* right_value50;
char* __result40__;
void* right_value51;
struct CVALUE* cvalue_52;
void* right_value52;
_Bool _if_conditional82;
void* right_value53;
void* right_value54;
char* type_str_53;
_Bool _if_conditional83;
void* right_value55;
char* __result41__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value56;
void* right_value57;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&buf_39, 0, sizeof(struct buffer*));
memset(&right_value38, 0, sizeof(void*));
memset(&str_40, 0, sizeof(char*));
memset(&right_value39, 0, sizeof(void*));
memset(&str_41, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&come_value_42, 0, sizeof(struct CVALUE*));
memset(&right_value42, 0, sizeof(void*));
memset(&type_str_43, 0, sizeof(char*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&type_str_44, 0, sizeof(char*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&type_str_45, 0, sizeof(char*));
memset(&o2_saved_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_49, 0, sizeof(struct sNode*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&cvalue_52, 0, sizeof(struct CVALUE*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&type_str_53, 0, sizeof(char*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
    # 237 "03transpile2.c"
    buf_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value36;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value37;
    __freed_obj__ = 0;
    # 336 "03transpile2.c"
    # 239 "03transpile2.c"
    if(_if_conditional66=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional66) {
        # 240 "03transpile2.c"
        str_40=(char*)come_increment_ref_count(((char*)(right_value38=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value38;
        __freed_obj__ = 0;
        # 242 "03transpile2.c"
        buffer_append_str(buf_39,str_40);
        if(str_40 && !__freed_obj__) { str_40 = come_decrement_ref_count(str_40, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 336 "03transpile2.c"
        # 244 "03transpile2.c"
        if(_if_conditional67=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional67) {
            # 245 "03transpile2.c"
            str_41=(char*)come_increment_ref_count(((char*)(right_value39=make_lambda_type_name_string(type,name,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
            # 247 "03transpile2.c"
            buffer_append_str(buf_39,str_41);
            if(str_41 && !__freed_obj__) { str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 336 "03transpile2.c"
            # 249 "03transpile2.c"
            if(_if_conditional68=type->mSizeNum!=((void*)0),            _if_conditional68) {
                # 255 "03transpile2.c"
                # 250 "03transpile2.c"
                if(_if_conditional69=!node_compile(type->mSizeNum,info),                _if_conditional69) {
                    # 251 "03transpile2.c"
                    err_msg(info,"invalid bit field number");
                    # 252 "03transpile2.c"
                    __result32__ = __result_obj__ = ((char*)(right_value40=__builtin_string("")));
                    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value40;
                    __freed_obj__ = 0;
                    return __result32__;
                }
                # 255 "03transpile2.c"
                come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value41=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value41;
                __freed_obj__ = 0;
                # 256 "03transpile2.c"
                dec_stack_ptr(1,info);
                # 258 "03transpile2.c"
                type_str_43=(char*)come_increment_ref_count(((char*)(right_value42=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value42;
                __freed_obj__ = 0;
                # 259 "03transpile2.c"
                buffer_append_str(buf_39,((char*)(right_value43=xsprintf("%s ",type_str_43))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value43;
                __freed_obj__ = 0;
                # 260 "03transpile2.c"
                buffer_append_str(buf_39,((char*)(right_value44=xsprintf("%s:%s",name,come_value_42->c_value))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value44;
                __freed_obj__ = 0;
                # 266 "03transpile2.c"
                # 262 "03transpile2.c"
                if(_if_conditional70=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional70) {
                    # 263 "03transpile2.c"
                    buffer_append_str(buf_39,((char*)(right_value45=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value45;
                    __freed_obj__ = 0;
                }
                # 269 "03transpile2.c"
                # 266 "03transpile2.c"
                if(_if_conditional71=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional71) {
                    # 267 "03transpile2.c"
                    buffer_append_str(buf_39,((char*)(right_value46=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value46;
                    __freed_obj__ = 0;
                }
                if(come_value_42 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_43 && !__freed_obj__) { type_str_43 = come_decrement_ref_count(type_str_43, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 336 "03transpile2.c"
                # 270 "03transpile2.c"
                if(_if_conditional72=type->mOmitArrayNum,                _if_conditional72) {
                    # 271 "03transpile2.c"
                    type_str_44=(char*)come_increment_ref_count(((char*)(right_value47=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value47;
                    __freed_obj__ = 0;
                    # 273 "03transpile2.c"
                    buffer_append_str(buf_39,type_str_44);
                    # 275 "03transpile2.c"
                    buffer_append_str(buf_39," ");
                    # 276 "03transpile2.c"
                    buffer_append_str(buf_39,name);
                    # 278 "03transpile2.c"
                    buffer_append_str(buf_39,"[]");
                    # 283 "03transpile2.c"
                    # 280 "03transpile2.c"
                    if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional73) {
                        # 281 "03transpile2.c"
                        buffer_append_str(buf_39,((char*)(right_value48=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value48;
                        __freed_obj__ = 0;
                    }
                    if(type_str_44 && !__freed_obj__) { type_str_44 = come_decrement_ref_count(type_str_44, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    # 336 "03transpile2.c"
                    # 284 "03transpile2.c"
                    if(_if_conditional74=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional74) {
                        # 285 "03transpile2.c"
                        type_str_45=(char*)come_increment_ref_count(((char*)(right_value49=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value49;
                        __freed_obj__ = 0;
                        # 287 "03transpile2.c"
                        buffer_append_str(buf_39,type_str_45);
                        # 289 "03transpile2.c"
                        buffer_append_str(buf_39," ");
                        # 293 "03transpile2.c"
                        # 290 "03transpile2.c"
                        if(_if_conditional75=type->mNoArrayPointerNum>0,                        _if_conditional75) {
                            # 291 "03transpile2.c"
                            buffer_append_str(buf_39,"(*");
                        }
                        # 293 "03transpile2.c"
                        buffer_append_str(buf_39,name);
                        # 298 "03transpile2.c"
                        # 294 "03transpile2.c"
                        if(_if_conditional76=type->mNoArrayPointerNum>0,                        _if_conditional76) {
                            # 295 "03transpile2.c"
                            buffer_append_str(buf_39,")");
                        }
                        # 309 "03transpile2.c"
                        for(
                        o2_saved_46=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_49=list$1sNodeph_begin((o2_saved_46)) ,                        0;                        _for_condtionalA7=                        !list$1sNodeph_end((o2_saved_46)) ,                        _for_condtionalA7;                        it_49=list$1sNodeph_next((o2_saved_46)) ,                        0                        ){
                            # 303 "03transpile2.c"
                            # 299 "03transpile2.c"
                            if(_if_conditional81=!node_compile(it_49,info),                            _if_conditional81) {
                                # 300 "03transpile2.c"
                                err_msg(info,"invalid array number");
                                # 301 "03transpile2.c"
                                __result40__ = __result_obj__ = ((char*)(right_value50=__builtin_string("")));
                                if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value50;
                                __freed_obj__ = 0;
                                return __result40__;
                            }
                            # 303 "03transpile2.c"
                            cvalue_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=get_value_from_stack(-1,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value51;
                            __freed_obj__ = 0;
                            # 304 "03transpile2.c"
                            dec_stack_ptr(1,info);
                            # 306 "03transpile2.c"
                            buffer_append_str(buf_39,((char*)(right_value52=xsprintf("[%s]",cvalue_52->c_value))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value52;
                            __freed_obj__ = 0;
                            if(cvalue_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 312 "03transpile2.c"
                        # 309 "03transpile2.c"
                        if(_if_conditional82=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional82) {
                            # 310 "03transpile2.c"
                            buffer_append_str(buf_39,((char*)(right_value53=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value53;
                            __freed_obj__ = 0;
                        }
                        if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        # 314 "03transpile2.c"
                        type_str_53=(char*)come_increment_ref_count(((char*)(right_value54=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54;
                        __freed_obj__ = 0;
                        # 320 "03transpile2.c"
                        # 316 "03transpile2.c"
                        if(_if_conditional83=string_operator_equals(type_str_53,""),                        _if_conditional83) {
                            # 317 "03transpile2.c"
                            __result41__ = __result_obj__ = ((char*)(right_value55=__builtin_string("")));
                            if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value55;
                            __freed_obj__ = 0;
                            return __result41__;
                        }
                        # 320 "03transpile2.c"
                        buffer_append_str(buf_39,type_str_53);
                        # 322 "03transpile2.c"
                        buffer_append_str(buf_39," ");
                        # 326 "03transpile2.c"
                        # 323 "03transpile2.c"
                        if(_if_conditional84=type->mNoArrayPointerNum>0,                        _if_conditional84) {
                            # 324 "03transpile2.c"
                            buffer_append_str(buf_39,"(*");
                        }
                        # 326 "03transpile2.c"
                        buffer_append_str(buf_39,name);
                        # 331 "03transpile2.c"
                        # 327 "03transpile2.c"
                        if(_if_conditional85=type->mNoArrayPointerNum>0,                        _if_conditional85) {
                            # 328 "03transpile2.c"
                            buffer_append_str(buf_39,")");
                        }
                        # 334 "03transpile2.c"
                        # 331 "03transpile2.c"
                        if(_if_conditional86=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional86) {
                            # 332 "03transpile2.c"
                            buffer_append_str(buf_39,((char*)(right_value56=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value56;
                            __freed_obj__ = 0;
                        }
                        if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    # 336 "03transpile2.c"
    __result42__ = __result_obj__ = ((char*)(right_value57=buffer_to_string(buf_39)));
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value57;
    __freed_obj__ = 0;
    return __result42__;
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
struct sNode* result_47;
struct sNode* __result33__;
_Bool _if_conditional78;
struct sNode* __result34__;
struct sNode* result_48;
struct sNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_47, 0, sizeof(struct sNode*));
memset(&result_48, 0, sizeof(struct sNode*));
                            # 343 "./comelang2.h"
                            # 338 "./comelang2.h"
                            if(_if_conditional77=self==((void*)0),                            _if_conditional77) {
                                # 339 "./comelang2.h"
                                # 340 "./comelang2.h"
                                memset(&result_47,0,sizeof(struct sNode*));
                                # 341 "./comelang2.h"
                                __result33__ = __result_obj__ = result_47;
                                return __result33__;
                            }
                            # 343 "./comelang2.h"
                            self->it=self->head;
                            # 349 "./comelang2.h"
                            # 345 "./comelang2.h"
                            if(_if_conditional78=self->it,                            _if_conditional78) {
                                # 346 "./comelang2.h"
                                __result34__ = __result_obj__ = self->it->item;
                                return __result34__;
                            }
                            # 349 "./comelang2.h"
                            # 350 "./comelang2.h"
                            memset(&result_48,0,sizeof(struct sNode*));
                            # 351 "./comelang2.h"
                            __result35__ = __result_obj__ = result_48;
                            return __result35__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 373 "./comelang2.h"
                            __result36__ = self==((void*)0)||self->it==((void*)0);
                            return __result36__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct sNode* result_50;
struct sNode* __result37__;
_Bool _if_conditional80;
struct sNode* __result38__;
struct sNode* result_51;
struct sNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_50, 0, sizeof(struct sNode*));
memset(&result_51, 0, sizeof(struct sNode*));
                            # 361 "./comelang2.h"
                            # 355 "./comelang2.h"
                            if(_if_conditional79=self==((void*)0)||self->it==((void*)0),                            _if_conditional79) {
                                # 356 "./comelang2.h"
                                # 357 "./comelang2.h"
                                memset(&result_50,0,sizeof(struct sNode*));
                                # 358 "./comelang2.h"
                                __result37__ = __result_obj__ = result_50;
                                return __result37__;
                            }
                            # 361 "./comelang2.h"
                            self->it=self->it->next;
                            # 367 "./comelang2.h"
                            # 363 "./comelang2.h"
                            if(_if_conditional80=self->it,                            _if_conditional80) {
                                # 364 "./comelang2.h"
                                __result38__ = __result_obj__ = self->it->item;
                                return __result38__;
                            }
                            # 367 "./comelang2.h"
                            # 368 "./comelang2.h"
                            memset(&result_51,0,sizeof(struct sNode*));
                            # 369 "./comelang2.h"
                            __result39__ = __result_obj__ = result_51;
                            return __result39__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value58;
void* right_value59;
struct buffer* output_54;
_Bool _if_conditional87;
void* right_value60;
void* right_value61;
struct buffer* output2_55;
int i_56;
struct list$1sTypeph* o2_saved_57;
struct sType* it_58;
_Bool _for_condtionalA8;
char* name_62;
void* right_value62;
char* str_63;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value63;
void* right_value64;
char* str_64;
void* right_value65;
_Bool _if_conditional92;
void* right_value100;
struct sType* base_result_type_83;
void* right_value101;
void* right_value102;
struct list$1sNodeph* __dec_obj28;
void* right_value103;
char* result_type_str_84;
int i_85;
struct list$1sTypeph* o2_saved_86;
struct sType* it_87;
_Bool _for_condtionalA9;
char* name_88;
void* right_value104;
char* str_89;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct sNode* node_93;
_Bool _if_conditional167;
void* right_value105;
char* __result65__;
void* right_value106;
struct CVALUE* cvalue_94;
void* right_value107;
void* right_value108;
void* right_value109;
char* result_type_str_95;
int i_96;
struct list$1sTypeph* o2_saved_97;
struct sType* it_98;
_Bool _for_condtionalA10;
char* name_99;
void* right_value110;
char* str_100;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&output_54, 0, sizeof(struct buffer*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&output2_55, 0, sizeof(struct buffer*));
memset(&i_56, 0, sizeof(int));
memset(&o2_saved_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct sType*));
memset(&name_62, 0, sizeof(char*));
memset(&right_value62, 0, sizeof(void*));
memset(&str_63, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&str_64, 0, sizeof(char*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&base_result_type_83, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&result_type_str_84, 0, sizeof(char*));
memset(&i_85, 0, sizeof(int));
memset(&o2_saved_86, 0, sizeof(struct list$1sTypeph*));
memset(&it_87, 0, sizeof(struct sType*));
memset(&name_88, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&str_89, 0, sizeof(char*));
memset(&node_93, 0, sizeof(struct sNode*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&cvalue_94, 0, sizeof(struct CVALUE*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&result_type_str_95, 0, sizeof(char*));
memset(&i_96, 0, sizeof(int));
memset(&o2_saved_97, 0, sizeof(struct list$1sTypeph*));
memset(&it_98, 0, sizeof(struct sType*));
memset(&name_99, 0, sizeof(char*));
memset(&right_value110, 0, sizeof(void*));
memset(&str_100, 0, sizeof(char*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    # 341 "03transpile2.c"
    output_54=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value59=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value58=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value59;
    __freed_obj__ = 0;
    # 455 "03transpile2.c"
    # 342 "03transpile2.c"
    if(_if_conditional87=fun->mResultType->mResultType,    _if_conditional87) {
        # 343 "03transpile2.c"
        output2_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value61=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value60=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value61;
        __freed_obj__ = 0;
        # 345 "03transpile2.c"
        buffer_append_str(output2_55,fun->mName);
        # 346 "03transpile2.c"
        buffer_append_str(output2_55,"(");
        # 348 "03transpile2.c"
        i_56=0;
        # 366 "03transpile2.c"
        for(
        o2_saved_57=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_58=list$1sTypeph_begin((o2_saved_57)) ,        0;        _for_condtionalA8=        !list$1sTypeph_end((o2_saved_57)) ,        _for_condtionalA8;        it_58=list$1sTypeph_next((o2_saved_57)) ,        0        ){
            # 350 "03transpile2.c"
            name_62=list$1charphp_operator_load_element(fun->mParamNames,i_56);
            # 352 "03transpile2.c"
            str_63=(char*)come_increment_ref_count(((char*)(right_value62=make_define_var(it_58,name_62,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = 0;
            # 353 "03transpile2.c"
            buffer_append_str(output2_55,str_63);
            # 364 "03transpile2.c"
            # 355 "03transpile2.c"
            if(_if_conditional90=i_56==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional90) {
                # 359 "03transpile2.c"
                # 356 "03transpile2.c"
                if(_if_conditional91=fun->mVarArgs,                _if_conditional91) {
                    # 357 "03transpile2.c"
                    buffer_append_str(output2_55,", ...");
                }
            }
            else {
                # 361 "03transpile2.c"
                buffer_append_str(output2_55,", ");
            }
            # 364 "03transpile2.c"
            i_56++;
            if(str_63 && !__freed_obj__) { str_63 = come_decrement_ref_count(str_63, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_57 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_57, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 366 "03transpile2.c"
        buffer_append_str(output2_55,")");
        # 368 "03transpile2.c"
        str_64=(char*)come_increment_ref_count(((char*)(right_value64=make_lambda_type_name_string(fun->mResultType,((char*)(right_value63=buffer_to_string(output2_55))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value63;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value64;
        __freed_obj__ = 0;
        # 370 "03transpile2.c"
        buffer_append_str(output_54,str_64);
        # 374 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value65=buffer_to_string(output_54))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value65;
        __freed_obj__ = 0;
        # 375 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,";\n");
        if(output2_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_64 && !__freed_obj__) { str_64 = come_decrement_ref_count(str_64, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 455 "03transpile2.c"
        # 377 "03transpile2.c"
        if(_if_conditional92=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional92) {
            # 378 "03transpile2.c"
            base_result_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            # 379 "03transpile2.c"
            __dec_obj28=base_result_type_83->mArrayNum;
            base_result_type_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379))))))));
            if(__dec_obj28) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value101;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value102;
            __freed_obj__ = 0;
            # 381 "03transpile2.c"
            result_type_str_84=(char*)come_increment_ref_count(((char*)(right_value103=make_type_name_string(base_result_type_83,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value103);
            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value103;
            __freed_obj__ = 0;
            # 383 "03transpile2.c"
            buffer_append_str(output_54,result_type_str_84);
            # 384 "03transpile2.c"
            buffer_append_str(output_54," (*");
            # 386 "03transpile2.c"
            buffer_append_str(output_54,fun->mName);
            # 387 "03transpile2.c"
            buffer_append_str(output_54,"(");
            # 389 "03transpile2.c"
            i_85=0;
            # 408 "03transpile2.c"
            for(
            o2_saved_86=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_87=list$1sTypeph_begin((o2_saved_86)) ,            0;            _for_condtionalA9=            !list$1sTypeph_end((o2_saved_86)) ,            _for_condtionalA9;            it_87=list$1sTypeph_next((o2_saved_86)) ,            0            ){
                # 391 "03transpile2.c"
                name_88=list$1charphp_operator_load_element(fun->mParamNames,i_85);
                # 393 "03transpile2.c"
                str_89=(char*)come_increment_ref_count(((char*)(right_value104=make_define_var(it_87,name_88,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value104;
                __freed_obj__ = 0;
                # 394 "03transpile2.c"
                buffer_append_str(output_54,str_89);
                # 405 "03transpile2.c"
                # 396 "03transpile2.c"
                if(_if_conditional163=i_85==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional163) {
                    # 400 "03transpile2.c"
                    # 397 "03transpile2.c"
                    if(_if_conditional164=fun->mVarArgs,                    _if_conditional164) {
                        # 398 "03transpile2.c"
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    # 402 "03transpile2.c"
                    buffer_append_str(output_54,", ");
                }
                # 405 "03transpile2.c"
                i_85++;
                if(str_89 && !__freed_obj__) { str_89 = come_decrement_ref_count(str_89, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_86 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 408 "03transpile2.c"
            node_93=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            # 414 "03transpile2.c"
            # 410 "03transpile2.c"
            if(_if_conditional167=!node_compile(node_93,info),            _if_conditional167) {
                # 411 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 412 "03transpile2.c"
                __result65__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
                if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
                if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                return __result65__;
            }
            # 414 "03transpile2.c"
            cvalue_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value106;
            __freed_obj__ = 0;
            # 415 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 417 "03transpile2.c"
            buffer_append_str(output_54,((char*)(right_value107=xsprintf("))[%s]",cvalue_94->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value107;
            __freed_obj__ = 0;
            # 419 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value108=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value108;
            __freed_obj__ = 0;
            # 420 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_94, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 423 "03transpile2.c"
            result_type_str_95=(char*)come_increment_ref_count(((char*)(right_value109=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value109;
            __freed_obj__ = 0;
            # 425 "03transpile2.c"
            buffer_append_str(output_54,result_type_str_95);
            # 426 "03transpile2.c"
            buffer_append_str(output_54," ");
            # 428 "03transpile2.c"
            buffer_append_str(output_54,fun->mName);
            # 429 "03transpile2.c"
            buffer_append_str(output_54,"(");
            # 431 "03transpile2.c"
            i_96=0;
            # 449 "03transpile2.c"
            for(
            o2_saved_97=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_98=list$1sTypeph_begin((o2_saved_97)) ,            0;            _for_condtionalA10=            !list$1sTypeph_end((o2_saved_97)) ,            _for_condtionalA10;            it_98=list$1sTypeph_next((o2_saved_97)) ,            0            ){
                # 433 "03transpile2.c"
                name_99=list$1charphp_operator_load_element(fun->mParamNames,i_96);
                # 435 "03transpile2.c"
                str_100=(char*)come_increment_ref_count(((char*)(right_value110=make_define_var(it_98,name_99,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value110;
                __freed_obj__ = 0;
                # 436 "03transpile2.c"
                buffer_append_str(output_54,str_100);
                # 446 "03transpile2.c"
                # 438 "03transpile2.c"
                if(_if_conditional168=i_96==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional168) {
                    # 442 "03transpile2.c"
                    # 439 "03transpile2.c"
                    if(_if_conditional169=fun->mVarArgs,                    _if_conditional169) {
                        # 440 "03transpile2.c"
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    # 444 "03transpile2.c"
                    buffer_append_str(output_54,", ");
                }
                # 446 "03transpile2.c"
                i_96++;
                if(str_100 && !__freed_obj__) { str_100 = come_decrement_ref_count(str_100, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_97 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_97, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 449 "03transpile2.c"
            buffer_append_str(output_54,")");
            # 451 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,((char*)(right_value111=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value111);
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value111;
            __freed_obj__ = 0;
            # 452 "03transpile2.c"
            buffer_append_str(info->module->mSourceHead,";\n");
            if(result_type_str_95 && !__freed_obj__) { result_type_str_95 = come_decrement_ref_count(result_type_str_95, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 455 "03transpile2.c"
    buffer_append_str(output_54,"{\n");
    # 457 "03transpile2.c"
    buffer_append_str(output_54,((char*)(right_value112=buffer_to_string(fun->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value112;
    __freed_obj__ = 0;
    # 458 "03transpile2.c"
    buffer_append_str(output_54,((char*)(right_value113=buffer_to_string(fun->mSourceHead2))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value113;
    __freed_obj__ = 0;
    # 459 "03transpile2.c"
    buffer_append_str(output_54,((char*)(right_value114=buffer_to_string(fun->mSource))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value114;
    __freed_obj__ = 0;
    # 461 "03transpile2.c"
    buffer_append_str(output_54,"}\n");
    # 463 "03transpile2.c"
    __result66__ = __result_obj__ = ((char*)(right_value115=buffer_to_string(output_54)));
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value115;
    __freed_obj__ = 0;
    return __result66__;
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
struct list_item$1charph* it_59;
int i_60;
_Bool _while_condtional5;
_Bool _if_conditional89;
char* __result43__;
char* default_value_61;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&i_60, 0, sizeof(int));
memset(&default_value_61, 0, sizeof(char*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional88=position<0,                _if_conditional88) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_59=self->head;
                # 746 "./comelang2.h"
                i_60=0;
                # 753 "./comelang2.h"
                while(_while_condtional5=it_59!=((void*)0),                _while_condtional5) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional89=position==i_60,                    _if_conditional89) {
                        # 749 "./comelang2.h"
                        __result43__ = __result_obj__ = it_59->item;
                        return __result43__;
                    }
                    # 751 "./comelang2.h"
                    it_59=it_59->next;
                    # 752 "./comelang2.h"
                    i_60++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_61,0,sizeof(char*));
                # 757 "./comelang2.h"
                __result44__ = __result_obj__ = default_value_61;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 1, 0); }
                return __result44__;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
struct sType* __result45__;
void* right_value66;
struct sType* result_65;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value69;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional99;
void* right_value70;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional100;
void* right_value71;
char* __dec_obj9;
_Bool _if_conditional101;
void* right_value78;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional105;
void* right_value86;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value87;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional120;
void* right_value94;
struct list$1charph* __dec_obj22;
_Bool _if_conditional124;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value96;
struct sNode* __dec_obj24;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value97;
struct sNode* __dec_obj25;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value98;
char* __dec_obj26;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value99;
char* __dec_obj27;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sType*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional93=self==(void*)0,                _if_conditional93) {
                    # 2 "sType_clone"
                    __result45__ = __result_obj__ = (void*)0;
                    return __result45__;
                }
                # 3 "sType_clone"
                result_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value66;
                __freed_obj__ = 0;
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 4 "sType_clone"
                    result_65->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional95=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional95) {
                    # 5 "sType_clone"
                    __dec_obj7=result_65->mNoSolvedGenericsType;
                    result_65->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value69=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional99) {
                    # 6 "sType_clone"
                    __dec_obj8=result_65->mOriginalLoadVarType;
                    result_65->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value70=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional100=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional100) {
                    # 7 "sType_clone"
                    __dec_obj9=result_65->mGenericsName;
                    result_65->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(self->mGenericsName))));
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value71;
                    __freed_obj__ = 0;
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional101=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional101) {
                    # 8 "sType_clone"
                    __dec_obj13=result_65->mGenericsTypes;
                    result_65->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value78=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value78;
                    __freed_obj__ = 0;
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional105=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional105) {
                    # 9 "sType_clone"
                    __dec_obj17=result_65->mArrayNum;
                    result_65->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value86=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value86;
                    __freed_obj__ = 0;
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    # 10 "sType_clone"
                    result_65->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional119) {
                    # 11 "sType_clone"
                    __dec_obj18=result_65->mParamTypes;
                    result_65->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value87;
                    __freed_obj__ = 0;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional120) {
                    # 12 "sType_clone"
                    __dec_obj22=result_65->mParamNames;
                    result_65->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value94;
                    __freed_obj__ = 0;
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional124) {
                    # 13 "sType_clone"
                    __dec_obj23=result_65->mResultType;
                    result_65->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value95;
                    __freed_obj__ = 0;
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    # 14 "sType_clone"
                    result_65->mVarArgs=self->mVarArgs;
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional126=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional126) {
                    # 15 "sType_clone"
                    __dec_obj24=result_65->mAlignas;
                    result_65->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(self->mAlignas))));
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value96;
                    __freed_obj__ = 0;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    # 16 "sType_clone"
                    result_65->mUnsigned=self->mUnsigned;
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    # 17 "sType_clone"
                    result_65->mShort=self->mShort;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    # 18 "sType_clone"
                    result_65->mLong=self->mLong;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    # 19 "sType_clone"
                    result_65->mLongLong=self->mLongLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    # 20 "sType_clone"
                    result_65->mConstant=self->mConstant;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    # 21 "sType_clone"
                    result_65->mRegister=self->mRegister;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    # 22 "sType_clone"
                    result_65->mVolatile=self->mVolatile;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    # 23 "sType_clone"
                    result_65->mStatic=self->mStatic;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    # 24 "sType_clone"
                    result_65->mExtern=self->mExtern;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    # 25 "sType_clone"
                    result_65->mRestrict=self->mRestrict;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    # 26 "sType_clone"
                    result_65->mImmutable=self->mImmutable;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    # 27 "sType_clone"
                    result_65->mHeap=self->mHeap;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    # 28 "sType_clone"
                    result_65->mDummyHeap=self->mDummyHeap;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    # 29 "sType_clone"
                    result_65->mDelegate=self->mDelegate;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    # 30 "sType_clone"
                    result_65->mShare=self->mShare;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    # 31 "sType_clone"
                    result_65->mClone=self->mClone;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    # 32 "sType_clone"
                    result_65->mNoHeap=self->mNoHeap;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    # 33 "sType_clone"
                    result_65->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    # 34 "sType_clone"
                    result_65->mRefference=self->mRefference;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    # 35 "sType_clone"
                    result_65->mException=self->mException;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    # 36 "sType_clone"
                    result_65->mPointerNum=self->mPointerNum;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    # 37 "sType_clone"
                    result_65->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    # 38 "sType_clone"
                    result_65->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional150=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional150) {
                    # 39 "sType_clone"
                    __dec_obj25=result_65->mSizeNum;
                    result_65->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(self->mSizeNum))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value97;
                    __freed_obj__ = 0;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    # 40 "sType_clone"
                    result_65->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    # 41 "sType_clone"
                    result_65->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional153=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional153) {
                    # 42 "sType_clone"
                    __dec_obj26=result_65->mOriginalTypeName;
                    result_65->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value98;
                    __freed_obj__ = 0;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    # 43 "sType_clone"
                    result_65->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    # 44 "sType_clone"
                    result_65->mFunctionParam=self->mFunctionParam;
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    # 45 "sType_clone"
                    result_65->mAllocaValue=self->mAllocaValue;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    # 46 "sType_clone"
                    result_65->mGenericsStruct=self->mGenericsStruct;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    # 47 "sType_clone"
                    result_65->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    # 48 "sType_clone"
                    result_65->mComeMemCore=self->mComeMemCore;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    # 49 "sType_clone"
                    result_65->mInline=self->mInline;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    # 50 "sType_clone"
                    result_65->mNullValue=self->mNullValue;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional162=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional162) {
                    # 51 "sType_clone"
                    __dec_obj27=result_65->mAsmName;
                    result_65->mAsmName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(self->mAsmName))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value99;
                    __freed_obj__ = 0;
                }
                # 52 "sType_clone"
                __result62__ = __result_obj__ = result_65;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result62__;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
struct tuple1$1sTypeph* __result46__;
void* right_value67;
struct tuple1$1sTypeph* result_66;
_Bool _if_conditional98;
void* right_value68;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value68, 0, sizeof(void*));
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional96=self==(void*)0,                        _if_conditional96) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result46__ = __result_obj__ = (void*)0;
                            return __result46__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_66=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value67;
                        __freed_obj__ = 0;
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional98=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional98) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj6=result_66->v1;
                            result_66->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(self->v1))));
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value68;
                            __freed_obj__ = 0;
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result47__ = __result_obj__ = result_66;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result47__;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional97=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional97) {
                                # 0 "tuple1$1sTypeph_finalize"
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct list$1sTypeph* __result48__;
void* right_value72;
void* right_value73;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional6;
void* right_value77;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value77, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            # 193 "./comelang2.h"
                            __result48__ = __result_obj__ = ((void*)0);
                            return __result48__;
                        }
                        # 195 "./comelang2.h"
                        result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value73=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value72;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
                        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value73;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_68=self->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional6=it_68!=((void*)0),                        _while_condtional6) {
                            # 199 "./comelang2.h"
                            list$1sTypeph_add(result_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(it_68->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_68=it_68->next;
                        }
                        # 204 "./comelang2.h"
                        __result51__ = __result_obj__ = result_67;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result51__;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            self->head=((void*)0);
                            # 158 "./comelang2.h"
                            self->tail=((void*)0);
                            # 159 "./comelang2.h"
                            self->len=0;
                            # 161 "./comelang2.h"
                            __result49__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result49__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value74;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj10;
_Bool _if_conditional104;
void* right_value75;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj11;
void* right_value76;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj12;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value75, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value76, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional103=self->len==0,                                _if_conditional103) {
                                    # 209 "./comelang2.h"
                                    litem_69=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value74=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                                    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value74;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    litem_69->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    litem_69->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj10=litem_69->item;
                                    litem_69->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 215 "./comelang2.h"
                                    self->tail=litem_69;
                                    # 216 "./comelang2.h"
                                    self->head=litem_69;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional104=self->len==1,                                    _if_conditional104) {
                                        # 219 "./comelang2.h"
                                        litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value75=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value75;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        litem_70->prev=self->head;
                                        # 222 "./comelang2.h"
                                        litem_70->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj11=litem_70->item;
                                        litem_70->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 225 "./comelang2.h"
                                        self->tail=litem_70;
                                        # 226 "./comelang2.h"
                                        self->head->next=litem_70;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value76=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value76;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        litem_71->prev=self->tail;
                                        # 232 "./comelang2.h"
                                        litem_71->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj12=litem_71->item;
                                        litem_71->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 235 "./comelang2.h"
                                        self->tail->next=litem_71;
                                        # 236 "./comelang2.h"
                                        self->tail=litem_71;
                                    }
                                }
                                # 239 "./comelang2.h"
                                self->len++;
                                # 241 "./comelang2.h"
                                __result50__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result50__;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
struct list$1sNodeph* __result52__;
void* right_value79;
void* right_value80;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional7;
void* right_value85;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value85, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional106=self==((void*)0),                        _if_conditional106) {
                            # 193 "./comelang2.h"
                            __result52__ = __result_obj__ = ((void*)0);
                            return __result52__;
                        }
                        # 195 "./comelang2.h"
                        result_72=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value80=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value79=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value79;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value80;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_73=self->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional7=it_73!=((void*)0),                        _while_condtional7) {
                            # 199 "./comelang2.h"
                            list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(it_73->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value85;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_73=it_73->next;
                        }
                        # 204 "./comelang2.h"
                        __result57__ = __result_obj__ = result_72;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result57__;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            self->head=((void*)0);
                            # 158 "./comelang2.h"
                            self->tail=((void*)0);
                            # 159 "./comelang2.h"
                            self->len=0;
                            # 161 "./comelang2.h"
                            __result53__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result53__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
void* right_value81;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj14;
_Bool _if_conditional108;
void* right_value82;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj15;
void* right_value83;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value83, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional107=self->len==0,                                _if_conditional107) {
                                    # 209 "./comelang2.h"
                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value81=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value81;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    litem_74->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    litem_74->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj14=litem_74->item;
                                    litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                    # 215 "./comelang2.h"
                                    self->tail=litem_74;
                                    # 216 "./comelang2.h"
                                    self->head=litem_74;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional108=self->len==1,                                    _if_conditional108) {
                                        # 219 "./comelang2.h"
                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value82=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value82;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        litem_75->prev=self->head;
                                        # 222 "./comelang2.h"
                                        litem_75->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj15=litem_75->item;
                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                        # 225 "./comelang2.h"
                                        self->tail=litem_75;
                                        # 226 "./comelang2.h"
                                        self->head->next=litem_75;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value83=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value83;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        litem_76->prev=self->tail;
                                        # 232 "./comelang2.h"
                                        litem_76->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj16=litem_76->item;
                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                        # 235 "./comelang2.h"
                                        self->tail->next=litem_76;
                                        # 236 "./comelang2.h"
                                        self->tail=litem_76;
                                    }
                                }
                                # 239 "./comelang2.h"
                                self->len++;
                                # 241 "./comelang2.h"
                                __result54__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result54__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
struct sNode* __result55__;
void* right_value84;
struct sNode* result_77;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional109=self==(void*)0,                                _if_conditional109) {
                                    # 2 "sNode_clone"
                                    __result55__ = __result_obj__ = (void*)0;
                                    return __result55__;
                                }
                                # 3 "sNode_clone"
                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                                if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value84;
                                __freed_obj__ = 0;
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional110=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional110) {
                                    # 4 "sNode_clone"
                                    result_77->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    # 5 "sNode_clone"
                                    result_77->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    # 6 "sNode_clone"
                                    result_77->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    # 7 "sNode_clone"
                                    result_77->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    # 8 "sNode_clone"
                                    result_77->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    # 9 "sNode_clone"
                                    result_77->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    # 10 "sNode_clone"
                                    result_77->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    # 11 "sNode_clone"
                                    result_77->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result56__ = __result_obj__ = result_77;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0); } 
                                return __result56__;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
struct list$1charph* __result58__;
void* right_value88;
void* right_value89;
struct list$1charph* result_78;
struct list_item$1charph* it_79;
_Bool _while_condtional8;
void* right_value93;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct list$1charph*));
memset(&it_79, 0, sizeof(struct list_item$1charph*));
memset(&right_value93, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional121=self==((void*)0),                        _if_conditional121) {
                            # 193 "./comelang2.h"
                            __result58__ = __result_obj__ = ((void*)0);
                            return __result58__;
                        }
                        # 195 "./comelang2.h"
                        result_78=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value88;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value89;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_79=self->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional8=it_79!=((void*)0),                        _while_condtional8) {
                            # 199 "./comelang2.h"
                            list$1charph_add(result_78,(char*)come_increment_ref_count(((char*)(right_value93=string_clone(it_79->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value93;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_79=it_79->next;
                        }
                        # 204 "./comelang2.h"
                        __result61__ = __result_obj__ = result_78;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result61__;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            self->head=((void*)0);
                            # 158 "./comelang2.h"
                            self->tail=((void*)0);
                            # 159 "./comelang2.h"
                            self->len=0;
                            # 161 "./comelang2.h"
                            __result59__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result59__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
void* right_value90;
struct list_item$1charph* litem_80;
char* __dec_obj19;
_Bool _if_conditional123;
void* right_value91;
struct list_item$1charph* litem_81;
char* __dec_obj20;
void* right_value92;
struct list_item$1charph* litem_82;
char* __dec_obj21;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional122=self->len==0,                                _if_conditional122) {
                                    # 209 "./comelang2.h"
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value90;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    litem_80->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    litem_80->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj19=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                    # 215 "./comelang2.h"
                                    self->tail=litem_80;
                                    # 216 "./comelang2.h"
                                    self->head=litem_80;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional123=self->len==1,                                    _if_conditional123) {
                                        # 219 "./comelang2.h"
                                        litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                                        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value91;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        litem_81->prev=self->head;
                                        # 222 "./comelang2.h"
                                        litem_81->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj20=litem_81->item;
                                        litem_81->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                        # 225 "./comelang2.h"
                                        self->tail=litem_81;
                                        # 226 "./comelang2.h"
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                                        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value92;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        litem_82->prev=self->tail;
                                        # 232 "./comelang2.h"
                                        litem_82->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj21=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                        # 235 "./comelang2.h"
                                        self->tail->next=litem_82;
                                        # 236 "./comelang2.h"
                                        self->tail=litem_82;
                                    }
                                }
                                # 239 "./comelang2.h"
                                self->len++;
                                # 241 "./comelang2.h"
                                __result60__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result60__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional9;
_Bool _if_conditional166;
struct sNode* __result63__;
struct sNode* default_value_92;
struct sNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional165=position<0,                _if_conditional165) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_90=self->head;
                # 746 "./comelang2.h"
                i_91=0;
                # 753 "./comelang2.h"
                while(_while_condtional9=it_90!=((void*)0),                _while_condtional9) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional166=position==i_91,                    _if_conditional166) {
                        # 749 "./comelang2.h"
                        __result63__ = __result_obj__ = it_90->item;
                        return __result63__;
                    }
                    # 751 "./comelang2.h"
                    it_90=it_90->next;
                    # 752 "./comelang2.h"
                    i_91++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_92,0,sizeof(struct sNode*));
                # 757 "./comelang2.h"
                __result64__ = __result_obj__ = default_value_92;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 1, 0); } 
                return __result64__;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
void* right_value117;
struct buffer* output_101;
_Bool _if_conditional170;
void* right_value118;
void* right_value119;
struct buffer* output2_102;
int i_103;
struct list$1sTypeph* o2_saved_104;
struct sType* it_105;
_Bool _for_condtionalA11;
char* name_106;
void* right_value120;
char* str_107;
_Bool _if_conditional171;
void* right_value121;
void* right_value122;
char* str_108;
_Bool _if_conditional172;
void* right_value123;
struct sType* base_result_type_109;
void* right_value124;
void* right_value125;
struct list$1sNodeph* __dec_obj29;
void* right_value126;
char* result_type_str_110;
int i_111;
struct list$1sTypeph* o2_saved_112;
struct sType* it_113;
_Bool _for_condtionalA12;
char* name_114;
void* right_value127;
char* str_115;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct sNode* node_116;
_Bool _if_conditional175;
void* right_value128;
char* __result67__;
void* right_value129;
struct CVALUE* cvalue_117;
void* right_value130;
void* right_value131;
char* result_type_str_118;
int i_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
_Bool _for_condtionalA13;
char* name_122;
void* right_value132;
char* str_123;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value133;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&output_101, 0, sizeof(struct buffer*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&output2_102, 0, sizeof(struct buffer*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1sTypeph*));
memset(&it_105, 0, sizeof(struct sType*));
memset(&name_106, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&str_107, 0, sizeof(char*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&str_108, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&base_result_type_109, 0, sizeof(struct sType*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&result_type_str_110, 0, sizeof(char*));
memset(&i_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1sTypeph*));
memset(&it_113, 0, sizeof(struct sType*));
memset(&name_114, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&str_115, 0, sizeof(char*));
memset(&node_116, 0, sizeof(struct sNode*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&cvalue_117, 0, sizeof(struct CVALUE*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&result_type_str_118, 0, sizeof(char*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
memset(&name_122, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&str_123, 0, sizeof(char*));
memset(&right_value133, 0, sizeof(void*));
    # 468 "03transpile2.c"
    output_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value117=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value117;
    __freed_obj__ = 0;
    # 565 "03transpile2.c"
    # 470 "03transpile2.c"
    if(_if_conditional170=fun->mResultType->mResultType,    _if_conditional170) {
        # 471 "03transpile2.c"
        output2_102=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value118=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value118;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value119;
        __freed_obj__ = 0;
        # 473 "03transpile2.c"
        buffer_append_str(output2_102,fun->mName);
        # 474 "03transpile2.c"
        buffer_append_str(output2_102,"(");
        # 476 "03transpile2.c"
        i_103=0;
        # 488 "03transpile2.c"
        for(
        o2_saved_104=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_105=list$1sTypeph_begin((o2_saved_104)) ,        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_104)) ,        _for_condtionalA11;        it_105=list$1sTypeph_next((o2_saved_104)) ,        0        ){
            # 478 "03transpile2.c"
            name_106=list$1charphp_operator_load_element(fun->mParamNames,i_103);
            # 480 "03transpile2.c"
            str_107=(char*)come_increment_ref_count(((char*)(right_value120=make_define_var(it_105,name_106,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value120;
            __freed_obj__ = 0;
            # 481 "03transpile2.c"
            buffer_append_str(output2_102,str_107);
            # 486 "03transpile2.c"
            # 483 "03transpile2.c"
            if(_if_conditional171=i_103!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional171) {
                # 484 "03transpile2.c"
                buffer_append_str(output2_102,", ");
            }
            # 486 "03transpile2.c"
            i_103++;
            if(str_107 && !__freed_obj__) { str_107 = come_decrement_ref_count(str_107, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_104 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 488 "03transpile2.c"
        buffer_append_str(output2_102,")");
        # 490 "03transpile2.c"
        str_108=(char*)come_increment_ref_count(((char*)(right_value122=make_lambda_type_name_string(fun->mResultType,((char*)(right_value121=buffer_to_string(output2_102))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value121;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value122;
        __freed_obj__ = 0;
        # 492 "03transpile2.c"
        buffer_append_str(output_101,str_108);
        # 493 "03transpile2.c"
        buffer_append_str(output_101,";\n");
        if(output2_102 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 565 "03transpile2.c"
        # 495 "03transpile2.c"
        if(_if_conditional172=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional172) {
            # 496 "03transpile2.c"
            base_result_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123;
            __freed_obj__ = 0;
            # 497 "03transpile2.c"
            __dec_obj29=base_result_type_109->mArrayNum;
            base_result_type_109->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value125=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value124=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497))))))));
            if(__dec_obj29) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value124;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value125;
            __freed_obj__ = 0;
            # 499 "03transpile2.c"
            result_type_str_110=(char*)come_increment_ref_count(((char*)(right_value126=make_type_name_string(base_result_type_109,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value126;
            __freed_obj__ = 0;
            # 501 "03transpile2.c"
            buffer_append_str(output_101,result_type_str_110);
            # 502 "03transpile2.c"
            buffer_append_str(output_101," (*");
            # 504 "03transpile2.c"
            buffer_append_str(output_101,fun->mName);
            # 505 "03transpile2.c"
            buffer_append_str(output_101,"(");
            # 507 "03transpile2.c"
            i_111=0;
            # 525 "03transpile2.c"
            for(
            o2_saved_112=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_113=list$1sTypeph_begin((o2_saved_112)) ,            0;            _for_condtionalA12=            !list$1sTypeph_end((o2_saved_112)) ,            _for_condtionalA12;            it_113=list$1sTypeph_next((o2_saved_112)) ,            0            ){
                # 509 "03transpile2.c"
                name_114=list$1charphp_operator_load_element(fun->mParamNames,i_111);
                # 511 "03transpile2.c"
                str_115=(char*)come_increment_ref_count(((char*)(right_value127=make_define_var(it_113,name_114,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = 0;
                # 512 "03transpile2.c"
                buffer_append_str(output_101,str_115);
                # 522 "03transpile2.c"
                # 514 "03transpile2.c"
                if(_if_conditional173=i_111==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional173) {
                    # 518 "03transpile2.c"
                    # 515 "03transpile2.c"
                    if(_if_conditional174=fun->mVarArgs,                    _if_conditional174) {
                        # 516 "03transpile2.c"
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    # 520 "03transpile2.c"
                    buffer_append_str(output_101,", ");
                }
                # 522 "03transpile2.c"
                i_111++;
                if(str_115 && !__freed_obj__) { str_115 = come_decrement_ref_count(str_115, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 525 "03transpile2.c"
            node_116=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            # 530 "03transpile2.c"
            # 526 "03transpile2.c"
            if(_if_conditional175=!node_compile(node_116,info),            _if_conditional175) {
                # 527 "03transpile2.c"
                err_msg(info,"invalid array number");
                # 528 "03transpile2.c"
                __result67__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
                if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
                if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value128;
                __freed_obj__ = 0;
                return __result67__;
            }
            # 530 "03transpile2.c"
            cvalue_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value129;
            __freed_obj__ = 0;
            # 531 "03transpile2.c"
            dec_stack_ptr(1,info);
            # 533 "03transpile2.c"
            buffer_append_str(output_101,((char*)(right_value130=xsprintf("))[%s];\n",cvalue_117->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value130);
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value130;
            __freed_obj__ = 0;
            if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 536 "03transpile2.c"
            result_type_str_118=(char*)come_increment_ref_count(((char*)(right_value131=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value131;
            __freed_obj__ = 0;
            # 538 "03transpile2.c"
            buffer_append_str(output_101,result_type_str_118);
            # 539 "03transpile2.c"
            buffer_append_str(output_101," ");
            # 541 "03transpile2.c"
            buffer_append_str(output_101,fun->mName);
            # 542 "03transpile2.c"
            buffer_append_str(output_101,"(");
            # 544 "03transpile2.c"
            i_119=0;
            # 562 "03transpile2.c"
            for(
            o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_121=list$1sTypeph_begin((o2_saved_120)) ,            0;            _for_condtionalA13=            !list$1sTypeph_end((o2_saved_120)) ,            _for_condtionalA13;            it_121=list$1sTypeph_next((o2_saved_120)) ,            0            ){
                # 546 "03transpile2.c"
                name_122=list$1charphp_operator_load_element(fun->mParamNames,i_119);
                # 548 "03transpile2.c"
                str_123=(char*)come_increment_ref_count(((char*)(right_value132=make_define_var(it_121,name_122,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value132;
                __freed_obj__ = 0;
                # 549 "03transpile2.c"
                buffer_append_str(output_101,str_123);
                # 559 "03transpile2.c"
                # 551 "03transpile2.c"
                if(_if_conditional176=i_119==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional176) {
                    # 555 "03transpile2.c"
                    # 552 "03transpile2.c"
                    if(_if_conditional177=fun->mVarArgs,                    _if_conditional177) {
                        # 553 "03transpile2.c"
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    # 557 "03transpile2.c"
                    buffer_append_str(output_101,", ");
                }
                # 559 "03transpile2.c"
                i_119++;
                if(str_123 && !__freed_obj__) { str_123 = come_decrement_ref_count(str_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_120 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_120, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 562 "03transpile2.c"
            buffer_append_str(output_101,");\n");
            if(result_type_str_118 && !__freed_obj__) { result_type_str_118 = come_decrement_ref_count(result_type_str_118, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 565 "03transpile2.c"
    __result68__ = __result_obj__ = ((char*)(right_value133=buffer_to_string(output_101)));
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value133;
    __freed_obj__ = 0;
    return __result68__;
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value134;
void* right_value135;
struct buffer* output_124;
void* right_value136;
char* result_type_str_125;
int i_126;
struct list$1sTypeph* o2_saved_127;
struct sType* it_128;
_Bool _for_condtionalA14;
char* name_129;
void* right_value137;
char* str_130;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value138;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&output_124, 0, sizeof(struct buffer*));
memset(&right_value136, 0, sizeof(void*));
memset(&result_type_str_125, 0, sizeof(char*));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1sTypeph*));
memset(&it_128, 0, sizeof(struct sType*));
memset(&name_129, 0, sizeof(char*));
memset(&right_value137, 0, sizeof(void*));
memset(&str_130, 0, sizeof(char*));
memset(&right_value138, 0, sizeof(void*));
    # 570 "03transpile2.c"
    output_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value134=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value135;
    __freed_obj__ = 0;
    # 572 "03transpile2.c"
    result_type_str_125=(char*)come_increment_ref_count(((char*)(right_value136=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value136;
    __freed_obj__ = 0;
    # 574 "03transpile2.c"
    buffer_append_str(output_124,result_type_str_125);
    # 575 "03transpile2.c"
    buffer_append_str(output_124," ");
    # 577 "03transpile2.c"
    buffer_append_str(output_124,name);
    # 578 "03transpile2.c"
    buffer_append_str(output_124,"(");
    # 580 "03transpile2.c"
    i_126=0;
    # 598 "03transpile2.c"
    for(
    o2_saved_127=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_128=list$1sTypeph_begin((o2_saved_127)) ,    0;    _for_condtionalA14=    !list$1sTypeph_end((o2_saved_127)) ,    _for_condtionalA14;    it_128=list$1sTypeph_next((o2_saved_127)) ,    0    ){
        # 582 "03transpile2.c"
        name_129=list$1charphp_operator_load_element(lambda_type->mParamNames,i_126);
        # 584 "03transpile2.c"
        str_130=(char*)come_increment_ref_count(((char*)(right_value137=make_define_var(it_128,name_129,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value137;
        __freed_obj__ = 0;
        # 585 "03transpile2.c"
        buffer_append_str(output_124,str_130);
        # 595 "03transpile2.c"
        # 587 "03transpile2.c"
        if(_if_conditional178=i_126==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional178) {
            # 591 "03transpile2.c"
            # 588 "03transpile2.c"
            if(_if_conditional179=lambda_type->mVarArgs,            _if_conditional179) {
                # 589 "03transpile2.c"
                buffer_append_str(output_124,", ...");
            }
        }
        else {
            # 593 "03transpile2.c"
            buffer_append_str(output_124,", ");
        }
        # 595 "03transpile2.c"
        i_126++;
        if(str_130 && !__freed_obj__) { str_130 = come_decrement_ref_count(str_130, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_127 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 598 "03transpile2.c"
    buffer_append_str(output_124,");\n");
    # 600 "03transpile2.c"
    __result69__ = __result_obj__ = ((char*)(right_value138=buffer_to_string(output_124)));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value138;
    __freed_obj__ = 0;
    return __result69__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
char* msg2_131;
va_list args_132;
int len_133;
_Bool _if_conditional181;
int i_134;
_Bool _for_condtionalA15;
void* right_value139;
void* right_value140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_131, 0, sizeof(char*));
memset(&args_132, 0, sizeof(va_list));
memset(&len_133, 0, sizeof(int));
memset(&i_134, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
    # 609 "03transpile2.c"
    # 606 "03transpile2.c"
    if(_if_conditional180=info->no_output_come_code,    _if_conditional180) {
        # 607 "03transpile2.c"
        return;
    }
    # 609 "03transpile2.c"
    # 611 "03transpile2.c"
    # 612 "03transpile2.c"
    __builtin_va_start(args_132,msg);
    # 613 "03transpile2.c"
    len_133=vasprintf(&msg2_131,msg,args_132);
    # 614 "03transpile2.c"
    __builtin_va_end(args_132);
    # 628 "03transpile2.c"
    # 616 "03transpile2.c"
    if(_if_conditional181=info->come_fun,    _if_conditional181) {
        # 617 "03transpile2.c"
        # 622 "03transpile2.c"
        for(
        i_134=0 ,        0;        _for_condtionalA15=        i_134<info->block_level ,        _for_condtionalA15;        i_134++ ,        0        ){
            # 619 "03transpile2.c"
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        # 622 "03transpile2.c"
        buffer_append_str(info->come_fun->mSource,((char*)(right_value139=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
    }
    else {
        # 625 "03transpile2.c"
        buffer_append_str(info->module->mSourceHead,((char*)(right_value140=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
    }
    # 628 "03transpile2.c"
    free(msg2_131);
    if((&args_132) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
char* msg2_135;
va_list args_136;
int len_137;
void* right_value141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_135, 0, sizeof(char*));
memset(&args_136, 0, sizeof(va_list));
memset(&len_137, 0, sizeof(int));
memset(&right_value141, 0, sizeof(void*));
    # 636 "03transpile2.c"
    # 633 "03transpile2.c"
    if(_if_conditional182=info->no_output_come_code,    _if_conditional182) {
        # 634 "03transpile2.c"
        return;
    }
    # 636 "03transpile2.c"
    # 638 "03transpile2.c"
    # 639 "03transpile2.c"
    __builtin_va_start(args_136,msg);
    # 640 "03transpile2.c"
    len_137=vasprintf(&msg2_135,msg,args_136);
    # 641 "03transpile2.c"
    __builtin_va_end(args_136);
    # 643 "03transpile2.c"
    buffer_append_str(info->module->mSourceHead,((char*)(right_value141=xsprintf("%s",msg2_135))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141;
    __freed_obj__ = 0;
    # 645 "03transpile2.c"
    free(msg2_135);
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
char* name_138;
void* right_value143;
void* right_value144;
struct sType* result_type_139;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
struct sType* __list_values1___140[2];
void* right_value152;
void* right_value153;
struct list$1sTypeph* param_types_145;
void* right_value154;
void* right_value155;
char* __list_values2___146[2];
void* right_value159;
void* right_value160;
struct list$1charph* param_names_151;
void* right_value161;
void* right_value162;
struct list$1charph* param_default_parametors_152;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
struct sFun* main_fun_153;
void* right_value177;
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
memset(&name_138, 0, sizeof(char*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&result_type_139, 0, sizeof(struct sType*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&param_types_145, 0, sizeof(struct list$1sTypeph*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&param_names_151, 0, sizeof(struct list$1charph*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&param_default_parametors_152, 0, sizeof(struct list$1charph*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&main_fun_153, 0, sizeof(struct sFun*));
memset(&right_value177, 0, sizeof(void*));
    # 650 "03transpile2.c"
    name_138=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("main"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142;
    __freed_obj__ = 0;
    # 651 "03transpile2.c"
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651)))),"int",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value143;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value144;
    __freed_obj__ = 0;
    # 652 "03transpile2.c"
    {__list_values1___140[0]=come_increment_ref_count(((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"int",(_Bool)0,info))));
__list_values1___140[1]=come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"char**",(_Bool)0,info))));
}    param_types_145=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value153=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value152=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652)))),2,__list_values1___140))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value145;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value146;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value147;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value148;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value152;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value153;
    __freed_obj__ = 0;
    # 653 "03transpile2.c"
    {__list_values2___146[0]=come_increment_ref_count(((char*)(right_value154=__builtin_string("argc"))));
__list_values2___146[1]=come_increment_ref_count(((char*)(right_value155=__builtin_string("argv"))));
}    param_names_151=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value160=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value159=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653)))),2,__list_values2___146))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value154;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value155;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value159;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value160;
    __freed_obj__ = 0;
    # 654 "03transpile2.c"
    param_default_parametors_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value161;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value162;
    __freed_obj__ = 0;
    # 660 "03transpile2.c"
    main_fun_153=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value166=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value163=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 655)))),(char*)come_increment_ref_count(name_138),(struct sType*)come_increment_ref_count(result_type_139),(struct list$1sTypeph*)come_increment_ref_count(param_types_145),(struct list$1charph*)come_increment_ref_count(param_names_151),(struct list$1charph*)come_increment_ref_count(param_default_parametors_152),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("")))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value163;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value164;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value165;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value166;
    __freed_obj__ = 0;
    # 662 "03transpile2.c"
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(name_138)))),(struct sFun*)come_increment_ref_count(main_fun_153));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value177;
    __freed_obj__ = 0;
    # 664 "03transpile2.c"
    add_come_code(info,"#include <stdio.h>\n");
    # 666 "03transpile2.c"
    info->come_fun=main_fun_153;
    # 668 "03transpile2.c"
    info->block_level++;
    # 669 "03transpile2.c"
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    # 670 "03transpile2.c"
    add_come_code(info,"return 0;\n");
    # 671 "03transpile2.c"
    info->block_level--;
    # 673 "03transpile2.c"
    __result100__ = 0;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result100__;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_141;
_Bool _for_condtionalA16;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_141, 0, sizeof(int));
        # 165 "./comelang2.h"
        self->head=((void*)0);
        # 166 "./comelang2.h"
        self->tail=((void*)0);
        # 167 "./comelang2.h"
        self->len=0;
        # 173 "./comelang2.h"
        for(
        i_141=0 ,        0;        _for_condtionalA16=        i_141<num_value ,        _for_condtionalA16;        i_141++ ,        0        ){
            # 170 "./comelang2.h"
            list$1sTypeph_push_back(self,values[i_141]);
        }
        # 173 "./comelang2.h"
        __result71__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result71__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value149;
struct list_item$1sTypeph* litem_142;
struct sType* __dec_obj30;
_Bool _if_conditional184;
void* right_value150;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj31;
void* right_value151;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj32;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&litem_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value150, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value151, 0, sizeof(void*));
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional183=self->len==0,                _if_conditional183) {
                    # 279 "./comelang2.h"
                    litem_142=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value149;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_142->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_142->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj30=litem_142->item;
                    litem_142->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    self->tail=litem_142;
                    # 286 "./comelang2.h"
                    self->head=litem_142;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional184=self->len==1,                    _if_conditional184) {
                        # 289 "./comelang2.h"
                        litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value150=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value150;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_143->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_143->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj31=litem_143->item;
                        litem_143->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        self->tail=litem_143;
                        # 296 "./comelang2.h"
                        self->head->next=litem_143;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value151=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value151;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_144->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_144->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj32=litem_144->item;
                        litem_144->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        self->tail->next=litem_144;
                        # 306 "./comelang2.h"
                        self->tail=litem_144;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result70__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result70__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_147;
_Bool _for_condtionalA17;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_147, 0, sizeof(int));
        # 165 "./comelang2.h"
        self->head=((void*)0);
        # 166 "./comelang2.h"
        self->tail=((void*)0);
        # 167 "./comelang2.h"
        self->len=0;
        # 173 "./comelang2.h"
        for(
        i_147=0 ,        0;        _for_condtionalA17=        i_147<num_value ,        _for_condtionalA17;        i_147++ ,        0        ){
            # 170 "./comelang2.h"
            list$1charph_push_back(self,values[i_147]);
        }
        # 173 "./comelang2.h"
        __result73__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result73__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
void* right_value156;
struct list_item$1charph* litem_148;
char* __dec_obj33;
_Bool _if_conditional186;
void* right_value157;
struct list_item$1charph* litem_149;
char* __dec_obj34;
void* right_value158;
struct list_item$1charph* litem_150;
char* __dec_obj35;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
memset(&right_value157, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
memset(&right_value158, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional185=self->len==0,                _if_conditional185) {
                    # 279 "./comelang2.h"
                    litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value156=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value156;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_148->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_148->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj33=litem_148->item;
                    litem_148->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    # 285 "./comelang2.h"
                    self->tail=litem_148;
                    # 286 "./comelang2.h"
                    self->head=litem_148;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional186=self->len==1,                    _if_conditional186) {
                        # 289 "./comelang2.h"
                        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value157=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value157;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_149->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_149->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj34=litem_149->item;
                        litem_149->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        # 295 "./comelang2.h"
                        self->tail=litem_149;
                        # 296 "./comelang2.h"
                        self->head->next=litem_149;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value158=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value158;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_150->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_150->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj35=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                        # 305 "./comelang2.h"
                        self->tail->next=litem_150;
                        # 306 "./comelang2.h"
                        self->tail=litem_150;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result72__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result72__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sFun_finalize"
        # 0 "sFun_finalize"
        if(_if_conditional187=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional187) {
            # 0 "sFun_finalize"
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "sFun_finalize"
        # 1 "sFun_finalize"
        if(_if_conditional188=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional188) {
            # 1 "sFun_finalize"
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 3 "sFun_finalize"
        # 2 "sFun_finalize"
        if(_if_conditional189=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional189) {
            # 2 "sFun_finalize"
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 4 "sFun_finalize"
        # 3 "sFun_finalize"
        if(_if_conditional190=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional190) {
            # 3 "sFun_finalize"
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 5 "sFun_finalize"
        # 4 "sFun_finalize"
        if(_if_conditional191=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional191) {
            # 4 "sFun_finalize"
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 6 "sFun_finalize"
        # 5 "sFun_finalize"
        if(_if_conditional192=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional192) {
            # 5 "sFun_finalize"
            if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 7 "sFun_finalize"
        # 6 "sFun_finalize"
        if(_if_conditional193=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional193) {
            # 6 "sFun_finalize"
            if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 8 "sFun_finalize"
        # 7 "sFun_finalize"
        if(_if_conditional196=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional196) {
            # 7 "sFun_finalize"
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 9 "sFun_finalize"
        # 8 "sFun_finalize"
        if(_if_conditional197=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional197) {
            # 8 "sFun_finalize"
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 10 "sFun_finalize"
        # 9 "sFun_finalize"
        if(_if_conditional198=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional198) {
            # 9 "sFun_finalize"
            if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 11 "sFun_finalize"
        # 10 "sFun_finalize"
        if(_if_conditional199=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional199) {
            # 10 "sFun_finalize"
            if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 12 "sFun_finalize"
        # 11 "sFun_finalize"
        if(_if_conditional200=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional200) {
            # 11 "sFun_finalize"
            if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 13 "sFun_finalize"
        # 12 "sFun_finalize"
        if(_if_conditional201=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional201) {
            # 12 "sFun_finalize"
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "sBlock_finalize"
                # 0 "sBlock_finalize"
                if(_if_conditional194=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional194) {
                    # 0 "sBlock_finalize"
                    if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 2 "sBlock_finalize"
                # 1 "sBlock_finalize"
                if(_if_conditional195=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional195) {
                    # 1 "sBlock_finalize"
                    if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
unsigned int hash_172;
unsigned int it_173;
_Bool _while_condtional12;
_Bool _if_conditional215;
void* right_value171;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool same_key_exist_190;
char* it2_193;
_Bool _for_condtionalA19;
void* right_value173;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct map$2charphsFunph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_172, 0, sizeof(unsigned int));
memset(&it_173, 0, sizeof(unsigned int));
memset(&right_value171, 0, sizeof(void*));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_193, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
        # 1432 "./comelang2.h"
        # 1429 "./comelang2.h"
        if(_if_conditional202=self->len*10>=self->size,        _if_conditional202) {
            # 1430 "./comelang2.h"
            map$2charphsFunph_rehash(self);
        }
        # 1432 "./comelang2.h"
        hash_172=string_get_hash_key(key)%self->size;
        # 1433 "./comelang2.h"
        it_173=hash_172;
        # 1491 "./comelang2.h"
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            # 1489 "./comelang2.h"
            # 1436 "./comelang2.h"
            if(_if_conditional215=self->item_existance[it_173],            _if_conditional215) {
                # 1459 "./comelang2.h"
                # 1438 "./comelang2.h"
                if(_if_conditional216=optional$2boolbool_value(((struct optional$2boolbool*)(right_value171=string_equals(self->keys[it_173],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171),
                (right_value171 && right_value171 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value171, 
                __freed_obj__ = 0, 
                _if_conditional216) {
                    # 1449 "./comelang2.h"
                    # 1440 "./comelang2.h"
                    if(_if_conditional217=1,                    _if_conditional217) {
                        # 1441 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        # 1442 "./comelang2.h"
                        if(self->keys[it_173] && !__freed_obj__) { self->keys[it_173] = come_decrement_ref_count(self->keys[it_173], (void*)0, (void*)0, 0, 0, 0); }
                        # 1443 "./comelang2.h"
                        self->keys[it_173]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1446 "./comelang2.h"
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        # 1447 "./comelang2.h"
                        self->keys[it_173]=key;
                    }
                    # 1456 "./comelang2.h"
                    # 1449 "./comelang2.h"
                    if(_if_conditional237=1,                    _if_conditional237) {
                        # 1450 "./comelang2.h"
                        if(self->items[it_173] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[it_173], (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 1451 "./comelang2.h"
                        self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        # 1454 "./comelang2.h"
                        self->items[it_173]=item;
                    }
                    # 1456 "./comelang2.h"
                    break;
                }
                # 1459 "./comelang2.h"
                it_173++;
                # 1469 "./comelang2.h"
                # 1461 "./comelang2.h"
                if(_if_conditional238=it_173>=self->size,                _if_conditional238) {
                    # 1462 "./comelang2.h"
                    it_173=0;
                }
                else {
                    # 1469 "./comelang2.h"
                    # 1464 "./comelang2.h"
                    if(_if_conditional239=it_173==hash_172,                    _if_conditional239) {
                        # 1465 "./comelang2.h"
                        printf("unexpected error in map.insert\n");
                        # 1466 "./comelang2.h"
                        stackframe();
                        # 1467 "./comelang2.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1471 "./comelang2.h"
                self->item_existance[it_173]=(_Bool)1;
                # 1478 "./comelang2.h"
                # 1472 "./comelang2.h"
                if(_if_conditional240=1,                _if_conditional240) {
                    # 1473 "./comelang2.h"
                    self->keys[it_173]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1476 "./comelang2.h"
                    self->keys[it_173]=key;
                }
                # 1485 "./comelang2.h"
                # 1478 "./comelang2.h"
                if(_if_conditional241=1,                _if_conditional241) {
                    # 1479 "./comelang2.h"
                    self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    # 1482 "./comelang2.h"
                    self->items[it_173]=item;
                }
                # 1485 "./comelang2.h"
                self->len++;
                # 1487 "./comelang2.h"
                break;
            }
        }
        # 1491 "./comelang2.h"
        same_key_exist_190=(_Bool)0;
        # 1499 "./comelang2.h"
        for(
        it2_193=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA19=        !list$1charp_end(self->key_list) ,        _for_condtionalA19;        it2_193=list$1charp_next(self->key_list) ,        0        ){
            # 1497 "./comelang2.h"
            # 1494 "./comelang2.h"
            if(_if_conditional246=optional$2boolbool_value(((struct optional$2boolbool*)(right_value173=string_equals(it2_193,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173),
            (right_value173 && right_value173 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value173, 
            __freed_obj__ = 0, 
            _if_conditional246) {
                # 1495 "./comelang2.h"
                same_key_exist_190=(_Bool)1;
            }
        }
        # 1503 "./comelang2.h"
        # 1499 "./comelang2.h"
        if(_if_conditional247=!same_key_exist_190,        _if_conditional247) {
            # 1500 "./comelang2.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1503 "./comelang2.h"
        __result99__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result99__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_154;
void* right_value167;
char** keys_155;
void* right_value168;
struct sFun** items_156;
void* right_value169;
_Bool* item_existance_157;
int len_158;
char* it_161;
_Bool _for_condtionalA18;
struct sFun* default_value_164;
struct sFun* it2_168;
unsigned int hash_169;
int n_170;
_Bool _while_condtional11;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
struct sFun* default_value_171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_154, 0, sizeof(int));
memset(&right_value167, 0, sizeof(void*));
memset(&keys_155, 0, sizeof(char**));
memset(&right_value168, 0, sizeof(void*));
memset(&items_156, 0, sizeof(struct sFun**));
memset(&right_value169, 0, sizeof(void*));
memset(&item_existance_157, 0, sizeof(_Bool*));
memset(&len_158, 0, sizeof(int));
memset(&it_161, 0, sizeof(char*));
memset(&default_value_164, 0, sizeof(struct sFun*));
memset(&it2_168, 0, sizeof(struct sFun*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&n_170, 0, sizeof(int));
memset(&default_value_171, 0, sizeof(struct sFun*));
                # 1376 "./comelang2.h"
                size_154=self->size*10;
                # 1377 "./comelang2.h"
                keys_155=(char**)come_increment_ref_count(((char**)(right_value167=(char**)come_calloc(1, sizeof(char*)*(1*(size_154)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value167;
                __freed_obj__ = 0;
                # 1378 "./comelang2.h"
                items_156=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value168=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_154)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value168;
                __freed_obj__ = 0;
                # 1379 "./comelang2.h"
                item_existance_157=(_Bool*)come_increment_ref_count(((_Bool*)(right_value169=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_154)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value169);
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value169;
                __freed_obj__ = 0;
                # 1381 "./comelang2.h"
                len_158=0;
                # 1416 "./comelang2.h"
                for(
                it_161=map$2charphsFunph_begin(self) ,                0;                _for_condtionalA18=                !map$2charphsFunph_end(self) ,                _for_condtionalA18;                it_161=map$2charphsFunph_next(self) ,                0                ){
                    # 1384 "./comelang2.h"
                    # 1385 "./comelang2.h"
                    memset(&default_value_164,0,sizeof(struct sFun*));
                    # 1386 "./comelang2.h"
                    it2_168=map$2charphsFunph_at(self,it_161,default_value_164);
                    # 1387 "./comelang2.h"
                    hash_169=string_get_hash_key(it_161)%size_154;
                    # 1388 "./comelang2.h"
                    n_170=hash_169;
                    # 1414 "./comelang2.h"
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        # 1413 "./comelang2.h"
                        # 1391 "./comelang2.h"
                        if(_if_conditional212=item_existance_157[n_170],                        _if_conditional212) {
                            # 1393 "./comelang2.h"
                            n_170++;
                            # 1403 "./comelang2.h"
                            # 1395 "./comelang2.h"
                            if(_if_conditional213=n_170>=size_154,                            _if_conditional213) {
                                # 1396 "./comelang2.h"
                                n_170=0;
                            }
                            else {
                                # 1403 "./comelang2.h"
                                # 1398 "./comelang2.h"
                                if(_if_conditional214=n_170==hash_169,                                _if_conditional214) {
                                    # 1399 "./comelang2.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1400 "./comelang2.h"
                                    stackframe();
                                    # 1401 "./comelang2.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1405 "./comelang2.h"
                            item_existance_157[n_170]=(_Bool)1;
                            # 1406 "./comelang2.h"
                            keys_155[n_170]=it_161;
                            # 1407 "./comelang2.h"
                            # 1408 "./comelang2.h"
                            items_156[n_170]=map$2charphsFunph_at(self,it_161,default_value_171);
                            # 1410 "./comelang2.h"
                            len_158++;
                            # 1411 "./comelang2.h"
                            break;
                        }
                    }
                }
                # 1416 "./comelang2.h"
                come_free_object((char*)self->items);
                # 1417 "./comelang2.h"
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                # 1418 "./comelang2.h"
                come_free_object((char*)self->keys);
                # 1420 "./comelang2.h"
                self->keys=keys_155;
                # 1421 "./comelang2.h"
                self->items=items_156;
                # 1422 "./comelang2.h"
                self->item_existance=item_existance_157;
                # 1424 "./comelang2.h"
                self->size=size_154;
                # 1425 "./comelang2.h"
                self->len=len_158;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
char* result_159;
char* __result74__;
_Bool _if_conditional204;
char* __result75__;
char* result_160;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    # 1343 "./comelang2.h"
                    # 1338 "./comelang2.h"
                    if(_if_conditional203=self==((void*)0),                    _if_conditional203) {
                        # 1339 "./comelang2.h"
                        # 1340 "./comelang2.h"
                        memset(&result_159,0,sizeof(char*));
                        # 1341 "./comelang2.h"
                        __result74__ = __result_obj__ = result_159;
                        return __result74__;
                    }
                    # 1343 "./comelang2.h"
                    self->key_list->it=self->key_list->head;
                    # 1349 "./comelang2.h"
                    # 1345 "./comelang2.h"
                    if(_if_conditional204=self->key_list->it,                    _if_conditional204) {
                        # 1346 "./comelang2.h"
                        __result75__ = __result_obj__ = self->key_list->it->item;
                        return __result75__;
                    }
                    # 1349 "./comelang2.h"
                    # 1350 "./comelang2.h"
                    memset(&result_160,0,sizeof(char*));
                    # 1351 "./comelang2.h"
                    __result76__ = __result_obj__ = result_160;
                    return __result76__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1372 "./comelang2.h"
                    __result77__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result77__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
char* result_162;
char* __result78__;
_Bool _if_conditional206;
char* __result79__;
char* result_163;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                    # 1360 "./comelang2.h"
                    # 1355 "./comelang2.h"
                    if(_if_conditional205=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional205) {
                        # 1356 "./comelang2.h"
                        # 1357 "./comelang2.h"
                        memset(&result_162,0,sizeof(char*));
                        # 1358 "./comelang2.h"
                        __result78__ = __result_obj__ = result_162;
                        return __result78__;
                    }
                    # 1360 "./comelang2.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1366 "./comelang2.h"
                    # 1362 "./comelang2.h"
                    if(_if_conditional206=self->key_list->it,                    _if_conditional206) {
                        # 1363 "./comelang2.h"
                        __result79__ = __result_obj__ = self->key_list->it->item;
                        return __result79__;
                    }
                    # 1366 "./comelang2.h"
                    # 1367 "./comelang2.h"
                    memset(&result_163,0,sizeof(char*));
                    # 1368 "./comelang2.h"
                    __result80__ = __result_obj__ = result_163;
                    return __result80__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional10;
_Bool _if_conditional207;
void* right_value170;
_Bool _if_conditional209;
struct sFun* __result83__;
_Bool _if_conditional210;
_Bool _if_conditional211;
struct sFun* __result84__;
struct sFun* __result85__;
struct sFun* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
memset(&right_value170, 0, sizeof(void*));
                        # 1265 "./comelang2.h"
                        hash_165=string_get_hash_key(((char*)key))%self->size;
                        # 1266 "./comelang2.h"
                        it_166=hash_165;
                        # 1290 "./comelang2.h"
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            # 1288 "./comelang2.h"
                            # 1269 "./comelang2.h"
                            if(_if_conditional207=self->item_existance[it_166],                            _if_conditional207) {
                                # 1276 "./comelang2.h"
                                # 1271 "./comelang2.h"
                                if(_if_conditional209=optional$2boolbool_value(((struct optional$2boolbool*)(right_value170=string_equals(self->keys[it_166],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170),
                                (right_value170 && right_value170 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value170, 
                                __freed_obj__ = 0, 
                                _if_conditional209) {
                                    # 1273 "./comelang2.h"
                                    __result83__ = __result_obj__ = self->items[it_166];
                                    return __result83__;
                                }
                                # 1276 "./comelang2.h"
                                it_166++;
                                # 1284 "./comelang2.h"
                                # 1278 "./comelang2.h"
                                if(_if_conditional210=it_166>=self->size,                                _if_conditional210) {
                                    # 1279 "./comelang2.h"
                                    it_166=0;
                                }
                                else {
                                    # 1284 "./comelang2.h"
                                    # 1281 "./comelang2.h"
                                    if(_if_conditional211=it_166==hash_165,                                    _if_conditional211) {
                                        # 1282 "./comelang2.h"
                                        __result84__ = __result_obj__ = default_value;
                                        return __result84__;
                                    }
                                }
                            }
                            else {
                                # 1286 "./comelang2.h"
                                __result85__ = __result_obj__ = default_value;
                                return __result85__;
                            }
                        }
                        # 1290 "./comelang2.h"
                        __result86__ = __result_obj__ = default_value;
                        return __result86__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
_Bool default_value_167;
_Bool __result81__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_167, 0, sizeof(_Bool));
                                    # 69 "./comelang2.h"
                                    # 61 "./comelang2.h"
                                    if(_if_conditional208=self==((void*)0),                                    _if_conditional208) {
                                        # 62 "./comelang2.h"
                                        # 63 "./comelang2.h"
                                        memset(&default_value_167,0,sizeof(_Bool));
                                        # 64 "./comelang2.h"
                                        __result81__ = default_value_167;
                                        return __result81__;
                                    }
                                    else {
                                        # 67 "./comelang2.h"
                                        __result82__ = self->v1;
                                        return __result82__;
                                    }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_174;
struct list_item$1charp* it_175;
_Bool _while_condtional13;
void* right_value172;
_Bool _if_conditional218;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_174, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
memset(&right_value172, 0, sizeof(void*));
                            # 498 "./comelang2.h"
                            it2_174=0;
                            # 499 "./comelang2.h"
                            it_175=self->head;
                            # 510 "./comelang2.h"
                            while(_while_condtional13=it_175!=((void*)0),                            _while_condtional13) {
                                # 505 "./comelang2.h"
                                # 501 "./comelang2.h"
                                if(_if_conditional218=optional$2boolbool_value(((struct optional$2boolbool*)(right_value172=string_equals(it_175->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172),
                                (right_value172 && right_value172 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value172, 
                                __freed_obj__ = 0, 
                                _if_conditional218) {
                                    # 502 "./comelang2.h"
                                    list$1charp_delete(self,it2_174,it2_174+1);
                                    # 503 "./comelang2.h"
                                    break;
                                }
                                # 505 "./comelang2.h"
                                it2_174++;
                                # 507 "./comelang2.h"
                                it_175=it_175->next;
                            }
                            # 510 "./comelang2.h"
                            __result90__ = __result_obj__ = self;
                            return __result90__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
int tmp_176;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct list$1charp* __result87__;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list_item$1charp* it_179;
int i_180;
_Bool _while_condtional15;
_Bool _if_conditional227;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional228;
_Bool _if_conditional229;
struct list_item$1charp* it_182;
int i_183;
_Bool _while_condtional16;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* prev_it_184;
struct list_item$1charp* it_185;
struct list_item$1charp* head_prev_it_186;
struct list_item$1charp* tail_it_187;
int i_188;
_Bool _while_condtional17;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
struct list_item$1charp* prev_it_189;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list$1charp* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_176, 0, sizeof(int));
memset(&it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1charp*));
memset(&it_185, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_186, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_187, 0, sizeof(struct list_item$1charp*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1charp*));
                                        # 517 "./comelang2.h"
                                        # 514 "./comelang2.h"
                                        if(_if_conditional219=head<0,                                        _if_conditional219) {
                                            # 515 "./comelang2.h"
                                            head+=self->len;
                                        }
                                        # 521 "./comelang2.h"
                                        # 517 "./comelang2.h"
                                        if(_if_conditional220=tail<0,                                        _if_conditional220) {
                                            # 518 "./comelang2.h"
                                            tail+=self->len+1;
                                        }
                                        # 527 "./comelang2.h"
                                        # 521 "./comelang2.h"
                                        if(_if_conditional221=head>tail,                                        _if_conditional221) {
                                            # 522 "./comelang2.h"
                                            tmp_176=tail;
                                            # 523 "./comelang2.h"
                                            tail=head;
                                            # 524 "./comelang2.h"
                                            head=tmp_176;
                                        }
                                        # 531 "./comelang2.h"
                                        # 527 "./comelang2.h"
                                        if(_if_conditional222=head<0,                                        _if_conditional222) {
                                            # 528 "./comelang2.h"
                                            head=0;
                                        }
                                        # 535 "./comelang2.h"
                                        # 531 "./comelang2.h"
                                        if(_if_conditional223=tail>self->len,                                        _if_conditional223) {
                                            # 532 "./comelang2.h"
                                            tail=self->len;
                                        }
                                        # 539 "./comelang2.h"
                                        # 535 "./comelang2.h"
                                        if(_if_conditional224=head==tail,                                        _if_conditional224) {
                                            # 536 "./comelang2.h"
                                            __result87__ = __result_obj__ = self;
                                            return __result87__;
                                        }
                                        # 634 "./comelang2.h"
                                        # 539 "./comelang2.h"
                                        if(_if_conditional225=head==0&&tail==self->len,                                        _if_conditional225) {
                                            # 541 "./comelang2.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 634 "./comelang2.h"
                                            # 543 "./comelang2.h"
                                            if(_if_conditional226=head==0,                                            _if_conditional226) {
                                                # 544 "./comelang2.h"
                                                it_179=self->head;
                                                # 545 "./comelang2.h"
                                                i_180=0;
                                                # 567 "./comelang2.h"
                                                while(_while_condtional15=it_179!=((void*)0),                                                _while_condtional15) {
                                                    # 566 "./comelang2.h"
                                                    # 547 "./comelang2.h"
                                                    if(_if_conditional227=i_180<tail,                                                    _if_conditional227) {
                                                        # 548 "./comelang2.h"
                                                        prev_it_181=it_179;
                                                        # 550 "./comelang2.h"
                                                        it_179=it_179->next;
                                                        # 551 "./comelang2.h"
                                                        i_180++;
                                                        # 553 "./comelang2.h"
                                                        if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        # 555 "./comelang2.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 566 "./comelang2.h"
                                                        # 557 "./comelang2.h"
                                                        if(_if_conditional228=i_180==tail,                                                        _if_conditional228) {
                                                            # 558 "./comelang2.h"
                                                            self->head=it_179;
                                                            # 559 "./comelang2.h"
                                                            self->head->prev=((void*)0);
                                                            # 560 "./comelang2.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 563 "./comelang2.h"
                                                            it_179=it_179->next;
                                                            # 564 "./comelang2.h"
                                                            i_180++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 634 "./comelang2.h"
                                                # 568 "./comelang2.h"
                                                if(_if_conditional229=tail==self->len,                                                _if_conditional229) {
                                                    # 569 "./comelang2.h"
                                                    it_182=self->head;
                                                    # 570 "./comelang2.h"
                                                    i_183=0;
                                                    # 592 "./comelang2.h"
                                                    while(_while_condtional16=it_182!=((void*)0),                                                    _while_condtional16) {
                                                        # 577 "./comelang2.h"
                                                        # 572 "./comelang2.h"
                                                        if(_if_conditional230=i_183==head,                                                        _if_conditional230) {
                                                            # 573 "./comelang2.h"
                                                            self->tail=it_182->prev;
                                                            # 574 "./comelang2.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 591 "./comelang2.h"
                                                        # 577 "./comelang2.h"
                                                        if(_if_conditional231=i_183>=head,                                                        _if_conditional231) {
                                                            # 578 "./comelang2.h"
                                                            prev_it_184=it_182;
                                                            # 580 "./comelang2.h"
                                                            it_182=it_182->next;
                                                            # 581 "./comelang2.h"
                                                            i_183++;
                                                            # 583 "./comelang2.h"
                                                            if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 585 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 588 "./comelang2.h"
                                                            it_182=it_182->next;
                                                            # 589 "./comelang2.h"
                                                            i_183++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 594 "./comelang2.h"
                                                    it_185=self->head;
                                                    # 596 "./comelang2.h"
                                                    head_prev_it_186=((void*)0);
                                                    # 597 "./comelang2.h"
                                                    tail_it_187=((void*)0);
                                                    # 600 "./comelang2.h"
                                                    i_188=0;
                                                    # 626 "./comelang2.h"
                                                    while(_while_condtional17=it_185!=((void*)0),                                                    _while_condtional17) {
                                                        # 605 "./comelang2.h"
                                                        # 602 "./comelang2.h"
                                                        if(_if_conditional232=i_188==head,                                                        _if_conditional232) {
                                                            # 603 "./comelang2.h"
                                                            head_prev_it_186=it_185->prev;
                                                        }
                                                        # 609 "./comelang2.h"
                                                        # 605 "./comelang2.h"
                                                        if(_if_conditional233=i_188==tail,                                                        _if_conditional233) {
                                                            # 606 "./comelang2.h"
                                                            tail_it_187=it_185;
                                                        }
                                                        # 624 "./comelang2.h"
                                                        # 609 "./comelang2.h"
                                                        if(_if_conditional234=i_188>=head&&i_188<tail,                                                        _if_conditional234) {
                                                            # 611 "./comelang2.h"
                                                            prev_it_189=it_185;
                                                            # 613 "./comelang2.h"
                                                            it_185=it_185->next;
                                                            # 614 "./comelang2.h"
                                                            i_188++;
                                                            # 616 "./comelang2.h"
                                                            if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 618 "./comelang2.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 621 "./comelang2.h"
                                                            it_185=it_185->next;
                                                            # 622 "./comelang2.h"
                                                            i_188++;
                                                        }
                                                    }
                                                    # 629 "./comelang2.h"
                                                    # 626 "./comelang2.h"
                                                    if(_if_conditional235=head_prev_it_186!=((void*)0),                                                    _if_conditional235) {
                                                        # 627 "./comelang2.h"
                                                        head_prev_it_186->next=tail_it_187;
                                                    }
                                                    # 632 "./comelang2.h"
                                                    # 629 "./comelang2.h"
                                                    if(_if_conditional236=tail_it_187!=((void*)0),                                                    _if_conditional236) {
                                                        # 630 "./comelang2.h"
                                                        tail_it_187->prev=head_prev_it_186;
                                                    }
                                                }
                                            }
                                        }
                                        # 634 "./comelang2.h"
                                        __result89__ = __result_obj__ = self;
                                        return __result89__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_177;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_178;
struct list$1charp* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_178, 0, sizeof(struct list_item$1charp*));
                                                # 483 "./comelang2.h"
                                                it_177=self->head;
                                                # 490 "./comelang2.h"
                                                while(_while_condtional14=it_177!=((void*)0),                                                _while_condtional14) {
                                                    # 485 "./comelang2.h"
                                                    prev_it_178=it_177;
                                                    # 486 "./comelang2.h"
                                                    it_177=it_177->next;
                                                    # 487 "./comelang2.h"
                                                    if(prev_it_178 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                # 490 "./comelang2.h"
                                                self->head=((void*)0);
                                                # 491 "./comelang2.h"
                                                self->tail=((void*)0);
                                                # 493 "./comelang2.h"
                                                self->len=0;
                                                # 495 "./comelang2.h"
                                                __result88__ = __result_obj__ = self;
                                                return __result88__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional242;
char* result_191;
char* __result91__;
_Bool _if_conditional243;
char* __result92__;
char* result_192;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional242=self==((void*)0),            _if_conditional242) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                memset(&result_191,0,sizeof(char*));
                # 341 "./comelang2.h"
                __result91__ = __result_obj__ = result_191;
                return __result91__;
            }
            # 343 "./comelang2.h"
            self->it=self->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional243=self->it,            _if_conditional243) {
                # 346 "./comelang2.h"
                __result92__ = __result_obj__ = self->it->item;
                return __result92__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            memset(&result_192,0,sizeof(char*));
            # 351 "./comelang2.h"
            __result93__ = __result_obj__ = result_192;
            return __result93__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 373 "./comelang2.h"
            __result94__ = self==((void*)0)||self->it==((void*)0);
            return __result94__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
char* result_194;
char* __result95__;
_Bool _if_conditional245;
char* __result96__;
char* result_195;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(char*));
memset(&result_195, 0, sizeof(char*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional244=self==((void*)0)||self->it==((void*)0),            _if_conditional244) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                memset(&result_194,0,sizeof(char*));
                # 358 "./comelang2.h"
                __result95__ = __result_obj__ = result_194;
                return __result95__;
            }
            # 361 "./comelang2.h"
            self->it=self->it->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional245=self->it,            _if_conditional245) {
                # 364 "./comelang2.h"
                __result96__ = __result_obj__ = self->it->item;
                return __result96__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            memset(&result_195,0,sizeof(char*));
            # 369 "./comelang2.h"
            __result97__ = __result_obj__ = result_195;
            return __result97__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
void* right_value174;
struct list_item$1charp* litem_196;
_Bool _if_conditional249;
void* right_value175;
struct list_item$1charp* litem_197;
void* right_value176;
struct list_item$1charp* litem_198;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value174, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1charp*));
memset(&right_value175, 0, sizeof(void*));
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
memset(&right_value176, 0, sizeof(void*));
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional248=self->len==0,                _if_conditional248) {
                    # 279 "./comelang2.h"
                    litem_196=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value174=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value174;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_196->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_196->next=((void*)0);
                    # 283 "./comelang2.h"
                    litem_196->item=item;
                    # 285 "./comelang2.h"
                    self->tail=litem_196;
                    # 286 "./comelang2.h"
                    self->head=litem_196;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional249=self->len==1,                    _if_conditional249) {
                        # 289 "./comelang2.h"
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value175=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value175;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_197->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_197->next=((void*)0);
                        # 293 "./comelang2.h"
                        litem_197->item=item;
                        # 295 "./comelang2.h"
                        self->tail=litem_197;
                        # 296 "./comelang2.h"
                        self->head->next=litem_197;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value176=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value176;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_198->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_198->next=((void*)0);
                        # 303 "./comelang2.h"
                        litem_198->item=item;
                        # 305 "./comelang2.h"
                        self->tail->next=litem_198;
                        # 306 "./comelang2.h"
                        self->tail=litem_198;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result98__ = __result_obj__ = self;
                return __result98__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value178;
char* output_file_name_199;
struct _IO_FILE* f_200;
void* right_value179;
struct map$2charphsFunph* o2_saved_201;
char* it_202;
_Bool _for_condtionalA20;
void* right_value180;
struct sFun* it2_206;
void* right_value184;
char* header_207;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct map$2charphsFunph* o2_saved_212;
char* it_213;
_Bool _for_condtionalA23;
void* right_value185;
struct sFun* it2_214;
void* right_value186;
char* header_215;
_Bool _if_conditional262;
void* right_value187;
char* output_216;
_Bool _if_conditional263;
void* right_value188;
char* output_217;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct map$2charphsFunph* o2_saved_218;
char* it_219;
_Bool _for_condtionalA24;
struct sFun* it2_220;
_Bool _if_conditional266;
void* right_value189;
char* output_221;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&output_file_name_199, 0, sizeof(char*));
memset(&f_200, 0, sizeof(struct _IO_FILE*));
memset(&right_value179, 0, sizeof(void*));
memset(&o2_saved_201, 0, sizeof(struct map$2charphsFunph*));
memset(&it_202, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&it2_206, 0, sizeof(struct sFun*));
memset(&right_value184, 0, sizeof(void*));
memset(&header_207, 0, sizeof(char*));
memset(&o2_saved_212, 0, sizeof(struct map$2charphsFunph*));
memset(&it_213, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&it2_214, 0, sizeof(struct sFun*));
memset(&right_value186, 0, sizeof(void*));
memset(&header_215, 0, sizeof(char*));
memset(&right_value187, 0, sizeof(void*));
memset(&output_216, 0, sizeof(char*));
memset(&right_value188, 0, sizeof(void*));
memset(&output_217, 0, sizeof(char*));
memset(&o2_saved_218, 0, sizeof(struct map$2charphsFunph*));
memset(&it_219, 0, sizeof(char*));
memset(&it2_220, 0, sizeof(struct sFun*));
memset(&right_value189, 0, sizeof(void*));
memset(&output_221, 0, sizeof(char*));
    # 679 "03transpile2.c"
    output_file_name_199=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.c",info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value178;
    __freed_obj__ = 0;
    # 681 "03transpile2.c"
    f_200=fopen(output_file_name_199,"w");
    # 683 "03transpile2.c"
    fprintf(f_200,"// source head\n");
    # 684 "03transpile2.c"
    fprintf(f_200,"%s\n",((char*)(right_value179=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value179;
    __freed_obj__ = 0;
    # 686 "03transpile2.c"
    fprintf(f_200,"// header function\n");
    # 704 "03transpile2.c"
    for(
    o2_saved_201=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_202=map$2charphsFunph_begin((o2_saved_201)) ,    0;    _for_condtionalA20=    !map$2charphsFunph_end((o2_saved_201)) ,    _for_condtionalA20;    it_202=map$2charphsFunph_next((o2_saved_201)) ,    0    ){
        # 688 "03transpile2.c"
        it2_206=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value180=__builtin_string(it_202))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value180;
        __freed_obj__ = 0;
        # 690 "03transpile2.c"
        header_207=(char*)come_increment_ref_count(((char*)(right_value184=header_function(it2_206,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value184;
        __freed_obj__ = 0;
        # 702 "03transpile2.c"
        # 692 "03transpile2.c"
        if(_if_conditional254=it2_206->mStatic&&it2_206->mResultType->mInline,        _if_conditional254) {
        }
        else {
            # 702 "03transpile2.c"
            # 694 "03transpile2.c"
            if(_if_conditional255=it2_206->mStatic,            _if_conditional255) {
                # 695 "03transpile2.c"
                fprintf(f_200,"static %s",header_207);
            }
            else {
                # 702 "03transpile2.c"
                # 697 "03transpile2.c"
                if(_if_conditional256=it2_206->mResultType->mInline,                _if_conditional256) {
                }
                else {
                    # 702 "03transpile2.c"
                    # 699 "03transpile2.c"
                    if(_if_conditional257=string_operator_not_equals(it_202,"__builtin_va_start")&&string_operator_not_equals(it_202,"__builtin_va_end"),                    _if_conditional257) {
                        # 700 "03transpile2.c"
                        fprintf(f_200,"%s\n",header_207,it_202);
                    }
                }
            }
        }
        if(header_207 && !__freed_obj__) { header_207 = come_decrement_ref_count(header_207, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 704 "03transpile2.c"
    fprintf(f_200,"// inline function\n");
    # 724 "03transpile2.c"
    for(
    o2_saved_212=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_213=map$2charphsFunph_begin((o2_saved_212)) ,    0;    _for_condtionalA23=    !map$2charphsFunph_end((o2_saved_212)) ,    _for_condtionalA23;    it_213=map$2charphsFunph_next((o2_saved_212)) ,    0    ){
        # 706 "03transpile2.c"
        it2_214=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value185=__builtin_string(it_213))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value185;
        __freed_obj__ = 0;
        # 708 "03transpile2.c"
        header_215=(char*)come_increment_ref_count(((char*)(right_value186=header_function(it2_214,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value186;
        __freed_obj__ = 0;
        # 722 "03transpile2.c"
        # 710 "03transpile2.c"
        if(_if_conditional262=it2_214->mStatic&&it2_214->mResultType->mInline,        _if_conditional262) {
            # 711 "03transpile2.c"
            output_216=(char*)come_increment_ref_count(((char*)(right_value187=output_function(it2_214,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value187;
            __freed_obj__ = 0;
            # 712 "03transpile2.c"
            fprintf(f_200,"static inline %s",output_216);
            if(output_216 && !__freed_obj__) { output_216 = come_decrement_ref_count(output_216, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 722 "03transpile2.c"
            # 714 "03transpile2.c"
            if(_if_conditional263=it2_214->mResultType->mInline,            _if_conditional263) {
                # 715 "03transpile2.c"
                output_217=(char*)come_increment_ref_count(((char*)(right_value188=output_function(it2_214,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value188;
                __freed_obj__ = 0;
                # 716 "03transpile2.c"
                fprintf(f_200,"static inline %s",output_217);
                if(output_217 && !__freed_obj__) { output_217 = come_decrement_ref_count(output_217, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 722 "03transpile2.c"
                # 718 "03transpile2.c"
                if(_if_conditional264=it2_214->mStatic,                _if_conditional264) {
                }
                else {
                    # 722 "03transpile2.c"
                    # 720 "03transpile2.c"
                    if(_if_conditional265=string_operator_not_equals(it_213,"__builtin_va_start")&&string_operator_not_equals(it_213,"__builtin_va_end"),                    _if_conditional265) {
                    }
                }
            }
        }
        if(header_215 && !__freed_obj__) { header_215 = come_decrement_ref_count(header_215, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_212 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 724 "03transpile2.c"
    fprintf(f_200,"\n");
    # 726 "03transpile2.c"
    fprintf(f_200,"// body function\n");
    # 748 "03transpile2.c"
    for(
    o2_saved_218=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_219=map$2charphsFunph_begin((o2_saved_218)) ,    0;    _for_condtionalA24=    !map$2charphsFunph_end((o2_saved_218)) ,    _for_condtionalA24;    it_219=map$2charphsFunph_next((o2_saved_218)) ,    0    ){
        # 728 "03transpile2.c"
        it2_220=map$2charphsFunphp_operator_load_element(info->funcs,it_219);
        # 746 "03transpile2.c"
        # 730 "03transpile2.c"
        if(_if_conditional266=!it2_220->mExternal,        _if_conditional266) {
            # 731 "03transpile2.c"
            output_221=(char*)come_increment_ref_count(((char*)(right_value189=output_function(it2_220,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value189;
            __freed_obj__ = 0;
            # 744 "03transpile2.c"
            # 733 "03transpile2.c"
            if(_if_conditional267=it2_220->mStatic&&it2_220->mResultType->mInline,            _if_conditional267) {
            }
            else {
                # 744 "03transpile2.c"
                # 735 "03transpile2.c"
                if(_if_conditional268=it2_220->mStatic,                _if_conditional268) {
                    # 736 "03transpile2.c"
                    fprintf(f_200,"static %s",output_221);
                }
                else {
                    # 744 "03transpile2.c"
                    # 738 "03transpile2.c"
                    if(_if_conditional269=it2_220->mResultType->mInline,                    _if_conditional269) {
                    }
                    else {
                        # 741 "03transpile2.c"
                        fprintf(f_200,"%s",output_221);
                    }
                }
            }
            # 744 "03transpile2.c"
            fprintf(f_200,"\n");
            if(output_221 && !__freed_obj__) { output_221 = come_decrement_ref_count(output_221, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    if(o2_saved_218 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 748 "03transpile2.c"
    fclose(f_200);
    # 750 "03transpile2.c"
    __result106__ = (_Bool)1;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
    return __result106__;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_203;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional18;
_Bool _if_conditional250;
void* right_value181;
_Bool _if_conditional251;
struct sFun* __result101__;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct sFun* __result102__;
struct sFun* __result103__;
void* right_value182;
void* right_value183;
struct sFun* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_203, 0, sizeof(struct sFun*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
            # 1591 "./comelang2.h"
            # 1592 "./comelang2.h"
            memset(&default_value_203,0,sizeof(struct sFun*));
            # 1594 "./comelang2.h"
            hash_204=string_get_hash_key(((char*)key))%self->size;
            # 1595 "./comelang2.h"
            it_205=hash_204;
            # 1619 "./comelang2.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1617 "./comelang2.h"
                # 1598 "./comelang2.h"
                if(_if_conditional250=self->item_existance[it_205],                _if_conditional250) {
                    # 1605 "./comelang2.h"
                    # 1600 "./comelang2.h"
                    if(_if_conditional251=optional$2boolbool_value(((struct optional$2boolbool*)(right_value181=string_equals(self->keys[it_205],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181),
                    (right_value181 && right_value181 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value181, 
                    __freed_obj__ = 0, 
                    _if_conditional251) {
                        # 1602 "./comelang2.h"
                        __result101__ = __result_obj__ = self->items[it_205];
                        return __result101__;
                    }
                    # 1605 "./comelang2.h"
                    it_205++;
                    # 1613 "./comelang2.h"
                    # 1607 "./comelang2.h"
                    if(_if_conditional252=it_205>=self->size,                    _if_conditional252) {
                        # 1608 "./comelang2.h"
                        it_205=0;
                    }
                    else {
                        # 1613 "./comelang2.h"
                        # 1610 "./comelang2.h"
                        if(_if_conditional253=it_205==hash_204,                        _if_conditional253) {
                            # 1611 "./comelang2.h"
                            __result102__ = __result_obj__ = default_value_203;
                            return __result102__;
                        }
                    }
                }
                else {
                    # 1615 "./comelang2.h"
                    __result103__ = __result_obj__ = default_value_203;
                    return __result103__;
                }
            }
            # 1619 "./comelang2.h"
            __result105__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value183=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value182=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_203,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value182;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value183;
            __freed_obj__ = 0;
            return __result105__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 40 "./comelang2.h"
                self->v1=v1;
                # 41 "./comelang2.h"
                self->v2=v2;
                # 43 "./comelang2.h"
                __result104__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result104__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_208;
_Bool _for_condtionalA21;
_Bool _if_conditional258;
_Bool _if_conditional259;
int i_209;
_Bool _for_condtionalA22;
_Bool _if_conditional260;
_Bool _if_conditional261;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_208, 0, sizeof(int));
memset(&i_209, 0, sizeof(int));
        # 1179 "./comelang2.h"
        for(
        i_208=0 ,        0;        _for_condtionalA21=        i_208<self->size ,        _for_condtionalA21;        i_208++ ,        0        ){
            # 1178 "./comelang2.h"
            # 1173 "./comelang2.h"
            if(_if_conditional258=self->item_existance[i_208],            _if_conditional258) {
                # 1177 "./comelang2.h"
                # 1174 "./comelang2.h"
                if(_if_conditional259=1,                _if_conditional259) {
                    # 1175 "./comelang2.h"
                    if(self->items[i_208] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[i_208], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        # 1179 "./comelang2.h"
        come_free_object((char*)self->items);
        # 1188 "./comelang2.h"
        for(
        i_209=0 ,        0;        _for_condtionalA22=        i_209<self->size ,        _for_condtionalA22;        i_209++ ,        0        ){
            # 1187 "./comelang2.h"
            # 1182 "./comelang2.h"
            if(_if_conditional260=self->item_existance[i_209],            _if_conditional260) {
                # 1186 "./comelang2.h"
                # 1183 "./comelang2.h"
                if(_if_conditional261=1,                _if_conditional261) {
                    # 1184 "./comelang2.h"
                    if(self->keys[i_209] && !__freed_obj__) { self->keys[i_209] = come_decrement_ref_count(self->keys[i_209], (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        # 1188 "./comelang2.h"
        come_free_object((char*)self->keys);
        # 1190 "./comelang2.h"
        if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 1192 "./comelang2.h"
        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_210;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_210, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_211, 0, sizeof(struct list_item$1charp*));
            # 176 "./comelang2.h"
            it_210=self->head;
            # 182 "./comelang2.h"
            while(_while_condtional19=it_210!=((void*)0),            _while_condtional19) {
                # 178 "./comelang2.h"
                prev_it_211=it_210;
                # 179 "./comelang2.h"
                it_210=it_210->next;
                # 180 "./comelang2.h"
                if(prev_it_211 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_222;
struct _IO_FILE* f_223;
_Bool _if_conditional270;
void* right_value190;
struct map$2charphsFunph* o2_saved_224;
char* it_225;
_Bool _for_condtionalA25;
void* right_value191;
struct sFun* it2_226;
void* right_value192;
char* header_227;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
struct map$2charphsFunph* o2_saved_228;
char* it_229;
_Bool _for_condtionalA26;
void* right_value193;
struct sFun* it2_230;
void* right_value194;
char* header_231;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value195;
char* output_232;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value196;
char* output_233;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_222, 0, sizeof(char*));
memset(&f_223, 0, sizeof(struct _IO_FILE*));
memset(&right_value190, 0, sizeof(void*));
memset(&o2_saved_224, 0, sizeof(struct map$2charphsFunph*));
memset(&it_225, 0, sizeof(char*));
memset(&right_value191, 0, sizeof(void*));
memset(&it2_226, 0, sizeof(struct sFun*));
memset(&right_value192, 0, sizeof(void*));
memset(&header_227, 0, sizeof(char*));
memset(&o2_saved_228, 0, sizeof(struct map$2charphsFunph*));
memset(&it_229, 0, sizeof(char*));
memset(&right_value193, 0, sizeof(void*));
memset(&it2_230, 0, sizeof(struct sFun*));
memset(&right_value194, 0, sizeof(void*));
memset(&header_231, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&output_232, 0, sizeof(char*));
memset(&right_value196, 0, sizeof(void*));
memset(&output_233, 0, sizeof(char*));
    # 756 "03transpile2.c"
    output_file_name_222=(char*)come_increment_ref_count(info->output_file_name);
    # 758 "03transpile2.c"
    f_223=fopen(output_file_name_222,"a");
    # 766 "03transpile2.c"
    # 760 "03transpile2.c"
    if(_if_conditional270=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional270) {
        # 761 "03transpile2.c"
        fprintf(f_223,"#ifndef __COMMON_H__\n");
        # 762 "03transpile2.c"
        fprintf(f_223,"#define __COMMON_H__\n");
        # 763 "03transpile2.c"
        fprintf(f_223,"#include <comelang2.h>\n");
    }
    # 766 "03transpile2.c"
    fprintf(f_223,"// source head\n");
    # 767 "03transpile2.c"
    fprintf(f_223,"%s\n",((char*)(right_value190=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190;
    __freed_obj__ = 0;
    # 769 "03transpile2.c"
    fprintf(f_223,"// header function\n");
    # 788 "03transpile2.c"
    for(
    o2_saved_224=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_225=map$2charphsFunph_begin((o2_saved_224)) ,    0;    _for_condtionalA25=    !map$2charphsFunph_end((o2_saved_224)) ,    _for_condtionalA25;    it_225=map$2charphsFunph_next((o2_saved_224)) ,    0    ){
        # 771 "03transpile2.c"
        it2_226=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value191=__builtin_string(it_225))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = 0;
        # 773 "03transpile2.c"
        header_227=(char*)come_increment_ref_count(((char*)(right_value192=header_function(it2_226,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value192;
        __freed_obj__ = 0;
        # 786 "03transpile2.c"
        # 775 "03transpile2.c"
        if(_if_conditional271=it2_226->mStatic&&it2_226->mResultType->mInline,        _if_conditional271) {
        }
        else {
            # 786 "03transpile2.c"
            # 777 "03transpile2.c"
            if(_if_conditional272=it2_226->mStatic,            _if_conditional272) {
            }
            else {
                # 786 "03transpile2.c"
                # 779 "03transpile2.c"
                if(_if_conditional273=it2_226->mResultType->mInline,                _if_conditional273) {
                }
                else {
                    # 786 "03transpile2.c"
                    # 781 "03transpile2.c"
                    if(_if_conditional274=string_operator_not_equals(it_225,"__builtin_va_start")&&string_operator_not_equals(it_225,"__builtin_va_end"),                    _if_conditional274) {
                        # 785 "03transpile2.c"
                        # 782 "03transpile2.c"
                        if(_if_conditional275=string_operator_equals(it2_226->mDeclareSName,info->base_sname),                        _if_conditional275) {
                            # 783 "03transpile2.c"
                            fprintf(f_223,"%s\n",header_227,it_225);
                        }
                    }
                }
            }
        }
        if(header_227 && !__freed_obj__) { header_227 = come_decrement_ref_count(header_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_224 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 788 "03transpile2.c"
    fprintf(f_223,"// inline function\n");
    # 812 "03transpile2.c"
    for(
    o2_saved_228=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_229=map$2charphsFunph_begin((o2_saved_228)) ,    0;    _for_condtionalA26=    !map$2charphsFunph_end((o2_saved_228)) ,    _for_condtionalA26;    it_229=map$2charphsFunph_next((o2_saved_228)) ,    0    ){
        # 790 "03transpile2.c"
        it2_230=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value193=__builtin_string(it_229))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value193;
        __freed_obj__ = 0;
        # 792 "03transpile2.c"
        header_231=(char*)come_increment_ref_count(((char*)(right_value194=header_function(it2_230,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value194;
        __freed_obj__ = 0;
        # 810 "03transpile2.c"
        # 794 "03transpile2.c"
        if(_if_conditional276=it2_230->mStatic&&it2_230->mResultType->mInline,        _if_conditional276) {
            # 799 "03transpile2.c"
            # 795 "03transpile2.c"
            if(_if_conditional277=string_operator_equals(it2_230->mDeclareSName,info->base_sname),            _if_conditional277) {
                # 796 "03transpile2.c"
                output_232=(char*)come_increment_ref_count(((char*)(right_value195=output_function(it2_230,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value195;
                __freed_obj__ = 0;
                # 797 "03transpile2.c"
                fprintf(f_223,"static inline %s",output_232);
                if(output_232 && !__freed_obj__) { output_232 = come_decrement_ref_count(output_232, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            # 810 "03transpile2.c"
            # 800 "03transpile2.c"
            if(_if_conditional278=it2_230->mResultType->mInline,            _if_conditional278) {
                # 805 "03transpile2.c"
                # 801 "03transpile2.c"
                if(_if_conditional279=string_operator_equals(it2_230->mDeclareSName,info->base_sname),                _if_conditional279) {
                    # 802 "03transpile2.c"
                    output_233=(char*)come_increment_ref_count(((char*)(right_value196=output_function(it2_230,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value196;
                    __freed_obj__ = 0;
                    # 803 "03transpile2.c"
                    fprintf(f_223,"static inline %s",output_233);
                    if(output_233 && !__freed_obj__) { output_233 = come_decrement_ref_count(output_233, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                # 810 "03transpile2.c"
                # 806 "03transpile2.c"
                if(_if_conditional280=it2_230->mStatic,                _if_conditional280) {
                }
                else {
                    # 810 "03transpile2.c"
                    # 808 "03transpile2.c"
                    if(_if_conditional281=string_operator_not_equals(it_229,"__builtin_va_start")&&string_operator_not_equals(it_229,"__builtin_va_end"),                    _if_conditional281) {
                    }
                }
            }
        }
        if(header_231 && !__freed_obj__) { header_231 = come_decrement_ref_count(header_231, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_228 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 812 "03transpile2.c"
    fprintf(f_223,"\n");
    # 818 "03transpile2.c"
    # 814 "03transpile2.c"
    if(_if_conditional282=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional282) {
        # 815 "03transpile2.c"
        fprintf(f_223,"#endif\n");
    }
    # 818 "03transpile2.c"
    fclose(f_223);
    # 820 "03transpile2.c"
    __result107__ = (_Bool)1;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
    return __result107__;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
char* msg2_234;
va_list args_235;
int len_236;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_234, 0, sizeof(char*));
memset(&args_235, 0, sizeof(va_list));
memset(&len_236, 0, sizeof(int));
    # 828 "03transpile2.c"
    # 825 "03transpile2.c"
    if(_if_conditional283=info->no_output_come_code,    _if_conditional283) {
        # 826 "03transpile2.c"
        return;
    }
    # 828 "03transpile2.c"
    # 830 "03transpile2.c"
    # 831 "03transpile2.c"
    __builtin_va_start(args_235,code);
    # 832 "03transpile2.c"
    len_236=vasprintf(&msg2_234,code,args_235);
    # 833 "03transpile2.c"
    __builtin_va_end(args_235);
    # 839 "03transpile2.c"
    # 835 "03transpile2.c"
    if(_if_conditional284=info->come_fun,    _if_conditional284) {
        # 836 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead,msg2_234);
    }
    # 839 "03transpile2.c"
    free(msg2_234);
    if((&args_235) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_235), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
char* msg2_237;
va_list args_238;
int len_239;
_Bool _if_conditional286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_237, 0, sizeof(char*));
memset(&args_238, 0, sizeof(va_list));
memset(&len_239, 0, sizeof(int));
    # 847 "03transpile2.c"
    # 844 "03transpile2.c"
    if(_if_conditional285=info->no_output_come_code,    _if_conditional285) {
        # 845 "03transpile2.c"
        return;
    }
    # 847 "03transpile2.c"
    # 849 "03transpile2.c"
    # 850 "03transpile2.c"
    __builtin_va_start(args_238,code);
    # 851 "03transpile2.c"
    len_239=vasprintf(&msg2_237,code,args_238);
    # 852 "03transpile2.c"
    __builtin_va_end(args_238);
    # 858 "03transpile2.c"
    # 854 "03transpile2.c"
    if(_if_conditional286=info->come_fun,    _if_conditional286) {
        # 855 "03transpile2.c"
        buffer_append_str(info->come_fun->mSourceHead2,msg2_237);
    }
    # 858 "03transpile2.c"
    free(msg2_237);
    if((&args_238) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_238), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
_Bool _if_conditional288;
char* __dec_obj36;
_Bool _if_conditional289;
char* __dec_obj37;
_Bool _if_conditional290;
char* __dec_obj38;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 866 "03transpile2.c"
    # 863 "03transpile2.c"
    if(_if_conditional287=info->no_output_come_code,    _if_conditional287) {
        # 864 "03transpile2.c"
        return;
    }
    # 870 "03transpile2.c"
    # 866 "03transpile2.c"
    if(_if_conditional288=info->module->mLastCode,    _if_conditional288) {
        # 867 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode);
        # 868 "03transpile2.c"
        __dec_obj36=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
    }
    # 874 "03transpile2.c"
    # 870 "03transpile2.c"
    if(_if_conditional289=info->module->mLastCode2,    _if_conditional289) {
        # 871 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode2);
        # 872 "03transpile2.c"
        __dec_obj37=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    }
    # 878 "03transpile2.c"
    # 874 "03transpile2.c"
    if(_if_conditional290=info->module->mLastCode3,    _if_conditional290) {
        # 875 "03transpile2.c"
        add_come_code(info,"%s",info->module->mLastCode3);
        # 876 "03transpile2.c"
        __dec_obj38=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value197;
char* __dec_obj39;
_Bool _if_conditional293;
void* right_value198;
char* __dec_obj40;
_Bool _if_conditional294;
void* right_value199;
char* __dec_obj41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
    # 885 "03transpile2.c"
    # 882 "03transpile2.c"
    if(_if_conditional291=info->no_output_come_code,    _if_conditional291) {
        # 883 "03transpile2.c"
        return;
    }
    # 889 "03transpile2.c"
    # 885 "03transpile2.c"
    if(_if_conditional292=info->module->mLastCode,    _if_conditional292) {
        # 886 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value197=string_substring(info->module->mLastCode,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value197;
        __freed_obj__ = 0;
        # 887 "03transpile2.c"
        __dec_obj39=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    }
    # 893 "03transpile2.c"
    # 889 "03transpile2.c"
    if(_if_conditional293=info->module->mLastCode2,    _if_conditional293) {
        # 890 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value198=string_substring(info->module->mLastCode2,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = 0;
        # 891 "03transpile2.c"
        __dec_obj40=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    }
    # 897 "03transpile2.c"
    # 893 "03transpile2.c"
    if(_if_conditional294=info->module->mLastCode3,    _if_conditional294) {
        # 894 "03transpile2.c"
        add_come_code(info,"%s ,",((char*)(right_value199=string_substring(info->module->mLastCode3,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value199;
        __freed_obj__ = 0;
        # 895 "03transpile2.c"
        __dec_obj41=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional295;
char* msg2_240;
va_list args_241;
int len_242;
void* right_value200;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_240, 0, sizeof(char*));
memset(&args_241, 0, sizeof(va_list));
memset(&len_242, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
    # 904 "03transpile2.c"
    # 901 "03transpile2.c"
    if(_if_conditional295=info->no_output_come_code,    _if_conditional295) {
        # 902 "03transpile2.c"
        return;
    }
    # 904 "03transpile2.c"
    # 906 "03transpile2.c"
    # 907 "03transpile2.c"
    __builtin_va_start(args_241,msg);
    # 908 "03transpile2.c"
    len_242=vasprintf(&msg2_240,msg,args_241);
    # 909 "03transpile2.c"
    __builtin_va_end(args_241);
    # 911 "03transpile2.c"
    __dec_obj42=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s",msg2_240))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200;
    __freed_obj__ = 0;
    # 913 "03transpile2.c"
    free(msg2_240);
    if((&args_241) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_241), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
char* msg2_243;
va_list args_244;
int len_245;
void* right_value201;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
memset(&len_245, 0, sizeof(int));
memset(&right_value201, 0, sizeof(void*));
    # 921 "03transpile2.c"
    # 918 "03transpile2.c"
    if(_if_conditional296=info->no_output_come_code,    _if_conditional296) {
        # 919 "03transpile2.c"
        return;
    }
    # 921 "03transpile2.c"
    # 923 "03transpile2.c"
    # 924 "03transpile2.c"
    __builtin_va_start(args_244,msg);
    # 925 "03transpile2.c"
    len_245=vasprintf(&msg2_243,msg,args_244);
    # 926 "03transpile2.c"
    __builtin_va_end(args_244);
    # 928 "03transpile2.c"
    __dec_obj43=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s",msg2_243))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    # 930 "03transpile2.c"
    free(msg2_243);
    if((&args_244) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_244), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
char* msg2_246;
va_list args_247;
int len_248;
void* right_value202;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_246, 0, sizeof(char*));
memset(&args_247, 0, sizeof(va_list));
memset(&len_248, 0, sizeof(int));
memset(&right_value202, 0, sizeof(void*));
    # 938 "03transpile2.c"
    # 935 "03transpile2.c"
    if(_if_conditional297=info->no_output_come_code,    _if_conditional297) {
        # 936 "03transpile2.c"
        return;
    }
    # 938 "03transpile2.c"
    # 940 "03transpile2.c"
    # 941 "03transpile2.c"
    __builtin_va_start(args_247,msg);
    # 942 "03transpile2.c"
    len_248=vasprintf(&msg2_246,msg,args_247);
    # 943 "03transpile2.c"
    __builtin_va_end(args_247);
    # 945 "03transpile2.c"
    __dec_obj44=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s",msg2_246))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    # 947 "03transpile2.c"
    free(msg2_246);
    if((&args_247) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_247), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 952 "03transpile2.c"
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
int tmp_249;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list$1CVALUEph* __result108__;
_Bool _if_conditional304;
_Bool _if_conditional306;
struct list_item$1CVALUEph* it_252;
int i_253;
_Bool _while_condtional21;
_Bool _if_conditional307;
struct list_item$1CVALUEph* prev_it_254;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct list_item$1CVALUEph* it_255;
int i_256;
_Bool _while_condtional22;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list_item$1CVALUEph* prev_it_257;
struct list_item$1CVALUEph* it_258;
struct list_item$1CVALUEph* head_prev_it_259;
struct list_item$1CVALUEph* tail_it_260;
int i_261;
_Bool _while_condtional23;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct list_item$1CVALUEph* prev_it_262;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list$1CVALUEph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_249, 0, sizeof(int));
memset(&it_252, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_255, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_256, 0, sizeof(int));
memset(&prev_it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_259, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_260, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_261, 0, sizeof(int));
memset(&prev_it_262, 0, sizeof(struct list_item$1CVALUEph*));
        # 517 "./comelang2.h"
        # 514 "./comelang2.h"
        if(_if_conditional298=head<0,        _if_conditional298) {
            # 515 "./comelang2.h"
            head+=self->len;
        }
        # 521 "./comelang2.h"
        # 517 "./comelang2.h"
        if(_if_conditional299=tail<0,        _if_conditional299) {
            # 518 "./comelang2.h"
            tail+=self->len+1;
        }
        # 527 "./comelang2.h"
        # 521 "./comelang2.h"
        if(_if_conditional300=head>tail,        _if_conditional300) {
            # 522 "./comelang2.h"
            tmp_249=tail;
            # 523 "./comelang2.h"
            tail=head;
            # 524 "./comelang2.h"
            head=tmp_249;
        }
        # 531 "./comelang2.h"
        # 527 "./comelang2.h"
        if(_if_conditional301=head<0,        _if_conditional301) {
            # 528 "./comelang2.h"
            head=0;
        }
        # 535 "./comelang2.h"
        # 531 "./comelang2.h"
        if(_if_conditional302=tail>self->len,        _if_conditional302) {
            # 532 "./comelang2.h"
            tail=self->len;
        }
        # 539 "./comelang2.h"
        # 535 "./comelang2.h"
        if(_if_conditional303=head==tail,        _if_conditional303) {
            # 536 "./comelang2.h"
            __result108__ = __result_obj__ = self;
            return __result108__;
        }
        # 634 "./comelang2.h"
        # 539 "./comelang2.h"
        if(_if_conditional304=head==0&&tail==self->len,        _if_conditional304) {
            # 541 "./comelang2.h"
            list$1CVALUEph_reset(self);
        }
        else {
            # 634 "./comelang2.h"
            # 543 "./comelang2.h"
            if(_if_conditional306=head==0,            _if_conditional306) {
                # 544 "./comelang2.h"
                it_252=self->head;
                # 545 "./comelang2.h"
                i_253=0;
                # 567 "./comelang2.h"
                while(_while_condtional21=it_252!=((void*)0),                _while_condtional21) {
                    # 566 "./comelang2.h"
                    # 547 "./comelang2.h"
                    if(_if_conditional307=i_253<tail,                    _if_conditional307) {
                        # 548 "./comelang2.h"
                        prev_it_254=it_252;
                        # 550 "./comelang2.h"
                        it_252=it_252->next;
                        # 551 "./comelang2.h"
                        i_253++;
                        # 553 "./comelang2.h"
                        if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 555 "./comelang2.h"
                        self->len--;
                    }
                    else {
                        # 566 "./comelang2.h"
                        # 557 "./comelang2.h"
                        if(_if_conditional308=i_253==tail,                        _if_conditional308) {
                            # 558 "./comelang2.h"
                            self->head=it_252;
                            # 559 "./comelang2.h"
                            self->head->prev=((void*)0);
                            # 560 "./comelang2.h"
                            break;
                        }
                        else {
                            # 563 "./comelang2.h"
                            it_252=it_252->next;
                            # 564 "./comelang2.h"
                            i_253++;
                        }
                    }
                }
            }
            else {
                # 634 "./comelang2.h"
                # 568 "./comelang2.h"
                if(_if_conditional309=tail==self->len,                _if_conditional309) {
                    # 569 "./comelang2.h"
                    it_255=self->head;
                    # 570 "./comelang2.h"
                    i_256=0;
                    # 592 "./comelang2.h"
                    while(_while_condtional22=it_255!=((void*)0),                    _while_condtional22) {
                        # 577 "./comelang2.h"
                        # 572 "./comelang2.h"
                        if(_if_conditional310=i_256==head,                        _if_conditional310) {
                            # 573 "./comelang2.h"
                            self->tail=it_255->prev;
                            # 574 "./comelang2.h"
                            self->tail->next=((void*)0);
                        }
                        # 591 "./comelang2.h"
                        # 577 "./comelang2.h"
                        if(_if_conditional311=i_256>=head,                        _if_conditional311) {
                            # 578 "./comelang2.h"
                            prev_it_257=it_255;
                            # 580 "./comelang2.h"
                            it_255=it_255->next;
                            # 581 "./comelang2.h"
                            i_256++;
                            # 583 "./comelang2.h"
                            if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 585 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 588 "./comelang2.h"
                            it_255=it_255->next;
                            # 589 "./comelang2.h"
                            i_256++;
                        }
                    }
                }
                else {
                    # 594 "./comelang2.h"
                    it_258=self->head;
                    # 596 "./comelang2.h"
                    head_prev_it_259=((void*)0);
                    # 597 "./comelang2.h"
                    tail_it_260=((void*)0);
                    # 600 "./comelang2.h"
                    i_261=0;
                    # 626 "./comelang2.h"
                    while(_while_condtional23=it_258!=((void*)0),                    _while_condtional23) {
                        # 605 "./comelang2.h"
                        # 602 "./comelang2.h"
                        if(_if_conditional312=i_261==head,                        _if_conditional312) {
                            # 603 "./comelang2.h"
                            head_prev_it_259=it_258->prev;
                        }
                        # 609 "./comelang2.h"
                        # 605 "./comelang2.h"
                        if(_if_conditional313=i_261==tail,                        _if_conditional313) {
                            # 606 "./comelang2.h"
                            tail_it_260=it_258;
                        }
                        # 624 "./comelang2.h"
                        # 609 "./comelang2.h"
                        if(_if_conditional314=i_261>=head&&i_261<tail,                        _if_conditional314) {
                            # 611 "./comelang2.h"
                            prev_it_262=it_258;
                            # 613 "./comelang2.h"
                            it_258=it_258->next;
                            # 614 "./comelang2.h"
                            i_261++;
                            # 616 "./comelang2.h"
                            if(prev_it_262 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 618 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 621 "./comelang2.h"
                            it_258=it_258->next;
                            # 622 "./comelang2.h"
                            i_261++;
                        }
                    }
                    # 629 "./comelang2.h"
                    # 626 "./comelang2.h"
                    if(_if_conditional315=head_prev_it_259!=((void*)0),                    _if_conditional315) {
                        # 627 "./comelang2.h"
                        head_prev_it_259->next=tail_it_260;
                    }
                    # 632 "./comelang2.h"
                    # 629 "./comelang2.h"
                    if(_if_conditional316=tail_it_260!=((void*)0),                    _if_conditional316) {
                        # 630 "./comelang2.h"
                        tail_it_260->prev=head_prev_it_259;
                    }
                }
            }
        }
        # 634 "./comelang2.h"
        __result110__ = __result_obj__ = self;
        return __result110__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_250;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_251;
struct list$1CVALUEph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_250, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_251, 0, sizeof(struct list_item$1CVALUEph*));
                # 483 "./comelang2.h"
                it_250=self->head;
                # 490 "./comelang2.h"
                while(_while_condtional20=it_250!=((void*)0),                _while_condtional20) {
                    # 485 "./comelang2.h"
                    prev_it_251=it_250;
                    # 486 "./comelang2.h"
                    it_250=it_250->next;
                    # 487 "./comelang2.h"
                    if(prev_it_251 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 490 "./comelang2.h"
                self->head=((void*)0);
                # 491 "./comelang2.h"
                self->tail=((void*)0);
                # 493 "./comelang2.h"
                self->len=0;
                # 495 "./comelang2.h"
                __result109__ = __result_obj__ = self;
                return __result109__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional305=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional305) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj45;
void* right_value206;
struct CVALUE* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value206, 0, sizeof(void*));
    # 957 "03transpile2.c"
    __dec_obj45=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    # 960 "03transpile2.c"
    __result115__ = __result_obj__ = ((struct CVALUE*)(right_value206=CVALUE_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value206;
    __freed_obj__ = 0;
    return __result115__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional317;
struct list_item$1CVALUEph* it_263;
int i_264;
_Bool _while_condtional24;
_Bool _if_conditional318;
struct CVALUE* __result111__;
struct CVALUE* default_value_265;
struct CVALUE* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
memset(&default_value_265, 0, sizeof(struct CVALUE*));
        # 745 "./comelang2.h"
        # 741 "./comelang2.h"
        if(_if_conditional317=position<0,        _if_conditional317) {
            # 742 "./comelang2.h"
            position+=self->len;
        }
        # 745 "./comelang2.h"
        it_263=self->head;
        # 746 "./comelang2.h"
        i_264=0;
        # 753 "./comelang2.h"
        while(_while_condtional24=it_263!=((void*)0),        _while_condtional24) {
            # 751 "./comelang2.h"
            # 748 "./comelang2.h"
            if(_if_conditional318=position==i_264,            _if_conditional318) {
                # 749 "./comelang2.h"
                __result111__ = __result_obj__ = it_263->item;
                return __result111__;
            }
            # 751 "./comelang2.h"
            it_263=it_263->next;
            # 752 "./comelang2.h"
            i_264++;
        }
        # 755 "./comelang2.h"
        # 756 "./comelang2.h"
        memset(&default_value_265,0,sizeof(struct CVALUE*));
        # 757 "./comelang2.h"
        __result112__ = __result_obj__ = default_value_265;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result112__;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional319;
struct CVALUE* __result113__;
void* right_value203;
struct CVALUE* result_266;
_Bool _if_conditional320;
void* right_value204;
char* __dec_obj46;
_Bool _if_conditional321;
void* right_value205;
struct sType* __dec_obj47;
_Bool _if_conditional322;
struct CVALUE* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value203, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct CVALUE*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
        # 3 "CVALUE_clone"
        # 2 "CVALUE_clone"
        if(_if_conditional319=self==(void*)0,        _if_conditional319) {
            # 2 "CVALUE_clone"
            __result113__ = __result_obj__ = (void*)0;
            return __result113__;
        }
        # 3 "CVALUE_clone"
        result_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value203;
        __freed_obj__ = 0;
        # 5 "CVALUE_clone"
        # 4 "CVALUE_clone"
        if(_if_conditional320=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional320) {
            # 4 "CVALUE_clone"
            __dec_obj46=result_266->c_value;
            result_266->c_value=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(self->c_value))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value204;
            __freed_obj__ = 0;
        }
        # 6 "CVALUE_clone"
        # 5 "CVALUE_clone"
        if(_if_conditional321=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional321) {
            # 5 "CVALUE_clone"
            __dec_obj47=result_266->type;
            result_266->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(self->type))));
            if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value205;
            __freed_obj__ = 0;
        }
        # 7 "CVALUE_clone"
        # 6 "CVALUE_clone"
        if(_if_conditional322=self!=((void*)0),        _if_conditional322) {
            # 6 "CVALUE_clone"
            result_266->var=self->var;
        }
        # 7 "CVALUE_clone"
        __result114__ = __result_obj__ = result_266;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result114__;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 965 "03transpile2.c"
    __dec_obj48=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    # 966 "03transpile2.c"
    __dec_obj49=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    # 967 "03transpile2.c"
    __dec_obj50=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
}

