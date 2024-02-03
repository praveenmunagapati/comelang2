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
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeaderTiny
{
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
};
struct sMemHeader
{
    struct sMemHeader* next;
    struct sMemHeader* prev;
    char* class_name;
    char* sname[16];
    int sline[16];
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

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

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
    (come_push_stackframe("./comelang2.h", 108),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./comelang2.h", 109),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./comelang2.h", 110),exit(4),come_pop_stackframe());
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1999, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2001))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2001))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2002))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2002))->memory, "./comelang2.h", 2002))->buf;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2009, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2011))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2011))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2012))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2012))->memory, "./comelang2.h", 2012))->buf;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2019, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2021))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2021))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2022))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2022))->memory, "./comelang2.h", 2022))->buf;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2029, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2031))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2031))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2032))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2032))->memory, "./comelang2.h", 2032))->buf;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2039, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2041))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2041))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2042))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2042))->memory, "./comelang2.h", 2042))->buf;
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
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory!=((void*)0),        _if_conditional1) {
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
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory!=((void*)0),        _if_conditional2) {
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
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory!=((void*)0),        _if_conditional3) {
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
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory!=((void*)0),        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional5=gNumComeStackFrame<1024,    _if_conditional5) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
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
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* __exception_result_var_b1;
struct buffer* buf_5;
void* right_value12;
char* __exception_result_var_b2;
struct buffer* __exception_result_var_b3;
int i_6;
_Bool _for_condtionalA1;
void* right_value13;
char* __exception_result_var_b4;
struct buffer* __exception_result_var_b5;
_Bool _if_conditional7;
void* right_value14;
char* __exception_result_var_b6;
char* __exception_result_var_b7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
memset(&i_6, 0, sizeof(int));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    buf_5=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 38),__exception_result_var_b1=((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 38, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b1));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 39),__exception_result_var_b3=buffer_append_str(((struct buffer*)come_null_check(buf_5, "libcomelang2.c", 39)),(come_push_stackframe("libcomelang2.c", 39),__exception_result_var_b2=((char*)(right_value12=xsprintf("%s %d\n",sname,sline))), come_pop_stackframe(), __exception_result_var_b2)), come_pop_stackframe(), __exception_result_var_b3);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value12;
    __freed_obj__ = 0;
    for(
    i_6=gNumComeStackFrame-2 ,    0;    _for_condtionalA1=    i_6>=0 ,    _for_condtionalA1;    i_6-- ,    0    ){
        (come_push_stackframe("libcomelang2.c", 41),__exception_result_var_b5=buffer_append_str(((struct buffer*)come_null_check(buf_5, "libcomelang2.c", 41)),(come_push_stackframe("libcomelang2.c", 41),__exception_result_var_b4=((char*)(right_value13=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))), come_pop_stackframe(), __exception_result_var_b4)), come_pop_stackframe(), __exception_result_var_b5);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
    }
    if(_if_conditional7=gComeStackFrameBuffer,    _if_conditional7) {
        (come_push_stackframe("libcomelang2.c", 45),free(gComeStackFrameBuffer),come_pop_stackframe());
    }
    gComeStackFrameBuffer=(come_push_stackframe("libcomelang2.c", 47),__exception_result_var_b7=strdup((come_push_stackframe("libcomelang2.c", 47),__exception_result_var_b6=((char*)(right_value14=buffer_to_string(((struct buffer*)come_null_check(buf_5, "libcomelang2.c", 47))))), come_pop_stackframe(), __exception_result_var_b6)), come_pop_stackframe(), __exception_result_var_b7);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value14;
    __freed_obj__ = 0;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void exception_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("libcomelang2.c", 52),__exception_result_var_b8=printf("%s",gComeStackFrameBuffer), come_pop_stackframe(), __exception_result_var_b8);
}

void stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_7;
_Bool _for_condtionalA2;
int __exception_result_var_b9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_7, 0, sizeof(int));
    for(
    i_7=gNumComeStackFrame-1 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        (come_push_stackframe("libcomelang2.c", 58),__exception_result_var_b9=printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]), come_pop_stackframe(), __exception_result_var_b9);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __exception_result_var_b10;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result13__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 64),__exception_result_var_b10=((char*)(right_value15=__builtin_string(gComeStackFrameBuffer))), come_pop_stackframe(), __exception_result_var_b10);
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
int __exception_result_var_b11;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional8=mem==((void*)0),    _if_conditional8) {
        (come_push_stackframe("libcomelang2.c", 70),__exception_result_var_b11=printf("%s %d: null check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b11);
        (come_push_stackframe("libcomelang2.c", 71),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libcomelang2.c", 72),exit(2),come_pop_stackframe());
    }
    __result14__ = __result_obj__ = mem;
    return __result14__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
int __exception_result_var_b12;
_Bool _if_conditional10;
int __exception_result_var_b13;
_Bool _if_conditional11;
int __exception_result_var_b14;
void* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional9=mem==((void*)0),    _if_conditional9) {
        (come_push_stackframe("libcomelang2.c", 81),__exception_result_var_b12=printf("%s %d: null check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b12);
        (come_push_stackframe("libcomelang2.c", 82),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libcomelang2.c", 83),exit(2),come_pop_stackframe());
    }
    if(_if_conditional10=mem<begin,    _if_conditional10) {
        (come_push_stackframe("libcomelang2.c", 87),__exception_result_var_b13=printf("%s %d: range check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b13);
        (come_push_stackframe("libcomelang2.c", 88),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libcomelang2.c", 89),exit(2),come_pop_stackframe());
    }
    if(_if_conditional11=mem>=end,    _if_conditional11) {
        (come_push_stackframe("libcomelang2.c", 93),__exception_result_var_b14=printf("%s %d: range check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b14);
        (come_push_stackframe("libcomelang2.c", 94),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libcomelang2.c", 95),exit(2),come_pop_stackframe());
    }
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
    if(_if_conditional12=!self,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 105))->__method_block_result_kind__!=0,        _if_conditional13) {
            __result16__ = self;
            return __result16__;
        }
        (come_push_stackframe("libcomelang2.c", 108),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libcomelang2.c", 109),exit(1),come_pop_stackframe());
    }
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
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 125))->__method_block_result_kind__!=0,        _if_conditional15) {
            __result19__ = self;
            return __result19__;
        }
    }
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
    if(_if_conditional16=self<0,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 137))->__method_block_result_kind__!=0,        _if_conditional17) {
            __result21__ = self;
            return __result21__;
        }
        (come_push_stackframe("libcomelang2.c", 140),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libcomelang2.c", 141),exit(1),come_pop_stackframe());
    }
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
    if(_if_conditional18=self<0,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 156))->__method_block_result_kind__!=0,        _if_conditional19) {
            __result24__ = self;
            return __result24__;
        }
    }
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
    if(_if_conditional20=!self,    _if_conditional20) {
        block(parent);
        if(_if_conditional21=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 168))->__method_block_result_kind__!=0,        _if_conditional21) {
            __result26__ = self;
            return __result26__;
        }
    }
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
    if(_if_conditional22=!self,    _if_conditional22) {
        block(parent);
        if(_if_conditional23=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 181))->__method_block_result_kind__!=0,        _if_conditional23) {
            __result28__ = self;
            return __result28__;
        }
    }
    __result29__ = self;
    return __result29__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b15;
_Bool _if_conditional24;
int __exception_result_var_b16;
int __exception_result_var_b17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("libcomelang2.c", 191),__exception_result_var_b15=printf("%s...",msg), come_pop_stackframe(), __exception_result_var_b15);
    if(_if_conditional24=!test,    _if_conditional24) {
        (come_push_stackframe("libcomelang2.c", 193),__exception_result_var_b16=puts("false"), come_pop_stackframe(), __exception_result_var_b16);
        (come_push_stackframe("libcomelang2.c", 194),exit(2),come_pop_stackframe());
    }
    (come_push_stackframe("libcomelang2.c", 196),__exception_result_var_b17=puts("ok"), come_pop_stackframe(), __exception_result_var_b17);
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* __exception_result_var_b18;
void* __exception_result_var_b19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    (come_push_stackframe("libcomelang2.c", 236),__exception_result_var_b18=memset(gComeStackFrameSName,0,sizeof(char*)*1024), come_pop_stackframe(), __exception_result_var_b18);
    (come_push_stackframe("libcomelang2.c", 237),__exception_result_var_b19=memset(gComeStackFrameSLine,0,sizeof(int)*1024), come_pop_stackframe(), __exception_result_var_b19);
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
_Bool _if_conditional26;
struct sMemHeader* it_8;
int n_9;
_Bool _while_condtional1;
_Bool flag_10;
int __exception_result_var_b20;
_Bool _if_conditional27;
int __exception_result_var_b21;
int i_11;
_Bool _for_condtionalA3;
_Bool _if_conditional28;
int __exception_result_var_b22;
_Bool _if_conditional29;
int __exception_result_var_b23;
int __exception_result_var_b24;
struct sMemHeaderTiny* it_12;
int n_13;
_Bool _while_condtional2;
_Bool _if_conditional30;
int __exception_result_var_b25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct sMemHeader*));
memset(&n_9, 0, sizeof(int));
memset(&flag_10, 0, sizeof(_Bool));
memset(&i_11, 0, sizeof(int));
memset(&it_12, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_13, 0, sizeof(int));
    if(_if_conditional25=gComeStackFrameBuffer,    _if_conditional25) {
        (come_push_stackframe("libcomelang2.c", 245),free(gComeStackFrameBuffer),come_pop_stackframe());
    }
    if(_if_conditional26=gComeDebugLib,    _if_conditional26) {
        it_8=gAllocMem;
        n_9=0;
        while(_while_condtional1=it_8,        _while_condtional1) {
            n_9++;
            flag_10=(_Bool)0;
            (come_push_stackframe("libcomelang2.c", 255),__exception_result_var_b20=printf("#%d ",n_9), come_pop_stackframe(), __exception_result_var_b20);
            if(_if_conditional27=((struct sMemHeader*)come_null_check(it_8, "libcomelang2.c", 256))->class_name,            _if_conditional27) {
                (come_push_stackframe("libcomelang2.c", 257),__exception_result_var_b21=printf("(%s): ",((struct sMemHeader*)come_null_check(it_8, "libcomelang2.c", 257))->class_name), come_pop_stackframe(), __exception_result_var_b21);
            }
            for(
            i_11=0 ,            0;            _for_condtionalA3=            i_11<16 ,            _for_condtionalA3;            i_11++ ,            0            ){
                if(_if_conditional28=((struct sMemHeader*)come_null_check(it_8, "libcomelang2.c", 260))->sname[i_11],                _if_conditional28) {
                    (come_push_stackframe("libcomelang2.c", 261),__exception_result_var_b22=printf("%s %d, ",((struct sMemHeader*)come_null_check(it_8, "libcomelang2.c", 261))->sname[i_11],((struct sMemHeader*)come_null_check(it_8, "libcomelang2.c", 261))->sline[i_11]), come_pop_stackframe(), __exception_result_var_b22);
                    flag_10=(_Bool)1;
                }
            }
            if(_if_conditional29=flag_10,            _if_conditional29) {
                (come_push_stackframe("libcomelang2.c", 266),__exception_result_var_b23=puts(""), come_pop_stackframe(), __exception_result_var_b23);
            }
            it_8=((struct sMemHeader*)come_null_check(it_8, "libcomelang2.c", 268))->next;
        }
        (come_push_stackframe("libcomelang2.c", 270),__exception_result_var_b24=printf("%d memory leaks. %d alloc, %d free.\n",n_9,gNumAlloc,gNumFree), come_pop_stackframe(), __exception_result_var_b24);
    }
    else {
        it_12=(struct sMemHeaderTiny*)gAllocMem;
        n_13=0;
        while(_while_condtional2=it_12,        _while_condtional2) {
            n_13++;
            it_12=((struct sMemHeaderTiny*)come_null_check(it_12, "libcomelang2.c", 277))->next;
        }
        if(_if_conditional30=n_13>0,        _if_conditional30) {
            (come_push_stackframe("libcomelang2.c", 280),__exception_result_var_b25=printf("%d memory leaks. %d alloc, %d free.\n",n_13,gNumAlloc,gNumFree), come_pop_stackframe(), __exception_result_var_b25);
        }
    }
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
void* __exception_result_var_b26;
void* result_14;
struct sMemHeader* it_15;
_Bool _if_conditional32;
void* __exception_result_var_b27;
void* __exception_result_var_b28;
void* __exception_result_var_b29;
void* __exception_result_var_b30;
_Bool _if_conditional33;
char* __exception_result_var_b31;
_Bool _if_conditional34;
void* __result30__;
void* __exception_result_var_b32;
void* result_16;
struct sMemHeaderTiny* it_17;
_Bool _if_conditional35;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct sMemHeader*));
memset(&result_16, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct sMemHeaderTiny*));
    if(_if_conditional31=gComeDebugLib,    _if_conditional31) {
        result_14=(come_push_stackframe("libcomelang2.c", 288),__exception_result_var_b26=calloc(1,size+sizeof(struct sMemHeader)), come_pop_stackframe(), __exception_result_var_b26);
        it_15=result_14;
        if(_if_conditional32=gNumComeStackFrame<16,        _if_conditional32) {
            (come_push_stackframe("libcomelang2.c", 293),__exception_result_var_b27=memcpy(((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 293))->sname,gComeStackFrameSName,sizeof(char*)*16), come_pop_stackframe(), __exception_result_var_b27);
            (come_push_stackframe("libcomelang2.c", 294),__exception_result_var_b28=memcpy(((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 294))->sline,gComeStackFrameSLine,sizeof(int)*16), come_pop_stackframe(), __exception_result_var_b28);
        }
        else {
            (come_push_stackframe("libcomelang2.c", 297),__exception_result_var_b29=memcpy(((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 297))->sname,gComeStackFrameSName+gNumComeStackFrame-16,sizeof(char*)*16), come_pop_stackframe(), __exception_result_var_b29);
            (come_push_stackframe("libcomelang2.c", 298),__exception_result_var_b30=memcpy(((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 298))->sline,gComeStackFrameSLine+gNumComeStackFrame-16,sizeof(int)*16), come_pop_stackframe(), __exception_result_var_b30);
        }
        ((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 301))->next=gAllocMem;
        ((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 302))->prev=((void*)0);
        if(_if_conditional33=class_name,        _if_conditional33) {
            ((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 305))->class_name=(come_push_stackframe("libcomelang2.c", 305),__exception_result_var_b31=strdup(class_name), come_pop_stackframe(), __exception_result_var_b31);
        }
        else {
            ((struct sMemHeader*)come_null_check(it_15, "libcomelang2.c", 308))->class_name=((void*)0);
        }
        if(_if_conditional34=gAllocMem,        _if_conditional34) {
            ((struct sMemHeader*)come_null_check(gAllocMem, "libcomelang2.c", 312))->prev=it_15;
        }
        gAllocMem=it_15;
        gNumAlloc++;
        __result30__ = __result_obj__ = (char*)result_14+sizeof(struct sMemHeader);
        return __result30__;
    }
    else {
        result_16=(come_push_stackframe("libcomelang2.c", 322),__exception_result_var_b32=calloc(1,size+sizeof(struct sMemHeaderTiny)), come_pop_stackframe(), __exception_result_var_b32);
        it_17=result_16;
        ((struct sMemHeaderTiny*)come_null_check(it_17, "libcomelang2.c", 326))->next=(struct sMemHeaderTiny*)gAllocMem;
        ((struct sMemHeaderTiny*)come_null_check(it_17, "libcomelang2.c", 327))->prev=((void*)0);
        if(_if_conditional35=gAllocMem,        _if_conditional35) {
            ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)gAllocMem), "libcomelang2.c", 330))->prev=it_17;
        }
        gAllocMem=(struct sMemHeader*)it_17;
        gNumAlloc++;
        __result31__ = __result_obj__ = (char*)result_16+sizeof(struct sMemHeaderTiny);
        return __result31__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
struct sMemHeader* it_18;
struct sMemHeader* prev_it_19;
struct sMemHeader* next_it_20;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
struct sMemHeaderTiny* it_21;
struct sMemHeaderTiny* prev_it_22;
struct sMemHeaderTiny* next_it_23;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_18, 0, sizeof(struct sMemHeader*));
memset(&prev_it_19, 0, sizeof(struct sMemHeader*));
memset(&next_it_20, 0, sizeof(struct sMemHeader*));
memset(&it_21, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_22, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_23, 0, sizeof(struct sMemHeaderTiny*));
    if(_if_conditional36=mem,    _if_conditional36) {
        if(_if_conditional37=gComeGCLib,        _if_conditional37) {
        }
        else {
            if(_if_conditional38=gComeDebugLib,            _if_conditional38) {
                it_18=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                prev_it_19=((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 349))->prev;
                next_it_20=((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 350))->next;
                if(_if_conditional39=((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 352))->class_name,                _if_conditional39) {
                    (come_push_stackframe("libcomelang2.c", 353),free(((struct sMemHeader*)come_null_check(it_18, "libcomelang2.c", 353))->class_name),come_pop_stackframe());
                }
                if(_if_conditional40=gAllocMem==it_18,                _if_conditional40) {
                    gAllocMem=next_it_20;
                    if(_if_conditional41=gAllocMem,                    _if_conditional41) {
                        ((struct sMemHeader*)come_null_check(gAllocMem, "libcomelang2.c", 360))->prev=((void*)0);
                    }
                }
                else {
                    if(_if_conditional42=prev_it_19,                    _if_conditional42) {
                        ((struct sMemHeader*)come_null_check(prev_it_19, "libcomelang2.c", 365))->next=next_it_20;
                    }
                    if(_if_conditional43=next_it_20,                    _if_conditional43) {
                        ((struct sMemHeader*)come_null_check(next_it_20, "libcomelang2.c", 368))->prev=prev_it_19;
                    }
                }
                (come_push_stackframe("libcomelang2.c", 372),free((char*)mem-sizeof(struct sMemHeader)),come_pop_stackframe());
                gNumFree++;
            }
            else {
                it_21=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                prev_it_22=((struct sMemHeaderTiny*)come_null_check(it_21, "libcomelang2.c", 379))->prev;
                next_it_23=((struct sMemHeaderTiny*)come_null_check(it_21, "libcomelang2.c", 380))->next;
                if(_if_conditional44=gAllocMem==it_21,                _if_conditional44) {
                    gAllocMem=(struct sMemHeader*)next_it_23;
                    if(_if_conditional45=gAllocMem,                    _if_conditional45) {
                        ((struct sMemHeader*)come_null_check(gAllocMem, "libcomelang2.c", 386))->prev=((void*)0);
                    }
                }
                else {
                    if(_if_conditional46=prev_it_22,                    _if_conditional46) {
                        ((struct sMemHeaderTiny*)come_null_check(prev_it_22, "libcomelang2.c", 391))->next=next_it_23;
                    }
                    if(_if_conditional47=next_it_23,                    _if_conditional47) {
                        ((struct sMemHeaderTiny*)come_null_check(next_it_23, "libcomelang2.c", 394))->prev=prev_it_22;
                    }
                }
                (come_push_stackframe("libcomelang2.c", 398),free((char*)mem-sizeof(struct sMemHeaderTiny)),come_pop_stackframe());
                gNumFree++;
            }
        }
    }
}

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_24;
long int* ref_count_25;
long int* size2_26;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_24, 0, sizeof(char*));
memset(&ref_count_25, 0, sizeof(long int*));
memset(&size2_26, 0, sizeof(long int*));
    mem_24=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline,class_name);
    ref_count_25=(long int*)mem_24;
    *ref_count_25=0;
    size2_26=(long int*)(mem_24+sizeof(long int));
    *size2_26=size*count+sizeof(long int)+sizeof(long int);
    __result32__ = __result_obj__ = mem_24+sizeof(long int)+sizeof(long int);
    return __result32__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
long int* ref_count_27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_27, 0, sizeof(long int*));
    if(_if_conditional48=mem==((void*)0),    _if_conditional48) {
        return;
    }
    ref_count_27=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (come_push_stackframe("libcomelang2.c", 477),come_free_mem_of_heap_pool((char*)ref_count_27),come_pop_stackframe());
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
void* __result33__;
char* mem_28;
long int* size_p_29;
long int size_30;
void* __exception_result_var_b33;
void* result_31;
void* __exception_result_var_b34;
void* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_28, 0, sizeof(char*));
memset(&size_p_29, 0, sizeof(long int*));
memset(&size_30, 0, sizeof(long int));
memset(&result_31, 0, sizeof(void*));
    if(_if_conditional49=!block,    _if_conditional49) {
        __result33__ = __result_obj__ = ((void*)0);
        return __result33__;
    }
    mem_28=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_29=(long int*)(mem_28+sizeof(long int));
    size_30=*size_p_29-sizeof(long int)-sizeof(long int);
    result_31=(come_push_stackframe("libcomelang2.c", 501),__exception_result_var_b33=come_calloc(1,size_30,sname,sline,class_name), come_pop_stackframe(), __exception_result_var_b33);
    (come_push_stackframe("libcomelang2.c", 503),__exception_result_var_b34=memcpy(result_31,block,size_30), come_pop_stackframe(), __exception_result_var_b34);
    __result34__ = __result_obj__ = result_31;
    return __result34__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
void* __result35__;
long int* ref_count_32;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_32, 0, sizeof(long int*));
    if(_if_conditional50=mem==((void*)0),    _if_conditional50) {
        __result35__ = __result_obj__ = mem;
        return __result35__;
    }
    ref_count_32=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_32)++;
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
void* __result37__;
long int* ref_count_33;
int __exception_result_var_b35;
void* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_33, 0, sizeof(long int*));
    if(_if_conditional51=mem==((void*)0),    _if_conditional51) {
        __result37__ = __result_obj__ = mem;
        return __result37__;
    }
    ref_count_33=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (come_push_stackframe("libcomelang2.c", 543),__exception_result_var_b35=printf("ref_count %ld\n",*ref_count_33), come_pop_stackframe(), __exception_result_var_b35);
    __result38__ = __result_obj__ = mem;
    return __result38__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
void* __result39__;
long int* ref_count_34;
_Bool _if_conditional53;
long int count_35;
_Bool _if_conditional54;
_Bool _if_conditional55;
void (*finalizer_36)(void*);
void* __result40__;
void* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_34, 0, sizeof(long int*));
memset(&count_35, 0, sizeof(long int));
memset(&finalizer_36, 0, sizeof(void (*)(void*)));
    if(_if_conditional52=mem==((void*)0),    _if_conditional52) {
        __result39__ = __result_obj__ = ((void*)0);
        return __result39__;
    }
    ref_count_34=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional53=!no_decrement,    _if_conditional53) {
        (*ref_count_34)--;
    }
    count_35=*ref_count_34;
    if(_if_conditional54=!no_free&&(count_35<=0||force_delete_),    _if_conditional54) {
        if(_if_conditional55=protocol_obj&&protocol_fun,        _if_conditional55) {
            finalizer_36=protocol_fun;
            finalizer_36(protocol_obj);
            (come_push_stackframe("libcomelang2.c", 573),come_free_object(protocol_obj),come_pop_stackframe());
        }
        (come_push_stackframe("libcomelang2.c", 575),come_free_object(mem),come_pop_stackframe());
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    __result41__ = __result_obj__ = mem;
    return __result41__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
void (*finalizer_37)(void*);
void (*finalizer_38)(void*);
long int* ref_count_39;
_Bool _if_conditional60;
long int count_40;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
void (*finalizer_41)(void*);
_Bool _if_conditional64;
void (*finalizer_42)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_37, 0, sizeof(void (*)(void*)));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
memset(&ref_count_39, 0, sizeof(long int*));
memset(&count_40, 0, sizeof(long int));
memset(&finalizer_41, 0, sizeof(void (*)(void*)));
memset(&finalizer_42, 0, sizeof(void (*)(void*)));
    if(_if_conditional56=mem==((void*)0),    _if_conditional56) {
        return;
    }
    if(_if_conditional57=call_finalizer_only,    _if_conditional57) {
        if(_if_conditional58=fun,        _if_conditional58) {
            if(_if_conditional59=protocol_obj&&protocol_fun,            _if_conditional59) {
                finalizer_37=protocol_fun;
                finalizer_37(protocol_obj);
            }
            finalizer_38=fun;
            finalizer_38(mem);
        }
    }
    else {
        ref_count_39=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional60=!no_decrement,        _if_conditional60) {
            (*ref_count_39)--;
        }
        count_40=*ref_count_39;
        if(_if_conditional61=!no_free&&(count_40<=0||force_delete_),        _if_conditional61) {
            if(_if_conditional62=mem,            _if_conditional62) {
                if(_if_conditional63=protocol_obj&&protocol_fun,                _if_conditional63) {
                    finalizer_41=protocol_fun;
                    finalizer_41(protocol_obj);
                    (come_push_stackframe("libcomelang2.c", 618),come_free_object(protocol_obj),come_pop_stackframe());
                }
                if(_if_conditional64=fun,                _if_conditional64) {
                    finalizer_42=fun;
                    finalizer_42(mem);
                }
                (come_push_stackframe("libcomelang2.c", 624),come_free_object(mem),come_pop_stackframe());
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
char* __result42__;
long int __exception_result_var_b36;
int len_43;
void* right_value16;
char* result_44;
char* __exception_result_var_b37;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_43, 0, sizeof(int));
memset(&right_value16, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
    if(_if_conditional65=str==((void*)0),    _if_conditional65) {
        __result42__ = __result_obj__ = ((void*)0);
        return __result42__;
    }
    len_43=(come_push_stackframe("libcomelang2.c", 635),__exception_result_var_b36=strlen(str), come_pop_stackframe(), __exception_result_var_b36)+1;
    result_44=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_43)), "libcomelang2.c", 637, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 639),__exception_result_var_b37=strncpy(result_44,str,len_43), come_pop_stackframe(), __exception_result_var_b37);
    __result43__ = __result_obj__ = result_44;
    if(result_44 && !__freed_obj__) { result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 1, 0); }
    return __result43__;
    if(result_44 && !__freed_obj__) { result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_45;
int i_46;
_Bool _for_condtionalA4;
_Bool _if_conditional66;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_45, 0, sizeof(_Bool));
memset(&i_46, 0, sizeof(int));
    found_45=(_Bool)0;
    for(
    i_46=0 ,    0;    _for_condtionalA4=    i_46<len ,    _for_condtionalA4;    i_46++ ,    0    ){
        if(_if_conditional66=array[i_46]==element,        _if_conditional66) {
            found_45=(_Bool)1;
            break;
        }
    }
    __result44__ = found_45;
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
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 661))->size=128;
    __dec_obj6=((struct buffer*)come_null_check(self, "libcomelang2.c", 662))->buf;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 662))->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 662))->size)), "libcomelang2.c", 662, "char"))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 663))->buf[0]=0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 664))->len=0;
    __result45__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result45__;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional67=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 671))->buf,    _if_conditional67) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 671))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 671))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 671))->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional68=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 675))->buf,    _if_conditional68) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 675))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 675))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 675))->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
struct buffer* __result46__;
void* right_value18;
struct buffer* result_47;
void* right_value19;
char* __dec_obj7;
void* __exception_result_var_b38;
struct buffer* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct buffer*));
memset(&right_value19, 0, sizeof(void*));
    if(_if_conditional69=self==((void*)0),    _if_conditional69) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    result_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 684, "struct buffer"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_47, "libcomelang2.c", 686))->size=((struct buffer*)come_null_check(self, "libcomelang2.c", 686))->size;
    __dec_obj7=((struct buffer*)come_null_check(result_47, "libcomelang2.c", 687))->buf;
    ((struct buffer*)come_null_check(result_47, "libcomelang2.c", 687))->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 687))->size)), "libcomelang2.c", 687, "char"))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_47, "libcomelang2.c", 688))->len=((struct buffer*)come_null_check(self, "libcomelang2.c", 688))->len;
    (come_push_stackframe("libcomelang2.c", 689),__exception_result_var_b38=memcpy(((struct buffer*)come_null_check(result_47, "libcomelang2.c", 689))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 689))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 689))->len), come_pop_stackframe(), __exception_result_var_b38);
    __result47__ = __result_obj__ = result_47;
    if(result_47 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result47__;
    if(result_47 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
int __result48__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional70=self==((void*)0),    _if_conditional70) {
        __result48__ = 0;
        return __result48__;
    }
    __result49__ = ((struct buffer*)come_null_check(self, "libcomelang2.c", 699))->len;
    return __result49__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        return;
    }
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 707))->buf[0]=0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 708))->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        return;
    }
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 716))->len-=len;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 717))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 717))->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
struct buffer* __result50__;
_Bool _if_conditional74;
void* right_value20;
char* old_buf_48;
void* __exception_result_var_b39;
int old_len_49;
int new_size_50;
void* right_value21;
char* __dec_obj8;
void* __exception_result_var_b40;
void* __exception_result_var_b41;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&old_buf_48, 0, sizeof(char*));
memset(&old_len_49, 0, sizeof(int));
memset(&new_size_50, 0, sizeof(int));
memset(&right_value21, 0, sizeof(void*));
    if(_if_conditional73=self==((void*)0)||mem==((void*)0),    _if_conditional73) {
        __result50__ = __result_obj__ = self;
        return __result50__;
    }
    if(_if_conditional74=((struct buffer*)come_null_check(self, "libcomelang2.c", 725))->len+size+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 725))->size,    _if_conditional74) {
        old_buf_48=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 726))->size)), "libcomelang2.c", 726, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 727),__exception_result_var_b39=memcpy(old_buf_48,((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->size), come_pop_stackframe(), __exception_result_var_b39);
        old_len_49=((struct buffer*)come_null_check(self, "libcomelang2.c", 728))->len;
        new_size_50=(((struct buffer*)come_null_check(self, "libcomelang2.c", 729))->size+size+1)*2;
        __dec_obj8=((struct buffer*)come_null_check(self, "libcomelang2.c", 730))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 730))->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_50)), "libcomelang2.c", 730, "char"))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value21;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 731),__exception_result_var_b40=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 731))->buf,old_buf_48,old_len_49), come_pop_stackframe(), __exception_result_var_b40);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 732))->buf[old_len_49]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 733))->size=new_size_50;
        if(old_buf_48 && !__freed_obj__) { old_buf_48 = come_decrement_ref_count(old_buf_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("libcomelang2.c", 736),__exception_result_var_b41=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 736))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 736))->len,mem,size), come_pop_stackframe(), __exception_result_var_b41);
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 737))->len+=size;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 738))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 738))->len]=0;
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct buffer* __result52__;
_Bool _if_conditional76;
void* right_value22;
char* old_buf_51;
int old_len_52;
int new_size_53;
void* right_value23;
char* __dec_obj9;
void* __exception_result_var_b42;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&old_buf_51, 0, sizeof(char*));
memset(&old_len_52, 0, sizeof(int));
memset(&new_size_53, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
    if(_if_conditional75=self==((void*)0),    _if_conditional75) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    if(_if_conditional76=((struct buffer*)come_null_check(self, "libcomelang2.c", 748))->len+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 748))->size,    _if_conditional76) {
        old_buf_51=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(((struct buffer*)come_null_check(self, "libcomelang2.c", 749))->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value22;
        __freed_obj__ = 0;
        old_len_52=((struct buffer*)come_null_check(self, "libcomelang2.c", 750))->len;
        new_size_53=(((struct buffer*)come_null_check(self, "libcomelang2.c", 752))->size+10+1)*2;
        __dec_obj9=((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_53)), "libcomelang2.c", 753, "char"))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value23;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 754),__exception_result_var_b42=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 754))->buf,old_buf_51,old_len_52), come_pop_stackframe(), __exception_result_var_b42);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 755))->buf[old_len_52]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 756))->size=new_size_53;
        if(old_buf_51 && !__freed_obj__) { old_buf_51 = come_decrement_ref_count(old_buf_51, (void*)0, (void*)0, 0, 0, 0); }
    }
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 759))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 759))->len]=c;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 760))->len++;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 762))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 762))->len]=0;
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
struct buffer* __result54__;
long int __exception_result_var_b43;
int size_54;
_Bool _if_conditional78;
void* right_value24;
char* old_buf_55;
void* __exception_result_var_b44;
int old_len_56;
int new_size_57;
void* right_value25;
char* __dec_obj10;
void* __exception_result_var_b45;
void* __exception_result_var_b46;
struct buffer* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_54, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&old_buf_55, 0, sizeof(char*));
memset(&old_len_56, 0, sizeof(int));
memset(&new_size_57, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
    if(_if_conditional77=self==((void*)0)||mem==((void*)0),    _if_conditional77) {
        __result54__ = __result_obj__ = self;
        return __result54__;
    }
    size_54=(come_push_stackframe("libcomelang2.c", 773),__exception_result_var_b43=strlen(mem), come_pop_stackframe(), __exception_result_var_b43);
    if(_if_conditional78=((struct buffer*)come_null_check(self, "libcomelang2.c", 774))->len+size_54+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 774))->size,    _if_conditional78) {
        old_buf_55=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 775))->size)), "libcomelang2.c", 775, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value24;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 776),__exception_result_var_b44=memcpy(old_buf_55,((struct buffer*)come_null_check(self, "libcomelang2.c", 776))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 776))->size), come_pop_stackframe(), __exception_result_var_b44);
        old_len_56=((struct buffer*)come_null_check(self, "libcomelang2.c", 777))->len;
        new_size_57=(((struct buffer*)come_null_check(self, "libcomelang2.c", 778))->size+size_54+1)*2;
        __dec_obj10=((struct buffer*)come_null_check(self, "libcomelang2.c", 779))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 779))->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_57)), "libcomelang2.c", 779, "char"))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value25;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 780),__exception_result_var_b45=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 780))->buf,old_buf_55,old_len_56), come_pop_stackframe(), __exception_result_var_b45);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 781))->buf[old_len_56]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 782))->size=new_size_57;
        if(old_buf_55 && !__freed_obj__) { old_buf_55 = come_decrement_ref_count(old_buf_55, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("libcomelang2.c", 785),__exception_result_var_b46=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 785))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 785))->len,mem,size_54), come_pop_stackframe(), __exception_result_var_b46);
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 786))->len+=size_54;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 787))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 787))->len]=0;
    __result55__ = __result_obj__ = self;
    return __result55__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct buffer* __result56__;
long int __exception_result_var_b47;
int size_58;
_Bool _if_conditional80;
void* right_value26;
char* old_buf_59;
void* __exception_result_var_b48;
int old_len_60;
int new_size_61;
void* right_value27;
char* __dec_obj11;
void* __exception_result_var_b49;
void* __exception_result_var_b50;
struct buffer* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_58, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&old_buf_59, 0, sizeof(char*));
memset(&old_len_60, 0, sizeof(int));
memset(&new_size_61, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
    if(_if_conditional79=self==((void*)0)||mem==((void*)0),    _if_conditional79) {
        __result56__ = __result_obj__ = self;
        return __result56__;
    }
    size_58=(come_push_stackframe("libcomelang2.c", 797),__exception_result_var_b47=strlen(mem), come_pop_stackframe(), __exception_result_var_b47)+1;
    if(_if_conditional80=((struct buffer*)come_null_check(self, "libcomelang2.c", 798))->len+size_58+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 798))->size,    _if_conditional80) {
        old_buf_59=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 799))->size)), "libcomelang2.c", 799, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value26;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 800),__exception_result_var_b48=memcpy(old_buf_59,((struct buffer*)come_null_check(self, "libcomelang2.c", 800))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 800))->size), come_pop_stackframe(), __exception_result_var_b48);
        old_len_60=((struct buffer*)come_null_check(self, "libcomelang2.c", 801))->len;
        new_size_61=(((struct buffer*)come_null_check(self, "libcomelang2.c", 802))->size+size_58+1)*2;
        __dec_obj11=((struct buffer*)come_null_check(self, "libcomelang2.c", 803))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 803))->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_61)), "libcomelang2.c", 803, "char"))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value27;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 804),__exception_result_var_b49=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 804))->buf,old_buf_59,old_len_60), come_pop_stackframe(), __exception_result_var_b49);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 805))->buf[old_len_60]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 806))->size=new_size_61;
        if(old_buf_59 && !__freed_obj__) { old_buf_59 = come_decrement_ref_count(old_buf_59, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("libcomelang2.c", 809),__exception_result_var_b50=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 809))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 809))->len,mem,size_58), come_pop_stackframe(), __exception_result_var_b50);
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 810))->len+=size_58;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 811))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 811))->len]=0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 812))->len++;
    __result57__ = __result_obj__ = self;
    return __result57__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
struct buffer* __result58__;
int* mem_62;
int size_63;
_Bool _if_conditional82;
void* right_value28;
char* old_buf_64;
void* __exception_result_var_b51;
int old_len_65;
int new_size_66;
void* right_value29;
char* __dec_obj12;
void* __exception_result_var_b52;
void* __exception_result_var_b53;
struct buffer* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_62, 0, sizeof(int*));
memset(&size_63, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&old_buf_64, 0, sizeof(char*));
memset(&old_len_65, 0, sizeof(int));
memset(&new_size_66, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
    if(_if_conditional81=self==((void*)0),    _if_conditional81) {
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    mem_62=&value;
    size_63=sizeof(int);
    if(_if_conditional82=((struct buffer*)come_null_check(self, "libcomelang2.c", 825))->len+size_63+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 825))->size,    _if_conditional82) {
        old_buf_64=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 826))->size)), "libcomelang2.c", 826, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 827),__exception_result_var_b51=memcpy(old_buf_64,((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->size), come_pop_stackframe(), __exception_result_var_b51);
        old_len_65=((struct buffer*)come_null_check(self, "libcomelang2.c", 828))->len;
        new_size_66=(((struct buffer*)come_null_check(self, "libcomelang2.c", 829))->size+size_63+1)*2;
        __dec_obj12=((struct buffer*)come_null_check(self, "libcomelang2.c", 830))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 830))->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_66)), "libcomelang2.c", 830, "char"))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value29;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 831),__exception_result_var_b52=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 831))->buf,old_buf_64,old_len_65), come_pop_stackframe(), __exception_result_var_b52);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 832))->buf[old_len_65]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 833))->size=new_size_66;
        if(old_buf_64 && !__freed_obj__) { old_buf_64 = come_decrement_ref_count(old_buf_64, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("libcomelang2.c", 836),__exception_result_var_b53=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 836))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 836))->len,mem_62,size_63), come_pop_stackframe(), __exception_result_var_b53);
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 837))->len+=size_63;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 838))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 838))->len]=0;
    __result59__ = __result_obj__ = self;
    return __result59__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_67;
int size_68;
_Bool _if_conditional83;
void* right_value30;
char* old_buf_69;
void* __exception_result_var_b54;
int old_len_70;
int new_size_71;
void* right_value31;
char* __dec_obj13;
void* __exception_result_var_b55;
void* __exception_result_var_b56;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_67, 0, sizeof(long*));
memset(&size_68, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&old_buf_69, 0, sizeof(char*));
memset(&old_len_70, 0, sizeof(int));
memset(&new_size_71, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
    mem_67=&value;
    size_68=sizeof(long);
    if(_if_conditional83=((struct buffer*)come_null_check(self, "libcomelang2.c", 848))->len+size_68+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 848))->size,    _if_conditional83) {
        old_buf_69=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 849))->size)), "libcomelang2.c", 849, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value30;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 850),__exception_result_var_b54=memcpy(old_buf_69,((struct buffer*)come_null_check(self, "libcomelang2.c", 850))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 850))->size), come_pop_stackframe(), __exception_result_var_b54);
        old_len_70=((struct buffer*)come_null_check(self, "libcomelang2.c", 851))->len;
        new_size_71=(((struct buffer*)come_null_check(self, "libcomelang2.c", 852))->size+size_68+1)*2;
        __dec_obj13=((struct buffer*)come_null_check(self, "libcomelang2.c", 853))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 853))->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_71)), "libcomelang2.c", 853, "char"))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value31;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 854),__exception_result_var_b55=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 854))->buf,old_buf_69,old_len_70), come_pop_stackframe(), __exception_result_var_b55);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 855))->buf[old_len_70]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 856))->size=new_size_71;
        if(old_buf_69 && !__freed_obj__) { old_buf_69 = come_decrement_ref_count(old_buf_69, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("libcomelang2.c", 859),__exception_result_var_b56=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 859))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 859))->len,mem_67,size_68), come_pop_stackframe(), __exception_result_var_b56);
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 860))->len+=size_68;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 861))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 861))->len]=0;
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
struct buffer* __result61__;
short short* mem_72;
int size_73;
_Bool _if_conditional85;
void* right_value32;
char* old_buf_74;
void* __exception_result_var_b57;
int old_len_75;
int new_size_76;
void* right_value33;
char* __dec_obj14;
void* __exception_result_var_b58;
void* __exception_result_var_b59;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_72, 0, sizeof(short short*));
memset(&size_73, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
memset(&old_buf_74, 0, sizeof(char*));
memset(&old_len_75, 0, sizeof(int));
memset(&new_size_76, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
    if(_if_conditional84=self==((void*)0),    _if_conditional84) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    mem_72=&value;
    size_73=sizeof(short short);
    if(_if_conditional85=((struct buffer*)come_null_check(self, "libcomelang2.c", 875))->len+size_73+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 875))->size,    _if_conditional85) {
        old_buf_74=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 876))->size)), "libcomelang2.c", 876, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 877),__exception_result_var_b57=memcpy(old_buf_74,((struct buffer*)come_null_check(self, "libcomelang2.c", 877))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 877))->size), come_pop_stackframe(), __exception_result_var_b57);
        old_len_75=((struct buffer*)come_null_check(self, "libcomelang2.c", 878))->len;
        new_size_76=(((struct buffer*)come_null_check(self, "libcomelang2.c", 879))->size+size_73+1)*2;
        __dec_obj14=((struct buffer*)come_null_check(self, "libcomelang2.c", 880))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 880))->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_76)), "libcomelang2.c", 880, "char"))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value33;
        __freed_obj__ = 0;
        (come_push_stackframe("libcomelang2.c", 881),__exception_result_var_b58=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 881))->buf,old_buf_74,old_len_75), come_pop_stackframe(), __exception_result_var_b58);
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 882))->buf[old_len_75]=0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 883))->size=new_size_76;
        if(old_buf_74 && !__freed_obj__) { old_buf_74 = come_decrement_ref_count(old_buf_74, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("libcomelang2.c", 886),__exception_result_var_b59=memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 886))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 886))->len,mem_72,size_73), come_pop_stackframe(), __exception_result_var_b59);
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 887))->len+=size_73;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 888))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 888))->len]=0;
    __result62__ = __result_obj__ = self;
    return __result62__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
struct buffer* __result63__;
int len_77;
_Bool _if_conditional87;
int new_size_78;
void* right_value34;
char* __dec_obj15;
int i_79;
_Bool _for_condtionalA5;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_77, 0, sizeof(int));
memset(&new_size_78, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
memset(&i_79, 0, sizeof(int));
    if(_if_conditional86=self==((void*)0),    _if_conditional86) {
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    len_77=((struct buffer*)come_null_check(self, "libcomelang2.c", 899))->len;
    len_77=(len_77+3)&~3;
    if(_if_conditional87=len_77>=((struct buffer*)come_null_check(self, "libcomelang2.c", 902))->size,    _if_conditional87) {
        new_size_78=(((struct buffer*)come_null_check(self, "libcomelang2.c", 903))->size+1+1)*2;
        __dec_obj15=((struct buffer*)come_null_check(self, "libcomelang2.c", 904))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 904))->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_78)), "libcomelang2.c", 904, "char"))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value34;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 905))->size=new_size_78;
    }
    for(
    i_79=((struct buffer*)come_null_check(self, "libcomelang2.c", 908))->len ,    0;    _for_condtionalA5=    i_79<len_77 ,    _for_condtionalA5;    i_79++ ,    0    ){
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 909))->buf[i_79]=0;
    }
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 912))->len=len_77;
    __result64__ = __result_obj__ = self;
    return __result64__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
void* right_value35;
void* right_value36;
struct optional$2intbool* __result66__;
_Bool _if_conditional89;
void* right_value37;
void* right_value38;
struct optional$2intbool* __result67__;
_Bool _if_conditional90;
void* right_value39;
void* right_value40;
struct optional$2intbool* __result68__;
int __exception_result_var_b60;
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
    if(_if_conditional88=left==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result66__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 920), ((struct optional$2intbool*)(right_value36=optional$2intbool_initialize(((struct optional$2intbool*)(right_value35=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 920, "struct optional$2intbool"))),0,(_Bool)0))));
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
        if(_if_conditional89=left==((void*)0),        _if_conditional89) {
            __result67__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 923), ((struct optional$2intbool*)(right_value38=optional$2intbool_initialize(((struct optional$2intbool*)(right_value37=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 923, "struct optional$2intbool"))),-1,(_Bool)0))));
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
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result68__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 926), ((struct optional$2intbool*)(right_value40=optional$2intbool_initialize(((struct optional$2intbool*)(right_value39=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 926, "struct optional$2intbool"))),1,(_Bool)0))));
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
    __result69__ = __result_obj__ = ((struct optional$2intbool*)(right_value42=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value41=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 929, "struct optional$2intbool")))),(come_push_stackframe("libcomelang2.c", 929),__exception_result_var_b60=strcmp(((struct buffer*)come_null_check(left, "libcomelang2.c", 929))->buf,((struct buffer*)come_null_check(right, "libcomelang2.c", 929))->buf), come_pop_stackframe(), __exception_result_var_b60),(_Bool)1)));
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
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
struct buffer* __exception_result_var_b61;
struct buffer* result_80;
_Bool _if_conditional91;
struct buffer* __result70__;
struct buffer* __exception_result_var_b62;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct buffer*));
    result_80=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 934),__exception_result_var_b61=((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 934, "struct buffer"))), "libcomelang2.c", 934)))))), come_pop_stackframe(), __exception_result_var_b61));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=self==((void*)0),    _if_conditional91) {
        __result70__ = __result_obj__ = result_80;
        if(result_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result70__;
    }
    (come_push_stackframe("libcomelang2.c", 940),__exception_result_var_b62=buffer_append_str(((struct buffer*)come_null_check(result_80, "libcomelang2.c", 940)),self), come_pop_stackframe(), __exception_result_var_b62);
    __result71__ = __result_obj__ = result_80;
    if(result_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result71__;
    if(result_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value45;
void* right_value46;
struct buffer* __exception_result_var_b63;
struct buffer* result_81;
_Bool _if_conditional92;
struct buffer* __result72__;
struct buffer* __exception_result_var_b64;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct buffer*));
    result_81=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 947),__exception_result_var_b63=((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 947, "struct buffer"))), "libcomelang2.c", 947)))))), come_pop_stackframe(), __exception_result_var_b63));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value45;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value46;
    __freed_obj__ = 0;
    if(_if_conditional92=self==((void*)0),    _if_conditional92) {
        __result72__ = __result_obj__ = result_81;
        if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result72__;
    }
    (come_push_stackframe("libcomelang2.c", 953),__exception_result_var_b64=buffer_append_str(((struct buffer*)come_null_check(result_81, "libcomelang2.c", 953)),self), come_pop_stackframe(), __exception_result_var_b64);
    __result73__ = __result_obj__ = result_81;
    if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result73__;
    if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
void* right_value47;
char* __exception_result_var_b65;
char* __result74__;
void* right_value48;
char* __exception_result_var_b66;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    if(_if_conditional93=self==((void*)0),    _if_conditional93) {
        __result74__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 961),__exception_result_var_b65=((char*)(right_value47=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b65);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
        return __result74__;
    }
    __result75__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 964),__exception_result_var_b66=((char*)(right_value48=__builtin_string(((struct buffer*)come_null_check(self, "libcomelang2.c", 964))->buf))), come_pop_stackframe(), __exception_result_var_b66);
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
    __result83__ = self==right;
    return __result83__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
void* right_value49;
void* right_value50;
struct optional$2boolbool* __result85__;
_Bool _if_conditional95;
void* right_value51;
void* right_value52;
struct optional$2boolbool* __result86__;
_Bool _if_conditional96;
void* right_value53;
void* right_value54;
struct optional$2boolbool* __result87__;
int __exception_result_var_b67;
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
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        __result85__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1013), ((struct optional$2boolbool*)(right_value50=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value49=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1013, "struct optional$2boolbool"))),(_Bool)1,(_Bool)0))));
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
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            __result86__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1016), ((struct optional$2boolbool*)(right_value52=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value51=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1016, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0))));
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
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                __result87__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1019), ((struct optional$2boolbool*)(right_value54=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value53=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1019, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0))));
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
    __result88__ = __result_obj__ = ((struct optional$2intbool*)(right_value56=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value55=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1022, "struct optional$2intbool")))),(come_push_stackframe("libcomelang2.c", 1022),__exception_result_var_b67=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b67)==0,(_Bool)1)));
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
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
_Bool _if_conditional97;
void* right_value57;
void* right_value58;
struct optional$2boolbool* __result89__;
_Bool _if_conditional98;
void* right_value59;
void* right_value60;
struct optional$2boolbool* __result90__;
_Bool _if_conditional99;
void* right_value61;
void* right_value62;
struct optional$2boolbool* __result91__;
int __exception_result_var_b68;
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
    if(_if_conditional97=self==((void*)0)&&right==((void*)0),    _if_conditional97) {
        __result89__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1028), ((struct optional$2boolbool*)(right_value58=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value57=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1028, "struct optional$2boolbool"))),(_Bool)1,(_Bool)0))));
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
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            __result90__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1031), ((struct optional$2boolbool*)(right_value60=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value59=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1031, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0))));
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
            if(_if_conditional99=right==((void*)0),            _if_conditional99) {
                __result91__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1034), ((struct optional$2boolbool*)(right_value62=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value61=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1034, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0))));
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
    __result92__ = __result_obj__ = ((struct optional$2intbool*)(right_value64=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value63=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1037, "struct optional$2intbool")))),(come_push_stackframe("libcomelang2.c", 1037),__exception_result_var_b68=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b68)==0,(_Bool)1)));
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
_Bool _if_conditional100;
_Bool __result93__;
_Bool _if_conditional101;
_Bool __result94__;
_Bool _if_conditional102;
_Bool __result95__;
int __exception_result_var_b69;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional100=self==((void*)0)&&right==((void*)0),    _if_conditional100) {
        __result93__ = (_Bool)1;
        return __result93__;
    }
    else {
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            __result94__ = (_Bool)0;
            return __result94__;
        }
        else {
            if(_if_conditional102=right==((void*)0),            _if_conditional102) {
                __result95__ = (_Bool)0;
                return __result95__;
            }
        }
    }
    __result96__ = (come_push_stackframe("libcomelang2.c", 1052),__exception_result_var_b69=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b69)==0;
    return __result96__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
_Bool __result97__;
_Bool _if_conditional104;
_Bool __result98__;
_Bool _if_conditional105;
_Bool __result99__;
int __exception_result_var_b70;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional103=self==((void*)0)&&right==((void*)0),    _if_conditional103) {
        __result97__ = (_Bool)1;
        return __result97__;
    }
    else {
        if(_if_conditional104=self==((void*)0),        _if_conditional104) {
            __result98__ = (_Bool)0;
            return __result98__;
        }
        else {
            if(_if_conditional105=right==((void*)0),            _if_conditional105) {
                __result99__ = (_Bool)0;
                return __result99__;
            }
        }
    }
    __result100__ = (come_push_stackframe("libcomelang2.c", 1067),__exception_result_var_b70=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b70)==0;
    return __result100__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
_Bool __result101__;
_Bool _if_conditional107;
_Bool __result102__;
_Bool _if_conditional108;
_Bool __result103__;
int __exception_result_var_b71;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional106=self==((void*)0)&&right==((void*)0),    _if_conditional106) {
        __result101__ = (_Bool)0;
        return __result101__;
    }
    else {
        if(_if_conditional107=self==((void*)0),        _if_conditional107) {
            __result102__ = (_Bool)1;
            return __result102__;
        }
        else {
            if(_if_conditional108=right==((void*)0),            _if_conditional108) {
                __result103__ = (_Bool)1;
                return __result103__;
            }
        }
    }
    __result104__ = (come_push_stackframe("libcomelang2.c", 1082),__exception_result_var_b71=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b71)!=0;
    return __result104__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
_Bool __result105__;
_Bool _if_conditional110;
_Bool __result106__;
_Bool _if_conditional111;
_Bool __result107__;
int __exception_result_var_b72;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional109=self==((void*)0)&&right==((void*)0),    _if_conditional109) {
        __result105__ = (_Bool)0;
        return __result105__;
    }
    else {
        if(_if_conditional110=self==((void*)0),        _if_conditional110) {
            __result106__ = (_Bool)1;
            return __result106__;
        }
        else {
            if(_if_conditional111=right==((void*)0),            _if_conditional111) {
                __result107__ = (_Bool)1;
                return __result107__;
            }
        }
    }
    __result108__ = (come_push_stackframe("libcomelang2.c", 1097),__exception_result_var_b72=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b72)!=0;
    return __result108__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
void* right_value65;
char* __exception_result_var_b73;
char* __result109__;
long int __exception_result_var_b74;
long int __exception_result_var_b75;
int len_82;
void* right_value66;
char* result_83;
char* __exception_result_var_b76;
char* __exception_result_var_b77;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&len_82, 0, sizeof(int));
memset(&right_value66, 0, sizeof(void*));
memset(&result_83, 0, sizeof(char*));
    if(_if_conditional112=self==((void*)0)||right==((void*)0),    _if_conditional112) {
        __result109__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1104),__exception_result_var_b73=((char*)(right_value65=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b73);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = 0;
        return __result109__;
    }
    len_82=(come_push_stackframe("libcomelang2.c", 1106),__exception_result_var_b74=strlen(self), come_pop_stackframe(), __exception_result_var_b74)+(come_push_stackframe("libcomelang2.c", 1106),__exception_result_var_b75=strlen(right), come_pop_stackframe(), __exception_result_var_b75);
    result_83=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(len_82+1)), "libcomelang2.c", 1108, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1110),__exception_result_var_b76=strncpy(result_83,self,len_82+1), come_pop_stackframe(), __exception_result_var_b76);
    (come_push_stackframe("libcomelang2.c", 1111),__exception_result_var_b77=strncat(result_83,right,len_82+1), come_pop_stackframe(), __exception_result_var_b77);
    __result110__ = __result_obj__ = result_83;
    if(result_83 && !__freed_obj__) { result_83 = come_decrement_ref_count(result_83, (void*)0, (void*)0, 0, 1, 0); }
    return __result110__;
    if(result_83 && !__freed_obj__) { result_83 = come_decrement_ref_count(result_83, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
void* right_value67;
char* __exception_result_var_b78;
char* __result111__;
long int __exception_result_var_b79;
long int __exception_result_var_b80;
int len_84;
void* right_value68;
char* result_85;
char* __exception_result_var_b81;
char* __exception_result_var_b82;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&len_84, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
    if(_if_conditional113=self==((void*)0)||right==((void*)0),    _if_conditional113) {
        __result111__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1119),__exception_result_var_b78=((char*)(right_value67=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b78);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = 0;
        return __result111__;
    }
    len_84=(come_push_stackframe("libcomelang2.c", 1121),__exception_result_var_b79=strlen(self), come_pop_stackframe(), __exception_result_var_b79)+(come_push_stackframe("libcomelang2.c", 1121),__exception_result_var_b80=strlen(right), come_pop_stackframe(), __exception_result_var_b80);
    result_85=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(len_84+1)), "libcomelang2.c", 1123, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1125),__exception_result_var_b81=strncpy(result_85,self,len_84+1), come_pop_stackframe(), __exception_result_var_b81);
    (come_push_stackframe("libcomelang2.c", 1126),__exception_result_var_b82=strncat(result_85,right,len_84+1), come_pop_stackframe(), __exception_result_var_b82);
    __result112__ = __result_obj__ = result_85;
    if(result_85 && !__freed_obj__) { result_85 = come_decrement_ref_count(result_85, (void*)0, (void*)0, 0, 1, 0); }
    return __result112__;
    if(result_85 && !__freed_obj__) { result_85 = come_decrement_ref_count(result_85, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
void* right_value69;
char* __exception_result_var_b83;
char* __result113__;
void* right_value70;
void* right_value71;
struct buffer* __exception_result_var_b84;
struct buffer* buf_86;
int i_87;
_Bool _for_condtionalA6;
struct buffer* __exception_result_var_b85;
void* right_value72;
char* __exception_result_var_b86;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&buf_86, 0, sizeof(struct buffer*));
memset(&i_87, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
    if(_if_conditional114=self==((void*)0),    _if_conditional114) {
        __result113__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1134),__exception_result_var_b83=((char*)(right_value69=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b83);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69;
        __freed_obj__ = 0;
        return __result113__;
    }
    buf_86=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1136),__exception_result_var_b84=((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1136, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b84));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value71;
    __freed_obj__ = 0;
    for(
    i_87=0 ,    0;    _for_condtionalA6=    i_87<right ,    _for_condtionalA6;    i_87++ ,    0    ){
        (come_push_stackframe("libcomelang2.c", 1139),__exception_result_var_b85=buffer_append_str(((struct buffer*)come_null_check(buf_86, "libcomelang2.c", 1139)),self), come_pop_stackframe(), __exception_result_var_b85);
    }
    __result114__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1142),__exception_result_var_b86=((char*)(right_value72=buffer_to_string(((struct buffer*)come_null_check(buf_86, "libcomelang2.c", 1142))))), come_pop_stackframe(), __exception_result_var_b86);
    if(buf_86 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value72;
    __freed_obj__ = 0;
    return __result114__;
    if(buf_86 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
void* right_value73;
char* __exception_result_var_b87;
char* __result115__;
void* right_value74;
void* right_value75;
struct buffer* __exception_result_var_b88;
struct buffer* buf_88;
int i_89;
_Bool _for_condtionalA7;
struct buffer* __exception_result_var_b89;
void* right_value76;
char* __exception_result_var_b90;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&buf_88, 0, sizeof(struct buffer*));
memset(&i_89, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
    if(_if_conditional115=self==((void*)0),    _if_conditional115) {
        __result115__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1148),__exception_result_var_b87=((char*)(right_value73=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b87);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value73;
        __freed_obj__ = 0;
        return __result115__;
    }
    buf_88=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1150),__exception_result_var_b88=((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1150, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b88));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value75;
    __freed_obj__ = 0;
    for(
    i_89=0 ,    0;    _for_condtionalA7=    i_89<right ,    _for_condtionalA7;    i_89++ ,    0    ){
        (come_push_stackframe("libcomelang2.c", 1153),__exception_result_var_b89=buffer_append_str(((struct buffer*)come_null_check(buf_88, "libcomelang2.c", 1153)),self), come_pop_stackframe(), __exception_result_var_b89);
    }
    __result116__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1156),__exception_result_var_b90=((char*)(right_value76=buffer_to_string(((struct buffer*)come_null_check(buf_88, "libcomelang2.c", 1156))))), come_pop_stackframe(), __exception_result_var_b90);
    if(buf_88 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value76;
    __freed_obj__ = 0;
    return __result116__;
    if(buf_88 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b91;
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = ((come_push_stackframe("libcomelang2.c", 1164),__exception_result_var_b91=int_get_hash_key(((int)value)), come_pop_stackframe(), __exception_result_var_b91));
    return __result117__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    __result124__ = (unsigned int)value;
    return __result124__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
unsigned int __result125__;
int result_90;
char* p_91;
_Bool _while_condtional3;
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_90, 0, sizeof(int));
memset(&p_91, 0, sizeof(char*));
    if(_if_conditional116=value==((void*)0),    _if_conditional116) {
        __result125__ = 0;
        return __result125__;
    }
    result_90=0;
    p_91=value;
    while(_while_condtional3=*p_91,    _while_condtional3) {
        result_90+=(*p_91);
        p_91++;
    }
    __result126__ = result_90;
    return __result126__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
unsigned int __result127__;
int result_92;
char* p_93;
_Bool _while_condtional4;
unsigned int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(int));
memset(&p_93, 0, sizeof(char*));
    if(_if_conditional117=value==((void*)0),    _if_conditional117) {
        __result127__ = 0;
        return __result127__;
    }
    result_92=0;
    p_93=value;
    while(_while_condtional4=*p_93,    _while_condtional4) {
        result_92+=(*p_93);
        p_93++;
    }
    __result128__ = result_92;
    return __result128__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    __result136__ = self;
    return __result136__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
char* __result137__;
void* right_value77;
char* __exception_result_var_b92;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
    if(_if_conditional118=self==((void*)0),    _if_conditional118) {
        __result137__ = __result_obj__ = ((void*)0);
        return __result137__;
    }
    __result138__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1276),__exception_result_var_b92=((char*)(right_value77=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b92);
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
_Bool _if_conditional119;
char* __result139__;
void* right_value78;
char* __exception_result_var_b93;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional119=self==((void*)0),    _if_conditional119) {
        __result139__ = __result_obj__ = ((void*)0);
        return __result139__;
    }
    __result140__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1283),__exception_result_var_b93=((char*)(right_value78=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b93);
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
_Bool result_94;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_94, 0, sizeof(_Bool));
    result_94=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result141__ = result_94;
    return __result141__;
}

_Bool xiswblank(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    __result143__ = (c>=48&&c<=57);
    return __result143__;
}

_Bool xiswalnum(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b94;
_Bool __exception_result_var_b95;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = (come_push_stackframe("libcomelang2.c", 1307),__exception_result_var_b94=xiswalpha(c), come_pop_stackframe(), __exception_result_var_b94)||(come_push_stackframe("libcomelang2.c", 1307),__exception_result_var_b95=xiswdigit(c), come_pop_stackframe(), __exception_result_var_b95);
    return __result144__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_95;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_95, 0, sizeof(_Bool));
    result_95=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result145__ = result_95;
    return __result145__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    __result147__ = (c>=48&&c<=57);
    return __result147__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b96;
_Bool __exception_result_var_b97;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = (come_push_stackframe("libcomelang2.c", 1328),__exception_result_var_b96=xisalpha(c), come_pop_stackframe(), __exception_result_var_b96)||(come_push_stackframe("libcomelang2.c", 1328),__exception_result_var_b97=xisdigit(c), come_pop_stackframe(), __exception_result_var_b97);
    return __result148__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_96;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_96, 0, sizeof(_Bool));
    result_96=(c>=32&&c<=126);
    __result149__ = result_96;
    return __result149__;
}

_Bool xiswascii(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_97;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_97, 0, sizeof(_Bool));
    result_97=(c>=32&&c<=126);
    __result150__ = result_97;
    return __result150__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
int __result151__;
long int __exception_result_var_b98;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional120=str==((void*)0),    _if_conditional120) {
        __result151__ = 0;
        return __result151__;
    }
    __result152__ = (come_push_stackframe("libcomelang2.c", 1351),__exception_result_var_b98=strlen(str), come_pop_stackframe(), __exception_result_var_b98);
    return __result152__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
int __result153__;
long int __exception_result_var_b99;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional121=str==((void*)0),    _if_conditional121) {
        __result153__ = 0;
        return __result153__;
    }
    __result154__ = (come_push_stackframe("libcomelang2.c", 1358),__exception_result_var_b99=strlen(str), come_pop_stackframe(), __exception_result_var_b99);
    return __result154__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
void* right_value79;
char* __exception_result_var_b100;
char* __result155__;
long int __exception_result_var_b101;
int len_98;
void* right_value80;
char* result_99;
int i_100;
_Bool _for_condtionalA8;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&i_100, 0, sizeof(int));
    if(_if_conditional122=str==((void*)0),    _if_conditional122) {
        __result155__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1364),__exception_result_var_b100=((char*)(right_value79=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b100);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        return __result155__;
    }
    len_98=(come_push_stackframe("libcomelang2.c", 1366),__exception_result_var_b101=strlen(str), come_pop_stackframe(), __exception_result_var_b101);
    result_99=(char*)come_increment_ref_count(((char*)(right_value80=(char*)come_calloc(1, sizeof(char)*(1*(len_98+1)), "libcomelang2.c", 1367, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = 0;
    for(
    i_100=0 ,    0;    _for_condtionalA8=    i_100<len_98 ,    _for_condtionalA8;    i_100++ ,    0    ){
        result_99[i_100]=str[len_98-i_100-1];
    }
    result_99[len_98]=0;
    __result156__ = __result_obj__ = result_99;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 1, 0); }
    return __result156__;
    if(result_99 && !__freed_obj__) { result_99 = come_decrement_ref_count(result_99, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
void* right_value81;
char* __exception_result_var_b102;
char* __result157__;
long int __exception_result_var_b103;
int len_101;
void* right_value82;
char* result_102;
int i_103;
_Bool _for_condtionalA9;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&len_101, 0, sizeof(int));
memset(&right_value82, 0, sizeof(void*));
memset(&result_102, 0, sizeof(char*));
memset(&i_103, 0, sizeof(int));
    if(_if_conditional123=str==((void*)0),    _if_conditional123) {
        __result157__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1381),__exception_result_var_b102=((char*)(right_value81=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b102);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = 0;
        return __result157__;
    }
    len_101=(come_push_stackframe("libcomelang2.c", 1383),__exception_result_var_b103=strlen(str), come_pop_stackframe(), __exception_result_var_b103);
    result_102=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(len_101+1)), "libcomelang2.c", 1384, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    for(
    i_103=0 ,    0;    _for_condtionalA9=    i_103<len_101 ,    _for_condtionalA9;    i_103++ ,    0    ){
        result_102[i_103]=str[len_101-i_103-1];
    }
    result_102[len_101]=0;
    __result158__ = __result_obj__ = result_102;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 1, 0); }
    return __result158__;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value83;
char* __exception_result_var_b104;
char* __result159__;
long int __exception_result_var_b105;
int len_104;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
void* right_value84;
char* __exception_result_var_b106;
void* right_value85;
char* __exception_result_var_b107;
char* __result160__;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
void* right_value86;
char* __exception_result_var_b108;
char* __result161__;
_Bool _if_conditional131;
void* right_value87;
char* __exception_result_var_b109;
char* __result162__;
void* right_value88;
char* result_105;
void* __exception_result_var_b110;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional124=str==((void*)0),    _if_conditional124) {
        __result159__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1397),__exception_result_var_b104=((char*)(right_value83=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b104);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83;
        __freed_obj__ = 0;
        return __result159__;
    }
    len_104=(come_push_stackframe("libcomelang2.c", 1400),__exception_result_var_b105=strlen(str), come_pop_stackframe(), __exception_result_var_b105);
    if(_if_conditional125=head<0,    _if_conditional125) {
        head+=len_104;
    }
    if(_if_conditional126=tail<0,    _if_conditional126) {
        tail+=len_104+1;
    }
    if(_if_conditional127=head>tail,    _if_conditional127) {
        __result160__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1410),__exception_result_var_b107=((char*)(right_value85=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1410),__exception_result_var_b106=((char*)(right_value84=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1410)),tail,head))), come_pop_stackframe(), __exception_result_var_b106), "libcomelang2.c", 1410))))), come_pop_stackframe(), __exception_result_var_b107);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value85;
        __freed_obj__ = 0;
        return __result160__;
    }
    if(_if_conditional128=head<0,    _if_conditional128) {
        head=0;
    }
    if(_if_conditional129=tail>=len_104,    _if_conditional129) {
        tail=len_104;
    }
    if(_if_conditional130=head==tail,    _if_conditional130) {
        __result161__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1422),__exception_result_var_b108=((char*)(right_value86=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b108);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = 0;
        return __result161__;
    }
    if(_if_conditional131=tail-head+1<1,    _if_conditional131) {
        __result162__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1426),__exception_result_var_b109=((char*)(right_value87=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b109);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = 0;
        return __result162__;
    }
    result_105=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1429, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1431),__exception_result_var_b110=memcpy(result_105,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b110);
    result_105[tail-head]=0;
    __result163__ = __result_obj__ = result_105;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 1, 0); }
    return __result163__;
    if(result_105 && !__freed_obj__) { result_105 = come_decrement_ref_count(result_105, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
void* right_value89;
char* __exception_result_var_b111;
char* __result164__;
long int __exception_result_var_b112;
int len_106;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value90;
char* __exception_result_var_b113;
void* right_value91;
char* __exception_result_var_b114;
char* __result165__;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
void* right_value92;
char* __exception_result_var_b115;
char* __result166__;
_Bool _if_conditional139;
void* right_value93;
char* __exception_result_var_b116;
char* __result167__;
void* right_value94;
char* result_107;
void* __exception_result_var_b117;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&len_106, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_107, 0, sizeof(char*));
    if(_if_conditional132=str==((void*)0),    _if_conditional132) {
        __result164__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1440),__exception_result_var_b111=((char*)(right_value89=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b111);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        return __result164__;
    }
    len_106=(come_push_stackframe("libcomelang2.c", 1443),__exception_result_var_b112=strlen(str), come_pop_stackframe(), __exception_result_var_b112);
    if(_if_conditional133=head<0,    _if_conditional133) {
        head+=len_106;
    }
    if(_if_conditional134=tail<0,    _if_conditional134) {
        tail+=len_106+1;
    }
    if(_if_conditional135=head>tail,    _if_conditional135) {
        __result165__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1453),__exception_result_var_b114=((char*)(right_value91=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1453),__exception_result_var_b113=((char*)(right_value90=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1453)),tail,head))), come_pop_stackframe(), __exception_result_var_b113), "libcomelang2.c", 1453))))), come_pop_stackframe(), __exception_result_var_b114);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value91;
        __freed_obj__ = 0;
        return __result165__;
    }
    if(_if_conditional136=head<0,    _if_conditional136) {
        head=0;
    }
    if(_if_conditional137=tail>=len_106,    _if_conditional137) {
        tail=len_106;
    }
    if(_if_conditional138=head==tail,    _if_conditional138) {
        __result166__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1465),__exception_result_var_b115=((char*)(right_value92=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b115);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value92;
        __freed_obj__ = 0;
        return __result166__;
    }
    if(_if_conditional139=tail-head+1<1,    _if_conditional139) {
        __result167__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1469),__exception_result_var_b116=((char*)(right_value93=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b116);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
        return __result167__;
    }
    result_107=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1472, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1474),__exception_result_var_b117=memcpy(result_107,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b117);
    result_107[tail-head]=0;
    __result168__ = __result_obj__ = result_107;
    if(result_107 && !__freed_obj__) { result_107 = come_decrement_ref_count(result_107, (void*)0, (void*)0, 0, 1, 0); }
    return __result168__;
    if(result_107 && !__freed_obj__) { result_107 = come_decrement_ref_count(result_107, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
void* right_value95;
char* __exception_result_var_b118;
char* __result169__;
long int __exception_result_var_b119;
int len_108;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value96;
char* __exception_result_var_b120;
void* right_value97;
char* __exception_result_var_b121;
char* __result170__;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
void* right_value98;
char* __exception_result_var_b122;
char* __result171__;
_Bool _if_conditional147;
void* right_value99;
char* __exception_result_var_b123;
char* __result172__;
void* right_value100;
char* result_109;
void* __exception_result_var_b124;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&len_108, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&result_109, 0, sizeof(char*));
    if(_if_conditional140=str==((void*)0),    _if_conditional140) {
        __result169__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1483),__exception_result_var_b118=((char*)(right_value95=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b118);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value95;
        __freed_obj__ = 0;
        return __result169__;
    }
    len_108=(come_push_stackframe("libcomelang2.c", 1486),__exception_result_var_b119=strlen(str), come_pop_stackframe(), __exception_result_var_b119);
    if(_if_conditional141=head<0,    _if_conditional141) {
        head+=len_108;
    }
    if(_if_conditional142=tail<0,    _if_conditional142) {
        tail+=len_108+1;
    }
    if(_if_conditional143=head>tail,    _if_conditional143) {
        __result170__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1496),__exception_result_var_b121=((char*)(right_value97=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1496),__exception_result_var_b120=((char*)(right_value96=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1496)),tail,head))), come_pop_stackframe(), __exception_result_var_b120), "libcomelang2.c", 1496))))), come_pop_stackframe(), __exception_result_var_b121);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value96;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value97;
        __freed_obj__ = 0;
        return __result170__;
    }
    if(_if_conditional144=head<0,    _if_conditional144) {
        head=0;
    }
    if(_if_conditional145=tail>=len_108,    _if_conditional145) {
        tail=len_108;
    }
    if(_if_conditional146=head==tail,    _if_conditional146) {
        __result171__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1508),__exception_result_var_b122=((char*)(right_value98=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b122);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value98;
        __freed_obj__ = 0;
        return __result171__;
    }
    if(_if_conditional147=tail-head+1<1,    _if_conditional147) {
        __result172__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1512),__exception_result_var_b123=((char*)(right_value99=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b123);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value99;
        __freed_obj__ = 0;
        return __result172__;
    }
    result_109=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1515, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1517),__exception_result_var_b124=memcpy(result_109,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b124);
    result_109[tail-head]=0;
    __result173__ = __result_obj__ = result_109;
    if(result_109 && !__freed_obj__) { result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0, 1, 0); }
    return __result173__;
    if(result_109 && !__freed_obj__) { result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
void* right_value101;
char* __exception_result_var_b125;
char* __result174__;
long int __exception_result_var_b126;
int len_110;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value102;
char* __exception_result_var_b127;
void* right_value103;
char* __exception_result_var_b128;
char* __result175__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value104;
char* __exception_result_var_b129;
char* __result176__;
_Bool _if_conditional155;
void* right_value105;
char* __exception_result_var_b130;
char* __result177__;
void* right_value106;
char* result_111;
void* __exception_result_var_b131;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&len_110, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
    if(_if_conditional148=str==((void*)0),    _if_conditional148) {
        __result174__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1526),__exception_result_var_b125=((char*)(right_value101=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b125);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value101;
        __freed_obj__ = 0;
        return __result174__;
    }
    len_110=(come_push_stackframe("libcomelang2.c", 1529),__exception_result_var_b126=strlen(str), come_pop_stackframe(), __exception_result_var_b126);
    if(_if_conditional149=head<0,    _if_conditional149) {
        head+=len_110;
    }
    if(_if_conditional150=tail<0,    _if_conditional150) {
        tail+=len_110+1;
    }
    if(_if_conditional151=head>tail,    _if_conditional151) {
        __result175__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1539),__exception_result_var_b128=((char*)(right_value103=string_reverse(((char*)come_null_check((come_push_stackframe("libcomelang2.c", 1539),__exception_result_var_b127=((char*)(right_value102=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1539)),tail,head))), come_pop_stackframe(), __exception_result_var_b127), "libcomelang2.c", 1539))))), come_pop_stackframe(), __exception_result_var_b128);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value103;
        __freed_obj__ = 0;
        return __result175__;
    }
    if(_if_conditional152=head<0,    _if_conditional152) {
        head=0;
    }
    if(_if_conditional153=tail>=len_110,    _if_conditional153) {
        tail=len_110;
    }
    if(_if_conditional154=head==tail,    _if_conditional154) {
        __result176__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1551),__exception_result_var_b129=((char*)(right_value104=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b129);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value104;
        __freed_obj__ = 0;
        return __result176__;
    }
    if(_if_conditional155=tail-head+1<1,    _if_conditional155) {
        __result177__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1555),__exception_result_var_b130=((char*)(right_value105=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b130);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value105;
        __freed_obj__ = 0;
        return __result177__;
    }
    result_111=(char*)come_increment_ref_count(((char*)(right_value106=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1558, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1560),__exception_result_var_b131=memcpy(result_111,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b131);
    result_111[tail-head]=0;
    __result178__ = __result_obj__ = result_111;
    if(result_111 && !__freed_obj__) { result_111 = come_decrement_ref_count(result_111, (void*)0, (void*)0, 0, 1, 0); }
    return __result178__;
    if(result_111 && !__freed_obj__) { result_111 = come_decrement_ref_count(result_111, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
void* right_value107;
char* __exception_result_var_b132;
char* __result179__;
va_list args_112;
char* result_113;
int __exception_result_var_b133;
int len_114;
_Bool _if_conditional157;
void* right_value108;
char* __exception_result_var_b134;
char* __result180__;
void* right_value109;
char* __exception_result_var_b135;
char* result2_115;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&args_112, 0, sizeof(va_list));
memset(&result_113, 0, sizeof(char*));
memset(&len_114, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&result2_115, 0, sizeof(char*));
    if(_if_conditional156=msg==((void*)0),    _if_conditional156) {
        __result179__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1569),__exception_result_var_b132=((char*)(right_value107=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b132);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value107;
        __freed_obj__ = 0;
        return __result179__;
    }
    (come_push_stackframe("libcomelang2.c", 1572),__builtin_va_start(args_112,msg),come_pop_stackframe());
    len_114=(come_push_stackframe("libcomelang2.c", 1574),__exception_result_var_b133=vasprintf(&result_113,msg,args_112), come_pop_stackframe(), __exception_result_var_b133);
    (come_push_stackframe("libcomelang2.c", 1575),__builtin_va_end(args_112),come_pop_stackframe());
    if(_if_conditional157=len_114<0,    _if_conditional157) {
        __result180__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1578),__exception_result_var_b134=((char*)(right_value108=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b134);
        if((&args_112) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_112), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value108;
        __freed_obj__ = 0;
        return __result180__;
    }
    result2_115=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1581),__exception_result_var_b135=((char*)(right_value109=__builtin_string(result_113))), come_pop_stackframe(), __exception_result_var_b135));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1583),free(result_113),come_pop_stackframe());
    __result181__ = __result_obj__ = result2_115;
    if((&args_112) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_112), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_115 && !__freed_obj__) { result2_115 = come_decrement_ref_count(result2_115, (void*)0, (void*)0, 0, 1, 0); }
    return __result181__;
    if((&args_112) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_112), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_115 && !__freed_obj__) { result2_115 = come_decrement_ref_count(result2_115, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional158;
void* right_value110;
char* __exception_result_var_b136;
char* __result182__;
long int __exception_result_var_b137;
int len_116;
int __exception_result_var_b138;
_Bool _if_conditional159;
void* right_value111;
char* __exception_result_var_b139;
char* __result183__;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value112;
char* __exception_result_var_b140;
char* __result184__;
_Bool _if_conditional164;
void* right_value113;
char* __exception_result_var_b141;
char* sub_str_117;
int __exception_result_var_b142;
void* __exception_result_var_b143;
void* right_value114;
char* __exception_result_var_b144;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&len_116, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&sub_str_117, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
    if(_if_conditional158=str==((void*)0),    _if_conditional158) {
        __result182__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1591),__exception_result_var_b136=((char*)(right_value110=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b136);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value110;
        __freed_obj__ = 0;
        return __result182__;
    }
    len_116=(come_push_stackframe("libcomelang2.c", 1594),__exception_result_var_b137=strlen(str), come_pop_stackframe(), __exception_result_var_b137);
    if(_if_conditional159=(come_push_stackframe("libcomelang2.c", 1596),__exception_result_var_b138=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b138)==0,    _if_conditional159) {
        __result183__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1597),__exception_result_var_b139=((char*)(right_value111=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b139);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        return __result183__;
    }
    if(_if_conditional160=head<0,    _if_conditional160) {
        head+=len_116;
    }
    if(_if_conditional161=tail<0,    _if_conditional161) {
        tail+=len_116+1;
    }
    if(_if_conditional162=head<0,    _if_conditional162) {
        head=0;
    }
    if(_if_conditional163=tail<0,    _if_conditional163) {
        __result184__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1613),__exception_result_var_b140=((char*)(right_value112=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b140);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value112;
        __freed_obj__ = 0;
        return __result184__;
    }
    if(_if_conditional164=tail>=len_116,    _if_conditional164) {
        tail=len_116;
    }
    sub_str_117=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1620),__exception_result_var_b141=((char*)(right_value113=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1620)),tail,-1))), come_pop_stackframe(), __exception_result_var_b141));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1622),__exception_result_var_b143=memcpy(str+head,sub_str_117,(come_push_stackframe("libcomelang2.c", 1622),__exception_result_var_b142=string_length(((char*)come_null_check(sub_str_117, "libcomelang2.c", 1622))), come_pop_stackframe(), __exception_result_var_b142)+1), come_pop_stackframe(), __exception_result_var_b143);
    __result185__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1624),__exception_result_var_b144=((char*)(right_value114=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b144);
    if(sub_str_117 && !__freed_obj__) { sub_str_117 = come_decrement_ref_count(sub_str_117, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    return __result185__;
    if(sub_str_117 && !__freed_obj__) { sub_str_117 = come_decrement_ref_count(sub_str_117, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
void* right_value115;
char* __exception_result_var_b145;
char* __result186__;
long int __exception_result_var_b146;
int len_118;
int __exception_result_var_b147;
_Bool _if_conditional166;
void* right_value116;
char* __exception_result_var_b148;
char* __result187__;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value117;
char* __exception_result_var_b149;
char* __result188__;
_Bool _if_conditional171;
void* right_value118;
char* __exception_result_var_b150;
char* sub_str_119;
int __exception_result_var_b151;
void* __exception_result_var_b152;
void* right_value119;
char* __exception_result_var_b153;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&len_118, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&sub_str_119, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
    if(_if_conditional165=str==((void*)0),    _if_conditional165) {
        __result186__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1630),__exception_result_var_b145=((char*)(right_value115=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b145);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value115;
        __freed_obj__ = 0;
        return __result186__;
    }
    len_118=(come_push_stackframe("libcomelang2.c", 1633),__exception_result_var_b146=strlen(str), come_pop_stackframe(), __exception_result_var_b146);
    if(_if_conditional166=(come_push_stackframe("libcomelang2.c", 1635),__exception_result_var_b147=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b147)==0,    _if_conditional166) {
        __result187__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1636),__exception_result_var_b148=((char*)(right_value116=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b148);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value116;
        __freed_obj__ = 0;
        return __result187__;
    }
    if(_if_conditional167=head<0,    _if_conditional167) {
        head+=len_118;
    }
    if(_if_conditional168=tail<0,    _if_conditional168) {
        tail+=len_118+1;
    }
    if(_if_conditional169=head<0,    _if_conditional169) {
        head=0;
    }
    if(_if_conditional170=tail<0,    _if_conditional170) {
        __result188__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1652),__exception_result_var_b149=((char*)(right_value117=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b149);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117;
        __freed_obj__ = 0;
        return __result188__;
    }
    if(_if_conditional171=tail>=len_118,    _if_conditional171) {
        tail=len_118;
    }
    sub_str_119=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1659),__exception_result_var_b150=((char*)(right_value118=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1659)),tail,-1))), come_pop_stackframe(), __exception_result_var_b150));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1661),__exception_result_var_b152=memcpy(str+head,sub_str_119,(come_push_stackframe("libcomelang2.c", 1661),__exception_result_var_b151=string_length(((char*)come_null_check(sub_str_119, "libcomelang2.c", 1661))), come_pop_stackframe(), __exception_result_var_b151)+1), come_pop_stackframe(), __exception_result_var_b152);
    __result189__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1663),__exception_result_var_b153=((char*)(right_value119=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b153);
    if(sub_str_119 && !__freed_obj__) { sub_str_119 = come_decrement_ref_count(sub_str_119, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119;
    __freed_obj__ = 0;
    return __result189__;
    if(sub_str_119 && !__freed_obj__) { sub_str_119 = come_decrement_ref_count(sub_str_119, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
void* right_value120;
void* right_value121;
struct list$1charph* __exception_result_var_b154;
struct list$1charph* __result191__;
void* right_value122;
void* right_value123;
struct list$1charph* __exception_result_var_b155;
struct list$1charph* result_122;
void* right_value124;
void* right_value125;
struct buffer* __exception_result_var_b156;
struct buffer* str_123;
int i_124;
int __exception_result_var_b157;
_Bool _for_condtionalA10;
_Bool _if_conditional174;
void* right_value129;
char* __exception_result_var_b158;
struct list$1charph* __exception_result_var_b159;
struct buffer* __exception_result_var_b160;
int __exception_result_var_b161;
_Bool _if_conditional177;
void* right_value130;
char* __exception_result_var_b162;
struct list$1charph* __exception_result_var_b163;
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&str_123, 0, sizeof(struct buffer*));
memset(&i_124, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    if(_if_conditional172=self==((void*)0),    _if_conditional172) {
        __result191__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1669),__exception_result_var_b154=((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1669, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b154);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value121;
        __freed_obj__ = 0;
        return __result191__;
    }
    result_122=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1672),__exception_result_var_b155=((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1672, "struct list$1charph"))), "libcomelang2.c", 1672)))))), come_pop_stackframe(), __exception_result_var_b155));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    str_123=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1674),__exception_result_var_b156=((struct buffer*)(right_value125=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value124=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1674, "struct buffer"))), "libcomelang2.c", 1674)))))), come_pop_stackframe(), __exception_result_var_b156));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value125;
    __freed_obj__ = 0;
    for(
    i_124=0 ,    0;    _for_condtionalA10=    i_124<(come_push_stackframe("libcomelang2.c", 1676),__exception_result_var_b157=charp_length(((char*)come_null_check(self, "libcomelang2.c", 1676))), come_pop_stackframe(), __exception_result_var_b157) ,    _for_condtionalA10;    i_124++ ,    0    ){
        if(_if_conditional174=self[i_124]==c,        _if_conditional174) {
            (come_push_stackframe("libcomelang2.c", 1678),__exception_result_var_b159=list$1charph_push_back(((struct list$1charph*)come_null_check(result_122, "libcomelang2.c", 1678)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1678),__exception_result_var_b158=((char*)(right_value129=__builtin_string(((struct buffer*)come_null_check(str_123, "libcomelang2.c", 1678))->buf))), come_pop_stackframe(), __exception_result_var_b158))), come_pop_stackframe(), __exception_result_var_b159);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value129;
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 1679),buffer_reset(((struct buffer*)come_null_check(str_123, "libcomelang2.c", 1679))),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("libcomelang2.c", 1682),__exception_result_var_b160=buffer_append_char(((struct buffer*)come_null_check(str_123, "libcomelang2.c", 1682)),self[i_124]), come_pop_stackframe(), __exception_result_var_b160);
        }
    }
    if(_if_conditional177=(come_push_stackframe("libcomelang2.c", 1685),__exception_result_var_b161=buffer_length(((struct buffer*)come_null_check(str_123, "libcomelang2.c", 1685))), come_pop_stackframe(), __exception_result_var_b161)!=0,    _if_conditional177) {
        (come_push_stackframe("libcomelang2.c", 1686),__exception_result_var_b163=list$1charph_push_back(((struct list$1charph*)come_null_check(result_122, "libcomelang2.c", 1686)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1686),__exception_result_var_b162=((char*)(right_value130=__builtin_string(((struct buffer*)come_null_check(str_123, "libcomelang2.c", 1686))->buf))), come_pop_stackframe(), __exception_result_var_b162))), come_pop_stackframe(), __exception_result_var_b163);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value130;
        __freed_obj__ = 0;
    }
    __result193__ = __result_obj__ = result_122;
    if(result_122 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result193__;
    if(result_122 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_123, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 161))->len=0;
            __result190__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result190__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_120;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_120, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1charph*));
                it_120=((struct list$1charph*)come_null_check(self, "./comelang2.h", 178))->head;
                while(_while_condtional5=it_120!=((void*)0),                _while_condtional5) {
                    prev_it_121=it_120;
                    it_120=((struct list_item$1charph*)come_null_check(it_120, "./comelang2.h", 181))->next;
                    if(prev_it_121 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional173=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                        _if_conditional173) {
                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
void* right_value126;
struct list_item$1charph* litem_125;
char* __dec_obj16;
_Bool _if_conditional176;
void* right_value127;
struct list_item$1charph* litem_126;
char* __dec_obj17;
void* right_value128;
struct list_item$1charph* litem_127;
char* __dec_obj18;
struct list$1charph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1charph*));
memset(&right_value127, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1charph*));
memset(&right_value128, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional175=((struct list$1charph*)come_null_check(self, "./comelang2.h", 280))->len==0,                _if_conditional175) {
                    litem_125=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 281, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_125, "./comelang2.h", 283))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(litem_125, "./comelang2.h", 284))->next=((void*)0);
                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_125, "./comelang2.h", 285))->item;
                    ((struct list_item$1charph*)come_null_check(litem_125, "./comelang2.h", 285))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 287))->tail=litem_125;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->head=litem_125;
                }
                else {
                    if(_if_conditional176=((struct list$1charph*)come_null_check(self, "./comelang2.h", 290))->len==1,                    _if_conditional176) {
                        litem_126=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 291, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_126, "./comelang2.h", 293))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 293))->head;
                        ((struct list_item$1charph*)come_null_check(litem_126, "./comelang2.h", 294))->next=((void*)0);
                        __dec_obj17=((struct list_item$1charph*)come_null_check(litem_126, "./comelang2.h", 295))->item;
                        ((struct list_item$1charph*)come_null_check(litem_126, "./comelang2.h", 295))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 297))->tail=litem_126;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_126;
                    }
                    else {
                        litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 301, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_127, "./comelang2.h", 303))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 303))->tail;
                        ((struct list_item$1charph*)come_null_check(litem_127, "./comelang2.h", 304))->next=((void*)0);
                        __dec_obj18=((struct list_item$1charph*)come_null_check(litem_127, "./comelang2.h", 305))->item;
                        ((struct list_item$1charph*)come_null_check(litem_127, "./comelang2.h", 305))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_127;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 308))->tail=litem_127;
                    }
                }
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 311))->len++;
                __result192__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result192__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
void* right_value131;
void* right_value132;
struct list$1charph* __exception_result_var_b164;
struct list$1charph* __result194__;
void* right_value133;
void* right_value134;
struct list$1charph* __exception_result_var_b165;
struct list$1charph* result_128;
void* right_value135;
void* right_value136;
struct buffer* __exception_result_var_b166;
struct buffer* str_129;
int i_130;
int __exception_result_var_b167;
_Bool _for_condtionalA11;
_Bool _if_conditional179;
void* right_value137;
char* __exception_result_var_b168;
struct list$1charph* __exception_result_var_b169;
struct buffer* __exception_result_var_b170;
int __exception_result_var_b171;
_Bool _if_conditional180;
void* right_value138;
char* __exception_result_var_b172;
struct list$1charph* __exception_result_var_b173;
struct list$1charph* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct list$1charph*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&str_129, 0, sizeof(struct buffer*));
memset(&i_130, 0, sizeof(int));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    if(_if_conditional178=self==((void*)0),    _if_conditional178) {
        __result194__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1695),__exception_result_var_b164=((struct list$1charph*)(right_value132=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1695, "struct list$1charph"))))))), come_pop_stackframe(), __exception_result_var_b164);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value132;
        __freed_obj__ = 0;
        return __result194__;
    }
    result_128=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1698),__exception_result_var_b165=((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1698, "struct list$1charph"))), "libcomelang2.c", 1698)))))), come_pop_stackframe(), __exception_result_var_b165));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    str_129=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1700),__exception_result_var_b166=((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1700, "struct buffer"))), "libcomelang2.c", 1700)))))), come_pop_stackframe(), __exception_result_var_b166));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value136;
    __freed_obj__ = 0;
    for(
    i_130=0 ,    0;    _for_condtionalA11=    i_130<(come_push_stackframe("libcomelang2.c", 1702),__exception_result_var_b167=charp_length(((char*)come_null_check(self, "libcomelang2.c", 1702))), come_pop_stackframe(), __exception_result_var_b167) ,    _for_condtionalA11;    i_130++ ,    0    ){
        if(_if_conditional179=self[i_130]==c,        _if_conditional179) {
            (come_push_stackframe("libcomelang2.c", 1704),__exception_result_var_b169=list$1charph_push_back(((struct list$1charph*)come_null_check(result_128, "libcomelang2.c", 1704)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1704),__exception_result_var_b168=((char*)(right_value137=__builtin_string(((struct buffer*)come_null_check(str_129, "libcomelang2.c", 1704))->buf))), come_pop_stackframe(), __exception_result_var_b168))), come_pop_stackframe(), __exception_result_var_b169);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = 0;
            (come_push_stackframe("libcomelang2.c", 1705),buffer_reset(((struct buffer*)come_null_check(str_129, "libcomelang2.c", 1705))),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("libcomelang2.c", 1708),__exception_result_var_b170=buffer_append_char(((struct buffer*)come_null_check(str_129, "libcomelang2.c", 1708)),self[i_130]), come_pop_stackframe(), __exception_result_var_b170);
        }
    }
    if(_if_conditional180=(come_push_stackframe("libcomelang2.c", 1711),__exception_result_var_b171=buffer_length(((struct buffer*)come_null_check(str_129, "libcomelang2.c", 1711))), come_pop_stackframe(), __exception_result_var_b171)!=0,    _if_conditional180) {
        (come_push_stackframe("libcomelang2.c", 1712),__exception_result_var_b173=list$1charph_push_back(((struct list$1charph*)come_null_check(result_128, "libcomelang2.c", 1712)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1712),__exception_result_var_b172=((char*)(right_value138=__builtin_string(((struct buffer*)come_null_check(str_129, "libcomelang2.c", 1712))->buf))), come_pop_stackframe(), __exception_result_var_b172))), come_pop_stackframe(), __exception_result_var_b173);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
    }
    __result195__ = __result_obj__ = result_128;
    if(result_128 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_129 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result195__;
    if(result_128 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_129 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_129, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
void* right_value139;
char* __exception_result_var_b174;
char* __result196__;
long int __exception_result_var_b175;
char* p_131;
_Bool _while_condtional6;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value140;
char* __exception_result_var_b176;
char* __result197__;
void* right_value141;
char* __exception_result_var_b177;
char* __result198__;
void* right_value142;
char* __exception_result_var_b178;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        __result196__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1724),__exception_result_var_b174=((char*)(right_value139=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b174);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
        return __result196__;
    }
    p_131=path+(come_push_stackframe("libcomelang2.c", 1726),__exception_result_var_b175=strlen(path), come_pop_stackframe(), __exception_result_var_b175);
    while(_while_condtional6=p_131>=path,    _while_condtional6) {
        if(_if_conditional182=*p_131==47,        _if_conditional182) {
            break;
        }
        else {
            p_131--;
        }
    }
    if(_if_conditional183=p_131<path,    _if_conditional183) {
        __result197__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1738),__exception_result_var_b176=((char*)(right_value140=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b176);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
        return __result197__;
    }
    else {
        __result198__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1741),__exception_result_var_b177=((char*)(right_value141=__builtin_string(p_131+1))), come_pop_stackframe(), __exception_result_var_b177);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141;
        __freed_obj__ = 0;
        return __result198__;
    }
    __result199__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1744),__exception_result_var_b178=((char*)(right_value142=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b178);
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
_Bool _if_conditional184;
void* right_value143;
char* __exception_result_var_b179;
char* __result200__;
void* right_value144;
char* __exception_result_var_b180;
char* __exception_result_var_b181;
void* right_value145;
char* __exception_result_var_b182;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    if(_if_conditional184=path==((void*)0),    _if_conditional184) {
        __result200__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1750),__exception_result_var_b179=((char*)(right_value143=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b179);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143;
        __freed_obj__ = 0;
        return __result200__;
    }
    __result201__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1752),__exception_result_var_b182=((char*)(right_value145=__builtin_string((come_push_stackframe("libcomelang2.c", 1752),__exception_result_var_b181=dirname((come_push_stackframe("libcomelang2.c", 1752),__exception_result_var_b180=((char*)(right_value144=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b180)), come_pop_stackframe(), __exception_result_var_b181)))), come_pop_stackframe(), __exception_result_var_b182);
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
_Bool _if_conditional185;
void* right_value146;
char* __exception_result_var_b183;
char* __result202__;
void* right_value147;
char* __exception_result_var_b184;
char* path2_132;
long int __exception_result_var_b185;
char* p_133;
_Bool _while_condtional7;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value148;
char* __exception_result_var_b186;
char* __result203__;
void* right_value149;
char* __exception_result_var_b187;
char* __result204__;
void* right_value150;
char* __exception_result_var_b188;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&path2_132, 0, sizeof(char*));
memset(&p_133, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
    if(_if_conditional185=path==((void*)0),    _if_conditional185) {
        __result202__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1758),__exception_result_var_b183=((char*)(right_value146=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b183);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146;
        __freed_obj__ = 0;
        return __result202__;
    }
    path2_132=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1760),__exception_result_var_b184=((char*)(right_value147=xbasename(path))), come_pop_stackframe(), __exception_result_var_b184));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    p_133=path2_132+(come_push_stackframe("libcomelang2.c", 1762),__exception_result_var_b185=strlen(path2_132), come_pop_stackframe(), __exception_result_var_b185);
    while(_while_condtional7=p_133>=path2_132,    _while_condtional7) {
        if(_if_conditional186=*p_133==46,        _if_conditional186) {
            break;
        }
        else {
            p_133--;
        }
    }
    if(_if_conditional187=p_133<path2_132,    _if_conditional187) {
        __result203__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1774),__exception_result_var_b186=((char*)(right_value148=__builtin_string(path2_132))), come_pop_stackframe(), __exception_result_var_b186);
        if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148;
        __freed_obj__ = 0;
        return __result203__;
    }
    else {
        __result204__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1777),__exception_result_var_b187=((char*)(right_value149=string_substring(((char*)come_null_check(path2_132, "libcomelang2.c", 1777)),0,p_133-path2_132))), come_pop_stackframe(), __exception_result_var_b187);
        if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149;
        __freed_obj__ = 0;
        return __result204__;
    }
    __result205__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1780),__exception_result_var_b188=((char*)(right_value150=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b188);
    if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value150;
    __freed_obj__ = 0;
    return __result205__;
    if(path2_132 && !__freed_obj__) { path2_132 = come_decrement_ref_count(path2_132, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
void* right_value151;
char* __exception_result_var_b189;
char* __result206__;
long int __exception_result_var_b190;
char* p_134;
_Bool _while_condtional8;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value152;
char* __exception_result_var_b191;
char* __result207__;
void* right_value153;
char* __exception_result_var_b192;
char* __result208__;
void* right_value154;
char* __exception_result_var_b193;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
memset(&p_134, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    if(_if_conditional188=path==((void*)0),    _if_conditional188) {
        __result206__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1786),__exception_result_var_b189=((char*)(right_value151=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b189);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = 0;
        return __result206__;
    }
    p_134=path+(come_push_stackframe("libcomelang2.c", 1788),__exception_result_var_b190=strlen(path), come_pop_stackframe(), __exception_result_var_b190);
    while(_while_condtional8=p_134>=path,    _while_condtional8) {
        if(_if_conditional189=*p_134==46,        _if_conditional189) {
            break;
        }
        else {
            p_134--;
        }
    }
    if(_if_conditional190=p_134<path,    _if_conditional190) {
        __result207__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1800),__exception_result_var_b191=((char*)(right_value152=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b191);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152;
        __freed_obj__ = 0;
        return __result207__;
    }
    else {
        __result208__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1803),__exception_result_var_b192=((char*)(right_value153=__builtin_string(p_134+1))), come_pop_stackframe(), __exception_result_var_b192);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153;
        __freed_obj__ = 0;
        return __result208__;
    }
    __result209__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1806),__exception_result_var_b193=((char*)(right_value154=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b193);
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
_Bool _if_conditional191;
void* right_value155;
char* __exception_result_var_b194;
char* __result210__;
char* __exception_result_var_b195;
char* result_135;
void* right_value156;
char* __exception_result_var_b196;
char* result2_136;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
memset(&result_135, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&result2_136, 0, sizeof(char*));
    if(_if_conditional191=path==((void*)0),    _if_conditional191) {
        __result210__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1812),__exception_result_var_b194=((char*)(right_value155=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b194);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        return __result210__;
    }
    result_135=(come_push_stackframe("libcomelang2.c", 1814),__exception_result_var_b195=realpath(path,((void*)0)), come_pop_stackframe(), __exception_result_var_b195);
    result2_136=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 1816),__exception_result_var_b196=((char*)(right_value156=__builtin_string(result_135))), come_pop_stackframe(), __exception_result_var_b196));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    (come_push_stackframe("libcomelang2.c", 1818),free(result_135),come_pop_stackframe());
    __result211__ = __result_obj__ = result2_136;
    if(result2_136 && !__freed_obj__) { result2_136 = come_decrement_ref_count(result2_136, (void*)0, (void*)0, 0, 1, 0); }
    return __result211__;
    if(result2_136 && !__freed_obj__) { result2_136 = come_decrement_ref_count(result2_136, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
void* right_value157;
char* __exception_result_var_b197;
char* __result212__;
void* right_value158;
char* __exception_result_var_b198;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    if(_if_conditional192=self,    _if_conditional192) {
        __result212__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1829),__exception_result_var_b197=((char*)(right_value157=__builtin_string("true"))), come_pop_stackframe(), __exception_result_var_b197);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157;
        __freed_obj__ = 0;
        return __result212__;
    }
    else {
        __result213__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1832),__exception_result_var_b198=((char*)(right_value158=__builtin_string("false"))), come_pop_stackframe(), __exception_result_var_b198);
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
char* __exception_result_var_b199;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    __result214__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1838),__exception_result_var_b199=((char*)(right_value159=xsprintf("%c",self))), come_pop_stackframe(), __exception_result_var_b199);
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
char* __exception_result_var_b200;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    __result215__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1843),__exception_result_var_b200=((char*)(right_value160=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b200);
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
char* __exception_result_var_b201;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result216__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1848),__exception_result_var_b201=((char*)(right_value161=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b201);
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
char* __exception_result_var_b202;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result217__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1853),__exception_result_var_b202=((char*)(right_value162=xsprintf("%ld",self))), come_pop_stackframe(), __exception_result_var_b202);
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
char* __exception_result_var_b203;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result218__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1858),__exception_result_var_b203=((char*)(right_value163=xsprintf("%ld",self))), come_pop_stackframe(), __exception_result_var_b203);
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
char* __exception_result_var_b204;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    __result219__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1863),__exception_result_var_b204=((char*)(right_value164=xsprintf("%f",self))), come_pop_stackframe(), __exception_result_var_b204);
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
char* __exception_result_var_b205;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result220__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1868),__exception_result_var_b205=((char*)(right_value165=xsprintf("%lf",self))), come_pop_stackframe(), __exception_result_var_b205);
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
_Bool _if_conditional193;
void* right_value166;
char* __exception_result_var_b206;
char* __result221__;
void* right_value167;
char* __exception_result_var_b207;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
    if(_if_conditional193=self==((void*)0),    _if_conditional193) {
        __result221__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1874),__exception_result_var_b206=((char*)(right_value166=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b206);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
        return __result221__;
    }
    __result222__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1876),__exception_result_var_b207=((char*)(right_value167=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b207);
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
_Bool _if_conditional194;
void* right_value168;
char* __exception_result_var_b208;
char* __result223__;
void* right_value169;
char* __exception_result_var_b209;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    if(_if_conditional194=self==((void*)0),    _if_conditional194) {
        __result223__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1882),__exception_result_var_b208=((char*)(right_value168=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b208);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        return __result223__;
    }
    __result224__ = __result_obj__ = (come_push_stackframe("libcomelang2.c", 1884),__exception_result_var_b209=((char*)(right_value169=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b209);
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
_Bool _if_conditional195;
int __result225__;
_Bool _if_conditional196;
int __result226__;
_Bool _if_conditional197;
int __result227__;
int __result228__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional195=!left&&right,    _if_conditional195) {
        __result225__ = -1;
        return __result225__;
    }
    else {
        if(_if_conditional196=left&&right,        _if_conditional196) {
            __result226__ = 0;
            return __result226__;
        }
        else {
            if(_if_conditional197=!left&&!right,            _if_conditional197) {
                __result227__ = 0;
                return __result227__;
            }
            else {
                __result228__ = 1;
                return __result228__;
            }
        }
    }
    __result229__ = 0;
    return __result229__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
int __result230__;
_Bool _if_conditional199;
int __result231__;
int __result232__;
int __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional198=left<right,    _if_conditional198) {
        __result230__ = -1;
        return __result230__;
    }
    else {
        if(_if_conditional199=left>right,        _if_conditional199) {
            __result231__ = 1;
            return __result231__;
        }
        else {
            __result232__ = 0;
            return __result232__;
        }
    }
    __result233__ = 0;
    return __result233__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
int __result234__;
_Bool _if_conditional201;
int __result235__;
int __result236__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional200=left<right,    _if_conditional200) {
        __result234__ = -1;
        return __result234__;
    }
    else {
        if(_if_conditional201=left>right,        _if_conditional201) {
            __result235__ = 1;
            return __result235__;
        }
        else {
            __result236__ = 0;
            return __result236__;
        }
    }
    __result237__ = 0;
    return __result237__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
int __result238__;
_Bool _if_conditional203;
int __result239__;
int __result240__;
int __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional202=left<right,    _if_conditional202) {
        __result238__ = -1;
        return __result238__;
    }
    else {
        if(_if_conditional203=left>right,        _if_conditional203) {
            __result239__ = 1;
            return __result239__;
        }
        else {
            __result240__ = 0;
            return __result240__;
        }
    }
    __result241__ = 0;
    return __result241__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
int __result242__;
_Bool _if_conditional205;
int __result243__;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional204=left<right,    _if_conditional204) {
        __result242__ = -1;
        return __result242__;
    }
    else {
        if(_if_conditional205=left>right,        _if_conditional205) {
            __result243__ = 1;
            return __result243__;
        }
        else {
            __result244__ = 0;
            return __result244__;
        }
    }
    __result245__ = 0;
    return __result245__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
int __result246__;
_Bool _if_conditional207;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional206=left<right,    _if_conditional206) {
        __result246__ = -1;
        return __result246__;
    }
    else {
        if(_if_conditional207=left>right,        _if_conditional207) {
            __result247__ = 1;
            return __result247__;
        }
        else {
            __result248__ = 0;
            return __result248__;
        }
    }
    __result249__ = 0;
    return __result249__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
int __result250__;
_Bool _if_conditional209;
int __result251__;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional208=left<right,    _if_conditional208) {
        __result250__ = -1;
        return __result250__;
    }
    else {
        if(_if_conditional209=left>right,        _if_conditional209) {
            __result251__ = 1;
            return __result251__;
        }
        else {
            __result252__ = 0;
            return __result252__;
        }
    }
    __result253__ = 0;
    return __result253__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
int __result254__;
_Bool _if_conditional211;
int __result255__;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional210=left<right,    _if_conditional210) {
        __result254__ = -1;
        return __result254__;
    }
    else {
        if(_if_conditional211=left>right,        _if_conditional211) {
            __result255__ = 1;
            return __result255__;
        }
        else {
            __result256__ = 0;
            return __result256__;
        }
    }
    __result257__ = 0;
    return __result257__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
int __result258__;
_Bool _if_conditional213;
int __result259__;
_Bool _if_conditional214;
int __result260__;
int __exception_result_var_b210;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional212=left==((void*)0)&&right==((void*)0),    _if_conditional212) {
        __result258__ = 0;
        return __result258__;
    }
    else {
        if(_if_conditional213=left==((void*)0),        _if_conditional213) {
            __result259__ = -1;
            return __result259__;
        }
        else {
            if(_if_conditional214=right==((void*)0),            _if_conditional214) {
                __result260__ = 1;
                return __result260__;
            }
        }
    }
    __result261__ = (come_push_stackframe("libcomelang2.c", 2025),__exception_result_var_b210=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b210);
    return __result261__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
int __result262__;
_Bool _if_conditional216;
int __result263__;
_Bool _if_conditional217;
int __result264__;
int __exception_result_var_b211;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional215=left==((void*)0)&&right==((void*)0),    _if_conditional215) {
        __result262__ = 0;
        return __result262__;
    }
    else {
        if(_if_conditional216=left==((void*)0),        _if_conditional216) {
            __result263__ = -1;
            return __result263__;
        }
        else {
            if(_if_conditional217=right==((void*)0),            _if_conditional217) {
                __result264__ = 1;
                return __result264__;
            }
        }
    }
    __result265__ = (come_push_stackframe("libcomelang2.c", 2040),__exception_result_var_b211=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b211);
    return __result265__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
void* right_value170;
char* __exception_result_var_b212;
void* right_value171;
void* right_value172;
struct optional$2charphbool* __result267__;
void* right_value173;
void* right_value174;
struct buffer* __exception_result_var_b213;
struct buffer* buf_137;
_Bool _while_condtional9;
long int __exception_result_var_b214;
int size_139;
struct buffer* __exception_result_var_b215;
_Bool _if_conditional220;
void* right_value175;
char* __exception_result_var_b216;
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
memset(&buf_137, 0, sizeof(struct buffer*));
memset(&size_139, 0, sizeof(int));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
    if(_if_conditional218=f==((void*)0),    _if_conditional218) {
        __result267__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2049), ((struct optional$2charphbool*)(right_value172=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value171=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2049, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2049),__exception_result_var_b212=((char*)(right_value170=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b212)),(_Bool)0))));
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
    buf_137=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2051),__exception_result_var_b213=((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2051, "struct buffer"))), "libcomelang2.c", 2051)))))), come_pop_stackframe(), __exception_result_var_b213));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    while(_while_condtional9=1,    _while_condtional9) {
        char buf2_138[8192];
        memset(&buf2_138, 0, sizeof(char)        *(8192)        );
        size_139=(come_push_stackframe("libcomelang2.c", 2056),__exception_result_var_b214=fread(buf2_138,1,8192,f), come_pop_stackframe(), __exception_result_var_b214);
        (come_push_stackframe("libcomelang2.c", 2058),__exception_result_var_b215=buffer_append(((struct buffer*)come_null_check(buf_137, "libcomelang2.c", 2058)),buf2_138,size_139), come_pop_stackframe(), __exception_result_var_b215);
        if(_if_conditional220=size_139<8192,        _if_conditional220) {
            break;
        }
    }
    __result268__ = __result_obj__ = ((struct optional$2charphbool*)(right_value177=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value176=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2065, "struct optional$2charphbool")))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2065),__exception_result_var_b216=((char*)(right_value175=buffer_to_string(((struct buffer*)come_null_check(buf_137, "libcomelang2.c", 2065))))), come_pop_stackframe(), __exception_result_var_b216)),(_Bool)1)));
    if(buf_137 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_137, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    if(buf_137 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_137, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj19;
struct optional$2charphbool* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj19=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 40))->v1;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 40))->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional219=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1!=((void*)0),                _if_conditional219) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
void* right_value178;
void* right_value179;
struct optional$2intbool* __result269__;
long int __exception_result_var_b217;
long int __exception_result_var_b218;
void* right_value180;
void* right_value181;
struct optional$2intbool* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
    if(_if_conditional221=f==((void*)0)||str==((void*)0),    _if_conditional221) {
        __result269__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2071), ((struct optional$2intbool*)(right_value179=optional$2intbool_initialize(((struct optional$2intbool*)(right_value178=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2071, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value179;
        __freed_obj__ = 0;
        return __result269__;
    }
    __result270__ = __result_obj__ = ((struct optional$2intbool*)(right_value181=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value180=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2074, "struct optional$2intbool")))),(come_push_stackframe("libcomelang2.c", 2074),__exception_result_var_b218=fwrite(str,(come_push_stackframe("libcomelang2.c", 2074),__exception_result_var_b217=strlen(str), come_pop_stackframe(), __exception_result_var_b217),1,f), come_pop_stackframe(), __exception_result_var_b218),(_Bool)1)));
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
_Bool _if_conditional222;
void* right_value182;
void* right_value183;
struct optional$2intbool* __result271__;
int __exception_result_var_b219;
int result_140;
_Bool _if_conditional223;
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
memset(&result_140, 0, sizeof(int));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    if(_if_conditional222=f==((void*)0),    _if_conditional222) {
        __result271__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2080), ((struct optional$2intbool*)(right_value183=optional$2intbool_initialize(((struct optional$2intbool*)(right_value182=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2080, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value182;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value183;
        __freed_obj__ = 0;
        return __result271__;
    }
    result_140=(come_push_stackframe("libcomelang2.c", 2083),__exception_result_var_b219=fclose(f), come_pop_stackframe(), __exception_result_var_b219);
    if(_if_conditional223=result_140<0,    _if_conditional223) {
        __result272__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2086), ((struct optional$2intbool*)(right_value185=optional$2intbool_initialize(((struct optional$2intbool*)(right_value184=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2086, "struct optional$2intbool"))),result_140,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value184;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value185;
        __freed_obj__ = 0;
        return __result272__;
    }
    __result273__ = __result_obj__ = ((struct optional$2intbool*)(right_value187=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value186=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2089, "struct optional$2intbool")))),result_140,(_Bool)1)));
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
_Bool _if_conditional224;
void* right_value188;
void* right_value189;
struct optional$2_IO_FILEpbool* __result275__;
va_list args_142;
int __exception_result_var_b220;
int __exception_result_var_b221;
int result_143;
_Bool _if_conditional225;
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
memset(&args_142, 0, sizeof(va_list));
memset(&result_143, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    if(_if_conditional224=f==((void*)0)||msg==((void*)0),    _if_conditional224) {
        __result275__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2095), ((struct optional$2_IO_FILEpbool*)(right_value189=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value188=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2095, "struct optional$2_IO_FILEpbool"))),f,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value189;
        __freed_obj__ = 0;
        return __result275__;
    }
    char msg2_141[1024*2*2*2];
    memset(&msg2_141, 0, sizeof(char)    *(1024*2*2*2)    );
    (come_push_stackframe("libcomelang2.c", 2100),__builtin_va_start(args_142,msg),come_pop_stackframe());
    (come_push_stackframe("libcomelang2.c", 2101),__exception_result_var_b220=vsnprintf(msg2_141,1024*2*2*2,msg,args_142), come_pop_stackframe(), __exception_result_var_b220);
    (come_push_stackframe("libcomelang2.c", 2102),__builtin_va_end(args_142),come_pop_stackframe());
    result_143=(come_push_stackframe("libcomelang2.c", 2104),__exception_result_var_b221=fprintf(f,"%s",msg2_141), come_pop_stackframe(), __exception_result_var_b221);
    if(_if_conditional225=result_143<0,    _if_conditional225) {
        __result276__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2107), ((struct optional$2intbool*)(right_value191=optional$2intbool_initialize(((struct optional$2intbool*)(right_value190=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2107, "struct optional$2intbool"))),result_143,(_Bool)0))));
        if((&args_142) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_142), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value190;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value191;
        __freed_obj__ = 0;
        return __result276__;
    }
    __result277__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value193=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value192=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2110, "struct optional$2_IO_FILEpbool")))),f,(_Bool)1)));
    if((&args_142) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_142), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value193;
    __freed_obj__ = 0;
    return __result277__;
    if((&args_142) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_142), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
_Bool _if_conditional226;
void* right_value194;
void* right_value195;
struct optional$2intbool* __result278__;
struct _IO_FILE* f_144;
_Bool _if_conditional227;
struct _IO_FILE* __exception_result_var_b222;
struct _IO_FILE* __exception_result_var_b223;
_Bool _if_conditional228;
void* right_value196;
void* right_value197;
struct optional$2intbool* __result279__;
long int __exception_result_var_b224;
long int __exception_result_var_b225;
int result_145;
_Bool _if_conditional229;
void* right_value198;
void* right_value199;
struct optional$2intbool* __result280__;
int __exception_result_var_b226;
int result2_146;
_Bool _if_conditional230;
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
memset(&f_144, 0, sizeof(struct _IO_FILE*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&result_145, 0, sizeof(int));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&result2_146, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    if(_if_conditional226=self==((void*)0)||file_name==((void*)0),    _if_conditional226) {
        __result278__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2116), ((struct optional$2intbool*)(right_value195=optional$2intbool_initialize(((struct optional$2intbool*)(right_value194=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2116, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value195;
        __freed_obj__ = 0;
        return __result278__;
    }
    if(_if_conditional227=append,    _if_conditional227) {
        f_144=(come_push_stackframe("libcomelang2.c", 2121),__exception_result_var_b222=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b222);
    }
    else {
        f_144=(come_push_stackframe("libcomelang2.c", 2124),__exception_result_var_b223=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b223);
    }
    if(_if_conditional228=f_144==((void*)0),    _if_conditional228) {
        __result279__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2128), ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2128, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value196;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value197;
        __freed_obj__ = 0;
        return __result279__;
    }
    result_145=(come_push_stackframe("libcomelang2.c", 2131),__exception_result_var_b225=fwrite(self,(come_push_stackframe("libcomelang2.c", 2131),__exception_result_var_b224=strlen(self), come_pop_stackframe(), __exception_result_var_b224),1,f_144), come_pop_stackframe(), __exception_result_var_b225);
    if(_if_conditional229=result_145<0,    _if_conditional229) {
        __result280__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2134), ((struct optional$2intbool*)(right_value199=optional$2intbool_initialize(((struct optional$2intbool*)(right_value198=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2134, "struct optional$2intbool"))),result_145,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199;
        __freed_obj__ = 0;
        return __result280__;
    }
    result2_146=(come_push_stackframe("libcomelang2.c", 2139),__exception_result_var_b226=fclose(f_144), come_pop_stackframe(), __exception_result_var_b226);
    if(_if_conditional230=result2_146<0,    _if_conditional230) {
        __result281__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2140), ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2140, "struct optional$2intbool"))),result2_146,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value201;
        __freed_obj__ = 0;
        return __result281__;
    }
    __result282__ = __result_obj__ = ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2143, "struct optional$2intbool")))),result_145,(_Bool)1)));
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
_Bool _if_conditional231;
void* right_value204;
void* right_value205;
struct optional$2intbool* __result283__;
struct _IO_FILE* f_147;
_Bool _if_conditional232;
struct _IO_FILE* __exception_result_var_b227;
struct _IO_FILE* __exception_result_var_b228;
_Bool _if_conditional233;
void* right_value206;
void* right_value207;
struct optional$2intbool* __result284__;
long int __exception_result_var_b229;
long int __exception_result_var_b230;
int result_148;
_Bool _if_conditional234;
void* right_value208;
void* right_value209;
struct optional$2intbool* __result285__;
int __exception_result_var_b231;
int result2_149;
_Bool _if_conditional235;
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
memset(&f_147, 0, sizeof(struct _IO_FILE*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&result_148, 0, sizeof(int));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&result2_149, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
    if(_if_conditional231=self==((void*)0)||file_name==((void*)0),    _if_conditional231) {
        __result283__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2149), ((struct optional$2intbool*)(right_value205=optional$2intbool_initialize(((struct optional$2intbool*)(right_value204=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2149, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value205;
        __freed_obj__ = 0;
        return __result283__;
    }
    if(_if_conditional232=append,    _if_conditional232) {
        f_147=(come_push_stackframe("libcomelang2.c", 2154),__exception_result_var_b227=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b227);
    }
    else {
        f_147=(come_push_stackframe("libcomelang2.c", 2157),__exception_result_var_b228=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b228);
    }
    if(_if_conditional233=f_147==((void*)0),    _if_conditional233) {
        __result284__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2161), ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2161, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value207;
        __freed_obj__ = 0;
        return __result284__;
    }
    result_148=(come_push_stackframe("libcomelang2.c", 2164),__exception_result_var_b230=fwrite(self,(come_push_stackframe("libcomelang2.c", 2164),__exception_result_var_b229=strlen(self), come_pop_stackframe(), __exception_result_var_b229),1,f_147), come_pop_stackframe(), __exception_result_var_b230);
    if(_if_conditional234=result_148<0,    _if_conditional234) {
        __result285__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2167), ((struct optional$2intbool*)(right_value209=optional$2intbool_initialize(((struct optional$2intbool*)(right_value208=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2167, "struct optional$2intbool"))),result_148,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value209;
        __freed_obj__ = 0;
        return __result285__;
    }
    result2_149=(come_push_stackframe("libcomelang2.c", 2172),__exception_result_var_b231=fclose(f_147), come_pop_stackframe(), __exception_result_var_b231);
    if(_if_conditional235=result2_149<0,    _if_conditional235) {
        __result286__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2173), ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2173, "struct optional$2intbool"))),result2_149,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value211;
        __freed_obj__ = 0;
        return __result286__;
    }
    __result287__ = __result_obj__ = ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2176, "struct optional$2intbool")))),result_148,(_Bool)1)));
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
_Bool _if_conditional236;
void* right_value214;
char* __exception_result_var_b232;
void* right_value215;
void* right_value216;
struct optional$2charphbool* __result288__;
struct _IO_FILE* __exception_result_var_b233;
struct _IO_FILE* f_150;
_Bool _if_conditional237;
void* right_value217;
char* __exception_result_var_b234;
void* right_value218;
void* right_value219;
struct optional$2charphbool* __result289__;
void* right_value220;
void* right_value221;
struct buffer* __exception_result_var_b235;
struct buffer* buf_151;
_Bool _while_condtional10;
long int __exception_result_var_b236;
int size_153;
struct buffer* __exception_result_var_b237;
_Bool _if_conditional238;
void* right_value222;
char* __exception_result_var_b238;
char* result_154;
int __exception_result_var_b239;
int result2_155;
_Bool _if_conditional239;
void* right_value223;
char* __exception_result_var_b240;
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
memset(&f_150, 0, sizeof(struct _IO_FILE*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&buf_151, 0, sizeof(struct buffer*));
memset(&size_153, 0, sizeof(int));
memset(&right_value222, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result2_155, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    if(_if_conditional236=file_name==((void*)0),    _if_conditional236) {
        __result288__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2182), ((struct optional$2charphbool*)(right_value216=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value215=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2182, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2182),__exception_result_var_b232=((char*)(right_value214=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b232)),(_Bool)0))));
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
    f_150=(come_push_stackframe("libcomelang2.c", 2185),__exception_result_var_b233=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b233);
    if(_if_conditional237=f_150==((void*)0),    _if_conditional237) {
        __result289__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2188), ((struct optional$2charphbool*)(right_value219=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value218=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2188, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2188),__exception_result_var_b234=((char*)(right_value217=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b234)),(_Bool)0))));
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
    buf_151=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2191),__exception_result_var_b235=((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2191, "struct buffer"))), "libcomelang2.c", 2191)))))), come_pop_stackframe(), __exception_result_var_b235));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value221;
    __freed_obj__ = 0;
    while(_while_condtional10=1,    _while_condtional10) {
        char buf2_152[8192];
        memset(&buf2_152, 0, sizeof(char)        *(8192)        );
        size_153=(come_push_stackframe("libcomelang2.c", 2196),__exception_result_var_b236=fread(buf2_152,1,8192,f_150), come_pop_stackframe(), __exception_result_var_b236);
        (come_push_stackframe("libcomelang2.c", 2198),__exception_result_var_b237=buffer_append(((struct buffer*)come_null_check(buf_151, "libcomelang2.c", 2198)),buf2_152,size_153), come_pop_stackframe(), __exception_result_var_b237);
        if(_if_conditional238=size_153<8192,        _if_conditional238) {
            break;
        }
    }
    result_154=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2205),__exception_result_var_b238=((char*)(right_value222=buffer_to_string(((struct buffer*)come_null_check(buf_151, "libcomelang2.c", 2205))))), come_pop_stackframe(), __exception_result_var_b238));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value222;
    __freed_obj__ = 0;
    result2_155=(come_push_stackframe("libcomelang2.c", 2209),__exception_result_var_b239=fclose(f_150), come_pop_stackframe(), __exception_result_var_b239);
    if(_if_conditional239=result2_155<0,    _if_conditional239) {
        __result290__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2210), ((struct optional$2charphbool*)(right_value225=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value224=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2210, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2210),__exception_result_var_b240=((char*)(right_value223=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b240)),(_Bool)0))));
        if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
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
    __result291__ = __result_obj__ = ((struct optional$2charphbool*)(right_value227=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value226=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2213, "struct optional$2charphbool")))),(char*)come_increment_ref_count(result_154),(_Bool)1)));
    if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value226;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value227;
    __freed_obj__ = 0;
    return __result291__;
    if(buf_151 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_154 && !__freed_obj__) { result_154 = come_decrement_ref_count(result_154, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
void* right_value228;
char* __exception_result_var_b241;
void* right_value229;
void* right_value230;
struct optional$2charphbool* __result292__;
struct _IO_FILE* __exception_result_var_b242;
struct _IO_FILE* f_156;
_Bool _if_conditional241;
void* right_value231;
char* __exception_result_var_b243;
void* right_value232;
void* right_value233;
struct optional$2charphbool* __result293__;
void* right_value234;
void* right_value235;
struct buffer* __exception_result_var_b244;
struct buffer* buf_157;
_Bool _while_condtional11;
long int __exception_result_var_b245;
int size_159;
struct buffer* __exception_result_var_b246;
_Bool _if_conditional242;
void* right_value236;
char* __exception_result_var_b247;
char* result_160;
int __exception_result_var_b248;
int result2_161;
_Bool _if_conditional243;
void* right_value237;
char* __exception_result_var_b249;
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
memset(&f_156, 0, sizeof(struct _IO_FILE*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&buf_157, 0, sizeof(struct buffer*));
memset(&size_159, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&result_160, 0, sizeof(char*));
memset(&result2_161, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
    if(_if_conditional240=file_name==((void*)0),    _if_conditional240) {
        __result292__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2219), ((struct optional$2charphbool*)(right_value230=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value229=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2219, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2219),__exception_result_var_b241=((char*)(right_value228=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b241)),(_Bool)0))));
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
    f_156=(come_push_stackframe("libcomelang2.c", 2222),__exception_result_var_b242=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b242);
    if(_if_conditional241=f_156==((void*)0),    _if_conditional241) {
        __result293__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2225), ((struct optional$2charphbool*)(right_value233=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value232=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2225, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2225),__exception_result_var_b243=((char*)(right_value231=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b243)),(_Bool)0))));
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
    buf_157=(struct buffer*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2228),__exception_result_var_b244=((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2228, "struct buffer"))), "libcomelang2.c", 2228)))))), come_pop_stackframe(), __exception_result_var_b244));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value235;
    __freed_obj__ = 0;
    while(_while_condtional11=1,    _while_condtional11) {
        char buf2_158[8192];
        memset(&buf2_158, 0, sizeof(char)        *(8192)        );
        size_159=(come_push_stackframe("libcomelang2.c", 2233),__exception_result_var_b245=fread(buf2_158,1,8192,f_156), come_pop_stackframe(), __exception_result_var_b245);
        (come_push_stackframe("libcomelang2.c", 2235),__exception_result_var_b246=buffer_append(((struct buffer*)come_null_check(buf_157, "libcomelang2.c", 2235)),buf2_158,size_159), come_pop_stackframe(), __exception_result_var_b246);
        if(_if_conditional242=size_159<8192,        _if_conditional242) {
            break;
        }
    }
    result_160=(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2242),__exception_result_var_b247=((char*)(right_value236=buffer_to_string(((struct buffer*)come_null_check(buf_157, "libcomelang2.c", 2242))))), come_pop_stackframe(), __exception_result_var_b247));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value236;
    __freed_obj__ = 0;
    result2_161=(come_push_stackframe("libcomelang2.c", 2246),__exception_result_var_b248=fclose(f_156), come_pop_stackframe(), __exception_result_var_b248);
    if(_if_conditional243=result2_161<0,    _if_conditional243) {
        __result294__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2247), ((struct optional$2charphbool*)(right_value239=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value238=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2247, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2247),__exception_result_var_b249=((char*)(right_value237=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b249)),(_Bool)0))));
        if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, (void*)0, (void*)0, 0, 0, 0); }
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
    __result295__ = __result_obj__ = ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2250, "struct optional$2charphbool")))),(char*)come_increment_ref_count(result_160),(_Bool)1)));
    if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value240;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value241;
    __freed_obj__ = 0;
    return __result295__;
    if(buf_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
void* right_value243;
struct list$1charph* __exception_result_var_b250;
struct list$1charph* result_162;
_Bool _if_conditional244;
void* right_value244;
void* right_value245;
struct optional$2list$1charphphbool* __result297__;
_Bool _while_condtional12;
char* __exception_result_var_b251;
_Bool _if_conditional246;
void* right_value246;
char* __exception_result_var_b252;
struct list$1charph* __exception_result_var_b253;
void* right_value247;
void* right_value248;
struct optional$2list$1charphphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct list$1charph*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    result_162=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2255),__exception_result_var_b250=((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2255, "struct list$1charph"))), "libcomelang2.c", 2255)))))), come_pop_stackframe(), __exception_result_var_b250));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value243;
    __freed_obj__ = 0;
    if(_if_conditional244=f==((void*)0),    _if_conditional244) {
        __result297__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2258), ((struct optional$2list$1charphphbool*)(right_value245=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value244=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2258, "struct optional$2list$1charphphbool"))),(struct list$1charph*)come_increment_ref_count(result_162),(_Bool)0))));
        if(result_162 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = 0;
        return __result297__;
    }
    while(_while_condtional12=1,    _while_condtional12) {
        char buf_163[8192];
        memset(&buf_163, 0, sizeof(char)        *(8192)        );
        if(_if_conditional246=(come_push_stackframe("libcomelang2.c", 2264),__exception_result_var_b251=fgets(buf_163,8192,f), come_pop_stackframe(), __exception_result_var_b251)==((void*)0),        _if_conditional246) {
            break;
        }
        (come_push_stackframe("libcomelang2.c", 2268),__exception_result_var_b253=list$1charph_push_back(((struct list$1charph*)come_null_check(result_162, "libcomelang2.c", 2268)),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2268),__exception_result_var_b252=((char*)(right_value246=__builtin_string(buf_163))), come_pop_stackframe(), __exception_result_var_b252))), come_pop_stackframe(), __exception_result_var_b253);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = 0;
    }
    __result298__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value248=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value247=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2271, "struct optional$2list$1charphphbool")))),(struct list$1charph*)come_increment_ref_count(result_162),(_Bool)1)));
    if(result_162 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value247;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value248;
    __freed_obj__ = 0;
    return __result298__;
    if(result_162 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj20=((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 40))->v1;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 40))->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
_Bool _if_conditional245;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional245=self!=((void*)0)&&((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1!=((void*)0),                _if_conditional245) {
                    if(((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional247;
void* right_value249;
void* right_value250;
struct optional$2intbool* __result299__;
struct _IO_FILE* __exception_result_var_b254;
struct _IO_FILE* f_164;
_Bool _if_conditional248;
_Bool _if_conditional249;
int __exception_result_var_b255;
void* right_value251;
void* right_value252;
struct optional$2intbool* __result300__;
int __exception_result_var_b256;
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
memset(&f_164, 0, sizeof(struct _IO_FILE*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
    if(_if_conditional247=path==((void*)0)||mode==((void*)0),    _if_conditional247) {
        __result299__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2277), ((struct optional$2intbool*)(right_value250=optional$2intbool_initialize(((struct optional$2intbool*)(right_value249=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2277, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value250;
        __freed_obj__ = 0;
        return __result299__;
    }
    f_164=(come_push_stackframe("libcomelang2.c", 2279),__exception_result_var_b254=fopen(path,mode), come_pop_stackframe(), __exception_result_var_b254);
    if(_if_conditional248=f_164,    _if_conditional248) {
        block(parent,f_164);
        if(_if_conditional249=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2283))->__method_block_result_kind__!=0,        _if_conditional249) {
            (come_push_stackframe("libcomelang2.c", 2284),__exception_result_var_b255=fclose(f_164), come_pop_stackframe(), __exception_result_var_b255);
            __result300__ = __result_obj__ = ((struct optional$2intbool*)(right_value252=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value251=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2285, "struct optional$2intbool")))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value251;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value252;
            __freed_obj__ = 0;
            return __result300__;
        }
        (come_push_stackframe("libcomelang2.c", 2288),__exception_result_var_b256=fclose(f_164), come_pop_stackframe(), __exception_result_var_b256);
        __result301__ = __result_obj__ = ((struct optional$2intbool*)(right_value254=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value253=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2290, "struct optional$2intbool")))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value254;
        __freed_obj__ = 0;
        return __result301__;
    }
    __result302__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2293), ((struct optional$2intbool*)(right_value256=optional$2intbool_initialize(((struct optional$2intbool*)(right_value255=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2293, "struct optional$2intbool"))),-1,(_Bool)0))));
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
_Bool _if_conditional250;
void* right_value257;
void* right_value258;
struct optional$2charphbool* __result303__;
int __exception_result_var_b257;
void* right_value259;
char* __exception_result_var_b258;
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
    if(_if_conditional250=self==((void*)0),    _if_conditional250) {
        __result303__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2302), ((struct optional$2intbool*)(right_value258=optional$2intbool_initialize(((struct optional$2intbool*)(right_value257=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2302, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value258;
        __freed_obj__ = 0;
        return __result303__;
    }
    (come_push_stackframe("libcomelang2.c", 2304),__exception_result_var_b257=puts(self), come_pop_stackframe(), __exception_result_var_b257);
    __result304__ = __result_obj__ = ((struct optional$2charphbool*)(right_value261=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value260=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2306, "struct optional$2charphbool")))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2306),__exception_result_var_b258=((char*)(right_value259=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b258)),(_Bool)1)));
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
_Bool _if_conditional251;
void* right_value262;
void* right_value263;
struct optional$2charphbool* __result305__;
int __exception_result_var_b259;
void* right_value264;
char* __exception_result_var_b260;
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
    if(_if_conditional251=self==((void*)0),    _if_conditional251) {
        __result305__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2312), ((struct optional$2intbool*)(right_value263=optional$2intbool_initialize(((struct optional$2intbool*)(right_value262=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2312, "struct optional$2intbool"))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value263;
        __freed_obj__ = 0;
        return __result305__;
    }
    (come_push_stackframe("libcomelang2.c", 2314),__exception_result_var_b259=printf("%s",self), come_pop_stackframe(), __exception_result_var_b259);
    __result306__ = __result_obj__ = ((struct optional$2charphbool*)(right_value266=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value265=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2316, "struct optional$2charphbool")))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2316),__exception_result_var_b260=((char*)(right_value264=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b260)),(_Bool)1)));
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
_Bool _if_conditional252;
void* right_value267;
char* __exception_result_var_b261;
void* right_value268;
void* right_value269;
struct optional$2charphbool* __result307__;
char* msg2_165;
va_list args_166;
int __exception_result_var_b262;
int __exception_result_var_b263;
void* right_value270;
char* __exception_result_var_b264;
void* right_value271;
void* right_value272;
struct optional$2charphbool* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&msg2_165, 0, sizeof(char*));
memset(&args_166, 0, sizeof(va_list));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    if(_if_conditional252=self==((void*)0),    _if_conditional252) {
        __result307__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2323), ((struct optional$2charphbool*)(right_value269=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value268=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2323, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2323),__exception_result_var_b261=((char*)(right_value267=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b261)),(_Bool)0))));
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
    (come_push_stackframe("libcomelang2.c", 2328),__builtin_va_start(args_166,self),come_pop_stackframe());
    (come_push_stackframe("libcomelang2.c", 2329),__exception_result_var_b262=vasprintf(&msg2_165,self,args_166), come_pop_stackframe(), __exception_result_var_b262);
    (come_push_stackframe("libcomelang2.c", 2330),__builtin_va_end(args_166),come_pop_stackframe());
    (come_push_stackframe("libcomelang2.c", 2332),__exception_result_var_b263=printf("%s",msg2_165), come_pop_stackframe(), __exception_result_var_b263);
    (come_push_stackframe("libcomelang2.c", 2334),free(msg2_165),come_pop_stackframe());
    __result308__ = __result_obj__ = ((struct optional$2charphbool*)(right_value272=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value271=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2336, "struct optional$2charphbool")))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2336),__exception_result_var_b264=((char*)(right_value270=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b264)),(_Bool)1)));
    if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
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
    if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
void* right_value273;
char* __exception_result_var_b265;
void* right_value274;
void* right_value275;
struct optional$2charphbool* __result309__;
char* msg2_167;
va_list args_168;
int __exception_result_var_b266;
int __exception_result_var_b267;
void* right_value276;
char* __exception_result_var_b268;
void* right_value277;
void* right_value278;
struct optional$2charphbool* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&msg2_167, 0, sizeof(char*));
memset(&args_168, 0, sizeof(va_list));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    if(_if_conditional253=self==((void*)0),    _if_conditional253) {
        __result309__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2342), ((struct optional$2charphbool*)(right_value275=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value274=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2342, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2342),__exception_result_var_b265=((char*)(right_value273=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b265)),(_Bool)0))));
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
    (come_push_stackframe("libcomelang2.c", 2347),__builtin_va_start(args_168,self),come_pop_stackframe());
    (come_push_stackframe("libcomelang2.c", 2348),__exception_result_var_b266=vasprintf(&msg2_167,self,args_168), come_pop_stackframe(), __exception_result_var_b266);
    (come_push_stackframe("libcomelang2.c", 2349),__builtin_va_end(args_168),come_pop_stackframe());
    (come_push_stackframe("libcomelang2.c", 2351),__exception_result_var_b267=printf("%s",msg2_167), come_pop_stackframe(), __exception_result_var_b267);
    (come_push_stackframe("libcomelang2.c", 2353),free(msg2_167),come_pop_stackframe());
    __result310__ = __result_obj__ = ((struct optional$2charphbool*)(right_value278=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value277=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2355, "struct optional$2charphbool")))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2355),__exception_result_var_b268=((char*)(right_value276=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b268)),(_Bool)1)));
    if((&args_168) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_168), (void*)0, (void*)0, 1, 0, 0, 0); }
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
    if((&args_168) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_168), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b269;
int __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("libcomelang2.c", 2360),__exception_result_var_b269=printf(msg,self), come_pop_stackframe(), __exception_result_var_b269);
    __result311__ = self;
    return __result311__;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
void* right_value279;
char* __exception_result_var_b270;
void* right_value280;
void* right_value281;
struct optional$2charphbool* __result312__;
int __exception_result_var_b271;
void* right_value282;
char* __exception_result_var_b272;
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
    if(_if_conditional254=self==((void*)0),    _if_conditional254) {
        __result312__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2368), ((struct optional$2charphbool*)(right_value281=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value280=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2368, "struct optional$2charphbool"))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2368),__exception_result_var_b270=((char*)(right_value279=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b270)),(_Bool)0))));
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
    (come_push_stackframe("libcomelang2.c", 2370),__exception_result_var_b271=puts(self), come_pop_stackframe(), __exception_result_var_b271);
    __result313__ = __result_obj__ = ((struct optional$2charphbool*)(right_value284=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value283=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2372, "struct optional$2charphbool")))),(char*)come_increment_ref_count((come_push_stackframe("libcomelang2.c", 2372),__exception_result_var_b272=((char*)(right_value282=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b272)),(_Bool)1)));
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
int i_169;
_Bool _for_condtionalA12;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_169, 0, sizeof(int));
    for(
    i_169=0 ,    0;    _for_condtionalA12=    i_169<self ,    _for_condtionalA12;    i_169++ ,    0    ){
        block(parent,i_169);
        if(_if_conditional255=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2383))->__method_block_result_kind__!=0,        _if_conditional255) {
            return;
        }
    }
}

