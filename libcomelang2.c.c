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
char* gComeStackFrameSName[10];
int gComeStackFrameSLine[10];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeader
{
    struct sMemHeader* next;
    struct sMemHeader* prev;
    char* sname[10];
    int sline[10];
};
struct sMemHeader* gAllocMem;
struct optional$2_IO_FILEpbool
{
    struct _IO_FILE* v1;
    _Bool v2;
};

// header function
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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
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

char* dirname(char* __path);

char* __xpg_basename(char* __path);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline);
static void come_free_mem_of_heap_pool(void* mem);
void* come_calloc(long int count, long int size, char* sname, int sline);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long int self, long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* string_equals(char* self, char* right);

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
struct optional$2boolbool* charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(int c);

_Bool xiswblank(int c);

_Bool xiswdigit(int c);

_Bool xiswalnum(int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(long int left, long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2);
static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
static void list$1charph_finalize(struct list$1charph* self);
static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self);
struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* charp_print(char* self);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

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

void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
int i_5;
_Bool _for_condtionalA1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_5, 0, sizeof(int));
    # 34 "libcomelang2.c"
    # 19 "libcomelang2.c"
    if(_if_conditional5=gNumComeStackFrame==10,    _if_conditional5) {
        # 20 "libcomelang2.c"
        # 25 "libcomelang2.c"
        for(
        i_5=0 ,        0;        _for_condtionalA1=        i_5<10-1 ,        _for_condtionalA1;        i_5++ ,        0        ){
            # 22 "libcomelang2.c"
            gComeStackFrameSName[i_5]=gComeStackFrameSName[i_5+1];
            # 23 "libcomelang2.c"
            gComeStackFrameSLine[i_5]=gComeStackFrameSLine[i_5+1];
        }
        # 25 "libcomelang2.c"
        gComeStackFrameSName[i_5]=sname;
        # 26 "libcomelang2.c"
        gComeStackFrameSLine[i_5]=sline;
    }
    else {
        # 29 "libcomelang2.c"
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        # 30 "libcomelang2.c"
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        # 32 "libcomelang2.c"
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 41 "libcomelang2.c"
    # 38 "libcomelang2.c"
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        # 39 "libcomelang2.c"
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_6;
void* right_value12;
int i_7;
_Bool _for_condtionalA2;
void* right_value13;
_Bool _if_conditional7;
void* right_value14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
memset(&i_7, 0, sizeof(int));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    # 45 "libcomelang2.c"
    buf_6=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 45))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    # 46 "libcomelang2.c"
    buffer_append_str(buf_6,((char*)(right_value12=xsprintf("%s %d\n",sname,sline))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value12;
    __freed_obj__ = 0;
    # 51 "libcomelang2.c"
    for(
    i_7=gNumComeStackFrame-2 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        # 48 "libcomelang2.c"
        buffer_append_str(buf_6,((char*)(right_value13=xsprintf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
    }
    # 54 "libcomelang2.c"
    # 51 "libcomelang2.c"
    if(_if_conditional7=gComeStackFrameBuffer,    _if_conditional7) {
        # 52 "libcomelang2.c"
        free(gComeStackFrameBuffer);
    }
    # 54 "libcomelang2.c"
    gComeStackFrameBuffer=strdup(((char*)(right_value14=buffer_to_string(buf_6))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value14;
    __freed_obj__ = 0;
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void exception_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 59 "libcomelang2.c"
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_8;
_Bool _for_condtionalA3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_8, 0, sizeof(int));
    # 67 "libcomelang2.c"
    for(
    i_8=gNumComeStackFrame-1 ,    0;    _for_condtionalA3=    i_8>=0 ,    _for_condtionalA3;    i_8-- ,    0    ){
        # 65 "libcomelang2.c"
        printf("%s %d\n",gComeStackFrameSName[i_8],gComeStackFrameSLine[i_8]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    # 71 "libcomelang2.c"
    __result13__ = __result_obj__ = ((char*)(right_value15=__builtin_string(gComeStackFrameBuffer)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15;
    __freed_obj__ = 0;
    return __result13__;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 82 "libcomelang2.c"
    # 76 "libcomelang2.c"
    if(_if_conditional8=mem==((void*)0),    _if_conditional8) {
        # 77 "libcomelang2.c"
        printf("%s %d: null check error\n",sname,sline);
        # 78 "libcomelang2.c"
        stackframe();
        # 79 "libcomelang2.c"
        exit(2);
    }
    # 82 "libcomelang2.c"
    __result14__ = __result_obj__ = mem;
    return __result14__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 93 "libcomelang2.c"
    # 87 "libcomelang2.c"
    if(_if_conditional9=mem==((void*)0),    _if_conditional9) {
        # 88 "libcomelang2.c"
        printf("%s %d: null check error\n",sname,sline);
        # 89 "libcomelang2.c"
        stackframe();
        # 90 "libcomelang2.c"
        exit(2);
    }
    # 99 "libcomelang2.c"
    # 93 "libcomelang2.c"
    if(_if_conditional10=mem<begin,    _if_conditional10) {
        # 94 "libcomelang2.c"
        printf("%s %d: range check error\n",sname,sline);
        # 95 "libcomelang2.c"
        stackframe();
        # 96 "libcomelang2.c"
        exit(2);
    }
    # 105 "libcomelang2.c"
    # 99 "libcomelang2.c"
    if(_if_conditional11=mem>=end,    _if_conditional11) {
        # 100 "libcomelang2.c"
        printf("%s %d: range check error\n",sname,sline);
        # 101 "libcomelang2.c"
        stackframe();
        # 102 "libcomelang2.c"
        exit(2);
    }
    # 105 "libcomelang2.c"
    __result15__ = __result_obj__ = mem;
    return __result15__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result16__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 119 "libcomelang2.c"
    # 110 "libcomelang2.c"
    if(_if_conditional12=!self,    _if_conditional12) {
        # 111 "libcomelang2.c"
        block(parent);
        # 115 "libcomelang2.c"
        # 112 "libcomelang2.c"
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            # 113 "libcomelang2.c"
            __result16__ = self;
            return __result16__;
        }
        # 115 "libcomelang2.c"
        stackframe();
        # 116 "libcomelang2.c"
        exit(1);
    }
    # 119 "libcomelang2.c"
    __result17__ = self;
    return __result17__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 124 "libcomelang2.c"
    __result18__ = self;
    return __result18__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result19__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 137 "libcomelang2.c"
    # 129 "libcomelang2.c"
    if(_if_conditional14=self<0,    _if_conditional14) {
        # 130 "libcomelang2.c"
        block(parent);
        # 135 "libcomelang2.c"
        # 132 "libcomelang2.c"
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            # 133 "libcomelang2.c"
            __result19__ = self;
            return __result19__;
        }
    }
    # 137 "libcomelang2.c"
    __result20__ = self;
    return __result20__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 151 "libcomelang2.c"
    # 142 "libcomelang2.c"
    if(_if_conditional16=self<0,    _if_conditional16) {
        # 143 "libcomelang2.c"
        block(parent);
        # 147 "libcomelang2.c"
        # 144 "libcomelang2.c"
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            # 145 "libcomelang2.c"
            __result21__ = self;
            return __result21__;
        }
        # 147 "libcomelang2.c"
        stackframe();
        # 148 "libcomelang2.c"
        exit(1);
    }
    # 151 "libcomelang2.c"
    __result22__ = self;
    return __result22__;
}

int int_value(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 156 "libcomelang2.c"
    __result23__ = self;
    return __result23__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 168 "libcomelang2.c"
    # 161 "libcomelang2.c"
    if(_if_conditional18=self<0,    _if_conditional18) {
        # 162 "libcomelang2.c"
        block(parent);
        # 166 "libcomelang2.c"
        # 163 "libcomelang2.c"
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            # 164 "libcomelang2.c"
            __result24__ = self;
            return __result24__;
        }
    }
    # 168 "libcomelang2.c"
    __result25__ = self;
    return __result25__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 180 "libcomelang2.c"
    # 173 "libcomelang2.c"
    if(_if_conditional20=!self,    _if_conditional20) {
        # 174 "libcomelang2.c"
        block(parent);
        # 178 "libcomelang2.c"
        # 175 "libcomelang2.c"
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            # 176 "libcomelang2.c"
            __result26__ = self;
            return __result26__;
        }
    }
    # 180 "libcomelang2.c"
    __result27__ = self;
    return __result27__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result28__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 193 "libcomelang2.c"
    # 185 "libcomelang2.c"
    if(_if_conditional22=!self,    _if_conditional22) {
        # 186 "libcomelang2.c"
        block(parent);
        # 191 "libcomelang2.c"
        # 188 "libcomelang2.c"
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            # 189 "libcomelang2.c"
            __result28__ = self;
            return __result28__;
        }
    }
    # 193 "libcomelang2.c"
    __result29__ = self;
    return __result29__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 198 "libcomelang2.c"
    printf("%s...",msg);
    # 203 "libcomelang2.c"
    # 199 "libcomelang2.c"
    if(_if_conditional24=!test,    _if_conditional24) {
        # 200 "libcomelang2.c"
        puts("false");
        # 201 "libcomelang2.c"
        exit(2);
    }
    # 203 "libcomelang2.c"
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 231 "libcomelang2.c"
    gComeMallocLib=come_malloc;
    # 233 "libcomelang2.c"
    gComeDebugLib=come_debug;
    # 233 "libcomelang2.c"
    gComeGCLib=come_gc;
    # 235 "libcomelang2.c"
    gComeStackFrameBuffer=((void*)0);
    # 237 "libcomelang2.c"
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
_Bool _if_conditional26;
struct sMemHeader* it_9;
int n_10;
_Bool _while_condtional1;
_Bool flag_11;
int i_12;
_Bool _for_condtionalA4;
_Bool _if_conditional27;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&n_10, 0, sizeof(int));
memset(&flag_11, 0, sizeof(_Bool));
memset(&i_12, 0, sizeof(int));
    # 246 "libcomelang2.c"
    # 242 "libcomelang2.c"
    if(_if_conditional25=gComeStackFrameBuffer,    _if_conditional25) {
        # 243 "libcomelang2.c"
        free(gComeStackFrameBuffer);
    }
    # 266 "libcomelang2.c"
    # 246 "libcomelang2.c"
    if(_if_conditional26=gComeMallocLib,    _if_conditional26) {
        # 247 "libcomelang2.c"
        it_9=gAllocMem;
        # 248 "libcomelang2.c"
        n_10=0;
        # 264 "libcomelang2.c"
        while(_while_condtional1=it_9,        _while_condtional1) {
            # 250 "libcomelang2.c"
            n_10++;
            # 252 "libcomelang2.c"
            flag_11=(_Bool)0;
            # 259 "libcomelang2.c"
            for(
            i_12=0 ,            0;            _for_condtionalA4=            i_12<10 ,            _for_condtionalA4;            i_12++ ,            0            ){
                # 258 "libcomelang2.c"
                # 254 "libcomelang2.c"
                if(_if_conditional27=it_9->sname[i_12],                _if_conditional27) {
                    # 255 "libcomelang2.c"
                    printf("%s %d, ",it_9->sname[i_12],it_9->sline[i_12]);
                    # 256 "libcomelang2.c"
                    flag_11=(_Bool)1;
                }
            }
            # 262 "libcomelang2.c"
            # 259 "libcomelang2.c"
            if(_if_conditional28=flag_11,            _if_conditional28) {
                # 260 "libcomelang2.c"
                puts("");
            }
            # 262 "libcomelang2.c"
            it_9=it_9->next;
        }
        # 264 "libcomelang2.c"
        printf("%d memory leaks. %d alloc, %d free.\n",n_10,gNumAlloc,gNumFree);
    }
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
void* __result30__;
void* result_13;
struct sMemHeader* it_14;
_Bool _if_conditional30;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_13, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct sMemHeader*));
    # 298 "libcomelang2.c"
    # 270 "libcomelang2.c"
    if(_if_conditional29=!gComeMallocLib,    _if_conditional29) {
        # 271 "libcomelang2.c"
        __result30__ = __result_obj__ = calloc(1,size);
        return __result30__;
    }
    else {
        # 274 "libcomelang2.c"
        result_13=calloc(1,size+sizeof(struct sMemHeader));
        # 276 "libcomelang2.c"
        it_14=result_13;
        # 278 "libcomelang2.c"
        come_push_stackframe(sname,sline);
        # 280 "libcomelang2.c"
        memcpy(it_14->sname,gComeStackFrameSName,sizeof(char*)*10);
        # 281 "libcomelang2.c"
        memcpy(it_14->sline,gComeStackFrameSLine,sizeof(int)*10);
        # 283 "libcomelang2.c"
        come_pop_stackframe();
        # 285 "libcomelang2.c"
        it_14->next=gAllocMem;
        # 286 "libcomelang2.c"
        it_14->prev=((void*)0);
        # 292 "libcomelang2.c"
        # 288 "libcomelang2.c"
        if(_if_conditional30=gAllocMem,        _if_conditional30) {
            # 289 "libcomelang2.c"
            gAllocMem->prev=it_14;
        }
        # 292 "libcomelang2.c"
        gAllocMem=it_14;
        # 294 "libcomelang2.c"
        gNumAlloc++;
        # 296 "libcomelang2.c"
        __result31__ = __result_obj__ = (char*)result_13+sizeof(struct sMemHeader);
        return __result31__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
struct sMemHeader* it_15;
struct sMemHeader* prev_it_16;
struct sMemHeader* next_it_17;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct sMemHeader*));
memset(&prev_it_16, 0, sizeof(struct sMemHeader*));
memset(&next_it_17, 0, sizeof(struct sMemHeader*));
    # 335 "libcomelang2.c"
    # 302 "libcomelang2.c"
    if(_if_conditional31=mem,    _if_conditional31) {
        # 334 "libcomelang2.c"
        # 303 "libcomelang2.c"
        if(_if_conditional32=gComeGCLib,        _if_conditional32) {
        }
        else {
            # 334 "libcomelang2.c"
            # 305 "libcomelang2.c"
            if(_if_conditional33=!gComeMallocLib,            _if_conditional33) {
                # 306 "libcomelang2.c"
                free(mem);
            }
            else {
                # 309 "libcomelang2.c"
                it_15=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                # 311 "libcomelang2.c"
                prev_it_16=it_15->prev;
                # 312 "libcomelang2.c"
                next_it_17=it_15->next;
                # 330 "libcomelang2.c"
                # 314 "libcomelang2.c"
                if(_if_conditional34=gAllocMem==it_15,                _if_conditional34) {
                    # 315 "libcomelang2.c"
                    gAllocMem=next_it_17;
                    # 320 "libcomelang2.c"
                    # 317 "libcomelang2.c"
                    if(_if_conditional35=gAllocMem,                    _if_conditional35) {
                        # 318 "libcomelang2.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 325 "libcomelang2.c"
                    # 322 "libcomelang2.c"
                    if(_if_conditional36=prev_it_16,                    _if_conditional36) {
                        # 323 "libcomelang2.c"
                        prev_it_16->next=next_it_17;
                    }
                    # 328 "libcomelang2.c"
                    # 325 "libcomelang2.c"
                    if(_if_conditional37=next_it_17,                    _if_conditional37) {
                        # 326 "libcomelang2.c"
                        next_it_17->prev=prev_it_16;
                    }
                }
                # 330 "libcomelang2.c"
                free((char*)mem-sizeof(struct sMemHeader));
                # 332 "libcomelang2.c"
                gNumFree++;
            }
        }
    }
}

void* come_calloc(long int count, long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_18;
long int* ref_count_19;
long int* size2_20;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_18, 0, sizeof(char*));
memset(&ref_count_19, 0, sizeof(long int*));
memset(&size2_20, 0, sizeof(long int*));
    # 379 "libcomelang2.c"
    mem_18=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    # 381 "libcomelang2.c"
    ref_count_19=(long int*)mem_18;
    # 383 "libcomelang2.c"
    *ref_count_19=0;
    # 385 "libcomelang2.c"
    size2_20=(long int*)(mem_18+sizeof(long int));
    # 387 "libcomelang2.c"
    *size2_20=size*count+sizeof(long int)+sizeof(long int);
    # 389 "libcomelang2.c"
    __result32__ = __result_obj__ = mem_18+sizeof(long int)+sizeof(long int);
    return __result32__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
long int* ref_count_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_21, 0, sizeof(long int*));
    # 397 "libcomelang2.c"
    # 394 "libcomelang2.c"
    if(_if_conditional38=mem==((void*)0),    _if_conditional38) {
        # 395 "libcomelang2.c"
        return;
    }
    # 405 "libcomelang2.c"
    ref_count_21=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 407 "libcomelang2.c"
    come_free_mem_of_heap_pool((char*)ref_count_21);
}

void* come_memdup(void* block, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
void* __result33__;
char* mem_22;
long int* size_p_23;
long int size_24;
void* result_25;
void* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_22, 0, sizeof(char*));
memset(&size_p_23, 0, sizeof(long int*));
memset(&size_24, 0, sizeof(long int));
memset(&result_25, 0, sizeof(void*));
    # 415 "libcomelang2.c"
    # 412 "libcomelang2.c"
    if(_if_conditional39=!block,    _if_conditional39) {
        # 413 "libcomelang2.c"
        __result33__ = __result_obj__ = ((void*)0);
        return __result33__;
    }
    # 423 "libcomelang2.c"
    mem_22=(char*)block-sizeof(long int)-sizeof(long int);
    # 425 "libcomelang2.c"
    size_p_23=(long int*)(mem_22+sizeof(long int));
    # 427 "libcomelang2.c"
    size_24=*size_p_23-sizeof(long int)-sizeof(long int);
    # 429 "libcomelang2.c"
    result_25=come_calloc(1,size_24,sname,sline);
    # 431 "libcomelang2.c"
    memcpy(result_25,block,size_24);
    # 433 "libcomelang2.c"
    __result34__ = __result_obj__ = result_25;
    return __result34__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
void* __result35__;
long int* ref_count_26;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_26, 0, sizeof(long int*));
    # 441 "libcomelang2.c"
    # 438 "libcomelang2.c"
    if(_if_conditional40=mem==((void*)0),    _if_conditional40) {
        # 439 "libcomelang2.c"
        __result35__ = __result_obj__ = mem;
        return __result35__;
    }
    # 449 "libcomelang2.c"
    ref_count_26=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 451 "libcomelang2.c"
    (*ref_count_26)++;
    # 453 "libcomelang2.c"
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
void* __result37__;
long int* ref_count_27;
void* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_27, 0, sizeof(long int*));
    # 461 "libcomelang2.c"
    # 458 "libcomelang2.c"
    if(_if_conditional41=mem==((void*)0),    _if_conditional41) {
        # 459 "libcomelang2.c"
        __result37__ = __result_obj__ = mem;
        return __result37__;
    }
    # 469 "libcomelang2.c"
    ref_count_27=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 471 "libcomelang2.c"
    printf("ref_count %ld\n",*ref_count_27);
    # 473 "libcomelang2.c"
    __result38__ = __result_obj__ = mem;
    return __result38__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional42;
void* __result39__;
long int* ref_count_28;
_Bool _if_conditional43;
long int count_29;
_Bool _if_conditional44;
_Bool _if_conditional45;
void (*finalizer_30)(void*);
void* __result40__;
void* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_28, 0, sizeof(long int*));
memset(&count_29, 0, sizeof(long int));
memset(&finalizer_30, 0, sizeof(void (*)(void*)));
    # 481 "libcomelang2.c"
    # 478 "libcomelang2.c"
    if(_if_conditional42=mem==((void*)0),    _if_conditional42) {
        # 479 "libcomelang2.c"
        __result39__ = __result_obj__ = ((void*)0);
        return __result39__;
    }
    # 489 "libcomelang2.c"
    ref_count_28=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 495 "libcomelang2.c"
    # 491 "libcomelang2.c"
    if(_if_conditional43=!no_decrement,    _if_conditional43) {
        # 492 "libcomelang2.c"
        (*ref_count_28)--;
    }
    # 495 "libcomelang2.c"
    count_29=*ref_count_28;
    # 507 "libcomelang2.c"
    # 496 "libcomelang2.c"
    if(_if_conditional44=!no_free&&(count_29<=0||force_delete_),    _if_conditional44) {
        # 503 "libcomelang2.c"
        # 497 "libcomelang2.c"
        if(_if_conditional45=protocol_obj&&protocol_fun,        _if_conditional45) {
            # 498 "libcomelang2.c"
            finalizer_30=protocol_fun;
            # 499 "libcomelang2.c"
            finalizer_30(protocol_obj);
            # 501 "libcomelang2.c"
            come_free_object(protocol_obj);
        }
        # 503 "libcomelang2.c"
        come_free_object(mem);
        # 504 "libcomelang2.c"
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    # 507 "libcomelang2.c"
    __result41__ = __result_obj__ = mem;
    return __result41__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
void (*finalizer_31)(void*);
void (*finalizer_32)(void*);
long int* ref_count_33;
_Bool _if_conditional50;
long int count_34;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
void (*finalizer_35)(void*);
_Bool _if_conditional54;
void (*finalizer_36)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_31, 0, sizeof(void (*)(void*)));
memset(&finalizer_32, 0, sizeof(void (*)(void*)));
memset(&ref_count_33, 0, sizeof(long int*));
memset(&count_34, 0, sizeof(long int));
memset(&finalizer_35, 0, sizeof(void (*)(void*)));
memset(&finalizer_36, 0, sizeof(void (*)(void*)));
    # 515 "libcomelang2.c"
    # 512 "libcomelang2.c"
    if(_if_conditional46=mem==((void*)0),    _if_conditional46) {
        # 513 "libcomelang2.c"
        return;
    }
    # 556 "libcomelang2.c"
    # 523 "libcomelang2.c"
    if(_if_conditional47=call_finalizer_only,    _if_conditional47) {
        # 532 "libcomelang2.c"
        # 524 "libcomelang2.c"
        if(_if_conditional48=fun,        _if_conditional48) {
            # 529 "libcomelang2.c"
            # 525 "libcomelang2.c"
            if(_if_conditional49=protocol_obj&&protocol_fun,            _if_conditional49) {
                # 526 "libcomelang2.c"
                finalizer_31=protocol_fun;
                # 527 "libcomelang2.c"
                finalizer_31(protocol_obj);
            }
            # 529 "libcomelang2.c"
            finalizer_32=fun;
            # 530 "libcomelang2.c"
            finalizer_32(mem);
        }
    }
    else {
        # 534 "libcomelang2.c"
        ref_count_33=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        # 540 "libcomelang2.c"
        # 536 "libcomelang2.c"
        if(_if_conditional50=!no_decrement,        _if_conditional50) {
            # 537 "libcomelang2.c"
            (*ref_count_33)--;
        }
        # 540 "libcomelang2.c"
        count_34=*ref_count_33;
        # 555 "libcomelang2.c"
        # 541 "libcomelang2.c"
        if(_if_conditional51=!no_free&&(count_34<=0||force_delete_),        _if_conditional51) {
            # 554 "libcomelang2.c"
            # 542 "libcomelang2.c"
            if(_if_conditional52=mem,            _if_conditional52) {
                # 548 "libcomelang2.c"
                # 543 "libcomelang2.c"
                if(_if_conditional53=protocol_obj&&protocol_fun,                _if_conditional53) {
                    # 544 "libcomelang2.c"
                    finalizer_35=protocol_fun;
                    # 545 "libcomelang2.c"
                    finalizer_35(protocol_obj);
                    # 546 "libcomelang2.c"
                    come_free_object(protocol_obj);
                }
                # 552 "libcomelang2.c"
                # 548 "libcomelang2.c"
                if(_if_conditional54=fun,                _if_conditional54) {
                    # 549 "libcomelang2.c"
                    finalizer_36=fun;
                    # 550 "libcomelang2.c"
                    finalizer_36(mem);
                }
                # 552 "libcomelang2.c"
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
char* __result42__;
int len_37;
void* right_value16;
char* result_38;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_37, 0, sizeof(int));
memset(&right_value16, 0, sizeof(void*));
memset(&result_38, 0, sizeof(char*));
    # 563 "libcomelang2.c"
    # 560 "libcomelang2.c"
    if(_if_conditional55=str==((void*)0),    _if_conditional55) {
        # 561 "libcomelang2.c"
        __result42__ = __result_obj__ = ((void*)0);
        return __result42__;
    }
    # 563 "libcomelang2.c"
    len_37=strlen(str)+1;
    # 565 "libcomelang2.c"
    result_38=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_37)), "libcomelang2.c", 565))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    # 567 "libcomelang2.c"
    strncpy(result_38,str,len_37);
    # 569 "libcomelang2.c"
    __result43__ = __result_obj__ = result_38;
    if(result_38 && !__freed_obj__) { result_38 = come_decrement_ref_count(result_38, (void*)0, (void*)0, 0, 1, 0); }
    return __result43__;
    if(result_38 && !__freed_obj__) { result_38 = come_decrement_ref_count(result_38, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_39;
int i_40;
_Bool _for_condtionalA5;
_Bool _if_conditional56;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_39, 0, sizeof(_Bool));
memset(&i_40, 0, sizeof(int));
    # 574 "libcomelang2.c"
    found_39=(_Bool)0;
    # 581 "libcomelang2.c"
    for(
    i_40=0 ,    0;    _for_condtionalA5=    i_40<len ,    _for_condtionalA5;    i_40++ ,    0    ){
        # 580 "libcomelang2.c"
        # 576 "libcomelang2.c"
        if(_if_conditional56=array[i_40]==element,        _if_conditional56) {
            # 577 "libcomelang2.c"
            found_39=(_Bool)1;
            # 578 "libcomelang2.c"
            break;
        }
    }
    # 581 "libcomelang2.c"
    __result44__ = found_39;
    return __result44__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
char* __dec_obj6;
struct buffer* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    # 589 "libcomelang2.c"
    self->size=128;
    # 590 "libcomelang2.c"
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 590))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    # 591 "libcomelang2.c"
    self->buf[0]=0;
    # 592 "libcomelang2.c"
    self->len=0;
    # 594 "libcomelang2.c"
    __result45__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result45__;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 599 "libcomelang2.c"
    # 599 "libcomelang2.c"
    if(_if_conditional57=self&&self->buf,    _if_conditional57) {
        # 599 "libcomelang2.c"
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 603 "libcomelang2.c"
    # 603 "libcomelang2.c"
    if(_if_conditional58=self&&self->buf,    _if_conditional58) {
        # 603 "libcomelang2.c"
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct buffer* __result46__;
void* right_value18;
struct buffer* result_41;
void* right_value19;
char* __dec_obj7;
struct buffer* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct buffer*));
memset(&right_value19, 0, sizeof(void*));
    # 612 "libcomelang2.c"
    # 608 "libcomelang2.c"
    if(_if_conditional59=self==((void*)0),    _if_conditional59) {
        # 609 "libcomelang2.c"
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    # 612 "libcomelang2.c"
    result_41=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 612))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    # 614 "libcomelang2.c"
    result_41->size=self->size;
    # 615 "libcomelang2.c"
    __dec_obj7=result_41->buf;
    result_41->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 615))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19;
    __freed_obj__ = 0;
    # 616 "libcomelang2.c"
    result_41->len=self->len;
    # 617 "libcomelang2.c"
    memcpy(result_41->buf,self->buf,self->len);
    # 619 "libcomelang2.c"
    __result47__ = __result_obj__ = result_41;
    if(result_41 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result47__;
    if(result_41 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
int __result48__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 627 "libcomelang2.c"
    # 624 "libcomelang2.c"
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        # 625 "libcomelang2.c"
        __result48__ = 0;
        return __result48__;
    }
    # 627 "libcomelang2.c"
    __result49__ = self->len;
    return __result49__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 635 "libcomelang2.c"
    # 632 "libcomelang2.c"
    if(_if_conditional61=self==((void*)0),    _if_conditional61) {
        # 633 "libcomelang2.c"
        return;
    }
    # 635 "libcomelang2.c"
    self->buf[0]=0;
    # 636 "libcomelang2.c"
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 644 "libcomelang2.c"
    # 641 "libcomelang2.c"
    if(_if_conditional62=self==((void*)0),    _if_conditional62) {
        # 642 "libcomelang2.c"
        return;
    }
    # 644 "libcomelang2.c"
    self->len-=len;
    # 645 "libcomelang2.c"
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct buffer* __result50__;
_Bool _if_conditional64;
void* right_value20;
char* old_buf_42;
int old_len_43;
int new_size_44;
void* right_value21;
char* __dec_obj8;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&old_buf_42, 0, sizeof(char*));
memset(&old_len_43, 0, sizeof(int));
memset(&new_size_44, 0, sizeof(int));
memset(&right_value21, 0, sizeof(void*));
    # 653 "libcomelang2.c"
    # 650 "libcomelang2.c"
    if(_if_conditional63=self==((void*)0)||mem==((void*)0),    _if_conditional63) {
        # 651 "libcomelang2.c"
        __result50__ = __result_obj__ = self;
        return __result50__;
    }
    # 664 "libcomelang2.c"
    # 653 "libcomelang2.c"
    if(_if_conditional64=self->len+size+1+1>=self->size,    _if_conditional64) {
        # 654 "libcomelang2.c"
        old_buf_42=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 654))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        # 655 "libcomelang2.c"
        memcpy(old_buf_42,self->buf,self->size);
        # 656 "libcomelang2.c"
        old_len_43=self->len;
        # 657 "libcomelang2.c"
        new_size_44=(self->size+size+1)*2;
        # 658 "libcomelang2.c"
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_44)), "libcomelang2.c", 658))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value21;
        __freed_obj__ = 0;
        # 659 "libcomelang2.c"
        memcpy(self->buf,old_buf_42,old_len_43);
        # 660 "libcomelang2.c"
        self->buf[old_len_43]=0;
        # 661 "libcomelang2.c"
        self->size=new_size_44;
        if(old_buf_42 && !__freed_obj__) { old_buf_42 = come_decrement_ref_count(old_buf_42, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 664 "libcomelang2.c"
    memcpy(self->buf+self->len,mem,size);
    # 665 "libcomelang2.c"
    self->len+=size;
    # 666 "libcomelang2.c"
    self->buf[self->len]=0;
    # 668 "libcomelang2.c"
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct buffer* __result52__;
_Bool _if_conditional66;
void* right_value22;
char* old_buf_45;
int old_len_46;
int new_size_47;
void* right_value23;
char* __dec_obj9;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
    # 676 "libcomelang2.c"
    # 673 "libcomelang2.c"
    if(_if_conditional65=self==((void*)0),    _if_conditional65) {
        # 674 "libcomelang2.c"
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    # 687 "libcomelang2.c"
    # 676 "libcomelang2.c"
    if(_if_conditional66=self->len+1+1+1>=self->size,    _if_conditional66) {
        # 677 "libcomelang2.c"
        old_buf_45=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(self->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value22;
        __freed_obj__ = 0;
        # 678 "libcomelang2.c"
        old_len_46=self->len;
        # 680 "libcomelang2.c"
        new_size_47=(self->size+10+1)*2;
        # 681 "libcomelang2.c"
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2.c", 681))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value23;
        __freed_obj__ = 0;
        # 682 "libcomelang2.c"
        memcpy(self->buf,old_buf_45,old_len_46);
        # 683 "libcomelang2.c"
        self->buf[old_len_46]=0;
        # 684 "libcomelang2.c"
        self->size=new_size_47;
        if(old_buf_45 && !__freed_obj__) { old_buf_45 = come_decrement_ref_count(old_buf_45, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 687 "libcomelang2.c"
    self->buf[self->len]=c;
    # 688 "libcomelang2.c"
    self->len++;
    # 690 "libcomelang2.c"
    self->buf[self->len]=0;
    # 692 "libcomelang2.c"
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
struct buffer* __result54__;
int size_48;
_Bool _if_conditional68;
void* right_value24;
char* old_buf_49;
int old_len_50;
int new_size_51;
void* right_value25;
char* __dec_obj10;
struct buffer* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_48, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&old_buf_49, 0, sizeof(char*));
memset(&old_len_50, 0, sizeof(int));
memset(&new_size_51, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
    # 701 "libcomelang2.c"
    # 697 "libcomelang2.c"
    if(_if_conditional67=self==((void*)0)||mem==((void*)0),    _if_conditional67) {
        # 698 "libcomelang2.c"
        __result54__ = __result_obj__ = self;
        return __result54__;
    }
    # 701 "libcomelang2.c"
    size_48=strlen(mem);
    # 713 "libcomelang2.c"
    # 702 "libcomelang2.c"
    if(_if_conditional68=self->len+size_48+1+1>=self->size,    _if_conditional68) {
        # 703 "libcomelang2.c"
        old_buf_49=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 703))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value24;
        __freed_obj__ = 0;
        # 704 "libcomelang2.c"
        memcpy(old_buf_49,self->buf,self->size);
        # 705 "libcomelang2.c"
        old_len_50=self->len;
        # 706 "libcomelang2.c"
        new_size_51=(self->size+size_48+1)*2;
        # 707 "libcomelang2.c"
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_51)), "libcomelang2.c", 707))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value25;
        __freed_obj__ = 0;
        # 708 "libcomelang2.c"
        memcpy(self->buf,old_buf_49,old_len_50);
        # 709 "libcomelang2.c"
        self->buf[old_len_50]=0;
        # 710 "libcomelang2.c"
        self->size=new_size_51;
        if(old_buf_49 && !__freed_obj__) { old_buf_49 = come_decrement_ref_count(old_buf_49, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 713 "libcomelang2.c"
    memcpy(self->buf+self->len,mem,size_48);
    # 714 "libcomelang2.c"
    self->len+=size_48;
    # 715 "libcomelang2.c"
    self->buf[self->len]=0;
    # 717 "libcomelang2.c"
    __result55__ = __result_obj__ = self;
    return __result55__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
struct buffer* __result56__;
int size_52;
_Bool _if_conditional70;
void* right_value26;
char* old_buf_53;
int old_len_54;
int new_size_55;
void* right_value27;
char* __dec_obj11;
struct buffer* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_52, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&old_buf_53, 0, sizeof(char*));
memset(&old_len_54, 0, sizeof(int));
memset(&new_size_55, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
    # 725 "libcomelang2.c"
    # 722 "libcomelang2.c"
    if(_if_conditional69=self==((void*)0)||mem==((void*)0),    _if_conditional69) {
        # 723 "libcomelang2.c"
        __result56__ = __result_obj__ = self;
        return __result56__;
    }
    # 725 "libcomelang2.c"
    size_52=strlen(mem)+1;
    # 737 "libcomelang2.c"
    # 726 "libcomelang2.c"
    if(_if_conditional70=self->len+size_52+1+1+1>=self->size,    _if_conditional70) {
        # 727 "libcomelang2.c"
        old_buf_53=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 727))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value26;
        __freed_obj__ = 0;
        # 728 "libcomelang2.c"
        memcpy(old_buf_53,self->buf,self->size);
        # 729 "libcomelang2.c"
        old_len_54=self->len;
        # 730 "libcomelang2.c"
        new_size_55=(self->size+size_52+1)*2;
        # 731 "libcomelang2.c"
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_55)), "libcomelang2.c", 731))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value27;
        __freed_obj__ = 0;
        # 732 "libcomelang2.c"
        memcpy(self->buf,old_buf_53,old_len_54);
        # 733 "libcomelang2.c"
        self->buf[old_len_54]=0;
        # 734 "libcomelang2.c"
        self->size=new_size_55;
        if(old_buf_53 && !__freed_obj__) { old_buf_53 = come_decrement_ref_count(old_buf_53, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 737 "libcomelang2.c"
    memcpy(self->buf+self->len,mem,size_52);
    # 738 "libcomelang2.c"
    self->len+=size_52;
    # 739 "libcomelang2.c"
    self->buf[self->len]=0;
    # 740 "libcomelang2.c"
    self->len++;
    # 742 "libcomelang2.c"
    __result57__ = __result_obj__ = self;
    return __result57__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
struct buffer* __result58__;
int* mem_56;
int size_57;
_Bool _if_conditional72;
void* right_value28;
char* old_buf_58;
int old_len_59;
int new_size_60;
void* right_value29;
char* __dec_obj12;
struct buffer* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_56, 0, sizeof(int*));
memset(&size_57, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&old_buf_58, 0, sizeof(char*));
memset(&old_len_59, 0, sizeof(int));
memset(&new_size_60, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
    # 750 "libcomelang2.c"
    # 747 "libcomelang2.c"
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        # 748 "libcomelang2.c"
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    # 750 "libcomelang2.c"
    mem_56=&value;
    # 751 "libcomelang2.c"
    size_57=sizeof(int);
    # 764 "libcomelang2.c"
    # 753 "libcomelang2.c"
    if(_if_conditional72=self->len+size_57+1+1>=self->size,    _if_conditional72) {
        # 754 "libcomelang2.c"
        old_buf_58=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 754))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28;
        __freed_obj__ = 0;
        # 755 "libcomelang2.c"
        memcpy(old_buf_58,self->buf,self->size);
        # 756 "libcomelang2.c"
        old_len_59=self->len;
        # 757 "libcomelang2.c"
        new_size_60=(self->size+size_57+1)*2;
        # 758 "libcomelang2.c"
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_60)), "libcomelang2.c", 758))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value29;
        __freed_obj__ = 0;
        # 759 "libcomelang2.c"
        memcpy(self->buf,old_buf_58,old_len_59);
        # 760 "libcomelang2.c"
        self->buf[old_len_59]=0;
        # 761 "libcomelang2.c"
        self->size=new_size_60;
        if(old_buf_58 && !__freed_obj__) { old_buf_58 = come_decrement_ref_count(old_buf_58, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 764 "libcomelang2.c"
    memcpy(self->buf+self->len,mem_56,size_57);
    # 765 "libcomelang2.c"
    self->len+=size_57;
    # 766 "libcomelang2.c"
    self->buf[self->len]=0;
    # 768 "libcomelang2.c"
    __result59__ = __result_obj__ = self;
    return __result59__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_61;
int size_62;
_Bool _if_conditional73;
void* right_value30;
char* old_buf_63;
int old_len_64;
int new_size_65;
void* right_value31;
char* __dec_obj13;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_61, 0, sizeof(long*));
memset(&size_62, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&old_buf_63, 0, sizeof(char*));
memset(&old_len_64, 0, sizeof(int));
memset(&new_size_65, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
    # 773 "libcomelang2.c"
    mem_61=&value;
    # 774 "libcomelang2.c"
    size_62=sizeof(long);
    # 787 "libcomelang2.c"
    # 776 "libcomelang2.c"
    if(_if_conditional73=self->len+size_62+1+1>=self->size,    _if_conditional73) {
        # 777 "libcomelang2.c"
        old_buf_63=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 777))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value30;
        __freed_obj__ = 0;
        # 778 "libcomelang2.c"
        memcpy(old_buf_63,self->buf,self->size);
        # 779 "libcomelang2.c"
        old_len_64=self->len;
        # 780 "libcomelang2.c"
        new_size_65=(self->size+size_62+1)*2;
        # 781 "libcomelang2.c"
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_65)), "libcomelang2.c", 781))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value31;
        __freed_obj__ = 0;
        # 782 "libcomelang2.c"
        memcpy(self->buf,old_buf_63,old_len_64);
        # 783 "libcomelang2.c"
        self->buf[old_len_64]=0;
        # 784 "libcomelang2.c"
        self->size=new_size_65;
        if(old_buf_63 && !__freed_obj__) { old_buf_63 = come_decrement_ref_count(old_buf_63, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 787 "libcomelang2.c"
    memcpy(self->buf+self->len,mem_61,size_62);
    # 788 "libcomelang2.c"
    self->len+=size_62;
    # 789 "libcomelang2.c"
    self->buf[self->len]=0;
    # 791 "libcomelang2.c"
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
struct buffer* __result61__;
short short* mem_66;
int size_67;
_Bool _if_conditional75;
void* right_value32;
char* old_buf_68;
int old_len_69;
int new_size_70;
void* right_value33;
char* __dec_obj14;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_66, 0, sizeof(short short*));
memset(&size_67, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
memset(&old_buf_68, 0, sizeof(char*));
memset(&old_len_69, 0, sizeof(int));
memset(&new_size_70, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
    # 800 "libcomelang2.c"
    # 796 "libcomelang2.c"
    if(_if_conditional74=self==((void*)0),    _if_conditional74) {
        # 797 "libcomelang2.c"
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    # 800 "libcomelang2.c"
    mem_66=&value;
    # 801 "libcomelang2.c"
    size_67=sizeof(short short);
    # 814 "libcomelang2.c"
    # 803 "libcomelang2.c"
    if(_if_conditional75=self->len+size_67+1+1>=self->size,    _if_conditional75) {
        # 804 "libcomelang2.c"
        old_buf_68=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 804))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32;
        __freed_obj__ = 0;
        # 805 "libcomelang2.c"
        memcpy(old_buf_68,self->buf,self->size);
        # 806 "libcomelang2.c"
        old_len_69=self->len;
        # 807 "libcomelang2.c"
        new_size_70=(self->size+size_67+1)*2;
        # 808 "libcomelang2.c"
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_70)), "libcomelang2.c", 808))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value33;
        __freed_obj__ = 0;
        # 809 "libcomelang2.c"
        memcpy(self->buf,old_buf_68,old_len_69);
        # 810 "libcomelang2.c"
        self->buf[old_len_69]=0;
        # 811 "libcomelang2.c"
        self->size=new_size_70;
        if(old_buf_68 && !__freed_obj__) { old_buf_68 = come_decrement_ref_count(old_buf_68, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 814 "libcomelang2.c"
    memcpy(self->buf+self->len,mem_66,size_67);
    # 815 "libcomelang2.c"
    self->len+=size_67;
    # 816 "libcomelang2.c"
    self->buf[self->len]=0;
    # 818 "libcomelang2.c"
    __result62__ = __result_obj__ = self;
    return __result62__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional76;
struct buffer* __result63__;
int len_71;
_Bool _if_conditional77;
int new_size_72;
void* right_value34;
char* __dec_obj15;
int i_73;
_Bool _for_condtionalA6;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_71, 0, sizeof(int));
memset(&new_size_72, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
memset(&i_73, 0, sizeof(int));
    # 827 "libcomelang2.c"
    # 823 "libcomelang2.c"
    if(_if_conditional76=self==((void*)0),    _if_conditional76) {
        # 824 "libcomelang2.c"
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    # 827 "libcomelang2.c"
    len_71=self->len;
    # 828 "libcomelang2.c"
    len_71=(len_71+3)&~3;
    # 836 "libcomelang2.c"
    # 830 "libcomelang2.c"
    if(_if_conditional77=len_71>=self->size,    _if_conditional77) {
        # 831 "libcomelang2.c"
        new_size_72=(self->size+1+1)*2;
        # 832 "libcomelang2.c"
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_72)), "libcomelang2.c", 832))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value34;
        __freed_obj__ = 0;
        # 833 "libcomelang2.c"
        self->size=new_size_72;
    }
    # 840 "libcomelang2.c"
    for(
    i_73=self->len ,    0;    _for_condtionalA6=    i_73<len_71 ,    _for_condtionalA6;    i_73++ ,    0    ){
        # 837 "libcomelang2.c"
        self->buf[i_73]=0;
    }
    # 840 "libcomelang2.c"
    self->len=len_71;
    # 842 "libcomelang2.c"
    __result64__ = __result_obj__ = self;
    return __result64__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
void* right_value35;
void* right_value36;
struct optional$2intbool* __result66__;
_Bool _if_conditional79;
void* right_value37;
void* right_value38;
struct optional$2intbool* __result67__;
_Bool _if_conditional80;
void* right_value39;
void* right_value40;
struct optional$2intbool* __result68__;
void* right_value41;
void* right_value42;
struct optional$2intbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
    # 857 "libcomelang2.c"
    # 847 "libcomelang2.c"
    if(_if_conditional78=left==((void*)0)&&right==((void*)0),    _if_conditional78) {
        # 848 "libcomelang2.c"
        __result66__ = __result_obj__ = ((struct optional$2intbool*)(right_value36=optional$2intbool_initialize(((struct optional$2intbool*)(right_value35=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 848))),0,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value36;
        __freed_obj__ = 0;
        return __result66__;
    }
    else {
        # 857 "libcomelang2.c"
        # 850 "libcomelang2.c"
        if(_if_conditional79=left==((void*)0),        _if_conditional79) {
            # 851 "libcomelang2.c"
            __result67__ = __result_obj__ = ((struct optional$2intbool*)(right_value38=optional$2intbool_initialize(((struct optional$2intbool*)(right_value37=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 851))),-1,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value37;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value38;
            __freed_obj__ = 0;
            return __result67__;
        }
        else {
            # 857 "libcomelang2.c"
            # 853 "libcomelang2.c"
            if(_if_conditional80=right==((void*)0),            _if_conditional80) {
                # 854 "libcomelang2.c"
                __result68__ = __result_obj__ = ((struct optional$2intbool*)(right_value40=optional$2intbool_initialize(((struct optional$2intbool*)(right_value39=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 854))),1,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value40;
                __freed_obj__ = 0;
                return __result68__;
            }
        }
    }
    # 857 "libcomelang2.c"
    __result69__ = __result_obj__ = ((struct optional$2intbool*)(right_value42=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value41=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 857)))),strcmp(left->buf,right->buf),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value41;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value42;
    __freed_obj__ = 0;
    return __result69__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            self->v1=v1;
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result65__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result65__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value43;
void* right_value44;
struct buffer* result_74;
_Bool _if_conditional81;
struct buffer* __result70__;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_74, 0, sizeof(struct buffer*));
    # 862 "libcomelang2.c"
    result_74=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 862))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value44;
    __freed_obj__ = 0;
    # 868 "libcomelang2.c"
    # 864 "libcomelang2.c"
    if(_if_conditional81=self==((void*)0),    _if_conditional81) {
        # 865 "libcomelang2.c"
        __result70__ = __result_obj__ = result_74;
        if(result_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result70__;
    }
    # 868 "libcomelang2.c"
    buffer_append_str(result_74,self);
    # 870 "libcomelang2.c"
    __result71__ = __result_obj__ = result_74;
    if(result_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result71__;
    if(result_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value45;
void* right_value46;
struct buffer* result_75;
_Bool _if_conditional82;
struct buffer* __result72__;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_75, 0, sizeof(struct buffer*));
    # 875 "libcomelang2.c"
    result_75=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 875))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value45;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value46;
    __freed_obj__ = 0;
    # 881 "libcomelang2.c"
    # 877 "libcomelang2.c"
    if(_if_conditional82=self==((void*)0),    _if_conditional82) {
        # 878 "libcomelang2.c"
        __result72__ = __result_obj__ = result_75;
        if(result_75 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_75, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result72__;
    }
    # 881 "libcomelang2.c"
    buffer_append_str(result_75,self);
    # 883 "libcomelang2.c"
    __result73__ = __result_obj__ = result_75;
    if(result_75 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_75, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result73__;
    if(result_75 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_75, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
void* right_value47;
char* __result74__;
void* right_value48;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    # 892 "libcomelang2.c"
    # 888 "libcomelang2.c"
    if(_if_conditional83=self==((void*)0),    _if_conditional83) {
        # 889 "libcomelang2.c"
        __result74__ = __result_obj__ = ((char*)(right_value47=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
        return __result74__;
    }
    # 892 "libcomelang2.c"
    __result75__ = __result_obj__ = ((char*)(right_value48=__builtin_string(self->buf)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48;
    __freed_obj__ = 0;
    return __result75__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 900 "libcomelang2.c"
    __result76__ = self==right;
    return __result76__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 905 "libcomelang2.c"
    __result77__ = self==right;
    return __result77__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 910 "libcomelang2.c"
    __result78__ = self==right;
    return __result78__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 915 "libcomelang2.c"
    __result79__ = self==right;
    return __result79__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 920 "libcomelang2.c"
    __result80__ = self==right;
    return __result80__;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 925 "libcomelang2.c"
    __result81__ = self==right;
    return __result81__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 930 "libcomelang2.c"
    __result82__ = self==right;
    return __result82__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 935 "libcomelang2.c"
    __result83__ = self==right;
    return __result83__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
void* right_value49;
void* right_value50;
struct optional$2boolbool* __result85__;
_Bool _if_conditional85;
void* right_value51;
void* right_value52;
struct optional$2boolbool* __result86__;
_Bool _if_conditional86;
void* right_value53;
void* right_value54;
struct optional$2boolbool* __result87__;
void* right_value55;
void* right_value56;
struct optional$2boolbool* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
    # 950 "libcomelang2.c"
    # 940 "libcomelang2.c"
    if(_if_conditional84=self==((void*)0)&&right==((void*)0),    _if_conditional84) {
        # 941 "libcomelang2.c"
        __result85__ = __result_obj__ = ((struct optional$2boolbool*)(right_value50=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value49=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 941))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value50;
        __freed_obj__ = 0;
        return __result85__;
    }
    else {
        # 950 "libcomelang2.c"
        # 943 "libcomelang2.c"
        if(_if_conditional85=self==((void*)0),        _if_conditional85) {
            # 944 "libcomelang2.c"
            __result86__ = __result_obj__ = ((struct optional$2boolbool*)(right_value52=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value51=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 944))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value52;
            __freed_obj__ = 0;
            return __result86__;
        }
        else {
            # 950 "libcomelang2.c"
            # 946 "libcomelang2.c"
            if(_if_conditional86=right==((void*)0),            _if_conditional86) {
                # 947 "libcomelang2.c"
                __result87__ = __result_obj__ = ((struct optional$2boolbool*)(right_value54=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value53=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 947))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value54;
                __freed_obj__ = 0;
                return __result87__;
            }
        }
    }
    # 950 "libcomelang2.c"
    __result88__ = __result_obj__ = ((struct optional$2intbool*)(right_value56=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value55=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 950)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    return __result88__;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            self->v1=v1;
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result84__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result84__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2boolbool* charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
void* right_value57;
void* right_value58;
struct optional$2boolbool* __result89__;
_Bool _if_conditional88;
void* right_value59;
void* right_value60;
struct optional$2boolbool* __result90__;
_Bool _if_conditional89;
void* right_value61;
void* right_value62;
struct optional$2boolbool* __result91__;
void* right_value63;
void* right_value64;
struct optional$2boolbool* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
    # 965 "libcomelang2.c"
    # 955 "libcomelang2.c"
    if(_if_conditional87=self==((void*)0)&&right==((void*)0),    _if_conditional87) {
        # 956 "libcomelang2.c"
        __result89__ = __result_obj__ = ((struct optional$2boolbool*)(right_value58=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value57=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 956))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value58;
        __freed_obj__ = 0;
        return __result89__;
    }
    else {
        # 965 "libcomelang2.c"
        # 958 "libcomelang2.c"
        if(_if_conditional88=self==((void*)0),        _if_conditional88) {
            # 959 "libcomelang2.c"
            __result90__ = __result_obj__ = ((struct optional$2boolbool*)(right_value60=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value59=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 959))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value60;
            __freed_obj__ = 0;
            return __result90__;
        }
        else {
            # 965 "libcomelang2.c"
            # 961 "libcomelang2.c"
            if(_if_conditional89=right==((void*)0),            _if_conditional89) {
                # 962 "libcomelang2.c"
                __result91__ = __result_obj__ = ((struct optional$2boolbool*)(right_value62=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value61=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 962))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value61;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value62;
                __freed_obj__ = 0;
                return __result91__;
            }
        }
    }
    # 965 "libcomelang2.c"
    __result92__ = __result_obj__ = ((struct optional$2intbool*)(right_value64=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value63=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 965)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    return __result92__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
_Bool __result93__;
_Bool _if_conditional91;
_Bool __result94__;
_Bool _if_conditional92;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 980 "libcomelang2.c"
    # 970 "libcomelang2.c"
    if(_if_conditional90=self==((void*)0)&&right==((void*)0),    _if_conditional90) {
        # 971 "libcomelang2.c"
        __result93__ = (_Bool)1;
        return __result93__;
    }
    else {
        # 980 "libcomelang2.c"
        # 973 "libcomelang2.c"
        if(_if_conditional91=self==((void*)0),        _if_conditional91) {
            # 974 "libcomelang2.c"
            __result94__ = (_Bool)0;
            return __result94__;
        }
        else {
            # 980 "libcomelang2.c"
            # 976 "libcomelang2.c"
            if(_if_conditional92=right==((void*)0),            _if_conditional92) {
                # 977 "libcomelang2.c"
                __result95__ = (_Bool)0;
                return __result95__;
            }
        }
    }
    # 980 "libcomelang2.c"
    __result96__ = strcmp(self,right)==0;
    return __result96__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
_Bool __result97__;
_Bool _if_conditional94;
_Bool __result98__;
_Bool _if_conditional95;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 995 "libcomelang2.c"
    # 985 "libcomelang2.c"
    if(_if_conditional93=self==((void*)0)&&right==((void*)0),    _if_conditional93) {
        # 986 "libcomelang2.c"
        __result97__ = (_Bool)1;
        return __result97__;
    }
    else {
        # 995 "libcomelang2.c"
        # 988 "libcomelang2.c"
        if(_if_conditional94=self==((void*)0),        _if_conditional94) {
            # 989 "libcomelang2.c"
            __result98__ = (_Bool)0;
            return __result98__;
        }
        else {
            # 995 "libcomelang2.c"
            # 991 "libcomelang2.c"
            if(_if_conditional95=right==((void*)0),            _if_conditional95) {
                # 992 "libcomelang2.c"
                __result99__ = (_Bool)0;
                return __result99__;
            }
        }
    }
    # 995 "libcomelang2.c"
    __result100__ = strcmp(self,right)==0;
    return __result100__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool __result101__;
_Bool _if_conditional97;
_Bool __result102__;
_Bool _if_conditional98;
_Bool __result103__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1010 "libcomelang2.c"
    # 1000 "libcomelang2.c"
    if(_if_conditional96=self==((void*)0)&&right==((void*)0),    _if_conditional96) {
        # 1001 "libcomelang2.c"
        __result101__ = (_Bool)0;
        return __result101__;
    }
    else {
        # 1010 "libcomelang2.c"
        # 1003 "libcomelang2.c"
        if(_if_conditional97=self==((void*)0),        _if_conditional97) {
            # 1004 "libcomelang2.c"
            __result102__ = (_Bool)1;
            return __result102__;
        }
        else {
            # 1010 "libcomelang2.c"
            # 1006 "libcomelang2.c"
            if(_if_conditional98=right==((void*)0),            _if_conditional98) {
                # 1007 "libcomelang2.c"
                __result103__ = (_Bool)1;
                return __result103__;
            }
        }
    }
    # 1010 "libcomelang2.c"
    __result104__ = strcmp(self,right)!=0;
    return __result104__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
_Bool __result105__;
_Bool _if_conditional100;
_Bool __result106__;
_Bool _if_conditional101;
_Bool __result107__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1025 "libcomelang2.c"
    # 1015 "libcomelang2.c"
    if(_if_conditional99=self==((void*)0)&&right==((void*)0),    _if_conditional99) {
        # 1016 "libcomelang2.c"
        __result105__ = (_Bool)0;
        return __result105__;
    }
    else {
        # 1025 "libcomelang2.c"
        # 1018 "libcomelang2.c"
        if(_if_conditional100=self==((void*)0),        _if_conditional100) {
            # 1019 "libcomelang2.c"
            __result106__ = (_Bool)1;
            return __result106__;
        }
        else {
            # 1025 "libcomelang2.c"
            # 1021 "libcomelang2.c"
            if(_if_conditional101=right==((void*)0),            _if_conditional101) {
                # 1022 "libcomelang2.c"
                __result107__ = (_Bool)1;
                return __result107__;
            }
        }
    }
    # 1025 "libcomelang2.c"
    __result108__ = strcmp(self,right)!=0;
    return __result108__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
void* right_value65;
char* __result109__;
int len_76;
void* right_value66;
char* result_77;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&len_76, 0, sizeof(int));
memset(&right_value66, 0, sizeof(void*));
memset(&result_77, 0, sizeof(char*));
    # 1034 "libcomelang2.c"
    # 1031 "libcomelang2.c"
    if(_if_conditional102=self==((void*)0)||right==((void*)0),    _if_conditional102) {
        # 1032 "libcomelang2.c"
        __result109__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = 0;
        return __result109__;
    }
    # 1034 "libcomelang2.c"
    len_76=strlen(self)+strlen(right);
    # 1036 "libcomelang2.c"
    result_77=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(len_76+1)), "libcomelang2.c", 1036))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    # 1038 "libcomelang2.c"
    strncpy(result_77,self,len_76+1);
    # 1039 "libcomelang2.c"
    strncat(result_77,right,len_76+1);
    # 1041 "libcomelang2.c"
    __result110__ = __result_obj__ = result_77;
    if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, (void*)0, (void*)0, 0, 1, 0); }
    return __result110__;
    if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value67;
char* __result111__;
int len_78;
void* right_value68;
char* result_79;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&len_78, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&result_79, 0, sizeof(char*));
    # 1049 "libcomelang2.c"
    # 1046 "libcomelang2.c"
    if(_if_conditional103=self==((void*)0)||right==((void*)0),    _if_conditional103) {
        # 1047 "libcomelang2.c"
        __result111__ = __result_obj__ = ((char*)(right_value67=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = 0;
        return __result111__;
    }
    # 1049 "libcomelang2.c"
    len_78=strlen(self)+strlen(right);
    # 1051 "libcomelang2.c"
    result_79=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(len_78+1)), "libcomelang2.c", 1051))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = 0;
    # 1053 "libcomelang2.c"
    strncpy(result_79,self,len_78+1);
    # 1054 "libcomelang2.c"
    strncat(result_79,right,len_78+1);
    # 1056 "libcomelang2.c"
    __result112__ = __result_obj__ = result_79;
    if(result_79 && !__freed_obj__) { result_79 = come_decrement_ref_count(result_79, (void*)0, (void*)0, 0, 1, 0); }
    return __result112__;
    if(result_79 && !__freed_obj__) { result_79 = come_decrement_ref_count(result_79, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
void* right_value69;
char* __result113__;
void* right_value70;
void* right_value71;
struct buffer* buf_80;
int i_81;
_Bool _for_condtionalA7;
void* right_value72;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&buf_80, 0, sizeof(struct buffer*));
memset(&i_81, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
    # 1064 "libcomelang2.c"
    # 1061 "libcomelang2.c"
    if(_if_conditional104=self==((void*)0),    _if_conditional104) {
        # 1062 "libcomelang2.c"
        __result113__ = __result_obj__ = ((char*)(right_value69=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69;
        __freed_obj__ = 0;
        return __result113__;
    }
    # 1064 "libcomelang2.c"
    buf_80=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1064))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value71;
    __freed_obj__ = 0;
    # 1070 "libcomelang2.c"
    for(
    i_81=0 ,    0;    _for_condtionalA7=    i_81<right ,    _for_condtionalA7;    i_81++ ,    0    ){
        # 1067 "libcomelang2.c"
        buffer_append_str(buf_80,self);
    }
    # 1070 "libcomelang2.c"
    __result114__ = __result_obj__ = ((char*)(right_value72=buffer_to_string(buf_80)));
    if(buf_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value72;
    __freed_obj__ = 0;
    return __result114__;
    if(buf_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
void* right_value73;
char* __result115__;
void* right_value74;
void* right_value75;
struct buffer* buf_82;
int i_83;
_Bool _for_condtionalA8;
void* right_value76;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&buf_82, 0, sizeof(struct buffer*));
memset(&i_83, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
    # 1078 "libcomelang2.c"
    # 1075 "libcomelang2.c"
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        # 1076 "libcomelang2.c"
        __result115__ = __result_obj__ = ((char*)(right_value73=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value73;
        __freed_obj__ = 0;
        return __result115__;
    }
    # 1078 "libcomelang2.c"
    buf_82=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1078))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value75;
    __freed_obj__ = 0;
    # 1084 "libcomelang2.c"
    for(
    i_83=0 ,    0;    _for_condtionalA8=    i_83<right ,    _for_condtionalA8;    i_83++ ,    0    ){
        # 1081 "libcomelang2.c"
        buffer_append_str(buf_82,self);
    }
    # 1084 "libcomelang2.c"
    __result116__ = __result_obj__ = ((char*)(right_value76=buffer_to_string(buf_82)));
    if(buf_82 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value76;
    __freed_obj__ = 0;
    return __result116__;
    if(buf_82 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1092 "libcomelang2.c"
    __result117__ = (int_get_hash_key(((int)value)));
    return __result117__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1097 "libcomelang2.c"
    __result118__ = value;
    return __result118__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1102 "libcomelang2.c"
    __result119__ = value;
    return __result119__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1107 "libcomelang2.c"
    __result120__ = value;
    return __result120__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1112 "libcomelang2.c"
    __result121__ = value;
    return __result121__;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1117 "libcomelang2.c"
    __result122__ = value;
    return __result122__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1122 "libcomelang2.c"
    __result123__ = (unsigned int)value;
    return __result123__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1127 "libcomelang2.c"
    __result124__ = (unsigned int)value;
    return __result124__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
unsigned int __result125__;
int result_84;
char* p_85;
_Bool _while_condtional2;
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_84, 0, sizeof(int));
memset(&p_85, 0, sizeof(char*));
    # 1135 "libcomelang2.c"
    # 1132 "libcomelang2.c"
    if(_if_conditional106=value==((void*)0),    _if_conditional106) {
        # 1133 "libcomelang2.c"
        __result125__ = 0;
        return __result125__;
    }
    # 1135 "libcomelang2.c"
    result_84=0;
    # 1136 "libcomelang2.c"
    p_85=value;
    # 1141 "libcomelang2.c"
    while(_while_condtional2=*p_85,    _while_condtional2) {
        # 1138 "libcomelang2.c"
        result_84+=(*p_85);
        # 1139 "libcomelang2.c"
        p_85++;
    }
    # 1141 "libcomelang2.c"
    __result126__ = result_84;
    return __result126__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
unsigned int __result127__;
int result_86;
char* p_87;
_Bool _while_condtional3;
unsigned int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_86, 0, sizeof(int));
memset(&p_87, 0, sizeof(char*));
    # 1149 "libcomelang2.c"
    # 1146 "libcomelang2.c"
    if(_if_conditional107=value==((void*)0),    _if_conditional107) {
        # 1147 "libcomelang2.c"
        __result127__ = 0;
        return __result127__;
    }
    # 1149 "libcomelang2.c"
    result_86=0;
    # 1150 "libcomelang2.c"
    p_87=value;
    # 1155 "libcomelang2.c"
    while(_while_condtional3=*p_87,    _while_condtional3) {
        # 1152 "libcomelang2.c"
        result_86+=(*p_87);
        # 1153 "libcomelang2.c"
        p_87++;
    }
    # 1155 "libcomelang2.c"
    __result128__ = result_86;
    return __result128__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1163 "libcomelang2.c"
    __result129__ = self;
    return __result129__;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1168 "libcomelang2.c"
    __result130__ = self;
    return __result130__;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1173 "libcomelang2.c"
    __result131__ = self;
    return __result131__;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1178 "libcomelang2.c"
    __result132__ = self;
    return __result132__;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1183 "libcomelang2.c"
    __result133__ = self;
    return __result133__;
}

long int size_t_clone(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1188 "libcomelang2.c"
    __result134__ = self;
    return __result134__;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1193 "libcomelang2.c"
    __result135__ = self;
    return __result135__;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1198 "libcomelang2.c"
    __result136__ = self;
    return __result136__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
char* __result137__;
void* right_value77;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
    # 1204 "libcomelang2.c"
    # 1203 "libcomelang2.c"
    if(_if_conditional108=self==((void*)0),    _if_conditional108) {
        # 1203 "libcomelang2.c"
        __result137__ = __result_obj__ = ((void*)0);
        return __result137__;
    }
    # 1204 "libcomelang2.c"
    __result138__ = __result_obj__ = ((char*)(right_value77=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    return __result138__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
char* __result139__;
void* right_value78;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
    # 1211 "libcomelang2.c"
    # 1209 "libcomelang2.c"
    if(_if_conditional109=self==((void*)0),    _if_conditional109) {
        # 1209 "libcomelang2.c"
        __result139__ = __result_obj__ = ((void*)0);
        return __result139__;
    }
    # 1211 "libcomelang2.c"
    __result140__ = __result_obj__ = ((char*)(right_value78=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value78;
    __freed_obj__ = 0;
    return __result140__;
}

_Bool xiswalpha(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_88;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_88, 0, sizeof(_Bool));
    # 1219 "libcomelang2.c"
    result_88=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1220 "libcomelang2.c"
    __result141__ = result_88;
    return __result141__;
}

_Bool xiswblank(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1225 "libcomelang2.c"
    __result142__ = c==32||c==9;
    return __result142__;
}

_Bool xiswdigit(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1230 "libcomelang2.c"
    __result143__ = (c>=48&&c<=57);
    return __result143__;
}

_Bool xiswalnum(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1235 "libcomelang2.c"
    __result144__ = xiswalpha(c)||xiswdigit(c);
    return __result144__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_89;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_89, 0, sizeof(_Bool));
    # 1240 "libcomelang2.c"
    result_89=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1241 "libcomelang2.c"
    __result145__ = result_89;
    return __result145__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1246 "libcomelang2.c"
    __result146__ = c==32||c==9;
    return __result146__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1251 "libcomelang2.c"
    __result147__ = (c>=48&&c<=57);
    return __result147__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1256 "libcomelang2.c"
    __result148__ = xisalpha(c)||xisdigit(c);
    return __result148__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_90;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_90, 0, sizeof(_Bool));
    # 1261 "libcomelang2.c"
    result_90=(c>=32&&c<=126);
    # 1262 "libcomelang2.c"
    __result149__ = result_90;
    return __result149__;
}

_Bool xiswascii(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_91;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_91, 0, sizeof(_Bool));
    # 1267 "libcomelang2.c"
    result_91=(c>=32&&c<=126);
    # 1268 "libcomelang2.c"
    __result150__ = result_91;
    return __result150__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
int __result151__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1279 "libcomelang2.c"
    # 1276 "libcomelang2.c"
    if(_if_conditional110=str==((void*)0),    _if_conditional110) {
        # 1277 "libcomelang2.c"
        __result151__ = 0;
        return __result151__;
    }
    # 1279 "libcomelang2.c"
    __result152__ = strlen(str);
    return __result152__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
int __result153__;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1286 "libcomelang2.c"
    # 1283 "libcomelang2.c"
    if(_if_conditional111=str==((void*)0),    _if_conditional111) {
        # 1284 "libcomelang2.c"
        __result153__ = 0;
        return __result153__;
    }
    # 1286 "libcomelang2.c"
    __result154__ = strlen(str);
    return __result154__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
void* right_value79;
char* __result155__;
int len_92;
void* right_value80;
char* result_93;
int i_94;
_Bool _for_condtionalA9;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&len_92, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&result_93, 0, sizeof(char*));
memset(&i_94, 0, sizeof(int));
    # 1294 "libcomelang2.c"
    # 1291 "libcomelang2.c"
    if(_if_conditional112=str==((void*)0),    _if_conditional112) {
        # 1292 "libcomelang2.c"
        __result155__ = __result_obj__ = ((char*)(right_value79=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        return __result155__;
    }
    # 1294 "libcomelang2.c"
    len_92=strlen(str);
    # 1295 "libcomelang2.c"
    result_93=(char*)come_increment_ref_count(((char*)(right_value80=(char*)come_calloc(1, sizeof(char)*(1*(len_92+1)), "libcomelang2.c", 1295))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = 0;
    # 1301 "libcomelang2.c"
    for(
    i_94=0 ,    0;    _for_condtionalA9=    i_94<len_92 ,    _for_condtionalA9;    i_94++ ,    0    ){
        # 1298 "libcomelang2.c"
        result_93[i_94]=str[len_92-i_94-1];
    }
    # 1301 "libcomelang2.c"
    result_93[len_92]=0;
    # 1303 "libcomelang2.c"
    __result156__ = __result_obj__ = result_93;
    if(result_93 && !__freed_obj__) { result_93 = come_decrement_ref_count(result_93, (void*)0, (void*)0, 0, 1, 0); }
    return __result156__;
    if(result_93 && !__freed_obj__) { result_93 = come_decrement_ref_count(result_93, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
void* right_value81;
char* __result157__;
int len_95;
void* right_value82;
char* result_96;
int i_97;
_Bool _for_condtionalA10;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&len_95, 0, sizeof(int));
memset(&right_value82, 0, sizeof(void*));
memset(&result_96, 0, sizeof(char*));
memset(&i_97, 0, sizeof(int));
    # 1311 "libcomelang2.c"
    # 1308 "libcomelang2.c"
    if(_if_conditional113=str==((void*)0),    _if_conditional113) {
        # 1309 "libcomelang2.c"
        __result157__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = 0;
        return __result157__;
    }
    # 1311 "libcomelang2.c"
    len_95=strlen(str);
    # 1312 "libcomelang2.c"
    result_96=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(len_95+1)), "libcomelang2.c", 1312))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    # 1318 "libcomelang2.c"
    for(
    i_97=0 ,    0;    _for_condtionalA10=    i_97<len_95 ,    _for_condtionalA10;    i_97++ ,    0    ){
        # 1315 "libcomelang2.c"
        result_96[i_97]=str[len_95-i_97-1];
    }
    # 1318 "libcomelang2.c"
    result_96[len_95]=0;
    # 1320 "libcomelang2.c"
    __result158__ = __result_obj__ = result_96;
    if(result_96 && !__freed_obj__) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 1, 0); }
    return __result158__;
    if(result_96 && !__freed_obj__) { result_96 = come_decrement_ref_count(result_96, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
void* right_value83;
char* __result159__;
int len_98;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value84;
void* right_value85;
char* __result160__;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value86;
char* __result161__;
_Bool _if_conditional121;
void* right_value87;
char* __result162__;
void* right_value88;
char* result_99;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
    # 1328 "libcomelang2.c"
    # 1324 "libcomelang2.c"
    if(_if_conditional114=str==((void*)0),    _if_conditional114) {
        # 1325 "libcomelang2.c"
        __result159__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83;
        __freed_obj__ = 0;
        return __result159__;
    }
    # 1328 "libcomelang2.c"
    len_98=strlen(str);
    # 1333 "libcomelang2.c"
    # 1330 "libcomelang2.c"
    if(_if_conditional115=head<0,    _if_conditional115) {
        # 1331 "libcomelang2.c"
        head+=len_98;
    }
    # 1337 "libcomelang2.c"
    # 1333 "libcomelang2.c"
    if(_if_conditional116=tail<0,    _if_conditional116) {
        # 1334 "libcomelang2.c"
        tail+=len_98+1;
    }
    # 1341 "libcomelang2.c"
    # 1337 "libcomelang2.c"
    if(_if_conditional117=head>tail,    _if_conditional117) {
        # 1338 "libcomelang2.c"
        __result160__ = __result_obj__ = ((char*)(right_value85=string_reverse(((char*)(right_value84=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value85;
        __freed_obj__ = 0;
        return __result160__;
    }
    # 1345 "libcomelang2.c"
    # 1341 "libcomelang2.c"
    if(_if_conditional118=head<0,    _if_conditional118) {
        # 1342 "libcomelang2.c"
        head=0;
    }
    # 1349 "libcomelang2.c"
    # 1345 "libcomelang2.c"
    if(_if_conditional119=tail>=len_98,    _if_conditional119) {
        # 1346 "libcomelang2.c"
        tail=len_98;
    }
    # 1353 "libcomelang2.c"
    # 1349 "libcomelang2.c"
    if(_if_conditional120=head==tail,    _if_conditional120) {
        # 1350 "libcomelang2.c"
        __result161__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = 0;
        return __result161__;
    }
    # 1357 "libcomelang2.c"
    # 1353 "libcomelang2.c"
    if(_if_conditional121=tail-head+1<1,    _if_conditional121) {
        # 1354 "libcomelang2.c"
        __result162__ = __result_obj__ = ((char*)(right_value87=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = 0;
        return __result162__;
    }
    # 1357 "libcomelang2.c"
    result_99=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1357))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    # 1359 "libcomelang2.c"
    memcpy(result_99,str+head,tail-head);
    # 1360 "libcomelang2.c"
    result_99[tail-head]=0;
    # 1362 "libcomelang2.c"
    __result163__ = __result_obj__ = result_99;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 1, 0); }
    return __result163__;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
void* right_value89;
char* __result164__;
int len_100;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value90;
void* right_value91;
char* __result165__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value92;
char* __result166__;
_Bool _if_conditional129;
void* right_value93;
char* __result167__;
void* right_value94;
char* result_101;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&len_100, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_101, 0, sizeof(char*));
    # 1371 "libcomelang2.c"
    # 1367 "libcomelang2.c"
    if(_if_conditional122=str==((void*)0),    _if_conditional122) {
        # 1368 "libcomelang2.c"
        __result164__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        return __result164__;
    }
    # 1371 "libcomelang2.c"
    len_100=strlen(str);
    # 1376 "libcomelang2.c"
    # 1373 "libcomelang2.c"
    if(_if_conditional123=head<0,    _if_conditional123) {
        # 1374 "libcomelang2.c"
        head+=len_100;
    }
    # 1380 "libcomelang2.c"
    # 1376 "libcomelang2.c"
    if(_if_conditional124=tail<0,    _if_conditional124) {
        # 1377 "libcomelang2.c"
        tail+=len_100+1;
    }
    # 1384 "libcomelang2.c"
    # 1380 "libcomelang2.c"
    if(_if_conditional125=head>tail,    _if_conditional125) {
        # 1381 "libcomelang2.c"
        __result165__ = __result_obj__ = ((char*)(right_value91=string_reverse(((char*)(right_value90=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value91;
        __freed_obj__ = 0;
        return __result165__;
    }
    # 1388 "libcomelang2.c"
    # 1384 "libcomelang2.c"
    if(_if_conditional126=head<0,    _if_conditional126) {
        # 1385 "libcomelang2.c"
        head=0;
    }
    # 1392 "libcomelang2.c"
    # 1388 "libcomelang2.c"
    if(_if_conditional127=tail>=len_100,    _if_conditional127) {
        # 1389 "libcomelang2.c"
        tail=len_100;
    }
    # 1396 "libcomelang2.c"
    # 1392 "libcomelang2.c"
    if(_if_conditional128=head==tail,    _if_conditional128) {
        # 1393 "libcomelang2.c"
        __result166__ = __result_obj__ = ((char*)(right_value92=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value92;
        __freed_obj__ = 0;
        return __result166__;
    }
    # 1400 "libcomelang2.c"
    # 1396 "libcomelang2.c"
    if(_if_conditional129=tail-head+1<1,    _if_conditional129) {
        # 1397 "libcomelang2.c"
        __result167__ = __result_obj__ = ((char*)(right_value93=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
        return __result167__;
    }
    # 1400 "libcomelang2.c"
    result_101=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1400))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    # 1402 "libcomelang2.c"
    memcpy(result_101,str+head,tail-head);
    # 1403 "libcomelang2.c"
    result_101[tail-head]=0;
    # 1405 "libcomelang2.c"
    __result168__ = __result_obj__ = result_101;
    if(result_101 && !__freed_obj__) { result_101 = come_decrement_ref_count(result_101, (void*)0, (void*)0, 0, 1, 0); }
    return __result168__;
    if(result_101 && !__freed_obj__) { result_101 = come_decrement_ref_count(result_101, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
void* right_value95;
char* __result169__;
int len_102;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value96;
void* right_value97;
char* __result170__;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
void* right_value98;
char* __result171__;
_Bool _if_conditional137;
void* right_value99;
char* __result172__;
void* right_value100;
char* result_103;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
    # 1414 "libcomelang2.c"
    # 1410 "libcomelang2.c"
    if(_if_conditional130=str==((void*)0),    _if_conditional130) {
        # 1411 "libcomelang2.c"
        __result169__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value95;
        __freed_obj__ = 0;
        return __result169__;
    }
    # 1414 "libcomelang2.c"
    len_102=strlen(str);
    # 1419 "libcomelang2.c"
    # 1416 "libcomelang2.c"
    if(_if_conditional131=head<0,    _if_conditional131) {
        # 1417 "libcomelang2.c"
        head+=len_102;
    }
    # 1423 "libcomelang2.c"
    # 1419 "libcomelang2.c"
    if(_if_conditional132=tail<0,    _if_conditional132) {
        # 1420 "libcomelang2.c"
        tail+=len_102+1;
    }
    # 1427 "libcomelang2.c"
    # 1423 "libcomelang2.c"
    if(_if_conditional133=head>tail,    _if_conditional133) {
        # 1424 "libcomelang2.c"
        __result170__ = __result_obj__ = ((char*)(right_value97=string_reverse(((char*)(right_value96=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value96;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value97;
        __freed_obj__ = 0;
        return __result170__;
    }
    # 1431 "libcomelang2.c"
    # 1427 "libcomelang2.c"
    if(_if_conditional134=head<0,    _if_conditional134) {
        # 1428 "libcomelang2.c"
        head=0;
    }
    # 1435 "libcomelang2.c"
    # 1431 "libcomelang2.c"
    if(_if_conditional135=tail>=len_102,    _if_conditional135) {
        # 1432 "libcomelang2.c"
        tail=len_102;
    }
    # 1439 "libcomelang2.c"
    # 1435 "libcomelang2.c"
    if(_if_conditional136=head==tail,    _if_conditional136) {
        # 1436 "libcomelang2.c"
        __result171__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value98;
        __freed_obj__ = 0;
        return __result171__;
    }
    # 1443 "libcomelang2.c"
    # 1439 "libcomelang2.c"
    if(_if_conditional137=tail-head+1<1,    _if_conditional137) {
        # 1440 "libcomelang2.c"
        __result172__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value99;
        __freed_obj__ = 0;
        return __result172__;
    }
    # 1443 "libcomelang2.c"
    result_103=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1443))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    # 1445 "libcomelang2.c"
    memcpy(result_103,str+head,tail-head);
    # 1446 "libcomelang2.c"
    result_103[tail-head]=0;
    # 1448 "libcomelang2.c"
    __result173__ = __result_obj__ = result_103;
    if(result_103 && !__freed_obj__) { result_103 = come_decrement_ref_count(result_103, (void*)0, (void*)0, 0, 1, 0); }
    return __result173__;
    if(result_103 && !__freed_obj__) { result_103 = come_decrement_ref_count(result_103, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
void* right_value101;
char* __result174__;
int len_104;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
void* right_value102;
void* right_value103;
char* __result175__;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
void* right_value104;
char* __result176__;
_Bool _if_conditional145;
void* right_value105;
char* __result177__;
void* right_value106;
char* result_105;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
    # 1457 "libcomelang2.c"
    # 1453 "libcomelang2.c"
    if(_if_conditional138=str==((void*)0),    _if_conditional138) {
        # 1454 "libcomelang2.c"
        __result174__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value101;
        __freed_obj__ = 0;
        return __result174__;
    }
    # 1457 "libcomelang2.c"
    len_104=strlen(str);
    # 1462 "libcomelang2.c"
    # 1459 "libcomelang2.c"
    if(_if_conditional139=head<0,    _if_conditional139) {
        # 1460 "libcomelang2.c"
        head+=len_104;
    }
    # 1466 "libcomelang2.c"
    # 1462 "libcomelang2.c"
    if(_if_conditional140=tail<0,    _if_conditional140) {
        # 1463 "libcomelang2.c"
        tail+=len_104+1;
    }
    # 1470 "libcomelang2.c"
    # 1466 "libcomelang2.c"
    if(_if_conditional141=head>tail,    _if_conditional141) {
        # 1467 "libcomelang2.c"
        __result175__ = __result_obj__ = ((char*)(right_value103=string_reverse(((char*)(right_value102=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value103;
        __freed_obj__ = 0;
        return __result175__;
    }
    # 1474 "libcomelang2.c"
    # 1470 "libcomelang2.c"
    if(_if_conditional142=head<0,    _if_conditional142) {
        # 1471 "libcomelang2.c"
        head=0;
    }
    # 1478 "libcomelang2.c"
    # 1474 "libcomelang2.c"
    if(_if_conditional143=tail>=len_104,    _if_conditional143) {
        # 1475 "libcomelang2.c"
        tail=len_104;
    }
    # 1482 "libcomelang2.c"
    # 1478 "libcomelang2.c"
    if(_if_conditional144=head==tail,    _if_conditional144) {
        # 1479 "libcomelang2.c"
        __result176__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value104;
        __freed_obj__ = 0;
        return __result176__;
    }
    # 1486 "libcomelang2.c"
    # 1482 "libcomelang2.c"
    if(_if_conditional145=tail-head+1<1,    _if_conditional145) {
        # 1483 "libcomelang2.c"
        __result177__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value105;
        __freed_obj__ = 0;
        return __result177__;
    }
    # 1486 "libcomelang2.c"
    result_105=(char*)come_increment_ref_count(((char*)(right_value106=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1486))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    # 1488 "libcomelang2.c"
    memcpy(result_105,str+head,tail-head);
    # 1489 "libcomelang2.c"
    result_105[tail-head]=0;
    # 1491 "libcomelang2.c"
    __result178__ = __result_obj__ = result_105;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 1, 0); }
    return __result178__;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
void* right_value107;
char* __result179__;
va_list args_106;
char* result_107;
int len_108;
_Bool _if_conditional147;
void* right_value108;
char* __result180__;
void* right_value109;
char* result2_109;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&args_106, 0, sizeof(va_list));
memset(&result_107, 0, sizeof(char*));
memset(&len_108, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&result2_109, 0, sizeof(char*));
    # 1499 "libcomelang2.c"
    # 1496 "libcomelang2.c"
    if(_if_conditional146=msg==((void*)0),    _if_conditional146) {
        # 1497 "libcomelang2.c"
        __result179__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value107;
        __freed_obj__ = 0;
        return __result179__;
    }
    # 1499 "libcomelang2.c"
    # 1500 "libcomelang2.c"
    __builtin_va_start(args_106,msg);
    # 1501 "libcomelang2.c"
    # 1502 "libcomelang2.c"
    len_108=vasprintf(&result_107,msg,args_106);
    # 1503 "libcomelang2.c"
    __builtin_va_end(args_106);
    # 1509 "libcomelang2.c"
    # 1505 "libcomelang2.c"
    if(_if_conditional147=len_108<0,    _if_conditional147) {
        # 1506 "libcomelang2.c"
        __result180__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        if((&args_106) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_106), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value108;
        __freed_obj__ = 0;
        return __result180__;
    }
    # 1509 "libcomelang2.c"
    result2_109=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(result_107))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = 0;
    # 1511 "libcomelang2.c"
    free(result_107);
    # 1513 "libcomelang2.c"
    __result181__ = __result_obj__ = result2_109;
    if((&args_106) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_106), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_109 && !__freed_obj__) { result2_109 = come_decrement_ref_count(result2_109, (void*)0, (void*)0, 0, 1, 0); }
    return __result181__;
    if((&args_106) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_106), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_109 && !__freed_obj__) { result2_109 = come_decrement_ref_count(result2_109, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
void* right_value110;
char* __result182__;
int len_110;
_Bool _if_conditional149;
void* right_value111;
char* __result183__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value112;
char* __result184__;
_Bool _if_conditional154;
void* right_value113;
char* sub_str_111;
void* right_value114;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&len_110, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&sub_str_111, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
    # 1522 "libcomelang2.c"
    # 1518 "libcomelang2.c"
    if(_if_conditional148=str==((void*)0),    _if_conditional148) {
        # 1519 "libcomelang2.c"
        __result182__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value110;
        __freed_obj__ = 0;
        return __result182__;
    }
    # 1522 "libcomelang2.c"
    len_110=strlen(str);
    # 1528 "libcomelang2.c"
    # 1524 "libcomelang2.c"
    if(_if_conditional149=strcmp(str,"")==0,    _if_conditional149) {
        # 1525 "libcomelang2.c"
        __result183__ = __result_obj__ = ((char*)(right_value111=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        return __result183__;
    }
    # 1532 "libcomelang2.c"
    # 1528 "libcomelang2.c"
    if(_if_conditional150=head<0,    _if_conditional150) {
        # 1529 "libcomelang2.c"
        head+=len_110;
    }
    # 1536 "libcomelang2.c"
    # 1532 "libcomelang2.c"
    if(_if_conditional151=tail<0,    _if_conditional151) {
        # 1533 "libcomelang2.c"
        tail+=len_110+1;
    }
    # 1540 "libcomelang2.c"
    # 1536 "libcomelang2.c"
    if(_if_conditional152=head<0,    _if_conditional152) {
        # 1537 "libcomelang2.c"
        head=0;
    }
    # 1544 "libcomelang2.c"
    # 1540 "libcomelang2.c"
    if(_if_conditional153=tail<0,    _if_conditional153) {
        # 1541 "libcomelang2.c"
        __result184__ = __result_obj__ = ((char*)(right_value112=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value112;
        __freed_obj__ = 0;
        return __result184__;
    }
    # 1548 "libcomelang2.c"
    # 1544 "libcomelang2.c"
    if(_if_conditional154=tail>=len_110,    _if_conditional154) {
        # 1545 "libcomelang2.c"
        tail=len_110;
    }
    # 1548 "libcomelang2.c"
    sub_str_111=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    # 1550 "libcomelang2.c"
    memcpy(str+head,sub_str_111,string_length(sub_str_111)+1);
    # 1552 "libcomelang2.c"
    __result185__ = __result_obj__ = ((char*)(right_value114=__builtin_string(str)));
    if(sub_str_111 && !__freed_obj__) { sub_str_111 = come_decrement_ref_count(sub_str_111, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    return __result185__;
    if(sub_str_111 && !__freed_obj__) { sub_str_111 = come_decrement_ref_count(sub_str_111, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
void* right_value115;
char* __result186__;
int len_112;
_Bool _if_conditional156;
void* right_value116;
char* __result187__;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value117;
char* __result188__;
_Bool _if_conditional161;
void* right_value118;
char* sub_str_113;
void* right_value119;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&len_112, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&sub_str_113, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
    # 1561 "libcomelang2.c"
    # 1557 "libcomelang2.c"
    if(_if_conditional155=str==((void*)0),    _if_conditional155) {
        # 1558 "libcomelang2.c"
        __result186__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value115;
        __freed_obj__ = 0;
        return __result186__;
    }
    # 1561 "libcomelang2.c"
    len_112=strlen(str);
    # 1567 "libcomelang2.c"
    # 1563 "libcomelang2.c"
    if(_if_conditional156=strcmp(str,"")==0,    _if_conditional156) {
        # 1564 "libcomelang2.c"
        __result187__ = __result_obj__ = ((char*)(right_value116=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value116;
        __freed_obj__ = 0;
        return __result187__;
    }
    # 1571 "libcomelang2.c"
    # 1567 "libcomelang2.c"
    if(_if_conditional157=head<0,    _if_conditional157) {
        # 1568 "libcomelang2.c"
        head+=len_112;
    }
    # 1575 "libcomelang2.c"
    # 1571 "libcomelang2.c"
    if(_if_conditional158=tail<0,    _if_conditional158) {
        # 1572 "libcomelang2.c"
        tail+=len_112+1;
    }
    # 1579 "libcomelang2.c"
    # 1575 "libcomelang2.c"
    if(_if_conditional159=head<0,    _if_conditional159) {
        # 1576 "libcomelang2.c"
        head=0;
    }
    # 1583 "libcomelang2.c"
    # 1579 "libcomelang2.c"
    if(_if_conditional160=tail<0,    _if_conditional160) {
        # 1580 "libcomelang2.c"
        __result188__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117;
        __freed_obj__ = 0;
        return __result188__;
    }
    # 1587 "libcomelang2.c"
    # 1583 "libcomelang2.c"
    if(_if_conditional161=tail>=len_112,    _if_conditional161) {
        # 1584 "libcomelang2.c"
        tail=len_112;
    }
    # 1587 "libcomelang2.c"
    sub_str_113=(char*)come_increment_ref_count(((char*)(right_value118=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    # 1589 "libcomelang2.c"
    memcpy(str+head,sub_str_113,string_length(sub_str_113)+1);
    # 1591 "libcomelang2.c"
    __result189__ = __result_obj__ = ((char*)(right_value119=__builtin_string(str)));
    if(sub_str_113 && !__freed_obj__) { sub_str_113 = come_decrement_ref_count(sub_str_113, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119;
    __freed_obj__ = 0;
    return __result189__;
    if(sub_str_113 && !__freed_obj__) { sub_str_113 = come_decrement_ref_count(sub_str_113, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
void* right_value120;
void* right_value121;
struct list$1charph* __result191__;
void* right_value122;
void* right_value123;
struct list$1charph* result_116;
void* right_value124;
void* right_value125;
struct buffer* str_117;
int i_118;
_Bool _for_condtionalA11;
_Bool _if_conditional164;
void* right_value129;
_Bool _if_conditional167;
void* right_value130;
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&result_116, 0, sizeof(struct list$1charph*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&str_117, 0, sizeof(struct buffer*));
memset(&i_118, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    # 1600 "libcomelang2.c"
    # 1596 "libcomelang2.c"
    if(_if_conditional162=self==((void*)0),    _if_conditional162) {
        # 1597 "libcomelang2.c"
        __result191__ = __result_obj__ = ((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1597)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value121;
        __freed_obj__ = 0;
        return __result191__;
    }
    # 1600 "libcomelang2.c"
    result_116=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1600))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    # 1602 "libcomelang2.c"
    str_117=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value125=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value124=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1602))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value125;
    __freed_obj__ = 0;
    # 1613 "libcomelang2.c"
    for(
    i_118=0 ,    0;    _for_condtionalA11=    i_118<charp_length(self) ,    _for_condtionalA11;    i_118++ ,    0    ){
        # 1612 "libcomelang2.c"
        # 1605 "libcomelang2.c"
        if(_if_conditional164=self[i_118]==c,        _if_conditional164) {
            # 1606 "libcomelang2.c"
            list$1charph_push_back(result_116,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(str_117->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value129;
            __freed_obj__ = 0;
            # 1607 "libcomelang2.c"
            buffer_reset(str_117);
        }
        else {
            # 1610 "libcomelang2.c"
            buffer_append_char(str_117,self[i_118]);
        }
    }
    # 1617 "libcomelang2.c"
    # 1613 "libcomelang2.c"
    if(_if_conditional167=buffer_length(str_117)!=0,    _if_conditional167) {
        # 1614 "libcomelang2.c"
        list$1charph_push_back(result_116,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(str_117->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value130;
        __freed_obj__ = 0;
    }
    # 1617 "libcomelang2.c"
    __result193__ = __result_obj__ = result_116;
    if(result_116 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_116, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_117 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result193__;
    if(result_116 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_117 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 157 "./comelang2.h"
            self->head=((void*)0);
            # 158 "./comelang2.h"
            self->tail=((void*)0);
            # 159 "./comelang2.h"
            self->len=0;
            # 161 "./comelang2.h"
            __result190__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result190__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_114;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_114, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1charph*));
                # 176 "./comelang2.h"
                it_114=self->head;
                # 182 "./comelang2.h"
                while(_while_condtional4=it_114!=((void*)0),                _while_condtional4) {
                    # 178 "./comelang2.h"
                    prev_it_115=it_114;
                    # 179 "./comelang2.h"
                    it_114=it_114->next;
                    # 180 "./comelang2.h"
                    if(prev_it_115 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "list_item$1charphp_finalize"
                        # 0 "list_item$1charphp_finalize"
                        if(_if_conditional163=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional163) {
                            # 0 "list_item$1charphp_finalize"
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
void* right_value126;
struct list_item$1charph* litem_119;
char* __dec_obj16;
_Bool _if_conditional166;
void* right_value127;
struct list_item$1charph* litem_120;
char* __dec_obj17;
void* right_value128;
struct list_item$1charph* litem_121;
char* __dec_obj18;
struct list$1charph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1charph*));
memset(&right_value127, 0, sizeof(void*));
memset(&litem_120, 0, sizeof(struct list_item$1charph*));
memset(&right_value128, 0, sizeof(void*));
memset(&litem_121, 0, sizeof(struct list_item$1charph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional165=self->len==0,                _if_conditional165) {
                    # 279 "./comelang2.h"
                    litem_119=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_119->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_119->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj16=litem_119->item;
                    litem_119->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    # 285 "./comelang2.h"
                    self->tail=litem_119;
                    # 286 "./comelang2.h"
                    self->head=litem_119;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional166=self->len==1,                    _if_conditional166) {
                        # 289 "./comelang2.h"
                        litem_120=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_120->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_120->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj17=litem_120->item;
                        litem_120->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        # 295 "./comelang2.h"
                        self->tail=litem_120;
                        # 296 "./comelang2.h"
                        self->head->next=litem_120;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_121=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_121->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_121->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj18=litem_121->item;
                        litem_121->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        # 305 "./comelang2.h"
                        self->tail->next=litem_121;
                        # 306 "./comelang2.h"
                        self->tail=litem_121;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result192__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result192__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
void* right_value131;
void* right_value132;
struct list$1charph* __result194__;
void* right_value133;
void* right_value134;
struct list$1charph* result_122;
void* right_value135;
void* right_value136;
struct buffer* str_123;
int i_124;
_Bool _for_condtionalA12;
_Bool _if_conditional169;
void* right_value137;
_Bool _if_conditional170;
void* right_value138;
struct list$1charph* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&str_123, 0, sizeof(struct buffer*));
memset(&i_124, 0, sizeof(int));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    # 1626 "libcomelang2.c"
    # 1622 "libcomelang2.c"
    if(_if_conditional168=self==((void*)0),    _if_conditional168) {
        # 1623 "libcomelang2.c"
        __result194__ = __result_obj__ = ((struct list$1charph*)(right_value132=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1623)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value132;
        __freed_obj__ = 0;
        return __result194__;
    }
    # 1626 "libcomelang2.c"
    result_122=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1626))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    # 1628 "libcomelang2.c"
    str_123=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1628))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value136;
    __freed_obj__ = 0;
    # 1639 "libcomelang2.c"
    for(
    i_124=0 ,    0;    _for_condtionalA12=    i_124<charp_length(self) ,    _for_condtionalA12;    i_124++ ,    0    ){
        # 1638 "libcomelang2.c"
        # 1631 "libcomelang2.c"
        if(_if_conditional169=self[i_124]==c,        _if_conditional169) {
            # 1632 "libcomelang2.c"
            list$1charph_push_back(result_122,(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(str_123->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = 0;
            # 1633 "libcomelang2.c"
            buffer_reset(str_123);
        }
        else {
            # 1636 "libcomelang2.c"
            buffer_append_char(str_123,self[i_124]);
        }
    }
    # 1643 "libcomelang2.c"
    # 1639 "libcomelang2.c"
    if(_if_conditional170=buffer_length(str_123)!=0,    _if_conditional170) {
        # 1640 "libcomelang2.c"
        list$1charph_push_back(result_122,(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(str_123->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
    }
    # 1643 "libcomelang2.c"
    __result195__ = __result_obj__ = result_122;
    if(result_122 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result195__;
    if(result_122 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_123, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
void* right_value139;
char* __result196__;
char* p_125;
_Bool _while_condtional5;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value140;
char* __result197__;
void* right_value141;
char* __result198__;
void* right_value142;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
memset(&p_125, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    # 1654 "libcomelang2.c"
    # 1651 "libcomelang2.c"
    if(_if_conditional171=path==((void*)0),    _if_conditional171) {
        # 1652 "libcomelang2.c"
        __result196__ = __result_obj__ = ((char*)(right_value139=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
        return __result196__;
    }
    # 1654 "libcomelang2.c"
    p_125=path+strlen(path);
    # 1665 "libcomelang2.c"
    while(_while_condtional5=p_125>=path,    _while_condtional5) {
        # 1663 "libcomelang2.c"
        # 1657 "libcomelang2.c"
        if(_if_conditional172=*p_125==47,        _if_conditional172) {
            # 1658 "libcomelang2.c"
            break;
        }
        else {
            # 1661 "libcomelang2.c"
            p_125--;
        }
    }
    # 1672 "libcomelang2.c"
    # 1665 "libcomelang2.c"
    if(_if_conditional173=p_125<path,    _if_conditional173) {
        # 1666 "libcomelang2.c"
        __result197__ = __result_obj__ = ((char*)(right_value140=__builtin_string(path)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
        return __result197__;
    }
    else {
        # 1669 "libcomelang2.c"
        __result198__ = __result_obj__ = ((char*)(right_value141=__builtin_string(p_125+1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141;
        __freed_obj__ = 0;
        return __result198__;
    }
    # 1672 "libcomelang2.c"
    __result199__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142;
    __freed_obj__ = 0;
    return __result199__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
void* right_value143;
char* __result200__;
void* right_value144;
void* right_value145;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    # 1680 "libcomelang2.c"
    # 1677 "libcomelang2.c"
    if(_if_conditional174=path==((void*)0),    _if_conditional174) {
        # 1678 "libcomelang2.c"
        __result200__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143;
        __freed_obj__ = 0;
        return __result200__;
    }
    # 1680 "libcomelang2.c"
    __result201__ = __result_obj__ = ((char*)(right_value145=__builtin_string(dirname(((char*)(right_value144=__builtin_string(path)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value144;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value145;
    __freed_obj__ = 0;
    return __result201__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
void* right_value146;
char* __result202__;
void* right_value147;
char* path2_126;
char* p_127;
_Bool _while_condtional6;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value148;
char* __result203__;
void* right_value149;
char* __result204__;
void* right_value150;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&path2_126, 0, sizeof(char*));
memset(&p_127, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
    # 1688 "libcomelang2.c"
    # 1685 "libcomelang2.c"
    if(_if_conditional175=path==((void*)0),    _if_conditional175) {
        # 1686 "libcomelang2.c"
        __result202__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146;
        __freed_obj__ = 0;
        return __result202__;
    }
    # 1688 "libcomelang2.c"
    path2_126=(char*)come_increment_ref_count(((char*)(right_value147=xbasename(path))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    # 1690 "libcomelang2.c"
    p_127=path2_126+strlen(path2_126);
    # 1701 "libcomelang2.c"
    while(_while_condtional6=p_127>=path2_126,    _while_condtional6) {
        # 1699 "libcomelang2.c"
        # 1693 "libcomelang2.c"
        if(_if_conditional176=*p_127==46,        _if_conditional176) {
            # 1694 "libcomelang2.c"
            break;
        }
        else {
            # 1697 "libcomelang2.c"
            p_127--;
        }
    }
    # 1708 "libcomelang2.c"
    # 1701 "libcomelang2.c"
    if(_if_conditional177=p_127<path2_126,    _if_conditional177) {
        # 1702 "libcomelang2.c"
        __result203__ = __result_obj__ = ((char*)(right_value148=__builtin_string(path2_126)));
        if(path2_126 && !__freed_obj__) { path2_126 = come_decrement_ref_count(path2_126, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148;
        __freed_obj__ = 0;
        return __result203__;
    }
    else {
        # 1705 "libcomelang2.c"
        __result204__ = __result_obj__ = ((char*)(right_value149=string_substring(path2_126,0,p_127-path2_126)));
        if(path2_126 && !__freed_obj__) { path2_126 = come_decrement_ref_count(path2_126, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149;
        __freed_obj__ = 0;
        return __result204__;
    }
    # 1708 "libcomelang2.c"
    __result205__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
    if(path2_126 && !__freed_obj__) { path2_126 = come_decrement_ref_count(path2_126, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value150;
    __freed_obj__ = 0;
    return __result205__;
    if(path2_126 && !__freed_obj__) { path2_126 = come_decrement_ref_count(path2_126, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
void* right_value151;
char* __result206__;
char* p_128;
_Bool _while_condtional7;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value152;
char* __result207__;
void* right_value153;
char* __result208__;
void* right_value154;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
memset(&p_128, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    # 1716 "libcomelang2.c"
    # 1713 "libcomelang2.c"
    if(_if_conditional178=path==((void*)0),    _if_conditional178) {
        # 1714 "libcomelang2.c"
        __result206__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = 0;
        return __result206__;
    }
    # 1716 "libcomelang2.c"
    p_128=path+strlen(path);
    # 1727 "libcomelang2.c"
    while(_while_condtional7=p_128>=path,    _while_condtional7) {
        # 1725 "libcomelang2.c"
        # 1719 "libcomelang2.c"
        if(_if_conditional179=*p_128==46,        _if_conditional179) {
            # 1720 "libcomelang2.c"
            break;
        }
        else {
            # 1723 "libcomelang2.c"
            p_128--;
        }
    }
    # 1734 "libcomelang2.c"
    # 1727 "libcomelang2.c"
    if(_if_conditional180=p_128<path,    _if_conditional180) {
        # 1728 "libcomelang2.c"
        __result207__ = __result_obj__ = ((char*)(right_value152=__builtin_string(path)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152;
        __freed_obj__ = 0;
        return __result207__;
    }
    else {
        # 1731 "libcomelang2.c"
        __result208__ = __result_obj__ = ((char*)(right_value153=__builtin_string(p_128+1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153;
        __freed_obj__ = 0;
        return __result208__;
    }
    # 1734 "libcomelang2.c"
    __result209__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value154;
    __freed_obj__ = 0;
    return __result209__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
void* right_value155;
char* __result210__;
char* result_129;
void* right_value156;
char* result2_130;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&result2_130, 0, sizeof(char*));
    # 1742 "libcomelang2.c"
    # 1739 "libcomelang2.c"
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        # 1740 "libcomelang2.c"
        __result210__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        return __result210__;
    }
    # 1742 "libcomelang2.c"
    result_129=realpath(path,((void*)0));
    # 1744 "libcomelang2.c"
    result2_130=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(result_129))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    # 1746 "libcomelang2.c"
    free(result_129);
    # 1748 "libcomelang2.c"
    __result211__ = __result_obj__ = result2_130;
    if(result2_130 && !__freed_obj__) { result2_130 = come_decrement_ref_count(result2_130, (void*)0, (void*)0, 0, 1, 0); }
    return __result211__;
    if(result2_130 && !__freed_obj__) { result2_130 = come_decrement_ref_count(result2_130, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
void* right_value157;
char* __result212__;
void* right_value158;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    # 1762 "libcomelang2.c"
    # 1756 "libcomelang2.c"
    if(_if_conditional182=self,    _if_conditional182) {
        # 1757 "libcomelang2.c"
        __result212__ = __result_obj__ = ((char*)(right_value157=__builtin_string("true")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157;
        __freed_obj__ = 0;
        return __result212__;
    }
    else {
        # 1760 "libcomelang2.c"
        __result213__ = __result_obj__ = ((char*)(right_value158=__builtin_string("false")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value158;
        __freed_obj__ = 0;
        return __result213__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    # 1766 "libcomelang2.c"
    __result214__ = __result_obj__ = ((char*)(right_value159=xsprintf("%c",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159;
    __freed_obj__ = 0;
    return __result214__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value160;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    # 1771 "libcomelang2.c"
    __result215__ = __result_obj__ = ((char*)(right_value160=xsprintf("%d",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    return __result215__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    # 1776 "libcomelang2.c"
    __result216__ = __result_obj__ = ((char*)(right_value161=xsprintf("%d",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    return __result216__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    # 1781 "libcomelang2.c"
    __result217__ = __result_obj__ = ((char*)(right_value162=xsprintf("%ld",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    return __result217__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    # 1786 "libcomelang2.c"
    __result218__ = __result_obj__ = ((char*)(right_value163=xsprintf("%ld",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value163;
    __freed_obj__ = 0;
    return __result218__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    # 1791 "libcomelang2.c"
    __result219__ = __result_obj__ = ((char*)(right_value164=xsprintf("%f",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value164;
    __freed_obj__ = 0;
    return __result219__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    # 1796 "libcomelang2.c"
    __result220__ = __result_obj__ = ((char*)(right_value165=xsprintf("%lf",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165;
    __freed_obj__ = 0;
    return __result220__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value166;
char* __result221__;
void* right_value167;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
    # 1804 "libcomelang2.c"
    # 1801 "libcomelang2.c"
    if(_if_conditional183=self==((void*)0),    _if_conditional183) {
        # 1802 "libcomelang2.c"
        __result221__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
        return __result221__;
    }
    # 1804 "libcomelang2.c"
    __result222__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = 0;
    return __result222__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
void* right_value168;
char* __result223__;
void* right_value169;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    # 1812 "libcomelang2.c"
    # 1809 "libcomelang2.c"
    if(_if_conditional184=self==((void*)0),    _if_conditional184) {
        # 1810 "libcomelang2.c"
        __result223__ = __result_obj__ = ((char*)(right_value168=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        return __result223__;
    }
    # 1812 "libcomelang2.c"
    __result224__ = __result_obj__ = ((char*)(right_value169=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = 0;
    return __result224__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
int __result225__;
_Bool _if_conditional186;
int __result226__;
_Bool _if_conditional187;
int __result227__;
int __result228__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1833 "libcomelang2.c"
    # 1820 "libcomelang2.c"
    if(_if_conditional185=!left&&right,    _if_conditional185) {
        # 1821 "libcomelang2.c"
        __result225__ = -1;
        return __result225__;
    }
    else {
        # 1833 "libcomelang2.c"
        # 1823 "libcomelang2.c"
        if(_if_conditional186=left&&right,        _if_conditional186) {
            # 1824 "libcomelang2.c"
            __result226__ = 0;
            return __result226__;
        }
        else {
            # 1833 "libcomelang2.c"
            # 1826 "libcomelang2.c"
            if(_if_conditional187=!left&&!right,            _if_conditional187) {
                # 1827 "libcomelang2.c"
                __result227__ = 0;
                return __result227__;
            }
            else {
                # 1830 "libcomelang2.c"
                __result228__ = 1;
                return __result228__;
            }
        }
    }
    # 1833 "libcomelang2.c"
    __result229__ = 0;
    return __result229__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
int __result230__;
_Bool _if_conditional189;
int __result231__;
int __result232__;
int __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1848 "libcomelang2.c"
    # 1838 "libcomelang2.c"
    if(_if_conditional188=left<right,    _if_conditional188) {
        # 1839 "libcomelang2.c"
        __result230__ = -1;
        return __result230__;
    }
    else {
        # 1848 "libcomelang2.c"
        # 1841 "libcomelang2.c"
        if(_if_conditional189=left>right,        _if_conditional189) {
            # 1842 "libcomelang2.c"
            __result231__ = 1;
            return __result231__;
        }
        else {
            # 1845 "libcomelang2.c"
            __result232__ = 0;
            return __result232__;
        }
    }
    # 1848 "libcomelang2.c"
    __result233__ = 0;
    return __result233__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
int __result234__;
_Bool _if_conditional191;
int __result235__;
int __result236__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1863 "libcomelang2.c"
    # 1853 "libcomelang2.c"
    if(_if_conditional190=left<right,    _if_conditional190) {
        # 1854 "libcomelang2.c"
        __result234__ = -1;
        return __result234__;
    }
    else {
        # 1863 "libcomelang2.c"
        # 1856 "libcomelang2.c"
        if(_if_conditional191=left>right,        _if_conditional191) {
            # 1857 "libcomelang2.c"
            __result235__ = 1;
            return __result235__;
        }
        else {
            # 1860 "libcomelang2.c"
            __result236__ = 0;
            return __result236__;
        }
    }
    # 1863 "libcomelang2.c"
    __result237__ = 0;
    return __result237__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
int __result238__;
_Bool _if_conditional193;
int __result239__;
int __result240__;
int __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1878 "libcomelang2.c"
    # 1868 "libcomelang2.c"
    if(_if_conditional192=left<right,    _if_conditional192) {
        # 1869 "libcomelang2.c"
        __result238__ = -1;
        return __result238__;
    }
    else {
        # 1878 "libcomelang2.c"
        # 1871 "libcomelang2.c"
        if(_if_conditional193=left>right,        _if_conditional193) {
            # 1872 "libcomelang2.c"
            __result239__ = 1;
            return __result239__;
        }
        else {
            # 1875 "libcomelang2.c"
            __result240__ = 0;
            return __result240__;
        }
    }
    # 1878 "libcomelang2.c"
    __result241__ = 0;
    return __result241__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
int __result242__;
_Bool _if_conditional195;
int __result243__;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1893 "libcomelang2.c"
    # 1883 "libcomelang2.c"
    if(_if_conditional194=left<right,    _if_conditional194) {
        # 1884 "libcomelang2.c"
        __result242__ = -1;
        return __result242__;
    }
    else {
        # 1893 "libcomelang2.c"
        # 1886 "libcomelang2.c"
        if(_if_conditional195=left>right,        _if_conditional195) {
            # 1887 "libcomelang2.c"
            __result243__ = 1;
            return __result243__;
        }
        else {
            # 1890 "libcomelang2.c"
            __result244__ = 0;
            return __result244__;
        }
    }
    # 1893 "libcomelang2.c"
    __result245__ = 0;
    return __result245__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
int __result246__;
_Bool _if_conditional197;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1908 "libcomelang2.c"
    # 1898 "libcomelang2.c"
    if(_if_conditional196=left<right,    _if_conditional196) {
        # 1899 "libcomelang2.c"
        __result246__ = -1;
        return __result246__;
    }
    else {
        # 1908 "libcomelang2.c"
        # 1901 "libcomelang2.c"
        if(_if_conditional197=left>right,        _if_conditional197) {
            # 1902 "libcomelang2.c"
            __result247__ = 1;
            return __result247__;
        }
        else {
            # 1905 "libcomelang2.c"
            __result248__ = 0;
            return __result248__;
        }
    }
    # 1908 "libcomelang2.c"
    __result249__ = 0;
    return __result249__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
int __result250__;
_Bool _if_conditional199;
int __result251__;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1923 "libcomelang2.c"
    # 1913 "libcomelang2.c"
    if(_if_conditional198=left<right,    _if_conditional198) {
        # 1914 "libcomelang2.c"
        __result250__ = -1;
        return __result250__;
    }
    else {
        # 1923 "libcomelang2.c"
        # 1916 "libcomelang2.c"
        if(_if_conditional199=left>right,        _if_conditional199) {
            # 1917 "libcomelang2.c"
            __result251__ = 1;
            return __result251__;
        }
        else {
            # 1920 "libcomelang2.c"
            __result252__ = 0;
            return __result252__;
        }
    }
    # 1923 "libcomelang2.c"
    __result253__ = 0;
    return __result253__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
int __result254__;
_Bool _if_conditional201;
int __result255__;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1938 "libcomelang2.c"
    # 1928 "libcomelang2.c"
    if(_if_conditional200=left<right,    _if_conditional200) {
        # 1929 "libcomelang2.c"
        __result254__ = -1;
        return __result254__;
    }
    else {
        # 1938 "libcomelang2.c"
        # 1931 "libcomelang2.c"
        if(_if_conditional201=left>right,        _if_conditional201) {
            # 1932 "libcomelang2.c"
            __result255__ = 1;
            return __result255__;
        }
        else {
            # 1935 "libcomelang2.c"
            __result256__ = 0;
            return __result256__;
        }
    }
    # 1938 "libcomelang2.c"
    __result257__ = 0;
    return __result257__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
int __result258__;
_Bool _if_conditional203;
int __result259__;
_Bool _if_conditional204;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1953 "libcomelang2.c"
    # 1943 "libcomelang2.c"
    if(_if_conditional202=left==((void*)0)&&right==((void*)0),    _if_conditional202) {
        # 1944 "libcomelang2.c"
        __result258__ = 0;
        return __result258__;
    }
    else {
        # 1953 "libcomelang2.c"
        # 1946 "libcomelang2.c"
        if(_if_conditional203=left==((void*)0),        _if_conditional203) {
            # 1947 "libcomelang2.c"
            __result259__ = -1;
            return __result259__;
        }
        else {
            # 1953 "libcomelang2.c"
            # 1949 "libcomelang2.c"
            if(_if_conditional204=right==((void*)0),            _if_conditional204) {
                # 1950 "libcomelang2.c"
                __result260__ = 1;
                return __result260__;
            }
        }
    }
    # 1953 "libcomelang2.c"
    __result261__ = strcmp(left,right);
    return __result261__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
int __result262__;
_Bool _if_conditional206;
int __result263__;
_Bool _if_conditional207;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1968 "libcomelang2.c"
    # 1958 "libcomelang2.c"
    if(_if_conditional205=left==((void*)0)&&right==((void*)0),    _if_conditional205) {
        # 1959 "libcomelang2.c"
        __result262__ = 0;
        return __result262__;
    }
    else {
        # 1968 "libcomelang2.c"
        # 1961 "libcomelang2.c"
        if(_if_conditional206=left==((void*)0),        _if_conditional206) {
            # 1962 "libcomelang2.c"
            __result263__ = -1;
            return __result263__;
        }
        else {
            # 1968 "libcomelang2.c"
            # 1964 "libcomelang2.c"
            if(_if_conditional207=right==((void*)0),            _if_conditional207) {
                # 1965 "libcomelang2.c"
                __result264__ = 1;
                return __result264__;
            }
        }
    }
    # 1968 "libcomelang2.c"
    __result265__ = strcmp(left,right);
    return __result265__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
void* right_value170;
void* right_value171;
void* right_value172;
struct optional$2charphbool* __result267__;
void* right_value173;
void* right_value174;
struct buffer* buf_131;
_Bool _while_condtional8;
int size_133;
_Bool _if_conditional210;
void* right_value175;
void* right_value176;
void* right_value177;
struct optional$2charphbool* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&buf_131, 0, sizeof(struct buffer*));
memset(&size_133, 0, sizeof(int));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
    # 1979 "libcomelang2.c"
    # 1976 "libcomelang2.c"
    if(_if_conditional208=f==((void*)0),    _if_conditional208) {
        # 1977 "libcomelang2.c"
        __result267__ = __result_obj__ = ((struct optional$2charphbool*)(right_value172=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value171=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1977))),(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value171;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value172;
        __freed_obj__ = 0;
        return __result267__;
    }
    # 1979 "libcomelang2.c"
    buf_131=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1979))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    # 1993 "libcomelang2.c"
    while(_while_condtional8=1,    _while_condtional8) {
        # 1982 "libcomelang2.c"
        char buf2_132[8192];
        memset(&buf2_132, 0, sizeof(char)        *(8192)        );
        # 1984 "libcomelang2.c"
        size_133=fread(buf2_132,1,8192,f);
        # 1986 "libcomelang2.c"
        buffer_append(buf_131,buf2_132,size_133);
        # 1991 "libcomelang2.c"
        # 1988 "libcomelang2.c"
        if(_if_conditional210=size_133<8192,        _if_conditional210) {
            # 1989 "libcomelang2.c"
            break;
        }
    }
    # 1993 "libcomelang2.c"
    __result268__ = __result_obj__ = ((struct optional$2charphbool*)(right_value177=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value176=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 1993)))),(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(buf_131)))),(_Bool)1)));
    if(buf_131 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value175;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value177;
    __freed_obj__ = 0;
    return __result268__;
    if(buf_131 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_131, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj19;
struct optional$2charphbool* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            __dec_obj19=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result266__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            return __result266__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "optional$2charphboolp_finalize"
                # 0 "optional$2charphboolp_finalize"
                if(_if_conditional209=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional209) {
                    # 0 "optional$2charphboolp_finalize"
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
void* right_value178;
void* right_value179;
struct optional$2intbool* __result269__;
void* right_value180;
void* right_value181;
struct optional$2intbool* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
    # 2002 "libcomelang2.c"
    # 1998 "libcomelang2.c"
    if(_if_conditional211=f==((void*)0)||str==((void*)0),    _if_conditional211) {
        # 1999 "libcomelang2.c"
        __result269__ = __result_obj__ = ((struct optional$2intbool*)(right_value179=optional$2intbool_initialize(((struct optional$2intbool*)(right_value178=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1999))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value179;
        __freed_obj__ = 0;
        return __result269__;
    }
    # 2002 "libcomelang2.c"
    __result270__ = __result_obj__ = ((struct optional$2intbool*)(right_value181=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value180=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2002)))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value181;
    __freed_obj__ = 0;
    return __result270__;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
void* right_value182;
void* right_value183;
struct optional$2intbool* __result271__;
int result_134;
_Bool _if_conditional213;
void* right_value184;
void* right_value185;
struct optional$2intbool* __result272__;
void* right_value186;
void* right_value187;
struct optional$2intbool* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&result_134, 0, sizeof(int));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    # 2011 "libcomelang2.c"
    # 2007 "libcomelang2.c"
    if(_if_conditional212=f==((void*)0),    _if_conditional212) {
        # 2008 "libcomelang2.c"
        __result271__ = __result_obj__ = ((struct optional$2intbool*)(right_value183=optional$2intbool_initialize(((struct optional$2intbool*)(right_value182=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2008))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value182;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value183;
        __freed_obj__ = 0;
        return __result271__;
    }
    # 2011 "libcomelang2.c"
    result_134=fclose(f);
    # 2017 "libcomelang2.c"
    # 2013 "libcomelang2.c"
    if(_if_conditional213=result_134<0,    _if_conditional213) {
        # 2014 "libcomelang2.c"
        __result272__ = __result_obj__ = ((struct optional$2intbool*)(right_value185=optional$2intbool_initialize(((struct optional$2intbool*)(right_value184=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2014))),result_134,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value184;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value185;
        __freed_obj__ = 0;
        return __result272__;
    }
    # 2017 "libcomelang2.c"
    __result273__ = __result_obj__ = ((struct optional$2intbool*)(right_value187=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value186=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2017)))),result_134,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value187;
    __freed_obj__ = 0;
    return __result273__;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
void* right_value188;
void* right_value189;
struct optional$2_IO_FILEpbool* __result275__;
va_list args_136;
int result_137;
_Bool _if_conditional215;
void* right_value190;
void* right_value191;
struct optional$2_IO_FILEpbool* __result276__;
void* right_value192;
void* right_value193;
struct optional$2_IO_FILEpbool* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&args_136, 0, sizeof(va_list));
memset(&result_137, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    # 2025 "libcomelang2.c"
    # 2022 "libcomelang2.c"
    if(_if_conditional214=f==((void*)0)||msg==((void*)0),    _if_conditional214) {
        # 2023 "libcomelang2.c"
        __result275__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value189=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value188=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2023))),f,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value189;
        __freed_obj__ = 0;
        return __result275__;
    }
    # 2025 "libcomelang2.c"
    char msg2_135[1024*2*2*2];
    memset(&msg2_135, 0, sizeof(char)    *(1024*2*2*2)    );
    # 2027 "libcomelang2.c"
    # 2028 "libcomelang2.c"
    __builtin_va_start(args_136,msg);
    # 2029 "libcomelang2.c"
    vsnprintf(msg2_135,1024*2*2*2,msg,args_136);
    # 2030 "libcomelang2.c"
    __builtin_va_end(args_136);
    # 2032 "libcomelang2.c"
    result_137=fprintf(f,"%s",msg2_135);
    # 2038 "libcomelang2.c"
    # 2034 "libcomelang2.c"
    if(_if_conditional215=result_137<0,    _if_conditional215) {
        # 2035 "libcomelang2.c"
        __result276__ = __result_obj__ = ((struct optional$2intbool*)(right_value191=optional$2intbool_initialize(((struct optional$2intbool*)(right_value190=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2035))),result_137,(_Bool)0)));
        if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value190;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value191;
        __freed_obj__ = 0;
        return __result276__;
    }
    # 2038 "libcomelang2.c"
    __result277__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value193=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value192=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2038)))),f,(_Bool)1)));
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value193;
    __freed_obj__ = 0;
    return __result277__;
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            self->v1=v1;
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result274__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result274__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
void* right_value194;
void* right_value195;
struct optional$2intbool* __result278__;
struct _IO_FILE* f_138;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value196;
void* right_value197;
struct optional$2intbool* __result279__;
int result_139;
_Bool _if_conditional219;
void* right_value198;
void* right_value199;
struct optional$2intbool* __result280__;
int result2_140;
_Bool _if_conditional220;
void* right_value200;
void* right_value201;
struct optional$2intbool* __result281__;
void* right_value202;
void* right_value203;
struct optional$2intbool* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&f_138, 0, sizeof(struct _IO_FILE*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&result_139, 0, sizeof(int));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&result2_140, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    # 2047 "libcomelang2.c"
    # 2043 "libcomelang2.c"
    if(_if_conditional216=self==((void*)0)||file_name==((void*)0),    _if_conditional216) {
        # 2044 "libcomelang2.c"
        __result278__ = __result_obj__ = ((struct optional$2intbool*)(right_value195=optional$2intbool_initialize(((struct optional$2intbool*)(right_value194=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2044))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value195;
        __freed_obj__ = 0;
        return __result278__;
    }
    # 2047 "libcomelang2.c"
    # 2055 "libcomelang2.c"
    # 2048 "libcomelang2.c"
    if(_if_conditional217=append,    _if_conditional217) {
        # 2049 "libcomelang2.c"
        f_138=fopen(file_name,"a");
    }
    else {
        # 2052 "libcomelang2.c"
        f_138=fopen(file_name,"w");
    }
    # 2059 "libcomelang2.c"
    # 2055 "libcomelang2.c"
    if(_if_conditional218=f_138==((void*)0),    _if_conditional218) {
        # 2056 "libcomelang2.c"
        __result279__ = __result_obj__ = ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2056))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value196;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value197;
        __freed_obj__ = 0;
        return __result279__;
    }
    # 2059 "libcomelang2.c"
    result_139=fwrite(self,strlen(self),1,f_138);
    # 2065 "libcomelang2.c"
    # 2061 "libcomelang2.c"
    if(_if_conditional219=result_139<0,    _if_conditional219) {
        # 2062 "libcomelang2.c"
        __result280__ = __result_obj__ = ((struct optional$2intbool*)(right_value199=optional$2intbool_initialize(((struct optional$2intbool*)(right_value198=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2062))),result_139,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199;
        __freed_obj__ = 0;
        return __result280__;
    }
    # 2067 "libcomelang2.c"
    result2_140=fclose(f_138);
    # 2071 "libcomelang2.c"
    # 2067 "libcomelang2.c"
    if(_if_conditional220=result2_140<0,    _if_conditional220) {
        # 2068 "libcomelang2.c"
        __result281__ = __result_obj__ = ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2068))),result2_140,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value201;
        __freed_obj__ = 0;
        return __result281__;
    }
    # 2071 "libcomelang2.c"
    __result282__ = __result_obj__ = ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2071)))),result_139,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value203;
    __freed_obj__ = 0;
    return __result282__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
void* right_value204;
void* right_value205;
struct optional$2intbool* __result283__;
struct _IO_FILE* f_141;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value206;
void* right_value207;
struct optional$2intbool* __result284__;
int result_142;
_Bool _if_conditional224;
void* right_value208;
void* right_value209;
struct optional$2intbool* __result285__;
int result2_143;
_Bool _if_conditional225;
void* right_value210;
void* right_value211;
struct optional$2intbool* __result286__;
void* right_value212;
void* right_value213;
struct optional$2intbool* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&f_141, 0, sizeof(struct _IO_FILE*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&result_142, 0, sizeof(int));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&result2_143, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
    # 2080 "libcomelang2.c"
    # 2076 "libcomelang2.c"
    if(_if_conditional221=self==((void*)0)||file_name==((void*)0),    _if_conditional221) {
        # 2077 "libcomelang2.c"
        __result283__ = __result_obj__ = ((struct optional$2intbool*)(right_value205=optional$2intbool_initialize(((struct optional$2intbool*)(right_value204=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2077))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value205;
        __freed_obj__ = 0;
        return __result283__;
    }
    # 2080 "libcomelang2.c"
    # 2088 "libcomelang2.c"
    # 2081 "libcomelang2.c"
    if(_if_conditional222=append,    _if_conditional222) {
        # 2082 "libcomelang2.c"
        f_141=fopen(file_name,"a");
    }
    else {
        # 2085 "libcomelang2.c"
        f_141=fopen(file_name,"w");
    }
    # 2092 "libcomelang2.c"
    # 2088 "libcomelang2.c"
    if(_if_conditional223=f_141==((void*)0),    _if_conditional223) {
        # 2089 "libcomelang2.c"
        __result284__ = __result_obj__ = ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2089))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value207;
        __freed_obj__ = 0;
        return __result284__;
    }
    # 2092 "libcomelang2.c"
    result_142=fwrite(self,strlen(self),1,f_141);
    # 2098 "libcomelang2.c"
    # 2094 "libcomelang2.c"
    if(_if_conditional224=result_142<0,    _if_conditional224) {
        # 2095 "libcomelang2.c"
        __result285__ = __result_obj__ = ((struct optional$2intbool*)(right_value209=optional$2intbool_initialize(((struct optional$2intbool*)(right_value208=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2095))),result_142,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value209;
        __freed_obj__ = 0;
        return __result285__;
    }
    # 2100 "libcomelang2.c"
    result2_143=fclose(f_141);
    # 2104 "libcomelang2.c"
    # 2100 "libcomelang2.c"
    if(_if_conditional225=result2_143<0,    _if_conditional225) {
        # 2101 "libcomelang2.c"
        __result286__ = __result_obj__ = ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2101))),result2_143,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value211;
        __freed_obj__ = 0;
        return __result286__;
    }
    # 2104 "libcomelang2.c"
    __result287__ = __result_obj__ = ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2104)))),result_142,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value213;
    __freed_obj__ = 0;
    return __result287__;
}

struct optional$2charphbool* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
void* right_value214;
void* right_value215;
void* right_value216;
struct optional$2charphbool* __result288__;
struct _IO_FILE* f_144;
_Bool _if_conditional227;
void* right_value217;
void* right_value218;
void* right_value219;
struct optional$2charphbool* __result289__;
void* right_value220;
void* right_value221;
struct buffer* buf_145;
_Bool _while_condtional9;
int size_147;
_Bool _if_conditional228;
void* right_value222;
char* result_148;
int result2_149;
_Bool _if_conditional229;
void* right_value223;
void* right_value224;
void* right_value225;
struct optional$2charphbool* __result290__;
void* right_value226;
void* right_value227;
struct optional$2charphbool* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&buf_145, 0, sizeof(struct buffer*));
memset(&size_147, 0, sizeof(int));
memset(&right_value222, 0, sizeof(void*));
memset(&result_148, 0, sizeof(char*));
memset(&result2_149, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    # 2113 "libcomelang2.c"
    # 2109 "libcomelang2.c"
    if(_if_conditional226=file_name==((void*)0),    _if_conditional226) {
        # 2110 "libcomelang2.c"
        __result288__ = __result_obj__ = ((struct optional$2charphbool*)(right_value216=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value215=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2110))),(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value215;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value216;
        __freed_obj__ = 0;
        return __result288__;
    }
    # 2113 "libcomelang2.c"
    f_144=fopen(file_name,"r");
    # 2119 "libcomelang2.c"
    # 2115 "libcomelang2.c"
    if(_if_conditional227=f_144==((void*)0),    _if_conditional227) {
        # 2116 "libcomelang2.c"
        __result289__ = __result_obj__ = ((struct optional$2charphbool*)(right_value219=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value218=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2116))),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value218;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value219;
        __freed_obj__ = 0;
        return __result289__;
    }
    # 2119 "libcomelang2.c"
    buf_145=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2119))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value221;
    __freed_obj__ = 0;
    # 2133 "libcomelang2.c"
    while(_while_condtional9=1,    _while_condtional9) {
        # 2122 "libcomelang2.c"
        char buf2_146[8192];
        memset(&buf2_146, 0, sizeof(char)        *(8192)        );
        # 2124 "libcomelang2.c"
        size_147=fread(buf2_146,1,8192,f_144);
        # 2126 "libcomelang2.c"
        buffer_append(buf_145,buf2_146,size_147);
        # 2131 "libcomelang2.c"
        # 2128 "libcomelang2.c"
        if(_if_conditional228=size_147<8192,        _if_conditional228) {
            # 2129 "libcomelang2.c"
            break;
        }
    }
    # 2133 "libcomelang2.c"
    result_148=(char*)come_increment_ref_count(((char*)(right_value222=buffer_to_string(buf_145))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value222;
    __freed_obj__ = 0;
    # 2137 "libcomelang2.c"
    result2_149=fclose(f_144);
    # 2141 "libcomelang2.c"
    # 2137 "libcomelang2.c"
    if(_if_conditional229=result2_149<0,    _if_conditional229) {
        # 2138 "libcomelang2.c"
        __result290__ = __result_obj__ = ((struct optional$2charphbool*)(right_value225=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value224=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2138))),(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("")))),(_Bool)0)));
        if(buf_145 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_145, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_148 && !__freed_obj__) { result_148 = come_decrement_ref_count(result_148, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value224;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value225;
        __freed_obj__ = 0;
        return __result290__;
    }
    # 2141 "libcomelang2.c"
    __result291__ = __result_obj__ = ((struct optional$2charphbool*)(right_value227=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value226=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2141)))),(char*)come_increment_ref_count(result_148),(_Bool)1)));
    if(buf_145 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_148 && !__freed_obj__) { result_148 = come_decrement_ref_count(result_148, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value226;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value227;
    __freed_obj__ = 0;
    return __result291__;
    if(buf_145 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_148 && !__freed_obj__) { result_148 = come_decrement_ref_count(result_148, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
void* right_value228;
void* right_value229;
void* right_value230;
struct optional$2charphbool* __result292__;
struct _IO_FILE* f_150;
_Bool _if_conditional231;
void* right_value231;
void* right_value232;
void* right_value233;
struct optional$2charphbool* __result293__;
void* right_value234;
void* right_value235;
struct buffer* buf_151;
_Bool _while_condtional10;
int size_153;
_Bool _if_conditional232;
void* right_value236;
char* result_154;
int result2_155;
_Bool _if_conditional233;
void* right_value237;
void* right_value238;
void* right_value239;
struct optional$2charphbool* __result294__;
void* right_value240;
void* right_value241;
struct optional$2charphbool* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&f_150, 0, sizeof(struct _IO_FILE*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&buf_151, 0, sizeof(struct buffer*));
memset(&size_153, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result2_155, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
    # 2150 "libcomelang2.c"
    # 2146 "libcomelang2.c"
    if(_if_conditional230=file_name==((void*)0),    _if_conditional230) {
        # 2147 "libcomelang2.c"
        __result292__ = __result_obj__ = ((struct optional$2charphbool*)(right_value230=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value229=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2147))),(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value229;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value230;
        __freed_obj__ = 0;
        return __result292__;
    }
    # 2150 "libcomelang2.c"
    f_150=fopen(file_name,"r");
    # 2156 "libcomelang2.c"
    # 2152 "libcomelang2.c"
    if(_if_conditional231=f_150==((void*)0),    _if_conditional231) {
        # 2153 "libcomelang2.c"
        __result293__ = __result_obj__ = ((struct optional$2charphbool*)(right_value233=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value232=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2153))),(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value232;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value233;
        __freed_obj__ = 0;
        return __result293__;
    }
    # 2156 "libcomelang2.c"
    buf_151=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2156))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value235;
    __freed_obj__ = 0;
    # 2170 "libcomelang2.c"
    while(_while_condtional10=1,    _while_condtional10) {
        # 2159 "libcomelang2.c"
        char buf2_152[8192];
        memset(&buf2_152, 0, sizeof(char)        *(8192)        );
        # 2161 "libcomelang2.c"
        size_153=fread(buf2_152,1,8192,f_150);
        # 2163 "libcomelang2.c"
        buffer_append(buf_151,buf2_152,size_153);
        # 2168 "libcomelang2.c"
        # 2165 "libcomelang2.c"
        if(_if_conditional232=size_153<8192,        _if_conditional232) {
            # 2166 "libcomelang2.c"
            break;
        }
    }
    # 2170 "libcomelang2.c"
    result_154=(char*)come_increment_ref_count(((char*)(right_value236=buffer_to_string(buf_151))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value236;
    __freed_obj__ = 0;
    # 2174 "libcomelang2.c"
    result2_155=fclose(f_150);
    # 2178 "libcomelang2.c"
    # 2174 "libcomelang2.c"
    if(_if_conditional233=result2_155<0,    _if_conditional233) {
        # 2175 "libcomelang2.c"
        __result294__ = __result_obj__ = ((struct optional$2charphbool*)(right_value239=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value238=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2175))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("")))),(_Bool)0)));
        if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value238;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value239;
        __freed_obj__ = 0;
        return __result294__;
    }
    # 2178 "libcomelang2.c"
    __result295__ = __result_obj__ = ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2178)))),(char*)come_increment_ref_count(result_154),(_Bool)1)));
    if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value240;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value241;
    __freed_obj__ = 0;
    return __result295__;
    if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
void* right_value243;
struct list$1charph* result_156;
_Bool _if_conditional234;
void* right_value244;
void* right_value245;
struct optional$2list$1charphphbool* __result297__;
_Bool _while_condtional11;
_Bool _if_conditional236;
void* right_value246;
void* right_value247;
void* right_value248;
struct optional$2list$1charphphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct list$1charph*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    # 2183 "libcomelang2.c"
    result_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2183))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value243;
    __freed_obj__ = 0;
    # 2189 "libcomelang2.c"
    # 2185 "libcomelang2.c"
    if(_if_conditional234=f==((void*)0),    _if_conditional234) {
        # 2186 "libcomelang2.c"
        __result297__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value245=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value244=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2186))),(struct list$1charph*)come_increment_ref_count(result_156),(_Bool)0)));
        if(result_156 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = 0;
        return __result297__;
    }
    # 2199 "libcomelang2.c"
    while(_while_condtional11=1,    _while_condtional11) {
        # 2190 "libcomelang2.c"
        char buf_157[8192];
        memset(&buf_157, 0, sizeof(char)        *(8192)        );
        # 2196 "libcomelang2.c"
        # 2192 "libcomelang2.c"
        if(_if_conditional236=fgets(buf_157,8192,f)==((void*)0),        _if_conditional236) {
            # 2193 "libcomelang2.c"
            break;
        }
        # 2196 "libcomelang2.c"
        list$1charph_push_back(result_156,(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(buf_157)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = 0;
    }
    # 2199 "libcomelang2.c"
    __result298__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value248=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value247=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2199)))),(struct list$1charph*)come_increment_ref_count(result_156),(_Bool)1)));
    if(result_156 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value247;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value248;
    __freed_obj__ = 0;
    return __result298__;
    if(result_156 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            __dec_obj20=self->v1;
            self->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result296__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result296__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "optional$2list$1charphphboolp_finalize"
                # 0 "optional$2list$1charphphboolp_finalize"
                if(_if_conditional235=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional235) {
                    # 0 "optional$2list$1charphphboolp_finalize"
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
void* right_value249;
void* right_value250;
struct optional$2intbool* __result299__;
struct _IO_FILE* f_158;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value251;
void* right_value252;
struct optional$2intbool* __result300__;
void* right_value253;
void* right_value254;
struct optional$2intbool* __result301__;
void* right_value255;
void* right_value256;
struct optional$2intbool* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&f_158, 0, sizeof(struct _IO_FILE*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
    # 2207 "libcomelang2.c"
    # 2204 "libcomelang2.c"
    if(_if_conditional237=path==((void*)0)||mode==((void*)0),    _if_conditional237) {
        # 2205 "libcomelang2.c"
        __result299__ = __result_obj__ = ((struct optional$2intbool*)(right_value250=optional$2intbool_initialize(((struct optional$2intbool*)(right_value249=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2205))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value250;
        __freed_obj__ = 0;
        return __result299__;
    }
    # 2207 "libcomelang2.c"
    f_158=fopen(path,mode);
    # 2221 "libcomelang2.c"
    # 2209 "libcomelang2.c"
    if(_if_conditional238=f_158,    _if_conditional238) {
        # 2210 "libcomelang2.c"
        block(parent,f_158);
        # 2216 "libcomelang2.c"
        # 2211 "libcomelang2.c"
        if(_if_conditional239=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional239) {
            # 2212 "libcomelang2.c"
            fclose(f_158);
            # 2213 "libcomelang2.c"
            __result300__ = __result_obj__ = ((struct optional$2intbool*)(right_value252=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value251=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2213)))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value251;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value252;
            __freed_obj__ = 0;
            return __result300__;
        }
        # 2216 "libcomelang2.c"
        fclose(f_158);
        # 2218 "libcomelang2.c"
        __result301__ = __result_obj__ = ((struct optional$2intbool*)(right_value254=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value253=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2218)))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value254;
        __freed_obj__ = 0;
        return __result301__;
    }
    # 2221 "libcomelang2.c"
    __result302__ = __result_obj__ = ((struct optional$2intbool*)(right_value256=optional$2intbool_initialize(((struct optional$2intbool*)(right_value255=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2221))),-1,(_Bool)0)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value256;
    __freed_obj__ = 0;
    return __result302__;
}

struct optional$2charphbool* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
void* right_value257;
void* right_value258;
struct optional$2charphbool* __result303__;
void* right_value259;
void* right_value260;
void* right_value261;
struct optional$2charphbool* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
    # 2232 "libcomelang2.c"
    # 2229 "libcomelang2.c"
    if(_if_conditional240=self==((void*)0),    _if_conditional240) {
        # 2230 "libcomelang2.c"
        __result303__ = __result_obj__ = ((struct optional$2intbool*)(right_value258=optional$2intbool_initialize(((struct optional$2intbool*)(right_value257=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2230))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value258;
        __freed_obj__ = 0;
        return __result303__;
    }
    # 2232 "libcomelang2.c"
    puts(self);
    # 2234 "libcomelang2.c"
    __result304__ = __result_obj__ = ((struct optional$2charphbool*)(right_value261=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value260=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2234)))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value259;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value260;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value261;
    __freed_obj__ = 0;
    return __result304__;
}

struct optional$2charphbool* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional241;
void* right_value262;
void* right_value263;
struct optional$2charphbool* __result305__;
void* right_value264;
void* right_value265;
void* right_value266;
struct optional$2charphbool* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
    # 2242 "libcomelang2.c"
    # 2239 "libcomelang2.c"
    if(_if_conditional241=self==((void*)0),    _if_conditional241) {
        # 2240 "libcomelang2.c"
        __result305__ = __result_obj__ = ((struct optional$2intbool*)(right_value263=optional$2intbool_initialize(((struct optional$2intbool*)(right_value262=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2240))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value263;
        __freed_obj__ = 0;
        return __result305__;
    }
    # 2242 "libcomelang2.c"
    printf("%s",self);
    # 2244 "libcomelang2.c"
    __result306__ = __result_obj__ = ((struct optional$2charphbool*)(right_value266=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value265=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2244)))),(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value264;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value265;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value266;
    __freed_obj__ = 0;
    return __result306__;
}

struct optional$2charphbool* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional242;
void* right_value267;
void* right_value268;
void* right_value269;
struct optional$2charphbool* __result307__;
char* msg2_159;
va_list args_160;
void* right_value270;
void* right_value271;
void* right_value272;
struct optional$2charphbool* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&msg2_159, 0, sizeof(char*));
memset(&args_160, 0, sizeof(va_list));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    # 2253 "libcomelang2.c"
    # 2250 "libcomelang2.c"
    if(_if_conditional242=self==((void*)0),    _if_conditional242) {
        # 2251 "libcomelang2.c"
        __result307__ = __result_obj__ = ((struct optional$2charphbool*)(right_value269=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value268=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2251))),(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value268;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value269;
        __freed_obj__ = 0;
        return __result307__;
    }
    # 2253 "libcomelang2.c"
    # 2255 "libcomelang2.c"
    # 2256 "libcomelang2.c"
    __builtin_va_start(args_160,self);
    # 2257 "libcomelang2.c"
    vasprintf(&msg2_159,self,args_160);
    # 2258 "libcomelang2.c"
    __builtin_va_end(args_160);
    # 2260 "libcomelang2.c"
    printf("%s",msg2_159);
    # 2262 "libcomelang2.c"
    free(msg2_159);
    # 2264 "libcomelang2.c"
    __result308__ = __result_obj__ = ((struct optional$2charphbool*)(right_value272=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value271=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2264)))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(self)))),(_Bool)1)));
    if((&args_160) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_160), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value270;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value272;
    __freed_obj__ = 0;
    return __result308__;
    if((&args_160) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_160), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
void* right_value273;
void* right_value274;
void* right_value275;
struct optional$2charphbool* __result309__;
char* msg2_161;
va_list args_162;
void* right_value276;
void* right_value277;
void* right_value278;
struct optional$2charphbool* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&msg2_161, 0, sizeof(char*));
memset(&args_162, 0, sizeof(va_list));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    # 2272 "libcomelang2.c"
    # 2269 "libcomelang2.c"
    if(_if_conditional243=self==((void*)0),    _if_conditional243) {
        # 2270 "libcomelang2.c"
        __result309__ = __result_obj__ = ((struct optional$2charphbool*)(right_value275=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value274=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2270))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value275;
        __freed_obj__ = 0;
        return __result309__;
    }
    # 2272 "libcomelang2.c"
    # 2274 "libcomelang2.c"
    # 2275 "libcomelang2.c"
    __builtin_va_start(args_162,self);
    # 2276 "libcomelang2.c"
    vasprintf(&msg2_161,self,args_162);
    # 2277 "libcomelang2.c"
    __builtin_va_end(args_162);
    # 2279 "libcomelang2.c"
    printf("%s",msg2_161);
    # 2281 "libcomelang2.c"
    free(msg2_161);
    # 2283 "libcomelang2.c"
    __result310__ = __result_obj__ = ((struct optional$2charphbool*)(right_value278=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value277=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2283)))),(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(self)))),(_Bool)1)));
    if((&args_162) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_162), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value277;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value278;
    __freed_obj__ = 0;
    return __result310__;
    if((&args_162) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_162), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 2288 "libcomelang2.c"
    printf(msg,self);
    # 2290 "libcomelang2.c"
    __result311__ = self;
    return __result311__;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
void* right_value279;
void* right_value280;
void* right_value281;
struct optional$2charphbool* __result312__;
void* right_value282;
void* right_value283;
void* right_value284;
struct optional$2charphbool* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
    # 2298 "libcomelang2.c"
    # 2295 "libcomelang2.c"
    if(_if_conditional244=self==((void*)0),    _if_conditional244) {
        # 2296 "libcomelang2.c"
        __result312__ = __result_obj__ = ((struct optional$2charphbool*)(right_value281=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value280=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2296))),(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value279;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value280;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value281;
        __freed_obj__ = 0;
        return __result312__;
    }
    # 2298 "libcomelang2.c"
    puts(self);
    # 2300 "libcomelang2.c"
    __result313__ = __result_obj__ = ((struct optional$2charphbool*)(right_value284=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value283=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2300)))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value282;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value283;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value284;
    __freed_obj__ = 0;
    return __result313__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_163;
_Bool _for_condtionalA13;
_Bool _if_conditional245;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_163, 0, sizeof(int));
    # 2315 "libcomelang2.c"
    for(
    i_163=0 ,    0;    _for_condtionalA13=    i_163<self ,    _for_condtionalA13;    i_163++ ,    0    ){
        # 2309 "libcomelang2.c"
        block(parent,i_163);
        # 2314 "libcomelang2.c"
        # 2311 "libcomelang2.c"
        if(_if_conditional245=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional245) {
            # 2312 "libcomelang2.c"
            return;
        }
    }
}

