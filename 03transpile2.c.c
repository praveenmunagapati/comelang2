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
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool
{
    struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1;
    _Bool v2;
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
struct optional$2sNodephbool
{
    struct sNode* v1;
    _Bool v2;
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

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

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

struct optional$2charphbool* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

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

struct optional$2sNodephbool* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct optional$2sNodephbool* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct optional$2sNodephbool* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct optional$2sNodephbool* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct optional$2sNodephbool* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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

struct optional$2sNodephbool* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

void come_init_v3();

void come_final_v3();

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

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
    perror(msg);
    stackframe();
    exit(4);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2007))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2017))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2037))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
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
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
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
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
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
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
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
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
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

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
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
void* right_value13;
void* right_value14;
struct optional$2charphbool* __result14__;
void* right_value15;
struct CVALUE* come_value_7;
void* right_value16;
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
_Bool _if_conditional47;
void* right_value17;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
_Bool _for_condtionalA1;
void* right_value18;
char* param_type_str_22;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value19;
void* right_value20;
void* right_value21;
struct optional$2charphbool* __result24__;
_Bool _if_conditional55;
int i_23;
_Bool _for_condtionalA2;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value22;
void* right_value23;
void* right_value24;
struct optional$2charphbool* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
memset(&right_value18, 0, sizeof(void*));
memset(&param_type_str_22, 0, sizeof(char*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    class_name_6=type->mClass->mName;
    if(_if_conditional5=type->mAlignas,    _if_conditional5) {
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            printf("_Alignas error\n");
            __result14__ = __result_obj__ = ((struct optional$2charphbool*)(right_value14=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value13=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 22))),(char*)come_increment_ref_count(((char*)(right_value12=__builtin_string("")))),(_Bool)0)));
            if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value13;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value14;
            __freed_obj__ = 0;
            return __result14__;
        }
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value15=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value15;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        buffer_append_str(buf_5,((char*)(right_value16=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value16;
        __freed_obj__ = 0;
        if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional26=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional26) {
        buffer_append_str(buf_5,"static ");
    }
    if(_if_conditional27=type->mConstant,    _if_conditional27) {
        buffer_append_str(buf_5,"const ");
    }
    if(_if_conditional28=type->mUnsigned,    _if_conditional28) {
        buffer_append_str(buf_5,"unsigned ");
    }
    if(_if_conditional29=type->mShort,    _if_conditional29) {
        buffer_append_str(buf_5,"short ");
    }
    if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional30) {
        buffer_append_str(buf_5,"va_list");
    }
    else {
        if(_if_conditional31=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional31) {
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            if(_if_conditional32=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional32) {
                if(_if_conditional33=in_header,                _if_conditional33) {
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    buffer_append_str(buf_5,"va_list");
                }
            }
            else {
                if(_if_conditional34=type->mClass->mStruct,                _if_conditional34) {
                    buffer_append_str(buf_5,"struct ");
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    if(_if_conditional35=type->mClass->mUnion,                    _if_conditional35) {
                        buffer_append_str(buf_5,"union ");
                        buffer_append_str(buf_5,class_name_6);
                    }
                    else {
                        if(_if_conditional36=type->mClass->mEnum,                        _if_conditional36) {
                            buffer_append_str(buf_5,"enum ");
                            buffer_append_str(buf_5,class_name_6);
                        }
                        else {
                            if(_if_conditional37=type->mLongLong,                            _if_conditional37) {
                                if(_if_conditional38=charp_operator_equals(class_name_6,"int"),                                _if_conditional38) {
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    if(_if_conditional39=charp_operator_equals(class_name_6,"long"),                                    _if_conditional39) {
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                if(_if_conditional40=type->mLong,                                _if_conditional40) {
                                    if(_if_conditional41=charp_operator_equals(class_name_6,"int"),                                    _if_conditional41) {
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        if(_if_conditional42=charp_operator_equals(class_name_6,"long"),                                        _if_conditional42) {
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            if(_if_conditional43=charp_operator_equals(class_name_6,"double"),                                            _if_conditional43) {
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional44=charp_operator_equals(class_name_6,"long"),                                    _if_conditional44) {
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        if(_if_conditional45=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional45) {
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            if(_if_conditional46=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional46) {
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                if(_if_conditional47=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional47) {
                                                    result_type_str_14=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value17=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value17;
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(buf_5,result_type_str_14);
                                                    buffer_append_str(buf_5," (*)(");
                                                    j_15=0;
                                                    for(
                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_19=list$1sTypeph_begin((o2_saved_16)) ,                                                    0;                                                    _for_condtionalA1=                                                    !list$1sTypeph_end((o2_saved_16)) ,                                                    _for_condtionalA1;                                                    it_19=list$1sTypeph_next((o2_saved_16)) ,                                                    0                                                    ){
                                                        param_type_str_22=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value18=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info)))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value18;
                                                        __freed_obj__ = 0;
                                                        buffer_append_str(buf_5,param_type_str_22);
                                                        if(_if_conditional53=j_15!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional53) {
                                                            buffer_append_str(buf_5,",");
                                                        }
                                                        j_15++;
                                                        if(param_type_str_22 && !__freed_obj__) { param_type_str_22 = come_decrement_ref_count(param_type_str_22, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    buffer_append_str(buf_5,")");
                                                    if(result_type_str_14 && !__freed_obj__) { result_type_str_14 = come_decrement_ref_count(result_type_str_14, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    if(_if_conditional54=class_name_6==((void*)0),                                                    _if_conditional54) {
                                                        err_msg(info,"class name is null");
                                                        __result24__ = __result_obj__ = ((struct optional$2charphbool*)(right_value21=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value20=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 123))),(char*)come_increment_ref_count(((char*)(right_value19=__builtin_string("")))),(_Bool)0)));
                                                        if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value19;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                                                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value20;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value21);
                                                        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value21;
                                                        __freed_obj__ = 0;
                                                        return __result24__;
                                                    }
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
    if(_if_conditional55=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional55) {
        for(
        i_23=0 ,        0;        _for_condtionalA2=        i_23<type->mPointerNum ,        _for_condtionalA2;        i_23++ ,        0        ){
            buffer_append_str(buf_5,"*");
        }
    }
    if(_if_conditional56=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional56) {
        buffer_append_str(buf_5,"*");
    }
    if(_if_conditional57=type->mRestrict,    _if_conditional57) {
        buffer_append_str(buf_5,"restrict");
    }
    __result26__ = __result_obj__ = ((struct optional$2charphbool*)(right_value24=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value23=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 142)))),(char*)come_increment_ref_count(((char*)(right_value22=buffer_to_string(buf_5)))),(_Bool)1)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value23;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value24;
    __freed_obj__ = 0;
    return __result26__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj6;
struct optional$2charphbool* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj6=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                self->v2=v2;
                __result13__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                return __result13__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional8=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional8) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional9) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional10) {
                        if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional12) {
                        if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional13) {
                        if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional14) {
                        if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional16=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional16) {
                        if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional18) {
                        if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional19=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional19) {
                        if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional21) {
                        if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional22) {
                        if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional23) {
                        if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional24) {
                        if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional25=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional25) {
                        if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional11) {
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
                            it_8=self->head;
                            while(_while_condtional1=it_8!=((void*)0),                            _while_condtional1) {
                                prev_it_9=it_8;
                                it_8=it_8->next;
                                if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional15) {
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
                            it_10=self->head;
                            while(_while_condtional2=it_10!=((void*)0),                            _while_condtional2) {
                                prev_it_11=it_10;
                                it_10=it_10->next;
                                if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional17) {
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
                            it_12=self->head;
                            while(_while_condtional3=it_12!=((void*)0),                            _while_condtional3) {
                                prev_it_13=it_12;
                                it_12=it_12->next;
                                if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional20) {
                                        if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional48=!self->v2,                                                        _if_conditional48) {
                                                            puts("Exception: at");
                                                            exception_stackframe();
                                                            puts("abort.");
                                                            exit(2);
                                                        }
                                                        __result15__ = __result_obj__ = self->v1;
                                                        return __result15__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* result_17;
struct sType* __result16__;
_Bool _if_conditional50;
struct sType* __result17__;
struct sType* result_18;
struct sType* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        if(_if_conditional49=self==((void*)0),                                                        _if_conditional49) {
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            __result16__ = __result_obj__ = result_17;
                                                            return __result16__;
                                                        }
                                                        self->it=self->head;
                                                        if(_if_conditional50=self->it,                                                        _if_conditional50) {
                                                            __result17__ = __result_obj__ = self->it->item;
                                                            return __result17__;
                                                        }
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        __result18__ = __result_obj__ = result_18;
                                                        return __result18__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result19__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result19__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct sType* result_20;
struct sType* __result20__;
_Bool _if_conditional52;
struct sType* __result21__;
struct sType* result_21;
struct sType* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        if(_if_conditional51=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional51) {
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            __result20__ = __result_obj__ = result_20;
                                                            return __result20__;
                                                        }
                                                        self->it=self->it->next;
                                                        if(_if_conditional52=self->it,                                                        _if_conditional52) {
                                                            __result21__ = __result_obj__ = self->it->item;
                                                            return __result21__;
                                                        }
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        __result22__ = __result_obj__ = result_21;
                                                        return __result22__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            __result23__ = self->len;
                                                            return __result23__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result25__ = self->len;
        return __result25__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional58;
int i_26;
_Bool _for_condtionalA3;
struct sType* gtype_30;
void* right_value27;
_Bool _if_conditional61;
_Bool _if_conditional62;
int i_31;
_Bool _for_condtionalA4;
_Bool _if_conditional63;
void* right_value28;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
memset(&gtype_30, 0, sizeof(struct sType*));
memset(&right_value27, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value25;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value26;
    __freed_obj__ = 0;
    class_name_25=type->mClass->mName;
    buffer_append_str(buf_24,class_name_25);
    if(_if_conditional58=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional58) {
        buffer_append_str(buf_24,"<");
        for(
        i_26=0 ,        0;        _for_condtionalA3=        i_26<list$1sTypeph_length(type->mGenericsTypes) ,        _for_condtionalA3;        i_26++ ,        0        ){
            gtype_30=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_26);
            buffer_append_str(buf_24,((char*)(right_value27=make_come_type_name_string(gtype_30,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value27;
            __freed_obj__ = 0;
            if(_if_conditional61=i_26!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional61) {
                buffer_append_str(buf_24,",");
            }
        }
        buffer_append_str(buf_24,">");
    }
    if(_if_conditional62=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    _if_conditional62) {
        for(
        i_31=0 ,        0;        _for_condtionalA4=        i_31<type->mPointerNum ,        _for_condtionalA4;        i_31++ ,        0        ){
            buffer_append_str(buf_24,"*");
        }
    }
    if(_if_conditional63=type->mHeap,    _if_conditional63) {
        buffer_append_str(buf_24,"%");
    }
    __result29__ = __result_obj__ = ((char*)(right_value28=buffer_to_string(buf_24)));
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value28);
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value28;
    __freed_obj__ = 0;
    return __result29__;
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional60;
struct sType* __result27__;
struct sType* default_value_29;
struct sType* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&default_value_29, 0, sizeof(struct sType*));
                if(_if_conditional59=position<0,                _if_conditional59) {
                    position+=self->len;
                }
                it_27=self->head;
                i_28=0;
                while(_while_condtional4=it_27!=((void*)0),                _while_condtional4) {
                    if(_if_conditional60=position==i_28,                    _if_conditional60) {
                        __result27__ = __result_obj__ = it_27->item;
                        return __result27__;
                    }
                    it_27=it_27->next;
                    i_28++;
                }
                memset(&default_value_29,0,sizeof(struct sType*));
                __result28__ = __result_obj__ = default_value_29;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result28__;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
    puts(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value29=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value29;
    __freed_obj__ = 0;
}

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value30;
void* right_value31;
struct buffer* buf_32;
_Bool _if_conditional64;
void* right_value32;
void* right_value33;
void* right_value34;
struct optional$2charphbool* __result30__;
_Bool _if_conditional65;
void* right_value35;
int i_33;
struct list$1sTypeph* o2_saved_34;
struct sType* it_35;
_Bool _for_condtionalA5;
void* right_value36;
_Bool _if_conditional66;
void* right_value37;
void* right_value38;
void* right_value39;
void* right_value40;
struct optional$2charphbool* __result31__;
void* right_value41;
void* right_value42;
int i_36;
struct list$1sTypeph* o2_saved_37;
struct sType* it_38;
_Bool _for_condtionalA6;
void* right_value43;
_Bool _if_conditional67;
void* right_value44;
void* right_value45;
void* right_value46;
struct optional$2charphbool* __result32__;
void* right_value47;
void* right_value48;
void* right_value49;
struct optional$2charphbool* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&buf_32, 0, sizeof(struct buffer*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&i_33, 0, sizeof(int));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_35, 0, sizeof(struct sType*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&i_36, 0, sizeof(int));
memset(&o2_saved_37, 0, sizeof(struct list$1sTypeph*));
memset(&it_38, 0, sizeof(struct sType*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
    buf_32=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value30=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value30;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value31;
    __freed_obj__ = 0;
    if(_if_conditional64=type->mResultType==((void*)0),    _if_conditional64) {
        err_msg(info,"invalid lambda type");
        __result30__ = __result_obj__ = ((struct optional$2charphbool*)(right_value34=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value33=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 191))),(char*)come_increment_ref_count(((char*)(right_value32=__builtin_string("")))),(_Bool)0)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value33;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value34;
        __freed_obj__ = 0;
        return __result30__;
    }
    if(_if_conditional65=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional65) {
        buffer_append_str(buf_32,((char*)(right_value35=xsprintf("(*%s)(",var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = 0;
        i_33=0;
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_35=list$1sTypeph_begin((o2_saved_34)) ,        0;        _for_condtionalA5=        !list$1sTypeph_end((o2_saved_34)) ,        _for_condtionalA5;        it_35=list$1sTypeph_next((o2_saved_34)) ,        0        ){
            buffer_append_str(buf_32,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value36=make_type_name_string(it_35,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value36;
            __freed_obj__ = 0;
            if(_if_conditional66=i_33!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional66) {
                buffer_append_str(buf_32,",");
            }
            i_33++;
        }
        if(o2_saved_34 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_32,")");
        __result31__ = __result_obj__ = ((struct optional$2charphbool*)(right_value40=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value39=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 210)))),(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value38=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value37=buffer_to_string(buf_32))),info))))),(_Bool)1)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value37;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value38;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value39;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value40;
        __freed_obj__ = 0;
        return __result31__;
    }
    else {
        buffer_append_str(buf_32,((char*)(right_value42=xsprintf("%s (*%s)(",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value41=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info)))),var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value41;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value42;
        __freed_obj__ = 0;
        i_36=0;
        for(
        o2_saved_37=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_38=list$1sTypeph_begin((o2_saved_37)) ,        0;        _for_condtionalA6=        !list$1sTypeph_end((o2_saved_37)) ,        _for_condtionalA6;        it_38=list$1sTypeph_next((o2_saved_37)) ,        0        ){
            buffer_append_str(buf_32,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value43=make_type_name_string(it_38,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
            if(_if_conditional67=i_36!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional67) {
                buffer_append_str(buf_32,",");
            }
            i_36++;
        }
        if(o2_saved_37 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_37, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_32,")");
        __result32__ = __result_obj__ = ((struct optional$2charphbool*)(right_value46=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value45=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 227)))),(char*)come_increment_ref_count(((char*)(right_value44=buffer_to_string(buf_32)))),(_Bool)1)));
        if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value44;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value45;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value46;
        __freed_obj__ = 0;
        return __result32__;
    }
    __result33__ = __result_obj__ = ((struct optional$2charphbool*)(right_value49=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value48=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 230)))),(char*)come_increment_ref_count(((char*)(right_value47=buffer_to_string(buf_32)))),(_Bool)1)));
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value47;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value48;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value49;
    __freed_obj__ = 0;
    return __result33__;
    if(buf_32 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value50;
void* right_value51;
struct buffer* buf_39;
_Bool _if_conditional68;
void* right_value52;
char* str_40;
_Bool _if_conditional69;
void* right_value53;
char* str_41;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value54;
void* right_value55;
void* right_value56;
struct optional$2charphbool* __result34__;
void* right_value57;
struct CVALUE* come_value_42;
void* right_value58;
char* type_str_43;
void* right_value59;
void* right_value60;
_Bool _if_conditional72;
void* right_value61;
_Bool _if_conditional73;
void* right_value62;
_Bool _if_conditional74;
void* right_value63;
char* type_str_44;
_Bool _if_conditional75;
void* right_value64;
_Bool _if_conditional76;
void* right_value65;
char* type_str_45;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list$1sNodeph* o2_saved_46;
struct sNode* it_49;
_Bool _for_condtionalA7;
_Bool _if_conditional83;
void* right_value66;
void* right_value67;
void* right_value68;
struct optional$2charphbool* __result42__;
void* right_value69;
struct CVALUE* cvalue_52;
void* right_value70;
_Bool _if_conditional84;
void* right_value71;
void* right_value72;
char* type_str_53;
_Bool _if_conditional85;
void* right_value73;
void* right_value74;
void* right_value75;
struct optional$2charphbool* __result43__;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value76;
void* right_value77;
void* right_value78;
void* right_value79;
struct optional$2charphbool* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&buf_39, 0, sizeof(struct buffer*));
memset(&right_value52, 0, sizeof(void*));
memset(&str_40, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&str_41, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&come_value_42, 0, sizeof(struct CVALUE*));
memset(&right_value58, 0, sizeof(void*));
memset(&type_str_43, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&type_str_44, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&type_str_45, 0, sizeof(char*));
memset(&o2_saved_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_49, 0, sizeof(struct sNode*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&cvalue_52, 0, sizeof(struct CVALUE*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&type_str_53, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
    buf_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value50;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value51;
    __freed_obj__ = 0;
    if(_if_conditional68=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional68) {
        str_40=(char*)come_increment_ref_count(((char*)(right_value52=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value52;
        __freed_obj__ = 0;
        buffer_append_str(buf_39,str_40);
        if(str_40 && !__freed_obj__) { str_40 = come_decrement_ref_count(str_40, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional69=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional69) {
            str_41=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value53=make_lambda_type_name_string(type,name,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            buffer_append_str(buf_39,str_41);
            if(str_41 && !__freed_obj__) { str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional70=type->mSizeNum!=((void*)0),            _if_conditional70) {
                if(_if_conditional71=!node_compile(type->mSizeNum,info),                _if_conditional71) {
                    err_msg(info,"invalid bit field number");
                    __result34__ = __result_obj__ = ((struct optional$2charphbool*)(right_value56=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value55=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 252))),(char*)come_increment_ref_count(((char*)(right_value54=__builtin_string("")))),(_Bool)0)));
                    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value54;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value55;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value56;
                    __freed_obj__ = 0;
                    return __result34__;
                }
                come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                type_str_43=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value58=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value58;
                __freed_obj__ = 0;
                buffer_append_str(buf_39,((char*)(right_value59=xsprintf("%s ",type_str_43))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value59;
                __freed_obj__ = 0;
                buffer_append_str(buf_39,((char*)(right_value60=xsprintf("%s:%s",name,come_value_42->c_value))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value60;
                __freed_obj__ = 0;
                if(_if_conditional72=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional72) {
                    buffer_append_str(buf_39,((char*)(right_value61=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value61;
                    __freed_obj__ = 0;
                }
                if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional73) {
                    buffer_append_str(buf_39,((char*)(right_value62=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value62;
                    __freed_obj__ = 0;
                }
                if(come_value_42 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_43 && !__freed_obj__) { type_str_43 = come_decrement_ref_count(type_str_43, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional74=type->mOmitArrayNum,                _if_conditional74) {
                    type_str_44=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value63=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63;
                    __freed_obj__ = 0;
                    buffer_append_str(buf_39,type_str_44);
                    buffer_append_str(buf_39," ");
                    buffer_append_str(buf_39,name);
                    buffer_append_str(buf_39,"[]");
                    if(_if_conditional75=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional75) {
                        buffer_append_str(buf_39,((char*)(right_value64=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value64;
                        __freed_obj__ = 0;
                    }
                    if(type_str_44 && !__freed_obj__) { type_str_44 = come_decrement_ref_count(type_str_44, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional76=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional76) {
                        type_str_45=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value65=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value65;
                        __freed_obj__ = 0;
                        buffer_append_str(buf_39,type_str_45);
                        buffer_append_str(buf_39," ");
                        if(_if_conditional77=type->mNoArrayPointerNum>0,                        _if_conditional77) {
                            buffer_append_str(buf_39,"(*");
                        }
                        buffer_append_str(buf_39,name);
                        if(_if_conditional78=type->mNoArrayPointerNum>0,                        _if_conditional78) {
                            buffer_append_str(buf_39,")");
                        }
                        for(
                        o2_saved_46=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_49=list$1sNodeph_begin((o2_saved_46)) ,                        0;                        _for_condtionalA7=                        !list$1sNodeph_end((o2_saved_46)) ,                        _for_condtionalA7;                        it_49=list$1sNodeph_next((o2_saved_46)) ,                        0                        ){
                            if(_if_conditional83=!node_compile(it_49,info),                            _if_conditional83) {
                                err_msg(info,"invalid array number");
                                __result42__ = __result_obj__ = ((struct optional$2charphbool*)(right_value68=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value67=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 301))),(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string("")))),(_Bool)0)));
                                if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value66;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value67;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value68);
                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value68;
                                __freed_obj__ = 0;
                                return __result42__;
                            }
                            cvalue_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=get_value_from_stack(-1,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value69;
                            __freed_obj__ = 0;
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_39,((char*)(right_value70=xsprintf("[%s]",cvalue_52->c_value))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value70;
                            __freed_obj__ = 0;
                            if(cvalue_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_46 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(_if_conditional84=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional84) {
                            buffer_append_str(buf_39,((char*)(right_value71=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value71;
                            __freed_obj__ = 0;
                        }
                        if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        type_str_53=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value72=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value72;
                        __freed_obj__ = 0;
                        if(_if_conditional85=string_operator_equals(type_str_53,""),                        _if_conditional85) {
                            __result43__ = __result_obj__ = ((struct optional$2charphbool*)(right_value75=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value74=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 317))),(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string("")))),(_Bool)0)));
                            if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value73;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value74;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value75);
                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value75;
                            __freed_obj__ = 0;
                            return __result43__;
                        }
                        buffer_append_str(buf_39,type_str_53);
                        buffer_append_str(buf_39," ");
                        if(_if_conditional86=type->mNoArrayPointerNum>0,                        _if_conditional86) {
                            buffer_append_str(buf_39,"(*");
                        }
                        buffer_append_str(buf_39,name);
                        if(_if_conditional87=type->mNoArrayPointerNum>0,                        _if_conditional87) {
                            buffer_append_str(buf_39,")");
                        }
                        if(_if_conditional88=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional88) {
                            buffer_append_str(buf_39,((char*)(right_value76=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                        }
                        if(type_str_53 && !__freed_obj__) { type_str_53 = come_decrement_ref_count(type_str_53, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __result44__ = __result_obj__ = ((struct optional$2charphbool*)(right_value79=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value78=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 336)))),(char*)come_increment_ref_count(((char*)(right_value77=buffer_to_string(buf_39)))),(_Bool)1)));
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value77;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value78;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value79;
    __freed_obj__ = 0;
    return __result44__;
    if(buf_39 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct sNode* result_47;
struct sNode* __result35__;
_Bool _if_conditional80;
struct sNode* __result36__;
struct sNode* result_48;
struct sNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_47, 0, sizeof(struct sNode*));
memset(&result_48, 0, sizeof(struct sNode*));
                            if(_if_conditional79=self==((void*)0),                            _if_conditional79) {
                                memset(&result_47,0,sizeof(struct sNode*));
                                __result35__ = __result_obj__ = result_47;
                                return __result35__;
                            }
                            self->it=self->head;
                            if(_if_conditional80=self->it,                            _if_conditional80) {
                                __result36__ = __result_obj__ = self->it->item;
                                return __result36__;
                            }
                            memset(&result_48,0,sizeof(struct sNode*));
                            __result37__ = __result_obj__ = result_48;
                            return __result37__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result38__ = self==((void*)0)||self->it==((void*)0);
                            return __result38__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
struct sNode* result_50;
struct sNode* __result39__;
_Bool _if_conditional82;
struct sNode* __result40__;
struct sNode* result_51;
struct sNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_50, 0, sizeof(struct sNode*));
memset(&result_51, 0, sizeof(struct sNode*));
                            if(_if_conditional81=self==((void*)0)||self->it==((void*)0),                            _if_conditional81) {
                                memset(&result_50,0,sizeof(struct sNode*));
                                __result39__ = __result_obj__ = result_50;
                                return __result39__;
                            }
                            self->it=self->it->next;
                            if(_if_conditional82=self->it,                            _if_conditional82) {
                                __result40__ = __result_obj__ = self->it->item;
                                return __result40__;
                            }
                            memset(&result_51,0,sizeof(struct sNode*));
                            __result41__ = __result_obj__ = result_51;
                            return __result41__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value80;
void* right_value81;
struct buffer* output_54;
_Bool _if_conditional89;
void* right_value82;
void* right_value83;
struct buffer* output2_55;
int i_56;
struct list$1sTypeph* o2_saved_57;
struct sType* it_58;
_Bool _for_condtionalA8;
char* name_62;
void* right_value84;
char* str_63;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value85;
void* right_value86;
char* str_64;
void* right_value87;
_Bool _if_conditional94;
void* right_value122;
struct sType* base_result_type_83;
void* right_value123;
void* right_value124;
struct list$1sNodeph* __dec_obj29;
void* right_value125;
char* result_type_str_84;
int i_85;
struct list$1sTypeph* o2_saved_86;
struct sType* it_87;
_Bool _for_condtionalA9;
char* name_88;
void* right_value126;
char* str_89;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct sNode* node_93;
_Bool _if_conditional169;
void* right_value127;
void* right_value128;
void* right_value129;
char* __result67__;
void* right_value130;
struct CVALUE* cvalue_94;
void* right_value131;
void* right_value132;
void* right_value133;
char* result_type_str_95;
int i_96;
struct list$1sTypeph* o2_saved_97;
struct sType* it_98;
_Bool _for_condtionalA10;
char* name_99;
void* right_value134;
char* str_100;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&output_54, 0, sizeof(struct buffer*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&output2_55, 0, sizeof(struct buffer*));
memset(&i_56, 0, sizeof(int));
memset(&o2_saved_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct sType*));
memset(&name_62, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
memset(&str_63, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&str_64, 0, sizeof(char*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&base_result_type_83, 0, sizeof(struct sType*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&result_type_str_84, 0, sizeof(char*));
memset(&i_85, 0, sizeof(int));
memset(&o2_saved_86, 0, sizeof(struct list$1sTypeph*));
memset(&it_87, 0, sizeof(struct sType*));
memset(&name_88, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&str_89, 0, sizeof(char*));
memset(&node_93, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&cvalue_94, 0, sizeof(struct CVALUE*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&result_type_str_95, 0, sizeof(char*));
memset(&i_96, 0, sizeof(int));
memset(&o2_saved_97, 0, sizeof(struct list$1sTypeph*));
memset(&it_98, 0, sizeof(struct sType*));
memset(&name_99, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
memset(&str_100, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    output_54=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value81;
    __freed_obj__ = 0;
    if(_if_conditional89=fun->mResultType->mResultType,    _if_conditional89) {
        output2_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value82;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value83;
        __freed_obj__ = 0;
        buffer_append_str(output2_55,fun->mName);
        buffer_append_str(output2_55,"(");
        i_56=0;
        for(
        o2_saved_57=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_58=list$1sTypeph_begin((o2_saved_57)) ,        0;        _for_condtionalA8=        !list$1sTypeph_end((o2_saved_57)) ,        _for_condtionalA8;        it_58=list$1sTypeph_next((o2_saved_57)) ,        0        ){
            name_62=list$1charphp_operator_load_element(fun->mParamNames,i_56);
            str_63=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value84=make_define_var(it_58,name_62,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value84;
            __freed_obj__ = 0;
            buffer_append_str(output2_55,str_63);
            if(_if_conditional92=i_56==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional92) {
                if(_if_conditional93=fun->mVarArgs,                _if_conditional93) {
                    buffer_append_str(output2_55,", ...");
                }
            }
            else {
                buffer_append_str(output2_55,", ");
            }
            i_56++;
            if(str_63 && !__freed_obj__) { str_63 = come_decrement_ref_count(str_63, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_57 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_57, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(output2_55,")");
        str_64=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value86=make_lambda_type_name_string(fun->mResultType,((char*)(right_value85=buffer_to_string(output2_55))),info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value85;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value86;
        __freed_obj__ = 0;
        buffer_append_str(output_54,str_64);
        buffer_append_str(info->module->mSourceHead,((char*)(right_value87=buffer_to_string(output_54))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value87;
        __freed_obj__ = 0;
        buffer_append_str(info->module->mSourceHead,";\n");
        if(output2_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_64 && !__freed_obj__) { str_64 = come_decrement_ref_count(str_64, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional94=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional94) {
            base_result_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value122;
            __freed_obj__ = 0;
            __dec_obj29=base_result_type_83->mArrayNum;
            base_result_type_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value124=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value123=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379))))))));
            if(__dec_obj29) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value123;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value124;
            __freed_obj__ = 0;
            result_type_str_84=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value125=make_type_name_string(base_result_type_83,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value125;
            __freed_obj__ = 0;
            buffer_append_str(output_54,result_type_str_84);
            buffer_append_str(output_54," (*");
            buffer_append_str(output_54,fun->mName);
            buffer_append_str(output_54,"(");
            i_85=0;
            for(
            o2_saved_86=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_87=list$1sTypeph_begin((o2_saved_86)) ,            0;            _for_condtionalA9=            !list$1sTypeph_end((o2_saved_86)) ,            _for_condtionalA9;            it_87=list$1sTypeph_next((o2_saved_86)) ,            0            ){
                name_88=list$1charphp_operator_load_element(fun->mParamNames,i_85);
                str_89=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value126=make_define_var(it_87,name_88,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value126;
                __freed_obj__ = 0;
                buffer_append_str(output_54,str_89);
                if(_if_conditional165=i_85==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional165) {
                    if(_if_conditional166=fun->mVarArgs,                    _if_conditional166) {
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    buffer_append_str(output_54,", ");
                }
                i_85++;
                if(str_89 && !__freed_obj__) { str_89 = come_decrement_ref_count(str_89, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_86 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_86, (void*)0, (void*)0, 0, 0, 0, 0); }
            node_93=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            if(_if_conditional169=!node_compile(node_93,info),            _if_conditional169) {
                err_msg(info,"invalid array number");
                __result67__ = __result_obj__ = ((struct optional$2charphbool*)(right_value129=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value128=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 412))),(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("")))),(_Bool)0)));
                if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
                if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value128;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value129;
                __freed_obj__ = 0;
                return __result67__;
            }
            cvalue_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value130);
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value130;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            buffer_append_str(output_54,((char*)(right_value131=xsprintf("))[%s]",cvalue_94->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value131);
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value131;
            __freed_obj__ = 0;
            buffer_append_str(info->module->mSourceHead,((char*)(right_value132=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value132;
            __freed_obj__ = 0;
            buffer_append_str(info->module->mSourceHead,";\n");
            if(base_result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_84 && !__freed_obj__) { result_type_str_84 = come_decrement_ref_count(result_type_str_84, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_94, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            result_type_str_95=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value133=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value133;
            __freed_obj__ = 0;
            buffer_append_str(output_54,result_type_str_95);
            buffer_append_str(output_54," ");
            buffer_append_str(output_54,fun->mName);
            buffer_append_str(output_54,"(");
            i_96=0;
            for(
            o2_saved_97=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_98=list$1sTypeph_begin((o2_saved_97)) ,            0;            _for_condtionalA10=            !list$1sTypeph_end((o2_saved_97)) ,            _for_condtionalA10;            it_98=list$1sTypeph_next((o2_saved_97)) ,            0            ){
                name_99=list$1charphp_operator_load_element(fun->mParamNames,i_96);
                str_100=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value134=make_define_var(it_98,name_99,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                buffer_append_str(output_54,str_100);
                if(_if_conditional170=i_96==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional170) {
                    if(_if_conditional171=fun->mVarArgs,                    _if_conditional171) {
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    buffer_append_str(output_54,", ");
                }
                i_96++;
                if(str_100 && !__freed_obj__) { str_100 = come_decrement_ref_count(str_100, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_97 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_97, (void*)0, (void*)0, 0, 0, 0, 0); }
            buffer_append_str(output_54,")");
            buffer_append_str(info->module->mSourceHead,((char*)(right_value135=buffer_to_string(output_54))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value135;
            __freed_obj__ = 0;
            buffer_append_str(info->module->mSourceHead,";\n");
            if(result_type_str_95 && !__freed_obj__) { result_type_str_95 = come_decrement_ref_count(result_type_str_95, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    buffer_append_str(output_54,"{\n");
    buffer_append_str(output_54,((char*)(right_value136=buffer_to_string(fun->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value136;
    __freed_obj__ = 0;
    buffer_append_str(output_54,((char*)(right_value137=buffer_to_string(fun->mSourceHead2))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value137;
    __freed_obj__ = 0;
    buffer_append_str(output_54,((char*)(right_value138=buffer_to_string(fun->mSource))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value138;
    __freed_obj__ = 0;
    buffer_append_str(output_54,"}\n");
    __result68__ = __result_obj__ = ((char*)(right_value139=buffer_to_string(output_54)));
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value139;
    __freed_obj__ = 0;
    return __result68__;
    if(output_54 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
struct list_item$1charph* it_59;
int i_60;
_Bool _while_condtional5;
_Bool _if_conditional91;
char* __result45__;
char* default_value_61;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&i_60, 0, sizeof(int));
memset(&default_value_61, 0, sizeof(char*));
                if(_if_conditional90=position<0,                _if_conditional90) {
                    position+=self->len;
                }
                it_59=self->head;
                i_60=0;
                while(_while_condtional5=it_59!=((void*)0),                _while_condtional5) {
                    if(_if_conditional91=position==i_60,                    _if_conditional91) {
                        __result45__ = __result_obj__ = it_59->item;
                        return __result45__;
                    }
                    it_59=it_59->next;
                    i_60++;
                }
                memset(&default_value_61,0,sizeof(char*));
                __result46__ = __result_obj__ = default_value_61;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 1, 0); }
                return __result46__;
                if(default_value_61 && !__freed_obj__) { default_value_61 = come_decrement_ref_count(default_value_61, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
struct sType* __result47__;
void* right_value88;
struct sType* result_65;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional101;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional102;
void* right_value93;
char* __dec_obj10;
_Bool _if_conditional103;
void* right_value100;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional107;
void* right_value108;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value109;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional122;
void* right_value116;
struct list$1charph* __dec_obj23;
_Bool _if_conditional126;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value118;
struct sNode* __dec_obj25;
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
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value119;
struct sNode* __dec_obj26;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value120;
char* __dec_obj27;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value121;
char* __dec_obj28;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sType*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
                if(_if_conditional95=self==(void*)0,                _if_conditional95) {
                    __result47__ = __result_obj__ = (void*)0;
                    return __result47__;
                }
                result_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88;
                __freed_obj__ = 0;
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_65->mClass=self->mClass;
                }
                if(_if_conditional97=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional97) {
                    __dec_obj8=result_65->mNoSolvedGenericsType;
                    result_65->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value91;
                    __freed_obj__ = 0;
                }
                if(_if_conditional101=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional101) {
                    __dec_obj9=result_65->mOriginalLoadVarType;
                    result_65->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value92;
                    __freed_obj__ = 0;
                }
                if(_if_conditional102=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional102) {
                    __dec_obj10=result_65->mGenericsName;
                    result_65->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                }
                if(_if_conditional103=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional103) {
                    __dec_obj14=result_65->mGenericsTypes;
                    result_65->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value100;
                    __freed_obj__ = 0;
                }
                if(_if_conditional107=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional107) {
                    __dec_obj18=result_65->mArrayNum;
                    result_65->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    result_65->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional121) {
                    __dec_obj19=result_65->mParamTypes;
                    result_65->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value109;
                    __freed_obj__ = 0;
                }
                if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional122) {
                    __dec_obj23=result_65->mParamNames;
                    result_65->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                }
                if(_if_conditional126=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional126) {
                    __dec_obj24=result_65->mResultType;
                    result_65->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value117;
                    __freed_obj__ = 0;
                }
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    result_65->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional128=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional128) {
                    __dec_obj25=result_65->mAlignas;
                    result_65->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(self->mAlignas))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value118;
                    __freed_obj__ = 0;
                }
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    result_65->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    result_65->mShort=self->mShort;
                }
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    result_65->mLong=self->mLong;
                }
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    result_65->mLongLong=self->mLongLong;
                }
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    result_65->mConstant=self->mConstant;
                }
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    result_65->mRegister=self->mRegister;
                }
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    result_65->mVolatile=self->mVolatile;
                }
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    result_65->mStatic=self->mStatic;
                }
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    result_65->mExtern=self->mExtern;
                }
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    result_65->mRestrict=self->mRestrict;
                }
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    result_65->mImmutable=self->mImmutable;
                }
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    result_65->mHeap=self->mHeap;
                }
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    result_65->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    result_65->mDelegate=self->mDelegate;
                }
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    result_65->mShare=self->mShare;
                }
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    result_65->mClone=self->mClone;
                }
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    result_65->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    result_65->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    result_65->mRefference=self->mRefference;
                }
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    result_65->mException=self->mException;
                }
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    result_65->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional150=self!=((void*)0),                _if_conditional150) {
                    result_65->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    result_65->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional152=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional152) {
                    __dec_obj26=result_65->mSizeNum;
                    result_65->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(self->mSizeNum))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = 0;
                }
                if(_if_conditional153=self!=((void*)0),                _if_conditional153) {
                    result_65->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    result_65->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional155=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional155) {
                    __dec_obj27=result_65->mOriginalTypeName;
                    result_65->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120;
                    __freed_obj__ = 0;
                }
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    result_65->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    result_65->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    result_65->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    result_65->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    result_65->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    result_65->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional162=self!=((void*)0),                _if_conditional162) {
                    result_65->mInline=self->mInline;
                }
                if(_if_conditional163=self!=((void*)0),                _if_conditional163) {
                    result_65->mNullValue=self->mNullValue;
                }
                if(_if_conditional164=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional164) {
                    __dec_obj28=result_65->mAsmName;
                    result_65->mAsmName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(self->mAsmName))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                }
                __result64__ = __result_obj__ = result_65;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result64__;
                if(result_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
struct tuple1$1sTypeph* __result48__;
void* right_value89;
struct tuple1$1sTypeph* result_66;
_Bool _if_conditional100;
void* right_value90;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value90, 0, sizeof(void*));
                        if(_if_conditional98=self==(void*)0,                        _if_conditional98) {
                            __result48__ = __result_obj__ = (void*)0;
                            return __result48__;
                        }
                        result_66=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value89;
                        __freed_obj__ = 0;
                        if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional100) {
                            __dec_obj7=result_66->v1;
                            result_66->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value90;
                            __freed_obj__ = 0;
                        }
                        __result49__ = __result_obj__ = result_66;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result49__;
                        if(result_66 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional99=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional99) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
struct list$1sTypeph* __result50__;
void* right_value94;
void* right_value95;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional6;
void* right_value99;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value99, 0, sizeof(void*));
                        if(_if_conditional104=self==((void*)0),                        _if_conditional104) {
                            __result50__ = __result_obj__ = ((void*)0);
                            return __result50__;
                        }
                        result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value94;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value95;
                        __freed_obj__ = 0;
                        it_68=self->head;
                        while(_while_condtional6=it_68!=((void*)0),                        _while_condtional6) {
                            list$1sTypeph_add(result_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(it_68->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99;
                            __freed_obj__ = 0;
                            it_68=it_68->next;
                        }
                        __result53__ = __result_obj__ = result_67;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result53__;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result51__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result51__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
void* right_value96;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj11;
_Bool _if_conditional106;
void* right_value97;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj12;
void* right_value98;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj13;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value97, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional105=self->len==0,                                _if_conditional105) {
                                    litem_69=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value96;
                                    __freed_obj__ = 0;
                                    litem_69->prev=((void*)0);
                                    litem_69->next=((void*)0);
                                    __dec_obj11=litem_69->item;
                                    litem_69->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_69;
                                    self->head=litem_69;
                                }
                                else {
                                    if(_if_conditional106=self->len==1,                                    _if_conditional106) {
                                        litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value97=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value97;
                                        __freed_obj__ = 0;
                                        litem_70->prev=self->head;
                                        litem_70->next=((void*)0);
                                        __dec_obj12=litem_70->item;
                                        litem_70->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail=litem_70;
                                        self->head->next=litem_70;
                                    }
                                    else {
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value98;
                                        __freed_obj__ = 0;
                                        litem_71->prev=self->tail;
                                        litem_71->next=((void*)0);
                                        __dec_obj13=litem_71->item;
                                        litem_71->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail->next=litem_71;
                                        self->tail=litem_71;
                                    }
                                }
                                self->len++;
                                __result52__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result52__;
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
_Bool _if_conditional108;
struct list$1sNodeph* __result54__;
void* right_value101;
void* right_value102;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional7;
void* right_value107;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value107, 0, sizeof(void*));
                        if(_if_conditional108=self==((void*)0),                        _if_conditional108) {
                            __result54__ = __result_obj__ = ((void*)0);
                            return __result54__;
                        }
                        result_72=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value101;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value102);
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value102;
                        __freed_obj__ = 0;
                        it_73=self->head;
                        while(_while_condtional7=it_73!=((void*)0),                        _while_condtional7) {
                            list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(it_73->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                            it_73=it_73->next;
                        }
                        __result59__ = __result_obj__ = result_72;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result59__;
                        if(result_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result55__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result55__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
void* right_value103;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj15;
_Bool _if_conditional110;
void* right_value104;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj16;
void* right_value105;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional109=self->len==0,                                _if_conditional109) {
                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value103;
                                    __freed_obj__ = 0;
                                    litem_74->prev=((void*)0);
                                    litem_74->next=((void*)0);
                                    __dec_obj15=litem_74->item;
                                    litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_74;
                                    self->head=litem_74;
                                }
                                else {
                                    if(_if_conditional110=self->len==1,                                    _if_conditional110) {
                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value104;
                                        __freed_obj__ = 0;
                                        litem_75->prev=self->head;
                                        litem_75->next=((void*)0);
                                        __dec_obj16=litem_75->item;
                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                        self->tail=litem_75;
                                        self->head->next=litem_75;
                                    }
                                    else {
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value105;
                                        __freed_obj__ = 0;
                                        litem_76->prev=self->tail;
                                        litem_76->next=((void*)0);
                                        __dec_obj17=litem_76->item;
                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                        self->tail->next=litem_76;
                                        self->tail=litem_76;
                                    }
                                }
                                self->len++;
                                __result56__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result56__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
struct sNode* __result57__;
void* right_value106;
struct sNode* result_77;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sNode*));
                                if(_if_conditional111=self==(void*)0,                                _if_conditional111) {
                                    __result57__ = __result_obj__ = (void*)0;
                                    return __result57__;
                                }
                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value106;
                                __freed_obj__ = 0;
                                if(_if_conditional112=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional112) {
                                    result_77->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    result_77->finalize=self->finalize;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_77->clone=self->clone;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_77->compile=self->compile;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_77->sline=self->sline;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_77->sname=self->sname;
                                }
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    result_77->terminated=self->terminated;
                                }
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    result_77->kind=self->kind;
                                }
                                __result58__ = __result_obj__ = result_77;
                                if(result_77 && !__freed_obj__) { result_77 = come_decrement_ref_count(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0); } 
                                return __result58__;
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
_Bool _if_conditional123;
struct list$1charph* __result60__;
void* right_value110;
void* right_value111;
struct list$1charph* result_78;
struct list_item$1charph* it_79;
_Bool _while_condtional8;
void* right_value115;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct list$1charph*));
memset(&it_79, 0, sizeof(struct list_item$1charph*));
memset(&right_value115, 0, sizeof(void*));
                        if(_if_conditional123=self==((void*)0),                        _if_conditional123) {
                            __result60__ = __result_obj__ = ((void*)0);
                            return __result60__;
                        }
                        result_78=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value110;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value111);
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value111;
                        __freed_obj__ = 0;
                        it_79=self->head;
                        while(_while_condtional8=it_79!=((void*)0),                        _while_condtional8) {
                            list$1charph_add(result_78,(char*)come_increment_ref_count(((char*)(right_value115=string_clone(it_79->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value115;
                            __freed_obj__ = 0;
                            it_79=it_79->next;
                        }
                        __result63__ = __result_obj__ = result_78;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result63__;
                        if(result_78 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result61__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result61__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value112;
struct list_item$1charph* litem_80;
char* __dec_obj20;
_Bool _if_conditional125;
void* right_value113;
struct list_item$1charph* litem_81;
char* __dec_obj21;
void* right_value114;
struct list_item$1charph* litem_82;
char* __dec_obj22;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional124=self->len==0,                                _if_conditional124) {
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value112;
                                    __freed_obj__ = 0;
                                    litem_80->prev=((void*)0);
                                    litem_80->next=((void*)0);
                                    __dec_obj20=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_80;
                                    self->head=litem_80;
                                }
                                else {
                                    if(_if_conditional125=self->len==1,                                    _if_conditional125) {
                                        litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value113;
                                        __freed_obj__ = 0;
                                        litem_81->prev=self->head;
                                        litem_81->next=((void*)0);
                                        __dec_obj21=litem_81->item;
                                        litem_81->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                        self->tail=litem_81;
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value114;
                                        __freed_obj__ = 0;
                                        litem_82->prev=self->tail;
                                        litem_82->next=((void*)0);
                                        __dec_obj22=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                        self->tail->next=litem_82;
                                        self->tail=litem_82;
                                    }
                                }
                                self->len++;
                                __result62__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result62__;
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
_Bool _if_conditional167;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional9;
_Bool _if_conditional168;
struct sNode* __result65__;
struct sNode* default_value_92;
struct sNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                if(_if_conditional167=position<0,                _if_conditional167) {
                    position+=self->len;
                }
                it_90=self->head;
                i_91=0;
                while(_while_condtional9=it_90!=((void*)0),                _while_condtional9) {
                    if(_if_conditional168=position==i_91,                    _if_conditional168) {
                        __result65__ = __result_obj__ = it_90->item;
                        return __result65__;
                    }
                    it_90=it_90->next;
                    i_91++;
                }
                memset(&default_value_92,0,sizeof(struct sNode*));
                __result66__ = __result_obj__ = default_value_92;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 1, 0); } 
                return __result66__;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
void* right_value141;
struct buffer* output_101;
_Bool _if_conditional172;
void* right_value142;
void* right_value143;
struct buffer* output2_102;
int i_103;
struct list$1sTypeph* o2_saved_104;
struct sType* it_105;
_Bool _for_condtionalA11;
char* name_106;
void* right_value144;
char* str_107;
_Bool _if_conditional173;
void* right_value145;
void* right_value146;
char* str_108;
_Bool _if_conditional174;
void* right_value147;
struct sType* base_result_type_109;
void* right_value148;
void* right_value149;
struct list$1sNodeph* __dec_obj30;
void* right_value150;
char* result_type_str_110;
int i_111;
struct list$1sTypeph* o2_saved_112;
struct sType* it_113;
_Bool _for_condtionalA12;
char* name_114;
void* right_value151;
char* str_115;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct sNode* node_116;
_Bool _if_conditional177;
void* right_value152;
void* right_value153;
void* right_value154;
char* __result69__;
void* right_value155;
struct CVALUE* cvalue_117;
void* right_value156;
void* right_value157;
char* result_type_str_118;
int i_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
_Bool _for_condtionalA13;
char* name_122;
void* right_value158;
char* str_123;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value159;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&output_101, 0, sizeof(struct buffer*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&output2_102, 0, sizeof(struct buffer*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1sTypeph*));
memset(&it_105, 0, sizeof(struct sType*));
memset(&name_106, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&str_107, 0, sizeof(char*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&str_108, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&base_result_type_109, 0, sizeof(struct sType*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&result_type_str_110, 0, sizeof(char*));
memset(&i_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1sTypeph*));
memset(&it_113, 0, sizeof(struct sType*));
memset(&name_114, 0, sizeof(char*));
memset(&right_value151, 0, sizeof(void*));
memset(&str_115, 0, sizeof(char*));
memset(&node_116, 0, sizeof(struct sNode*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&cvalue_117, 0, sizeof(struct CVALUE*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&result_type_str_118, 0, sizeof(char*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
memset(&name_122, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&str_123, 0, sizeof(char*));
memset(&right_value159, 0, sizeof(void*));
    output_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value141=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value140=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value141;
    __freed_obj__ = 0;
    if(_if_conditional172=fun->mResultType->mResultType,    _if_conditional172) {
        output2_102=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value142=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value143;
        __freed_obj__ = 0;
        buffer_append_str(output2_102,fun->mName);
        buffer_append_str(output2_102,"(");
        i_103=0;
        for(
        o2_saved_104=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_105=list$1sTypeph_begin((o2_saved_104)) ,        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_104)) ,        _for_condtionalA11;        it_105=list$1sTypeph_next((o2_saved_104)) ,        0        ){
            name_106=list$1charphp_operator_load_element(fun->mParamNames,i_103);
            str_107=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value144=make_define_var(it_105,name_106,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value144;
            __freed_obj__ = 0;
            buffer_append_str(output2_102,str_107);
            if(_if_conditional173=i_103!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional173) {
                buffer_append_str(output2_102,", ");
            }
            i_103++;
            if(str_107 && !__freed_obj__) { str_107 = come_decrement_ref_count(str_107, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_104 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(output2_102,")");
        str_108=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value146=make_lambda_type_name_string(fun->mResultType,((char*)(right_value145=buffer_to_string(output2_102))),info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value145;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value146;
        __freed_obj__ = 0;
        buffer_append_str(output_101,str_108);
        buffer_append_str(output_101,";\n");
        if(output2_102 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_108 && !__freed_obj__) { str_108 = come_decrement_ref_count(str_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional174=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional174) {
            base_result_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value147;
            __freed_obj__ = 0;
            __dec_obj30=base_result_type_109->mArrayNum;
            base_result_type_109->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value149=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497))))))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value148;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value149;
            __freed_obj__ = 0;
            result_type_str_110=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value150=make_type_name_string(base_result_type_109,(_Bool)1,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value150);
            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value150;
            __freed_obj__ = 0;
            buffer_append_str(output_101,result_type_str_110);
            buffer_append_str(output_101," (*");
            buffer_append_str(output_101,fun->mName);
            buffer_append_str(output_101,"(");
            i_111=0;
            for(
            o2_saved_112=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_113=list$1sTypeph_begin((o2_saved_112)) ,            0;            _for_condtionalA12=            !list$1sTypeph_end((o2_saved_112)) ,            _for_condtionalA12;            it_113=list$1sTypeph_next((o2_saved_112)) ,            0            ){
                name_114=list$1charphp_operator_load_element(fun->mParamNames,i_111);
                str_115=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value151=make_define_var(it_113,name_114,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value151;
                __freed_obj__ = 0;
                buffer_append_str(output_101,str_115);
                if(_if_conditional175=i_111==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional175) {
                    if(_if_conditional176=fun->mVarArgs,                    _if_conditional176) {
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    buffer_append_str(output_101,", ");
                }
                i_111++;
                if(str_115 && !__freed_obj__) { str_115 = come_decrement_ref_count(str_115, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_112 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            node_116=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            if(_if_conditional177=!node_compile(node_116,info),            _if_conditional177) {
                err_msg(info,"invalid array number");
                __result69__ = __result_obj__ = ((struct optional$2charphbool*)(right_value154=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value153=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 528))),(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("")))),(_Bool)0)));
                if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
                if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value152;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value153;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value154;
                __freed_obj__ = 0;
                return __result69__;
            }
            cvalue_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value155);
            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value155;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            buffer_append_str(output_101,((char*)(right_value156=xsprintf("))[%s];\n",cvalue_117->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value156);
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value156;
            __freed_obj__ = 0;
            if(base_result_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_110 && !__freed_obj__) { result_type_str_110 = come_decrement_ref_count(result_type_str_110, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            result_type_str_118=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value157=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value157;
            __freed_obj__ = 0;
            buffer_append_str(output_101,result_type_str_118);
            buffer_append_str(output_101," ");
            buffer_append_str(output_101,fun->mName);
            buffer_append_str(output_101,"(");
            i_119=0;
            for(
            o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_121=list$1sTypeph_begin((o2_saved_120)) ,            0;            _for_condtionalA13=            !list$1sTypeph_end((o2_saved_120)) ,            _for_condtionalA13;            it_121=list$1sTypeph_next((o2_saved_120)) ,            0            ){
                name_122=list$1charphp_operator_load_element(fun->mParamNames,i_119);
                str_123=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value158=make_define_var(it_121,name_122,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value158;
                __freed_obj__ = 0;
                buffer_append_str(output_101,str_123);
                if(_if_conditional178=i_119==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional178) {
                    if(_if_conditional179=fun->mVarArgs,                    _if_conditional179) {
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    buffer_append_str(output_101,", ");
                }
                i_119++;
                if(str_123 && !__freed_obj__) { str_123 = come_decrement_ref_count(str_123, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_120 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_120, (void*)0, (void*)0, 0, 0, 0, 0); }
            buffer_append_str(output_101,");\n");
            if(result_type_str_118 && !__freed_obj__) { result_type_str_118 = come_decrement_ref_count(result_type_str_118, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    __result70__ = __result_obj__ = ((char*)(right_value159=buffer_to_string(output_101)));
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value159;
    __freed_obj__ = 0;
    return __result70__;
    if(output_101 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value160;
void* right_value161;
struct buffer* output_124;
void* right_value162;
char* result_type_str_125;
int i_126;
struct list$1sTypeph* o2_saved_127;
struct sType* it_128;
_Bool _for_condtionalA14;
char* name_129;
void* right_value163;
char* str_130;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value164;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&output_124, 0, sizeof(struct buffer*));
memset(&right_value162, 0, sizeof(void*));
memset(&result_type_str_125, 0, sizeof(char*));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1sTypeph*));
memset(&it_128, 0, sizeof(struct sType*));
memset(&name_129, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&str_130, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
    output_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value161;
    __freed_obj__ = 0;
    result_type_str_125=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value162=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value162;
    __freed_obj__ = 0;
    buffer_append_str(output_124,result_type_str_125);
    buffer_append_str(output_124," ");
    buffer_append_str(output_124,name);
    buffer_append_str(output_124,"(");
    i_126=0;
    for(
    o2_saved_127=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_128=list$1sTypeph_begin((o2_saved_127)) ,    0;    _for_condtionalA14=    !list$1sTypeph_end((o2_saved_127)) ,    _for_condtionalA14;    it_128=list$1sTypeph_next((o2_saved_127)) ,    0    ){
        name_129=list$1charphp_operator_load_element(lambda_type->mParamNames,i_126);
        str_130=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value163=make_define_var(it_128,name_129,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = 0;
        buffer_append_str(output_124,str_130);
        if(_if_conditional180=i_126==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional180) {
            if(_if_conditional181=lambda_type->mVarArgs,            _if_conditional181) {
                buffer_append_str(output_124,", ...");
            }
        }
        else {
            buffer_append_str(output_124,", ");
        }
        i_126++;
        if(str_130 && !__freed_obj__) { str_130 = come_decrement_ref_count(str_130, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_127 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(output_124,");\n");
    __result71__ = __result_obj__ = ((char*)(right_value164=buffer_to_string(output_124)));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value164;
    __freed_obj__ = 0;
    return __result71__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_125 && !__freed_obj__) { result_type_str_125 = come_decrement_ref_count(result_type_str_125, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
char* msg2_131;
va_list args_132;
int len_133;
_Bool _if_conditional183;
int i_134;
_Bool _for_condtionalA15;
void* right_value165;
void* right_value166;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_131, 0, sizeof(char*));
memset(&args_132, 0, sizeof(va_list));
memset(&len_133, 0, sizeof(int));
memset(&i_134, 0, sizeof(int));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
    if(_if_conditional182=info->no_output_come_code,    _if_conditional182) {
        return;
    }
    __builtin_va_start(args_132,msg);
    len_133=vasprintf(&msg2_131,msg,args_132);
    __builtin_va_end(args_132);
    if(_if_conditional183=info->come_fun,    _if_conditional183) {
        for(
        i_134=0 ,        0;        _for_condtionalA15=        i_134<info->block_level ,        _for_condtionalA15;        i_134++ ,        0        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value165=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value166=xsprintf("%s",msg2_131))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
    }
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
_Bool _if_conditional184;
char* msg2_135;
va_list args_136;
int len_137;
void* right_value167;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_135, 0, sizeof(char*));
memset(&args_136, 0, sizeof(va_list));
memset(&len_137, 0, sizeof(int));
memset(&right_value167, 0, sizeof(void*));
    if(_if_conditional184=info->no_output_come_code,    _if_conditional184) {
        return;
    }
    __builtin_va_start(args_136,msg);
    len_137=vasprintf(&msg2_135,msg,args_136);
    __builtin_va_end(args_136);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value167=xsprintf("%s",msg2_135))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = 0;
    free(msg2_135);
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value168;
char* name_138;
void* right_value169;
void* right_value170;
struct sType* result_type_139;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
struct sType* __list_values1___140[2];
void* right_value178;
void* right_value179;
struct list$1sTypeph* param_types_145;
void* right_value180;
void* right_value181;
char* __list_values2___146[2];
void* right_value185;
void* right_value186;
struct list$1charph* param_names_151;
void* right_value187;
void* right_value188;
struct list$1charph* param_default_parametors_152;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
struct sFun* main_fun_153;
void* right_value203;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&name_138, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&result_type_139, 0, sizeof(struct sType*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&param_types_145, 0, sizeof(struct list$1sTypeph*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&param_names_151, 0, sizeof(struct list$1charph*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&param_default_parametors_152, 0, sizeof(struct list$1charph*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&main_fun_153, 0, sizeof(struct sFun*));
memset(&right_value203, 0, sizeof(void*));
    name_138=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("main"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168;
    __freed_obj__ = 0;
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651)))),"int",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value169;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value170;
    __freed_obj__ = 0;
    {__list_values1___140[0]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"int",(_Bool)0,info))));
__list_values1___140[1]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"char**",(_Bool)0,info))));
}    param_types_145=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value179=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value178=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652)))),2,__list_values1___140))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value171;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value172;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value178;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value179;
    __freed_obj__ = 0;
    {__list_values2___146[0]=come_increment_ref_count(((char*)(right_value180=__builtin_string("argc"))));
__list_values2___146[1]=come_increment_ref_count(((char*)(right_value181=__builtin_string("argv"))));
}    param_names_151=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653)))),2,__list_values2___146))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value180;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value181;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value185;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value186;
    __freed_obj__ = 0;
    param_default_parametors_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value188=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value187;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value188;
    __freed_obj__ = 0;
    main_fun_153=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value192=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value189=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 655)))),(char*)come_increment_ref_count(name_138),(struct sType*)come_increment_ref_count(result_type_139),(struct list$1sTypeph*)come_increment_ref_count(param_types_145),(struct list$1charph*)come_increment_ref_count(param_names_151),(struct list$1charph*)come_increment_ref_count(param_default_parametors_152),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("")))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value191;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value192;
    __freed_obj__ = 0;
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(name_138)))),(struct sFun*)come_increment_ref_count(main_fun_153));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value203;
    __freed_obj__ = 0;
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_153;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    __result102__ = 0;
    if(name_138 && !__freed_obj__) { name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_151 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_153 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result102__;
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
struct list$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_141, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_141=0 ,        0;        _for_condtionalA16=        i_141<num_value ,        _for_condtionalA16;        i_141++ ,        0        ){
            list$1sTypeph_push_back(self,values[i_141]);
        }
        __result73__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result73__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
void* right_value175;
struct list_item$1sTypeph* litem_142;
struct sType* __dec_obj31;
_Bool _if_conditional186;
void* right_value176;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj32;
void* right_value177;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj33;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
memset(&litem_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value176, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value177, 0, sizeof(void*));
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional185=self->len==0,                _if_conditional185) {
                    litem_142=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value175=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value175;
                    __freed_obj__ = 0;
                    litem_142->prev=((void*)0);
                    litem_142->next=((void*)0);
                    __dec_obj31=litem_142->item;
                    litem_142->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_142;
                    self->head=litem_142;
                }
                else {
                    if(_if_conditional186=self->len==1,                    _if_conditional186) {
                        litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value176=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value176;
                        __freed_obj__ = 0;
                        litem_143->prev=self->head;
                        litem_143->next=((void*)0);
                        __dec_obj32=litem_143->item;
                        litem_143->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_143;
                        self->head->next=litem_143;
                    }
                    else {
                        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value177;
                        __freed_obj__ = 0;
                        litem_144->prev=self->tail;
                        litem_144->next=((void*)0);
                        __dec_obj33=litem_144->item;
                        litem_144->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_144;
                        self->tail=litem_144;
                    }
                }
                self->len++;
                __result72__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result72__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_147;
_Bool _for_condtionalA17;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_147, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_147=0 ,        0;        _for_condtionalA17=        i_147<num_value ,        _for_condtionalA17;        i_147++ ,        0        ){
            list$1charph_push_back(self,values[i_147]);
        }
        __result75__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result75__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value182;
struct list_item$1charph* litem_148;
char* __dec_obj34;
_Bool _if_conditional188;
void* right_value183;
struct list_item$1charph* litem_149;
char* __dec_obj35;
void* right_value184;
struct list_item$1charph* litem_150;
char* __dec_obj36;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
memset(&right_value183, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
memset(&right_value184, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional187=self->len==0,                _if_conditional187) {
                    litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value182=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value182;
                    __freed_obj__ = 0;
                    litem_148->prev=((void*)0);
                    litem_148->next=((void*)0);
                    __dec_obj34=litem_148->item;
                    litem_148->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_148;
                    self->head=litem_148;
                }
                else {
                    if(_if_conditional188=self->len==1,                    _if_conditional188) {
                        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value183=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value183;
                        __freed_obj__ = 0;
                        litem_149->prev=self->head;
                        litem_149->next=((void*)0);
                        __dec_obj35=litem_149->item;
                        litem_149->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_149;
                        self->head->next=litem_149;
                    }
                    else {
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value184;
                        __freed_obj__ = 0;
                        litem_150->prev=self->tail;
                        litem_150->next=((void*)0);
                        __dec_obj36=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_150;
                        self->tail=litem_150;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result74__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional189=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional189) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional190=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional190) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional191=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional191) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional192=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional192) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional193=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional193) {
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional194=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional194) {
            if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional195=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional195) {
            if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional198=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional198) {
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional199=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional199) {
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional200=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional200) {
            if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional201=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional201) {
            if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional202=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional202) {
            if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional203=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional203) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional196=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional196) {
                    if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional197=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional197) {
                    if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
unsigned int hash_172;
unsigned int it_173;
_Bool _while_condtional12;
_Bool _if_conditional217;
void* right_value197;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool same_key_exist_190;
char* it2_193;
_Bool _for_condtionalA19;
void* right_value199;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct map$2charphsFunph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_172, 0, sizeof(unsigned int));
memset(&it_173, 0, sizeof(unsigned int));
memset(&right_value197, 0, sizeof(void*));
memset(&same_key_exist_190, 0, sizeof(_Bool));
memset(&it2_193, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
        if(_if_conditional204=self->len*10>=self->size,        _if_conditional204) {
            map$2charphsFunph_rehash(self);
        }
        hash_172=string_get_hash_key(key)%self->size;
        it_173=hash_172;
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            if(_if_conditional217=self->item_existance[it_173],            _if_conditional217) {
                if(_if_conditional218=optional$2boolbool_value(((struct optional$2boolbool*)(right_value197=string_equals(self->keys[it_173],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197),
                (right_value197 && right_value197 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value197, 
                __freed_obj__ = 0, 
                _if_conditional218) {
                    if(_if_conditional219=1,                    _if_conditional219) {
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        if(self->keys[it_173] && !__freed_obj__) { self->keys[it_173] = come_decrement_ref_count(self->keys[it_173], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_173]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_173]);
                        self->keys[it_173]=key;
                    }
                    if(_if_conditional239=1,                    _if_conditional239) {
                        if(self->items[it_173] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[it_173], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_173]=item;
                    }
                    break;
                }
                it_173++;
                if(_if_conditional240=it_173>=self->size,                _if_conditional240) {
                    it_173=0;
                }
                else {
                    if(_if_conditional241=it_173==hash_172,                    _if_conditional241) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_173]=(_Bool)1;
                if(_if_conditional242=1,                _if_conditional242) {
                    self->keys[it_173]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_173]=key;
                }
                if(_if_conditional243=1,                _if_conditional243) {
                    self->items[it_173]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_173]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_190=(_Bool)0;
        for(
        it2_193=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA19=        !list$1charp_end(self->key_list) ,        _for_condtionalA19;        it2_193=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional248=optional$2boolbool_value(((struct optional$2boolbool*)(right_value199=string_equals(it2_193,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199),
            (right_value199 && right_value199 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value199, 
            __freed_obj__ = 0, 
            _if_conditional248) {
                same_key_exist_190=(_Bool)1;
            }
        }
        if(_if_conditional249=!same_key_exist_190,        _if_conditional249) {
            list$1charp_push_back(self->key_list,key);
        }
        __result101__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result101__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_154;
void* right_value193;
char** keys_155;
void* right_value194;
struct sFun** items_156;
void* right_value195;
_Bool* item_existance_157;
int len_158;
char* it_161;
_Bool _for_condtionalA18;
struct sFun* default_value_164;
struct sFun* it2_168;
unsigned int hash_169;
int n_170;
_Bool _while_condtional11;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* default_value_171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_154, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&keys_155, 0, sizeof(char**));
memset(&right_value194, 0, sizeof(void*));
memset(&items_156, 0, sizeof(struct sFun**));
memset(&right_value195, 0, sizeof(void*));
memset(&item_existance_157, 0, sizeof(_Bool*));
memset(&len_158, 0, sizeof(int));
memset(&it_161, 0, sizeof(char*));
memset(&default_value_164, 0, sizeof(struct sFun*));
memset(&it2_168, 0, sizeof(struct sFun*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&n_170, 0, sizeof(int));
memset(&default_value_171, 0, sizeof(struct sFun*));
                size_154=self->size*10;
                keys_155=(char**)come_increment_ref_count(((char**)(right_value193=(char**)come_calloc(1, sizeof(char*)*(1*(size_154)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value193;
                __freed_obj__ = 0;
                items_156=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value194=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_154)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value194;
                __freed_obj__ = 0;
                item_existance_157=(_Bool*)come_increment_ref_count(((_Bool*)(right_value195=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_154)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value195;
                __freed_obj__ = 0;
                len_158=0;
                for(
                it_161=map$2charphsFunph_begin(self) ,                0;                _for_condtionalA18=                !map$2charphsFunph_end(self) ,                _for_condtionalA18;                it_161=map$2charphsFunph_next(self) ,                0                ){
                    memset(&default_value_164,0,sizeof(struct sFun*));
                    it2_168=map$2charphsFunph_at(self,it_161,default_value_164);
                    hash_169=string_get_hash_key(it_161)%size_154;
                    n_170=hash_169;
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        if(_if_conditional214=item_existance_157[n_170],                        _if_conditional214) {
                            n_170++;
                            if(_if_conditional215=n_170>=size_154,                            _if_conditional215) {
                                n_170=0;
                            }
                            else {
                                if(_if_conditional216=n_170==hash_169,                                _if_conditional216) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_157[n_170]=(_Bool)1;
                            keys_155[n_170]=it_161;
                            items_156[n_170]=map$2charphsFunph_at(self,it_161,default_value_171);
                            len_158++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_155;
                self->items=items_156;
                self->item_existance=item_existance_157;
                self->size=size_154;
                self->len=len_158;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
char* result_159;
char* __result76__;
_Bool _if_conditional206;
char* __result77__;
char* result_160;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0),                    _if_conditional205) {
                        memset(&result_159,0,sizeof(char*));
                        __result76__ = __result_obj__ = result_159;
                        return __result76__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional206=self->key_list->it,                    _if_conditional206) {
                        __result77__ = __result_obj__ = self->key_list->it->item;
                        return __result77__;
                    }
                    memset(&result_160,0,sizeof(char*));
                    __result78__ = __result_obj__ = result_160;
                    return __result78__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result79__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result79__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
char* result_162;
char* __result80__;
_Bool _if_conditional208;
char* __result81__;
char* result_163;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                    if(_if_conditional207=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional207) {
                        memset(&result_162,0,sizeof(char*));
                        __result80__ = __result_obj__ = result_162;
                        return __result80__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional208=self->key_list->it,                    _if_conditional208) {
                        __result81__ = __result_obj__ = self->key_list->it->item;
                        return __result81__;
                    }
                    memset(&result_163,0,sizeof(char*));
                    __result82__ = __result_obj__ = result_163;
                    return __result82__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional10;
_Bool _if_conditional209;
void* right_value196;
_Bool _if_conditional211;
struct sFun* __result85__;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sFun* __result86__;
struct sFun* __result87__;
struct sFun* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
memset(&right_value196, 0, sizeof(void*));
                        hash_165=string_get_hash_key(((char*)key))%self->size;
                        it_166=hash_165;
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            if(_if_conditional209=self->item_existance[it_166],                            _if_conditional209) {
                                if(_if_conditional211=optional$2boolbool_value(((struct optional$2boolbool*)(right_value196=string_equals(self->keys[it_166],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196),
                                (right_value196 && right_value196 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value196, 
                                __freed_obj__ = 0, 
                                _if_conditional211) {
                                    __result85__ = __result_obj__ = self->items[it_166];
                                    return __result85__;
                                }
                                it_166++;
                                if(_if_conditional212=it_166>=self->size,                                _if_conditional212) {
                                    it_166=0;
                                }
                                else {
                                    if(_if_conditional213=it_166==hash_165,                                    _if_conditional213) {
                                        __result86__ = __result_obj__ = default_value;
                                        return __result86__;
                                    }
                                }
                            }
                            else {
                                __result87__ = __result_obj__ = default_value;
                                return __result87__;
                            }
                        }
                        __result88__ = __result_obj__ = default_value;
                        return __result88__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
_Bool default_value_167;
_Bool __result83__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_167, 0, sizeof(_Bool));
                                    if(_if_conditional210=self==((void*)0),                                    _if_conditional210) {
                                        memset(&default_value_167,0,sizeof(_Bool));
                                        __result83__ = default_value_167;
                                        return __result83__;
                                    }
                                    else {
                                        __result84__ = self->v1;
                                        return __result84__;
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
void* right_value198;
_Bool _if_conditional220;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_174, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
memset(&right_value198, 0, sizeof(void*));
                            it2_174=0;
                            it_175=self->head;
                            while(_while_condtional13=it_175!=((void*)0),                            _while_condtional13) {
                                if(_if_conditional220=optional$2boolbool_value(((struct optional$2boolbool*)(right_value198=string_equals(it_175->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198),
                                (right_value198 && right_value198 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value198, 
                                __freed_obj__ = 0, 
                                _if_conditional220) {
                                    list$1charp_delete(self,it2_174,it2_174+1);
                                    break;
                                }
                                it2_174++;
                                it_175=it_175->next;
                            }
                            __result92__ = __result_obj__ = self;
                            return __result92__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
int tmp_176;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list$1charp* __result89__;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct list_item$1charp* it_179;
int i_180;
_Bool _while_condtional15;
_Bool _if_conditional229;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* it_182;
int i_183;
_Bool _while_condtional16;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_184;
struct list_item$1charp* it_185;
struct list_item$1charp* head_prev_it_186;
struct list_item$1charp* tail_it_187;
int i_188;
_Bool _while_condtional17;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* prev_it_189;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list$1charp* __result91__;
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
                                        if(_if_conditional221=head<0,                                        _if_conditional221) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional222=tail<0,                                        _if_conditional222) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional223=head>tail,                                        _if_conditional223) {
                                            tmp_176=tail;
                                            tail=head;
                                            head=tmp_176;
                                        }
                                        if(_if_conditional224=head<0,                                        _if_conditional224) {
                                            head=0;
                                        }
                                        if(_if_conditional225=tail>self->len,                                        _if_conditional225) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional226=head==tail,                                        _if_conditional226) {
                                            __result89__ = __result_obj__ = self;
                                            return __result89__;
                                        }
                                        if(_if_conditional227=head==0&&tail==self->len,                                        _if_conditional227) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional228=head==0,                                            _if_conditional228) {
                                                it_179=self->head;
                                                i_180=0;
                                                while(_while_condtional15=it_179!=((void*)0),                                                _while_condtional15) {
                                                    if(_if_conditional229=i_180<tail,                                                    _if_conditional229) {
                                                        prev_it_181=it_179;
                                                        it_179=it_179->next;
                                                        i_180++;
                                                        if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional230=i_180==tail,                                                        _if_conditional230) {
                                                            self->head=it_179;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_179=it_179->next;
                                                            i_180++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional231=tail==self->len,                                                _if_conditional231) {
                                                    it_182=self->head;
                                                    i_183=0;
                                                    while(_while_condtional16=it_182!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional232=i_183==head,                                                        _if_conditional232) {
                                                            self->tail=it_182->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional233=i_183>=head,                                                        _if_conditional233) {
                                                            prev_it_184=it_182;
                                                            it_182=it_182->next;
                                                            i_183++;
                                                            if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_182=it_182->next;
                                                            i_183++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_185=self->head;
                                                    head_prev_it_186=((void*)0);
                                                    tail_it_187=((void*)0);
                                                    i_188=0;
                                                    while(_while_condtional17=it_185!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional234=i_188==head,                                                        _if_conditional234) {
                                                            head_prev_it_186=it_185->prev;
                                                        }
                                                        if(_if_conditional235=i_188==tail,                                                        _if_conditional235) {
                                                            tail_it_187=it_185;
                                                        }
                                                        if(_if_conditional236=i_188>=head&&i_188<tail,                                                        _if_conditional236) {
                                                            prev_it_189=it_185;
                                                            it_185=it_185->next;
                                                            i_188++;
                                                            if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_185=it_185->next;
                                                            i_188++;
                                                        }
                                                    }
                                                    if(_if_conditional237=head_prev_it_186!=((void*)0),                                                    _if_conditional237) {
                                                        head_prev_it_186->next=tail_it_187;
                                                    }
                                                    if(_if_conditional238=tail_it_187!=((void*)0),                                                    _if_conditional238) {
                                                        tail_it_187->prev=head_prev_it_186;
                                                    }
                                                }
                                            }
                                        }
                                        __result91__ = __result_obj__ = self;
                                        return __result91__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_177;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_178;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_178, 0, sizeof(struct list_item$1charp*));
                                                it_177=self->head;
                                                while(_while_condtional14=it_177!=((void*)0),                                                _while_condtional14) {
                                                    prev_it_178=it_177;
                                                    it_177=it_177->next;
                                                    if(prev_it_178 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result90__ = __result_obj__ = self;
                                                return __result90__;
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
_Bool _if_conditional244;
char* result_191;
char* __result93__;
_Bool _if_conditional245;
char* __result94__;
char* result_192;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(char*));
memset(&result_192, 0, sizeof(char*));
            if(_if_conditional244=self==((void*)0),            _if_conditional244) {
                memset(&result_191,0,sizeof(char*));
                __result93__ = __result_obj__ = result_191;
                return __result93__;
            }
            self->it=self->head;
            if(_if_conditional245=self->it,            _if_conditional245) {
                __result94__ = __result_obj__ = self->it->item;
                return __result94__;
            }
            memset(&result_192,0,sizeof(char*));
            __result95__ = __result_obj__ = result_192;
            return __result95__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result96__ = self==((void*)0)||self->it==((void*)0);
            return __result96__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
char* result_194;
char* __result97__;
_Bool _if_conditional247;
char* __result98__;
char* result_195;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(char*));
memset(&result_195, 0, sizeof(char*));
            if(_if_conditional246=self==((void*)0)||self->it==((void*)0),            _if_conditional246) {
                memset(&result_194,0,sizeof(char*));
                __result97__ = __result_obj__ = result_194;
                return __result97__;
            }
            self->it=self->it->next;
            if(_if_conditional247=self->it,            _if_conditional247) {
                __result98__ = __result_obj__ = self->it->item;
                return __result98__;
            }
            memset(&result_195,0,sizeof(char*));
            __result99__ = __result_obj__ = result_195;
            return __result99__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
void* right_value200;
struct list_item$1charp* litem_196;
_Bool _if_conditional251;
void* right_value201;
struct list_item$1charp* litem_197;
void* right_value202;
struct list_item$1charp* litem_198;
struct list$1charp* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1charp*));
memset(&right_value201, 0, sizeof(void*));
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
memset(&right_value202, 0, sizeof(void*));
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional250=self->len==0,                _if_conditional250) {
                    litem_196=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value200=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value200;
                    __freed_obj__ = 0;
                    litem_196->prev=((void*)0);
                    litem_196->next=((void*)0);
                    litem_196->item=item;
                    self->tail=litem_196;
                    self->head=litem_196;
                }
                else {
                    if(_if_conditional251=self->len==1,                    _if_conditional251) {
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value201=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value201;
                        __freed_obj__ = 0;
                        litem_197->prev=self->head;
                        litem_197->next=((void*)0);
                        litem_197->item=item;
                        self->tail=litem_197;
                        self->head->next=litem_197;
                    }
                    else {
                        litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value202=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value202;
                        __freed_obj__ = 0;
                        litem_198->prev=self->tail;
                        litem_198->next=((void*)0);
                        litem_198->item=item;
                        self->tail->next=litem_198;
                        self->tail=litem_198;
                    }
                }
                self->len++;
                __result100__ = __result_obj__ = self;
                return __result100__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
char* output_file_name_199;
struct _IO_FILE* f_200;
void* right_value205;
struct map$2charphsFunph* o2_saved_201;
char* it_202;
_Bool _for_condtionalA20;
void* right_value206;
struct sFun* it2_206;
void* right_value210;
char* header_207;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct map$2charphsFunph* o2_saved_212;
char* it_213;
_Bool _for_condtionalA23;
void* right_value211;
struct sFun* it2_214;
void* right_value212;
char* header_215;
_Bool _if_conditional264;
void* right_value213;
char* output_216;
_Bool _if_conditional265;
void* right_value214;
char* output_217;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct map$2charphsFunph* o2_saved_218;
char* it_219;
_Bool _for_condtionalA24;
struct sFun* it2_220;
_Bool _if_conditional268;
void* right_value215;
char* output_221;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&output_file_name_199, 0, sizeof(char*));
memset(&f_200, 0, sizeof(struct _IO_FILE*));
memset(&right_value205, 0, sizeof(void*));
memset(&o2_saved_201, 0, sizeof(struct map$2charphsFunph*));
memset(&it_202, 0, sizeof(char*));
memset(&right_value206, 0, sizeof(void*));
memset(&it2_206, 0, sizeof(struct sFun*));
memset(&right_value210, 0, sizeof(void*));
memset(&header_207, 0, sizeof(char*));
memset(&o2_saved_212, 0, sizeof(struct map$2charphsFunph*));
memset(&it_213, 0, sizeof(char*));
memset(&right_value211, 0, sizeof(void*));
memset(&it2_214, 0, sizeof(struct sFun*));
memset(&right_value212, 0, sizeof(void*));
memset(&header_215, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&output_216, 0, sizeof(char*));
memset(&right_value214, 0, sizeof(void*));
memset(&output_217, 0, sizeof(char*));
memset(&o2_saved_218, 0, sizeof(struct map$2charphsFunph*));
memset(&it_219, 0, sizeof(char*));
memset(&it2_220, 0, sizeof(struct sFun*));
memset(&right_value215, 0, sizeof(void*));
memset(&output_221, 0, sizeof(char*));
    output_file_name_199=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("%s.c",info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = 0;
    f_200=fopen(output_file_name_199,"w");
    fprintf(f_200,"// source head\n");
    fprintf(f_200,"%s\n",((char*)(right_value205=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = 0;
    fprintf(f_200,"// header function\n");
    for(
    o2_saved_201=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_202=map$2charphsFunph_begin((o2_saved_201)) ,    0;    _for_condtionalA20=    !map$2charphsFunph_end((o2_saved_201)) ,    _for_condtionalA20;    it_202=map$2charphsFunph_next((o2_saved_201)) ,    0    ){
        it2_206=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value206=__builtin_string(it_202))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
        header_207=(char*)come_increment_ref_count(((char*)(right_value210=header_function(it2_206,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value210;
        __freed_obj__ = 0;
        if(_if_conditional256=it2_206->mStatic&&it2_206->mResultType->mInline,        _if_conditional256) {
        }
        else {
            if(_if_conditional257=it2_206->mStatic,            _if_conditional257) {
                fprintf(f_200,"static %s",header_207);
            }
            else {
                if(_if_conditional258=it2_206->mResultType->mInline,                _if_conditional258) {
                }
                else {
                    if(_if_conditional259=string_operator_not_equals(it_202,"__builtin_va_start")&&string_operator_not_equals(it_202,"__builtin_va_end"),                    _if_conditional259) {
                        fprintf(f_200,"%s\n",header_207,it_202);
                    }
                }
            }
        }
        if(header_207 && !__freed_obj__) { header_207 = come_decrement_ref_count(header_207, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_200,"// inline function\n");
    for(
    o2_saved_212=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_213=map$2charphsFunph_begin((o2_saved_212)) ,    0;    _for_condtionalA23=    !map$2charphsFunph_end((o2_saved_212)) ,    _for_condtionalA23;    it_213=map$2charphsFunph_next((o2_saved_212)) ,    0    ){
        it2_214=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value211=__builtin_string(it_213))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211;
        __freed_obj__ = 0;
        header_215=(char*)come_increment_ref_count(((char*)(right_value212=header_function(it2_214,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value212;
        __freed_obj__ = 0;
        if(_if_conditional264=it2_214->mStatic&&it2_214->mResultType->mInline,        _if_conditional264) {
            output_216=(char*)come_increment_ref_count(((char*)(right_value213=output_function(it2_214,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value213;
            __freed_obj__ = 0;
            fprintf(f_200,"static inline %s",output_216);
            if(output_216 && !__freed_obj__) { output_216 = come_decrement_ref_count(output_216, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional265=it2_214->mResultType->mInline,            _if_conditional265) {
                output_217=(char*)come_increment_ref_count(((char*)(right_value214=output_function(it2_214,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value214;
                __freed_obj__ = 0;
                fprintf(f_200,"static inline %s",output_217);
                if(output_217 && !__freed_obj__) { output_217 = come_decrement_ref_count(output_217, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional266=it2_214->mStatic,                _if_conditional266) {
                }
                else {
                    if(_if_conditional267=string_operator_not_equals(it_213,"__builtin_va_start")&&string_operator_not_equals(it_213,"__builtin_va_end"),                    _if_conditional267) {
                    }
                }
            }
        }
        if(header_215 && !__freed_obj__) { header_215 = come_decrement_ref_count(header_215, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_212 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_200,"\n");
    fprintf(f_200,"// body function\n");
    for(
    o2_saved_218=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_219=map$2charphsFunph_begin((o2_saved_218)) ,    0;    _for_condtionalA24=    !map$2charphsFunph_end((o2_saved_218)) ,    _for_condtionalA24;    it_219=map$2charphsFunph_next((o2_saved_218)) ,    0    ){
        it2_220=map$2charphsFunphp_operator_load_element(info->funcs,it_219);
        if(_if_conditional268=!it2_220->mExternal,        _if_conditional268) {
            output_221=(char*)come_increment_ref_count(((char*)(right_value215=output_function(it2_220,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value215;
            __freed_obj__ = 0;
            if(_if_conditional269=it2_220->mStatic&&it2_220->mResultType->mInline,            _if_conditional269) {
            }
            else {
                if(_if_conditional270=it2_220->mStatic,                _if_conditional270) {
                    fprintf(f_200,"static %s",output_221);
                }
                else {
                    if(_if_conditional271=it2_220->mResultType->mInline,                    _if_conditional271) {
                    }
                    else {
                        fprintf(f_200,"%s",output_221);
                    }
                }
            }
            fprintf(f_200,"\n");
            if(output_221 && !__freed_obj__) { output_221 = come_decrement_ref_count(output_221, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    if(o2_saved_218 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    fclose(f_200);
    __result108__ = (_Bool)1;
    if(output_file_name_199 && !__freed_obj__) { output_file_name_199 = come_decrement_ref_count(output_file_name_199, (void*)0, (void*)0, 0, 0, 0); }
    return __result108__;
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
_Bool _if_conditional252;
void* right_value207;
_Bool _if_conditional253;
struct sFun* __result103__;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct sFun* __result104__;
struct sFun* __result105__;
void* right_value208;
void* right_value209;
struct sFun* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_203, 0, sizeof(struct sFun*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
            memset(&default_value_203,0,sizeof(struct sFun*));
            hash_204=string_get_hash_key(((char*)key))%self->size;
            it_205=hash_204;
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                if(_if_conditional252=self->item_existance[it_205],                _if_conditional252) {
                    if(_if_conditional253=optional$2boolbool_value(((struct optional$2boolbool*)(right_value207=string_equals(self->keys[it_205],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207),
                    (right_value207 && right_value207 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value207, 
                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        __result103__ = __result_obj__ = self->items[it_205];
                        return __result103__;
                    }
                    it_205++;
                    if(_if_conditional254=it_205>=self->size,                    _if_conditional254) {
                        it_205=0;
                    }
                    else {
                        if(_if_conditional255=it_205==hash_204,                        _if_conditional255) {
                            __result104__ = __result_obj__ = default_value_203;
                            return __result104__;
                        }
                    }
                }
                else {
                    __result105__ = __result_obj__ = default_value_203;
                    return __result105__;
                }
            }
            __result107__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value209=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value208=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_203,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value208;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value209;
            __freed_obj__ = 0;
            return __result107__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result106__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result106__;
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
_Bool _if_conditional260;
_Bool _if_conditional261;
int i_209;
_Bool _for_condtionalA22;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_208, 0, sizeof(int));
memset(&i_209, 0, sizeof(int));
        for(
        i_208=0 ,        0;        _for_condtionalA21=        i_208<self->size ,        _for_condtionalA21;        i_208++ ,        0        ){
            if(_if_conditional260=self->item_existance[i_208],            _if_conditional260) {
                if(_if_conditional261=1,                _if_conditional261) {
                    if(self->items[i_208] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[i_208], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        come_free_object((char*)self->items);
        for(
        i_209=0 ,        0;        _for_condtionalA22=        i_209<self->size ,        _for_condtionalA22;        i_209++ ,        0        ){
            if(_if_conditional262=self->item_existance[i_209],            _if_conditional262) {
                if(_if_conditional263=1,                _if_conditional263) {
                    if(self->keys[i_209] && !__freed_obj__) { self->keys[i_209] = come_decrement_ref_count(self->keys[i_209], (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        come_free_object((char*)self->keys);
        if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            it_210=self->head;
            while(_while_condtional19=it_210!=((void*)0),            _while_condtional19) {
                prev_it_211=it_210;
                it_210=it_210->next;
                if(prev_it_211 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_222;
struct _IO_FILE* f_223;
_Bool _if_conditional272;
void* right_value216;
struct map$2charphsFunph* o2_saved_224;
char* it_225;
_Bool _for_condtionalA25;
void* right_value217;
struct sFun* it2_226;
void* right_value218;
char* header_227;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
struct map$2charphsFunph* o2_saved_228;
char* it_229;
_Bool _for_condtionalA26;
void* right_value219;
struct sFun* it2_230;
void* right_value220;
char* header_231;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value221;
char* output_232;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value222;
char* output_233;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_222, 0, sizeof(char*));
memset(&f_223, 0, sizeof(struct _IO_FILE*));
memset(&right_value216, 0, sizeof(void*));
memset(&o2_saved_224, 0, sizeof(struct map$2charphsFunph*));
memset(&it_225, 0, sizeof(char*));
memset(&right_value217, 0, sizeof(void*));
memset(&it2_226, 0, sizeof(struct sFun*));
memset(&right_value218, 0, sizeof(void*));
memset(&header_227, 0, sizeof(char*));
memset(&o2_saved_228, 0, sizeof(struct map$2charphsFunph*));
memset(&it_229, 0, sizeof(char*));
memset(&right_value219, 0, sizeof(void*));
memset(&it2_230, 0, sizeof(struct sFun*));
memset(&right_value220, 0, sizeof(void*));
memset(&header_231, 0, sizeof(char*));
memset(&right_value221, 0, sizeof(void*));
memset(&output_232, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&output_233, 0, sizeof(char*));
    output_file_name_222=(char*)come_increment_ref_count(info->output_file_name);
    f_223=fopen(output_file_name_222,"a");
    if(_if_conditional272=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional272) {
        fprintf(f_223,"#ifndef __COMMON_H__\n");
        fprintf(f_223,"#define __COMMON_H__\n");
        fprintf(f_223,"#include <comelang2.h>\n");
    }
    fprintf(f_223,"// source head\n");
    fprintf(f_223,"%s\n",((char*)(right_value216=buffer_to_string(info->module->mSourceHead))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value216;
    __freed_obj__ = 0;
    fprintf(f_223,"// header function\n");
    for(
    o2_saved_224=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_225=map$2charphsFunph_begin((o2_saved_224)) ,    0;    _for_condtionalA25=    !map$2charphsFunph_end((o2_saved_224)) ,    _for_condtionalA25;    it_225=map$2charphsFunph_next((o2_saved_224)) ,    0    ){
        it2_226=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value217=__builtin_string(it_225))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217;
        __freed_obj__ = 0;
        header_227=(char*)come_increment_ref_count(((char*)(right_value218=header_function(it2_226,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value218;
        __freed_obj__ = 0;
        if(_if_conditional273=it2_226->mStatic&&it2_226->mResultType->mInline,        _if_conditional273) {
        }
        else {
            if(_if_conditional274=it2_226->mStatic,            _if_conditional274) {
            }
            else {
                if(_if_conditional275=it2_226->mResultType->mInline,                _if_conditional275) {
                }
                else {
                    if(_if_conditional276=string_operator_not_equals(it_225,"__builtin_va_start")&&string_operator_not_equals(it_225,"__builtin_va_end"),                    _if_conditional276) {
                        if(_if_conditional277=string_operator_equals(it2_226->mDeclareSName,info->base_sname),                        _if_conditional277) {
                            fprintf(f_223,"%s\n",header_227,it_225);
                        }
                    }
                }
            }
        }
        if(header_227 && !__freed_obj__) { header_227 = come_decrement_ref_count(header_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_224 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_223,"// inline function\n");
    for(
    o2_saved_228=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_229=map$2charphsFunph_begin((o2_saved_228)) ,    0;    _for_condtionalA26=    !map$2charphsFunph_end((o2_saved_228)) ,    _for_condtionalA26;    it_229=map$2charphsFunph_next((o2_saved_228)) ,    0    ){
        it2_230=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value219=__builtin_string(it_229))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value219;
        __freed_obj__ = 0;
        header_231=(char*)come_increment_ref_count(((char*)(right_value220=header_function(it2_230,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value220;
        __freed_obj__ = 0;
        if(_if_conditional278=it2_230->mStatic&&it2_230->mResultType->mInline,        _if_conditional278) {
            if(_if_conditional279=string_operator_equals(it2_230->mDeclareSName,info->base_sname),            _if_conditional279) {
                output_232=(char*)come_increment_ref_count(((char*)(right_value221=output_function(it2_230,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value221;
                __freed_obj__ = 0;
                fprintf(f_223,"static inline %s",output_232);
                if(output_232 && !__freed_obj__) { output_232 = come_decrement_ref_count(output_232, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            if(_if_conditional280=it2_230->mResultType->mInline,            _if_conditional280) {
                if(_if_conditional281=string_operator_equals(it2_230->mDeclareSName,info->base_sname),                _if_conditional281) {
                    output_233=(char*)come_increment_ref_count(((char*)(right_value222=output_function(it2_230,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value222;
                    __freed_obj__ = 0;
                    fprintf(f_223,"static inline %s",output_233);
                    if(output_233 && !__freed_obj__) { output_233 = come_decrement_ref_count(output_233, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                if(_if_conditional282=it2_230->mStatic,                _if_conditional282) {
                }
                else {
                    if(_if_conditional283=string_operator_not_equals(it_229,"__builtin_va_start")&&string_operator_not_equals(it_229,"__builtin_va_end"),                    _if_conditional283) {
                    }
                }
            }
        }
        if(header_231 && !__freed_obj__) { header_231 = come_decrement_ref_count(header_231, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_228 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    fprintf(f_223,"\n");
    if(_if_conditional284=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional284) {
        fprintf(f_223,"#endif\n");
    }
    fclose(f_223);
    __result109__ = (_Bool)1;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
    return __result109__;
    if(output_file_name_222 && !__freed_obj__) { output_file_name_222 = come_decrement_ref_count(output_file_name_222, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
char* msg2_234;
va_list args_235;
int len_236;
_Bool _if_conditional286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_234, 0, sizeof(char*));
memset(&args_235, 0, sizeof(va_list));
memset(&len_236, 0, sizeof(int));
    if(_if_conditional285=info->no_output_come_code,    _if_conditional285) {
        return;
    }
    __builtin_va_start(args_235,code);
    len_236=vasprintf(&msg2_234,code,args_235);
    __builtin_va_end(args_235);
    if(_if_conditional286=info->come_fun,    _if_conditional286) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_234);
    }
    free(msg2_234);
    if((&args_235) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_235), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
char* msg2_237;
va_list args_238;
int len_239;
_Bool _if_conditional288;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_237, 0, sizeof(char*));
memset(&args_238, 0, sizeof(va_list));
memset(&len_239, 0, sizeof(int));
    if(_if_conditional287=info->no_output_come_code,    _if_conditional287) {
        return;
    }
    __builtin_va_start(args_238,code);
    len_239=vasprintf(&msg2_237,code,args_238);
    __builtin_va_end(args_238);
    if(_if_conditional288=info->come_fun,    _if_conditional288) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_237);
    }
    free(msg2_237);
    if((&args_238) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_238), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
_Bool _if_conditional290;
char* __dec_obj37;
_Bool _if_conditional291;
char* __dec_obj38;
_Bool _if_conditional292;
char* __dec_obj39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional289=info->no_output_come_code,    _if_conditional289) {
        return;
    }
    if(_if_conditional290=info->module->mLastCode,    _if_conditional290) {
        add_come_code(info,"%s",info->module->mLastCode);
        __dec_obj37=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional291=info->module->mLastCode2,    _if_conditional291) {
        add_come_code(info,"%s",info->module->mLastCode2);
        __dec_obj38=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional292=info->module->mLastCode3,    _if_conditional292) {
        add_come_code(info,"%s",info->module->mLastCode3);
        __dec_obj39=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value223;
char* __dec_obj40;
_Bool _if_conditional295;
void* right_value224;
char* __dec_obj41;
_Bool _if_conditional296;
void* right_value225;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    if(_if_conditional293=info->no_output_come_code,    _if_conditional293) {
        return;
    }
    if(_if_conditional294=info->module->mLastCode,    _if_conditional294) {
        add_come_code(info,"%s ,",((char*)(right_value223=string_substring(info->module->mLastCode,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = 0;
        __dec_obj40=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional295=info->module->mLastCode2,    _if_conditional295) {
        add_come_code(info,"%s ,",((char*)(right_value224=string_substring(info->module->mLastCode2,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value224;
        __freed_obj__ = 0;
        __dec_obj41=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    }
    if(_if_conditional296=info->module->mLastCode3,    _if_conditional296) {
        add_come_code(info,"%s ,",((char*)(right_value225=string_substring(info->module->mLastCode3,0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value225;
        __freed_obj__ = 0;
        __dec_obj42=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
char* msg2_240;
va_list args_241;
int len_242;
void* right_value226;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_240, 0, sizeof(char*));
memset(&args_241, 0, sizeof(va_list));
memset(&len_242, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
    if(_if_conditional297=info->no_output_come_code,    _if_conditional297) {
        return;
    }
    __builtin_va_start(args_241,msg);
    len_242=vasprintf(&msg2_240,msg,args_241);
    __builtin_va_end(args_241);
    __dec_obj43=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("%s",msg2_240))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    free(msg2_240);
    if((&args_241) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_241), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
char* msg2_243;
va_list args_244;
int len_245;
void* right_value227;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
memset(&len_245, 0, sizeof(int));
memset(&right_value227, 0, sizeof(void*));
    if(_if_conditional298=info->no_output_come_code,    _if_conditional298) {
        return;
    }
    __builtin_va_start(args_244,msg);
    len_245=vasprintf(&msg2_243,msg,args_244);
    __builtin_va_end(args_244);
    __dec_obj44=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s",msg2_243))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = 0;
    free(msg2_243);
    if((&args_244) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_244), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional299;
char* msg2_246;
va_list args_247;
int len_248;
void* right_value228;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_246, 0, sizeof(char*));
memset(&args_247, 0, sizeof(va_list));
memset(&len_248, 0, sizeof(int));
memset(&right_value228, 0, sizeof(void*));
    if(_if_conditional299=info->no_output_come_code,    _if_conditional299) {
        return;
    }
    __builtin_va_start(args_247,msg);
    len_248=vasprintf(&msg2_246,msg,args_247);
    __builtin_va_end(args_247);
    __dec_obj45=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s",msg2_246))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    free(msg2_246);
    if((&args_247) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_247), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
int tmp_249;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list$1CVALUEph* __result110__;
_Bool _if_conditional306;
_Bool _if_conditional308;
struct list_item$1CVALUEph* it_252;
int i_253;
_Bool _while_condtional21;
_Bool _if_conditional309;
struct list_item$1CVALUEph* prev_it_254;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list_item$1CVALUEph* it_255;
int i_256;
_Bool _while_condtional22;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list_item$1CVALUEph* prev_it_257;
struct list_item$1CVALUEph* it_258;
struct list_item$1CVALUEph* head_prev_it_259;
struct list_item$1CVALUEph* tail_it_260;
int i_261;
_Bool _while_condtional23;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list_item$1CVALUEph* prev_it_262;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct list$1CVALUEph* __result112__;
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
        if(_if_conditional300=head<0,        _if_conditional300) {
            head+=self->len;
        }
        if(_if_conditional301=tail<0,        _if_conditional301) {
            tail+=self->len+1;
        }
        if(_if_conditional302=head>tail,        _if_conditional302) {
            tmp_249=tail;
            tail=head;
            head=tmp_249;
        }
        if(_if_conditional303=head<0,        _if_conditional303) {
            head=0;
        }
        if(_if_conditional304=tail>self->len,        _if_conditional304) {
            tail=self->len;
        }
        if(_if_conditional305=head==tail,        _if_conditional305) {
            __result110__ = __result_obj__ = self;
            return __result110__;
        }
        if(_if_conditional306=head==0&&tail==self->len,        _if_conditional306) {
            list$1CVALUEph_reset(self);
        }
        else {
            if(_if_conditional308=head==0,            _if_conditional308) {
                it_252=self->head;
                i_253=0;
                while(_while_condtional21=it_252!=((void*)0),                _while_condtional21) {
                    if(_if_conditional309=i_253<tail,                    _if_conditional309) {
                        prev_it_254=it_252;
                        it_252=it_252->next;
                        i_253++;
                        if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->len--;
                    }
                    else {
                        if(_if_conditional310=i_253==tail,                        _if_conditional310) {
                            self->head=it_252;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_252=it_252->next;
                            i_253++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional311=tail==self->len,                _if_conditional311) {
                    it_255=self->head;
                    i_256=0;
                    while(_while_condtional22=it_255!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional312=i_256==head,                        _if_conditional312) {
                            self->tail=it_255->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional313=i_256>=head,                        _if_conditional313) {
                            prev_it_257=it_255;
                            it_255=it_255->next;
                            i_256++;
                            if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->len--;
                        }
                        else {
                            it_255=it_255->next;
                            i_256++;
                        }
                    }
                }
                else {
                    it_258=self->head;
                    head_prev_it_259=((void*)0);
                    tail_it_260=((void*)0);
                    i_261=0;
                    while(_while_condtional23=it_258!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional314=i_261==head,                        _if_conditional314) {
                            head_prev_it_259=it_258->prev;
                        }
                        if(_if_conditional315=i_261==tail,                        _if_conditional315) {
                            tail_it_260=it_258;
                        }
                        if(_if_conditional316=i_261>=head&&i_261<tail,                        _if_conditional316) {
                            prev_it_262=it_258;
                            it_258=it_258->next;
                            i_261++;
                            if(prev_it_262 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->len--;
                        }
                        else {
                            it_258=it_258->next;
                            i_261++;
                        }
                    }
                    if(_if_conditional317=head_prev_it_259!=((void*)0),                    _if_conditional317) {
                        head_prev_it_259->next=tail_it_260;
                    }
                    if(_if_conditional318=tail_it_260!=((void*)0),                    _if_conditional318) {
                        tail_it_260->prev=head_prev_it_259;
                    }
                }
            }
        }
        __result112__ = __result_obj__ = self;
        return __result112__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_250;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_251;
struct list$1CVALUEph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_250, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_251, 0, sizeof(struct list_item$1CVALUEph*));
                it_250=self->head;
                while(_while_condtional20=it_250!=((void*)0),                _while_condtional20) {
                    prev_it_251=it_250;
                    it_250=it_250->next;
                    if(prev_it_251 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result111__ = __result_obj__ = self;
                return __result111__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional307=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional307) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj46;
void* right_value232;
struct CVALUE* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
    __dec_obj46=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __result117__ = __result_obj__ = ((struct CVALUE*)(right_value232=CVALUE_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232;
    __freed_obj__ = 0;
    return __result117__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional319;
struct list_item$1CVALUEph* it_263;
int i_264;
_Bool _while_condtional24;
_Bool _if_conditional320;
struct CVALUE* __result113__;
struct CVALUE* default_value_265;
struct CVALUE* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
memset(&default_value_265, 0, sizeof(struct CVALUE*));
        if(_if_conditional319=position<0,        _if_conditional319) {
            position+=self->len;
        }
        it_263=self->head;
        i_264=0;
        while(_while_condtional24=it_263!=((void*)0),        _while_condtional24) {
            if(_if_conditional320=position==i_264,            _if_conditional320) {
                __result113__ = __result_obj__ = it_263->item;
                return __result113__;
            }
            it_263=it_263->next;
            i_264++;
        }
        memset(&default_value_265,0,sizeof(struct CVALUE*));
        __result114__ = __result_obj__ = default_value_265;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result114__;
        if(default_value_265 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
struct CVALUE* __result115__;
void* right_value229;
struct CVALUE* result_266;
_Bool _if_conditional322;
void* right_value230;
char* __dec_obj47;
_Bool _if_conditional323;
void* right_value231;
struct sType* __dec_obj48;
_Bool _if_conditional324;
struct CVALUE* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct CVALUE*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
        if(_if_conditional321=self==(void*)0,        _if_conditional321) {
            __result115__ = __result_obj__ = (void*)0;
            return __result115__;
        }
        result_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = 0;
        if(_if_conditional322=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional322) {
            __dec_obj47=result_266->c_value;
            result_266->c_value=(char*)come_increment_ref_count(((char*)(right_value230=string_clone(self->c_value))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
            if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value230;
            __freed_obj__ = 0;
        }
        if(_if_conditional323=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional323) {
            __dec_obj48=result_266->type;
            result_266->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(self->type))));
            if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value231;
            __freed_obj__ = 0;
        }
        if(_if_conditional324=self!=((void*)0),        _if_conditional324) {
            result_266->var=self->var;
        }
        __result116__ = __result_obj__ = result_266;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result116__;
        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __dec_obj49=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __dec_obj50=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __dec_obj51=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
}

