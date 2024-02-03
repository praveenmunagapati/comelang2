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
int gRightValueNum=0;
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sGenericsFunpbool
{
    struct sGenericsFun* v1;
    _Bool v2;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2);
static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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
    (come_push_stackframe("./comelang2.h", 108),perror(msg),come_pop_stackframe());
    # 109 "./comelang2.h"
    (come_push_stackframe("./comelang2.h", 109),stackframe(),come_pop_stackframe());
    # 110 "./comelang2.h"
    (come_push_stackframe("./comelang2.h", 110),exit(4),come_pop_stackframe());
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
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1999))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1999))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    # 2000 "./comelang2.h"
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2000))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2000))->memory, "./comelang2.h", 2000))->buf;
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
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2009))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2009))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    # 2010 "./comelang2.h"
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2010))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2010))->memory, "./comelang2.h", 2010))->buf;
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
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2019))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2019))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    # 2020 "./comelang2.h"
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2020))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2020))->memory, "./comelang2.h", 2020))->buf;
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
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2029))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2029))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    # 2030 "./comelang2.h"
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2030))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2030))->memory, "./comelang2.h", 2030))->buf;
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
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2039))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2039))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    # 2040 "./comelang2.h"
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2040))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2040))->memory, "./comelang2.h", 2040))->buf;
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
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
char* __dec_obj6;
_Bool _if_conditional8;
void* right_value10;
char* __exception_result_var_b1;
char* __dec_obj7;
_Bool _if_conditional9;
void* right_value11;
char* __exception_result_var_b2;
char* __dec_obj8;
void* right_value12;
char* __exception_result_var_b3;
char* __dec_obj9;
_Bool _if_conditional10;
void* right_value13;
char* __exception_result_var_b4;
char* __dec_obj10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
    # 8 "04heap.c"
    # 5 "04heap.c"
    if(_if_conditional5=gComeGC,    _if_conditional5) {
        # 6 "04heap.c"
        return;
    }
    # 38 "04heap.c"
    # 17 "04heap.c"
    if(_if_conditional6=((struct CVALUE*)come_null_check(right_value, "04heap.c", 17))->var,    _if_conditional6) {
        # 30 "04heap.c"
        # 18 "04heap.c"
        if(_if_conditional7=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 18))->var, "04heap.c", 18))->mType, "04heap.c", 18))->mDelegate,        _if_conditional7) {
            # 19 "04heap.c"
            __dec_obj6=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 19))->var, "04heap.c", 19))->mCValueName;
            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 19))->var, "04heap.c", 19))->mCValueName=((void*)0);
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
        }
        else {
            # 30 "04heap.c"
            # 21 "04heap.c"
            if(_if_conditional8=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 21))->var, "04heap.c", 21))->mType, "04heap.c", 21))->mShare,            _if_conditional8) {
                # 22 "04heap.c"
                __dec_obj7=((struct CVALUE*)come_null_check(right_value, "04heap.c", 22))->c_value;
                ((struct CVALUE*)come_null_check(right_value, "04heap.c", 22))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 22),__exception_result_var_b1=((char*)(right_value10=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "04heap.c", 22))->type,((struct CVALUE*)come_null_check(right_value, "04heap.c", 22))->c_value,info))), come_pop_stackframe(), __exception_result_var_b1));
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = 0;
            }
            else {
                # 30 "04heap.c"
                # 24 "04heap.c"
                if(_if_conditional9=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 24))->var, "04heap.c", 24))->mType, "04heap.c", 24))->mClone,                _if_conditional9) {
                    # 25 "04heap.c"
                    __dec_obj8=((struct CVALUE*)come_null_check(right_value, "04heap.c", 25))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "04heap.c", 25))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 25),__exception_result_var_b2=((char*)(right_value11=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "04heap.c", 25))->type,((struct CVALUE*)come_null_check(right_value, "04heap.c", 25))->c_value,info))), come_pop_stackframe(), __exception_result_var_b2));
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value11;
                    __freed_obj__ = 0;
                }
                else {
                    # 28 "04heap.c"
                    __dec_obj9=((struct CVALUE*)come_null_check(right_value, "04heap.c", 28))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "04heap.c", 28))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 28),__exception_result_var_b3=((char*)(right_value12=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "04heap.c", 28))->type,((struct CVALUE*)come_null_check(right_value, "04heap.c", 28))->c_value,info))), come_pop_stackframe(), __exception_result_var_b3));
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                }
            }
        }
    }
    else {
        # 37 "04heap.c"
        # 32 "04heap.c"
        if(_if_conditional10=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "04heap.c", 32))->type, "04heap.c", 32))->mDelegate,        _if_conditional10) {
        }
        else {
            # 35 "04heap.c"
            __dec_obj10=((struct CVALUE*)come_null_check(right_value, "04heap.c", 35))->c_value;
            ((struct CVALUE*)come_null_check(right_value, "04heap.c", 35))->c_value=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 35),__exception_result_var_b4=((char*)(right_value13=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "04heap.c", 35))->type,((struct CVALUE*)come_null_check(right_value, "04heap.c", 35))->c_value,info))), come_pop_stackframe(), __exception_result_var_b4));
            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13;
            __freed_obj__ = 0;
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value48;
struct sType* result_29;
_Bool _if_conditional97;
struct sType* __result31__;
int __exception_result_var_b11;
_Bool _if_conditional98;
struct sType* __result33__;
struct sClass* klass_30;
_Bool __exception_result_var_b12;
_Bool _if_conditional99;
void* right_value49;
struct sType* __exception_result_var_b13;
struct sType* result_type_31;
void* right_value50;
void* right_value52;
struct tuple1$1sTypeph* __exception_result_var_b14;
struct tuple1$1sTypeph* __dec_obj34;
struct list$1sTypeph* __exception_result_var_b15;
struct list$1sTypeph* o2_saved_34;
struct sType* __exception_result_var_b18;
struct sType* it_37;
_Bool __exception_result_var_b19;
_Bool _for_condtionalA1;
struct sType* __exception_result_var_b22;
void* right_value53;
struct sType* __exception_result_var_b23;
struct sType* new_param_type_40;
void* right_value57;
struct list$1sTypeph* __exception_result_var_b24;
_Bool _if_conditional106;
int generics_number_44;
int __exception_result_var_b25;
_Bool _if_conditional107;
struct sType* __exception_result_var_b27;
struct sClass* klass2_48;
int generics_number2_49;
_Bool _if_conditional110;
void* right_value58;
struct list$1sNodeph* array_num_50;
_Bool immutable__51;
int pointer_num_52;
_Bool heap_53;
_Bool no_heap_54;
_Bool no_calling_destructor_55;
_Bool exception__56;
_Bool null_value_57;
struct sType* __exception_result_var_b28;
void* right_value59;
struct sType* __dec_obj38;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
int __exception_result_var_b29;
_Bool _if_conditional116;
struct list$1sNodeph* __dec_obj39;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list$1sTypeph* __exception_result_var_b30;
struct list$1sTypeph* o2_saved_58;
struct sType* __exception_result_var_b31;
struct sType* it_59;
_Bool __exception_result_var_b32;
_Bool _for_condtionalA2;
struct sType* __exception_result_var_b33;
void* right_value60;
struct sType* __exception_result_var_b34;
struct sType* type_60;
void* right_value61;
struct list$1sTypeph* __exception_result_var_b35;
_Bool __exception_result_var_b36;
_Bool _if_conditional119;
void* right_value62;
char* __exception_result_var_b37;
char* new_name_61;
int __exception_result_var_b38;
struct sType* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&right_value49, 0, sizeof(void*));
memset(&result_type_31, 0, sizeof(struct sType*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_37, 0, sizeof(struct sType*));
memset(&right_value53, 0, sizeof(void*));
memset(&new_param_type_40, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&generics_number_44, 0, sizeof(int));
memset(&klass2_48, 0, sizeof(struct sClass*));
memset(&generics_number2_49, 0, sizeof(int));
memset(&right_value58, 0, sizeof(void*));
memset(&array_num_50, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__51, 0, sizeof(_Bool));
memset(&pointer_num_52, 0, sizeof(int));
memset(&heap_53, 0, sizeof(_Bool));
memset(&no_heap_54, 0, sizeof(_Bool));
memset(&no_calling_destructor_55, 0, sizeof(_Bool));
memset(&exception__56, 0, sizeof(_Bool));
memset(&null_value_57, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_59, 0, sizeof(struct sType*));
memset(&right_value60, 0, sizeof(void*));
memset(&type_60, 0, sizeof(struct sType*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&new_name_61, 0, sizeof(char*));
    # 42 "04heap.c"
    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48;
    __freed_obj__ = 0;
    # 46 "04heap.c"
    # 43 "04heap.c"
    if(_if_conditional97=generics_type==((void*)0),    _if_conditional97) {
        # 44 "04heap.c"
        __result31__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result31__;
    }
    # 50 "04heap.c"
    # 46 "04heap.c"
    if(_if_conditional98=(come_push_stackframe("04heap.c", 46),__exception_result_var_b11=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 46))->mGenericsTypes, "04heap.c", 46))), come_pop_stackframe(), __exception_result_var_b11)==0,    _if_conditional98) {
        # 47 "04heap.c"
        __result33__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result33__;
    }
    # 50 "04heap.c"
    klass_30=((struct sType*)come_null_check(type, "04heap.c", 50))->mClass;
    # 136 "04heap.c"
    # 52 "04heap.c"
    if(_if_conditional99=(come_push_stackframe("04heap.c", 52),__exception_result_var_b12=string_operator_equals(((struct sClass*)come_null_check(klass_30, "04heap.c", 52))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b12),    _if_conditional99) {
        # 53 "04heap.c"
        result_type_31=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 53),__exception_result_var_b13=((struct sType*)(right_value49=solve_generics(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 53))->mResultType, "04heap.c", 53))->v1,generics_type,info))), come_pop_stackframe(), __exception_result_var_b13));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49;
        __freed_obj__ = 0;
        # 55 "04heap.c"
        __dec_obj34=((struct sType*)come_null_check(result_29, "04heap.c", 55))->mResultType;
        ((struct sType*)come_null_check(result_29, "04heap.c", 55))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("04heap.c", 55),__exception_result_var_b14=((struct tuple1$1sTypeph*)(right_value52=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value50=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55)))),(struct sType*)come_increment_ref_count(result_type_31)))), come_pop_stackframe(), __exception_result_var_b14));
        if(__dec_obj34) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value50;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value52;
        __freed_obj__ = 0;
        # 57 "04heap.c"
        (come_push_stackframe("04heap.c", 57),__exception_result_var_b15=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_29, "04heap.c", 57))->mParamTypes, "04heap.c", 57))), come_pop_stackframe(), __exception_result_var_b15);
        # 64 "04heap.c"
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 59))->mParamTypes)),it_37=(come_push_stackframe("04heap.c", 59),__exception_result_var_b18=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_34), "04heap.c", 59))), come_pop_stackframe(), __exception_result_var_b18) ,        0;        _for_condtionalA1=        !(come_push_stackframe("04heap.c", 59),__exception_result_var_b19=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_34), "04heap.c", 59))), come_pop_stackframe(), __exception_result_var_b19) ,        _for_condtionalA1;        it_37=(come_push_stackframe("04heap.c", 59),__exception_result_var_b22=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_34), "04heap.c", 59))), come_pop_stackframe(), __exception_result_var_b22) ,        0        ){
            # 60 "04heap.c"
            new_param_type_40=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 60),__exception_result_var_b23=((struct sType*)(right_value53=solve_generics(it_37,generics_type,info))), come_pop_stackframe(), __exception_result_var_b23));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            # 62 "04heap.c"
            (come_push_stackframe("04heap.c", 62),__exception_result_var_b24=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_29, "04heap.c", 62))->mParamTypes, "04heap.c", 62)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(new_param_type_40))))), come_pop_stackframe(), __exception_result_var_b24);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value57;
            __freed_obj__ = 0;
            if(new_param_type_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_param_type_40, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        # 136 "04heap.c"
        # 65 "04heap.c"
        if(_if_conditional106=((struct sClass*)come_null_check(klass_30, "04heap.c", 65))->mGenerics,        _if_conditional106) {
            # 66 "04heap.c"
            generics_number_44=((struct sClass*)come_null_check(klass_30, "04heap.c", 66))->mGenericsNum;
            # 74 "04heap.c"
            # 68 "04heap.c"
            if(_if_conditional107=generics_number_44>=(come_push_stackframe("04heap.c", 68),__exception_result_var_b25=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 68))->mGenericsTypes, "04heap.c", 68))), come_pop_stackframe(), __exception_result_var_b25),            _if_conditional107) {
                # 70 "04heap.c"
                (come_push_stackframe("04heap.c", 70),err_msg(info,"invalid generics parametor number"),come_pop_stackframe());
                # 71 "04heap.c"
                (come_push_stackframe("04heap.c", 71),exit(2),come_pop_stackframe());
            }
            # 74 "04heap.c"
            klass2_48=((struct sType*)come_null_check((come_push_stackframe("04heap.c", 74),__exception_result_var_b27=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 74))->mGenericsTypes,generics_number_44), come_pop_stackframe(), __exception_result_var_b27), "04heap.c", 74))->mClass;
            # 76 "04heap.c"
            generics_number2_49=((struct sClass*)come_null_check(klass2_48, "04heap.c", 76))->mGenericsNum;
            # 120 "04heap.c"
            # 78 "04heap.c"
            if(_if_conditional110=generics_number_44!=generics_number2_49,            _if_conditional110) {
                # 80 "04heap.c"
                array_num_50=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value58=list$1sNodephp_clone(((struct sType*)come_null_check(type, "04heap.c", 80))->mArrayNum))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
                # 81 "04heap.c"
                immutable__51=((struct sType*)come_null_check(type, "04heap.c", 81))->mImmutable;
                # 82 "04heap.c"
                pointer_num_52=((struct sType*)come_null_check(type, "04heap.c", 82))->mPointerNum;
                # 83 "04heap.c"
                heap_53=((struct sType*)come_null_check(type, "04heap.c", 83))->mHeap;
                # 85 "04heap.c"
                no_heap_54=((struct sType*)come_null_check(type, "04heap.c", 85))->mNoHeap;
                # 86 "04heap.c"
                no_calling_destructor_55=((struct sType*)come_null_check(type, "04heap.c", 86))->mNoCallingDestructor;
                # 87 "04heap.c"
                exception__56=((struct sType*)come_null_check(type, "04heap.c", 87))->mException;
                # 88 "04heap.c"
                null_value_57=((struct sType*)come_null_check(type, "04heap.c", 88))->mNullValue;
                # 90 "04heap.c"
                __dec_obj38=result_29;
                result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone((come_push_stackframe("04heap.c", 90),__exception_result_var_b28=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 90))->mGenericsTypes,generics_number_44), come_pop_stackframe(), __exception_result_var_b28)))));
                if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value59;
                __freed_obj__ = 0;
                # 95 "04heap.c"
                # 92 "04heap.c"
                if(_if_conditional111=heap_53,                _if_conditional111) {
                    # 93 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 93))->mHeap=heap_53;
                }
                # 98 "04heap.c"
                # 95 "04heap.c"
                if(_if_conditional112=exception__56,                _if_conditional112) {
                    # 96 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 96))->mException=exception__56;
                }
                # 102 "04heap.c"
                # 98 "04heap.c"
                if(_if_conditional113=no_heap_54,                _if_conditional113) {
                    # 99 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 99))->mNoHeap=(_Bool)1;
                    # 100 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 100))->mHeap=(_Bool)0;
                }
                # 105 "04heap.c"
                # 102 "04heap.c"
                if(_if_conditional114=no_calling_destructor_55,                _if_conditional114) {
                    # 103 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 103))->mNoCallingDestructor=(_Bool)1;
                }
                # 108 "04heap.c"
                # 105 "04heap.c"
                if(_if_conditional115=immutable__51,                _if_conditional115) {
                    # 106 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 106))->mImmutable=immutable__51;
                }
                # 112 "04heap.c"
                # 108 "04heap.c"
                if(_if_conditional116=(come_push_stackframe("04heap.c", 108),__exception_result_var_b29=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(array_num_50, "04heap.c", 108))), come_pop_stackframe(), __exception_result_var_b29)>0,                _if_conditional116) {
                    # 109 "04heap.c"
                    __dec_obj39=((struct sType*)come_null_check(result_29, "04heap.c", 109))->mArrayNum;
                    ((struct sType*)come_null_check(result_29, "04heap.c", 109))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_50);
                    if(__dec_obj39) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 116 "04heap.c"
                # 112 "04heap.c"
                if(_if_conditional117=null_value_57,                _if_conditional117) {
                    # 113 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 113))->mNullValue=null_value_57;
                }
                # 119 "04heap.c"
                # 116 "04heap.c"
                if(_if_conditional118=pointer_num_52>0,                _if_conditional118) {
                    # 117 "04heap.c"
                    ((struct sType*)come_null_check(result_29, "04heap.c", 117))->mPointerNum+=pointer_num_52;
                }
                if(array_num_50 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_50, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        else {
            # 122 "04heap.c"
            (come_push_stackframe("04heap.c", 122),__exception_result_var_b30=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_29, "04heap.c", 122))->mGenericsTypes, "04heap.c", 122))), come_pop_stackframe(), __exception_result_var_b30);
            # 128 "04heap.c"
            for(
            o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 123))->mGenericsTypes)),it_59=(come_push_stackframe("04heap.c", 123),__exception_result_var_b31=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_58), "04heap.c", 123))), come_pop_stackframe(), __exception_result_var_b31) ,            0;            _for_condtionalA2=            !(come_push_stackframe("04heap.c", 123),__exception_result_var_b32=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_58), "04heap.c", 123))), come_pop_stackframe(), __exception_result_var_b32) ,            _for_condtionalA2;            it_59=(come_push_stackframe("04heap.c", 123),__exception_result_var_b33=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_58), "04heap.c", 123))), come_pop_stackframe(), __exception_result_var_b33) ,            0            ){
                # 124 "04heap.c"
                type_60=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 124),__exception_result_var_b34=((struct sType*)(right_value60=solve_generics(it_59,generics_type,info))), come_pop_stackframe(), __exception_result_var_b34));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value60;
                __freed_obj__ = 0;
                # 125 "04heap.c"
                (come_push_stackframe("04heap.c", 125),__exception_result_var_b35=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_29, "04heap.c", 125))->mGenericsTypes, "04heap.c", 125)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type_60))))), come_pop_stackframe(), __exception_result_var_b35);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value61;
                __freed_obj__ = 0;
                if(type_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_58 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 134 "04heap.c"
            # 128 "04heap.c"
            if(_if_conditional119=!(come_push_stackframe("04heap.c", 128),__exception_result_var_b36=output_generics_struct(result_29,generics_type,info), come_pop_stackframe(), __exception_result_var_b36),            _if_conditional119) {
                # 130 "04heap.c"
                new_name_61=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 130),__exception_result_var_b37=((char*)(right_value62=create_generics_name(type,info))), come_pop_stackframe(), __exception_result_var_b37));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                # 131 "04heap.c"
                (come_push_stackframe("04heap.c", 131),__exception_result_var_b38=printf("output generics is failed(%s)",new_name_61), come_pop_stackframe(), __exception_result_var_b38);
                # 132 "04heap.c"
                (come_push_stackframe("04heap.c", 132),exit(1),come_pop_stackframe());
                if(new_name_61 && !__freed_obj__) { new_name_61 = come_decrement_ref_count(new_name_61, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    # 136 "04heap.c"
    __result47__ = __result_obj__ = result_29;
    if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result47__;
    if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
struct sType* __result13__;
void* right_value14;
struct sType* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value18;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional34;
void* right_value19;
char* __dec_obj14;
_Bool _if_conditional35;
void* right_value26;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional39;
void* right_value34;
struct list$1sNodeph* __dec_obj22;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value35;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional54;
void* right_value42;
struct list$1charph* __dec_obj27;
_Bool _if_conditional58;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj28;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value44;
struct sNode* __dec_obj29;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
void* right_value45;
struct sNode* __dec_obj30;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value46;
char* __dec_obj31;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value47;
char* __dec_obj32;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional11=self==(void*)0,        _if_conditional11) {
            # 2 "sType_clone"
            __result13__ = __result_obj__ = (void*)0;
            return __result13__;
        }
        # 3 "sType_clone"
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
        if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value14;
        __freed_obj__ = 0;
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            # 4 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),        _if_conditional29) {
            # 5 "sType_clone"
            __dec_obj12=((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj12) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value17;
            __freed_obj__ = 0;
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),        _if_conditional33) {
            # 6 "sType_clone"
            __dec_obj13=((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value18;
            __freed_obj__ = 0;
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),        _if_conditional34) {
            # 7 "sType_clone"
            __dec_obj14=((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),        _if_conditional35) {
            # 8 "sType_clone"
            __dec_obj18=((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value26;
            __freed_obj__ = 0;
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),        _if_conditional39) {
            # 9 "sType_clone"
            __dec_obj22=((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj22) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value34;
            __freed_obj__ = 0;
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional52=self!=((void*)0),        _if_conditional52) {
            # 10 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),        _if_conditional53) {
            # 11 "sType_clone"
            __dec_obj23=((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj23) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value35;
            __freed_obj__ = 0;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),        _if_conditional54) {
            # 12 "sType_clone"
            __dec_obj27=((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj27) { come_call_finalizer(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional58=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),        _if_conditional58) {
            # 13 "sType_clone"
            __dec_obj28=((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj28) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            # 14 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional60=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),        _if_conditional60) {
            # 15 "sType_clone"
            __dec_obj29=((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value44;
            __freed_obj__ = 0;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            # 16 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 17 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 18 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 19 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 20 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 21 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 22 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 23 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 24 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 25 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 26 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 27 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 28 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 29 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 30 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 31 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 32 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 33 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 34 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 35 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 36 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 37 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 38 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional84=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),        _if_conditional84) {
            # 39 "sType_clone"
            __dec_obj30=((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value45;
            __freed_obj__ = 0;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 40 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 41 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),        _if_conditional87) {
            # 42 "sType_clone"
            __dec_obj31=((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value46;
            __freed_obj__ = 0;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 43 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 44 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 45 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 46 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 47 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 48 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 49 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 50 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional96=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),        _if_conditional96) {
            # 51 "sType_clone"
            __dec_obj32=((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47;
            __freed_obj__ = 0;
        }
        # 52 "sType_clone"
        __result30__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result30__;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),            _if_conditional12) {
                # 0 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),            _if_conditional14) {
                # 1 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),            _if_conditional15) {
                # 2 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),            _if_conditional16) {
                # 3 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),            _if_conditional18) {
                # 4 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),            _if_conditional20) {
                # 5 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),            _if_conditional21) {
                # 6 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),            _if_conditional23) {
                # 7 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),            _if_conditional24) {
                # 8 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),            _if_conditional25) {
                # 9 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),            _if_conditional26) {
                # 10 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),            _if_conditional27) {
                # 11 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional13=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                    _if_conditional13) {
                        # 0 "tuple1$1sTypephp_finalize"
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    # 176 "./comelang2.h"
                    it_6=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 176))->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        # 178 "./comelang2.h"
                        prev_it_7=it_6;
                        # 179 "./comelang2.h"
                        it_6=((struct list_item$1sTypeph*)come_null_check(it_6, "./comelang2.h", 179))->next;
                        # 180 "./comelang2.h"
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional17=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                            _if_conditional17) {
                                # 0 "list_item$1sTypephp_finalize"
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    # 176 "./comelang2.h"
                    it_8=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 176))->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        # 178 "./comelang2.h"
                        prev_it_9=it_8;
                        # 179 "./comelang2.h"
                        it_8=((struct list_item$1sNodeph*)come_null_check(it_8, "./comelang2.h", 179))->next;
                        # 180 "./comelang2.h"
                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional19=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                            _if_conditional19) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    # 176 "./comelang2.h"
                    it_10=((struct list$1charph*)come_null_check(self, "./comelang2.h", 176))->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        # 178 "./comelang2.h"
                        prev_it_11=it_10;
                        # 179 "./comelang2.h"
                        it_10=((struct list_item$1charph*)come_null_check(it_10, "./comelang2.h", 179))->next;
                        # 180 "./comelang2.h"
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional22=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                            _if_conditional22) {
                                # 0 "list_item$1charphp_finalize"
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct tuple1$1sTypeph* __result14__;
void* right_value15;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional32;
void* right_value16;
struct sType* __dec_obj11;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value16, 0, sizeof(void*));
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional30=self==(void*)0,                _if_conditional30) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value15;
                __freed_obj__ = 0;
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional32=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                _if_conditional32) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj11=((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value16;
                    __freed_obj__ = 0;
                }
                # 5 "tuple1$1sTypephp_clone"
                __result15__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result15__;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional31=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                    _if_conditional31) {
                        # 0 "tuple1$1sTypeph_finalize"
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
struct list$1sTypeph* __result16__;
void* right_value20;
void* right_value21;
struct list$1sTypeph* __exception_result_var_b5;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value25;
struct list$1sTypeph* __exception_result_var_b6;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value25, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    # 193 "./comelang2.h"
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                # 195 "./comelang2.h"
                result_13=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b5=((struct list$1sTypeph*)(right_value21=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value20=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b5));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value21;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b6=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b6);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 201))->next;
                }
                # 204 "./comelang2.h"
                __result19__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result19__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 157 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                    # 158 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                    # 159 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                    # 161 "./comelang2.h"
                    __result17__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result17__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
void* right_value22;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj15;
_Bool _if_conditional38;
void* right_value23;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj16;
void* right_value24;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj17;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional37=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional37) {
                            # 209 "./comelang2.h"
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value22;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj15=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 213))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 213))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 215 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_15;
                            # 216 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_15;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional38=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional38) {
                                # 219 "./comelang2.h"
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value23;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 221))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj16=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 223))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 223))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 225 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_16;
                                # 226 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_16;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value24;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 231))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj17=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 233))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 233))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 235 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_17;
                                # 236 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_17;
                            }
                        }
                        # 239 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                        # 241 "./comelang2.h"
                        __result18__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result18__;
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
_Bool _if_conditional40;
struct list$1sNodeph* __result20__;
void* right_value27;
void* right_value28;
struct list$1sNodeph* __exception_result_var_b7;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value33;
struct list$1sNodeph* __exception_result_var_b8;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value33, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    # 193 "./comelang2.h"
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                # 195 "./comelang2.h"
                result_18=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b7=((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b7));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value28;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b8=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 199)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b8);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 201))->next;
                }
                # 204 "./comelang2.h"
                __result25__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result25__;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 157 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                    # 158 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                    # 159 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                    # 161 "./comelang2.h"
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result21__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
void* right_value29;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj19;
_Bool _if_conditional42;
void* right_value30;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj20;
void* right_value31;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional41=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional41) {
                            # 209 "./comelang2.h"
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value29;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj19=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 213))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 213))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                            # 215 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_20;
                            # 216 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_20;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional42=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional42) {
                                # 219 "./comelang2.h"
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value30;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 221))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj20=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 223))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 223))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                # 225 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_21;
                                # 226 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_21;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 231))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj21=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 233))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 233))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                # 235 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_22;
                                # 236 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_22;
                            }
                        }
                        # 239 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                        # 241 "./comelang2.h"
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result22__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
struct sNode* __result23__;
void* right_value32;
struct sNode* result_23;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional43=self==(void*)0,                        _if_conditional43) {
                            # 2 "sNode_clone"
                            __result23__ = __result_obj__ = (void*)0;
                            return __result23__;
                        }
                        # 3 "sNode_clone"
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value32;
                        __freed_obj__ = 0;
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                        _if_conditional44) {
                            # 4 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            # 5 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            # 6 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            # 7 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            # 8 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 9 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            # 10 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            # 11 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                        }
                        # 12 "sNode_clone"
                        __result24__ = __result_obj__ = result_23;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        return __result24__;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional55;
struct list$1charph* __result26__;
void* right_value36;
void* right_value37;
struct list$1charph* __exception_result_var_b9;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value41;
struct list$1charph* __exception_result_var_b10;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value41, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    # 193 "./comelang2.h"
                    __result26__ = __result_obj__ = ((void*)0);
                    return __result26__;
                }
                # 195 "./comelang2.h"
                result_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b9=((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b9));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value36;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value37;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b10=list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value41=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b10);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 201))->next;
                }
                # 204 "./comelang2.h"
                __result29__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result29__;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 157 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                    # 158 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                    # 159 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                    # 161 "./comelang2.h"
                    __result27__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result27__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
void* right_value38;
struct list_item$1charph* litem_26;
char* __dec_obj24;
_Bool _if_conditional57;
void* right_value39;
struct list_item$1charph* litem_27;
char* __dec_obj25;
void* right_value40;
struct list_item$1charph* litem_28;
char* __dec_obj26;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional56=((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional56) {
                            # 209 "./comelang2.h"
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value38;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj24=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 213))->item;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 213))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                            # 215 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_26;
                            # 216 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->head=litem_26;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional57=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional57) {
                                # 219 "./comelang2.h"
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value39;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 221))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj25=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 223))->item;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 223))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                # 225 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_27;
                                # 226 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_27;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value40;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 231))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj26=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 233))->item;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 233))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                # 235 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_28;
                                # 236 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_28;
                            }
                        }
                        # 239 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 239))->len++;
                        # 241 "./comelang2.h"
                        __result28__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result28__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 417 "./comelang2.h"
        __result32__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 417))->len;
        return __result32__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value51;
struct sType* __dec_obj33;
struct tuple1$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
            # 1782 "./comelang2.h"
            __dec_obj33=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1782))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1782))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(v1))));
            if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = 0;
            # 1784 "./comelang2.h"
            __result34__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result34__;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_32;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_33;
struct list$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_32, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1sTypeph*));
            # 483 "./comelang2.h"
            it_32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 483))->head;
            # 490 "./comelang2.h"
            while(_while_condtional7=it_32!=((void*)0),            _while_condtional7) {
                # 485 "./comelang2.h"
                prev_it_33=it_32;
                # 486 "./comelang2.h"
                it_32=((struct list_item$1sTypeph*)come_null_check(it_32, "./comelang2.h", 486))->next;
                # 487 "./comelang2.h"
                if(prev_it_33 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 490 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
            # 491 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
            # 493 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 493))->len=0;
            # 495 "./comelang2.h"
            __result35__ = __result_obj__ = self;
            return __result35__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
struct sType* result_35;
void* __exception_result_var_b16;
struct sType* __result36__;
_Bool _if_conditional101;
struct sType* __result37__;
struct sType* result_36;
void* __exception_result_var_b17;
struct sType* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_35, 0, sizeof(struct sType*));
memset(&result_36, 0, sizeof(struct sType*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional100=self==((void*)0),            _if_conditional100) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b16=memset(&result_35,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b16);
                # 341 "./comelang2.h"
                __result36__ = __result_obj__ = result_35;
                return __result36__;
            }
            # 343 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional101=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional101) {
                # 346 "./comelang2.h"
                __result37__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result37__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b17=memset(&result_36,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b17);
            # 351 "./comelang2.h"
            __result38__ = __result_obj__ = result_36;
            return __result38__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 373 "./comelang2.h"
            __result39__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result39__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct sType* result_38;
void* __exception_result_var_b20;
struct sType* __result40__;
_Bool _if_conditional103;
struct sType* __result41__;
struct sType* result_39;
void* __exception_result_var_b21;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_38, 0, sizeof(struct sType*));
memset(&result_39, 0, sizeof(struct sType*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional102=self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional102) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b20=memset(&result_38,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b20);
                # 358 "./comelang2.h"
                __result40__ = __result_obj__ = result_38;
                return __result40__;
            }
            # 361 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional103=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional103) {
                # 364 "./comelang2.h"
                __result41__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result41__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b21=memset(&result_39,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b21);
            # 369 "./comelang2.h"
            __result42__ = __result_obj__ = result_39;
            return __result42__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
void* right_value54;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj35;
_Bool _if_conditional105;
void* right_value55;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj36;
void* right_value56;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj37;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional104=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional104) {
                    # 279 "./comelang2.h"
                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value54;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 281))->prev=((void*)0);
                    # 282 "./comelang2.h"
                    ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 282))->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj35=((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 283))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 283))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_41;
                    # 286 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 286))->head=litem_41;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional105=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional105) {
                        # 289 "./comelang2.h"
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 291))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 291))->head;
                        # 292 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 292))->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj36=((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 293))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 293))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_42;
                        # 296 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_42;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value56;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 301))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 301))->tail;
                        # 302 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 302))->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj37=((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 303))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 303))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_43;
                        # 306 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_43;
                    }
                }
                # 309 "./comelang2.h"
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 309))->len++;
                # 311 "./comelang2.h"
                __result43__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result43__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
struct list_item$1sTypeph* it_45;
int i_46;
_Bool _while_condtional8;
_Bool _if_conditional109;
struct sType* __result44__;
struct sType* default_value_47;
void* __exception_result_var_b26;
struct sType* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_46, 0, sizeof(int));
memset(&default_value_47, 0, sizeof(struct sType*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional108=position<0,                _if_conditional108) {
                    # 742 "./comelang2.h"
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 742))->len;
                }
                # 745 "./comelang2.h"
                it_45=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 745))->head;
                # 746 "./comelang2.h"
                i_46=0;
                # 753 "./comelang2.h"
                while(_while_condtional8=it_45!=((void*)0),                _while_condtional8) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional109=position==i_46,                    _if_conditional109) {
                        # 749 "./comelang2.h"
                        __result44__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 749))->item;
                        return __result44__;
                    }
                    # 751 "./comelang2.h"
                    it_45=((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 751))->next;
                    # 752 "./comelang2.h"
                    i_46++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b26=memset(&default_value_47,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b26);
                # 757 "./comelang2.h"
                __result45__ = __result_obj__ = default_value_47;
                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result45__;
                if(default_value_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 417 "./comelang2.h"
                    __result46__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 417))->len;
                    return __result46__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value63;
struct sType* result_62;
_Bool _if_conditional120;
void* right_value64;
struct sType* __exception_result_var_b39;
struct sType* __dec_obj40;
struct sType* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
    # 141 "04heap.c"
    result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = 0;
    # 147 "04heap.c"
    # 143 "04heap.c"
    if(_if_conditional120=generics_type,    _if_conditional120) {
        # 144 "04heap.c"
        __dec_obj40=result_62;
        result_62=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 144),__exception_result_var_b39=((struct sType*)(right_value64=solve_generics(result_62,generics_type,info))), come_pop_stackframe(), __exception_result_var_b39));
        if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64;
        __freed_obj__ = 0;
    }
    # 147 "04heap.c"
    __result48__ = __result_obj__ = result_62;
    if(result_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result48__;
    if(result_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_63;
_Bool _if_conditional121;
_Bool _while_condtional9;
_Bool _if_conditional122;
int __exception_result_var_b40;
_Bool _if_conditional123;
long int __exception_result_var_b41;
_Bool __exception_result_var_b42;
_Bool _if_conditional124;
int n_64;
_Bool __exception_result_var_b43;
_Bool _while_condtional10;
int __result49__;
int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_63, 0, sizeof(char*));
memset(&n_64, 0, sizeof(int));
    # 154 "04heap.c"
    p_63=obj;
    # 177 "04heap.c"
    # 155 "04heap.c"
    if(_if_conditional121=*p_63==40,    _if_conditional121) {
        # 156 "04heap.c"
        p_63++;
        # 160 "04heap.c"
        while(_while_condtional9=*p_63!=41,        _while_condtional9) {
            # 158 "04heap.c"
            p_63++;
        }
        # 160 "04heap.c"
        p_63++;
        # 175 "04heap.c"
        # 161 "04heap.c"
        if(_if_conditional122=*p_63==40,        _if_conditional122) {
            # 162 "04heap.c"
            p_63++;
            # 174 "04heap.c"
            # 163 "04heap.c"
            if(_if_conditional123=(come_push_stackframe("04heap.c", 163),__exception_result_var_b40=strcmp(p_63,"right_value"), come_pop_stackframe(), __exception_result_var_b40)==0,            _if_conditional123) {
                # 164 "04heap.c"
                p_63+=(come_push_stackframe("04heap.c", 164),__exception_result_var_b41=strlen("right_value"), come_pop_stackframe(), __exception_result_var_b41);
                # 173 "04heap.c"
                # 165 "04heap.c"
                if(_if_conditional124=(come_push_stackframe("04heap.c", 165),__exception_result_var_b42=xisdigit(*p_63), come_pop_stackframe(), __exception_result_var_b42),                _if_conditional124) {
                    # 166 "04heap.c"
                    n_64=0;
                    # 171 "04heap.c"
                    while(_while_condtional10=(come_push_stackframe("04heap.c", 167),__exception_result_var_b43=xisdigit(*p_63), come_pop_stackframe(), __exception_result_var_b43),                    _while_condtional10) {
                        # 168 "04heap.c"
                        n_64=n_64*10+*p_63-48;
                        # 169 "04heap.c"
                        p_63++;
                    }
                    # 171 "04heap.c"
                    __result49__ = n_64;
                    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
                    return __result49__;
                }
            }
        }
    }
    # 177 "04heap.c"
    __result50__ = -1;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
    return __result50__;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
void* right_value65;
char* __exception_result_var_b44;
char* __result51__;
_Bool _if_conditional126;
void* right_value66;
char* __exception_result_var_b45;
char* __result52__;
void* right_value67;
struct sRightValueObject* new_value_65;
struct sType* __dec_obj41;
void* right_value68;
char* __exception_result_var_b46;
char* __dec_obj42;
void* right_value69;
char* __dec_obj43;
struct list$1sRightValueObjectph* __exception_result_var_b47;
void* right_value73;
char* __exception_result_var_b48;
char* buf_69;
void* right_value74;
char* __exception_result_var_b49;
void* right_value75;
char* __exception_result_var_b50;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&new_value_65, 0, sizeof(struct sRightValueObject*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&buf_69, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    # 185 "04heap.c"
    # 182 "04heap.c"
    if(_if_conditional125=gComeGC,    _if_conditional125) {
        # 183 "04heap.c"
        __result51__ = __result_obj__ = (come_push_stackframe("04heap.c", 183),__exception_result_var_b44=((char*)(right_value65=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b44);
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = 0;
        return __result51__;
    }
    # 188 "04heap.c"
    # 185 "04heap.c"
    if(_if_conditional126=((struct sInfo*)come_null_check(info, "04heap.c", 185))->no_output_come_code,    _if_conditional126) {
        # 186 "04heap.c"
        __result52__ = __result_obj__ = (come_push_stackframe("04heap.c", 186),__exception_result_var_b45=((char*)(right_value66=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b45);
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
        return __result52__;
    }
    # 188 "04heap.c"
    new_value_65=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value67=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 188))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    # 189 "04heap.c"
    __dec_obj41=((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 189))->mType;
    ((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 189))->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 190 "04heap.c"
    ((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 190))->mFreed=(_Bool)0;
    # 191 "04heap.c"
    ((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 191))->mID=gRightValueNum;
    # 192 "04heap.c"
    __dec_obj42=((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 192))->mVarName;
    ((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 192))->mVarName=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 192),__exception_result_var_b46=((char*)(right_value68=xsprintf("right_value%d",gRightValueNum++))), come_pop_stackframe(), __exception_result_var_b46));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value68;
    __freed_obj__ = 0;
    # 193 "04heap.c"
    __dec_obj43=((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 193))->mFunName;
    ((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 193))->mFunName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 193))->come_fun, "04heap.c", 193))->mName))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value69;
    __freed_obj__ = 0;
    # 194 "04heap.c"
    ((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 194))->mBlockLevel=((struct sInfo*)come_null_check(info, "04heap.c", 194))->block_level;
    # 196 "04heap.c"
    (come_push_stackframe("04heap.c", 196),__exception_result_var_b47=list$1sRightValueObjectph_push_back(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 196))->right_value_objects, "04heap.c", 196)),(struct sRightValueObject*)come_increment_ref_count(new_value_65)), come_pop_stackframe(), __exception_result_var_b47);
    # 198 "04heap.c"
    buf_69=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 198),__exception_result_var_b48=((char*)(right_value73=xsprintf("void* right_value%d;\n",gRightValueNum-1))), come_pop_stackframe(), __exception_result_var_b48));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value73;
    __freed_obj__ = 0;
    # 199 "04heap.c"
    (come_push_stackframe("04heap.c", 199),add_come_code_at_function_head(info,buf_69),come_pop_stackframe());
    # 200 "04heap.c"
    (come_push_stackframe("04heap.c", 200),add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1),come_pop_stackframe());
    # 202 "04heap.c"
    __result54__ = __result_obj__ = ((char*)come_null_check((come_push_stackframe("04heap.c", 202),__exception_result_var_b50=((char*)(right_value75=xsprintf("((%s)(%s=%s))",(come_push_stackframe("04heap.c", 202),__exception_result_var_b49=((char*)(right_value74=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b49),((struct sRightValueObject*)come_null_check(new_value_65, "04heap.c", 202))->mVarName,obj))), come_pop_stackframe(), __exception_result_var_b50), "04heap.c", 202));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_65 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_69 && !__freed_obj__) { buf_69 = come_decrement_ref_count(buf_69, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value75;
    __freed_obj__ = 0;
    return __result54__;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_65 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_69 && !__freed_obj__) { buf_69 = come_decrement_ref_count(buf_69, (void*)0, (void*)0, 0, 0, 0); }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sRightValueObject_finalize"
        # 0 "sRightValueObject_finalize"
        if(_if_conditional127=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType!=((void*)0),        _if_conditional127) {
            # 0 "sRightValueObject_finalize"
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 2 "sRightValueObject_finalize"
        # 1 "sRightValueObject_finalize"
        if(_if_conditional128=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName!=((void*)0),        _if_conditional128) {
            # 1 "sRightValueObject_finalize"
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 3 "sRightValueObject_finalize"
        # 2 "sRightValueObject_finalize"
        if(_if_conditional129=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName!=((void*)0),        _if_conditional129) {
            # 2 "sRightValueObject_finalize"
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
void* right_value70;
struct list_item$1sRightValueObjectph* litem_66;
struct sRightValueObject* __dec_obj44;
_Bool _if_conditional132;
void* right_value71;
struct list_item$1sRightValueObjectph* litem_67;
struct sRightValueObject* __dec_obj45;
void* right_value72;
struct list_item$1sRightValueObjectph* litem_68;
struct sRightValueObject* __dec_obj46;
struct list$1sRightValueObjectph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&litem_66, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional130=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional130) {
            # 279 "./comelang2.h"
            litem_66=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value70=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_66, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_66, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj44=((struct list_item$1sRightValueObjectph*)come_null_check(litem_66, "./comelang2.h", 283))->item;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_66, "./comelang2.h", 283))->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj44) { come_call_finalizer(sRightValueObject_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_66;
            # 286 "./comelang2.h"
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 286))->head=litem_66;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional132=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional132) {
                # 289 "./comelang2.h"
                litem_67=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value71=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value71;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_67, "./comelang2.h", 291))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_67, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj45=((struct list_item$1sRightValueObjectph*)come_null_check(litem_67, "./comelang2.h", 293))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_67, "./comelang2.h", 293))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj45) { come_call_finalizer(sRightValueObject_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_67;
                # 296 "./comelang2.h"
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_67;
            }
            else {
                # 299 "./comelang2.h"
                litem_68=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value72=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value72;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 301))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj46=((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 303))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 303))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj46) { come_call_finalizer(sRightValueObject_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_68;
                # 306 "./comelang2.h"
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_68;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
        __result53__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result53__;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "list_item$1sRightValueObjectphp_finalize"
                # 0 "list_item$1sRightValueObjectphp_finalize"
                if(_if_conditional131=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item!=((void*)0),                _if_conditional131) {
                    # 0 "list_item$1sRightValueObjectphp_finalize"
                    if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
int i_70;
struct list$1sRightValueObjectph* o2_saved_71;
struct sRightValueObject* __exception_result_var_b53;
struct sRightValueObject* it_74;
_Bool __exception_result_var_b54;
_Bool _for_condtionalA3;
struct sRightValueObject* __exception_result_var_b57;
_Bool _if_conditional138;
struct list$1sRightValueObjectph* __exception_result_var_b59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_70, 0, sizeof(int));
memset(&o2_saved_71, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_74, 0, sizeof(struct sRightValueObject*));
    # 210 "04heap.c"
    # 207 "04heap.c"
    if(_if_conditional133=gComeGC,    _if_conditional133) {
        # 208 "04heap.c"
        return;
    }
    # 210 "04heap.c"
    i_70=0;
    # 218 "04heap.c"
    for(
    o2_saved_71=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 211))->right_value_objects)),it_74=(come_push_stackframe("04heap.c", 211),__exception_result_var_b53=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_71), "04heap.c", 211))), come_pop_stackframe(), __exception_result_var_b53) ,    0;    _for_condtionalA3=    !(come_push_stackframe("04heap.c", 211),__exception_result_var_b54=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_71), "04heap.c", 211))), come_pop_stackframe(), __exception_result_var_b54) ,    _for_condtionalA3;    it_74=(come_push_stackframe("04heap.c", 211),__exception_result_var_b57=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_71), "04heap.c", 211))), come_pop_stackframe(), __exception_result_var_b57) ,    0    ){
        # 215 "04heap.c"
        # 212 "04heap.c"
        if(_if_conditional138=((struct sRightValueObject*)come_null_check(it_74, "04heap.c", 212))->mID==right_value_num,        _if_conditional138) {
            # 213 "04heap.c"
            break;
        }
        # 215 "04heap.c"
        i_70++;
    }
    if(o2_saved_71 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 218 "04heap.c"
    (come_push_stackframe("04heap.c", 218),__exception_result_var_b59=list$1sRightValueObjectph_delete(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 218))->right_value_objects, "04heap.c", 218)),i_70,i_70+1), come_pop_stackframe(), __exception_result_var_b59);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
struct sRightValueObject* result_72;
void* __exception_result_var_b51;
struct sRightValueObject* __result55__;
_Bool _if_conditional135;
struct sRightValueObject* __result56__;
struct sRightValueObject* result_73;
void* __exception_result_var_b52;
struct sRightValueObject* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(struct sRightValueObject*));
memset(&result_73, 0, sizeof(struct sRightValueObject*));
        # 343 "./comelang2.h"
        # 338 "./comelang2.h"
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            # 339 "./comelang2.h"
            # 340 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b51=memset(&result_72,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b51);
            # 341 "./comelang2.h"
            __result55__ = __result_obj__ = result_72;
            return __result55__;
        }
        # 343 "./comelang2.h"
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 343))->head;
        # 349 "./comelang2.h"
        # 345 "./comelang2.h"
        if(_if_conditional135=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 345))->it,        _if_conditional135) {
            # 346 "./comelang2.h"
            __result56__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
            return __result56__;
        }
        # 349 "./comelang2.h"
        # 350 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b52=memset(&result_73,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b52);
        # 351 "./comelang2.h"
        __result57__ = __result_obj__ = result_73;
        return __result57__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 373 "./comelang2.h"
        __result58__ = self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
        return __result58__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
struct sRightValueObject* result_75;
void* __exception_result_var_b55;
struct sRightValueObject* __result59__;
_Bool _if_conditional137;
struct sRightValueObject* __result60__;
struct sRightValueObject* result_76;
void* __exception_result_var_b56;
struct sRightValueObject* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(struct sRightValueObject*));
memset(&result_76, 0, sizeof(struct sRightValueObject*));
        # 361 "./comelang2.h"
        # 355 "./comelang2.h"
        if(_if_conditional136=self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),        _if_conditional136) {
            # 356 "./comelang2.h"
            # 357 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b55=memset(&result_75,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b55);
            # 358 "./comelang2.h"
            __result59__ = __result_obj__ = result_75;
            return __result59__;
        }
        # 361 "./comelang2.h"
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
        # 367 "./comelang2.h"
        # 363 "./comelang2.h"
        if(_if_conditional137=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 363))->it,        _if_conditional137) {
            # 364 "./comelang2.h"
            __result60__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
            return __result60__;
        }
        # 367 "./comelang2.h"
        # 368 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b56=memset(&result_76,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b56);
        # 369 "./comelang2.h"
        __result61__ = __result_obj__ = result_76;
        return __result61__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_77;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 176 "./comelang2.h"
        it_77=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 176))->head;
        # 182 "./comelang2.h"
        while(_while_condtional11=it_77!=((void*)0),        _while_condtional11) {
            # 178 "./comelang2.h"
            prev_it_78=it_77;
            # 179 "./comelang2.h"
            it_77=((struct list_item$1sRightValueObjectph*)come_null_check(it_77, "./comelang2.h", 179))->next;
            # 180 "./comelang2.h"
            if(prev_it_78 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_78, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
int tmp_79;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct list$1sRightValueObjectph* __result62__;
_Bool _if_conditional145;
struct list$1sRightValueObjectph* __exception_result_var_b58;
_Bool _if_conditional146;
struct list_item$1sRightValueObjectph* it_82;
int i_83;
_Bool _while_condtional13;
_Bool _if_conditional147;
struct list_item$1sRightValueObjectph* prev_it_84;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct list_item$1sRightValueObjectph* it_85;
int i_86;
_Bool _while_condtional14;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1sRightValueObjectph* prev_it_87;
struct list_item$1sRightValueObjectph* it_88;
struct list_item$1sRightValueObjectph* head_prev_it_89;
struct list_item$1sRightValueObjectph* tail_it_90;
int i_91;
_Bool _while_condtional15;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list_item$1sRightValueObjectph* prev_it_92;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list$1sRightValueObjectph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_79, 0, sizeof(int));
memset(&it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_83, 0, sizeof(int));
memset(&prev_it_84, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_91, 0, sizeof(int));
memset(&prev_it_92, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 517 "./comelang2.h"
        # 514 "./comelang2.h"
        if(_if_conditional139=head<0,        _if_conditional139) {
            # 515 "./comelang2.h"
            head+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 515))->len;
        }
        # 521 "./comelang2.h"
        # 517 "./comelang2.h"
        if(_if_conditional140=tail<0,        _if_conditional140) {
            # 518 "./comelang2.h"
            tail+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 518))->len+1;
        }
        # 527 "./comelang2.h"
        # 521 "./comelang2.h"
        if(_if_conditional141=head>tail,        _if_conditional141) {
            # 522 "./comelang2.h"
            tmp_79=tail;
            # 523 "./comelang2.h"
            tail=head;
            # 524 "./comelang2.h"
            head=tmp_79;
        }
        # 531 "./comelang2.h"
        # 527 "./comelang2.h"
        if(_if_conditional142=head<0,        _if_conditional142) {
            # 528 "./comelang2.h"
            head=0;
        }
        # 535 "./comelang2.h"
        # 531 "./comelang2.h"
        if(_if_conditional143=tail>((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 531))->len,        _if_conditional143) {
            # 532 "./comelang2.h"
            tail=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 532))->len;
        }
        # 539 "./comelang2.h"
        # 535 "./comelang2.h"
        if(_if_conditional144=head==tail,        _if_conditional144) {
            # 536 "./comelang2.h"
            __result62__ = __result_obj__ = self;
            return __result62__;
        }
        # 634 "./comelang2.h"
        # 539 "./comelang2.h"
        if(_if_conditional145=head==0&&tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 539))->len,        _if_conditional145) {
            # 541 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 541),__exception_result_var_b58=list$1sRightValueObjectph_reset(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 541))), come_pop_stackframe(), __exception_result_var_b58);
        }
        else {
            # 634 "./comelang2.h"
            # 543 "./comelang2.h"
            if(_if_conditional146=head==0,            _if_conditional146) {
                # 544 "./comelang2.h"
                it_82=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 544))->head;
                # 545 "./comelang2.h"
                i_83=0;
                # 567 "./comelang2.h"
                while(_while_condtional13=it_82!=((void*)0),                _while_condtional13) {
                    # 566 "./comelang2.h"
                    # 547 "./comelang2.h"
                    if(_if_conditional147=i_83<tail,                    _if_conditional147) {
                        # 548 "./comelang2.h"
                        prev_it_84=it_82;
                        # 550 "./comelang2.h"
                        it_82=((struct list_item$1sRightValueObjectph*)come_null_check(it_82, "./comelang2.h", 550))->next;
                        # 551 "./comelang2.h"
                        i_83++;
                        # 553 "./comelang2.h"
                        if(prev_it_84 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 555 "./comelang2.h"
                        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 555))->len--;
                    }
                    else {
                        # 566 "./comelang2.h"
                        # 557 "./comelang2.h"
                        if(_if_conditional148=i_83==tail,                        _if_conditional148) {
                            # 558 "./comelang2.h"
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 558))->head=it_82;
                            # 559 "./comelang2.h"
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 559))->head, "./comelang2.h", 559))->prev=((void*)0);
                            # 560 "./comelang2.h"
                            break;
                        }
                        else {
                            # 563 "./comelang2.h"
                            it_82=((struct list_item$1sRightValueObjectph*)come_null_check(it_82, "./comelang2.h", 563))->next;
                            # 564 "./comelang2.h"
                            i_83++;
                        }
                    }
                }
            }
            else {
                # 634 "./comelang2.h"
                # 568 "./comelang2.h"
                if(_if_conditional149=tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 568))->len,                _if_conditional149) {
                    # 569 "./comelang2.h"
                    it_85=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 569))->head;
                    # 570 "./comelang2.h"
                    i_86=0;
                    # 592 "./comelang2.h"
                    while(_while_condtional14=it_85!=((void*)0),                    _while_condtional14) {
                        # 577 "./comelang2.h"
                        # 572 "./comelang2.h"
                        if(_if_conditional150=i_86==head,                        _if_conditional150) {
                            # 573 "./comelang2.h"
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 573))->tail=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 573))->prev;
                            # 574 "./comelang2.h"
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 574))->tail, "./comelang2.h", 574))->next=((void*)0);
                        }
                        # 591 "./comelang2.h"
                        # 577 "./comelang2.h"
                        if(_if_conditional151=i_86>=head,                        _if_conditional151) {
                            # 578 "./comelang2.h"
                            prev_it_87=it_85;
                            # 580 "./comelang2.h"
                            it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 580))->next;
                            # 581 "./comelang2.h"
                            i_86++;
                            # 583 "./comelang2.h"
                            if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 585 "./comelang2.h"
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 585))->len--;
                        }
                        else {
                            # 588 "./comelang2.h"
                            it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 588))->next;
                            # 589 "./comelang2.h"
                            i_86++;
                        }
                    }
                }
                else {
                    # 594 "./comelang2.h"
                    it_88=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 594))->head;
                    # 596 "./comelang2.h"
                    head_prev_it_89=((void*)0);
                    # 597 "./comelang2.h"
                    tail_it_90=((void*)0);
                    # 600 "./comelang2.h"
                    i_91=0;
                    # 626 "./comelang2.h"
                    while(_while_condtional15=it_88!=((void*)0),                    _while_condtional15) {
                        # 605 "./comelang2.h"
                        # 602 "./comelang2.h"
                        if(_if_conditional152=i_91==head,                        _if_conditional152) {
                            # 603 "./comelang2.h"
                            head_prev_it_89=((struct list_item$1sRightValueObjectph*)come_null_check(it_88, "./comelang2.h", 603))->prev;
                        }
                        # 609 "./comelang2.h"
                        # 605 "./comelang2.h"
                        if(_if_conditional153=i_91==tail,                        _if_conditional153) {
                            # 606 "./comelang2.h"
                            tail_it_90=it_88;
                        }
                        # 624 "./comelang2.h"
                        # 609 "./comelang2.h"
                        if(_if_conditional154=i_91>=head&&i_91<tail,                        _if_conditional154) {
                            # 611 "./comelang2.h"
                            prev_it_92=it_88;
                            # 613 "./comelang2.h"
                            it_88=((struct list_item$1sRightValueObjectph*)come_null_check(it_88, "./comelang2.h", 613))->next;
                            # 614 "./comelang2.h"
                            i_91++;
                            # 616 "./comelang2.h"
                            if(prev_it_92 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 618 "./comelang2.h"
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 618))->len--;
                        }
                        else {
                            # 621 "./comelang2.h"
                            it_88=((struct list_item$1sRightValueObjectph*)come_null_check(it_88, "./comelang2.h", 621))->next;
                            # 622 "./comelang2.h"
                            i_91++;
                        }
                    }
                    # 629 "./comelang2.h"
                    # 626 "./comelang2.h"
                    if(_if_conditional155=head_prev_it_89!=((void*)0),                    _if_conditional155) {
                        # 627 "./comelang2.h"
                        ((struct list_item$1sRightValueObjectph*)come_null_check(head_prev_it_89, "./comelang2.h", 627))->next=tail_it_90;
                    }
                    # 632 "./comelang2.h"
                    # 629 "./comelang2.h"
                    if(_if_conditional156=tail_it_90!=((void*)0),                    _if_conditional156) {
                        # 630 "./comelang2.h"
                        ((struct list_item$1sRightValueObjectph*)come_null_check(tail_it_90, "./comelang2.h", 630))->prev=head_prev_it_89;
                    }
                }
            }
        }
        # 634 "./comelang2.h"
        __result64__ = __result_obj__ = self;
        return __result64__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_80;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_81;
struct list$1sRightValueObjectph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_80, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 483 "./comelang2.h"
                it_80=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 483))->head;
                # 490 "./comelang2.h"
                while(_while_condtional12=it_80!=((void*)0),                _while_condtional12) {
                    # 485 "./comelang2.h"
                    prev_it_81=it_80;
                    # 486 "./comelang2.h"
                    it_80=((struct list_item$1sRightValueObjectph*)come_null_check(it_80, "./comelang2.h", 486))->next;
                    # 487 "./comelang2.h"
                    if(prev_it_81 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_81, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 490 "./comelang2.h"
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
                # 491 "./comelang2.h"
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
                # 493 "./comelang2.h"
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 493))->len=0;
                # 495 "./comelang2.h"
                __result63__ = __result_obj__ = self;
                return __result63__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
void* right_value76;
char* __exception_result_var_b60;
char* __result65__;
struct sClass* klass_93;
void* right_value77;
char* __exception_result_var_b61;
char* type_name_94;
void* right_value78;
char* __exception_result_var_b62;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&klass_93, 0, sizeof(struct sClass*));
memset(&right_value77, 0, sizeof(void*));
memset(&type_name_94, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
    # 226 "04heap.c"
    # 223 "04heap.c"
    if(_if_conditional157=gComeGC,    _if_conditional157) {
        # 224 "04heap.c"
        __result65__ = __result_obj__ = (come_push_stackframe("04heap.c", 224),__exception_result_var_b60=((char*)(right_value76=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b60);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value76;
        __freed_obj__ = 0;
        return __result65__;
    }
    # 226 "04heap.c"
    klass_93=((struct sType*)come_null_check(type, "04heap.c", 226))->mClass;
    # 228 "04heap.c"
    type_name_94=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 228),__exception_result_var_b61=((char*)(right_value77=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b61));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    # 230 "04heap.c"
    __result66__ = __result_obj__ = (come_push_stackframe("04heap.c", 230),__exception_result_var_b62=((char*)(right_value78=xsprintf("(%s)come_increment_ref_count(%s)",type_name_94,obj))), come_pop_stackframe(), __exception_result_var_b62);
    if(type_name_94 && !__freed_obj__) { type_name_94 = come_decrement_ref_count(type_name_94, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value78;
    __freed_obj__ = 0;
    return __result66__;
    if(type_name_94 && !__freed_obj__) { type_name_94 = come_decrement_ref_count(type_name_94, (void*)0, (void*)0, 0, 0, 0); }
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
struct list$1CVALUEph* stack_saved_95;
struct list$1sRightValueObjectph* right_value_objects_96;
struct sClass* klass_97;
static int dec_num_98=0;
void* right_value79;
char* __exception_result_var_b63;
char* name_99;
void* right_value80;
char* __exception_result_var_b64;
_Bool no_decrement_100;
_Bool no_free_101;
_Bool _if_conditional159;
void* right_value81;
char* __exception_result_var_b65;
char* c_value_102;
struct sClass* klass_103;
char* class_name_104;
char* fun_name_105;
void* right_value82;
struct sType* type2_106;
void* right_value83;
char* __exception_result_var_b66;
char* fun_name2_107;
struct sFun* finalizer_108;
int __exception_result_var_b67;
_Bool _if_conditional160;
struct sFun* __exception_result_var_b72;
_Bool _if_conditional166;
void* right_value87;
char* __exception_result_var_b73;
char* none_generics_name_113;
void* right_value88;
char* __exception_result_var_b74;
char* generics_fun_name_114;
struct sGenericsFun* __exception_result_var_b78;
struct sGenericsFun* generics_fun_118;
_Bool _if_conditional171;
_Bool __exception_result_var_b79;
_Bool _if_conditional172;
int __exception_result_var_b80;
struct sFun* __exception_result_var_b81;
int i_119;
_Bool _for_condtionalA4;
void* right_value92;
char* __exception_result_var_b82;
char* new_fun_name_120;
struct sFun* __exception_result_var_b83;
_Bool _if_conditional173;
void* right_value93;
char* __exception_result_var_b84;
char* __dec_obj47;
_Bool _if_conditional174;
struct sFun* __exception_result_var_b85;
_Bool _if_conditional175;
void* right_value94;
struct tuple2$2sFunpcharph* __exception_result_var_b86;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_121;
char* new_fun_name_122;
char* __dec_obj48;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value95;
char* __exception_result_var_b87;
char* type_name_123;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value96;
char* __exception_result_var_b88;
_Bool _if_conditional181;
void* right_value97;
char* __exception_result_var_b89;
char* type_name_124;
void* right_value98;
char* __exception_result_var_b90;
void* right_value99;
char* __exception_result_var_b91;
struct list$1sRightValueObjectph* __dec_obj49;
struct list$1CVALUEph* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_95, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_96, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_97, 0, sizeof(struct sClass*));
memset(&right_value79, 0, sizeof(void*));
memset(&name_99, 0, sizeof(char*));
memset(&right_value80, 0, sizeof(void*));
memset(&no_decrement_100, 0, sizeof(_Bool));
memset(&no_free_101, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&c_value_102, 0, sizeof(char*));
memset(&klass_103, 0, sizeof(struct sClass*));
memset(&class_name_104, 0, sizeof(char*));
memset(&fun_name_105, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&type2_106, 0, sizeof(struct sType*));
memset(&right_value83, 0, sizeof(void*));
memset(&fun_name2_107, 0, sizeof(char*));
memset(&finalizer_108, 0, sizeof(struct sFun*));
memset(&right_value87, 0, sizeof(void*));
memset(&none_generics_name_113, 0, sizeof(char*));
memset(&right_value88, 0, sizeof(void*));
memset(&generics_fun_name_114, 0, sizeof(char*));
memset(&generics_fun_118, 0, sizeof(struct sGenericsFun*));
memset(&i_119, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&new_fun_name_120, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&fun_121, 0, sizeof(struct sFun*));
memset(&new_fun_name_122, 0, sizeof(char*));
memset(&fun_121, 0, sizeof(struct sFun*));
memset(&new_fun_name_122, 0, sizeof(char*));
memset(&right_value95, 0, sizeof(void*));
memset(&type_name_123, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&type_name_124, 0, sizeof(char*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
    # 238 "04heap.c"
    # 235 "04heap.c"
    if(_if_conditional158=gComeGC,    _if_conditional158) {
        # 236 "04heap.c"
        return;
    }
    # 238 "04heap.c"
    stack_saved_95=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 238))->stack);
    # 239 "04heap.c"
    right_value_objects_96=((struct sInfo*)come_null_check(info, "04heap.c", 239))->right_value_objects;
    # 241 "04heap.c"
    klass_97=((struct sType*)come_null_check(type, "04heap.c", 241))->mClass;
    # 243 "04heap.c"
    # 245 "04heap.c"
    name_99=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 245),__exception_result_var_b63=((char*)(right_value79=xsprintf("__dec_obj%d",++dec_num_98))), come_pop_stackframe(), __exception_result_var_b63));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value79;
    __freed_obj__ = 0;
    # 246 "04heap.c"
    (come_push_stackframe("04heap.c", 246),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("04heap.c", 246),__exception_result_var_b64=((char*)(right_value80=make_define_var(type,name_99,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b64)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value80;
    __freed_obj__ = 0;
    # 248 "04heap.c"
    (come_push_stackframe("04heap.c", 248),add_come_code(info,"%s=%s;\n",name_99,obj),come_pop_stackframe());
    # 250 "04heap.c"
    obj=name_99;
    # 251 "04heap.c"
    no_decrement_100=(_Bool)0;
    # 252 "04heap.c"
    no_free_101=(_Bool)0;
    # 338 "04heap.c"
    # 254 "04heap.c"
    if(_if_conditional159=((struct sType*)come_null_check(type, "04heap.c", 254))->mPointerNum>0,    _if_conditional159) {
        # 255 "04heap.c"
        c_value_102=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 255),__exception_result_var_b65=((char*)(right_value81=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b65));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = 0;
        # 257 "04heap.c"
        klass_103=((struct sType*)come_null_check(type, "04heap.c", 257))->mClass;
        # 259 "04heap.c"
        class_name_104=((struct sClass*)come_null_check(klass_103, "04heap.c", 259))->mName;
        # 261 "04heap.c"
        fun_name_105="finalize";
        # 263 "04heap.c"
        type2_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value82;
        __freed_obj__ = 0;
        # 264 "04heap.c"
        ((struct sType*)come_null_check(type2_106, "04heap.c", 264))->mHeap=(_Bool)0;
        # 266 "04heap.c"
        fun_name2_107=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 266),__exception_result_var_b66=((char*)(right_value83=create_method_name(type,(_Bool)0,fun_name_105,info))), come_pop_stackframe(), __exception_result_var_b66));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value83;
        __freed_obj__ = 0;
        # 268 "04heap.c"
        finalizer_108=((void*)0);
        # 305 "04heap.c"
        # 269 "04heap.c"
        if(_if_conditional160=(come_push_stackframe("04heap.c", 269),__exception_result_var_b67=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 269))->mGenericsTypes, "04heap.c", 269))), come_pop_stackframe(), __exception_result_var_b67)>0,        _if_conditional160) {
            # 270 "04heap.c"
            finalizer_108=(come_push_stackframe("04heap.c", 270),__exception_result_var_b72=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 270))->funcs,fun_name2_107), come_pop_stackframe(), __exception_result_var_b72);
            # 287 "04heap.c"
            # 272 "04heap.c"
            if(_if_conditional166=finalizer_108==((void*)0),            _if_conditional166) {
                # 273 "04heap.c"
                none_generics_name_113=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 273),__exception_result_var_b73=((char*)(right_value87=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_106, "04heap.c", 273))->mClass, "04heap.c", 273))->mName))), come_pop_stackframe(), __exception_result_var_b73));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                # 275 "04heap.c"
                generics_fun_name_114=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 275),__exception_result_var_b74=((char*)(right_value88=xsprintf("%s_%s",none_generics_name_113,fun_name_105))), come_pop_stackframe(), __exception_result_var_b74));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
                # 276 "04heap.c"
                generics_fun_118=(come_push_stackframe("04heap.c", 276),__exception_result_var_b78=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 276))->generics_funcs,generics_fun_name_114), come_pop_stackframe(), __exception_result_var_b78);
                # 286 "04heap.c"
                # 278 "04heap.c"
                if(_if_conditional171=generics_fun_118,                _if_conditional171) {
                    # 284 "04heap.c"
                    # 279 "04heap.c"
                    if(_if_conditional172=!(come_push_stackframe("04heap.c", 279),__exception_result_var_b79=create_generics_fun((char*)come_increment_ref_count(fun_name2_107),generics_fun_118,type,info), come_pop_stackframe(), __exception_result_var_b79),                    _if_conditional172) {
                        # 281 "04heap.c"
                        (come_push_stackframe("04heap.c", 281),__exception_result_var_b80=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 281))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 281))->sline), come_pop_stackframe(), __exception_result_var_b80);
                        # 282 "04heap.c"
                        (come_push_stackframe("04heap.c", 282),exit(2),come_pop_stackframe());
                    }
                    # 284 "04heap.c"
                    finalizer_108=(come_push_stackframe("04heap.c", 284),__exception_result_var_b81=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 284))->funcs,fun_name2_107), come_pop_stackframe(), __exception_result_var_b81);
                }
                if(none_generics_name_113 && !__freed_obj__) { none_generics_name_113 = come_decrement_ref_count(none_generics_name_113, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_114 && !__freed_obj__) { generics_fun_name_114 = come_decrement_ref_count(generics_fun_name_114, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            # 289 "04heap.c"
            # 300 "04heap.c"
            for(
            i_119=128-1 ,            0;            _for_condtionalA4=            i_119>=1 ,            _for_condtionalA4;            i_119-- ,            0            ){
                # 291 "04heap.c"
                new_fun_name_120=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 291),__exception_result_var_b82=((char*)(right_value92=xsprintf("%s_v%d",fun_name2_107,i_119))), come_pop_stackframe(), __exception_result_var_b82));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value92;
                __freed_obj__ = 0;
                # 292 "04heap.c"
                finalizer_108=(come_push_stackframe("04heap.c", 292),__exception_result_var_b83=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 292))->funcs,new_fun_name_120), come_pop_stackframe(), __exception_result_var_b83);
                # 298 "04heap.c"
                # 294 "04heap.c"
                if(_if_conditional173=finalizer_108,                _if_conditional173) {
                    # 295 "04heap.c"
                    __dec_obj47=fun_name2_107;
                    fun_name2_107=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 295),__exception_result_var_b84=((char*)(right_value93=__builtin_string(new_fun_name_120))), come_pop_stackframe(), __exception_result_var_b84));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                    # 296 "04heap.c"
                    if(new_fun_name_120 && !__freed_obj__) { new_fun_name_120 = come_decrement_ref_count(new_fun_name_120, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                }
                if(new_fun_name_120 && !__freed_obj__) { new_fun_name_120 = come_decrement_ref_count(new_fun_name_120, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 303 "04heap.c"
            # 300 "04heap.c"
            if(_if_conditional174=finalizer_108==((void*)0),            _if_conditional174) {
                # 301 "04heap.c"
                finalizer_108=(come_push_stackframe("04heap.c", 301),__exception_result_var_b85=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 301))->funcs,fun_name2_107), come_pop_stackframe(), __exception_result_var_b85);
            }
        }
        # 314 "04heap.c"
        # 305 "04heap.c"
        if(_if_conditional175=finalizer_108==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 305))->mClass, "04heap.c", 305))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 305))->mClass, "04heap.c", 305))->mNumber,        _if_conditional175) {
            # 307 "04heap.c"
            multiple_assgin_var1=(come_push_stackframe("04heap.c", 307),__exception_result_var_b86=((struct tuple2$2sFunpcharph*)(right_value94=create_finalizer_automatically(type,fun_name_105,info))), come_pop_stackframe(), __exception_result_var_b86);
            fun_121=multiple_assgin_var1->v1;
            new_fun_name_122=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value94;
            __freed_obj__ = 0;
            # 309 "04heap.c"
            __dec_obj48=fun_name2_107;
            fun_name2_107=(char*)come_increment_ref_count(new_fun_name_122);
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            # 310 "04heap.c"
            finalizer_108=fun_121;
            if(new_fun_name_122 && !__freed_obj__) { new_fun_name_122 = come_decrement_ref_count(new_fun_name_122, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 336 "04heap.c"
        # 314 "04heap.c"
        if(_if_conditional177=finalizer_108!=((void*)0),        _if_conditional177) {
            # 326 "04heap.c"
            # 315 "04heap.c"
            if(_if_conditional178=((struct sClass*)come_null_check(klass_103, "04heap.c", 315))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 315))->mPointerNum==1,            _if_conditional178) {
                # 316 "04heap.c"
                type_name_123=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 316),__exception_result_var_b87=((char*)(right_value95=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b87));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value95;
                __freed_obj__ = 0;
                # 320 "04heap.c"
                # 317 "04heap.c"
                if(_if_conditional179=c_value_102,                _if_conditional179) {
                    # 318 "04heap.c"
                    (come_push_stackframe("04heap.c", 318),add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_102,fun_name2_107,c_value_102,type_name_123,c_value_102,type_name_123,c_value_102,((struct sType*)come_null_check(type, "04heap.c", 318))->mAllocaValue,no_decrement_100,no_free_101,force_delete_),come_pop_stackframe());
                }
                if(type_name_123 && !__freed_obj__) { type_name_123 = come_decrement_ref_count(type_name_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 325 "04heap.c"
                # 322 "04heap.c"
                if(_if_conditional180=c_value_102,                _if_conditional180) {
                    # 323 "04heap.c"
                    (come_push_stackframe("04heap.c", 323),add_come_last_code2(info,(come_push_stackframe("04heap.c", 323),__exception_result_var_b88=((char*)(right_value96=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_102,fun_name2_107,c_value_102,((struct sType*)come_null_check(type, "04heap.c", 323))->mAllocaValue,no_decrement_100,no_free_101,force_delete_))), come_pop_stackframe(), __exception_result_var_b88)),come_pop_stackframe());
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value96;
                    __freed_obj__ = 0;
                }
            }
        }
        else {
            # 335 "04heap.c"
            # 328 "04heap.c"
            if(_if_conditional181=((struct sClass*)come_null_check(klass_103, "04heap.c", 328))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 328))->mPointerNum==1,            _if_conditional181) {
                # 329 "04heap.c"
                type_name_124=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 329),__exception_result_var_b89=((char*)(right_value97=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b89));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97;
                __freed_obj__ = 0;
                # 330 "04heap.c"
                (come_push_stackframe("04heap.c", 330),add_come_last_code2(info,(come_push_stackframe("04heap.c", 330),__exception_result_var_b90=((char*)(right_value98=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_99,name_99,name_99,type_name_124,name_99,type_name_124,name_99))), come_pop_stackframe(), __exception_result_var_b90)),come_pop_stackframe());
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value98;
                __freed_obj__ = 0;
                if(type_name_124 && !__freed_obj__) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 333 "04heap.c"
                (come_push_stackframe("04heap.c", 333),add_come_last_code2(info,(come_push_stackframe("04heap.c", 333),__exception_result_var_b91=((char*)(right_value99=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_99,name_99,name_99))), come_pop_stackframe(), __exception_result_var_b91)),come_pop_stackframe());
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99;
                __freed_obj__ = 0;
            }
        }
        if(c_value_102 && !__freed_obj__) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_106 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_106, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_107 && !__freed_obj__) { fun_name2_107 = come_decrement_ref_count(fun_name2_107, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 338 "04heap.c"
    __dec_obj49=((struct sInfo*)come_null_check(info, "04heap.c", 338))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 338))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_96);
    if(__dec_obj49) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 339 "04heap.c"
    __dec_obj50=((struct sInfo*)come_null_check(info, "04heap.c", 339))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 339))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_95);
    if(__dec_obj50) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_95 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_99 && !__freed_obj__) { name_99 = come_decrement_ref_count(name_99, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_109;
void* __exception_result_var_b68;
unsigned int __exception_result_var_b69;
unsigned int hash_110;
unsigned int it_111;
_Bool _while_condtional16;
_Bool _if_conditional161;
void* right_value84;
struct optional$2boolbool* __exception_result_var_b70;
_Bool _if_conditional163;
struct sFun* __result69__;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sFun* __result70__;
struct sFun* __result71__;
void* right_value85;
void* right_value86;
struct sFun* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_109, 0, sizeof(struct sFun*));
memset(&hash_110, 0, sizeof(unsigned int));
memset(&it_111, 0, sizeof(unsigned int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
                # 1591 "./comelang2.h"
                # 1592 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b68=memset(&default_value_109,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b68);
                # 1594 "./comelang2.h"
                hash_110=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b69=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b69)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1594))->size;
                # 1595 "./comelang2.h"
                it_111=hash_110;
                # 1619 "./comelang2.h"
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    # 1617 "./comelang2.h"
                    # 1598 "./comelang2.h"
                    if(_if_conditional161=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_111],                    _if_conditional161) {
                        # 1605 "./comelang2.h"
                        # 1600 "./comelang2.h"
                        if(_if_conditional163=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b70=((struct optional$2boolbool*)(right_value84=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_111], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b70)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84),
                        (right_value84 && right_value84 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value84, 
                        __freed_obj__ = 0, 
                        _if_conditional163) {
                            # 1602 "./comelang2.h"
                            __result69__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1602))->items[it_111];
                            return __result69__;
                        }
                        # 1605 "./comelang2.h"
                        it_111++;
                        # 1613 "./comelang2.h"
                        # 1607 "./comelang2.h"
                        if(_if_conditional164=it_111>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->size,                        _if_conditional164) {
                            # 1608 "./comelang2.h"
                            it_111=0;
                        }
                        else {
                            # 1613 "./comelang2.h"
                            # 1610 "./comelang2.h"
                            if(_if_conditional165=it_111==hash_110,                            _if_conditional165) {
                                # 1611 "./comelang2.h"
                                __result70__ = __result_obj__ = default_value_109;
                                return __result70__;
                            }
                        }
                    }
                    else {
                        # 1615 "./comelang2.h"
                        __result71__ = __result_obj__ = default_value_109;
                        return __result71__;
                    }
                }
                # 1619 "./comelang2.h"
                __result73__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sFunpbool*)(right_value86=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value85=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_109,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value86;
                __freed_obj__ = 0;
                return __result73__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
_Bool default_value_112;
void* __exception_result_var_b71;
_Bool __result67__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_112, 0, sizeof(_Bool));
                            # 69 "./comelang2.h"
                            # 61 "./comelang2.h"
                            if(_if_conditional162=self==((void*)0),                            _if_conditional162) {
                                # 62 "./comelang2.h"
                                # 63 "./comelang2.h"
                                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b71=memset(&default_value_112,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b71);
                                # 64 "./comelang2.h"
                                __result67__ = default_value_112;
                                return __result67__;
                            }
                            else {
                                # 67 "./comelang2.h"
                                __result68__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                                return __result68__;
                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 40 "./comelang2.h"
                    ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                    # 41 "./comelang2.h"
                    ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                    # 43 "./comelang2.h"
                    __result72__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result72__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sGenericsFun* default_value_115;
void* __exception_result_var_b75;
unsigned int __exception_result_var_b76;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional17;
_Bool _if_conditional167;
void* right_value89;
struct optional$2boolbool* __exception_result_var_b77;
_Bool _if_conditional168;
struct sGenericsFun* __result74__;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct sGenericsFun* __result75__;
struct sGenericsFun* __result76__;
void* right_value90;
void* right_value91;
struct sGenericsFun* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_115, 0, sizeof(struct sGenericsFun*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
                    # 1591 "./comelang2.h"
                    # 1592 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b75=memset(&default_value_115,0,sizeof(struct sGenericsFun*)), come_pop_stackframe(), __exception_result_var_b75);
                    # 1594 "./comelang2.h"
                    hash_116=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b76=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b76)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1594))->size;
                    # 1595 "./comelang2.h"
                    it_117=hash_116;
                    # 1619 "./comelang2.h"
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        # 1617 "./comelang2.h"
                        # 1598 "./comelang2.h"
                        if(_if_conditional167=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_117],                        _if_conditional167) {
                            # 1605 "./comelang2.h"
                            # 1600 "./comelang2.h"
                            if(_if_conditional168=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b77=((struct optional$2boolbool*)(right_value89=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_117], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b77)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89),
                            (right_value89 && right_value89 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value89, 
                            __freed_obj__ = 0, 
                            _if_conditional168) {
                                # 1602 "./comelang2.h"
                                __result74__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1602))->items[it_117];
                                return __result74__;
                            }
                            # 1605 "./comelang2.h"
                            it_117++;
                            # 1613 "./comelang2.h"
                            # 1607 "./comelang2.h"
                            if(_if_conditional169=it_117>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1607))->size,                            _if_conditional169) {
                                # 1608 "./comelang2.h"
                                it_117=0;
                            }
                            else {
                                # 1613 "./comelang2.h"
                                # 1610 "./comelang2.h"
                                if(_if_conditional170=it_117==hash_116,                                _if_conditional170) {
                                    # 1611 "./comelang2.h"
                                    __result75__ = __result_obj__ = default_value_115;
                                    return __result75__;
                                }
                            }
                        }
                        else {
                            # 1615 "./comelang2.h"
                            __result76__ = __result_obj__ = default_value_115;
                            return __result76__;
                        }
                    }
                    # 1619 "./comelang2.h"
                    __result78__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sGenericsFunpbool*)(right_value91=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value90=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1619))),default_value_115,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value91;
                    __freed_obj__ = 0;
                    return __result78__;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sGenericsFunpbool* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 40 "./comelang2.h"
                        ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                        # 41 "./comelang2.h"
                        ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                        # 43 "./comelang2.h"
                        __result77__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result77__;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "tuple2$2sFunpcharphp_finalize"
                # 0 "tuple2$2sFunpcharphp_finalize"
                if(_if_conditional176=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2!=((void*)0),                _if_conditional176) {
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_125;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_125, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_126, 0, sizeof(struct list_item$1CVALUEph*));
        # 176 "./comelang2.h"
        it_125=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 176))->head;
        # 182 "./comelang2.h"
        while(_while_condtional18=it_125!=((void*)0),        _while_condtional18) {
            # 178 "./comelang2.h"
            prev_it_126=it_125;
            # 179 "./comelang2.h"
            it_125=((struct list_item$1CVALUEph*)come_null_check(it_125, "./comelang2.h", 179))->next;
            # 180 "./comelang2.h"
            if(prev_it_126 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional182=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                _if_conditional182) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional183=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),                        _if_conditional183) {
                            # 0 "CVALUE_finalize"
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional184=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),                        _if_conditional184) {
                            # 1 "CVALUE_finalize"
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
struct list$1CVALUEph* stack_saved_127;
struct list$1sRightValueObjectph* right_value_objects_128;
struct sType* type_before_129;
_Bool _if_conditional186;
int __exception_result_var_b92;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value100;
char* __exception_result_var_b93;
char* c_value_130;
struct sClass* klass_131;
char* class_name_132;
char* fun_name_133;
void* right_value101;
struct sType* type2_134;
void* right_value102;
char* __exception_result_var_b94;
char* fun_name2_135;
struct sFun* finalizer_136;
int __exception_result_var_b95;
_Bool _if_conditional189;
struct sFun* __exception_result_var_b96;
_Bool _if_conditional190;
void* right_value103;
char* __exception_result_var_b97;
char* none_generics_name_137;
void* right_value104;
char* __exception_result_var_b98;
char* generics_fun_name_138;
struct sGenericsFun* __exception_result_var_b99;
struct sGenericsFun* generics_fun_139;
_Bool _if_conditional191;
_Bool __exception_result_var_b100;
_Bool _if_conditional192;
int __exception_result_var_b101;
struct sFun* __exception_result_var_b102;
int i_140;
_Bool _for_condtionalA5;
void* right_value105;
char* __exception_result_var_b103;
char* new_fun_name_141;
struct sFun* __exception_result_var_b104;
_Bool _if_conditional193;
void* right_value106;
char* __exception_result_var_b105;
char* __dec_obj51;
_Bool _if_conditional194;
struct sFun* __exception_result_var_b106;
_Bool _if_conditional195;
void* right_value107;
struct tuple2$2sFunpcharph* __exception_result_var_b107;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_142;
char* new_fun_name_143;
char* __dec_obj52;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value108;
char* __exception_result_var_b108;
char* type_name_144;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value109;
char* __exception_result_var_b109;
void* right_value110;
char* __exception_result_var_b110;
_Bool _if_conditional205;
void* right_value111;
char* __exception_result_var_b111;
void* right_value112;
char* __exception_result_var_b112;
_Bool _if_conditional206;
struct list$1tuple2$2charphsTypephph* o2_saved_145;
struct tuple2$2charphsTypeph* __exception_result_var_b115;
struct tuple2$2charphsTypeph* it_148;
_Bool __exception_result_var_b116;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* __exception_result_var_b119;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_151;
struct sType* field_type_152;
_Bool _if_conditional211;
void* right_value113;
char* __exception_result_var_b120;
void* right_value114;
char* __exception_result_var_b121;
char* obj_153;
_Bool _if_conditional215;
struct list$1tuple2$2charphsTypephph* o2_saved_156;
struct tuple2$2charphsTypeph* __exception_result_var_b122;
struct tuple2$2charphsTypeph* it_157;
_Bool __exception_result_var_b123;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* __exception_result_var_b124;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_158;
struct sType* field_type_159;
_Bool _if_conditional216;
void* right_value115;
char* __exception_result_var_b125;
void* right_value116;
char* __exception_result_var_b126;
char* obj_160;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value117;
char* __exception_result_var_b127;
char* type_name_161;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value118;
char* __exception_result_var_b128;
char* c_value_162;
struct sClass* klass_163;
char* class_name_164;
char* fun_name_165;
void* right_value119;
struct sType* type2_166;
void* right_value120;
char* __exception_result_var_b129;
char* fun_name2_167;
struct sFun* finalizer_168;
int __exception_result_var_b130;
_Bool _if_conditional227;
struct sFun* __exception_result_var_b131;
_Bool _if_conditional228;
void* right_value121;
char* __exception_result_var_b132;
char* none_generics_name_169;
void* right_value122;
char* __exception_result_var_b133;
char* generics_fun_name_170;
struct sGenericsFun* __exception_result_var_b134;
struct sGenericsFun* generics_fun_171;
_Bool _if_conditional229;
_Bool __exception_result_var_b135;
_Bool _if_conditional230;
int __exception_result_var_b136;
struct sFun* __exception_result_var_b137;
int i_172;
_Bool _for_condtionalA8;
void* right_value123;
char* __exception_result_var_b138;
char* new_fun_name_173;
struct sFun* __exception_result_var_b139;
_Bool _if_conditional231;
void* right_value124;
char* __exception_result_var_b140;
char* __dec_obj53;
_Bool _if_conditional232;
struct sFun* __exception_result_var_b141;
_Bool _if_conditional233;
void* right_value125;
struct tuple2$2sFunpcharph* __exception_result_var_b142;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_174;
char* new_fun_name_175;
char* __dec_obj54;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value126;
char* __exception_result_var_b143;
char* type_name_176;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value127;
char* __exception_result_var_b144;
void* right_value128;
char* __exception_result_var_b145;
_Bool _if_conditional243;
void* right_value129;
char* __exception_result_var_b146;
void* right_value130;
char* __exception_result_var_b147;
_Bool _if_conditional244;
struct list$1tuple2$2charphsTypephph* o2_saved_177;
struct tuple2$2charphsTypeph* __exception_result_var_b148;
struct tuple2$2charphsTypeph* it_178;
_Bool __exception_result_var_b149;
_Bool _for_condtionalA9;
struct tuple2$2charphsTypeph* __exception_result_var_b150;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_179;
struct sType* field_type_180;
_Bool _if_conditional245;
void* right_value131;
char* __exception_result_var_b151;
void* right_value132;
char* __exception_result_var_b152;
char* obj_181;
_Bool _if_conditional246;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* __exception_result_var_b153;
struct tuple2$2charphsTypeph* it_183;
_Bool __exception_result_var_b154;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* __exception_result_var_b155;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_184;
struct sType* field_type_185;
_Bool _if_conditional247;
void* right_value133;
char* __exception_result_var_b156;
void* right_value134;
char* __exception_result_var_b157;
char* obj_186;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value135;
char* __exception_result_var_b158;
char* type_name_187;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct list$1sRightValueObjectph* __dec_obj55;
struct list$1CVALUEph* __dec_obj56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_127, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_128, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_129, 0, sizeof(struct sType*));
memset(&right_value100, 0, sizeof(void*));
memset(&c_value_130, 0, sizeof(char*));
memset(&klass_131, 0, sizeof(struct sClass*));
memset(&class_name_132, 0, sizeof(char*));
memset(&fun_name_133, 0, sizeof(char*));
memset(&right_value101, 0, sizeof(void*));
memset(&type2_134, 0, sizeof(struct sType*));
memset(&right_value102, 0, sizeof(void*));
memset(&fun_name2_135, 0, sizeof(char*));
memset(&finalizer_136, 0, sizeof(struct sFun*));
memset(&right_value103, 0, sizeof(void*));
memset(&none_generics_name_137, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&generics_fun_name_138, 0, sizeof(char*));
memset(&generics_fun_139, 0, sizeof(struct sGenericsFun*));
memset(&i_140, 0, sizeof(int));
memset(&right_value105, 0, sizeof(void*));
memset(&new_fun_name_141, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&fun_142, 0, sizeof(struct sFun*));
memset(&new_fun_name_143, 0, sizeof(char*));
memset(&fun_142, 0, sizeof(struct sFun*));
memset(&new_fun_name_143, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&type_name_144, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&o2_saved_145, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_151, 0, sizeof(char*));
memset(&field_type_152, 0, sizeof(struct sType*));
memset(&name_151, 0, sizeof(char*));
memset(&field_type_152, 0, sizeof(struct sType*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&obj_153, 0, sizeof(char*));
memset(&o2_saved_156, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_157, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_158, 0, sizeof(char*));
memset(&field_type_159, 0, sizeof(struct sType*));
memset(&name_158, 0, sizeof(char*));
memset(&field_type_159, 0, sizeof(struct sType*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&obj_160, 0, sizeof(char*));
memset(&right_value117, 0, sizeof(void*));
memset(&type_name_161, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&c_value_162, 0, sizeof(char*));
memset(&klass_163, 0, sizeof(struct sClass*));
memset(&class_name_164, 0, sizeof(char*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&type2_166, 0, sizeof(struct sType*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_name2_167, 0, sizeof(char*));
memset(&finalizer_168, 0, sizeof(struct sFun*));
memset(&right_value121, 0, sizeof(void*));
memset(&none_generics_name_169, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&generics_fun_name_170, 0, sizeof(char*));
memset(&generics_fun_171, 0, sizeof(struct sGenericsFun*));
memset(&i_172, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&new_fun_name_173, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&fun_174, 0, sizeof(struct sFun*));
memset(&new_fun_name_175, 0, sizeof(char*));
memset(&fun_174, 0, sizeof(struct sFun*));
memset(&new_fun_name_175, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&type_name_176, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&o2_saved_177, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_178, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_179, 0, sizeof(char*));
memset(&field_type_180, 0, sizeof(struct sType*));
memset(&name_179, 0, sizeof(char*));
memset(&field_type_180, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&obj_181, 0, sizeof(char*));
memset(&o2_saved_182, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_183, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_184, 0, sizeof(char*));
memset(&field_type_185, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&field_type_185, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&obj_186, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&type_name_187, 0, sizeof(char*));
    # 347 "04heap.c"
    # 344 "04heap.c"
    if(_if_conditional185=gComeGC,    _if_conditional185) {
        # 345 "04heap.c"
        return;
    }
    # 347 "04heap.c"
    stack_saved_127=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 347))->stack);
    # 348 "04heap.c"
    right_value_objects_128=((struct sInfo*)come_null_check(info, "04heap.c", 348))->right_value_objects;
    # 350 "04heap.c"
    type_before_129=type;
    # 357 "04heap.c"
    # 353 "04heap.c"
    if(_if_conditional186=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 353))->mNoSolvedGenericsType, "04heap.c", 353))->v1,    _if_conditional186) {
        # 354 "04heap.c"
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 354))->mNoSolvedGenericsType, "04heap.c", 354))->v1;
    }
    # 706 "04heap.c"
    # 357 "04heap.c"
    if(_if_conditional187=((struct sType*)come_null_check(type, "04heap.c", 357))->mPointerNum>0||((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 357))->mClass, "04heap.c", 357))->mProtocol||(come_push_stackframe("04heap.c", 357),__exception_result_var_b92=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 357))->mGenericsTypes, "04heap.c", 357))), come_pop_stackframe(), __exception_result_var_b92)>0||(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 357))->come_fun, "04heap.c", 357))->mCloner&&ret_value),    _if_conditional187) {
        # 704 "04heap.c"
        # 358 "04heap.c"
        if(_if_conditional188=force_delete_,        _if_conditional188) {
            # 359 "04heap.c"
            c_value_130=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 359),__exception_result_var_b93=((char*)(right_value100=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b93));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            # 361 "04heap.c"
            klass_131=((struct sType*)come_null_check(type, "04heap.c", 361))->mClass;
            # 363 "04heap.c"
            class_name_132=((struct sClass*)come_null_check(klass_131, "04heap.c", 363))->mName;
            # 365 "04heap.c"
            fun_name_133="force_finalize";
            # 367 "04heap.c"
            type2_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value101;
            __freed_obj__ = 0;
            # 368 "04heap.c"
            ((struct sType*)come_null_check(type2_134, "04heap.c", 368))->mHeap=(_Bool)0;
            # 370 "04heap.c"
            fun_name2_135=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 370),__exception_result_var_b94=((char*)(right_value102=create_method_name(type,(_Bool)0,fun_name_133,info))), come_pop_stackframe(), __exception_result_var_b94));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value102;
            __freed_obj__ = 0;
            # 372 "04heap.c"
            finalizer_136=((void*)0);
            # 409 "04heap.c"
            # 373 "04heap.c"
            if(_if_conditional189=(come_push_stackframe("04heap.c", 373),__exception_result_var_b95=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 373))->mGenericsTypes, "04heap.c", 373))), come_pop_stackframe(), __exception_result_var_b95)>0,            _if_conditional189) {
                # 374 "04heap.c"
                finalizer_136=(come_push_stackframe("04heap.c", 374),__exception_result_var_b96=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 374))->funcs,fun_name2_135), come_pop_stackframe(), __exception_result_var_b96);
                # 391 "04heap.c"
                # 376 "04heap.c"
                if(_if_conditional190=finalizer_136==((void*)0),                _if_conditional190) {
                    # 377 "04heap.c"
                    none_generics_name_137=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 377),__exception_result_var_b97=((char*)(right_value103=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_134, "04heap.c", 377))->mClass, "04heap.c", 377))->mName))), come_pop_stackframe(), __exception_result_var_b97));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value103;
                    __freed_obj__ = 0;
                    # 379 "04heap.c"
                    generics_fun_name_138=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 379),__exception_result_var_b98=((char*)(right_value104=xsprintf("%s_%s",none_generics_name_137,fun_name_133))), come_pop_stackframe(), __exception_result_var_b98));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value104;
                    __freed_obj__ = 0;
                    # 380 "04heap.c"
                    generics_fun_139=(come_push_stackframe("04heap.c", 380),__exception_result_var_b99=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 380))->generics_funcs,generics_fun_name_138), come_pop_stackframe(), __exception_result_var_b99);
                    # 390 "04heap.c"
                    # 382 "04heap.c"
                    if(_if_conditional191=generics_fun_139,                    _if_conditional191) {
                        # 388 "04heap.c"
                        # 383 "04heap.c"
                        if(_if_conditional192=!(come_push_stackframe("04heap.c", 383),__exception_result_var_b100=create_generics_fun((char*)come_increment_ref_count(fun_name2_135),generics_fun_139,type,info), come_pop_stackframe(), __exception_result_var_b100),                        _if_conditional192) {
                            # 385 "04heap.c"
                            (come_push_stackframe("04heap.c", 385),__exception_result_var_b101=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 385))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 385))->sline), come_pop_stackframe(), __exception_result_var_b101);
                            # 386 "04heap.c"
                            (come_push_stackframe("04heap.c", 386),exit(2),come_pop_stackframe());
                        }
                        # 388 "04heap.c"
                        finalizer_136=(come_push_stackframe("04heap.c", 388),__exception_result_var_b102=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 388))->funcs,fun_name2_135), come_pop_stackframe(), __exception_result_var_b102);
                    }
                    if(none_generics_name_137 && !__freed_obj__) { none_generics_name_137 = come_decrement_ref_count(none_generics_name_137, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_138 && !__freed_obj__) { generics_fun_name_138 = come_decrement_ref_count(generics_fun_name_138, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                # 393 "04heap.c"
                # 404 "04heap.c"
                for(
                i_140=128-1 ,                0;                _for_condtionalA5=                i_140>=1 ,                _for_condtionalA5;                i_140-- ,                0                ){
                    # 395 "04heap.c"
                    new_fun_name_141=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 395),__exception_result_var_b103=((char*)(right_value105=xsprintf("%s_v%d",fun_name2_135,i_140))), come_pop_stackframe(), __exception_result_var_b103));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value105;
                    __freed_obj__ = 0;
                    # 396 "04heap.c"
                    finalizer_136=(come_push_stackframe("04heap.c", 396),__exception_result_var_b104=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 396))->funcs,new_fun_name_141), come_pop_stackframe(), __exception_result_var_b104);
                    # 402 "04heap.c"
                    # 398 "04heap.c"
                    if(_if_conditional193=finalizer_136,                    _if_conditional193) {
                        # 399 "04heap.c"
                        __dec_obj51=fun_name2_135;
                        fun_name2_135=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 399),__exception_result_var_b105=((char*)(right_value106=__builtin_string(new_fun_name_141))), come_pop_stackframe(), __exception_result_var_b105));
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106;
                        __freed_obj__ = 0;
                        # 400 "04heap.c"
                        if(new_fun_name_141 && !__freed_obj__) { new_fun_name_141 = come_decrement_ref_count(new_fun_name_141, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    if(new_fun_name_141 && !__freed_obj__) { new_fun_name_141 = come_decrement_ref_count(new_fun_name_141, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 407 "04heap.c"
                # 404 "04heap.c"
                if(_if_conditional194=finalizer_136==((void*)0),                _if_conditional194) {
                    # 405 "04heap.c"
                    finalizer_136=(come_push_stackframe("04heap.c", 405),__exception_result_var_b106=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 405))->funcs,fun_name2_135), come_pop_stackframe(), __exception_result_var_b106);
                }
            }
            # 418 "04heap.c"
            # 409 "04heap.c"
            if(_if_conditional195=finalizer_136==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 409))->mClass, "04heap.c", 409))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 409))->mClass, "04heap.c", 409))->mNumber,            _if_conditional195) {
                # 411 "04heap.c"
                multiple_assgin_var2=(come_push_stackframe("04heap.c", 411),__exception_result_var_b107=((struct tuple2$2sFunpcharph*)(right_value107=create_force_finalizer_automatically(type,fun_name_133,info))), come_pop_stackframe(), __exception_result_var_b107);
                fun_142=multiple_assgin_var2->v1;
                new_fun_name_143=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
                # 413 "04heap.c"
                __dec_obj52=fun_name2_135;
                fun_name2_135=(char*)come_increment_ref_count(new_fun_name_143);
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                # 414 "04heap.c"
                finalizer_136=fun_142;
                if(new_fun_name_143 && !__freed_obj__) { new_fun_name_143 = come_decrement_ref_count(new_fun_name_143, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 530 "04heap.c"
            # 418 "04heap.c"
            if(_if_conditional196=finalizer_136!=((void*)0),            _if_conditional196) {
                # 460 "04heap.c"
                # 419 "04heap.c"
                if(_if_conditional197=((struct sClass*)come_null_check(klass_131, "04heap.c", 419))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 419))->mPointerNum==1,                _if_conditional197) {
                    # 420 "04heap.c"
                    type_name_144=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 420),__exception_result_var_b108=((char*)(right_value108=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b108));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                    # 439 "04heap.c"
                    # 421 "04heap.c"
                    if(_if_conditional198=c_value_130,                    _if_conditional198) {
                        # 438 "04heap.c"
                        # 422 "04heap.c"
                        if(_if_conditional199=no_decrement,                        _if_conditional199) {
                            # 429 "04heap.c"
                            # 423 "04heap.c"
                            if(_if_conditional200=comma,                            _if_conditional200) {
                                # 424 "04heap.c"
                                (come_push_stackframe("04heap.c", 424),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_130,c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 424))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                # 427 "04heap.c"
                                (come_push_stackframe("04heap.c", 427),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_130,c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 427))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                        else {
                            # 437 "04heap.c"
                            # 431 "04heap.c"
                            if(_if_conditional201=comma,                            _if_conditional201) {
                                # 432 "04heap.c"
                                (come_push_stackframe("04heap.c", 432),add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 432))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                # 435 "04heap.c"
                                (come_push_stackframe("04heap.c", 435),add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_130,fun_name2_135,c_value_130,type_name_144,c_value_130,type_name_144,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 435))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                    }
                    if(type_name_144 && !__freed_obj__) { type_name_144 = come_decrement_ref_count(type_name_144, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    # 459 "04heap.c"
                    # 441 "04heap.c"
                    if(_if_conditional202=c_value_130,                    _if_conditional202) {
                        # 458 "04heap.c"
                        # 442 "04heap.c"
                        if(_if_conditional203=no_decrement,                        _if_conditional203) {
                            # 449 "04heap.c"
                            # 443 "04heap.c"
                            if(_if_conditional204=comma,                            _if_conditional204) {
                                # 444 "04heap.c"
                                (come_push_stackframe("04heap.c", 444),add_come_code(info,(come_push_stackframe("04heap.c", 444),__exception_result_var_b109=((char*)(right_value109=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_130,c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 444))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b109)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value109;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 447 "04heap.c"
                                (come_push_stackframe("04heap.c", 447),add_come_code(info,(come_push_stackframe("04heap.c", 447),__exception_result_var_b110=((char*)(right_value110=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_130,c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 447))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b110)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value110;
                                __freed_obj__ = 0;
                            }
                        }
                        else {
                            # 457 "04heap.c"
                            # 451 "04heap.c"
                            if(_if_conditional205=comma,                            _if_conditional205) {
                                # 452 "04heap.c"
                                (come_push_stackframe("04heap.c", 452),add_come_code(info,(come_push_stackframe("04heap.c", 452),__exception_result_var_b111=((char*)(right_value111=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 452))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b111)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value111;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 455 "04heap.c"
                                (come_push_stackframe("04heap.c", 455),add_come_code(info,(come_push_stackframe("04heap.c", 455),__exception_result_var_b112=((char*)(right_value112=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_130,fun_name2_135,c_value_130,((struct sType*)come_null_check(type, "04heap.c", 455))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b112)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value112;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                }
            }
            else {
                # 486 "04heap.c"
                # 462 "04heap.c"
                if(_if_conditional206=((struct sClass*)come_null_check(klass_131, "04heap.c", 462))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 462))->mPointerNum==0,                _if_conditional206) {
                    # 472 "04heap.c"
                    for(
                    o2_saved_145=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "04heap.c", 464))->mFields)),it_148=(come_push_stackframe("04heap.c", 464),__exception_result_var_b115=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_145), "04heap.c", 464))), come_pop_stackframe(), __exception_result_var_b115) ,                    0;                    _for_condtionalA6=                    !(come_push_stackframe("04heap.c", 464),__exception_result_var_b116=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_145), "04heap.c", 464))), come_pop_stackframe(), __exception_result_var_b116) ,                    _for_condtionalA6;                    it_148=(come_push_stackframe("04heap.c", 464),__exception_result_var_b119=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_145), "04heap.c", 464))), come_pop_stackframe(), __exception_result_var_b119) ,                    0                    ){
                        # 465 "04heap.c"
                        multiple_assgin_var3=it_148;
                        name_151=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_152=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        # 471 "04heap.c"
                        # 467 "04heap.c"
                        if(_if_conditional211=((struct sType*)come_null_check(field_type_152, "04heap.c", 467))->mHeap&&((struct sType*)come_null_check(field_type_152, "04heap.c", 467))->mPointerNum>0,                        _if_conditional211) {
                            # 468 "04heap.c"
                            obj_153=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 468),__exception_result_var_b121=((char*)(right_value114=xsprintf("(((%s)%s).%s)",(come_push_stackframe("04heap.c", 468),__exception_result_var_b120=((char*)(right_value113=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b120),c_value_130,name_151))), come_pop_stackframe(), __exception_result_var_b121));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value113;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value114;
                            __freed_obj__ = 0;
                            # 469 "04heap.c"
                            (come_push_stackframe("04heap.c", 469),free_object(field_type_152,obj_153,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                            if(obj_153 && !__freed_obj__) { obj_153 = come_decrement_ref_count(obj_153, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(name_151 && !__freed_obj__) { name_151 = come_decrement_ref_count(name_151, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_145 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 486 "04heap.c"
                    # 473 "04heap.c"
                    if(_if_conditional215=((struct sClass*)come_null_check(klass_131, "04heap.c", 473))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 473))->mPointerNum==1,                    _if_conditional215) {
                        # 483 "04heap.c"
                        for(
                        o2_saved_156=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "04heap.c", 475))->mFields)),it_157=(come_push_stackframe("04heap.c", 475),__exception_result_var_b122=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_156), "04heap.c", 475))), come_pop_stackframe(), __exception_result_var_b122) ,                        0;                        _for_condtionalA7=                        !(come_push_stackframe("04heap.c", 475),__exception_result_var_b123=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_156), "04heap.c", 475))), come_pop_stackframe(), __exception_result_var_b123) ,                        _for_condtionalA7;                        it_157=(come_push_stackframe("04heap.c", 475),__exception_result_var_b124=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_156), "04heap.c", 475))), come_pop_stackframe(), __exception_result_var_b124) ,                        0                        ){
                            # 476 "04heap.c"
                            multiple_assgin_var4=it_157;
                            name_158=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_159=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            # 482 "04heap.c"
                            # 478 "04heap.c"
                            if(_if_conditional216=((struct sType*)come_null_check(field_type_159, "04heap.c", 478))->mHeap&&((struct sType*)come_null_check(field_type_159, "04heap.c", 478))->mPointerNum>0,                            _if_conditional216) {
                                # 479 "04heap.c"
                                obj_160=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 479),__exception_result_var_b126=((char*)(right_value116=xsprintf("(((%s)%s)->%s)",(come_push_stackframe("04heap.c", 479),__exception_result_var_b125=((char*)(right_value115=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b125),c_value_130,name_158))), come_pop_stackframe(), __exception_result_var_b126));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value115;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value116;
                                __freed_obj__ = 0;
                                # 480 "04heap.c"
                                (come_push_stackframe("04heap.c", 480),free_object(field_type_159,obj_160,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                                if(obj_160 && !__freed_obj__) { obj_160 = come_decrement_ref_count(obj_160, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(name_158 && !__freed_obj__) { name_158 = come_decrement_ref_count(name_158, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_156 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                # 529 "04heap.c"
                # 486 "04heap.c"
                if(_if_conditional217=!((struct sType*)come_null_check(type, "04heap.c", 486))->mAllocaValue,                _if_conditional217) {
                    # 528 "04heap.c"
                    # 487 "04heap.c"
                    if(_if_conditional218=((struct sClass*)come_null_check(klass_131, "04heap.c", 487))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 487))->mPointerNum==1,                    _if_conditional218) {
                        # 507 "04heap.c"
                        # 488 "04heap.c"
                        if(_if_conditional219=c_value_130,                        _if_conditional219) {
                            # 489 "04heap.c"
                            type_name_161=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 489),__exception_result_var_b127=((char*)(right_value117=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b127));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value117;
                            __freed_obj__ = 0;
                            # 506 "04heap.c"
                            # 490 "04heap.c"
                            if(_if_conditional220=no_decrement,                            _if_conditional220) {
                                # 497 "04heap.c"
                                # 491 "04heap.c"
                                if(_if_conditional221=comma,                                _if_conditional221) {
                                    # 492 "04heap.c"
                                    (come_push_stackframe("04heap.c", 492),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_130,c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 495 "04heap.c"
                                    (come_push_stackframe("04heap.c", 495),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_130,c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                # 505 "04heap.c"
                                # 499 "04heap.c"
                                if(_if_conditional222=comma,                                _if_conditional222) {
                                    # 500 "04heap.c"
                                    (come_push_stackframe("04heap.c", 500),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 503 "04heap.c"
                                    (come_push_stackframe("04heap.c", 503),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_130,c_value_130,c_value_130,type_name_161,c_value_130,type_name_161,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            if(type_name_161 && !__freed_obj__) { type_name_161 = come_decrement_ref_count(type_name_161, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        # 527 "04heap.c"
                        # 509 "04heap.c"
                        if(_if_conditional223=c_value_130,                        _if_conditional223) {
                            # 526 "04heap.c"
                            # 510 "04heap.c"
                            if(_if_conditional224=no_decrement,                            _if_conditional224) {
                                # 517 "04heap.c"
                                # 511 "04heap.c"
                                if(_if_conditional225=comma,                                _if_conditional225) {
                                    # 512 "04heap.c"
                                    (come_push_stackframe("04heap.c", 512),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_130,c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 515 "04heap.c"
                                    (come_push_stackframe("04heap.c", 515),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_130,c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                # 525 "04heap.c"
                                # 519 "04heap.c"
                                if(_if_conditional226=comma,                                _if_conditional226) {
                                    # 520 "04heap.c"
                                    (come_push_stackframe("04heap.c", 520),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 523 "04heap.c"
                                    (come_push_stackframe("04heap.c", 523),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_130,c_value_130,c_value_130,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                        }
                    }
                }
            }
            if(c_value_130 && !__freed_obj__) { c_value_130 = come_decrement_ref_count(c_value_130, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_134, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_135 && !__freed_obj__) { fun_name2_135 = come_decrement_ref_count(fun_name2_135, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 532 "04heap.c"
            c_value_162=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 532),__exception_result_var_b128=((char*)(right_value118=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b128));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
            # 534 "04heap.c"
            klass_163=((struct sType*)come_null_check(type, "04heap.c", 534))->mClass;
            # 536 "04heap.c"
            class_name_164=((struct sClass*)come_null_check(klass_163, "04heap.c", 536))->mName;
            # 538 "04heap.c"
            fun_name_165="finalize";
            # 540 "04heap.c"
            type2_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value119;
            __freed_obj__ = 0;
            # 541 "04heap.c"
            ((struct sType*)come_null_check(type2_166, "04heap.c", 541))->mHeap=(_Bool)0;
            # 543 "04heap.c"
            fun_name2_167=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 543),__exception_result_var_b129=((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name_165,info))), come_pop_stackframe(), __exception_result_var_b129));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value120;
            __freed_obj__ = 0;
            # 545 "04heap.c"
            finalizer_168=((void*)0);
            # 582 "04heap.c"
            # 546 "04heap.c"
            if(_if_conditional227=(come_push_stackframe("04heap.c", 546),__exception_result_var_b130=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 546))->mGenericsTypes, "04heap.c", 546))), come_pop_stackframe(), __exception_result_var_b130)>0,            _if_conditional227) {
                # 547 "04heap.c"
                finalizer_168=(come_push_stackframe("04heap.c", 547),__exception_result_var_b131=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 547))->funcs,fun_name2_167), come_pop_stackframe(), __exception_result_var_b131);
                # 564 "04heap.c"
                # 549 "04heap.c"
                if(_if_conditional228=finalizer_168==((void*)0),                _if_conditional228) {
                    # 550 "04heap.c"
                    none_generics_name_169=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 550),__exception_result_var_b132=((char*)(right_value121=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_166, "04heap.c", 550))->mClass, "04heap.c", 550))->mName))), come_pop_stackframe(), __exception_result_var_b132));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                    # 552 "04heap.c"
                    generics_fun_name_170=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 552),__exception_result_var_b133=((char*)(right_value122=xsprintf("%s_%s",none_generics_name_169,fun_name_165))), come_pop_stackframe(), __exception_result_var_b133));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value122;
                    __freed_obj__ = 0;
                    # 553 "04heap.c"
                    generics_fun_171=(come_push_stackframe("04heap.c", 553),__exception_result_var_b134=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 553))->generics_funcs,generics_fun_name_170), come_pop_stackframe(), __exception_result_var_b134);
                    # 563 "04heap.c"
                    # 555 "04heap.c"
                    if(_if_conditional229=generics_fun_171,                    _if_conditional229) {
                        # 561 "04heap.c"
                        # 556 "04heap.c"
                        if(_if_conditional230=!(come_push_stackframe("04heap.c", 556),__exception_result_var_b135=create_generics_fun((char*)come_increment_ref_count(fun_name2_167),generics_fun_171,type,info), come_pop_stackframe(), __exception_result_var_b135),                        _if_conditional230) {
                            # 558 "04heap.c"
                            (come_push_stackframe("04heap.c", 558),__exception_result_var_b136=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 558))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 558))->sline), come_pop_stackframe(), __exception_result_var_b136);
                            # 559 "04heap.c"
                            (come_push_stackframe("04heap.c", 559),exit(2),come_pop_stackframe());
                        }
                        # 561 "04heap.c"
                        finalizer_168=(come_push_stackframe("04heap.c", 561),__exception_result_var_b137=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 561))->funcs,fun_name2_167), come_pop_stackframe(), __exception_result_var_b137);
                    }
                    if(none_generics_name_169 && !__freed_obj__) { none_generics_name_169 = come_decrement_ref_count(none_generics_name_169, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_170 && !__freed_obj__) { generics_fun_name_170 = come_decrement_ref_count(generics_fun_name_170, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                # 566 "04heap.c"
                # 577 "04heap.c"
                for(
                i_172=128-1 ,                0;                _for_condtionalA8=                i_172>=1 ,                _for_condtionalA8;                i_172-- ,                0                ){
                    # 568 "04heap.c"
                    new_fun_name_173=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 568),__exception_result_var_b138=((char*)(right_value123=xsprintf("%s_v%d",fun_name2_167,i_172))), come_pop_stackframe(), __exception_result_var_b138));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123;
                    __freed_obj__ = 0;
                    # 569 "04heap.c"
                    finalizer_168=(come_push_stackframe("04heap.c", 569),__exception_result_var_b139=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 569))->funcs,new_fun_name_173), come_pop_stackframe(), __exception_result_var_b139);
                    # 575 "04heap.c"
                    # 571 "04heap.c"
                    if(_if_conditional231=finalizer_168,                    _if_conditional231) {
                        # 572 "04heap.c"
                        __dec_obj53=fun_name2_167;
                        fun_name2_167=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 572),__exception_result_var_b140=((char*)(right_value124=__builtin_string(new_fun_name_173))), come_pop_stackframe(), __exception_result_var_b140));
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value124;
                        __freed_obj__ = 0;
                        # 573 "04heap.c"
                        if(new_fun_name_173 && !__freed_obj__) { new_fun_name_173 = come_decrement_ref_count(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    if(new_fun_name_173 && !__freed_obj__) { new_fun_name_173 = come_decrement_ref_count(new_fun_name_173, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 580 "04heap.c"
                # 577 "04heap.c"
                if(_if_conditional232=finalizer_168==((void*)0),                _if_conditional232) {
                    # 578 "04heap.c"
                    finalizer_168=(come_push_stackframe("04heap.c", 578),__exception_result_var_b141=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 578))->funcs,fun_name2_167), come_pop_stackframe(), __exception_result_var_b141);
                }
            }
            # 591 "04heap.c"
            # 582 "04heap.c"
            if(_if_conditional233=finalizer_168==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 582))->mClass, "04heap.c", 582))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 582))->mClass, "04heap.c", 582))->mNumber,            _if_conditional233) {
                # 584 "04heap.c"
                multiple_assgin_var5=(come_push_stackframe("04heap.c", 584),__exception_result_var_b142=((struct tuple2$2sFunpcharph*)(right_value125=create_finalizer_automatically(type,fun_name_165,info))), come_pop_stackframe(), __exception_result_var_b142);
                fun_174=multiple_assgin_var5->v1;
                new_fun_name_175=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                # 586 "04heap.c"
                __dec_obj54=fun_name2_167;
                fun_name2_167=(char*)come_increment_ref_count(new_fun_name_175);
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                # 587 "04heap.c"
                finalizer_168=fun_174;
                if(new_fun_name_175 && !__freed_obj__) { new_fun_name_175 = come_decrement_ref_count(new_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 703 "04heap.c"
            # 591 "04heap.c"
            if(_if_conditional234=finalizer_168!=((void*)0),            _if_conditional234) {
                # 633 "04heap.c"
                # 592 "04heap.c"
                if(_if_conditional235=((struct sClass*)come_null_check(klass_163, "04heap.c", 592))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 592))->mPointerNum==1,                _if_conditional235) {
                    # 593 "04heap.c"
                    type_name_176=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 593),__exception_result_var_b143=((char*)(right_value126=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b143));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    # 612 "04heap.c"
                    # 594 "04heap.c"
                    if(_if_conditional236=c_value_162,                    _if_conditional236) {
                        # 611 "04heap.c"
                        # 595 "04heap.c"
                        if(_if_conditional237=no_decrement,                        _if_conditional237) {
                            # 602 "04heap.c"
                            # 596 "04heap.c"
                            if(_if_conditional238=comma,                            _if_conditional238) {
                                # 597 "04heap.c"
                                (come_push_stackframe("04heap.c", 597),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_162,c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 597))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                # 600 "04heap.c"
                                (come_push_stackframe("04heap.c", 600),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_162,c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 600))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                        else {
                            # 610 "04heap.c"
                            # 604 "04heap.c"
                            if(_if_conditional239=comma,                            _if_conditional239) {
                                # 605 "04heap.c"
                                (come_push_stackframe("04heap.c", 605),add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 605))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                            else {
                                # 608 "04heap.c"
                                (come_push_stackframe("04heap.c", 608),add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_162,fun_name2_167,c_value_162,type_name_176,c_value_162,type_name_176,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 608))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                            }
                        }
                    }
                    if(type_name_176 && !__freed_obj__) { type_name_176 = come_decrement_ref_count(type_name_176, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    # 632 "04heap.c"
                    # 614 "04heap.c"
                    if(_if_conditional240=c_value_162,                    _if_conditional240) {
                        # 631 "04heap.c"
                        # 615 "04heap.c"
                        if(_if_conditional241=no_decrement,                        _if_conditional241) {
                            # 622 "04heap.c"
                            # 616 "04heap.c"
                            if(_if_conditional242=comma,                            _if_conditional242) {
                                # 617 "04heap.c"
                                (come_push_stackframe("04heap.c", 617),add_come_code(info,(come_push_stackframe("04heap.c", 617),__exception_result_var_b144=((char*)(right_value127=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_162,c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 617))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b144)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value127;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 620 "04heap.c"
                                (come_push_stackframe("04heap.c", 620),add_come_code(info,(come_push_stackframe("04heap.c", 620),__exception_result_var_b145=((char*)(right_value128=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_162,c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 620))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b145)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128;
                                __freed_obj__ = 0;
                            }
                        }
                        else {
                            # 630 "04heap.c"
                            # 624 "04heap.c"
                            if(_if_conditional243=comma,                            _if_conditional243) {
                                # 625 "04heap.c"
                                (come_push_stackframe("04heap.c", 625),add_come_code(info,(come_push_stackframe("04heap.c", 625),__exception_result_var_b146=((char*)(right_value129=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 625))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b146)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value129;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 628 "04heap.c"
                                (come_push_stackframe("04heap.c", 628),add_come_code(info,(come_push_stackframe("04heap.c", 628),__exception_result_var_b147=((char*)(right_value130=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_162,fun_name2_167,c_value_162,((struct sType*)come_null_check(type, "04heap.c", 628))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b147)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                }
            }
            else {
                # 659 "04heap.c"
                # 635 "04heap.c"
                if(_if_conditional244=((struct sClass*)come_null_check(klass_163, "04heap.c", 635))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 635))->mPointerNum==0,                _if_conditional244) {
                    # 645 "04heap.c"
                    for(
                    o2_saved_177=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_163, "04heap.c", 637))->mFields)),it_178=(come_push_stackframe("04heap.c", 637),__exception_result_var_b148=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_177), "04heap.c", 637))), come_pop_stackframe(), __exception_result_var_b148) ,                    0;                    _for_condtionalA9=                    !(come_push_stackframe("04heap.c", 637),__exception_result_var_b149=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_177), "04heap.c", 637))), come_pop_stackframe(), __exception_result_var_b149) ,                    _for_condtionalA9;                    it_178=(come_push_stackframe("04heap.c", 637),__exception_result_var_b150=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_177), "04heap.c", 637))), come_pop_stackframe(), __exception_result_var_b150) ,                    0                    ){
                        # 638 "04heap.c"
                        multiple_assgin_var6=it_178;
                        name_179=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_180=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        # 644 "04heap.c"
                        # 640 "04heap.c"
                        if(_if_conditional245=((struct sType*)come_null_check(field_type_180, "04heap.c", 640))->mHeap&&((struct sType*)come_null_check(field_type_180, "04heap.c", 640))->mPointerNum>0,                        _if_conditional245) {
                            # 641 "04heap.c"
                            obj_181=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 641),__exception_result_var_b152=((char*)(right_value132=xsprintf("(((%s)%s).%s)",(come_push_stackframe("04heap.c", 641),__exception_result_var_b151=((char*)(right_value131=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b151),c_value_162,name_179))), come_pop_stackframe(), __exception_result_var_b152));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value131;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
                            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value132;
                            __freed_obj__ = 0;
                            # 642 "04heap.c"
                            (come_push_stackframe("04heap.c", 642),free_object(field_type_180,obj_181,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                            if(obj_181 && !__freed_obj__) { obj_181 = come_decrement_ref_count(obj_181, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(name_179 && !__freed_obj__) { name_179 = come_decrement_ref_count(name_179, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_180 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_177 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 659 "04heap.c"
                    # 646 "04heap.c"
                    if(_if_conditional246=((struct sClass*)come_null_check(klass_163, "04heap.c", 646))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 646))->mPointerNum==1,                    _if_conditional246) {
                        # 656 "04heap.c"
                        for(
                        o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_163, "04heap.c", 648))->mFields)),it_183=(come_push_stackframe("04heap.c", 648),__exception_result_var_b153=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 648))), come_pop_stackframe(), __exception_result_var_b153) ,                        0;                        _for_condtionalA10=                        !(come_push_stackframe("04heap.c", 648),__exception_result_var_b154=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 648))), come_pop_stackframe(), __exception_result_var_b154) ,                        _for_condtionalA10;                        it_183=(come_push_stackframe("04heap.c", 648),__exception_result_var_b155=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 648))), come_pop_stackframe(), __exception_result_var_b155) ,                        0                        ){
                            # 649 "04heap.c"
                            multiple_assgin_var7=it_183;
                            name_184=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_185=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            # 655 "04heap.c"
                            # 651 "04heap.c"
                            if(_if_conditional247=((struct sType*)come_null_check(field_type_185, "04heap.c", 651))->mHeap&&((struct sType*)come_null_check(field_type_185, "04heap.c", 651))->mPointerNum>0,                            _if_conditional247) {
                                # 652 "04heap.c"
                                obj_186=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 652),__exception_result_var_b157=((char*)(right_value134=xsprintf("(((%s)%s)->%s)",(come_push_stackframe("04heap.c", 652),__exception_result_var_b156=((char*)(right_value133=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b156),c_value_162,name_184))), come_pop_stackframe(), __exception_result_var_b157));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value133;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
                                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value134;
                                __freed_obj__ = 0;
                                # 653 "04heap.c"
                                (come_push_stackframe("04heap.c", 653),free_object(field_type_185,obj_186,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                                if(obj_186 && !__freed_obj__) { obj_186 = come_decrement_ref_count(obj_186, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(name_184 && !__freed_obj__) { name_184 = come_decrement_ref_count(name_184, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_182 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                # 702 "04heap.c"
                # 659 "04heap.c"
                if(_if_conditional248=!((struct sType*)come_null_check(type, "04heap.c", 659))->mAllocaValue,                _if_conditional248) {
                    # 701 "04heap.c"
                    # 660 "04heap.c"
                    if(_if_conditional249=((struct sClass*)come_null_check(klass_163, "04heap.c", 660))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 660))->mPointerNum==1,                    _if_conditional249) {
                        # 680 "04heap.c"
                        # 661 "04heap.c"
                        if(_if_conditional250=c_value_162,                        _if_conditional250) {
                            # 662 "04heap.c"
                            type_name_187=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 662),__exception_result_var_b158=((char*)(right_value135=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b158));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value135;
                            __freed_obj__ = 0;
                            # 679 "04heap.c"
                            # 663 "04heap.c"
                            if(_if_conditional251=no_decrement,                            _if_conditional251) {
                                # 670 "04heap.c"
                                # 664 "04heap.c"
                                if(_if_conditional252=comma,                                _if_conditional252) {
                                    # 665 "04heap.c"
                                    (come_push_stackframe("04heap.c", 665),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_162,c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 668 "04heap.c"
                                    (come_push_stackframe("04heap.c", 668),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_162,c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                # 678 "04heap.c"
                                # 672 "04heap.c"
                                if(_if_conditional253=comma,                                _if_conditional253) {
                                    # 673 "04heap.c"
                                    (come_push_stackframe("04heap.c", 673),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 676 "04heap.c"
                                    (come_push_stackframe("04heap.c", 676),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_162,c_value_162,c_value_162,type_name_187,c_value_162,type_name_187,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            if(type_name_187 && !__freed_obj__) { type_name_187 = come_decrement_ref_count(type_name_187, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        # 700 "04heap.c"
                        # 682 "04heap.c"
                        if(_if_conditional254=c_value_162,                        _if_conditional254) {
                            # 699 "04heap.c"
                            # 683 "04heap.c"
                            if(_if_conditional255=no_decrement,                            _if_conditional255) {
                                # 690 "04heap.c"
                                # 684 "04heap.c"
                                if(_if_conditional256=comma,                                _if_conditional256) {
                                    # 685 "04heap.c"
                                    (come_push_stackframe("04heap.c", 685),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_162,c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 688 "04heap.c"
                                    (come_push_stackframe("04heap.c", 688),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_162,c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                            else {
                                # 698 "04heap.c"
                                # 692 "04heap.c"
                                if(_if_conditional257=comma,                                _if_conditional257) {
                                    # 693 "04heap.c"
                                    (come_push_stackframe("04heap.c", 693),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                                else {
                                    # 696 "04heap.c"
                                    (come_push_stackframe("04heap.c", 696),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_162,c_value_162,c_value_162,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                }
                            }
                        }
                    }
                }
            }
            if(c_value_162 && !__freed_obj__) { c_value_162 = come_decrement_ref_count(c_value_162, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_166 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_166, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_167 && !__freed_obj__) { fun_name2_167 = come_decrement_ref_count(fun_name2_167, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 706 "04heap.c"
    __dec_obj55=((struct sInfo*)come_null_check(info, "04heap.c", 706))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 706))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_128);
    if(__dec_obj55) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 707 "04heap.c"
    __dec_obj56=((struct sInfo*)come_null_check(info, "04heap.c", 707))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 707))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_127);
    if(__dec_obj56) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_127 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
struct tuple2$2charphsTypeph* result_146;
void* __exception_result_var_b113;
struct tuple2$2charphsTypeph* __result79__;
_Bool _if_conditional208;
struct tuple2$2charphsTypeph* __result80__;
struct tuple2$2charphsTypeph* result_147;
void* __exception_result_var_b114;
struct tuple2$2charphsTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_146, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_147, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 343 "./comelang2.h"
                        # 338 "./comelang2.h"
                        if(_if_conditional207=self==((void*)0),                        _if_conditional207) {
                            # 339 "./comelang2.h"
                            # 340 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b113=memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b113);
                            # 341 "./comelang2.h"
                            __result79__ = __result_obj__ = result_146;
                            return __result79__;
                        }
                        # 343 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->head;
                        # 349 "./comelang2.h"
                        # 345 "./comelang2.h"
                        if(_if_conditional208=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 345))->it,                        _if_conditional208) {
                            # 346 "./comelang2.h"
                            __result80__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                            return __result80__;
                        }
                        # 349 "./comelang2.h"
                        # 350 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b114=memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b114);
                        # 351 "./comelang2.h"
                        __result81__ = __result_obj__ = result_147;
                        return __result81__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 373 "./comelang2.h"
                        __result82__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
                        return __result82__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
struct tuple2$2charphsTypeph* result_149;
void* __exception_result_var_b117;
struct tuple2$2charphsTypeph* __result83__;
_Bool _if_conditional210;
struct tuple2$2charphsTypeph* __result84__;
struct tuple2$2charphsTypeph* result_150;
void* __exception_result_var_b118;
struct tuple2$2charphsTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_150, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 361 "./comelang2.h"
                        # 355 "./comelang2.h"
                        if(_if_conditional209=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),                        _if_conditional209) {
                            # 356 "./comelang2.h"
                            # 357 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b117=memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b117);
                            # 358 "./comelang2.h"
                            __result83__ = __result_obj__ = result_149;
                            return __result83__;
                        }
                        # 361 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
                        # 367 "./comelang2.h"
                        # 363 "./comelang2.h"
                        if(_if_conditional210=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 363))->it,                        _if_conditional210) {
                            # 364 "./comelang2.h"
                            __result84__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                            return __result84__;
                        }
                        # 367 "./comelang2.h"
                        # 368 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b118=memset(&result_150,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b118);
                        # 369 "./comelang2.h"
                        __result85__ = __result_obj__ = result_150;
                        return __result85__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_154;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_154, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_155, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 176 "./comelang2.h"
                        it_154=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 176))->head;
                        # 182 "./comelang2.h"
                        while(_while_condtional19=it_154!=((void*)0),                        _while_condtional19) {
                            # 178 "./comelang2.h"
                            prev_it_155=it_154;
                            # 179 "./comelang2.h"
                            it_154=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_154, "./comelang2.h", 179))->next;
                            # 180 "./comelang2.h"
                            if(prev_it_155 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                if(_if_conditional212=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                                _if_conditional212) {
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional213=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                                        _if_conditional213) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional214=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                                        _if_conditional214) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
struct sType* type2_188;
_Bool _if_conditional258;
char* result_189;
struct sType* result_type_190;
struct list$1CVALUEph* stack_saved_191;
struct list$1sRightValueObjectph* right_value_objects_192;
void* right_value137;
char* __exception_result_var_b159;
char* c_value_193;
struct sClass* klass_194;
char* class_name_195;
char* fun_name_196;
struct sFun* cloner_197;
char* fun_name2_198;
int __exception_result_var_b160;
_Bool _if_conditional259;
void* right_value138;
char* __exception_result_var_b161;
char* none_generics_name_199;
void* right_value139;
struct sType* __exception_result_var_b162;
struct sType* obj_type_200;
void* right_value140;
char* __exception_result_var_b163;
char* __dec_obj57;
void* right_value141;
char* __exception_result_var_b164;
char* fun_name3_201;
struct sGenericsFun* __exception_result_var_b167;
struct sGenericsFun* generics_fun_204;
_Bool _if_conditional264;
void* right_value143;
char* __exception_result_var_b168;
_Bool __exception_result_var_b169;
_Bool _if_conditional265;
void* right_value144;
void* right_value145;
struct sType* __exception_result_var_b170;
void* right_value146;
char* __exception_result_var_b171;
void* right_value147;
void* right_value150;
struct tuple2$2sTypephcharph* __result91__;
struct sFun* __exception_result_var_b172;
void* right_value151;
char* __exception_result_var_b173;
char* __dec_obj60;
int i_205;
_Bool _for_condtionalA11;
void* right_value152;
char* __exception_result_var_b174;
char* new_fun_name_206;
struct sFun* __exception_result_var_b175;
_Bool _if_conditional268;
void* right_value153;
char* __exception_result_var_b176;
char* __dec_obj61;
_Bool _if_conditional269;
struct sFun* __exception_result_var_b177;
_Bool _if_conditional270;
void* right_value154;
struct tuple2$2sFunpcharph* __exception_result_var_b178;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_207;
char* new_fun_name_208;
char* __dec_obj62;
_Bool _if_conditional271;
void* right_value155;
char* __exception_result_var_b179;
char* __dec_obj63;
struct sType* __dec_obj64;
void* right_value156;
struct sType* __exception_result_var_b180;
struct sType* __dec_obj65;
void* right_value157;
char* __exception_result_var_b181;
char* type_name_209;
void* right_value158;
char* __exception_result_var_b182;
char* __dec_obj66;
void* right_value159;
struct sType* __dec_obj67;
struct list$1sRightValueObjectph* __dec_obj68;
struct list$1CVALUEph* __dec_obj69;
void* right_value160;
void* right_value161;
struct tuple2$2sTypephcharph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&type2_188, 0, sizeof(struct sType*));
memset(&result_189, 0, sizeof(char*));
memset(&result_type_190, 0, sizeof(struct sType*));
memset(&stack_saved_191, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_192, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value137, 0, sizeof(void*));
memset(&c_value_193, 0, sizeof(char*));
memset(&klass_194, 0, sizeof(struct sClass*));
memset(&class_name_195, 0, sizeof(char*));
memset(&fun_name_196, 0, sizeof(char*));
memset(&cloner_197, 0, sizeof(struct sFun*));
memset(&fun_name2_198, 0, sizeof(char*));
memset(&right_value138, 0, sizeof(void*));
memset(&none_generics_name_199, 0, sizeof(char*));
memset(&right_value139, 0, sizeof(void*));
memset(&obj_type_200, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&fun_name3_201, 0, sizeof(char*));
memset(&generics_fun_204, 0, sizeof(struct sGenericsFun*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&i_205, 0, sizeof(int));
memset(&right_value152, 0, sizeof(void*));
memset(&new_fun_name_206, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&new_fun_name_208, 0, sizeof(char*));
memset(&fun_207, 0, sizeof(struct sFun*));
memset(&new_fun_name_208, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&type_name_209, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    # 712 "04heap.c"
    type2_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    # 717 "04heap.c"
    # 713 "04heap.c"
    if(_if_conditional258=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 713))->mNoSolvedGenericsType, "04heap.c", 713))->v1,    _if_conditional258) {
        # 714 "04heap.c"
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 714))->mNoSolvedGenericsType, "04heap.c", 714))->v1;
    }
    # 718 "04heap.c"
    result_189=((void*)0);
    # 718 "04heap.c"
    result_type_190=((void*)0);
    # 719 "04heap.c"
    stack_saved_191=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 719))->stack);
    # 720 "04heap.c"
    right_value_objects_192=((struct sInfo*)come_null_check(info, "04heap.c", 720))->right_value_objects;
    # 722 "04heap.c"
    c_value_193=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 722),__exception_result_var_b159=((char*)(right_value137=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b159));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = 0;
    # 724 "04heap.c"
    klass_194=((struct sType*)come_null_check(type, "04heap.c", 724))->mClass;
    # 726 "04heap.c"
    class_name_195=((struct sClass*)come_null_check(klass_194, "04heap.c", 726))->mName;
    # 728 "04heap.c"
    fun_name_196="clone";
    # 730 "04heap.c"
    cloner_197=((void*)0);
    # 731 "04heap.c"
    # 769 "04heap.c"
    # 732 "04heap.c"
    if(_if_conditional259=(come_push_stackframe("04heap.c", 732),__exception_result_var_b160=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 732))->mGenericsTypes, "04heap.c", 732))), come_pop_stackframe(), __exception_result_var_b160)>0,    _if_conditional259) {
        # 733 "04heap.c"
        none_generics_name_199=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 733),__exception_result_var_b161=((char*)(right_value138=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 733))->mClass, "04heap.c", 733))->mName))), come_pop_stackframe(), __exception_result_var_b161));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
        # 735 "04heap.c"
        obj_type_200=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 735),__exception_result_var_b162=((struct sType*)(right_value139=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 735))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b162));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value139;
        __freed_obj__ = 0;
        # 737 "04heap.c"
        __dec_obj57=fun_name2_198;
        fun_name2_198=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 737),__exception_result_var_b163=((char*)(right_value140=create_method_name(obj_type_200,(_Bool)0,fun_name_196,info))), come_pop_stackframe(), __exception_result_var_b163));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value140;
        __freed_obj__ = 0;
        # 738 "04heap.c"
        fun_name3_201=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 738),__exception_result_var_b164=((char*)(right_value141=xsprintf("%s_%s",none_generics_name_199,fun_name_196))), come_pop_stackframe(), __exception_result_var_b164));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value141;
        __freed_obj__ = 0;
        # 740 "04heap.c"
        generics_fun_204=(come_push_stackframe("04heap.c", 740),__exception_result_var_b167=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 740))->generics_funcs, "04heap.c", 740)),fun_name3_201,((void*)0)), come_pop_stackframe(), __exception_result_var_b167);
        # 748 "04heap.c"
        # 742 "04heap.c"
        if(_if_conditional264=generics_fun_204,        _if_conditional264) {
            # 746 "04heap.c"
            # 743 "04heap.c"
            if(_if_conditional265=!(come_push_stackframe("04heap.c", 743),__exception_result_var_b169=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 743),__exception_result_var_b168=((char*)(right_value143=__builtin_string(fun_name2_198))), come_pop_stackframe(), __exception_result_var_b168)),generics_fun_204,obj_type_200,info), come_pop_stackframe(), __exception_result_var_b169),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143),
            (right_value143 && right_value143 != __result_obj__ && !__freed_obj__) ? right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value143, 
            __freed_obj__ = 0, 
            _if_conditional265) {
                # 744 "04heap.c"
                __result91__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value150=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value147=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 744)))),(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 744),__exception_result_var_b170=((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 744)))),"void",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b170)),(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 744),__exception_result_var_b171=((char*)(right_value146=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b171)))));
                if(none_generics_name_199 && !__freed_obj__) { none_generics_name_199 = come_decrement_ref_count(none_generics_name_199, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_200 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_201 && !__freed_obj__) { fun_name3_201 = come_decrement_ref_count(fun_name3_201, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_189 && !__freed_obj__) { result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_193 && !__freed_obj__) { c_value_193 = come_decrement_ref_count(c_value_193, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_198 && !__freed_obj__) { fun_name2_198 = come_decrement_ref_count(fun_name2_198, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value144;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value145;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value146);
                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value146;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value147);
                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value147;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value150;
                __freed_obj__ = 0;
                return __result91__;
            }
        }
        # 748 "04heap.c"
        cloner_197=(come_push_stackframe("04heap.c", 748),__exception_result_var_b172=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 748))->funcs,fun_name2_198), come_pop_stackframe(), __exception_result_var_b172);
        if(none_generics_name_199 && !__freed_obj__) { none_generics_name_199 = come_decrement_ref_count(none_generics_name_199, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_200 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_201 && !__freed_obj__) { fun_name3_201 = come_decrement_ref_count(fun_name3_201, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 751 "04heap.c"
        __dec_obj60=fun_name2_198;
        fun_name2_198=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 751),__exception_result_var_b173=((char*)(right_value151=create_method_name(type,(_Bool)0,fun_name_196,info))), come_pop_stackframe(), __exception_result_var_b173));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = 0;
        # 753 "04heap.c"
        # 764 "04heap.c"
        for(
        i_205=128-1 ,        0;        _for_condtionalA11=        i_205>=1 ,        _for_condtionalA11;        i_205-- ,        0        ){
            # 755 "04heap.c"
            new_fun_name_206=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 755),__exception_result_var_b174=((char*)(right_value152=xsprintf("%s_v%d",fun_name2_198,i_205))), come_pop_stackframe(), __exception_result_var_b174));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value152;
            __freed_obj__ = 0;
            # 756 "04heap.c"
            cloner_197=(come_push_stackframe("04heap.c", 756),__exception_result_var_b175=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 756))->funcs,new_fun_name_206), come_pop_stackframe(), __exception_result_var_b175);
            # 762 "04heap.c"
            # 758 "04heap.c"
            if(_if_conditional268=cloner_197,            _if_conditional268) {
                # 759 "04heap.c"
                __dec_obj61=fun_name2_198;
                fun_name2_198=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 759),__exception_result_var_b176=((char*)(right_value153=__builtin_string(new_fun_name_206))), come_pop_stackframe(), __exception_result_var_b176));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153;
                __freed_obj__ = 0;
                # 760 "04heap.c"
                if(new_fun_name_206 && !__freed_obj__) { new_fun_name_206 = come_decrement_ref_count(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_206 && !__freed_obj__) { new_fun_name_206 = come_decrement_ref_count(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 767 "04heap.c"
        # 764 "04heap.c"
        if(_if_conditional269=cloner_197==((void*)0),        _if_conditional269) {
            # 765 "04heap.c"
            cloner_197=(come_push_stackframe("04heap.c", 765),__exception_result_var_b177=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 765))->funcs,fun_name2_198), come_pop_stackframe(), __exception_result_var_b177);
        }
    }
    # 778 "04heap.c"
    # 769 "04heap.c"
    if(_if_conditional270=cloner_197==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 769))->mClass, "04heap.c", 769))->mNumber,    _if_conditional270) {
        # 771 "04heap.c"
        multiple_assgin_var8=(come_push_stackframe("04heap.c", 771),__exception_result_var_b178=((struct tuple2$2sFunpcharph*)(right_value154=create_cloner_automatically(type,fun_name_196,info))), come_pop_stackframe(), __exception_result_var_b178);
        fun_207=multiple_assgin_var8->v1;
        new_fun_name_208=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = 0;
        # 773 "04heap.c"
        __dec_obj62=fun_name2_198;
        fun_name2_198=(char*)come_increment_ref_count(new_fun_name_208);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        # 774 "04heap.c"
        cloner_197=fun_207;
        if(new_fun_name_208 && !__freed_obj__) { new_fun_name_208 = come_decrement_ref_count(new_fun_name_208, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 790 "04heap.c"
    # 778 "04heap.c"
    if(_if_conditional271=cloner_197!=((void*)0),    _if_conditional271) {
        # 779 "04heap.c"
        __dec_obj63=result_189;
        result_189=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 779),__exception_result_var_b179=((char*)(right_value155=xsprintf("%s(%s)",fun_name2_198,c_value_193))), come_pop_stackframe(), __exception_result_var_b179));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        # 780 "04heap.c"
        __dec_obj64=result_type_190;
        result_type_190=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(cloner_197, "04heap.c", 780))->mResultType);
        if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 781 "04heap.c"
        __dec_obj65=result_type_190;
        result_type_190=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 781),__exception_result_var_b180=((struct sType*)(right_value156=solve_generics(result_type_190,type,info))), come_pop_stackframe(), __exception_result_var_b180));
        if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value156;
        __freed_obj__ = 0;
    }
    else {
        # 784 "04heap.c"
        ((struct sType*)come_null_check(type2_188, "04heap.c", 784))->mHeap=(_Bool)1;
        # 785 "04heap.c"
        type_name_209=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 785),__exception_result_var_b181=((char*)(right_value157=make_type_name_string(type2_188,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b181));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157;
        __freed_obj__ = 0;
        # 786 "04heap.c"
        __dec_obj66=result_189;
        result_189=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 786),__exception_result_var_b182=((char*)(right_value158=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_209,c_value_193,((struct sInfo*)come_null_check(info, "04heap.c", 786))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 786))->sline))), come_pop_stackframe(), __exception_result_var_b182));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value158;
        __freed_obj__ = 0;
        # 787 "04heap.c"
        __dec_obj67=result_type_190;
        result_type_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type))));
        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value159;
        __freed_obj__ = 0;
        if(type_name_209 && !__freed_obj__) { type_name_209 = come_decrement_ref_count(type_name_209, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 790 "04heap.c"
    __dec_obj68=((struct sInfo*)come_null_check(info, "04heap.c", 790))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 790))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_192);
    if(__dec_obj68) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 791 "04heap.c"
    __dec_obj69=((struct sInfo*)come_null_check(info, "04heap.c", 791))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 791))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_191);
    if(__dec_obj69) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 793 "04heap.c"
    __result92__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value161=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value160=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 793)))),(struct sType*)come_increment_ref_count(result_type_190),(char*)come_increment_ref_count(result_189))));
    if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_189 && !__freed_obj__) { result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_193 && !__freed_obj__) { c_value_193 = come_decrement_ref_count(c_value_193, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_198 && !__freed_obj__) { fun_name2_198 = come_decrement_ref_count(fun_name2_198, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value160;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value161;
    __freed_obj__ = 0;
    return __result92__;
    if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_189 && !__freed_obj__) { result_189 = come_decrement_ref_count(result_189, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_193 && !__freed_obj__) { c_value_193 = come_decrement_ref_count(c_value_193, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_198 && !__freed_obj__) { fun_name2_198 = come_decrement_ref_count(fun_name2_198, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b165;
unsigned int hash_202;
unsigned int it_203;
_Bool _while_condtional20;
_Bool _if_conditional260;
void* right_value142;
struct optional$2boolbool* __exception_result_var_b166;
_Bool _if_conditional261;
struct sGenericsFun* __result86__;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sGenericsFun* __result87__;
struct sGenericsFun* __result88__;
struct sGenericsFun* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_202, 0, sizeof(unsigned int));
memset(&it_203, 0, sizeof(unsigned int));
memset(&right_value142, 0, sizeof(void*));
            # 1265 "./comelang2.h"
            hash_202=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b165=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b165)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1265))->size;
            # 1266 "./comelang2.h"
            it_203=hash_202;
            # 1290 "./comelang2.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1288 "./comelang2.h"
                # 1269 "./comelang2.h"
                if(_if_conditional260=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_203],                _if_conditional260) {
                    # 1276 "./comelang2.h"
                    # 1271 "./comelang2.h"
                    if(_if_conditional261=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b166=((struct optional$2boolbool*)(right_value142=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_203], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b166)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142),
                    (right_value142 && right_value142 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value142, 
                    __freed_obj__ = 0, 
                    _if_conditional261) {
                        # 1273 "./comelang2.h"
                        __result86__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1273))->items[it_203];
                        return __result86__;
                    }
                    # 1276 "./comelang2.h"
                    it_203++;
                    # 1284 "./comelang2.h"
                    # 1278 "./comelang2.h"
                    if(_if_conditional262=it_203>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1278))->size,                    _if_conditional262) {
                        # 1279 "./comelang2.h"
                        it_203=0;
                    }
                    else {
                        # 1284 "./comelang2.h"
                        # 1281 "./comelang2.h"
                        if(_if_conditional263=it_203==hash_202,                        _if_conditional263) {
                            # 1282 "./comelang2.h"
                            __result87__ = __result_obj__ = default_value;
                            return __result87__;
                        }
                    }
                }
                else {
                    # 1286 "./comelang2.h"
                    __result88__ = __result_obj__ = default_value;
                    return __result88__;
                }
            }
            # 1290 "./comelang2.h"
            __result89__ = __result_obj__ = default_value;
            return __result89__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
struct sType* __dec_obj58;
void* right_value149;
char* __dec_obj59;
struct tuple2$2sTypephcharph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
                    # 1814 "./comelang2.h"
                    __dec_obj58=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1814))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1814))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(v1))));
                    if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value148;
                    __freed_obj__ = 0;
                    # 1815 "./comelang2.h"
                    __dec_obj59=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1815))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1815))->v2=(char*)come_increment_ref_count(((char*)(right_value149=string_clone(v2))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value149;
                    __freed_obj__ = 0;
                    # 1817 "./comelang2.h"
                    __result90__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    return __result90__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional266=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1!=((void*)0),                        _if_conditional266) {
                            # 0 "tuple2$2sTypephcharphp_finalize"
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        # 2 "tuple2$2sTypephcharphp_finalize"
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional267=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2!=((void*)0),                        _if_conditional267) {
                            # 1 "tuple2$2sTypephcharphp_finalize"
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
char* result_210;
struct list$1CVALUEph* stack_saved_211;
struct list$1sRightValueObjectph* right_value_objects_212;
struct sClass* klass_213;
char* class_name_214;
char* fun_name_215;
void* right_value162;
struct sType* type2_216;
struct sFun* cloner_217;
char* fun_name2_218;
int __exception_result_var_b183;
_Bool _if_conditional273;
void* right_value163;
char* __exception_result_var_b184;
char* none_generics_name_219;
void* right_value164;
struct sType* __exception_result_var_b185;
struct sType* obj_type_220;
void* right_value165;
char* __exception_result_var_b186;
char* __dec_obj70;
void* right_value166;
char* __exception_result_var_b187;
char* fun_name3_221;
struct sGenericsFun* __exception_result_var_b188;
struct sGenericsFun* generics_fun_222;
_Bool _if_conditional274;
void* right_value167;
char* __exception_result_var_b189;
_Bool __exception_result_var_b190;
_Bool _if_conditional275;
_Bool __result93__;
struct sFun* __exception_result_var_b191;
void* right_value168;
char* __exception_result_var_b192;
char* __dec_obj71;
int i_223;
_Bool _for_condtionalA12;
void* right_value169;
char* __exception_result_var_b193;
char* new_fun_name_224;
struct sFun* __exception_result_var_b194;
_Bool _if_conditional276;
void* right_value170;
char* __exception_result_var_b195;
char* __dec_obj72;
_Bool _if_conditional277;
struct sFun* __exception_result_var_b196;
_Bool _if_conditional278;
void* right_value171;
struct tuple2$2sFunpcharph* __exception_result_var_b197;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_225;
char* new_fun_name_226;
char* __dec_obj73;
struct list$1sRightValueObjectph* __dec_obj74;
struct list$1CVALUEph* __dec_obj75;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_210, 0, sizeof(char*));
memset(&stack_saved_211, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_212, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_213, 0, sizeof(struct sClass*));
memset(&class_name_214, 0, sizeof(char*));
memset(&fun_name_215, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&type2_216, 0, sizeof(struct sType*));
memset(&cloner_217, 0, sizeof(struct sFun*));
memset(&fun_name2_218, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&none_generics_name_219, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&obj_type_220, 0, sizeof(struct sType*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&fun_name3_221, 0, sizeof(char*));
memset(&generics_fun_222, 0, sizeof(struct sGenericsFun*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&i_223, 0, sizeof(int));
memset(&right_value169, 0, sizeof(void*));
memset(&new_fun_name_224, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&fun_225, 0, sizeof(struct sFun*));
memset(&new_fun_name_226, 0, sizeof(char*));
memset(&fun_225, 0, sizeof(struct sFun*));
memset(&new_fun_name_226, 0, sizeof(char*));
    # 801 "04heap.c"
    # 798 "04heap.c"
    if(_if_conditional272=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 798))->mNoSolvedGenericsType, "04heap.c", 798))->v1,    _if_conditional272) {
        # 799 "04heap.c"
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 799))->mNoSolvedGenericsType, "04heap.c", 799))->v1;
    }
    # 802 "04heap.c"
    result_210=((void*)0);
    # 802 "04heap.c"
    stack_saved_211=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 802))->stack);
    # 803 "04heap.c"
    right_value_objects_212=((struct sInfo*)come_null_check(info, "04heap.c", 803))->right_value_objects;
    # 805 "04heap.c"
    klass_213=((struct sType*)come_null_check(type, "04heap.c", 805))->mClass;
    # 807 "04heap.c"
    class_name_214=((struct sClass*)come_null_check(klass_213, "04heap.c", 807))->mName;
    # 809 "04heap.c"
    fun_name_215="equals";
    # 811 "04heap.c"
    type2_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    # 812 "04heap.c"
    ((struct sType*)come_null_check(type2_216, "04heap.c", 812))->mHeap=(_Bool)0;
    # 814 "04heap.c"
    cloner_217=((void*)0);
    # 815 "04heap.c"
    # 853 "04heap.c"
    # 816 "04heap.c"
    if(_if_conditional273=(come_push_stackframe("04heap.c", 816),__exception_result_var_b183=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 816))->mGenericsTypes, "04heap.c", 816))), come_pop_stackframe(), __exception_result_var_b183)>0,    _if_conditional273) {
        # 817 "04heap.c"
        none_generics_name_219=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 817),__exception_result_var_b184=((char*)(right_value163=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 817))->mClass, "04heap.c", 817))->mName))), come_pop_stackframe(), __exception_result_var_b184));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = 0;
        # 819 "04heap.c"
        obj_type_220=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 819),__exception_result_var_b185=((struct sType*)(right_value164=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 819))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b185));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value164;
        __freed_obj__ = 0;
        # 821 "04heap.c"
        __dec_obj70=fun_name2_218;
        fun_name2_218=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 821),__exception_result_var_b186=((char*)(right_value165=create_method_name(obj_type_220,(_Bool)0,fun_name_215,info))), come_pop_stackframe(), __exception_result_var_b186));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value165;
        __freed_obj__ = 0;
        # 822 "04heap.c"
        fun_name3_221=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 822),__exception_result_var_b187=((char*)(right_value166=xsprintf("%s_%s",none_generics_name_219,fun_name_215))), come_pop_stackframe(), __exception_result_var_b187));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value166;
        __freed_obj__ = 0;
        # 824 "04heap.c"
        generics_fun_222=(come_push_stackframe("04heap.c", 824),__exception_result_var_b188=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 824))->generics_funcs, "04heap.c", 824)),fun_name3_221,((void*)0)), come_pop_stackframe(), __exception_result_var_b188);
        # 832 "04heap.c"
        # 826 "04heap.c"
        if(_if_conditional274=generics_fun_222,        _if_conditional274) {
            # 830 "04heap.c"
            # 827 "04heap.c"
            if(_if_conditional275=!(come_push_stackframe("04heap.c", 827),__exception_result_var_b190=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 827),__exception_result_var_b189=((char*)(right_value167=__builtin_string(fun_name2_218))), come_pop_stackframe(), __exception_result_var_b189)),generics_fun_222,obj_type_220,info), come_pop_stackframe(), __exception_result_var_b190),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167),
            (right_value167 && right_value167 != __result_obj__ && !__freed_obj__) ? right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value167, 
            __freed_obj__ = 0, 
            _if_conditional275) {
                # 828 "04heap.c"
                __result93__ = (_Bool)0;
                if(none_generics_name_219 && !__freed_obj__) { none_generics_name_219 = come_decrement_ref_count(none_generics_name_219, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_221 && !__freed_obj__) { fun_name3_221 = come_decrement_ref_count(fun_name3_221, (void*)0, (void*)0, 0, 0, 0); }
                if(result_210 && !__freed_obj__) { result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_218 && !__freed_obj__) { fun_name2_218 = come_decrement_ref_count(fun_name2_218, (void*)0, (void*)0, 0, 0, 0); }
                return __result93__;
            }
        }
        # 832 "04heap.c"
        cloner_217=(come_push_stackframe("04heap.c", 832),__exception_result_var_b191=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 832))->funcs,fun_name2_218), come_pop_stackframe(), __exception_result_var_b191);
        if(none_generics_name_219 && !__freed_obj__) { none_generics_name_219 = come_decrement_ref_count(none_generics_name_219, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_221 && !__freed_obj__) { fun_name3_221 = come_decrement_ref_count(fun_name3_221, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 835 "04heap.c"
        __dec_obj71=fun_name2_218;
        fun_name2_218=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 835),__exception_result_var_b192=((char*)(right_value168=create_method_name(type,(_Bool)0,fun_name_215,info))), come_pop_stackframe(), __exception_result_var_b192));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        # 837 "04heap.c"
        # 848 "04heap.c"
        for(
        i_223=128-1 ,        0;        _for_condtionalA12=        i_223>=1 ,        _for_condtionalA12;        i_223-- ,        0        ){
            # 839 "04heap.c"
            new_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 839),__exception_result_var_b193=((char*)(right_value169=xsprintf("%s_v%d",fun_name2_218,i_223))), come_pop_stackframe(), __exception_result_var_b193));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value169;
            __freed_obj__ = 0;
            # 840 "04heap.c"
            cloner_217=(come_push_stackframe("04heap.c", 840),__exception_result_var_b194=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 840))->funcs,new_fun_name_224), come_pop_stackframe(), __exception_result_var_b194);
            # 846 "04heap.c"
            # 842 "04heap.c"
            if(_if_conditional276=cloner_217,            _if_conditional276) {
                # 843 "04heap.c"
                __dec_obj72=fun_name2_218;
                fun_name2_218=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 843),__exception_result_var_b195=((char*)(right_value170=__builtin_string(new_fun_name_224))), come_pop_stackframe(), __exception_result_var_b195));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170;
                __freed_obj__ = 0;
                # 844 "04heap.c"
                if(new_fun_name_224 && !__freed_obj__) { new_fun_name_224 = come_decrement_ref_count(new_fun_name_224, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_224 && !__freed_obj__) { new_fun_name_224 = come_decrement_ref_count(new_fun_name_224, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 851 "04heap.c"
        # 848 "04heap.c"
        if(_if_conditional277=cloner_217==((void*)0),        _if_conditional277) {
            # 849 "04heap.c"
            cloner_217=(come_push_stackframe("04heap.c", 849),__exception_result_var_b196=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 849))->funcs,fun_name2_218), come_pop_stackframe(), __exception_result_var_b196);
        }
    }
    # 861 "04heap.c"
    # 853 "04heap.c"
    if(_if_conditional278=cloner_217==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 853))->mClass, "04heap.c", 853))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 853))->mClass, "04heap.c", 853))->mNumber,    _if_conditional278) {
        # 855 "04heap.c"
        multiple_assgin_var9=(come_push_stackframe("04heap.c", 855),__exception_result_var_b197=((struct tuple2$2sFunpcharph*)(right_value171=create_equals_automatically(type,fun_name_215,info))), come_pop_stackframe(), __exception_result_var_b197);
        fun_225=multiple_assgin_var9->v1;
        new_fun_name_226=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
        # 857 "04heap.c"
        __dec_obj73=fun_name2_218;
        fun_name2_218=(char*)come_increment_ref_count(new_fun_name_226);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
        # 858 "04heap.c"
        cloner_217=fun_225;
        if(new_fun_name_226 && !__freed_obj__) { new_fun_name_226 = come_decrement_ref_count(new_fun_name_226, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 861 "04heap.c"
    __dec_obj74=((struct sInfo*)come_null_check(info, "04heap.c", 861))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 861))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_212);
    if(__dec_obj74) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 862 "04heap.c"
    __dec_obj75=((struct sInfo*)come_null_check(info, "04heap.c", 862))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 862))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_211);
    if(__dec_obj75) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 864 "04heap.c"
    __result94__ = (_Bool)1;
    if(result_210 && !__freed_obj__) { result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_218 && !__freed_obj__) { fun_name2_218 = come_decrement_ref_count(fun_name2_218, (void*)0, (void*)0, 0, 0, 0); }
    return __result94__;
    if(result_210 && !__freed_obj__) { result_210 = come_decrement_ref_count(result_210, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_211 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_218 && !__freed_obj__) { fun_name2_218 = come_decrement_ref_count(fun_name2_218, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
char* result_227;
struct list$1CVALUEph* stack_saved_228;
struct list$1sRightValueObjectph* right_value_objects_229;
struct sClass* klass_230;
char* class_name_231;
char* fun_name_232;
void* right_value172;
struct sType* type2_233;
struct sFun* cloner_234;
char* fun_name2_235;
int __exception_result_var_b198;
_Bool _if_conditional280;
void* right_value173;
char* __exception_result_var_b199;
char* none_generics_name_236;
void* right_value174;
struct sType* __exception_result_var_b200;
struct sType* obj_type_237;
void* right_value175;
char* __exception_result_var_b201;
char* __dec_obj76;
void* right_value176;
char* __exception_result_var_b202;
char* fun_name3_238;
struct sGenericsFun* __exception_result_var_b203;
struct sGenericsFun* generics_fun_239;
_Bool _if_conditional281;
void* right_value177;
char* __exception_result_var_b204;
_Bool __exception_result_var_b205;
_Bool _if_conditional282;
_Bool __result95__;
struct sFun* __exception_result_var_b206;
void* right_value178;
char* __exception_result_var_b207;
char* __dec_obj77;
int i_240;
_Bool _for_condtionalA13;
void* right_value179;
char* __exception_result_var_b208;
char* new_fun_name_241;
struct sFun* __exception_result_var_b209;
_Bool _if_conditional283;
void* right_value180;
char* __exception_result_var_b210;
char* __dec_obj78;
_Bool _if_conditional284;
struct sFun* __exception_result_var_b211;
_Bool _if_conditional285;
void* right_value181;
struct tuple2$2sFunpcharph* __exception_result_var_b212;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_242;
char* new_fun_name_243;
char* __dec_obj79;
struct list$1sRightValueObjectph* __dec_obj80;
struct list$1CVALUEph* __dec_obj81;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_227, 0, sizeof(char*));
memset(&stack_saved_228, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_229, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_230, 0, sizeof(struct sClass*));
memset(&class_name_231, 0, sizeof(char*));
memset(&fun_name_232, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&type2_233, 0, sizeof(struct sType*));
memset(&cloner_234, 0, sizeof(struct sFun*));
memset(&fun_name2_235, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&none_generics_name_236, 0, sizeof(char*));
memset(&right_value174, 0, sizeof(void*));
memset(&obj_type_237, 0, sizeof(struct sType*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&fun_name3_238, 0, sizeof(char*));
memset(&generics_fun_239, 0, sizeof(struct sGenericsFun*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&i_240, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&new_fun_name_241, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&new_fun_name_243, 0, sizeof(char*));
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&new_fun_name_243, 0, sizeof(char*));
    # 872 "04heap.c"
    # 869 "04heap.c"
    if(_if_conditional279=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 869))->mNoSolvedGenericsType, "04heap.c", 869))->v1,    _if_conditional279) {
        # 870 "04heap.c"
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 870))->mNoSolvedGenericsType, "04heap.c", 870))->v1;
    }
    # 873 "04heap.c"
    result_227=((void*)0);
    # 873 "04heap.c"
    stack_saved_228=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 873))->stack);
    # 874 "04heap.c"
    right_value_objects_229=((struct sInfo*)come_null_check(info, "04heap.c", 874))->right_value_objects;
    # 876 "04heap.c"
    klass_230=((struct sType*)come_null_check(type, "04heap.c", 876))->mClass;
    # 878 "04heap.c"
    class_name_231=((struct sClass*)come_null_check(klass_230, "04heap.c", 878))->mName;
    # 880 "04heap.c"
    fun_name_232="operator_equals";
    # 882 "04heap.c"
    type2_233=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    # 883 "04heap.c"
    ((struct sType*)come_null_check(type2_233, "04heap.c", 883))->mHeap=(_Bool)0;
    # 885 "04heap.c"
    cloner_234=((void*)0);
    # 886 "04heap.c"
    # 924 "04heap.c"
    # 887 "04heap.c"
    if(_if_conditional280=(come_push_stackframe("04heap.c", 887),__exception_result_var_b198=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 887))->mGenericsTypes, "04heap.c", 887))), come_pop_stackframe(), __exception_result_var_b198)>0,    _if_conditional280) {
        # 888 "04heap.c"
        none_generics_name_236=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 888),__exception_result_var_b199=((char*)(right_value173=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 888))->mClass, "04heap.c", 888))->mName))), come_pop_stackframe(), __exception_result_var_b199));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173;
        __freed_obj__ = 0;
        # 890 "04heap.c"
        obj_type_237=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 890),__exception_result_var_b200=((struct sType*)(right_value174=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 890))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b200));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value174;
        __freed_obj__ = 0;
        # 892 "04heap.c"
        __dec_obj76=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 892),__exception_result_var_b201=((char*)(right_value175=create_method_name(obj_type_237,(_Bool)0,fun_name_232,info))), come_pop_stackframe(), __exception_result_var_b201));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value175;
        __freed_obj__ = 0;
        # 893 "04heap.c"
        fun_name3_238=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 893),__exception_result_var_b202=((char*)(right_value176=xsprintf("%s_%s",none_generics_name_236,fun_name_232))), come_pop_stackframe(), __exception_result_var_b202));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value176;
        __freed_obj__ = 0;
        # 895 "04heap.c"
        generics_fun_239=(come_push_stackframe("04heap.c", 895),__exception_result_var_b203=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 895))->generics_funcs, "04heap.c", 895)),fun_name3_238,((void*)0)), come_pop_stackframe(), __exception_result_var_b203);
        # 903 "04heap.c"
        # 897 "04heap.c"
        if(_if_conditional281=generics_fun_239,        _if_conditional281) {
            # 901 "04heap.c"
            # 898 "04heap.c"
            if(_if_conditional282=!(come_push_stackframe("04heap.c", 898),__exception_result_var_b205=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 898),__exception_result_var_b204=((char*)(right_value177=__builtin_string(fun_name2_235))), come_pop_stackframe(), __exception_result_var_b204)),generics_fun_239,obj_type_237,info), come_pop_stackframe(), __exception_result_var_b205),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177),
            (right_value177 && right_value177 != __result_obj__ && !__freed_obj__) ? right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value177, 
            __freed_obj__ = 0, 
            _if_conditional282) {
                # 899 "04heap.c"
                __result95__ = (_Bool)0;
                if(none_generics_name_236 && !__freed_obj__) { none_generics_name_236 = come_decrement_ref_count(none_generics_name_236, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_237 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_237, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_238 && !__freed_obj__) { fun_name3_238 = come_decrement_ref_count(fun_name3_238, (void*)0, (void*)0, 0, 0, 0); }
                if(result_227 && !__freed_obj__) { result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_228 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_235 && !__freed_obj__) { fun_name2_235 = come_decrement_ref_count(fun_name2_235, (void*)0, (void*)0, 0, 0, 0); }
                return __result95__;
            }
        }
        # 903 "04heap.c"
        cloner_234=(come_push_stackframe("04heap.c", 903),__exception_result_var_b206=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 903))->funcs,fun_name2_235), come_pop_stackframe(), __exception_result_var_b206);
        if(none_generics_name_236 && !__freed_obj__) { none_generics_name_236 = come_decrement_ref_count(none_generics_name_236, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_237 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_237, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_238 && !__freed_obj__) { fun_name3_238 = come_decrement_ref_count(fun_name3_238, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 906 "04heap.c"
        __dec_obj77=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 906),__exception_result_var_b207=((char*)(right_value178=create_method_name(type,(_Bool)0,fun_name_232,info))), come_pop_stackframe(), __exception_result_var_b207));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = 0;
        # 908 "04heap.c"
        # 919 "04heap.c"
        for(
        i_240=128-1 ,        0;        _for_condtionalA13=        i_240>=1 ,        _for_condtionalA13;        i_240-- ,        0        ){
            # 910 "04heap.c"
            new_fun_name_241=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 910),__exception_result_var_b208=((char*)(right_value179=xsprintf("%s_v%d",fun_name2_235,i_240))), come_pop_stackframe(), __exception_result_var_b208));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value179;
            __freed_obj__ = 0;
            # 911 "04heap.c"
            cloner_234=(come_push_stackframe("04heap.c", 911),__exception_result_var_b209=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 911))->funcs,new_fun_name_241), come_pop_stackframe(), __exception_result_var_b209);
            # 917 "04heap.c"
            # 913 "04heap.c"
            if(_if_conditional283=cloner_234,            _if_conditional283) {
                # 914 "04heap.c"
                __dec_obj78=fun_name2_235;
                fun_name2_235=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 914),__exception_result_var_b210=((char*)(right_value180=__builtin_string(new_fun_name_241))), come_pop_stackframe(), __exception_result_var_b210));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = 0;
                # 915 "04heap.c"
                if(new_fun_name_241 && !__freed_obj__) { new_fun_name_241 = come_decrement_ref_count(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_241 && !__freed_obj__) { new_fun_name_241 = come_decrement_ref_count(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 922 "04heap.c"
        # 919 "04heap.c"
        if(_if_conditional284=cloner_234==((void*)0),        _if_conditional284) {
            # 920 "04heap.c"
            cloner_234=(come_push_stackframe("04heap.c", 920),__exception_result_var_b211=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 920))->funcs,fun_name2_235), come_pop_stackframe(), __exception_result_var_b211);
        }
    }
    # 932 "04heap.c"
    # 924 "04heap.c"
    if(_if_conditional285=cloner_234==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 924))->mClass, "04heap.c", 924))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 924))->mClass, "04heap.c", 924))->mNumber,    _if_conditional285) {
        # 926 "04heap.c"
        multiple_assgin_var10=(come_push_stackframe("04heap.c", 926),__exception_result_var_b212=((struct tuple2$2sFunpcharph*)(right_value181=create_operator_equals_automatically(type,fun_name_232,info))), come_pop_stackframe(), __exception_result_var_b212);
        fun_242=multiple_assgin_var10->v1;
        new_fun_name_243=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        # 928 "04heap.c"
        __dec_obj79=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(new_fun_name_243);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        # 929 "04heap.c"
        cloner_234=fun_242;
        if(new_fun_name_243 && !__freed_obj__) { new_fun_name_243 = come_decrement_ref_count(new_fun_name_243, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 932 "04heap.c"
    __dec_obj80=((struct sInfo*)come_null_check(info, "04heap.c", 932))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 932))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_229);
    if(__dec_obj80) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 933 "04heap.c"
    __dec_obj81=((struct sInfo*)come_null_check(info, "04heap.c", 933))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 933))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_228);
    if(__dec_obj81) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 935 "04heap.c"
    __result96__ = (_Bool)1;
    if(result_227 && !__freed_obj__) { result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_228 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_235 && !__freed_obj__) { fun_name2_235 = come_decrement_ref_count(fun_name2_235, (void*)0, (void*)0, 0, 0, 0); }
    return __result96__;
    if(result_227 && !__freed_obj__) { result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_228 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_233 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_235 && !__freed_obj__) { fun_name2_235 = come_decrement_ref_count(fun_name2_235, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional286;
char* result_244;
struct list$1CVALUEph* stack_saved_245;
struct list$1sRightValueObjectph* right_value_objects_246;
struct sClass* klass_247;
char* class_name_248;
char* fun_name_249;
void* right_value182;
struct sType* type2_250;
struct sFun* cloner_251;
char* fun_name2_252;
int __exception_result_var_b213;
_Bool _if_conditional287;
void* right_value183;
char* __exception_result_var_b214;
char* none_generics_name_253;
void* right_value184;
struct sType* __exception_result_var_b215;
struct sType* obj_type_254;
void* right_value185;
char* __exception_result_var_b216;
char* __dec_obj82;
void* right_value186;
char* __exception_result_var_b217;
char* fun_name3_255;
struct sGenericsFun* __exception_result_var_b218;
struct sGenericsFun* generics_fun_256;
_Bool _if_conditional288;
void* right_value187;
char* __exception_result_var_b219;
_Bool __exception_result_var_b220;
_Bool _if_conditional289;
_Bool __result97__;
struct sFun* __exception_result_var_b221;
void* right_value188;
char* __exception_result_var_b222;
char* __dec_obj83;
int i_257;
_Bool _for_condtionalA14;
void* right_value189;
char* __exception_result_var_b223;
char* new_fun_name_258;
struct sFun* __exception_result_var_b224;
_Bool _if_conditional290;
void* right_value190;
char* __exception_result_var_b225;
char* __dec_obj84;
_Bool _if_conditional291;
struct sFun* __exception_result_var_b226;
_Bool _if_conditional292;
void* right_value191;
struct tuple2$2sFunpcharph* __exception_result_var_b227;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_259;
char* new_fun_name_260;
char* __dec_obj85;
struct list$1sRightValueObjectph* __dec_obj86;
struct list$1CVALUEph* __dec_obj87;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_244, 0, sizeof(char*));
memset(&stack_saved_245, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_246, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_247, 0, sizeof(struct sClass*));
memset(&class_name_248, 0, sizeof(char*));
memset(&fun_name_249, 0, sizeof(char*));
memset(&right_value182, 0, sizeof(void*));
memset(&type2_250, 0, sizeof(struct sType*));
memset(&cloner_251, 0, sizeof(struct sFun*));
memset(&fun_name2_252, 0, sizeof(char*));
memset(&right_value183, 0, sizeof(void*));
memset(&none_generics_name_253, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&obj_type_254, 0, sizeof(struct sType*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&fun_name3_255, 0, sizeof(char*));
memset(&generics_fun_256, 0, sizeof(struct sGenericsFun*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&right_value189, 0, sizeof(void*));
memset(&new_fun_name_258, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&fun_259, 0, sizeof(struct sFun*));
memset(&new_fun_name_260, 0, sizeof(char*));
memset(&fun_259, 0, sizeof(struct sFun*));
memset(&new_fun_name_260, 0, sizeof(char*));
    # 943 "04heap.c"
    # 940 "04heap.c"
    if(_if_conditional286=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 940))->mNoSolvedGenericsType, "04heap.c", 940))->v1,    _if_conditional286) {
        # 941 "04heap.c"
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 941))->mNoSolvedGenericsType, "04heap.c", 941))->v1;
    }
    # 944 "04heap.c"
    result_244=((void*)0);
    # 944 "04heap.c"
    stack_saved_245=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 944))->stack);
    # 945 "04heap.c"
    right_value_objects_246=((struct sInfo*)come_null_check(info, "04heap.c", 945))->right_value_objects;
    # 947 "04heap.c"
    klass_247=((struct sType*)come_null_check(type, "04heap.c", 947))->mClass;
    # 949 "04heap.c"
    class_name_248=((struct sClass*)come_null_check(klass_247, "04heap.c", 949))->mName;
    # 951 "04heap.c"
    fun_name_249="operator_not_equals";
    # 953 "04heap.c"
    type2_250=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value182;
    __freed_obj__ = 0;
    # 954 "04heap.c"
    ((struct sType*)come_null_check(type2_250, "04heap.c", 954))->mHeap=(_Bool)0;
    # 956 "04heap.c"
    cloner_251=((void*)0);
    # 957 "04heap.c"
    # 995 "04heap.c"
    # 958 "04heap.c"
    if(_if_conditional287=(come_push_stackframe("04heap.c", 958),__exception_result_var_b213=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 958))->mGenericsTypes, "04heap.c", 958))), come_pop_stackframe(), __exception_result_var_b213)>0,    _if_conditional287) {
        # 959 "04heap.c"
        none_generics_name_253=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 959),__exception_result_var_b214=((char*)(right_value183=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 959))->mClass, "04heap.c", 959))->mName))), come_pop_stackframe(), __exception_result_var_b214));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183;
        __freed_obj__ = 0;
        # 961 "04heap.c"
        obj_type_254=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 961),__exception_result_var_b215=((struct sType*)(right_value184=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 961))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b215));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value184;
        __freed_obj__ = 0;
        # 963 "04heap.c"
        __dec_obj82=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 963),__exception_result_var_b216=((char*)(right_value185=create_method_name(obj_type_254,(_Bool)0,fun_name_249,info))), come_pop_stackframe(), __exception_result_var_b216));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value185;
        __freed_obj__ = 0;
        # 964 "04heap.c"
        fun_name3_255=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 964),__exception_result_var_b217=((char*)(right_value186=xsprintf("%s_%s",none_generics_name_253,fun_name_249))), come_pop_stackframe(), __exception_result_var_b217));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value186;
        __freed_obj__ = 0;
        # 966 "04heap.c"
        generics_fun_256=(come_push_stackframe("04heap.c", 966),__exception_result_var_b218=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 966))->generics_funcs, "04heap.c", 966)),fun_name3_255,((void*)0)), come_pop_stackframe(), __exception_result_var_b218);
        # 974 "04heap.c"
        # 968 "04heap.c"
        if(_if_conditional288=generics_fun_256,        _if_conditional288) {
            # 972 "04heap.c"
            # 969 "04heap.c"
            if(_if_conditional289=!(come_push_stackframe("04heap.c", 969),__exception_result_var_b220=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 969),__exception_result_var_b219=((char*)(right_value187=__builtin_string(fun_name2_252))), come_pop_stackframe(), __exception_result_var_b219)),generics_fun_256,obj_type_254,info), come_pop_stackframe(), __exception_result_var_b220),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187),
            (right_value187 && right_value187 != __result_obj__ && !__freed_obj__) ? right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value187, 
            __freed_obj__ = 0, 
            _if_conditional289) {
                # 970 "04heap.c"
                __result97__ = (_Bool)0;
                if(none_generics_name_253 && !__freed_obj__) { none_generics_name_253 = come_decrement_ref_count(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_254 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_255 && !__freed_obj__) { fun_name3_255 = come_decrement_ref_count(fun_name3_255, (void*)0, (void*)0, 0, 0, 0); }
                if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_245 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_250 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_252 && !__freed_obj__) { fun_name2_252 = come_decrement_ref_count(fun_name2_252, (void*)0, (void*)0, 0, 0, 0); }
                return __result97__;
            }
        }
        # 974 "04heap.c"
        cloner_251=(come_push_stackframe("04heap.c", 974),__exception_result_var_b221=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 974))->funcs,fun_name2_252), come_pop_stackframe(), __exception_result_var_b221);
        if(none_generics_name_253 && !__freed_obj__) { none_generics_name_253 = come_decrement_ref_count(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_254 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_254, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_255 && !__freed_obj__) { fun_name3_255 = come_decrement_ref_count(fun_name3_255, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 977 "04heap.c"
        __dec_obj83=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 977),__exception_result_var_b222=((char*)(right_value188=create_method_name(type,(_Bool)0,fun_name_249,info))), come_pop_stackframe(), __exception_result_var_b222));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
        # 979 "04heap.c"
        # 990 "04heap.c"
        for(
        i_257=128-1 ,        0;        _for_condtionalA14=        i_257>=1 ,        _for_condtionalA14;        i_257-- ,        0        ){
            # 981 "04heap.c"
            new_fun_name_258=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 981),__exception_result_var_b223=((char*)(right_value189=xsprintf("%s_v%d",fun_name2_252,i_257))), come_pop_stackframe(), __exception_result_var_b223));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value189;
            __freed_obj__ = 0;
            # 982 "04heap.c"
            cloner_251=(come_push_stackframe("04heap.c", 982),__exception_result_var_b224=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 982))->funcs,new_fun_name_258), come_pop_stackframe(), __exception_result_var_b224);
            # 988 "04heap.c"
            # 984 "04heap.c"
            if(_if_conditional290=cloner_251,            _if_conditional290) {
                # 985 "04heap.c"
                __dec_obj84=fun_name2_252;
                fun_name2_252=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 985),__exception_result_var_b225=((char*)(right_value190=__builtin_string(new_fun_name_258))), come_pop_stackframe(), __exception_result_var_b225));
                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value190;
                __freed_obj__ = 0;
                # 986 "04heap.c"
                if(new_fun_name_258 && !__freed_obj__) { new_fun_name_258 = come_decrement_ref_count(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_258 && !__freed_obj__) { new_fun_name_258 = come_decrement_ref_count(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 993 "04heap.c"
        # 990 "04heap.c"
        if(_if_conditional291=cloner_251==((void*)0),        _if_conditional291) {
            # 991 "04heap.c"
            cloner_251=(come_push_stackframe("04heap.c", 991),__exception_result_var_b226=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 991))->funcs,fun_name2_252), come_pop_stackframe(), __exception_result_var_b226);
        }
    }
    # 1003 "04heap.c"
    # 995 "04heap.c"
    if(_if_conditional292=cloner_251==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 995))->mClass, "04heap.c", 995))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 995))->mClass, "04heap.c", 995))->mNumber,    _if_conditional292) {
        # 997 "04heap.c"
        multiple_assgin_var11=(come_push_stackframe("04heap.c", 997),__exception_result_var_b227=((struct tuple2$2sFunpcharph*)(right_value191=create_operator_not_equals_automatically(type,fun_name_249,info))), come_pop_stackframe(), __exception_result_var_b227);
        fun_259=multiple_assgin_var11->v1;
        new_fun_name_260=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = 0;
        # 999 "04heap.c"
        __dec_obj85=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(new_fun_name_260);
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        # 1000 "04heap.c"
        cloner_251=fun_259;
        if(new_fun_name_260 && !__freed_obj__) { new_fun_name_260 = come_decrement_ref_count(new_fun_name_260, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 1003 "04heap.c"
    __dec_obj86=((struct sInfo*)come_null_check(info, "04heap.c", 1003))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 1003))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_246);
    if(__dec_obj86) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1004 "04heap.c"
    __dec_obj87=((struct sInfo*)come_null_check(info, "04heap.c", 1004))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 1004))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_245);
    if(__dec_obj87) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1006 "04heap.c"
    __result98__ = (_Bool)1;
    if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_245 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_250 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_252 && !__freed_obj__) { fun_name2_252 = come_decrement_ref_count(fun_name2_252, (void*)0, (void*)0, 0, 0, 0); }
    return __result98__;
    if(result_244 && !__freed_obj__) { result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_245 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_250 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_252 && !__freed_obj__) { fun_name2_252 = come_decrement_ref_count(fun_name2_252, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional293;
_Bool free_right_value_261;
struct list$1sRightValueObjectph* right_value_objects_262;
int n_263;
_Bool change_freed_object_264;
struct list$1sRightValueObjectph* o2_saved_265;
struct sRightValueObject* __exception_result_var_b228;
struct sRightValueObject* it_266;
_Bool __exception_result_var_b229;
_Bool _for_condtionalA15;
struct sRightValueObject* __exception_result_var_b230;
_Bool _if_conditional294;
_Bool __exception_result_var_b231;
_Bool _if_conditional295;
void* right_value192;
struct sType* type_267;
void* right_value193;
struct sType* __exception_result_var_b232;
struct sType* __dec_obj88;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_261, 0, sizeof(_Bool));
memset(&right_value_objects_262, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_263, 0, sizeof(int));
memset(&change_freed_object_264, 0, sizeof(_Bool));
memset(&o2_saved_265, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_266, 0, sizeof(struct sRightValueObject*));
memset(&right_value192, 0, sizeof(void*));
memset(&type_267, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
    # 1014 "04heap.c"
    # 1011 "04heap.c"
    if(_if_conditional293=gComeGC,    _if_conditional293) {
        # 1012 "04heap.c"
        return;
    }
    # 1014 "04heap.c"
    free_right_value_261=(_Bool)0;
    # 1015 "04heap.c"
    right_value_objects_262=((struct sInfo*)come_null_check(info, "04heap.c", 1015))->right_value_objects;
    # 1017 "04heap.c"
    n_263=0;
    # 1018 "04heap.c"
    change_freed_object_264=(_Bool)0;
    # 1056 "04heap.c"
    for(
    o2_saved_265=(right_value_objects_262),it_266=(come_push_stackframe("04heap.c", 1019),__exception_result_var_b228=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_265), "04heap.c", 1019))), come_pop_stackframe(), __exception_result_var_b228) ,    0;    _for_condtionalA15=    !(come_push_stackframe("04heap.c", 1019),__exception_result_var_b229=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_265), "04heap.c", 1019))), come_pop_stackframe(), __exception_result_var_b229) ,    _for_condtionalA15;    it_266=(come_push_stackframe("04heap.c", 1019),__exception_result_var_b230=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_265), "04heap.c", 1019))), come_pop_stackframe(), __exception_result_var_b230) ,    0    ){
        # 1052 "04heap.c"
        # 1020 "04heap.c"
        if(_if_conditional294=it_266&&!((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1020))->mFreed,        _if_conditional294) {
            # 1050 "04heap.c"
            # 1021 "04heap.c"
            if(_if_conditional295=(come_push_stackframe("04heap.c", 1021),__exception_result_var_b231=string_operator_equals(((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1021))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1021))->come_fun, "04heap.c", 1021))->mName), come_pop_stackframe(), __exception_result_var_b231)&&((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1021))->mBlockLevel==((struct sInfo*)come_null_check(info, "04heap.c", 1021))->block_level,            _if_conditional295) {
                # 1022 "04heap.c"
                change_freed_object_264=(_Bool)1;
                # 1023 "04heap.c"
                type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1023))->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value192;
                __freed_obj__ = 0;
                # 1025 "04heap.c"
                __dec_obj88=type_267;
                type_267=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 1025),__exception_result_var_b232=((struct sType*)(right_value193=solve_type(type_267,((struct sInfo*)come_null_check(info, "04heap.c", 1025))->generics_type,((struct sInfo*)come_null_check(info, "04heap.c", 1025))->method_generics_types,info))), come_pop_stackframe(), __exception_result_var_b232));
                if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value193;
                __freed_obj__ = 0;
                # 1036 "04heap.c"
                # 1028 "04heap.c"
                if(_if_conditional296=comma,                _if_conditional296) {
                    # 1029 "04heap.c"
                    (come_push_stackframe("04heap.c", 1029),add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_263,((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1029))->mVarName),come_pop_stackframe());
                }
                else {
                    # 1032 "04heap.c"
                    (come_push_stackframe("04heap.c", 1032),add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_263,((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1032))->mVarName),come_pop_stackframe());
                }
                # 1036 "04heap.c"
                (come_push_stackframe("04heap.c", 1036),free_object(type_267,((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1036))->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0),come_pop_stackframe());
                # 1047 "04heap.c"
                # 1039 "04heap.c"
                if(_if_conditional297=comma,                _if_conditional297) {
                    # 1040 "04heap.c"
                    (come_push_stackframe("04heap.c", 1040),add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_263,((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1040))->mVarName),come_pop_stackframe());
                }
                else {
                    # 1043 "04heap.c"
                    (come_push_stackframe("04heap.c", 1043),add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_263,((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1043))->mVarName),come_pop_stackframe());
                }
                # 1047 "04heap.c"
                ((struct sRightValueObject*)come_null_check(it_266, "04heap.c", 1047))->mFreed=(_Bool)1;
                # 1048 "04heap.c"
                free_right_value_261=(_Bool)1;
                if(type_267 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_267, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        # 1052 "04heap.c"
        n_263++;
    }
    # 1065 "04heap.c"
    # 1056 "04heap.c"
    if(_if_conditional298=change_freed_object_264,    _if_conditional298) {
        # 1063 "04heap.c"
        # 1057 "04heap.c"
        if(_if_conditional299=comma,        _if_conditional299) {
            # 1058 "04heap.c"
            (come_push_stackframe("04heap.c", 1058),add_come_code(info,"__freed_obj__ = 0, \n"),come_pop_stackframe());
        }
        else {
            # 1061 "04heap.c"
            (come_push_stackframe("04heap.c", 1061),add_come_code(info,"__freed_obj__ = 0;\n"),come_pop_stackframe());
        }
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
_Bool __result99__;
struct list$1sRightValueObjectph* o2_saved_268;
struct sRightValueObject* __exception_result_var_b233;
struct sRightValueObject* it_269;
_Bool __exception_result_var_b234;
_Bool _for_condtionalA16;
struct sRightValueObject* __exception_result_var_b235;
_Bool _if_conditional301;
_Bool __result100__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_268, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_269, 0, sizeof(struct sRightValueObject*));
    # 1072 "04heap.c"
    # 1069 "04heap.c"
    if(_if_conditional300=gComeGC,    _if_conditional300) {
        # 1070 "04heap.c"
        __result99__ = (_Bool)0;
        return __result99__;
    }
    # 1078 "04heap.c"
    for(
    o2_saved_268=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 1072))->right_value_objects)),it_269=(come_push_stackframe("04heap.c", 1072),__exception_result_var_b233=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_268), "04heap.c", 1072))), come_pop_stackframe(), __exception_result_var_b233) ,    0;    _for_condtionalA16=    !(come_push_stackframe("04heap.c", 1072),__exception_result_var_b234=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_268), "04heap.c", 1072))), come_pop_stackframe(), __exception_result_var_b234) ,    _for_condtionalA16;    it_269=(come_push_stackframe("04heap.c", 1072),__exception_result_var_b235=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_268), "04heap.c", 1072))), come_pop_stackframe(), __exception_result_var_b235) ,    0    ){
        # 1076 "04heap.c"
        # 1073 "04heap.c"
        if(_if_conditional301=((struct sRightValueObject*)come_null_check(it_269, "04heap.c", 1073))->mID==right_value_num,        _if_conditional301) {
            # 1074 "04heap.c"
            __result100__ = (_Bool)1;
            if(o2_saved_268 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_268, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result100__;
        }
    }
    if(o2_saved_268 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_268, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1078 "04heap.c"
    __result101__ = (_Bool)0;
    return __result101__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_270;
_Bool _while_condtional21;
struct sVar* __exception_result_var_b239;
struct sVar* var__274;
_Bool _if_conditional306;
struct sVar* __result107__;
struct sVar* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_270, 0, sizeof(struct sVarTable*));
memset(&var__274, 0, sizeof(struct sVar*));
    # 1084 "04heap.c"
    it_270=table;
    # 1096 "04heap.c"
    while(_while_condtional21=it_270,    _while_condtional21) {
        # 1087 "04heap.c"
        var__274=(come_push_stackframe("04heap.c", 1087),__exception_result_var_b239=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(it_270, "04heap.c", 1087))->mVars,name), come_pop_stackframe(), __exception_result_var_b239);
        # 1093 "04heap.c"
        # 1089 "04heap.c"
        if(_if_conditional306=var__274,        _if_conditional306) {
            # 1090 "04heap.c"
            __result107__ = __result_obj__ = var__274;
            return __result107__;
        }
        # 1093 "04heap.c"
        it_270=((struct sVarTable*)come_null_check(it_270, "04heap.c", 1093))->mParent;
    }
    # 1096 "04heap.c"
    __result108__ = __result_obj__ = ((void*)0);
    return __result108__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_271;
void* __exception_result_var_b236;
unsigned int __exception_result_var_b237;
unsigned int hash_272;
unsigned int it_273;
_Bool _while_condtional22;
_Bool _if_conditional302;
void* right_value194;
struct optional$2boolbool* __exception_result_var_b238;
_Bool _if_conditional303;
struct sVar* __result102__;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct sVar* __result103__;
struct sVar* __result104__;
void* right_value195;
void* right_value196;
struct sVar* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_271, 0, sizeof(struct sVar*));
memset(&hash_272, 0, sizeof(unsigned int));
memset(&it_273, 0, sizeof(unsigned int));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
            # 1591 "./comelang2.h"
            # 1592 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b236=memset(&default_value_271,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b236);
            # 1594 "./comelang2.h"
            hash_272=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b237=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b237)%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1594))->size;
            # 1595 "./comelang2.h"
            it_273=hash_272;
            # 1619 "./comelang2.h"
            while(_while_condtional22=(_Bool)1,            _while_condtional22) {
                # 1617 "./comelang2.h"
                # 1598 "./comelang2.h"
                if(_if_conditional302=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_273],                _if_conditional302) {
                    # 1605 "./comelang2.h"
                    # 1600 "./comelang2.h"
                    if(_if_conditional303=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b238=((struct optional$2boolbool*)(right_value194=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_273], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b238)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194),
                    (right_value194 && right_value194 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value194, 
                    __freed_obj__ = 0, 
                    _if_conditional303) {
                        # 1602 "./comelang2.h"
                        __result102__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1602))->items[it_273];
                        return __result102__;
                    }
                    # 1605 "./comelang2.h"
                    it_273++;
                    # 1613 "./comelang2.h"
                    # 1607 "./comelang2.h"
                    if(_if_conditional304=it_273>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->size,                    _if_conditional304) {
                        # 1608 "./comelang2.h"
                        it_273=0;
                    }
                    else {
                        # 1613 "./comelang2.h"
                        # 1610 "./comelang2.h"
                        if(_if_conditional305=it_273==hash_272,                        _if_conditional305) {
                            # 1611 "./comelang2.h"
                            __result103__ = __result_obj__ = default_value_271;
                            return __result103__;
                        }
                    }
                }
                else {
                    # 1615 "./comelang2.h"
                    __result104__ = __result_obj__ = default_value_271;
                    return __result104__;
                }
            }
            # 1619 "./comelang2.h"
            __result106__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sVarpbool*)(right_value196=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value195=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1619))),default_value_271,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value195;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value196;
            __freed_obj__ = 0;
            return __result106__;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 40 "./comelang2.h"
                ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                # 41 "./comelang2.h"
                ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                # 43 "./comelang2.h"
                __result105__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result105__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional307;
struct map$2charphsVarph* o2_saved_275;
char* __exception_result_var_b242;
char* it_278;
_Bool __exception_result_var_b243;
_Bool _for_condtionalA17;
char* __exception_result_var_b246;
struct sVar* __exception_result_var_b247;
struct sVar* p_281;
struct sType* type_282;
struct sClass* klass_283;
_Bool __exception_result_var_b248;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value197;
char* __exception_result_var_b249;
char* c_value_284;
void* right_value198;
struct sType* type2_285;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_275, 0, sizeof(struct map$2charphsVarph*));
memset(&it_278, 0, sizeof(char*));
memset(&p_281, 0, sizeof(struct sVar*));
memset(&type_282, 0, sizeof(struct sType*));
memset(&klass_283, 0, sizeof(struct sClass*));
memset(&right_value197, 0, sizeof(void*));
memset(&c_value_284, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&type2_285, 0, sizeof(struct sType*));
    # 1104 "04heap.c"
    # 1101 "04heap.c"
    if(_if_conditional307=gComeGC,    _if_conditional307) {
        # 1102 "04heap.c"
        return;
    }
    # 1128 "04heap.c"
    for(
    o2_saved_275=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(table, "04heap.c", 1104))->mVars)),it_278=(come_push_stackframe("04heap.c", 1104),__exception_result_var_b242=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_275), "04heap.c", 1104))), come_pop_stackframe(), __exception_result_var_b242) ,    0;    _for_condtionalA17=    !(come_push_stackframe("04heap.c", 1104),__exception_result_var_b243=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_275), "04heap.c", 1104))), come_pop_stackframe(), __exception_result_var_b243) ,    _for_condtionalA17;    it_278=(come_push_stackframe("04heap.c", 1104),__exception_result_var_b246=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_275), "04heap.c", 1104))), come_pop_stackframe(), __exception_result_var_b246) ,    0    ){
        # 1105 "04heap.c"
        p_281=(come_push_stackframe("04heap.c", 1105),__exception_result_var_b247=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(table, "04heap.c", 1105))->mVars,it_278), come_pop_stackframe(), __exception_result_var_b247);
        # 1106 "04heap.c"
        type_282=((struct sVar*)come_null_check(p_281, "04heap.c", 1106))->mType;
        # 1107 "04heap.c"
        klass_283=((struct sType*)come_null_check(type_282, "04heap.c", 1107))->mClass;
        # 1127 "04heap.c"
        # 1109 "04heap.c"
        if(_if_conditional312=ret_value!=((void*)0)&&((struct sVar*)come_null_check(p_281, "04heap.c", 1109))->mCValueName!=((void*)0)&&(come_push_stackframe("04heap.c", 1109),__exception_result_var_b248=string_operator_equals(((struct sVar*)come_null_check(p_281, "04heap.c", 1109))->mCValueName,((struct sVar*)come_null_check(ret_value, "04heap.c", 1109))->mCValueName), come_pop_stackframe(), __exception_result_var_b248)&&((struct sType*)come_null_check(type_282, "04heap.c", 1109))->mHeap,        _if_conditional312) {
            # 1111 "04heap.c"
            (come_push_stackframe("04heap.c", 1111),free_object(((struct sVar*)come_null_check(p_281, "04heap.c", 1111))->mType,((struct sVar*)come_null_check(p_281, "04heap.c", 1111))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0),come_pop_stackframe());
        }
        else {
            # 1127 "04heap.c"
            # 1113 "04heap.c"
            if(_if_conditional313=((struct sType*)come_null_check(type_282, "04heap.c", 1113))->mHeap&&((struct sVar*)come_null_check(p_281, "04heap.c", 1113))->mCValueName,            _if_conditional313) {
                # 1120 "04heap.c"
                # 1114 "04heap.c"
                if(_if_conditional314=((struct sType*)come_null_check(type_282, "04heap.c", 1114))->mFunctionParam,                _if_conditional314) {
                    # 1115 "04heap.c"
                    (come_push_stackframe("04heap.c", 1115),free_object(((struct sVar*)come_null_check(p_281, "04heap.c", 1115))->mType,((struct sVar*)come_null_check(p_281, "04heap.c", 1115))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                }
                else {
                    # 1118 "04heap.c"
                    (come_push_stackframe("04heap.c", 1118),free_object(((struct sVar*)come_null_check(p_281, "04heap.c", 1118))->mType,((struct sVar*)come_null_check(p_281, "04heap.c", 1118))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                }
            }
            else {
                # 1127 "04heap.c"
                # 1121 "04heap.c"
                if(_if_conditional315=((struct sClass*)come_null_check(klass_283, "04heap.c", 1121))->mStruct&&((struct sVar*)come_null_check(p_281, "04heap.c", 1121))->mCValueName&&((struct sType*)come_null_check(type_282, "04heap.c", 1121))->mAllocaValue&&!((struct sType*)come_null_check(type_282, "04heap.c", 1121))->mNoCallingDestructor,                _if_conditional315) {
                    # 1122 "04heap.c"
                    c_value_284=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1122),__exception_result_var_b249=((char*)(right_value197=xsprintf("(&%s)",((struct sVar*)come_null_check(p_281, "04heap.c", 1122))->mCValueName))), come_pop_stackframe(), __exception_result_var_b249));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    # 1123 "04heap.c"
                    type2_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type_282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value198;
                    __freed_obj__ = 0;
                    # 1124 "04heap.c"
                    ((struct sType*)come_null_check(type2_285, "04heap.c", 1124))->mPointerNum++;
                    # 1125 "04heap.c"
                    (come_push_stackframe("04heap.c", 1125),free_object(type2_285,c_value_284,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                    if(c_value_284 && !__freed_obj__) { c_value_284 = come_decrement_ref_count(c_value_284, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_285 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_285, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
    }
    if(o2_saved_275 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_275, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional308;
char* result_276;
void* __exception_result_var_b240;
char* __result109__;
_Bool _if_conditional309;
char* __result110__;
char* result_277;
void* __exception_result_var_b241;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_276, 0, sizeof(char*));
memset(&result_277, 0, sizeof(char*));
        # 1343 "./comelang2.h"
        # 1338 "./comelang2.h"
        if(_if_conditional308=self==((void*)0),        _if_conditional308) {
            # 1339 "./comelang2.h"
            # 1340 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b240=memset(&result_276,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b240);
            # 1341 "./comelang2.h"
            __result109__ = __result_obj__ = result_276;
            return __result109__;
        }
        # 1343 "./comelang2.h"
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
        # 1349 "./comelang2.h"
        # 1345 "./comelang2.h"
        if(_if_conditional309=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,        _if_conditional309) {
            # 1346 "./comelang2.h"
            __result110__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
            return __result110__;
        }
        # 1349 "./comelang2.h"
        # 1350 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b241=memset(&result_277,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b241);
        # 1351 "./comelang2.h"
        __result111__ = __result_obj__ = result_277;
        return __result111__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1372 "./comelang2.h"
        __result112__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
        return __result112__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
char* result_279;
void* __exception_result_var_b244;
char* __result113__;
_Bool _if_conditional311;
char* __result114__;
char* result_280;
void* __exception_result_var_b245;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_279, 0, sizeof(char*));
memset(&result_280, 0, sizeof(char*));
        # 1360 "./comelang2.h"
        # 1355 "./comelang2.h"
        if(_if_conditional310=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),        _if_conditional310) {
            # 1356 "./comelang2.h"
            # 1357 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b244=memset(&result_279,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b244);
            # 1358 "./comelang2.h"
            __result113__ = __result_obj__ = result_279;
            return __result113__;
        }
        # 1360 "./comelang2.h"
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
        # 1366 "./comelang2.h"
        # 1362 "./comelang2.h"
        if(_if_conditional311=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,        _if_conditional311) {
            # 1363 "./comelang2.h"
            __result114__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
            return __result114__;
        }
        # 1366 "./comelang2.h"
        # 1367 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b245=memset(&result_280,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b245);
        # 1368 "./comelang2.h"
        __result115__ = __result_obj__ = result_280;
        return __result115__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_286;
_Bool _for_condtionalA18;
_Bool _if_conditional316;
_Bool _if_conditional317;
int i_287;
_Bool _for_condtionalA19;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_286, 0, sizeof(int));
memset(&i_287, 0, sizeof(int));
        # 1179 "./comelang2.h"
        for(
        i_286=0 ,        0;        _for_condtionalA18=        i_286<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,        _for_condtionalA18;        i_286++ ,        0        ){
            # 1178 "./comelang2.h"
            # 1173 "./comelang2.h"
            if(_if_conditional316=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1173))->item_existance[i_286],            _if_conditional316) {
                # 1177 "./comelang2.h"
                # 1174 "./comelang2.h"
                if(_if_conditional317=1,                _if_conditional317) {
                    # 1175 "./comelang2.h"
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1175))->items[i_286] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1175))->items[i_286], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        # 1179 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 1179),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1179))->items),come_pop_stackframe());
        # 1188 "./comelang2.h"
        for(
        i_287=0 ,        0;        _for_condtionalA19=        i_287<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,        _for_condtionalA19;        i_287++ ,        0        ){
            # 1187 "./comelang2.h"
            # 1182 "./comelang2.h"
            if(_if_conditional322=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->item_existance[i_287],            _if_conditional322) {
                # 1186 "./comelang2.h"
                # 1183 "./comelang2.h"
                if(_if_conditional323=1,                _if_conditional323) {
                    # 1184 "./comelang2.h"
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_287] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_287] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_287], (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        # 1188 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 1188),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1188))->keys),come_pop_stackframe());
        # 1190 "./comelang2.h"
        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 1192 "./comelang2.h"
        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "sVar_finalize"
                        # 0 "sVar_finalize"
                        if(_if_conditional318=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName!=((void*)0),                        _if_conditional318) {
                            # 0 "sVar_finalize"
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "sVar_finalize"
                        # 1 "sVar_finalize"
                        if(_if_conditional319=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName!=((void*)0),                        _if_conditional319) {
                            # 1 "sVar_finalize"
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 3 "sVar_finalize"
                        # 2 "sVar_finalize"
                        if(_if_conditional320=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType!=((void*)0),                        _if_conditional320) {
                            # 2 "sVar_finalize"
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        # 4 "sVar_finalize"
                        # 3 "sVar_finalize"
                        if(_if_conditional321=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName!=((void*)0),                        _if_conditional321) {
                            # 3 "sVar_finalize"
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_288;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_288, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_289, 0, sizeof(struct list_item$1charp*));
            # 176 "./comelang2.h"
            it_288=((struct list$1charp*)come_null_check(self, "./comelang2.h", 176))->head;
            # 182 "./comelang2.h"
            while(_while_condtional23=it_288!=((void*)0),            _while_condtional23) {
                # 178 "./comelang2.h"
                prev_it_289=it_288;
                # 179 "./comelang2.h"
                it_288=((struct list_item$1charp*)come_null_check(it_288, "./comelang2.h", 179))->next;
                # 180 "./comelang2.h"
                if(prev_it_289 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_289, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
struct sVarTable* it_290;
_Bool _if_conditional325;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_290, 0, sizeof(struct sVarTable*));
    # 1135 "04heap.c"
    # 1132 "04heap.c"
    if(_if_conditional324=gComeGC,    _if_conditional324) {
        # 1133 "04heap.c"
        return;
    }
    # 1135 "04heap.c"
    it_290=((struct sInfo*)come_null_check(info, "04heap.c", 1135))->lv_table;
    # 1148 "04heap.c"
    # 1137 "04heap.c"
    if(_if_conditional325=it_290==((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1137))->come_fun, "04heap.c", 1137))->mBlock, "04heap.c", 1137))->mVarTable,    _if_conditional325) {
        # 1138 "04heap.c"
        (come_push_stackframe("04heap.c", 1138),free_objects(it_290,ret_value,info),come_pop_stackframe());
    }
    else {
        # 1146 "04heap.c"
        while(_while_condtional24=it_290!=((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1141))->come_fun, "04heap.c", 1141))->mBlock, "04heap.c", 1141))->mVarTable,        _while_condtional24) {
            # 1142 "04heap.c"
            (come_push_stackframe("04heap.c", 1142),free_objects(it_290,ret_value,info),come_pop_stackframe());
            # 1144 "04heap.c"
            it_290=((struct sVarTable*)come_null_check(it_290, "04heap.c", 1144))->mParent;
        }
        # 1146 "04heap.c"
        (come_push_stackframe("04heap.c", 1146),free_objects(it_290,ret_value,info),come_pop_stackframe());
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional326;
struct sVar* ret_value_291;
struct sVarTable* current_loop_vtable_292;
_Bool _if_conditional327;
struct sVarTable* it_293;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_291, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_292, 0, sizeof(struct sVarTable*));
memset(&it_293, 0, sizeof(struct sVarTable*));
    # 1155 "04heap.c"
    # 1152 "04heap.c"
    if(_if_conditional326=gComeGC,    _if_conditional326) {
        # 1153 "04heap.c"
        return;
    }
    # 1155 "04heap.c"
    ret_value_291=((void*)0);
    # 1157 "04heap.c"
    current_loop_vtable_292=((struct sInfo*)come_null_check(info, "04heap.c", 1157))->current_loop_vtable;
    # 1168 "04heap.c"
    # 1159 "04heap.c"
    if(_if_conditional327=current_loop_vtable_292!=((void*)0),    _if_conditional327) {
        # 1160 "04heap.c"
        it_293=((struct sInfo*)come_null_check(info, "04heap.c", 1160))->lv_table;
        # 1166 "04heap.c"
        while(_while_condtional25=it_293!=current_loop_vtable_292,        _while_condtional25) {
            # 1162 "04heap.c"
            (come_push_stackframe("04heap.c", 1162),free_objects(it_293,ret_value_291,info),come_pop_stackframe());
            # 1164 "04heap.c"
            it_293=((struct sVarTable*)come_null_check(it_293, "04heap.c", 1164))->mParent;
        }
        # 1166 "04heap.c"
        (come_push_stackframe("04heap.c", 1166),free_objects(it_293,ret_value_291,info),come_pop_stackframe());
    }
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b250;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
char* __result116__;
_Bool _if_conditional330;
static int n_294=0;
void* right_value203;
char* __exception_result_var_b251;
char* var_name_295;
void* right_value204;
char* __exception_result_var_b252;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
char* __result117__;
void* right_value211;
char* __exception_result_var_b253;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&var_name_295, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
    # 1186 "04heap.c"
    # 1172 "04heap.c"
    if(_if_conditional328=(come_push_stackframe("04heap.c", 1172),__exception_result_var_b250=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1172))->mClass, "04heap.c", 1172))->mName,"void"), come_pop_stackframe(), __exception_result_var_b250)&&((struct sType*)come_null_check(type, "04heap.c", 1172))->mPointerNum==0,    _if_conditional328) {
        # 1176 "04heap.c"
        # 1173 "04heap.c"
        if(_if_conditional329=gComeDebug,        _if_conditional329) {
            # 1174 "04heap.c"
            __result116__ = __result_obj__ = ((char*)(right_value202=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value199=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1174))->sname))),((char*)(right_value200=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1174))->sline))),((char*)(right_value201=charp_to_string(c_value))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value199;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
            if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value200;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value201;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value202);
            if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value202;
            __freed_obj__ = 0;
            return __result116__;
        }
    }
    else {
        # 1186 "04heap.c"
        # 1177 "04heap.c"
        if(_if_conditional330=gComeDebug,        _if_conditional330) {
            # 1178 "04heap.c"
            # 1179 "04heap.c"
            ++n_294;
            # 1181 "04heap.c"
            var_name_295=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1181),__exception_result_var_b251=((char*)(right_value203=xsprintf("__exception_result_var_b%d",n_294))), come_pop_stackframe(), __exception_result_var_b251));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value203;
            __freed_obj__ = 0;
            # 1182 "04heap.c"
            (come_push_stackframe("04heap.c", 1182),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("04heap.c", 1182),__exception_result_var_b252=((char*)(right_value204=make_define_var(type,var_name_295,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b252)),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value204;
            __freed_obj__ = 0;
            # 1183 "04heap.c"
            __result117__ = __result_obj__ = ((char*)(right_value210=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value205=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1183))->sname))),((char*)(right_value206=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1183))->sline))),((char*)(right_value207=string_to_string(var_name_295))),((char*)(right_value208=charp_to_string(c_value))),((char*)(right_value209=string_to_string(var_name_295))))));
            if(var_name_295 && !__freed_obj__) { var_name_295 = come_decrement_ref_count(var_name_295, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value205;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value206);
            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value206;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value207);
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value207;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value208;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value209;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value210;
            __freed_obj__ = 0;
            return __result117__;
            if(var_name_295 && !__freed_obj__) { var_name_295 = come_decrement_ref_count(var_name_295, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 1186 "04heap.c"
    __result118__ = __result_obj__ = (come_push_stackframe("04heap.c", 1186),__exception_result_var_b253=((char*)(right_value211=__builtin_string(c_value))), come_pop_stackframe(), __exception_result_var_b253);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value211;
    __freed_obj__ = 0;
    return __result118__;
}

