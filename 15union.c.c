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
struct sUnionNode
{
    struct sType* mType;
    int sline;
    char* sname;
    _Bool mOutput;
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

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info);

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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
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
_Bool sUnionNode_terminated();

char* sUnionNode_kind();

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
int sUnionNode_sline(struct sUnionNode* self, struct sInfo* info);

char* sUnionNode_sname(struct sUnionNode* self, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

static void sUnionNode_finalize(struct sUnionNode* self);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __exception_result_var_b1;
char* __dec_obj6;
void* right_value45;
struct sType* __dec_obj29;
void* right_value56;
char* __exception_result_var_b40;
void* right_value57;
struct map$2charphsTypeph* __exception_result_var_b41;
struct sUnionNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
    # 15 "15union.c"
    ((struct sUnionNode*)come_null_check(self, "15union.c", 15))->sline=((struct sInfo*)come_null_check(info, "15union.c", 15))->sline;
    # 16 "15union.c"
    __dec_obj6=((struct sUnionNode*)come_null_check(self, "15union.c", 16))->sname;
    ((struct sUnionNode*)come_null_check(self, "15union.c", 16))->sname=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 16),__exception_result_var_b1=((char*)(right_value10=__builtin_string(((struct sInfo*)come_null_check(info, "15union.c", 16))->sname))), come_pop_stackframe(), __exception_result_var_b1));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    # 18 "15union.c"
    __dec_obj29=((struct sUnionNode*)come_null_check(self, "15union.c", 18))->mType;
    ((struct sUnionNode*)come_null_check(self, "15union.c", 18))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type))));
    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value45;
    __freed_obj__ = 0;
    # 20 "15union.c"
    (come_push_stackframe("15union.c", 20),__exception_result_var_b41=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 20))->types, "15union.c", 20)),(char*)come_increment_ref_count((come_push_stackframe("15union.c", 20),__exception_result_var_b40=((char*)(right_value56=__builtin_string(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "15union.c", 20))->mClass, "15union.c", 20))->mName))), come_pop_stackframe(), __exception_result_var_b40)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(type))))), come_pop_stackframe(), __exception_result_var_b41);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value56;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value57;
    __freed_obj__ = 0;
    # 22 "15union.c"
    ((struct sUnionNode*)come_null_check(self, "15union.c", 22))->mOutput=output;
    # 24 "15union.c"
    __result57__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result57__;
    if(self && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sType* __result13__;
void* right_value11;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional27;
void* right_value15;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional28;
void* right_value16;
char* __dec_obj10;
_Bool _if_conditional29;
void* right_value23;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional33;
void* right_value31;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value32;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
void* right_value39;
struct list$1charph* __dec_obj23;
_Bool _if_conditional52;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
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
void* right_value42;
struct sNode* __dec_obj26;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value43;
char* __dec_obj27;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value44;
char* __dec_obj28;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            # 2 "sType_clone"
            __result13__ = __result_obj__ = (void*)0;
            return __result13__;
        }
        # 3 "sType_clone"
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value11;
        __freed_obj__ = 0;
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            # 4 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            # 5 "sType_clone"
            __dec_obj8=((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14;
            __freed_obj__ = 0;
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            # 6 "sType_clone"
            __dec_obj9=((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),        _if_conditional28) {
            # 7 "sType_clone"
            __dec_obj10=((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value16=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16;
            __freed_obj__ = 0;
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),        _if_conditional29) {
            # 8 "sType_clone"
            __dec_obj14=((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value23;
            __freed_obj__ = 0;
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),        _if_conditional33) {
            # 9 "sType_clone"
            __dec_obj18=((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            # 10 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),        _if_conditional47) {
            # 11 "sType_clone"
            __dec_obj19=((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value32;
            __freed_obj__ = 0;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),        _if_conditional48) {
            # 12 "sType_clone"
            __dec_obj23=((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),        _if_conditional52) {
            # 13 "sType_clone"
            __dec_obj24=((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            # 14 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),        _if_conditional54) {
            # 15 "sType_clone"
            __dec_obj25=((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            # 16 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            # 17 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            # 18 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            # 19 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            # 20 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            # 21 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            # 22 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 23 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 24 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 25 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 26 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 27 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 28 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 29 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 30 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 31 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 32 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 33 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 34 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 35 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 36 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 37 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 38 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),        _if_conditional78) {
            # 39 "sType_clone"
            __dec_obj26=((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 40 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 41 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            # 42 "sType_clone"
            __dec_obj27=((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 43 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 44 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 45 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 46 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 47 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 48 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 49 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 50 "sType_clone"
            ((struct sType*)come_null_check(result_5, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional90=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),        _if_conditional90) {
            # 51 "sType_clone"
            __dec_obj28=((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value44;
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
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                # 0 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                # 1 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),            _if_conditional9) {
                # 2 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),            _if_conditional10) {
                # 3 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),            _if_conditional12) {
                # 4 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),            _if_conditional14) {
                # 5 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),            _if_conditional15) {
                # 6 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),            _if_conditional17) {
                # 7 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),            _if_conditional18) {
                # 8 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),            _if_conditional19) {
                # 9 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                # 10 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),            _if_conditional21) {
                # 11 "sType_finalize"
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional7=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                    _if_conditional7) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional11=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                            _if_conditional11) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                            _if_conditional13) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional16=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                            _if_conditional16) {
                                # 0 "list_item$1charphp_finalize"
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result14__;
void* right_value12;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value13;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value12=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value12;
                __freed_obj__ = 0;
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                _if_conditional26) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj7=((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value13;
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
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional25=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                    _if_conditional25) {
                        # 0 "tuple1$1sTypeph_finalize"
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct list$1sTypeph* __result16__;
void* right_value17;
void* right_value18;
struct list$1sTypeph* __exception_result_var_b2;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value22;
struct list$1sTypeph* __exception_result_var_b3;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    # 193 "./comelang2.h"
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                # 195 "./comelang2.h"
                result_13=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b2=((struct list$1sTypeph*)(right_value18=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value17=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b2));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value17;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value18;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b3=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b3);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value22;
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
_Bool _if_conditional31;
void* right_value19;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional32;
void* right_value20;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value21;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional31=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional31) {
                            # 209 "./comelang2.h"
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value19;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 213))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 213))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 215 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_15;
                            # 216 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_15;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional32) {
                                # 219 "./comelang2.h"
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 221))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 223))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 223))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 225 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_16;
                                # 226 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_16;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value21;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 231))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 233))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 233))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional34;
struct list$1sNodeph* __result20__;
void* right_value24;
void* right_value25;
struct list$1sNodeph* __exception_result_var_b4;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value30;
struct list$1sNodeph* __exception_result_var_b5;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    # 193 "./comelang2.h"
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                # 195 "./comelang2.h"
                result_18=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b4=((struct list$1sNodeph*)(right_value25=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value24=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b4));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value24;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value25;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b5=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 199)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b5);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value30;
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
_Bool _if_conditional35;
void* right_value26;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional36;
void* right_value27;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value28;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional35) {
                            # 209 "./comelang2.h"
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value26;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 213))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 213))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                            # 215 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_20;
                            # 216 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_20;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional36) {
                                # 219 "./comelang2.h"
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 221))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 223))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 223))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                # 225 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_21;
                                # 226 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_21;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value28;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 231))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 233))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 233))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional37;
struct sNode* __result23__;
void* right_value29;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            # 2 "sNode_clone"
                            __result23__ = __result_obj__ = (void*)0;
                            return __result23__;
                        }
                        # 3 "sNode_clone"
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional38=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                        _if_conditional38) {
                            # 4 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            # 5 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            # 6 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            # 7 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            # 8 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            # 9 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            # 10 "sNode_clone"
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
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
_Bool _if_conditional49;
struct list$1charph* __result26__;
void* right_value33;
void* right_value34;
struct list$1charph* __exception_result_var_b6;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value38;
struct list$1charph* __exception_result_var_b7;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    # 193 "./comelang2.h"
                    __result26__ = __result_obj__ = ((void*)0);
                    return __result26__;
                }
                # 195 "./comelang2.h"
                result_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b6=((struct list$1charph*)(right_value34=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value33=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b6));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value33;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value34;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b7=list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value38=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b7);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value38;
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
_Bool _if_conditional50;
void* right_value35;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional51;
void* right_value36;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value37;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional50) {
                            # 209 "./comelang2.h"
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value35;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj20=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 213))->item;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 213))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                            # 215 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_26;
                            # 216 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->head=litem_26;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional51) {
                                # 219 "./comelang2.h"
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 221))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj21=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 223))->item;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 223))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                # 225 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_27;
                                # 226 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_27;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value37;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 231))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj22=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 233))->item;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 233))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
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

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
unsigned int __exception_result_var_b23;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional9;
_Bool _if_conditional104;
void* right_value50;
struct optional$2boolbool* __exception_result_var_b24;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct list$1charp* __exception_result_var_b28;
struct list$1charp* __exception_result_var_b29;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
int __exception_result_var_b30;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool same_key_exist_65;
char* __exception_result_var_b33;
char* it2_68;
_Bool __exception_result_var_b34;
_Bool _for_condtionalA2;
char* __exception_result_var_b37;
void* right_value52;
struct optional$2boolbool* __exception_result_var_b38;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct list$1charp* __exception_result_var_b39;
struct map$2charphsTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
memset(&right_value50, 0, sizeof(void*));
memset(&same_key_exist_65, 0, sizeof(_Bool));
memset(&it2_68, 0, sizeof(char*));
memset(&right_value52, 0, sizeof(void*));
        # 1432 "./comelang2.h"
        # 1429 "./comelang2.h"
        if(_if_conditional91=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1429))->size,        _if_conditional91) {
            # 1430 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1430),map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
        }
        # 1432 "./comelang2.h"
        hash_47=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b23=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b23)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1432))->size;
        # 1433 "./comelang2.h"
        it_48=hash_47;
        # 1491 "./comelang2.h"
        while(_while_condtional9=(_Bool)1,        _while_condtional9) {
            # 1489 "./comelang2.h"
            # 1436 "./comelang2.h"
            if(_if_conditional104=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_48],            _if_conditional104) {
                # 1459 "./comelang2.h"
                # 1438 "./comelang2.h"
                if(_if_conditional105=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b24=((struct optional$2boolbool*)(right_value50=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_48], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b24)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50),
                (right_value50 && right_value50 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value50, 
                __freed_obj__ = 0, 
                _if_conditional105) {
                    # 1449 "./comelang2.h"
                    # 1440 "./comelang2.h"
                    if(_if_conditional106=1,                    _if_conditional106) {
                        # 1441 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b28=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_48]), come_pop_stackframe(), __exception_result_var_b28);
                        # 1442 "./comelang2.h"
                        if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_48] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_48] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_48], (void*)0, (void*)0, 0, 0, 0); }
                        # 1443 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_48]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1446 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b29=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_48]), come_pop_stackframe(), __exception_result_var_b29);
                        # 1447 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_48]=key;
                    }
                    # 1456 "./comelang2.h"
                    # 1449 "./comelang2.h"
                    if(_if_conditional126=1,                    _if_conditional126) {
                        # 1450 "./comelang2.h"
                        if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1450))->items[it_48] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1450))->items[it_48], (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 1451 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->items[it_48]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1454 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1454))->items[it_48]=item;
                    }
                    # 1456 "./comelang2.h"
                    break;
                }
                # 1459 "./comelang2.h"
                it_48++;
                # 1469 "./comelang2.h"
                # 1461 "./comelang2.h"
                if(_if_conditional127=it_48>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1461))->size,                _if_conditional127) {
                    # 1462 "./comelang2.h"
                    it_48=0;
                }
                else {
                    # 1469 "./comelang2.h"
                    # 1464 "./comelang2.h"
                    if(_if_conditional128=it_48==hash_47,                    _if_conditional128) {
                        # 1465 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b30=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b30);
                        # 1466 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1466),stackframe(),come_pop_stackframe());
                        # 1467 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1467),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                # 1471 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1471))->item_existance[it_48]=(_Bool)1;
                # 1478 "./comelang2.h"
                # 1472 "./comelang2.h"
                if(_if_conditional129=1,                _if_conditional129) {
                    # 1473 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_48]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1476 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_48]=key;
                }
                # 1485 "./comelang2.h"
                # 1478 "./comelang2.h"
                if(_if_conditional130=1,                _if_conditional130) {
                    # 1479 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1479))->items[it_48]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    # 1482 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1482))->items[it_48]=item;
                }
                # 1485 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1485))->len++;
                # 1487 "./comelang2.h"
                break;
            }
        }
        # 1491 "./comelang2.h"
        same_key_exist_65=(_Bool)0;
        # 1499 "./comelang2.h"
        for(
        it2_68=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b33=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b33) ,        0;        _for_condtionalA2=        !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b34=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b34) ,        _for_condtionalA2;        it2_68=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b37=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b37) ,        0        ){
            # 1497 "./comelang2.h"
            # 1494 "./comelang2.h"
            if(_if_conditional135=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b38=((struct optional$2boolbool*)(right_value52=string_equals(((char*)come_null_check(it2_68, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b38)),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52),
            (right_value52 && right_value52 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value52, 
            __freed_obj__ = 0, 
            _if_conditional135) {
                # 1495 "./comelang2.h"
                same_key_exist_65=(_Bool)1;
            }
        }
        # 1503 "./comelang2.h"
        # 1499 "./comelang2.h"
        if(_if_conditional136=!same_key_exist_65,        _if_conditional136) {
            # 1500 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b39=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b39);
        }
        # 1503 "./comelang2.h"
        __result56__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result56__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_29;
void* right_value46;
char** keys_30;
void* right_value47;
struct sType** items_31;
void* right_value48;
_Bool* item_existance_32;
int len_33;
char* __exception_result_var_b10;
char* it_36;
_Bool __exception_result_var_b11;
_Bool _for_condtionalA1;
char* __exception_result_var_b14;
struct sType* default_value_39;
void* __exception_result_var_b15;
struct sType* __exception_result_var_b19;
struct sType* it2_43;
unsigned int __exception_result_var_b20;
unsigned int hash_44;
int n_45;
_Bool _while_condtional8;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
int __exception_result_var_b21;
struct sType* default_value_46;
struct sType* __exception_result_var_b22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_29, 0, sizeof(int));
memset(&right_value46, 0, sizeof(void*));
memset(&keys_30, 0, sizeof(char**));
memset(&right_value47, 0, sizeof(void*));
memset(&items_31, 0, sizeof(struct sType**));
memset(&right_value48, 0, sizeof(void*));
memset(&item_existance_32, 0, sizeof(_Bool*));
memset(&len_33, 0, sizeof(int));
memset(&it_36, 0, sizeof(char*));
memset(&default_value_39, 0, sizeof(struct sType*));
memset(&it2_43, 0, sizeof(struct sType*));
memset(&hash_44, 0, sizeof(unsigned int));
memset(&n_45, 0, sizeof(int));
memset(&default_value_46, 0, sizeof(struct sType*));
                # 1376 "./comelang2.h"
                size_29=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                # 1377 "./comelang2.h"
                keys_30=(char**)come_increment_ref_count(((char**)(right_value46=(char**)come_calloc(1, sizeof(char*)*(1*(size_29)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value46;
                __freed_obj__ = 0;
                # 1378 "./comelang2.h"
                items_31=(struct sType**)come_increment_ref_count(((struct sType**)(right_value47=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_29)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value47;
                __freed_obj__ = 0;
                # 1379 "./comelang2.h"
                item_existance_32=(_Bool*)come_increment_ref_count(((_Bool*)(right_value48=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_29)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value48);
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value48;
                __freed_obj__ = 0;
                # 1381 "./comelang2.h"
                len_33=0;
                # 1416 "./comelang2.h"
                for(
                it_36=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b10=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b10) ,                0;                _for_condtionalA1=                !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b11=map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b11) ,                _for_condtionalA1;                it_36=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b14=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b14) ,                0                ){
                    # 1384 "./comelang2.h"
                    # 1385 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b15=memset(&default_value_39,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b15);
                    # 1386 "./comelang2.h"
                    it2_43=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b19=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1386)),it_36,default_value_39), come_pop_stackframe(), __exception_result_var_b19);
                    # 1387 "./comelang2.h"
                    hash_44=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b20=string_get_hash_key(((char*)come_null_check(it_36, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b20)%size_29;
                    # 1388 "./comelang2.h"
                    n_45=hash_44;
                    # 1414 "./comelang2.h"
                    while(_while_condtional8=(_Bool)1,                    _while_condtional8) {
                        # 1413 "./comelang2.h"
                        # 1391 "./comelang2.h"
                        if(_if_conditional101=item_existance_32[n_45],                        _if_conditional101) {
                            # 1393 "./comelang2.h"
                            n_45++;
                            # 1403 "./comelang2.h"
                            # 1395 "./comelang2.h"
                            if(_if_conditional102=n_45>=size_29,                            _if_conditional102) {
                                # 1396 "./comelang2.h"
                                n_45=0;
                            }
                            else {
                                # 1403 "./comelang2.h"
                                # 1398 "./comelang2.h"
                                if(_if_conditional103=n_45==hash_44,                                _if_conditional103) {
                                    # 1399 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b21=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b21);
                                    # 1400 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1400),stackframe(),come_pop_stackframe());
                                    # 1401 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1401),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            # 1405 "./comelang2.h"
                            item_existance_32[n_45]=(_Bool)1;
                            # 1406 "./comelang2.h"
                            keys_30[n_45]=it_36;
                            # 1407 "./comelang2.h"
                            # 1408 "./comelang2.h"
                            items_31[n_45]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b22=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408)),it_36,default_value_46), come_pop_stackframe(), __exception_result_var_b22);
                            # 1410 "./comelang2.h"
                            len_33++;
                            # 1411 "./comelang2.h"
                            break;
                        }
                    }
                }
                # 1416 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1416),come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1416))->items),come_pop_stackframe());
                # 1417 "./comelang2.h"
                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                # 1418 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1418),come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1418))->keys),come_pop_stackframe());
                # 1420 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1420))->keys=keys_30;
                # 1421 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1421))->items=items_31;
                # 1422 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422))->item_existance=item_existance_32;
                # 1424 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size=size_29;
                # 1425 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1425))->len=len_33;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
char* result_34;
void* __exception_result_var_b8;
char* __result31__;
_Bool _if_conditional93;
char* __result32__;
char* result_35;
void* __exception_result_var_b9;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_34, 0, sizeof(char*));
memset(&result_35, 0, sizeof(char*));
                    # 1343 "./comelang2.h"
                    # 1338 "./comelang2.h"
                    if(_if_conditional92=self==((void*)0),                    _if_conditional92) {
                        # 1339 "./comelang2.h"
                        # 1340 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b8=memset(&result_34,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b8);
                        # 1341 "./comelang2.h"
                        __result31__ = __result_obj__ = result_34;
                        return __result31__;
                    }
                    # 1343 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                    # 1349 "./comelang2.h"
                    # 1345 "./comelang2.h"
                    if(_if_conditional93=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                    _if_conditional93) {
                        # 1346 "./comelang2.h"
                        __result32__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                        return __result32__;
                    }
                    # 1349 "./comelang2.h"
                    # 1350 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b9=memset(&result_35,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b9);
                    # 1351 "./comelang2.h"
                    __result33__ = __result_obj__ = result_35;
                    return __result33__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1372 "./comelang2.h"
                    __result34__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                    return __result34__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
char* result_37;
void* __exception_result_var_b12;
char* __result35__;
_Bool _if_conditional95;
char* __result36__;
char* result_38;
void* __exception_result_var_b13;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_37, 0, sizeof(char*));
memset(&result_38, 0, sizeof(char*));
                    # 1360 "./comelang2.h"
                    # 1355 "./comelang2.h"
                    if(_if_conditional94=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                    _if_conditional94) {
                        # 1356 "./comelang2.h"
                        # 1357 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b12=memset(&result_37,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b12);
                        # 1358 "./comelang2.h"
                        __result35__ = __result_obj__ = result_37;
                        return __result35__;
                    }
                    # 1360 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                    # 1366 "./comelang2.h"
                    # 1362 "./comelang2.h"
                    if(_if_conditional95=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                    _if_conditional95) {
                        # 1363 "./comelang2.h"
                        __result36__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                        return __result36__;
                    }
                    # 1366 "./comelang2.h"
                    # 1367 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b13=memset(&result_38,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b13);
                    # 1368 "./comelang2.h"
                    __result37__ = __result_obj__ = result_38;
                    return __result37__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b16;
unsigned int hash_40;
unsigned int it_41;
_Bool _while_condtional7;
_Bool _if_conditional96;
void* right_value49;
struct optional$2boolbool* __exception_result_var_b17;
_Bool _if_conditional98;
struct sType* __result40__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sType* __result41__;
struct sType* __result42__;
struct sType* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_40, 0, sizeof(unsigned int));
memset(&it_41, 0, sizeof(unsigned int));
memset(&right_value49, 0, sizeof(void*));
                        # 1265 "./comelang2.h"
                        hash_40=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b16=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b16)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1265))->size;
                        # 1266 "./comelang2.h"
                        it_41=hash_40;
                        # 1290 "./comelang2.h"
                        while(_while_condtional7=(_Bool)1,                        _while_condtional7) {
                            # 1288 "./comelang2.h"
                            # 1269 "./comelang2.h"
                            if(_if_conditional96=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_41],                            _if_conditional96) {
                                # 1276 "./comelang2.h"
                                # 1271 "./comelang2.h"
                                if(_if_conditional98=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b17=((struct optional$2boolbool*)(right_value49=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_41], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b17)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                                (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value49, 
                                __freed_obj__ = 0, 
                                _if_conditional98) {
                                    # 1273 "./comelang2.h"
                                    __result40__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1273))->items[it_41];
                                    return __result40__;
                                }
                                # 1276 "./comelang2.h"
                                it_41++;
                                # 1284 "./comelang2.h"
                                # 1278 "./comelang2.h"
                                if(_if_conditional99=it_41>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1278))->size,                                _if_conditional99) {
                                    # 1279 "./comelang2.h"
                                    it_41=0;
                                }
                                else {
                                    # 1284 "./comelang2.h"
                                    # 1281 "./comelang2.h"
                                    if(_if_conditional100=it_41==hash_40,                                    _if_conditional100) {
                                        # 1282 "./comelang2.h"
                                        __result41__ = __result_obj__ = default_value;
                                        return __result41__;
                                    }
                                }
                            }
                            else {
                                # 1286 "./comelang2.h"
                                __result42__ = __result_obj__ = default_value;
                                return __result42__;
                            }
                        }
                        # 1290 "./comelang2.h"
                        __result43__ = __result_obj__ = default_value;
                        return __result43__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
_Bool default_value_42;
void* __exception_result_var_b18;
_Bool __result38__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_42, 0, sizeof(_Bool));
                                    # 69 "./comelang2.h"
                                    # 61 "./comelang2.h"
                                    if(_if_conditional97=self==((void*)0),                                    _if_conditional97) {
                                        # 62 "./comelang2.h"
                                        # 63 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b18=memset(&default_value_42,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b18);
                                        # 64 "./comelang2.h"
                                        __result38__ = default_value_42;
                                        return __result38__;
                                    }
                                    else {
                                        # 67 "./comelang2.h"
                                        __result39__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                                        return __result39__;
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
int it2_49;
struct list_item$1charp* it_50;
_Bool _while_condtional10;
void* right_value51;
struct optional$2boolbool* __exception_result_var_b25;
_Bool _if_conditional107;
struct list$1charp* __exception_result_var_b27;
struct list$1charp* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_49, 0, sizeof(int));
memset(&it_50, 0, sizeof(struct list_item$1charp*));
memset(&right_value51, 0, sizeof(void*));
                            # 498 "./comelang2.h"
                            it2_49=0;
                            # 499 "./comelang2.h"
                            it_50=((struct list$1charp*)come_null_check(self, "./comelang2.h", 499))->head;
                            # 510 "./comelang2.h"
                            while(_while_condtional10=it_50!=((void*)0),                            _while_condtional10) {
                                # 505 "./comelang2.h"
                                # 501 "./comelang2.h"
                                if(_if_conditional107=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 501),__exception_result_var_b25=((struct optional$2boolbool*)(right_value51=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_50, "./comelang2.h", 501))->item, "./comelang2.h", 501)),item))), come_pop_stackframe(), __exception_result_var_b25)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
                                (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value51, 
                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    # 502 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 502),__exception_result_var_b27=list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 502)),it2_49,it2_49+1), come_pop_stackframe(), __exception_result_var_b27);
                                    # 503 "./comelang2.h"
                                    break;
                                }
                                # 505 "./comelang2.h"
                                it2_49++;
                                # 507 "./comelang2.h"
                                it_50=((struct list_item$1charp*)come_null_check(it_50, "./comelang2.h", 507))->next;
                            }
                            # 510 "./comelang2.h"
                            __result47__ = __result_obj__ = self;
                            return __result47__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
int tmp_51;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list$1charp* __result44__;
_Bool _if_conditional114;
struct list$1charp* __exception_result_var_b26;
_Bool _if_conditional115;
struct list_item$1charp* it_54;
int i_55;
_Bool _while_condtional12;
_Bool _if_conditional116;
struct list_item$1charp* prev_it_56;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list_item$1charp* it_57;
int i_58;
_Bool _while_condtional13;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* prev_it_59;
struct list_item$1charp* it_60;
struct list_item$1charp* head_prev_it_61;
struct list_item$1charp* tail_it_62;
int i_63;
_Bool _while_condtional14;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* prev_it_64;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list$1charp* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_51, 0, sizeof(int));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
memset(&i_55, 0, sizeof(int));
memset(&prev_it_56, 0, sizeof(struct list_item$1charp*));
memset(&it_57, 0, sizeof(struct list_item$1charp*));
memset(&i_58, 0, sizeof(int));
memset(&prev_it_59, 0, sizeof(struct list_item$1charp*));
memset(&it_60, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_61, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_62, 0, sizeof(struct list_item$1charp*));
memset(&i_63, 0, sizeof(int));
memset(&prev_it_64, 0, sizeof(struct list_item$1charp*));
                                        # 517 "./comelang2.h"
                                        # 514 "./comelang2.h"
                                        if(_if_conditional108=head<0,                                        _if_conditional108) {
                                            # 515 "./comelang2.h"
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 515))->len;
                                        }
                                        # 521 "./comelang2.h"
                                        # 517 "./comelang2.h"
                                        if(_if_conditional109=tail<0,                                        _if_conditional109) {
                                            # 518 "./comelang2.h"
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 518))->len+1;
                                        }
                                        # 527 "./comelang2.h"
                                        # 521 "./comelang2.h"
                                        if(_if_conditional110=head>tail,                                        _if_conditional110) {
                                            # 522 "./comelang2.h"
                                            tmp_51=tail;
                                            # 523 "./comelang2.h"
                                            tail=head;
                                            # 524 "./comelang2.h"
                                            head=tmp_51;
                                        }
                                        # 531 "./comelang2.h"
                                        # 527 "./comelang2.h"
                                        if(_if_conditional111=head<0,                                        _if_conditional111) {
                                            # 528 "./comelang2.h"
                                            head=0;
                                        }
                                        # 535 "./comelang2.h"
                                        # 531 "./comelang2.h"
                                        if(_if_conditional112=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 531))->len,                                        _if_conditional112) {
                                            # 532 "./comelang2.h"
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 532))->len;
                                        }
                                        # 539 "./comelang2.h"
                                        # 535 "./comelang2.h"
                                        if(_if_conditional113=head==tail,                                        _if_conditional113) {
                                            # 536 "./comelang2.h"
                                            __result44__ = __result_obj__ = self;
                                            return __result44__;
                                        }
                                        # 634 "./comelang2.h"
                                        # 539 "./comelang2.h"
                                        if(_if_conditional114=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 539))->len,                                        _if_conditional114) {
                                            # 541 "./comelang2.h"
                                            (come_push_stackframe("./comelang2.h", 541),__exception_result_var_b26=list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 541))), come_pop_stackframe(), __exception_result_var_b26);
                                        }
                                        else {
                                            # 634 "./comelang2.h"
                                            # 543 "./comelang2.h"
                                            if(_if_conditional115=head==0,                                            _if_conditional115) {
                                                # 544 "./comelang2.h"
                                                it_54=((struct list$1charp*)come_null_check(self, "./comelang2.h", 544))->head;
                                                # 545 "./comelang2.h"
                                                i_55=0;
                                                # 567 "./comelang2.h"
                                                while(_while_condtional12=it_54!=((void*)0),                                                _while_condtional12) {
                                                    # 566 "./comelang2.h"
                                                    # 547 "./comelang2.h"
                                                    if(_if_conditional116=i_55<tail,                                                    _if_conditional116) {
                                                        # 548 "./comelang2.h"
                                                        prev_it_56=it_54;
                                                        # 550 "./comelang2.h"
                                                        it_54=((struct list_item$1charp*)come_null_check(it_54, "./comelang2.h", 550))->next;
                                                        # 551 "./comelang2.h"
                                                        i_55++;
                                                        # 553 "./comelang2.h"
                                                        if(prev_it_56 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        # 555 "./comelang2.h"
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 555))->len--;
                                                    }
                                                    else {
                                                        # 566 "./comelang2.h"
                                                        # 557 "./comelang2.h"
                                                        if(_if_conditional117=i_55==tail,                                                        _if_conditional117) {
                                                            # 558 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 558))->head=it_54;
                                                            # 559 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 559))->head, "./comelang2.h", 559))->prev=((void*)0);
                                                            # 560 "./comelang2.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 563 "./comelang2.h"
                                                            it_54=((struct list_item$1charp*)come_null_check(it_54, "./comelang2.h", 563))->next;
                                                            # 564 "./comelang2.h"
                                                            i_55++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 634 "./comelang2.h"
                                                # 568 "./comelang2.h"
                                                if(_if_conditional118=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 568))->len,                                                _if_conditional118) {
                                                    # 569 "./comelang2.h"
                                                    it_57=((struct list$1charp*)come_null_check(self, "./comelang2.h", 569))->head;
                                                    # 570 "./comelang2.h"
                                                    i_58=0;
                                                    # 592 "./comelang2.h"
                                                    while(_while_condtional13=it_57!=((void*)0),                                                    _while_condtional13) {
                                                        # 577 "./comelang2.h"
                                                        # 572 "./comelang2.h"
                                                        if(_if_conditional119=i_58==head,                                                        _if_conditional119) {
                                                            # 573 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 573))->tail=((struct list_item$1charp*)come_null_check(it_57, "./comelang2.h", 573))->prev;
                                                            # 574 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 574))->tail, "./comelang2.h", 574))->next=((void*)0);
                                                        }
                                                        # 591 "./comelang2.h"
                                                        # 577 "./comelang2.h"
                                                        if(_if_conditional120=i_58>=head,                                                        _if_conditional120) {
                                                            # 578 "./comelang2.h"
                                                            prev_it_59=it_57;
                                                            # 580 "./comelang2.h"
                                                            it_57=((struct list_item$1charp*)come_null_check(it_57, "./comelang2.h", 580))->next;
                                                            # 581 "./comelang2.h"
                                                            i_58++;
                                                            # 583 "./comelang2.h"
                                                            if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 585 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 585))->len--;
                                                        }
                                                        else {
                                                            # 588 "./comelang2.h"
                                                            it_57=((struct list_item$1charp*)come_null_check(it_57, "./comelang2.h", 588))->next;
                                                            # 589 "./comelang2.h"
                                                            i_58++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 594 "./comelang2.h"
                                                    it_60=((struct list$1charp*)come_null_check(self, "./comelang2.h", 594))->head;
                                                    # 596 "./comelang2.h"
                                                    head_prev_it_61=((void*)0);
                                                    # 597 "./comelang2.h"
                                                    tail_it_62=((void*)0);
                                                    # 600 "./comelang2.h"
                                                    i_63=0;
                                                    # 626 "./comelang2.h"
                                                    while(_while_condtional14=it_60!=((void*)0),                                                    _while_condtional14) {
                                                        # 605 "./comelang2.h"
                                                        # 602 "./comelang2.h"
                                                        if(_if_conditional121=i_63==head,                                                        _if_conditional121) {
                                                            # 603 "./comelang2.h"
                                                            head_prev_it_61=((struct list_item$1charp*)come_null_check(it_60, "./comelang2.h", 603))->prev;
                                                        }
                                                        # 609 "./comelang2.h"
                                                        # 605 "./comelang2.h"
                                                        if(_if_conditional122=i_63==tail,                                                        _if_conditional122) {
                                                            # 606 "./comelang2.h"
                                                            tail_it_62=it_60;
                                                        }
                                                        # 624 "./comelang2.h"
                                                        # 609 "./comelang2.h"
                                                        if(_if_conditional123=i_63>=head&&i_63<tail,                                                        _if_conditional123) {
                                                            # 611 "./comelang2.h"
                                                            prev_it_64=it_60;
                                                            # 613 "./comelang2.h"
                                                            it_60=((struct list_item$1charp*)come_null_check(it_60, "./comelang2.h", 613))->next;
                                                            # 614 "./comelang2.h"
                                                            i_63++;
                                                            # 616 "./comelang2.h"
                                                            if(prev_it_64 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 618 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 618))->len--;
                                                        }
                                                        else {
                                                            # 621 "./comelang2.h"
                                                            it_60=((struct list_item$1charp*)come_null_check(it_60, "./comelang2.h", 621))->next;
                                                            # 622 "./comelang2.h"
                                                            i_63++;
                                                        }
                                                    }
                                                    # 629 "./comelang2.h"
                                                    # 626 "./comelang2.h"
                                                    if(_if_conditional124=head_prev_it_61!=((void*)0),                                                    _if_conditional124) {
                                                        # 627 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_61, "./comelang2.h", 627))->next=tail_it_62;
                                                    }
                                                    # 632 "./comelang2.h"
                                                    # 629 "./comelang2.h"
                                                    if(_if_conditional125=tail_it_62!=((void*)0),                                                    _if_conditional125) {
                                                        # 630 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(tail_it_62, "./comelang2.h", 630))->prev=head_prev_it_61;
                                                    }
                                                }
                                            }
                                        }
                                        # 634 "./comelang2.h"
                                        __result46__ = __result_obj__ = self;
                                        return __result46__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_52;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_53;
struct list$1charp* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_52, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charp*));
                                                # 483 "./comelang2.h"
                                                it_52=((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head;
                                                # 490 "./comelang2.h"
                                                while(_while_condtional11=it_52!=((void*)0),                                                _while_condtional11) {
                                                    # 485 "./comelang2.h"
                                                    prev_it_53=it_52;
                                                    # 486 "./comelang2.h"
                                                    it_52=((struct list_item$1charp*)come_null_check(it_52, "./comelang2.h", 486))->next;
                                                    # 487 "./comelang2.h"
                                                    if(prev_it_53 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                # 490 "./comelang2.h"
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
                                                # 491 "./comelang2.h"
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
                                                # 493 "./comelang2.h"
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 493))->len=0;
                                                # 495 "./comelang2.h"
                                                __result45__ = __result_obj__ = self;
                                                return __result45__;
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
_Bool _if_conditional131;
char* result_66;
void* __exception_result_var_b31;
char* __result48__;
_Bool _if_conditional132;
char* __result49__;
char* result_67;
void* __exception_result_var_b32;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_66, 0, sizeof(char*));
memset(&result_67, 0, sizeof(char*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional131=self==((void*)0),            _if_conditional131) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b31=memset(&result_66,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b31);
                # 341 "./comelang2.h"
                __result48__ = __result_obj__ = result_66;
                return __result48__;
            }
            # 343 "./comelang2.h"
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional132=((struct list$1charp*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional132) {
                # 346 "./comelang2.h"
                __result49__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result49__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b32=memset(&result_67,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b32);
            # 351 "./comelang2.h"
            __result50__ = __result_obj__ = result_67;
            return __result50__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 373 "./comelang2.h"
            __result51__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result51__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
char* result_69;
void* __exception_result_var_b35;
char* __result52__;
_Bool _if_conditional134;
char* __result53__;
char* result_70;
void* __exception_result_var_b36;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional133=self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional133) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b35=memset(&result_69,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b35);
                # 358 "./comelang2.h"
                __result52__ = __result_obj__ = result_69;
                return __result52__;
            }
            # 361 "./comelang2.h"
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional134=((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional134) {
                # 364 "./comelang2.h"
                __result53__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result53__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b36=memset(&result_70,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b36);
            # 369 "./comelang2.h"
            __result54__ = __result_obj__ = result_70;
            return __result54__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
void* right_value53;
struct list_item$1charp* litem_71;
_Bool _if_conditional138;
void* right_value54;
struct list_item$1charp* litem_72;
void* right_value55;
struct list_item$1charp* litem_73;
struct list$1charp* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1charp*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_73, 0, sizeof(struct list_item$1charp*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional137=((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional137) {
                    # 279 "./comelang2.h"
                    litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value53=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value53;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 281))->prev=((void*)0);
                    # 282 "./comelang2.h"
                    ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 282))->next=((void*)0);
                    # 283 "./comelang2.h"
                    ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 283))->item=item;
                    # 285 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 285))->tail=litem_71;
                    # 286 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 286))->head=litem_71;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional138=((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional138) {
                        # 289 "./comelang2.h"
                        litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value54=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 291))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 291))->head;
                        # 292 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 292))->next=((void*)0);
                        # 293 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 293))->item=item;
                        # 295 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 295))->tail=litem_72;
                        # 296 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_72;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_73=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value55=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_73, "./comelang2.h", 301))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 301))->tail;
                        # 302 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_73, "./comelang2.h", 302))->next=((void*)0);
                        # 303 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_73, "./comelang2.h", 303))->item=item;
                        # 305 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_73;
                        # 306 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 306))->tail=litem_73;
                    }
                }
                # 309 "./comelang2.h"
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 309))->len++;
                # 311 "./comelang2.h"
                __result55__ = __result_obj__ = self;
                return __result55__;
}

_Bool sUnionNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 29 "15union.c"
    __result58__ = (_Bool)1;
    return __result58__;
}

char* sUnionNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value58;
char* __exception_result_var_b42;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
    # 34 "15union.c"
    __result59__ = __result_obj__ = (come_push_stackframe("15union.c", 34),__exception_result_var_b42=((char*)(right_value58=__builtin_string("sUnionNode"))), come_pop_stackframe(), __exception_result_var_b42);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58;
    __freed_obj__ = 0;
    return __result59__;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_74;
struct sClass* klass_75;
_Bool _if_conditional141;
int __exception_result_var_b43;
_Bool _if_conditional142;
void* right_value59;
void* right_value60;
struct buffer* __exception_result_var_b44;
struct buffer* buf_76;
void* right_value61;
char* __exception_result_var_b45;
struct buffer* __exception_result_var_b46;
struct list$1tuple2$2charphsTypephph* o2_saved_77;
struct tuple2$2charphsTypeph* __exception_result_var_b49;
struct tuple2$2charphsTypeph* it_80;
_Bool __exception_result_var_b50;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* __exception_result_var_b53;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_83;
struct sType* type_84;
void* right_value62;
char* __exception_result_var_b54;
struct buffer* __exception_result_var_b55;
struct buffer* __exception_result_var_b56;
void* right_value63;
char* __exception_result_var_b57;
struct buffer* __exception_result_var_b58;
_Bool __exception_result_var_b59;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value64;
char* __exception_result_var_b60;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_74, 0, sizeof(struct sType*));
memset(&klass_75, 0, sizeof(struct sClass*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&buf_76, 0, sizeof(struct buffer*));
memset(&right_value61, 0, sizeof(void*));
memset(&o2_saved_77, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_80, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_83, 0, sizeof(char*));
memset(&type_84, 0, sizeof(struct sType*));
memset(&name_83, 0, sizeof(char*));
memset(&type_84, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
    # 39 "15union.c"
    type_74=((struct sUnionNode*)come_null_check(self, "15union.c", 39))->mType;
    # 40 "15union.c"
    klass_75=((struct sType*)come_null_check(type_74, "15union.c", 40))->mClass;
    # 69 "15union.c"
    # 42 "15union.c"
    if(_if_conditional141=!((struct sClass*)come_null_check(klass_75, "15union.c", 42))->mOutputed,    _if_conditional141) {
        # 43 "15union.c"
        ((struct sClass*)come_null_check(klass_75, "15union.c", 43))->mOutputed=(_Bool)1;
        # 67 "15union.c"
        # 45 "15union.c"
        if(_if_conditional142=(come_push_stackframe("15union.c", 45),__exception_result_var_b43=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_75, "15union.c", 45))->mFields, "15union.c", 45))), come_pop_stackframe(), __exception_result_var_b43)>0,        _if_conditional142) {
            # 46 "15union.c"
            buf_76=(struct buffer*)come_increment_ref_count((come_push_stackframe("15union.c", 46),__exception_result_var_b44=((struct buffer*)(right_value60=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value59=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 46))))))), come_pop_stackframe(), __exception_result_var_b44));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value60;
            __freed_obj__ = 0;
            # 48 "15union.c"
            (come_push_stackframe("15union.c", 48),__exception_result_var_b46=buffer_append_str(((struct buffer*)come_null_check(buf_76, "15union.c", 48)),(come_push_stackframe("15union.c", 48),__exception_result_var_b45=((char*)(right_value61=xsprintf("union %s\n{\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(type_74, "15union.c", 48))->mClass, "15union.c", 48))->mName))), come_pop_stackframe(), __exception_result_var_b45)), come_pop_stackframe(), __exception_result_var_b46);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value61;
            __freed_obj__ = 0;
            # 57 "15union.c"
            for(
            o2_saved_77=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_75, "15union.c", 50))->mFields)),it_80=(come_push_stackframe("15union.c", 50),__exception_result_var_b49=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "15union.c", 50))), come_pop_stackframe(), __exception_result_var_b49) ,            0;            _for_condtionalA3=            !(come_push_stackframe("15union.c", 50),__exception_result_var_b50=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "15union.c", 50))), come_pop_stackframe(), __exception_result_var_b50) ,            _for_condtionalA3;            it_80=(come_push_stackframe("15union.c", 50),__exception_result_var_b53=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "15union.c", 50))), come_pop_stackframe(), __exception_result_var_b53) ,            0            ){
                # 51 "15union.c"
                multiple_assgin_var1=it_80;
                name_83=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
                type_84=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
                # 53 "15union.c"
                (come_push_stackframe("15union.c", 53),__exception_result_var_b55=buffer_append_str(((struct buffer*)come_null_check(buf_76, "15union.c", 53)),(come_push_stackframe("15union.c", 53),__exception_result_var_b54=((char*)(right_value62=make_define_var(type_84,name_83,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b54)), come_pop_stackframe(), __exception_result_var_b55);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                # 54 "15union.c"
                (come_push_stackframe("15union.c", 54),__exception_result_var_b56=buffer_append_str(((struct buffer*)come_null_check(buf_76, "15union.c", 54)),";\n"), come_pop_stackframe(), __exception_result_var_b56);
                if(name_83 && !__freed_obj__) { name_83 = come_decrement_ref_count(name_83, (void*)0, (void*)0, 0, 0, 0); }
                if(type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_77 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_77, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 57 "15union.c"
            (come_push_stackframe("15union.c", 57),__exception_result_var_b58=buffer_append_str(((struct buffer*)come_null_check(buf_76, "15union.c", 57)),(come_push_stackframe("15union.c", 57),__exception_result_var_b57=((char*)(right_value63=xsprintf("};\n"))), come_pop_stackframe(), __exception_result_var_b57)), come_pop_stackframe(), __exception_result_var_b58);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value63;
            __freed_obj__ = 0;
            # 66 "15union.c"
            # 59 "15union.c"
            if(_if_conditional150=((struct sInfo*)come_null_check(info, "15union.c", 59))->output_header_file&&(come_push_stackframe("15union.c", 59),__exception_result_var_b59=string_operator_not_equals(((struct sClass*)come_null_check(klass_75, "15union.c", 59))->mDeclareSName,((struct sInfo*)come_null_check(info, "15union.c", 59))->base_sname), come_pop_stackframe(), __exception_result_var_b59),            _if_conditional150) {
            }
            else {
                # 65 "15union.c"
                # 62 "15union.c"
                if(_if_conditional151=((struct sUnionNode*)come_null_check(self, "15union.c", 62))->mOutput,                _if_conditional151) {
                    # 63 "15union.c"
                    (come_push_stackframe("15union.c", 63),add_come_code_at_source_head(info,"%s",(come_push_stackframe("15union.c", 63),__exception_result_var_b60=((char*)(right_value64=buffer_to_string(((struct buffer*)come_null_check(buf_76, "15union.c", 63))))), come_pop_stackframe(), __exception_result_var_b60)),come_pop_stackframe());
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                }
            }
            if(buf_76 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_76, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    # 69 "15union.c"
    __result68__ = (_Bool)1;
    return __result68__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 417 "./comelang2.h"
            __result60__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 417))->len;
            return __result60__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
struct tuple2$2charphsTypeph* result_78;
void* __exception_result_var_b47;
struct tuple2$2charphsTypeph* __result61__;
_Bool _if_conditional144;
struct tuple2$2charphsTypeph* __result62__;
struct tuple2$2charphsTypeph* result_79;
void* __exception_result_var_b48;
struct tuple2$2charphsTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
                # 343 "./comelang2.h"
                # 338 "./comelang2.h"
                if(_if_conditional143=self==((void*)0),                _if_conditional143) {
                    # 339 "./comelang2.h"
                    # 340 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b47=memset(&result_78,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b47);
                    # 341 "./comelang2.h"
                    __result61__ = __result_obj__ = result_78;
                    return __result61__;
                }
                # 343 "./comelang2.h"
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->head;
                # 349 "./comelang2.h"
                # 345 "./comelang2.h"
                if(_if_conditional144=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 345))->it,                _if_conditional144) {
                    # 346 "./comelang2.h"
                    __result62__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                    return __result62__;
                }
                # 349 "./comelang2.h"
                # 350 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b48=memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b48);
                # 351 "./comelang2.h"
                __result63__ = __result_obj__ = result_79;
                return __result63__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 373 "./comelang2.h"
                __result64__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
                return __result64__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct tuple2$2charphsTypeph* result_81;
void* __exception_result_var_b51;
struct tuple2$2charphsTypeph* __result65__;
_Bool _if_conditional146;
struct tuple2$2charphsTypeph* __result66__;
struct tuple2$2charphsTypeph* result_82;
void* __exception_result_var_b52;
struct tuple2$2charphsTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
                # 361 "./comelang2.h"
                # 355 "./comelang2.h"
                if(_if_conditional145=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),                _if_conditional145) {
                    # 356 "./comelang2.h"
                    # 357 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b51=memset(&result_81,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b51);
                    # 358 "./comelang2.h"
                    __result65__ = __result_obj__ = result_81;
                    return __result65__;
                }
                # 361 "./comelang2.h"
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
                # 367 "./comelang2.h"
                # 363 "./comelang2.h"
                if(_if_conditional146=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 363))->it,                _if_conditional146) {
                    # 364 "./comelang2.h"
                    __result66__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                    return __result66__;
                }
                # 367 "./comelang2.h"
                # 368 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b52=memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b52);
                # 369 "./comelang2.h"
                __result67__ = __result_obj__ = result_82;
                return __result67__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional15;
struct list_item$1tuple2$2charphsTypephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 176 "./comelang2.h"
                it_85=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 176))->head;
                # 182 "./comelang2.h"
                while(_while_condtional15=it_85!=((void*)0),                _while_condtional15) {
                    # 178 "./comelang2.h"
                    prev_it_86=it_85;
                    # 179 "./comelang2.h"
                    it_85=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_85, "./comelang2.h", 179))->next;
                    # 180 "./comelang2.h"
                    if(prev_it_86 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional147;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional147=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                        _if_conditional147) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "tuple2$2charphsTypephp_finalize"
                                # 0 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional148=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                                _if_conditional148) {
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 2 "tuple2$2charphsTypephp_finalize"
                                # 1 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional149=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                                _if_conditional149) {
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

int sUnionNode_sline(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 74 "15union.c"
    __result69__ = ((struct sUnionNode*)come_null_check(self, "15union.c", 74))->sline;
    return __result69__;
}

char* sUnionNode_sname(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value65;
char* __exception_result_var_b61;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
    # 79 "15union.c"
    __result70__ = __result_obj__ = (come_push_stackframe("15union.c", 79),__exception_result_var_b61=((char*)(right_value65=__builtin_string(((struct sUnionNode*)come_null_check(self, "15union.c", 79))->sname))), come_pop_stackframe(), __exception_result_var_b61);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value65;
    __freed_obj__ = 0;
    return __result70__;
}

struct sNode* parse_union(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_87;
_Bool output_88;
struct sClass* __exception_result_var_b64;
_Bool _if_conditional156;
void* right_value67;
void* right_value68;
char* __exception_result_var_b65;
void* right_value69;
struct sClass* __exception_result_var_b66;
struct sClass* __dec_obj30;
void* right_value75;
char* __exception_result_var_b89;
void* right_value89;
struct map$2charphsClassph* __exception_result_var_b92;
struct sClass* __exception_result_var_b93;
void* right_value90;
struct sClass* __dec_obj39;
void* right_value91;
void* right_value92;
struct sType* __exception_result_var_b94;
struct sType* type_117;
int __exception_result_var_b95;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b96;
_Bool _while_condtional21;
void* right_value93;
struct tuple3$3sTypephcharphbool* __exception_result_var_b97;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type2_120;
char* name_121;
_Bool err_122;
_Bool _if_conditional203;
int __exception_result_var_b98;
int __exception_result_var_b99;
_Bool _if_conditional204;
void* right_value97;
void* right_value100;
struct tuple2$2charphsTypeph* __exception_result_var_b100;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b101;
_Bool _if_conditional207;
void* right_value101;
void* right_value102;
struct sUnionNode* __exception_result_var_b102;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* right_value106;
struct sNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_87, 0, sizeof(struct sClass*));
memset(&output_88, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&type_117, 0, sizeof(struct sType*));
memset(&right_value93, 0, sizeof(void*));
memset(&type2_120, 0, sizeof(struct sType*));
memset(&name_121, 0, sizeof(char*));
memset(&err_122, 0, sizeof(_Bool));
memset(&type2_120, 0, sizeof(struct sType*));
memset(&name_121, 0, sizeof(char*));
memset(&err_122, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
    # 84 "15union.c"
    # 85 "15union.c"
    # 96 "15union.c"
    # 86 "15union.c"
    if(_if_conditional156=(come_push_stackframe("15union.c", 86),__exception_result_var_b64=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 86))->classes, "15union.c", 86)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b64)==((void*)0),    _if_conditional156) {
        # 87 "15union.c"
        output_88=(_Bool)1;
        # 88 "15union.c"
        __dec_obj30=klass_87;
        klass_87=(struct sClass*)come_increment_ref_count((come_push_stackframe("15union.c", 88),__exception_result_var_b66=((struct sClass*)(right_value69=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value67=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 88)))),(come_push_stackframe("15union.c", 88),__exception_result_var_b65=((char*)(right_value68=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b65),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b66));
        if(__dec_obj30) { come_call_finalizer(sClass_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value68;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value69;
        __freed_obj__ = 0;
        # 89 "15union.c"
        (come_push_stackframe("15union.c", 89),__exception_result_var_b92=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 89))->classes, "15union.c", 89)),(char*)come_increment_ref_count((come_push_stackframe("15union.c", 89),__exception_result_var_b89=((char*)(right_value75=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b89)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value89=sClass_clone(klass_87))))), come_pop_stackframe(), __exception_result_var_b92);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value75;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value89;
        __freed_obj__ = 0;
    }
    else {
        # 92 "15union.c"
        output_88=(_Bool)0;
        # 93 "15union.c"
        __dec_obj39=klass_87;
        klass_87=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value90=sClass_clone((come_push_stackframe("15union.c", 93),__exception_result_var_b93=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 93))->classes, "15union.c", 93)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b93)))));
        if(__dec_obj39) { come_call_finalizer(sClass_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = 0;
    }
    # 96 "15union.c"
    type_117=(struct sType*)come_increment_ref_count((come_push_stackframe("15union.c", 96),__exception_result_var_b94=((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 96)))),type_name,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b94));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value92;
    __freed_obj__ = 0;
    # 98 "15union.c"
    (come_push_stackframe("15union.c", 98),__exception_result_var_b95=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b95);
    # 100 "15union.c"
    (come_push_stackframe("15union.c", 100),__exception_result_var_b96=list$1tuple2$2charphsTypephph_reset(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(type_117, "15union.c", 100))->mClass, "15union.c", 100))->mFields, "15union.c", 100))), come_pop_stackframe(), __exception_result_var_b96);
    # 122 "15union.c"
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        # 103 "15union.c"
        multiple_assgin_var2=(come_push_stackframe("15union.c", 103),__exception_result_var_b97=((struct tuple3$3sTypephcharphbool*)(right_value93=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b97);
        type2_120=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_121=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_122=multiple_assgin_var2->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
        # 109 "15union.c"
        # 105 "15union.c"
        if(_if_conditional203=!err_122,        _if_conditional203) {
            # 106 "15union.c"
            (come_push_stackframe("15union.c", 106),__exception_result_var_b98=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "15union.c", 106))->sname,((struct sInfo*)come_null_check(info, "15union.c", 106))->sline), come_pop_stackframe(), __exception_result_var_b98);
            # 107 "15union.c"
            (come_push_stackframe("15union.c", 107),exit(2),come_pop_stackframe());
        }
        # 109 "15union.c"
        (come_push_stackframe("15union.c", 109),__exception_result_var_b99=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b99);
        # 115 "15union.c"
        # 111 "15union.c"
        if(_if_conditional204=!((struct sInfo*)come_null_check(info, "15union.c", 111))->no_output_err,        _if_conditional204) {
            # 112 "15union.c"
            (come_push_stackframe("15union.c", 112),__exception_result_var_b101=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(type_117, "15union.c", 112))->mClass, "15union.c", 112))->mFields, "15union.c", 112)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("15union.c", 112),__exception_result_var_b100=((struct tuple2$2charphsTypeph*)(right_value100=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value97=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 112)))),(char*)come_increment_ref_count(name_121),(struct sType*)come_increment_ref_count(type2_120)))), come_pop_stackframe(), __exception_result_var_b100))), come_pop_stackframe(), __exception_result_var_b101);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value97;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value100;
            __freed_obj__ = 0;
        }
        # 120 "15union.c"
        # 115 "15union.c"
        if(_if_conditional207=*((struct sInfo*)come_null_check(info, "15union.c", 115))->p==125,        _if_conditional207) {
            # 116 "15union.c"
            ((struct sInfo*)come_null_check(info, "15union.c", 116))->p++;
            # 117 "15union.c"
            (come_push_stackframe("15union.c", 117),skip_spaces_and_lf(info),come_pop_stackframe());
            # 118 "15union.c"
            if(type2_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_120, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_121 && !__freed_obj__) { name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        if(type2_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_121 && !__freed_obj__) { name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 122 "15union.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 122);
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("15union.c", 122),__exception_result_var_b102=((struct sUnionNode*)(right_value102=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value101=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 122)))),(struct sType*)come_increment_ref_count(type_117),output_88,info))), come_pop_stackframe(), __exception_result_var_b102));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sUnionNode_sline;
    _inf_value1->sname=(void*)sUnionNode_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    __result96__ = __result_obj__ = ((struct sNode*)(right_value106=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_87 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value101;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value102;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[4] = right_value106;
    __freed_obj__ = 0;
    return __result96__;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_87 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b62;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional16;
_Bool _if_conditional152;
void* right_value66;
struct optional$2boolbool* __exception_result_var_b63;
_Bool _if_conditional153;
struct sClass* __result71__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sClass* __result72__;
struct sClass* __result73__;
struct sClass* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
memset(&right_value66, 0, sizeof(void*));
        # 1265 "./comelang2.h"
        hash_89=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b62=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b62)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1265))->size;
        # 1266 "./comelang2.h"
        it_90=hash_89;
        # 1290 "./comelang2.h"
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            # 1288 "./comelang2.h"
            # 1269 "./comelang2.h"
            if(_if_conditional152=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_90],            _if_conditional152) {
                # 1276 "./comelang2.h"
                # 1271 "./comelang2.h"
                if(_if_conditional153=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b63=((struct optional$2boolbool*)(right_value66=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_90], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b63)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66),
                (right_value66 && right_value66 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value66, 
                __freed_obj__ = 0, 
                _if_conditional153) {
                    # 1273 "./comelang2.h"
                    __result71__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1273))->items[it_90];
                    return __result71__;
                }
                # 1276 "./comelang2.h"
                it_90++;
                # 1284 "./comelang2.h"
                # 1278 "./comelang2.h"
                if(_if_conditional154=it_90>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1278))->size,                _if_conditional154) {
                    # 1279 "./comelang2.h"
                    it_90=0;
                }
                else {
                    # 1284 "./comelang2.h"
                    # 1281 "./comelang2.h"
                    if(_if_conditional155=it_90==hash_89,                    _if_conditional155) {
                        # 1282 "./comelang2.h"
                        __result72__ = __result_obj__ = default_value;
                        return __result72__;
                    }
                }
            }
            else {
                # 1286 "./comelang2.h"
                __result73__ = __result_obj__ = default_value;
                return __result73__;
            }
        }
        # 1290 "./comelang2.h"
        __result74__ = __result_obj__ = default_value;
        return __result74__;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sClass_finalize"
            # 0 "sClass_finalize"
            if(_if_conditional157=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName!=((void*)0),            _if_conditional157) {
                # 0 "sClass_finalize"
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 2 "sClass_finalize"
            # 1 "sClass_finalize"
            if(_if_conditional158=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields!=((void*)0),            _if_conditional158) {
                # 1 "sClass_finalize"
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sClass_finalize"
            # 2 "sClass_finalize"
            if(_if_conditional159=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName!=((void*)0),            _if_conditional159) {
                # 2 "sClass_finalize"
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
unsigned int __exception_result_var_b79;
unsigned int hash_106;
unsigned int it_107;
_Bool _while_condtional18;
_Bool _if_conditional168;
void* right_value73;
struct optional$2boolbool* __exception_result_var_b80;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct list$1charp* __exception_result_var_b81;
struct list$1charp* __exception_result_var_b82;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
int __exception_result_var_b83;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool same_key_exist_108;
char* __exception_result_var_b84;
char* it2_109;
_Bool __exception_result_var_b85;
_Bool _for_condtionalA5;
char* __exception_result_var_b86;
void* right_value74;
struct optional$2boolbool* __exception_result_var_b87;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct list$1charp* __exception_result_var_b88;
struct map$2charphsClassph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_106, 0, sizeof(unsigned int));
memset(&it_107, 0, sizeof(unsigned int));
memset(&right_value73, 0, sizeof(void*));
memset(&same_key_exist_108, 0, sizeof(_Bool));
memset(&it2_109, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
            # 1432 "./comelang2.h"
            # 1429 "./comelang2.h"
            if(_if_conditional160=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->size,            _if_conditional160) {
                # 1430 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1430),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
            }
            # 1432 "./comelang2.h"
            hash_106=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b79=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b79)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1432))->size;
            # 1433 "./comelang2.h"
            it_107=hash_106;
            # 1491 "./comelang2.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1489 "./comelang2.h"
                # 1436 "./comelang2.h"
                if(_if_conditional168=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_107],                _if_conditional168) {
                    # 1459 "./comelang2.h"
                    # 1438 "./comelang2.h"
                    if(_if_conditional169=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b80=((struct optional$2boolbool*)(right_value73=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_107], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b80)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73),
                    (right_value73 && right_value73 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value73, 
                    __freed_obj__ = 0, 
                    _if_conditional169) {
                        # 1449 "./comelang2.h"
                        # 1440 "./comelang2.h"
                        if(_if_conditional170=1,                        _if_conditional170) {
                            # 1441 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b81=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_107]), come_pop_stackframe(), __exception_result_var_b81);
                            # 1442 "./comelang2.h"
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_107] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_107] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_107], (void*)0, (void*)0, 0, 0, 0); }
                            # 1443 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_107]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1446 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b82=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_107]), come_pop_stackframe(), __exception_result_var_b82);
                            # 1447 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_107]=key;
                        }
                        # 1456 "./comelang2.h"
                        # 1449 "./comelang2.h"
                        if(_if_conditional171=1,                        _if_conditional171) {
                            # 1450 "./comelang2.h"
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1450))->items[it_107] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1450))->items[it_107], (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 1451 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->items[it_107]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1454 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1454))->items[it_107]=item;
                        }
                        # 1456 "./comelang2.h"
                        break;
                    }
                    # 1459 "./comelang2.h"
                    it_107++;
                    # 1469 "./comelang2.h"
                    # 1461 "./comelang2.h"
                    if(_if_conditional172=it_107>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1461))->size,                    _if_conditional172) {
                        # 1462 "./comelang2.h"
                        it_107=0;
                    }
                    else {
                        # 1469 "./comelang2.h"
                        # 1464 "./comelang2.h"
                        if(_if_conditional173=it_107==hash_106,                        _if_conditional173) {
                            # 1465 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b83=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b83);
                            # 1466 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1466),stackframe(),come_pop_stackframe());
                            # 1467 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1467),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    # 1471 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1471))->item_existance[it_107]=(_Bool)1;
                    # 1478 "./comelang2.h"
                    # 1472 "./comelang2.h"
                    if(_if_conditional174=1,                    _if_conditional174) {
                        # 1473 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_107]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1476 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_107]=key;
                    }
                    # 1485 "./comelang2.h"
                    # 1478 "./comelang2.h"
                    if(_if_conditional175=1,                    _if_conditional175) {
                        # 1479 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1479))->items[it_107]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1482 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1482))->items[it_107]=item;
                    }
                    # 1485 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1485))->len++;
                    # 1487 "./comelang2.h"
                    break;
                }
            }
            # 1491 "./comelang2.h"
            same_key_exist_108=(_Bool)0;
            # 1499 "./comelang2.h"
            for(
            it2_109=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b84=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b84) ,            0;            _for_condtionalA5=            !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b85=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b85) ,            _for_condtionalA5;            it2_109=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b86=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b86) ,            0            ){
                # 1497 "./comelang2.h"
                # 1494 "./comelang2.h"
                if(_if_conditional176=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b87=((struct optional$2boolbool*)(right_value74=string_equals(((char*)come_null_check(it2_109, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b87)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74),
                (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value74, 
                __freed_obj__ = 0, 
                _if_conditional176) {
                    # 1495 "./comelang2.h"
                    same_key_exist_108=(_Bool)1;
                }
            }
            # 1503 "./comelang2.h"
            # 1499 "./comelang2.h"
            if(_if_conditional177=!same_key_exist_108,            _if_conditional177) {
                # 1500 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b88=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b88);
            }
            # 1503 "./comelang2.h"
            __result82__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result82__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_91;
void* right_value70;
char** keys_92;
void* right_value71;
struct sClass** items_93;
void* right_value72;
_Bool* item_existance_94;
int len_95;
char* __exception_result_var_b69;
char* it_98;
_Bool __exception_result_var_b70;
_Bool _for_condtionalA4;
char* __exception_result_var_b73;
struct sClass* default_value_101;
void* __exception_result_var_b74;
struct sClass* __exception_result_var_b75;
struct sClass* it2_102;
unsigned int __exception_result_var_b76;
unsigned int hash_103;
int n_104;
_Bool _while_condtional17;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
int __exception_result_var_b77;
struct sClass* default_value_105;
struct sClass* __exception_result_var_b78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_91, 0, sizeof(int));
memset(&right_value70, 0, sizeof(void*));
memset(&keys_92, 0, sizeof(char**));
memset(&right_value71, 0, sizeof(void*));
memset(&items_93, 0, sizeof(struct sClass**));
memset(&right_value72, 0, sizeof(void*));
memset(&item_existance_94, 0, sizeof(_Bool*));
memset(&len_95, 0, sizeof(int));
memset(&it_98, 0, sizeof(char*));
memset(&default_value_101, 0, sizeof(struct sClass*));
memset(&it2_102, 0, sizeof(struct sClass*));
memset(&hash_103, 0, sizeof(unsigned int));
memset(&n_104, 0, sizeof(int));
memset(&default_value_105, 0, sizeof(struct sClass*));
                    # 1376 "./comelang2.h"
                    size_91=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                    # 1377 "./comelang2.h"
                    keys_92=(char**)come_increment_ref_count(((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(size_91)), "./comelang2.h", 1377))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                    # 1378 "./comelang2.h"
                    items_93=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value71=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_91)), "./comelang2.h", 1378))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value71;
                    __freed_obj__ = 0;
                    # 1379 "./comelang2.h"
                    item_existance_94=(_Bool*)come_increment_ref_count(((_Bool*)(right_value72=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_91)), "./comelang2.h", 1379))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
                    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value72;
                    __freed_obj__ = 0;
                    # 1381 "./comelang2.h"
                    len_95=0;
                    # 1416 "./comelang2.h"
                    for(
                    it_98=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b69=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b69) ,                    0;                    _for_condtionalA4=                    !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b70=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b70) ,                    _for_condtionalA4;                    it_98=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b73=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b73) ,                    0                    ){
                        # 1384 "./comelang2.h"
                        # 1385 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b74=memset(&default_value_101,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b74);
                        # 1386 "./comelang2.h"
                        it2_102=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b75=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386)),it_98,default_value_101), come_pop_stackframe(), __exception_result_var_b75);
                        # 1387 "./comelang2.h"
                        hash_103=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b76=string_get_hash_key(((char*)come_null_check(it_98, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b76)%size_91;
                        # 1388 "./comelang2.h"
                        n_104=hash_103;
                        # 1414 "./comelang2.h"
                        while(_while_condtional17=(_Bool)1,                        _while_condtional17) {
                            # 1413 "./comelang2.h"
                            # 1391 "./comelang2.h"
                            if(_if_conditional165=item_existance_94[n_104],                            _if_conditional165) {
                                # 1393 "./comelang2.h"
                                n_104++;
                                # 1403 "./comelang2.h"
                                # 1395 "./comelang2.h"
                                if(_if_conditional166=n_104>=size_91,                                _if_conditional166) {
                                    # 1396 "./comelang2.h"
                                    n_104=0;
                                }
                                else {
                                    # 1403 "./comelang2.h"
                                    # 1398 "./comelang2.h"
                                    if(_if_conditional167=n_104==hash_103,                                    _if_conditional167) {
                                        # 1399 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b77=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b77);
                                        # 1400 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1400),stackframe(),come_pop_stackframe());
                                        # 1401 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1401),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                # 1405 "./comelang2.h"
                                item_existance_94[n_104]=(_Bool)1;
                                # 1406 "./comelang2.h"
                                keys_92[n_104]=it_98;
                                # 1407 "./comelang2.h"
                                # 1408 "./comelang2.h"
                                items_93[n_104]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b78=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408)),it_98,default_value_105), come_pop_stackframe(), __exception_result_var_b78);
                                # 1410 "./comelang2.h"
                                len_95++;
                                # 1411 "./comelang2.h"
                                break;
                            }
                        }
                    }
                    # 1416 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1416),come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->items),come_pop_stackframe());
                    # 1417 "./comelang2.h"
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    # 1418 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1418),come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1418))->keys),come_pop_stackframe());
                    # 1420 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1420))->keys=keys_92;
                    # 1421 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1421))->items=items_93;
                    # 1422 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422))->item_existance=item_existance_94;
                    # 1424 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size=size_91;
                    # 1425 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1425))->len=len_95;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
char* result_96;
void* __exception_result_var_b67;
char* __result75__;
_Bool _if_conditional162;
char* __result76__;
char* result_97;
void* __exception_result_var_b68;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_96, 0, sizeof(char*));
memset(&result_97, 0, sizeof(char*));
                        # 1343 "./comelang2.h"
                        # 1338 "./comelang2.h"
                        if(_if_conditional161=self==((void*)0),                        _if_conditional161) {
                            # 1339 "./comelang2.h"
                            # 1340 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b67=memset(&result_96,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b67);
                            # 1341 "./comelang2.h"
                            __result75__ = __result_obj__ = result_96;
                            return __result75__;
                        }
                        # 1343 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                        # 1349 "./comelang2.h"
                        # 1345 "./comelang2.h"
                        if(_if_conditional162=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                        _if_conditional162) {
                            # 1346 "./comelang2.h"
                            __result76__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                            return __result76__;
                        }
                        # 1349 "./comelang2.h"
                        # 1350 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b68=memset(&result_97,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b68);
                        # 1351 "./comelang2.h"
                        __result77__ = __result_obj__ = result_97;
                        return __result77__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1372 "./comelang2.h"
                        __result78__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                        return __result78__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
char* result_99;
void* __exception_result_var_b71;
char* __result79__;
_Bool _if_conditional164;
char* __result80__;
char* result_100;
void* __exception_result_var_b72;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
                        # 1360 "./comelang2.h"
                        # 1355 "./comelang2.h"
                        if(_if_conditional163=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                        _if_conditional163) {
                            # 1356 "./comelang2.h"
                            # 1357 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b71=memset(&result_99,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b71);
                            # 1358 "./comelang2.h"
                            __result79__ = __result_obj__ = result_99;
                            return __result79__;
                        }
                        # 1360 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                        # 1366 "./comelang2.h"
                        # 1362 "./comelang2.h"
                        if(_if_conditional164=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                        _if_conditional164) {
                            # 1363 "./comelang2.h"
                            __result80__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                            return __result80__;
                        }
                        # 1366 "./comelang2.h"
                        # 1367 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b72=memset(&result_100,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b72);
                        # 1368 "./comelang2.h"
                        __result81__ = __result_obj__ = result_100;
                        return __result81__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
struct sClass* __result83__;
void* right_value76;
struct sClass* result_110;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value77;
char* __dec_obj31;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value87;
struct list$1tuple2$2charphsTypephph* __dec_obj37;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value88;
char* __dec_obj38;
struct sClass* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&result_110, 0, sizeof(struct sClass*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional178=self==(void*)0,            _if_conditional178) {
                # 2 "sClass_clone"
                __result83__ = __result_obj__ = (void*)0;
                return __result83__;
            }
            # 3 "sClass_clone"
            result_110=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value76=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value76;
            __freed_obj__ = 0;
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                # 4 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                # 5 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                # 6 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional182=self!=((void*)0),            _if_conditional182) {
                # 7 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional183=self!=((void*)0),            _if_conditional183) {
                # 8 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                # 9 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                # 10 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                # 11 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional187=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName!=((void*)0),            _if_conditional187) {
                # 12 "sClass_clone"
                __dec_obj31=((struct sClass*)come_null_check(result_110, "sClass_clone", 12))->mName;
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                # 13 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                # 14 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional190=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields!=((void*)0),            _if_conditional190) {
                # 15 "sClass_clone"
                __dec_obj37=((struct sClass*)come_null_check(result_110, "sClass_clone", 15))->mFields;
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value87=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
                if(__dec_obj37) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                # 16 "sClass_clone"
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional200=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName!=((void*)0),            _if_conditional200) {
                # 17 "sClass_clone"
                __dec_obj38=((struct sClass*)come_null_check(result_110, "sClass_clone", 17))->mDeclareSName;
                ((struct sClass*)come_null_check(result_110, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value88=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
                if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88;
                __freed_obj__ = 0;
            }
            # 18 "sClass_clone"
            __result90__ = __result_obj__ = result_110;
            if(result_110 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_110, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result90__;
            if(result_110 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_110, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
struct list$1tuple2$2charphsTypephph* __result84__;
void* right_value78;
void* right_value79;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b90;
struct list$1tuple2$2charphsTypephph* result_111;
struct list_item$1tuple2$2charphsTypephph* it_112;
_Bool _while_condtional19;
void* right_value86;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b91;
struct list$1tuple2$2charphsTypephph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&result_111, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_112, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value86, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional191=self==((void*)0),                    _if_conditional191) {
                        # 193 "./comelang2.h"
                        __result84__ = __result_obj__ = ((void*)0);
                        return __result84__;
                    }
                    # 195 "./comelang2.h"
                    result_111=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b90=((struct list$1tuple2$2charphsTypephph*)(right_value79=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value78=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b90));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value78;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value79;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_112=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional19=it_112!=((void*)0),                    _while_condtional19) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b91=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_111, "./comelang2.h", 199)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value86=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_112, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b91);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value86;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_112=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_112, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
                    __result89__ = __result_obj__ = result_111;
                    if(result_111 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_111, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result89__;
                    if(result_111 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_111, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 157 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
                        __result85__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result85__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
void* right_value80;
struct list_item$1tuple2$2charphsTypephph* litem_113;
struct tuple2$2charphsTypeph* __dec_obj32;
_Bool _if_conditional195;
void* right_value81;
struct list_item$1tuple2$2charphsTypephph* litem_114;
struct tuple2$2charphsTypeph* __dec_obj33;
void* right_value82;
struct list_item$1tuple2$2charphsTypephph* litem_115;
struct tuple2$2charphsTypeph* __dec_obj34;
struct list$1tuple2$2charphsTypephph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional192=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional192) {
                                # 209 "./comelang2.h"
                                litem_113=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value80=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                                if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value80;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj32=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 213))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 213))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj32) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 215 "./comelang2.h"
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_113;
                                # 216 "./comelang2.h"
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 216))->head=litem_113;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional195=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional195) {
                                    # 219 "./comelang2.h"
                                    litem_114=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value81=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value81;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 221))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj33=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 223))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 223))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj33) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_114;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_114;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_115=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value82=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value82;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 231))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj34=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 233))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 233))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    if(__dec_obj34) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_115;
                                    # 236 "./comelang2.h"
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_115;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
                            __result86__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result86__;
                            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1!=((void*)0),                                    _if_conditional193) {
                                        # 0 "tuple2$2charphsTypeph_finalize"
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    # 2 "tuple2$2charphsTypeph_finalize"
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    if(_if_conditional194=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2!=((void*)0),                                    _if_conditional194) {
                                        # 1 "tuple2$2charphsTypeph_finalize"
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
struct tuple2$2charphsTypeph* __result87__;
void* right_value83;
struct tuple2$2charphsTypeph* result_116;
_Bool _if_conditional197;
void* right_value84;
char* __dec_obj35;
_Bool _if_conditional198;
void* right_value85;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&result_116, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional196=self==(void*)0,                            _if_conditional196) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result87__ = __result_obj__ = (void*)0;
                                return __result87__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_116=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value83=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value83;
                            __freed_obj__ = 0;
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional197=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1!=((void*)0),                            _if_conditional197) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj35=((struct tuple2$2charphsTypeph*)come_null_check(result_116, "tuple2$2charphsTypephp_clone", 4))->v1;
                                ((struct tuple2$2charphsTypeph*)come_null_check(result_116, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value84=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                                if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value84;
                                __freed_obj__ = 0;
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional198=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2!=((void*)0),                            _if_conditional198) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj36=((struct tuple2$2charphsTypeph*)come_null_check(result_116, "tuple2$2charphsTypephp_clone", 5))->v2;
                                ((struct tuple2$2charphsTypeph*)come_null_check(result_116, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                                if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value85;
                                __freed_obj__ = 0;
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result88__ = __result_obj__ = result_116;
                            if(result_116 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_116, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result88__;
                            if(result_116 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_116, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_118;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_119;
struct list$1tuple2$2charphsTypephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_118, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 483 "./comelang2.h"
        it_118=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 483))->head;
        # 490 "./comelang2.h"
        while(_while_condtional20=it_118!=((void*)0),        _while_condtional20) {
            # 485 "./comelang2.h"
            prev_it_119=it_118;
            # 486 "./comelang2.h"
            it_118=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_118, "./comelang2.h", 486))->next;
            # 487 "./comelang2.h"
            if(prev_it_119 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 490 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
        # 491 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
        # 493 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 493))->len=0;
        # 495 "./comelang2.h"
        __result91__ = __result_obj__ = self;
        return __result91__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
_Bool _if_conditional202;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional201=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1!=((void*)0),            _if_conditional201) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional202=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2!=((void*)0),            _if_conditional202) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
void* right_value94;
struct list_item$1tuple2$2charphsTypephph* litem_123;
struct tuple2$2charphsTypeph* __dec_obj40;
_Bool _if_conditional206;
void* right_value95;
struct list_item$1tuple2$2charphsTypephph* litem_124;
struct tuple2$2charphsTypeph* __dec_obj41;
void* right_value96;
struct list_item$1tuple2$2charphsTypephph* litem_125;
struct tuple2$2charphsTypeph* __dec_obj42;
struct list$1tuple2$2charphsTypephph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional205=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional205) {
                    # 279 "./comelang2.h"
                    litem_123=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value94=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value94;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_123, "./comelang2.h", 281))->prev=((void*)0);
                    # 282 "./comelang2.h"
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_123, "./comelang2.h", 282))->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj40=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_123, "./comelang2.h", 283))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_123, "./comelang2.h", 283))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj40) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_123;
                    # 286 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 286))->head=litem_123;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional206=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional206) {
                        # 289 "./comelang2.h"
                        litem_124=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value95=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value95;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_124, "./comelang2.h", 291))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 291))->head;
                        # 292 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_124, "./comelang2.h", 292))->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj41=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_124, "./comelang2.h", 293))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_124, "./comelang2.h", 293))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj41) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_124;
                        # 296 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_124;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_125=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value96=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_125, "./comelang2.h", 301))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 301))->tail;
                        # 302 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_125, "./comelang2.h", 302))->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj42=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_125, "./comelang2.h", 303))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_125, "./comelang2.h", 303))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj42) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_125;
                        # 306 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_125;
                    }
                }
                # 309 "./comelang2.h"
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 309))->len++;
                # 311 "./comelang2.h"
                __result92__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result92__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
char* __dec_obj43;
void* right_value99;
struct sType* __dec_obj44;
struct tuple2$2charphsTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
                # 1814 "./comelang2.h"
                __dec_obj43=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1814))->v1;
                ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1814))->v1=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(v1))));
                if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = 0;
                # 1815 "./comelang2.h"
                __dec_obj44=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1815))->v2;
                ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1815))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(v2))));
                if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value99;
                __freed_obj__ = 0;
                # 1817 "./comelang2.h"
                __result93__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result93__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b103;
_Bool _if_conditional215;
void* right_value107;
char* __exception_result_var_b104;
char* type_name_127;
void* right_value108;
void* right_value109;
char* __exception_result_var_b105;
void* right_value110;
struct sClass* __exception_result_var_b106;
struct map$2charphsClassph* __exception_result_var_b107;
void* right_value111;
void* right_value112;
struct sType* __exception_result_var_b108;
struct sType* type_128;
int __exception_result_var_b109;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b110;
_Bool _while_condtional22;
void* right_value113;
struct tuple3$3sTypephcharphbool* __exception_result_var_b111;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type2_129;
char* name_130;
_Bool err_131;
_Bool _if_conditional216;
int __exception_result_var_b112;
int __exception_result_var_b113;
void* right_value114;
void* right_value115;
struct tuple2$2charphsTypeph* __exception_result_var_b114;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b115;
_Bool _if_conditional217;
void* right_value116;
void* right_value117;
struct sUnionNode* __exception_result_var_b116;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* right_value121;
struct sNode* __result99__;
void* right_value122;
char* __exception_result_var_b117;
void* right_value123;
struct sNode* __exception_result_var_b118;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&type_name_127, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&right_value113, 0, sizeof(void*));
memset(&type2_129, 0, sizeof(struct sType*));
memset(&name_130, 0, sizeof(char*));
memset(&err_131, 0, sizeof(_Bool));
memset(&type2_129, 0, sizeof(struct sType*));
memset(&name_130, 0, sizeof(char*));
memset(&err_131, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
    # 158 "15union.c"
    # 127 "15union.c"
    if(_if_conditional215=(come_push_stackframe("15union.c", 127),__exception_result_var_b103=string_operator_equals(buf,"union"), come_pop_stackframe(), __exception_result_var_b103),    _if_conditional215) {
        # 128 "15union.c"
        type_name_127=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 128),__exception_result_var_b104=((char*)(right_value107=parse_word(info))), come_pop_stackframe(), __exception_result_var_b104));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value107;
        __freed_obj__ = 0;
        # 130 "15union.c"
        (come_push_stackframe("15union.c", 130),__exception_result_var_b107=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 130))->classes, "15union.c", 130)),(char*)come_increment_ref_count(type_name_127),(struct sClass*)come_increment_ref_count((come_push_stackframe("15union.c", 130),__exception_result_var_b106=((struct sClass*)(right_value110=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value108=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 130)))),(come_push_stackframe("15union.c", 130),__exception_result_var_b105=((char*)(right_value109=__builtin_string(type_name_127))), come_pop_stackframe(), __exception_result_var_b105),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b106))), come_pop_stackframe(), __exception_result_var_b107);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value108;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value109;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value110;
        __freed_obj__ = 0;
        # 132 "15union.c"
        type_128=(struct sType*)come_increment_ref_count((come_push_stackframe("15union.c", 132),__exception_result_var_b108=((struct sType*)(right_value112=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value111=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 132)))),type_name_127,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b108));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value111;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value112;
        __freed_obj__ = 0;
        # 134 "15union.c"
        (come_push_stackframe("15union.c", 134),__exception_result_var_b109=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b109);
        # 136 "15union.c"
        (come_push_stackframe("15union.c", 136),__exception_result_var_b110=list$1tuple2$2charphsTypephph_reset(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(type_128, "15union.c", 136))->mClass, "15union.c", 136))->mFields, "15union.c", 136))), come_pop_stackframe(), __exception_result_var_b110);
        # 155 "15union.c"
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            # 139 "15union.c"
            multiple_assgin_var3=(come_push_stackframe("15union.c", 139),__exception_result_var_b111=((struct tuple3$3sTypephcharphbool*)(right_value113=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b111);
            type2_129=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
            name_130=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
            err_131=multiple_assgin_var3->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value113;
            __freed_obj__ = 0;
            # 144 "15union.c"
            # 140 "15union.c"
            if(_if_conditional216=!err_131,            _if_conditional216) {
                # 141 "15union.c"
                (come_push_stackframe("15union.c", 141),__exception_result_var_b112=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "15union.c", 141))->sname,((struct sInfo*)come_null_check(info, "15union.c", 141))->sline), come_pop_stackframe(), __exception_result_var_b112);
                # 142 "15union.c"
                (come_push_stackframe("15union.c", 142),exit(2),come_pop_stackframe());
            }
            # 144 "15union.c"
            (come_push_stackframe("15union.c", 144),__exception_result_var_b113=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b113);
            # 146 "15union.c"
            (come_push_stackframe("15union.c", 146),__exception_result_var_b115=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(type_128, "15union.c", 146))->mClass, "15union.c", 146))->mFields, "15union.c", 146)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("15union.c", 146),__exception_result_var_b114=((struct tuple2$2charphsTypeph*)(right_value115=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value114=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 146)))),(char*)come_increment_ref_count(name_130),(struct sType*)come_increment_ref_count(type2_129)))), come_pop_stackframe(), __exception_result_var_b114))), come_pop_stackframe(), __exception_result_var_b115);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value114;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value115);
            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value115;
            __freed_obj__ = 0;
            # 153 "15union.c"
            # 148 "15union.c"
            if(_if_conditional217=*((struct sInfo*)come_null_check(info, "15union.c", 148))->p==125,            _if_conditional217) {
                # 149 "15union.c"
                ((struct sInfo*)come_null_check(info, "15union.c", 149))->p++;
                # 150 "15union.c"
                (come_push_stackframe("15union.c", 150),skip_spaces_and_lf(info),come_pop_stackframe());
                # 151 "15union.c"
                if(type2_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_129, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_130 && !__freed_obj__) { name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(type2_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_129, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_130 && !__freed_obj__) { name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 155 "15union.c"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 155);
        _inf_obj_value2=come_increment_ref_count((come_push_stackframe("15union.c", 155),__exception_result_var_b116=((struct sUnionNode*)(right_value117=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value116=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 155)))),(struct sType*)come_increment_ref_count(type_128),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b116));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sUnionNode_sline;
        _inf_value2->sname=(void*)sUnionNode_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        __result99__ = __result_obj__ = ((struct sNode*)(right_value121=_inf_value2));
        if(type_name_127 && !__freed_obj__) { type_name_127 = come_decrement_ref_count(type_name_127, (void*)0, (void*)0, 0, 0, 0); }
        if(type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value116;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value117;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[8] = right_value121;
        __freed_obj__ = 0;
        return __result99__;
        if(type_name_127 && !__freed_obj__) { type_name_127 = come_decrement_ref_count(type_name_127, (void*)0, (void*)0, 0, 0, 0); }
        if(type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 158 "15union.c"
    __result100__ = __result_obj__ = (come_push_stackframe("15union.c", 158),__exception_result_var_b118=((struct sNode*)(right_value123=top_level_v96((char*)come_increment_ref_count((come_push_stackframe("15union.c", 158),__exception_result_var_b117=((char*)(right_value122=__builtin_string(buf))), come_pop_stackframe(), __exception_result_var_b117)),head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b118);
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    return __result100__;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sUnionNode_finalize(struct sUnionNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sUnionNode_finalize"
            # 0 "sUnionNode_finalize"
            if(_if_conditional218=self!=((void*)0)&&((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 0))->mType!=((void*)0),            _if_conditional218) {
                # 0 "sUnionNode_finalize"
                if(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "sUnionNode_finalize"
            # 1 "sUnionNode_finalize"
            if(_if_conditional219=self!=((void*)0)&&((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 1))->sname!=((void*)0),            _if_conditional219) {
                # 1 "sUnionNode_finalize"
                if(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 1))->sname && !__freed_obj__) { ((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 1))->sname = come_decrement_ref_count(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
struct sUnionNode* __result97__;
void* right_value118;
struct sUnionNode* result_132;
_Bool _if_conditional221;
void* right_value119;
struct sType* __dec_obj47;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value120;
char* __dec_obj48;
_Bool _if_conditional224;
struct sUnionNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&result_132, 0, sizeof(struct sUnionNode*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
            # 3 "sUnionNode_clone"
            # 2 "sUnionNode_clone"
            if(_if_conditional220=self==(void*)0,            _if_conditional220) {
                # 2 "sUnionNode_clone"
                __result97__ = __result_obj__ = (void*)0;
                return __result97__;
            }
            # 3 "sUnionNode_clone"
            result_132=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value118=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
            # 5 "sUnionNode_clone"
            # 4 "sUnionNode_clone"
            if(_if_conditional221=self!=((void*)0)&&((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 4))->mType!=((void*)0),            _if_conditional221) {
                # 4 "sUnionNode_clone"
                __dec_obj47=((struct sUnionNode*)come_null_check(result_132, "sUnionNode_clone", 4))->mType;
                ((struct sUnionNode*)come_null_check(result_132, "sUnionNode_clone", 4))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 4))->mType))));
                if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value119;
                __freed_obj__ = 0;
            }
            # 6 "sUnionNode_clone"
            # 5 "sUnionNode_clone"
            if(_if_conditional222=self!=((void*)0),            _if_conditional222) {
                # 5 "sUnionNode_clone"
                ((struct sUnionNode*)come_null_check(result_132, "sUnionNode_clone", 5))->sline=((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 5))->sline;
            }
            # 7 "sUnionNode_clone"
            # 6 "sUnionNode_clone"
            if(_if_conditional223=self!=((void*)0)&&((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 6))->sname!=((void*)0),            _if_conditional223) {
                # 6 "sUnionNode_clone"
                __dec_obj48=((struct sUnionNode*)come_null_check(result_132, "sUnionNode_clone", 6))->sname;
                ((struct sUnionNode*)come_null_check(result_132, "sUnionNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 6))->sname))));
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value120;
                __freed_obj__ = 0;
            }
            # 8 "sUnionNode_clone"
            # 7 "sUnionNode_clone"
            if(_if_conditional224=self!=((void*)0),            _if_conditional224) {
                # 7 "sUnionNode_clone"
                ((struct sUnionNode*)come_null_check(result_132, "sUnionNode_clone", 7))->mOutput=((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 7))->mOutput;
            }
            # 8 "sUnionNode_clone"
            __result98__ = __result_obj__ = result_132;
            if(result_132 && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,result_132, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result98__;
            if(result_132 && !__freed_obj__) { come_call_finalizer(sUnionNode_finalize,result_132, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool define_struct_133;
char* p_134;
int sline_135;
_Bool __exception_result_var_b119;
_Bool _if_conditional225;
void* right_value124;
char* __exception_result_var_b120;
char* type_name_136;
_Bool _if_conditional226;
void* right_value125;
char* __exception_result_var_b121;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value126;
char* __exception_result_var_b122;
char* type_name_137;
void* right_value127;
struct sNode* __exception_result_var_b123;
struct sNode* __result101__;
void* right_value128;
struct sNode* __exception_result_var_b124;
struct sNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&define_struct_133, 0, sizeof(_Bool));
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
memset(&right_value124, 0, sizeof(void*));
memset(&type_name_136, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&type_name_137, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    # 164 "15union.c"
    define_struct_133=(_Bool)0;
    # 185 "15union.c"
    {
        # 166 "15union.c"
        p_134=((struct sInfo*)come_null_check(info, "15union.c", 166))->p;
        # 167 "15union.c"
        sline_135=((struct sInfo*)come_null_check(info, "15union.c", 167))->sline;
        # 181 "15union.c"
        # 169 "15union.c"
        if(_if_conditional225=(come_push_stackframe("15union.c", 169),__exception_result_var_b119=charp_operator_equals(buf,"union"), come_pop_stackframe(), __exception_result_var_b119),        _if_conditional225) {
            # 170 "15union.c"
            type_name_136=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 170),__exception_result_var_b120=((char*)(right_value124=parse_word(info))), come_pop_stackframe(), __exception_result_var_b120));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value124;
            __freed_obj__ = 0;
            # 179 "15union.c"
            # 172 "15union.c"
            if(_if_conditional226=*((struct sInfo*)come_null_check(info, "15union.c", 172))->p==123,            _if_conditional226) {
                # 173 "15union.c"
                (come_push_stackframe("15union.c", 173),__exception_result_var_b121=((char*)(right_value125=skip_block(info))), come_pop_stackframe(), __exception_result_var_b121);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                # 178 "15union.c"
                # 175 "15union.c"
                if(_if_conditional227=*((struct sInfo*)come_null_check(info, "15union.c", 175))->p==59,                _if_conditional227) {
                    # 176 "15union.c"
                    define_struct_133=(_Bool)1;
                }
            }
            if(type_name_136 && !__freed_obj__) { type_name_136 = come_decrement_ref_count(type_name_136, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 181 "15union.c"
        ((struct sInfo*)come_null_check(info, "15union.c", 181))->p=p_134;
        # 182 "15union.c"
        ((struct sInfo*)come_null_check(info, "15union.c", 182))->sline=sline_135;
    }
    # 191 "15union.c"
    # 185 "15union.c"
    if(_if_conditional228=define_struct_133,    _if_conditional228) {
        # 186 "15union.c"
        type_name_137=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 186),__exception_result_var_b122=((char*)(right_value126=parse_word(info))), come_pop_stackframe(), __exception_result_var_b122));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value126;
        __freed_obj__ = 0;
        # 188 "15union.c"
        __result101__ = __result_obj__ = (come_push_stackframe("15union.c", 188),__exception_result_var_b123=((struct sNode*)(right_value127=parse_union((char*)come_increment_ref_count(type_name_137),info))), come_pop_stackframe(), __exception_result_var_b123);
        if(type_name_137 && !__freed_obj__) { type_name_137 = come_decrement_ref_count(type_name_137, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value127;
        __freed_obj__ = 0;
        return __result101__;
        if(type_name_137 && !__freed_obj__) { type_name_137 = come_decrement_ref_count(type_name_137, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 191 "15union.c"
    __result102__ = __result_obj__ = (come_push_stackframe("15union.c", 191),__exception_result_var_b124=((struct sNode*)(right_value128=string_node_v14(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b124);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value128;
    __freed_obj__ = 0;
    return __result102__;
}

