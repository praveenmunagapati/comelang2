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
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
_Bool sStructNode_terminated();

char* sStructNode_kind();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

char* sStructNobodyNode_kind();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

char* sGenericsStructNode_kind();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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

char* get_none_generics_name(char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
void* right_value10;
char* __exception_result_var_b1;
void* right_value11;
char* __exception_result_var_b2;
char* __result13__;
void* right_value12;
char* __exception_result_var_b3;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_5, 0, sizeof(char*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
    # 5 "14struct.c"
    p_5=class_name;
    # 15 "14struct.c"
    while(_while_condtional1=*p_5,    _while_condtional1) {
        # 13 "14struct.c"
        # 7 "14struct.c"
        if(_if_conditional5=*p_5==36,        _if_conditional5) {
            # 8 "14struct.c"
            __result13__ = __result_obj__ = (come_push_stackframe("14struct.c", 8),__exception_result_var_b2=((char*)(right_value11=string_substring(((char*)come_null_check((come_push_stackframe("14struct.c", 8),__exception_result_var_b1=((char*)(right_value10=__builtin_string(class_name))), come_pop_stackframe(), __exception_result_var_b1), "14struct.c", 8)),0,p_5-class_name))), come_pop_stackframe(), __exception_result_var_b2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value10;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value11;
            __freed_obj__ = 0;
            return __result13__;
        }
        else {
            # 11 "14struct.c"
            p_5++;
        }
    }
    # 15 "14struct.c"
    __result14__ = __result_obj__ = (come_push_stackframe("14struct.c", 15),__exception_result_var_b3=((char*)(right_value12=__builtin_string(class_name))), come_pop_stackframe(), __exception_result_var_b3);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    return __result14__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* __exception_result_var_b4;
struct buffer* buf_6;
struct sClass* klass_7;
char* class_name_8;
struct buffer* __exception_result_var_b5;
int __exception_result_var_b6;
_Bool _if_conditional6;
struct buffer* __exception_result_var_b7;
int __exception_result_var_b8;
struct buffer* __exception_result_var_b9;
int i_9;
int __exception_result_var_b10;
_Bool _for_condtionalA1;
struct sType* __exception_result_var_b12;
struct sType* type_19;
void* right_value15;
char* __exception_result_var_b13;
char* type_name_20;
struct buffer* __exception_result_var_b14;
int i_21;
_Bool _for_condtionalA2;
struct buffer* __exception_result_var_b15;
_Bool _if_conditional25;
struct buffer* __exception_result_var_b16;
void* right_value16;
char* __exception_result_var_b17;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&klass_7, 0, sizeof(struct sClass*));
memset(&class_name_8, 0, sizeof(char*));
memset(&i_9, 0, sizeof(int));
memset(&type_19, 0, sizeof(struct sType*));
memset(&right_value15, 0, sizeof(void*));
memset(&type_name_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
memset(&right_value16, 0, sizeof(void*));
    # 20 "14struct.c"
    buf_6=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 20),__exception_result_var_b4=((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20))))))), come_pop_stackframe(), __exception_result_var_b4));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = 0;
    # 22 "14struct.c"
    klass_7=((struct sType*)come_null_check(generics_type, "14struct.c", 22))->mClass;
    # 24 "14struct.c"
    class_name_8=((struct sClass*)come_null_check(klass_7, "14struct.c", 24))->mName;
    # 26 "14struct.c"
    (come_push_stackframe("14struct.c", 26),__exception_result_var_b5=buffer_append_str(((struct buffer*)come_null_check(buf_6, "14struct.c", 26)),class_name_8), come_pop_stackframe(), __exception_result_var_b5);
    # 48 "14struct.c"
    # 28 "14struct.c"
    if(_if_conditional6=(come_push_stackframe("14struct.c", 28),__exception_result_var_b6=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 28))->mGenericsTypes, "14struct.c", 28))), come_pop_stackframe(), __exception_result_var_b6)>0,    _if_conditional6) {
        # 29 "14struct.c"
        (come_push_stackframe("14struct.c", 29),__exception_result_var_b7=buffer_append_char(((struct buffer*)come_null_check(buf_6, "14struct.c", 29)),36), come_pop_stackframe(), __exception_result_var_b7);
        # 30 "14struct.c"
        (come_push_stackframe("14struct.c", 30),__exception_result_var_b9=buffer_append_char(((struct buffer*)come_null_check(buf_6, "14struct.c", 30)),(come_push_stackframe("14struct.c", 30),__exception_result_var_b8=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 30))->mGenericsTypes, "14struct.c", 30))), come_pop_stackframe(), __exception_result_var_b8)+48), come_pop_stackframe(), __exception_result_var_b9);
        # 46 "14struct.c"
        for(
        i_9=0 ,        0;        _for_condtionalA1=        i_9<(come_push_stackframe("14struct.c", 32),__exception_result_var_b10=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 32))->mGenericsTypes, "14struct.c", 32))), come_pop_stackframe(), __exception_result_var_b10) ,        _for_condtionalA1;        i_9++ ,        0        ){
            # 33 "14struct.c"
            type_19=(come_push_stackframe("14struct.c", 33),__exception_result_var_b12=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "14struct.c", 33))->mGenericsTypes,i_9), come_pop_stackframe(), __exception_result_var_b12);
            # 34 "14struct.c"
            type_name_20=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 34),__exception_result_var_b13=((char*)(right_value15=create_generics_name(type_19,info))), come_pop_stackframe(), __exception_result_var_b13));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
            # 36 "14struct.c"
            (come_push_stackframe("14struct.c", 36),__exception_result_var_b14=buffer_append_str(((struct buffer*)come_null_check(buf_6, "14struct.c", 36)),type_name_20), come_pop_stackframe(), __exception_result_var_b14);
            # 42 "14struct.c"
            for(
            i_21=0 ,            0;            _for_condtionalA2=            i_21<((struct sType*)come_null_check(type_19, "14struct.c", 38))->mPointerNum ,            _for_condtionalA2;            i_21++ ,            0            ){
                # 39 "14struct.c"
                (come_push_stackframe("14struct.c", 39),__exception_result_var_b15=buffer_append_char(((struct buffer*)come_null_check(buf_6, "14struct.c", 39)),112), come_pop_stackframe(), __exception_result_var_b15);
            }
            # 45 "14struct.c"
            # 42 "14struct.c"
            if(_if_conditional25=((struct sType*)come_null_check(type_19, "14struct.c", 42))->mHeap,            _if_conditional25) {
                # 43 "14struct.c"
                (come_push_stackframe("14struct.c", 43),__exception_result_var_b16=buffer_append_str(((struct buffer*)come_null_check(buf_6, "14struct.c", 43)),"h"), come_pop_stackframe(), __exception_result_var_b16);
            }
            if(type_name_20 && !__freed_obj__) { type_name_20 = come_decrement_ref_count(type_name_20, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 48 "14struct.c"
    __result18__ = __result_obj__ = (come_push_stackframe("14struct.c", 48),__exception_result_var_b17=((char*)(right_value16=buffer_to_string(((struct buffer*)come_null_check(buf_6, "14struct.c", 48))))), come_pop_stackframe(), __exception_result_var_b17);
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value16;
    __freed_obj__ = 0;
    return __result18__;
    if(buf_6 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 417 "./comelang2.h"
        __result15__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 417))->len;
        return __result15__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
struct list_item$1sTypeph* it_10;
int i_11;
_Bool _while_condtional2;
_Bool _if_conditional8;
struct sType* __result16__;
struct sType* default_value_12;
void* __exception_result_var_b11;
struct sType* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_11, 0, sizeof(int));
memset(&default_value_12, 0, sizeof(struct sType*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional7=position<0,                _if_conditional7) {
                    # 742 "./comelang2.h"
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 742))->len;
                }
                # 745 "./comelang2.h"
                it_10=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 745))->head;
                # 746 "./comelang2.h"
                i_11=0;
                # 753 "./comelang2.h"
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional8=position==i_11,                    _if_conditional8) {
                        # 749 "./comelang2.h"
                        __result16__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(it_10, "./comelang2.h", 749))->item;
                        return __result16__;
                    }
                    # 751 "./comelang2.h"
                    it_10=((struct list_item$1sTypeph*)come_null_check(it_10, "./comelang2.h", 751))->next;
                    # 752 "./comelang2.h"
                    i_11++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b11=memset(&default_value_12,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b11);
                # 757 "./comelang2.h"
                __result17__ = __result_obj__ = default_value_12;
                if(default_value_12 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result17__;
                if(default_value_12 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        # 0 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        # 1 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),                    _if_conditional12) {
                        # 2 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        # 3 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),                    _if_conditional15) {
                        # 4 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),                    _if_conditional17) {
                        # 5 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),                    _if_conditional18) {
                        # 6 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),                    _if_conditional20) {
                        # 7 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),                    _if_conditional21) {
                        # 8 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),                    _if_conditional22) {
                        # 9 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        # 10 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),                    _if_conditional24) {
                        # 11 "sType_finalize"
                        if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
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
                            if(_if_conditional10=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                            _if_conditional10) {
                                # 0 "tuple1$1sTypephp_finalize"
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_13;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                            # 176 "./comelang2.h"
                            it_13=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 176))->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional3=it_13!=((void*)0),                            _while_condtional3) {
                                # 178 "./comelang2.h"
                                prev_it_14=it_13;
                                # 179 "./comelang2.h"
                                it_13=((struct list_item$1sTypeph*)come_null_check(it_13, "./comelang2.h", 179))->next;
                                # 180 "./comelang2.h"
                                if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                    if(_if_conditional14=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                                    _if_conditional14) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_15;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sNodeph*));
                            # 176 "./comelang2.h"
                            it_15=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 176))->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional4=it_15!=((void*)0),                            _while_condtional4) {
                                # 178 "./comelang2.h"
                                prev_it_16=it_15;
                                # 179 "./comelang2.h"
                                it_15=((struct list_item$1sNodeph*)come_null_check(it_15, "./comelang2.h", 179))->next;
                                # 180 "./comelang2.h"
                                if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                    if(_if_conditional16=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                                    _if_conditional16) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_17;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                            # 176 "./comelang2.h"
                            it_17=((struct list$1charph*)come_null_check(self, "./comelang2.h", 176))->head;
                            # 182 "./comelang2.h"
                            while(_while_condtional5=it_17!=((void*)0),                            _while_condtional5) {
                                # 178 "./comelang2.h"
                                prev_it_18=it_17;
                                # 179 "./comelang2.h"
                                it_17=((struct list_item$1charph*)come_null_check(it_17, "./comelang2.h", 179))->next;
                                # 180 "./comelang2.h"
                                if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                    if(_if_conditional19=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                                    _if_conditional19) {
                                        # 0 "list_item$1charphp_finalize"
                                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
void* right_value17;
void* right_value18;
struct buffer* __exception_result_var_b18;
struct buffer* buf_22;
void* right_value19;
char* __exception_result_var_b19;
struct buffer* __exception_result_var_b20;
struct list$1tuple2$2charphsTypephph* o2_saved_23;
struct tuple2$2charphsTypeph* __exception_result_var_b23;
struct tuple2$2charphsTypeph* it_26;
_Bool __exception_result_var_b24;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* __exception_result_var_b27;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_29;
struct sType* type_30;
struct buffer* __exception_result_var_b28;
void* right_value20;
char* __exception_result_var_b29;
struct buffer* __exception_result_var_b30;
struct buffer* __exception_result_var_b31;
struct buffer* __exception_result_var_b32;
_Bool __exception_result_var_b33;
_Bool _if_conditional34;
void* right_value21;
char* __exception_result_var_b34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&buf_22, 0, sizeof(struct buffer*));
memset(&right_value19, 0, sizeof(void*));
memset(&o2_saved_23, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_26, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
    # 86 "14struct.c"
    # 58 "14struct.c"
    if(_if_conditional26=!((struct sClass*)come_null_check(klass, "14struct.c", 58))->mOutputed,    _if_conditional26) {
        # 59 "14struct.c"
        ((struct sClass*)come_null_check(klass, "14struct.c", 59))->mOutputed=(_Bool)1;
        # 61 "14struct.c"
        buf_22=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 61),__exception_result_var_b18=((struct buffer*)(right_value18=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61))))))), come_pop_stackframe(), __exception_result_var_b18));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value17;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value18;
        __freed_obj__ = 0;
        # 64 "14struct.c"
        (come_push_stackframe("14struct.c", 64),__exception_result_var_b20=buffer_append_str(((struct buffer*)come_null_check(buf_22, "14struct.c", 64)),(come_push_stackframe("14struct.c", 64),__exception_result_var_b19=((char*)(right_value19=xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(klass, "14struct.c", 64))->mName))), come_pop_stackframe(), __exception_result_var_b19)), come_pop_stackframe(), __exception_result_var_b20);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value19);
        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value19;
        __freed_obj__ = 0;
        # 77 "14struct.c"
        for(
        o2_saved_23=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass, "14struct.c", 67))->mFields)),it_26=(come_push_stackframe("14struct.c", 67),__exception_result_var_b23=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_23), "14struct.c", 67))), come_pop_stackframe(), __exception_result_var_b23) ,        0;        _for_condtionalA3=        !(come_push_stackframe("14struct.c", 67),__exception_result_var_b24=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_23), "14struct.c", 67))), come_pop_stackframe(), __exception_result_var_b24) ,        _for_condtionalA3;        it_26=(come_push_stackframe("14struct.c", 67),__exception_result_var_b27=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_23), "14struct.c", 67))), come_pop_stackframe(), __exception_result_var_b27) ,        0        ){
            # 68 "14struct.c"
            multiple_assgin_var1=it_26;
            name_29=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
            type_30=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
            # 70 "14struct.c"
            ((struct sType*)come_null_check(type_30, "14struct.c", 70))->mStatic=(_Bool)0;
            # 72 "14struct.c"
            (come_push_stackframe("14struct.c", 72),__exception_result_var_b28=buffer_append_str(((struct buffer*)come_null_check(buf_22, "14struct.c", 72)),"    "), come_pop_stackframe(), __exception_result_var_b28);
            # 73 "14struct.c"
            (come_push_stackframe("14struct.c", 73),__exception_result_var_b30=buffer_append_str(((struct buffer*)come_null_check(buf_22, "14struct.c", 73)),(come_push_stackframe("14struct.c", 73),__exception_result_var_b29=((char*)(right_value20=make_define_var(type_30,name_29,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b29)), come_pop_stackframe(), __exception_result_var_b30);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
            # 74 "14struct.c"
            (come_push_stackframe("14struct.c", 74),__exception_result_var_b31=buffer_append_str(((struct buffer*)come_null_check(buf_22, "14struct.c", 74)),";\n"), come_pop_stackframe(), __exception_result_var_b31);
            if(name_29 && !__freed_obj__) { name_29 = come_decrement_ref_count(name_29, (void*)0, (void*)0, 0, 0, 0); }
            if(type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_23 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_23, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 77 "14struct.c"
        (come_push_stackframe("14struct.c", 77),__exception_result_var_b32=buffer_append_str(((struct buffer*)come_null_check(buf_22, "14struct.c", 77)),"};\n"), come_pop_stackframe(), __exception_result_var_b32);
        # 85 "14struct.c"
        # 79 "14struct.c"
        if(_if_conditional34=((struct sInfo*)come_null_check(info, "14struct.c", 79))->output_header_file&&(come_push_stackframe("14struct.c", 79),__exception_result_var_b33=string_operator_not_equals(((struct sClass*)come_null_check(klass, "14struct.c", 79))->mDeclareSName,((struct sInfo*)come_null_check(info, "14struct.c", 79))->base_sname), come_pop_stackframe(), __exception_result_var_b33),        _if_conditional34) {
        }
        else {
            # 82 "14struct.c"
            (come_push_stackframe("14struct.c", 82),add_come_code_at_source_head(info,"%s",(come_push_stackframe("14struct.c", 82),__exception_result_var_b34=((char*)(right_value21=buffer_to_string(((struct buffer*)come_null_check(buf_22, "14struct.c", 82))))), come_pop_stackframe(), __exception_result_var_b34)),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
        }
        if(buf_22 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
struct tuple2$2charphsTypeph* result_24;
void* __exception_result_var_b21;
struct tuple2$2charphsTypeph* __result19__;
_Bool _if_conditional28;
struct tuple2$2charphsTypeph* __result20__;
struct tuple2$2charphsTypeph* result_25;
void* __exception_result_var_b22;
struct tuple2$2charphsTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_24, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional27=self==((void*)0),            _if_conditional27) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b21=memset(&result_24,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b21);
                # 341 "./comelang2.h"
                __result19__ = __result_obj__ = result_24;
                return __result19__;
            }
            # 343 "./comelang2.h"
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional28=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional28) {
                # 346 "./comelang2.h"
                __result20__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result20__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b22=memset(&result_25,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b22);
            # 351 "./comelang2.h"
            __result21__ = __result_obj__ = result_25;
            return __result21__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 373 "./comelang2.h"
            __result22__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result22__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct tuple2$2charphsTypeph* result_27;
void* __exception_result_var_b25;
struct tuple2$2charphsTypeph* __result23__;
_Bool _if_conditional30;
struct tuple2$2charphsTypeph* __result24__;
struct tuple2$2charphsTypeph* result_28;
void* __exception_result_var_b26;
struct tuple2$2charphsTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_27, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_28, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional29=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional29) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b25=memset(&result_27,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b25);
                # 358 "./comelang2.h"
                __result23__ = __result_obj__ = result_27;
                return __result23__;
            }
            # 361 "./comelang2.h"
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional30=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional30) {
                # 364 "./comelang2.h"
                __result24__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result24__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b26=memset(&result_28,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b26);
            # 369 "./comelang2.h"
            __result25__ = __result_obj__ = result_28;
            return __result25__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_31;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 176 "./comelang2.h"
            it_31=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 176))->head;
            # 182 "./comelang2.h"
            while(_while_condtional6=it_31!=((void*)0),            _while_condtional6) {
                # 178 "./comelang2.h"
                prev_it_32=it_31;
                # 179 "./comelang2.h"
                it_31=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_31, "./comelang2.h", 179))->next;
                # 180 "./comelang2.h"
                if(prev_it_32 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                    if(_if_conditional31=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                    _if_conditional31) {
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "tuple2$2charphsTypephp_finalize"
                            # 0 "tuple2$2charphsTypephp_finalize"
                            if(_if_conditional32=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                            _if_conditional32) {
                                # 0 "tuple2$2charphsTypephp_finalize"
                                if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            # 2 "tuple2$2charphsTypephp_finalize"
                            # 1 "tuple2$2charphsTypephp_finalize"
                            if(_if_conditional33=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                            _if_conditional33) {
                                # 1 "tuple2$2charphsTypephp_finalize"
                                if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_33;
_Bool _if_conditional35;
_Bool __result26__;
int i_34;
int __exception_result_var_b35;
_Bool _for_condtionalA4;
struct sType* __exception_result_var_b36;
_Bool __exception_result_var_b37;
_Bool result_35;
_Bool _if_conditional36;
_Bool __result27__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&i_34, 0, sizeof(int));
memset(&result_35, 0, sizeof(_Bool));
    # 90 "14struct.c"
    klass_33=((struct sType*)come_null_check(type, "14struct.c", 90))->mClass;
    # 95 "14struct.c"
    # 92 "14struct.c"
    if(_if_conditional35=((struct sClass*)come_null_check(klass_33, "14struct.c", 92))->mGenerics,    _if_conditional35) {
        # 93 "14struct.c"
        __result26__ = (_Bool)0;
        return __result26__;
    }
    # 103 "14struct.c"
    for(
    i_34=0 ,    0;    _for_condtionalA4=    i_34<(come_push_stackframe("14struct.c", 95),__exception_result_var_b35=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 95))->mGenericsTypes, "14struct.c", 95))), come_pop_stackframe(), __exception_result_var_b35) ,    _for_condtionalA4;    i_34++ ,    0    ){
        # 96 "14struct.c"
        result_35=(come_push_stackframe("14struct.c", 96),__exception_result_var_b37=is_no_contained_generics_types((come_push_stackframe("14struct.c", 96),__exception_result_var_b36=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(type, "14struct.c", 96))->mGenericsTypes,i_34), come_pop_stackframe(), __exception_result_var_b36),info), come_pop_stackframe(), __exception_result_var_b37);
        # 101 "14struct.c"
        # 98 "14struct.c"
        if(_if_conditional36=!result_35,        _if_conditional36) {
            # 99 "14struct.c"
            __result27__ = (_Bool)0;
            return __result27__;
        }
    }
    # 103 "14struct.c"
    __result28__ = (_Bool)1;
    return __result28__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value22;
char* __exception_result_var_b38;
char* new_name_36;
_Bool __exception_result_var_b39;
_Bool __exception_result_var_b43;
_Bool _if_conditional42;
void* right_value58;
struct sType* type2_58;
struct sClass* __exception_result_var_b53;
struct sClass* generics_class_62;
_Bool _if_conditional117;
_Bool __result58__;
void* right_value62;
void* right_value63;
struct sClass* __exception_result_var_b54;
struct sClass* new_class_63;
void* right_value74;
char* __exception_result_var_b86;
struct map$2charphsClassph* __exception_result_var_b87;
int i_108;
struct list$1tuple2$2charphsTypephph* o2_saved_109;
struct tuple2$2charphsTypeph* __exception_result_var_b88;
struct tuple2$2charphsTypeph* it_110;
_Bool __exception_result_var_b89;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* __exception_result_var_b90;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* name_111;
struct sType* type_112;
void* right_value75;
struct sType* __exception_result_var_b91;
struct sType* new_type_113;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value84;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b92;
void* right_value85;
struct sType* __dec_obj33;
struct list$1sTypeph* __exception_result_var_b93;
_Bool __exception_result_var_b94;
_Bool _if_conditional172;
struct sClass* __exception_result_var_b95;
struct sClass* generics_class_119;
_Bool _if_conditional173;
_Bool __result86__;
void* right_value86;
void* right_value87;
struct sClass* __exception_result_var_b96;
struct sClass* new_class_120;
void* right_value88;
char* __exception_result_var_b97;
struct map$2charphsClassph* __exception_result_var_b98;
int i_121;
struct list$1tuple2$2charphsTypephph* o2_saved_122;
struct tuple2$2charphsTypeph* __exception_result_var_b99;
struct tuple2$2charphsTypeph* it_123;
_Bool __exception_result_var_b100;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* __exception_result_var_b101;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_124;
struct sType* type_125;
void* right_value89;
struct sType* __exception_result_var_b102;
struct sType* new_type_126;
void* right_value90;
void* right_value91;
void* right_value92;
void* right_value93;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b103;
void* right_value94;
struct sType* __dec_obj34;
struct list$1sTypeph* __exception_result_var_b104;
_Bool _if_conditional174;
void* right_value95;
struct sType* __dec_obj35;
struct sClass* __exception_result_var_b105;
struct list$1sTypeph* __exception_result_var_b106;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&new_name_36, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&type2_58, 0, sizeof(struct sType*));
memset(&generics_class_62, 0, sizeof(struct sClass*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&new_class_63, 0, sizeof(struct sClass*));
memset(&right_value74, 0, sizeof(void*));
memset(&i_108, 0, sizeof(int));
memset(&o2_saved_109, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_110, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_111, 0, sizeof(char*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&name_111, 0, sizeof(char*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&right_value75, 0, sizeof(void*));
memset(&new_type_113, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&generics_class_119, 0, sizeof(struct sClass*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&new_class_120, 0, sizeof(struct sClass*));
memset(&right_value88, 0, sizeof(void*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_123, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_124, 0, sizeof(char*));
memset(&type_125, 0, sizeof(struct sType*));
memset(&name_124, 0, sizeof(char*));
memset(&type_125, 0, sizeof(struct sType*));
memset(&right_value89, 0, sizeof(void*));
memset(&new_type_126, 0, sizeof(struct sType*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
    # 108 "14struct.c"
    new_name_36=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 108),__exception_result_var_b38=((char*)(right_value22=create_generics_name(type,info))), come_pop_stackframe(), __exception_result_var_b38));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value22;
    __freed_obj__ = 0;
    # 177 "14struct.c"
    # 110 "14struct.c"
    if(_if_conditional42=(come_push_stackframe("14struct.c", 110),__exception_result_var_b39=is_no_contained_generics_types(type,info), come_pop_stackframe(), __exception_result_var_b39)&&!(come_push_stackframe("14struct.c", 110),__exception_result_var_b43=map$2charphsClassph_find(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 110))->classes, "14struct.c", 110)),new_name_36), come_pop_stackframe(), __exception_result_var_b43),    _if_conditional42) {
        # 111 "14struct.c"
        type2_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value58;
        __freed_obj__ = 0;
        # 113 "14struct.c"
        generics_class_62=(come_push_stackframe("14struct.c", 113),__exception_result_var_b53=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "14struct.c", 113))->generics_classes,((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 113))->mClass, "14struct.c", 113))->mName), come_pop_stackframe(), __exception_result_var_b53);
        # 120 "14struct.c"
        # 115 "14struct.c"
        if(_if_conditional117=generics_class_62==((void*)0),        _if_conditional117) {
            # 116 "14struct.c"
            (come_push_stackframe("14struct.c", 116),err_msg(info,"generics_class(%s) is null",((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 116))->mClass, "14struct.c", 116))->mName),come_pop_stackframe());
            # 117 "14struct.c"
            __result58__ = (_Bool)0;
            if(type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
            return __result58__;
        }
        # 120 "14struct.c"
        new_class_63=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 120),__exception_result_var_b54=((struct sClass*)(right_value63=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value62=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 120)))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b54));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value62;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value63;
        __freed_obj__ = 0;
        # 122 "14struct.c"
        (come_push_stackframe("14struct.c", 122),__exception_result_var_b87=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 122))->classes, "14struct.c", 122)),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 122),__exception_result_var_b86=((char*)(right_value74=__builtin_string(new_name_36))), come_pop_stackframe(), __exception_result_var_b86)),(struct sClass*)come_increment_ref_count(new_class_63)), come_pop_stackframe(), __exception_result_var_b87);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value74;
        __freed_obj__ = 0;
        # 124 "14struct.c"
        i_108=0;
        # 133 "14struct.c"
        for(
        o2_saved_109=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(generics_class_62, "14struct.c", 125))->mFields)),it_110=(come_push_stackframe("14struct.c", 125),__exception_result_var_b88=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_109), "14struct.c", 125))), come_pop_stackframe(), __exception_result_var_b88) ,        0;        _for_condtionalA7=        !(come_push_stackframe("14struct.c", 125),__exception_result_var_b89=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_109), "14struct.c", 125))), come_pop_stackframe(), __exception_result_var_b89) ,        _for_condtionalA7;        it_110=(come_push_stackframe("14struct.c", 125),__exception_result_var_b90=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_109), "14struct.c", 125))), come_pop_stackframe(), __exception_result_var_b90) ,        0        ){
            # 126 "14struct.c"
            multiple_assgin_var2=it_110;
            name_111=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            type_112=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            # 128 "14struct.c"
            new_type_113=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 128),__exception_result_var_b91=((struct sType*)(right_value75=solve_generics(type_112,type2_58,info))), come_pop_stackframe(), __exception_result_var_b91));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = 0;
            # 130 "14struct.c"
            (come_push_stackframe("14struct.c", 130),__exception_result_var_b92=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(new_class_63, "14struct.c", 130))->mFields, "14struct.c", 130)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value84=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value81=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 130)))),(char*)come_increment_ref_count(((char*)(right_value79=string_clone(name_111)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(new_type_113))))))))), come_pop_stackframe(), __exception_result_var_b92);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value79;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value80;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value81;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value84;
            __freed_obj__ = 0;
            if(name_111 && !__freed_obj__) { name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, 0); }
            if(type_112 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_109 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 133 "14struct.c"
        __dec_obj33=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 133))->mNoSolvedGenericsType, "14struct.c", 133))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 133))->mNoSolvedGenericsType, "14struct.c", 133))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type))));
        if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value85;
        __freed_obj__ = 0;
        # 134 "14struct.c"
        ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 134))->mNoSolvedGenericsType, "14struct.c", 134))->v1, "14struct.c", 134))->mPointerNum=((struct sType*)come_null_check(type, "14struct.c", 134))->mPointerNum;
        # 135 "14struct.c"
        ((struct sType*)come_null_check(type, "14struct.c", 135))->mClass=new_class_63;
        # 136 "14struct.c"
        (come_push_stackframe("14struct.c", 136),__exception_result_var_b93=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 136))->mGenericsTypes, "14struct.c", 136))), come_pop_stackframe(), __exception_result_var_b93);
        # 138 "14struct.c"
        (come_push_stackframe("14struct.c", 138),output_struct(new_class_63,info),come_pop_stackframe());
        if(type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_class_63 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        # 177 "14struct.c"
        # 140 "14struct.c"
        if(_if_conditional172=!(come_push_stackframe("14struct.c", 140),__exception_result_var_b94=map$2charphsClassph_find(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 140))->classes, "14struct.c", 140)),new_name_36), come_pop_stackframe(), __exception_result_var_b94),        _if_conditional172) {
            # 141 "14struct.c"
            generics_class_119=(come_push_stackframe("14struct.c", 141),__exception_result_var_b95=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "14struct.c", 141))->generics_classes,((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 141))->mClass, "14struct.c", 141))->mName), come_pop_stackframe(), __exception_result_var_b95);
            # 148 "14struct.c"
            # 143 "14struct.c"
            if(_if_conditional173=generics_class_119==((void*)0),            _if_conditional173) {
                # 144 "14struct.c"
                (come_push_stackframe("14struct.c", 144),err_msg(info,"generics_class(%s) is null",((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 144))->mClass, "14struct.c", 144))->mName),come_pop_stackframe());
                # 145 "14struct.c"
                __result86__ = (_Bool)0;
                if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
                return __result86__;
            }
            # 148 "14struct.c"
            new_class_120=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 148),__exception_result_var_b96=((struct sClass*)(right_value87=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value86=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 148)))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b96));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value86;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value87;
            __freed_obj__ = 0;
            # 150 "14struct.c"
            (come_push_stackframe("14struct.c", 150),__exception_result_var_b98=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 150))->classes, "14struct.c", 150)),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 150),__exception_result_var_b97=((char*)(right_value88=__builtin_string(new_name_36))), come_pop_stackframe(), __exception_result_var_b97)),(struct sClass*)come_increment_ref_count(new_class_120)), come_pop_stackframe(), __exception_result_var_b98);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value88);
            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value88;
            __freed_obj__ = 0;
            # 152 "14struct.c"
            i_121=0;
            # 161 "14struct.c"
            for(
            o2_saved_122=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(generics_class_119, "14struct.c", 153))->mFields)),it_123=(come_push_stackframe("14struct.c", 153),__exception_result_var_b99=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_122), "14struct.c", 153))), come_pop_stackframe(), __exception_result_var_b99) ,            0;            _for_condtionalA8=            !(come_push_stackframe("14struct.c", 153),__exception_result_var_b100=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_122), "14struct.c", 153))), come_pop_stackframe(), __exception_result_var_b100) ,            _for_condtionalA8;            it_123=(come_push_stackframe("14struct.c", 153),__exception_result_var_b101=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_122), "14struct.c", 153))), come_pop_stackframe(), __exception_result_var_b101) ,            0            ){
                # 154 "14struct.c"
                multiple_assgin_var3=it_123;
                name_124=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                type_125=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                # 156 "14struct.c"
                new_type_126=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 156),__exception_result_var_b102=((struct sType*)(right_value89=solve_generics(type_125,generics_type,info))), come_pop_stackframe(), __exception_result_var_b102));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value89;
                __freed_obj__ = 0;
                # 158 "14struct.c"
                (come_push_stackframe("14struct.c", 158),__exception_result_var_b103=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(new_class_120, "14struct.c", 158))->mFields, "14struct.c", 158)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value93=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value92=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 158)))),(char*)come_increment_ref_count(((char*)(right_value90=string_clone(name_124)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(new_type_126))))))))), come_pop_stackframe(), __exception_result_var_b103);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value90);
                if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value90;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value91;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value92;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value93);
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value93;
                __freed_obj__ = 0;
                if(name_124 && !__freed_obj__) { name_124 = come_decrement_ref_count(name_124, (void*)0, (void*)0, 0, 0, 0); }
                if(type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(new_type_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_122 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 161 "14struct.c"
            __dec_obj34=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 161))->mNoSolvedGenericsType, "14struct.c", 161))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 161))->mNoSolvedGenericsType, "14struct.c", 161))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(type))));
            if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value94;
            __freed_obj__ = 0;
            # 162 "14struct.c"
            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 162))->mNoSolvedGenericsType, "14struct.c", 162))->v1, "14struct.c", 162))->mPointerNum=((struct sType*)come_null_check(type, "14struct.c", 162))->mPointerNum;
            # 163 "14struct.c"
            ((struct sType*)come_null_check(type, "14struct.c", 163))->mClass=new_class_120;
            # 164 "14struct.c"
            (come_push_stackframe("14struct.c", 164),__exception_result_var_b104=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 164))->mGenericsTypes, "14struct.c", 164))), come_pop_stackframe(), __exception_result_var_b104);
            # 166 "14struct.c"
            (come_push_stackframe("14struct.c", 166),output_struct(new_class_120,info),come_pop_stackframe());
            if(new_class_120 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 173 "14struct.c"
            # 169 "14struct.c"
            if(_if_conditional174=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 169))->mNoSolvedGenericsType, "14struct.c", 169))->v1==((void*)0),            _if_conditional174) {
                # 170 "14struct.c"
                __dec_obj35=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 170))->mNoSolvedGenericsType, "14struct.c", 170))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 170))->mNoSolvedGenericsType, "14struct.c", 170))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(type))));
                if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value95;
                __freed_obj__ = 0;
                # 171 "14struct.c"
                ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 171))->mNoSolvedGenericsType, "14struct.c", 171))->v1, "14struct.c", 171))->mPointerNum=((struct sType*)come_null_check(type, "14struct.c", 171))->mPointerNum;
            }
            # 173 "14struct.c"
            ((struct sType*)come_null_check(type, "14struct.c", 173))->mClass=(come_push_stackframe("14struct.c", 173),__exception_result_var_b105=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "14struct.c", 173))->classes,new_name_36), come_pop_stackframe(), __exception_result_var_b105);
            # 174 "14struct.c"
            (come_push_stackframe("14struct.c", 174),__exception_result_var_b106=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 174))->mGenericsTypes, "14struct.c", 174))), come_pop_stackframe(), __exception_result_var_b106);
        }
    }
    # 177 "14struct.c"
    __result87__ = (_Bool)1;
    if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
    return __result87__;
    if(new_name_36 && !__freed_obj__) { new_name_36 = come_decrement_ref_count(new_name_36, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b40;
unsigned int hash_37;
int it_38;
_Bool _while_condtional7;
_Bool _if_conditional37;
void* right_value23;
struct optional$2boolbool* __exception_result_var_b41;
_Bool _if_conditional39;
_Bool __result31__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool __result32__;
_Bool __result33__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
        # 1671 "./comelang2.h"
        hash_37=(come_push_stackframe("./comelang2.h", 1671),__exception_result_var_b40=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1671))), come_pop_stackframe(), __exception_result_var_b40)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1671))->size;
        # 1672 "./comelang2.h"
        it_38=hash_37;
        # 1696 "./comelang2.h"
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            # 1694 "./comelang2.h"
            # 1675 "./comelang2.h"
            if(_if_conditional37=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1675))->item_existance[it_38],            _if_conditional37) {
                # 1682 "./comelang2.h"
                # 1677 "./comelang2.h"
                if(_if_conditional39=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1677),__exception_result_var_b41=((struct optional$2boolbool*)(right_value23=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1677))->keys[it_38], "./comelang2.h", 1677)),key))), come_pop_stackframe(), __exception_result_var_b41)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23),
                (right_value23 && right_value23 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value23, 
                __freed_obj__ = 0, 
                _if_conditional39) {
                    # 1679 "./comelang2.h"
                    __result31__ = (_Bool)1;
                    return __result31__;
                }
                # 1682 "./comelang2.h"
                it_38++;
                # 1690 "./comelang2.h"
                # 1684 "./comelang2.h"
                if(_if_conditional40=it_38>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1684))->size,                _if_conditional40) {
                    # 1685 "./comelang2.h"
                    it_38=0;
                }
                else {
                    # 1690 "./comelang2.h"
                    # 1687 "./comelang2.h"
                    if(_if_conditional41=it_38==hash_37,                    _if_conditional41) {
                        # 1688 "./comelang2.h"
                        __result32__ = (_Bool)0;
                        return __result32__;
                    }
                }
            }
            else {
                # 1692 "./comelang2.h"
                __result33__ = (_Bool)0;
                return __result33__;
            }
        }
        # 1696 "./comelang2.h"
        __result34__ = (_Bool)0;
        return __result34__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
_Bool default_value_39;
void* __exception_result_var_b42;
_Bool __result29__;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                    # 69 "./comelang2.h"
                    # 61 "./comelang2.h"
                    if(_if_conditional38=self==((void*)0),                    _if_conditional38) {
                        # 62 "./comelang2.h"
                        # 63 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b42=memset(&default_value_39,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b42);
                        # 64 "./comelang2.h"
                        __result29__ = default_value_39;
                        return __result29__;
                    }
                    else {
                        # 67 "./comelang2.h"
                        __result30__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                        return __result30__;
                    }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
struct sType* __result35__;
void* right_value24;
struct sType* result_40;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value27;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional49;
void* right_value28;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional50;
void* right_value29;
char* __dec_obj9;
_Bool _if_conditional51;
void* right_value36;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional55;
void* right_value44;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value45;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional70;
void* right_value52;
struct list$1charph* __dec_obj22;
_Bool _if_conditional74;
void* right_value53;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value54;
struct sNode* __dec_obj24;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value55;
struct sNode* __dec_obj25;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value56;
char* __dec_obj26;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value57;
char* __dec_obj27;
struct sType* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct sType*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional43=self==(void*)0,            _if_conditional43) {
                # 2 "sType_clone"
                __result35__ = __result_obj__ = (void*)0;
                return __result35__;
            }
            # 3 "sType_clone"
            result_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value24;
            __freed_obj__ = 0;
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional44=self!=((void*)0),            _if_conditional44) {
                # 4 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),            _if_conditional45) {
                # 5 "sType_clone"
                __dec_obj7=((struct sType*)come_null_check(result_40, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_40, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = 0;
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),            _if_conditional49) {
                # 6 "sType_clone"
                __dec_obj8=((struct sType*)come_null_check(result_40, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_40, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = 0;
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),            _if_conditional50) {
                # 7 "sType_clone"
                __dec_obj9=((struct sType*)come_null_check(result_40, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_40, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value29=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value29;
                __freed_obj__ = 0;
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),            _if_conditional51) {
                # 8 "sType_clone"
                __dec_obj13=((struct sType*)come_null_check(result_40, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_40, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value36=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value36;
                __freed_obj__ = 0;
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),            _if_conditional55) {
                # 9 "sType_clone"
                __dec_obj17=((struct sType*)come_null_check(result_40, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_40, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                # 10 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),            _if_conditional69) {
                # 11 "sType_clone"
                __dec_obj18=((struct sType*)come_null_check(result_40, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_40, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value45=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value45;
                __freed_obj__ = 0;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),            _if_conditional70) {
                # 12 "sType_clone"
                __dec_obj22=((struct sType*)come_null_check(result_40, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_40, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value52=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value52;
                __freed_obj__ = 0;
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),            _if_conditional74) {
                # 13 "sType_clone"
                __dec_obj23=((struct sType*)come_null_check(result_40, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_40, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = 0;
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                # 14 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),            _if_conditional76) {
                # 15 "sType_clone"
                __dec_obj24=((struct sType*)come_null_check(result_40, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_40, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                # 16 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                # 17 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                # 18 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                # 19 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                # 20 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                # 21 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                # 22 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 23 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                # 24 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                # 25 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                # 26 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                # 27 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 28 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 29 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 30 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                # 31 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 32 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 33 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 34 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 35 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 36 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 37 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 38 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),            _if_conditional100) {
                # 39 "sType_clone"
                __dec_obj25=((struct sType*)come_null_check(result_40, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_40, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 40 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 41 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),            _if_conditional103) {
                # 42 "sType_clone"
                __dec_obj26=((struct sType*)come_null_check(result_40, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_40, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 43 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 44 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 45 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 46 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 47 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 48 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 49 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 50 "sType_clone"
                ((struct sType*)come_null_check(result_40, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional112=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),            _if_conditional112) {
                # 51 "sType_clone"
                __dec_obj27=((struct sType*)come_null_check(result_40, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_40, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
            }
            # 52 "sType_clone"
            __result52__ = __result_obj__ = result_40;
            if(result_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result52__;
            if(result_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct tuple1$1sTypeph* __result36__;
void* right_value25;
struct tuple1$1sTypeph* result_41;
_Bool _if_conditional48;
void* right_value26;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value26, 0, sizeof(void*));
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional46=self==(void*)0,                    _if_conditional46) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result36__ = __result_obj__ = (void*)0;
                        return __result36__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_41=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value25=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional48=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                    _if_conditional48) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj6=((struct tuple1$1sTypeph*)come_null_check(result_41, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_41, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value26;
                        __freed_obj__ = 0;
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result37__ = __result_obj__ = result_41;
                    if(result_41 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result37__;
                    if(result_41 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional47=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                        _if_conditional47) {
                            # 0 "tuple1$1sTypeph_finalize"
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct list$1sTypeph* __result38__;
void* right_value30;
void* right_value31;
struct list$1sTypeph* __exception_result_var_b44;
struct list$1sTypeph* result_42;
struct list_item$1sTypeph* it_43;
_Bool _while_condtional8;
void* right_value35;
struct list$1sTypeph* __exception_result_var_b45;
struct list$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct list$1sTypeph*));
memset(&it_43, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value35, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional52=self==((void*)0),                    _if_conditional52) {
                        # 193 "./comelang2.h"
                        __result38__ = __result_obj__ = ((void*)0);
                        return __result38__;
                    }
                    # 195 "./comelang2.h"
                    result_42=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b44=((struct list$1sTypeph*)(right_value31=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value30=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b44));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value30;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
                    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value31;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_43=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional8=it_43!=((void*)0),                    _while_condtional8) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b45=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_42, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_43, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b45);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value35;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_43=((struct list_item$1sTypeph*)come_null_check(it_43, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
                    __result41__ = __result_obj__ = result_42;
                    if(result_42 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result41__;
                    if(result_42 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 157 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
                        __result39__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result39__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
void* right_value32;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj10;
_Bool _if_conditional54;
void* right_value33;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj11;
void* right_value34;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj12;
struct list$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional53=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional53) {
                                # 209 "./comelang2.h"
                                litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value32;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 213))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 213))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 215 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_44;
                                # 216 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_44;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional54=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional54) {
                                    # 219 "./comelang2.h"
                                    litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value33;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 221))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 223))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 223))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_45;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_45;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value34;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 231))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 233))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 233))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_46;
                                    # 236 "./comelang2.h"
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_46;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
                            __result40__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result40__;
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
_Bool _if_conditional56;
struct list$1sNodeph* __result42__;
void* right_value37;
void* right_value38;
struct list$1sNodeph* __exception_result_var_b46;
struct list$1sNodeph* result_47;
struct list_item$1sNodeph* it_48;
_Bool _while_condtional9;
void* right_value43;
struct list$1sNodeph* __exception_result_var_b47;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct list$1sNodeph*));
memset(&it_48, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value43, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        # 193 "./comelang2.h"
                        __result42__ = __result_obj__ = ((void*)0);
                        return __result42__;
                    }
                    # 195 "./comelang2.h"
                    result_47=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b46=((struct list$1sNodeph*)(right_value38=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value37=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b46));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value38;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_48=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional9=it_48!=((void*)0),                    _while_condtional9) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b47=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_47, "./comelang2.h", 199)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_48, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b47);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value43;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_48=((struct list_item$1sNodeph*)come_null_check(it_48, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
                    __result47__ = __result_obj__ = result_47;
                    if(result_47 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result47__;
                    if(result_47 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 157 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
                        __result43__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result43__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
void* right_value39;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj14;
_Bool _if_conditional58;
void* right_value40;
struct list_item$1sNodeph* litem_50;
struct sNode* __dec_obj15;
void* right_value41;
struct list_item$1sNodeph* litem_51;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1sNodeph*));
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional57=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional57) {
                                # 209 "./comelang2.h"
                                litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value39;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_49, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_49, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_49, "./comelang2.h", 213))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_49, "./comelang2.h", 213))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                # 215 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_49;
                                # 216 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_49;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional58=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional58) {
                                    # 219 "./comelang2.h"
                                    litem_50=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value40;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 221))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 223))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 223))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_50;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_50;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_51=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value41=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value41;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 231))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 233))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 233))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_51;
                                    # 236 "./comelang2.h"
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_51;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
                            __result44__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result44__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct sNode* __result45__;
void* right_value42;
struct sNode* result_52;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sNode* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_52, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional59=self==(void*)0,                            _if_conditional59) {
                                # 2 "sNode_clone"
                                __result45__ = __result_obj__ = (void*)0;
                                return __result45__;
                            }
                            # 3 "sNode_clone"
                            result_52=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value42;
                            __freed_obj__ = 0;
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional60=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                            _if_conditional60) {
                                # 4 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                # 5 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                # 6 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                # 7 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                # 8 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                # 9 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                # 10 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional67=self!=((void*)0),                            _if_conditional67) {
                                # 11 "sNode_clone"
                                ((struct sNode*)come_null_check(result_52, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            }
                            # 12 "sNode_clone"
                            __result46__ = __result_obj__ = result_52;
                            if(result_52 && !__freed_obj__) { result_52 = come_decrement_ref_count(result_52, ((struct sNode*)result_52)->finalize, ((struct sNode*)result_52)->_protocol_obj, 0, 1, 0); } 
                            return __result46__;
                            if(result_52 && !__freed_obj__) { result_52 = come_decrement_ref_count(result_52, ((struct sNode*)result_52)->finalize, ((struct sNode*)result_52)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional71;
struct list$1charph* __result48__;
void* right_value46;
void* right_value47;
struct list$1charph* __exception_result_var_b48;
struct list$1charph* result_53;
struct list_item$1charph* it_54;
_Bool _while_condtional10;
void* right_value51;
struct list$1charph* __exception_result_var_b49;
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct list$1charph*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&right_value51, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional71=self==((void*)0),                    _if_conditional71) {
                        # 193 "./comelang2.h"
                        __result48__ = __result_obj__ = ((void*)0);
                        return __result48__;
                    }
                    # 195 "./comelang2.h"
                    result_53=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b48=((struct list$1charph*)(right_value47=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value46=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b48));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value46;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value47;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_54=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional10=it_54!=((void*)0),                    _while_condtional10) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b49=list$1charph_add(((struct list$1charph*)come_null_check(result_53, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value51=string_clone(((struct list_item$1charph*)come_null_check(it_54, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b49);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value51;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_54=((struct list_item$1charph*)come_null_check(it_54, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
                    __result51__ = __result_obj__ = result_53;
                    if(result_53 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_53, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result51__;
                    if(result_53 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_53, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 157 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
                        __result49__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result49__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
void* right_value48;
struct list_item$1charph* litem_55;
char* __dec_obj19;
_Bool _if_conditional73;
void* right_value49;
struct list_item$1charph* litem_56;
char* __dec_obj20;
void* right_value50;
struct list_item$1charph* litem_57;
char* __dec_obj21;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional72=((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional72) {
                                # 209 "./comelang2.h"
                                litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value48;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj19=((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 213))->item;
                                ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 213))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                # 215 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_55;
                                # 216 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->head=litem_55;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional73=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional73) {
                                    # 219 "./comelang2.h"
                                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value49;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 221))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj20=((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 223))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 223))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_56;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_56;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value50;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 231))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj21=((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 233))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 233))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_57;
                                    # 236 "./comelang2.h"
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_57;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
                            __result50__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result50__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_59;
void* __exception_result_var_b50;
unsigned int __exception_result_var_b51;
unsigned int hash_60;
unsigned int it_61;
_Bool _while_condtional11;
_Bool _if_conditional113;
void* right_value59;
struct optional$2boolbool* __exception_result_var_b52;
_Bool _if_conditional114;
struct sClass* __result53__;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sClass* __result54__;
struct sClass* __result55__;
void* right_value60;
void* right_value61;
struct sClass* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_59, 0, sizeof(struct sClass*));
memset(&hash_60, 0, sizeof(unsigned int));
memset(&it_61, 0, sizeof(unsigned int));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
            # 1591 "./comelang2.h"
            # 1592 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b50=memset(&default_value_59,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b50);
            # 1594 "./comelang2.h"
            hash_60=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b51=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b51)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1594))->size;
            # 1595 "./comelang2.h"
            it_61=hash_60;
            # 1619 "./comelang2.h"
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                # 1617 "./comelang2.h"
                # 1598 "./comelang2.h"
                if(_if_conditional113=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_61],                _if_conditional113) {
                    # 1605 "./comelang2.h"
                    # 1600 "./comelang2.h"
                    if(_if_conditional114=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b52=((struct optional$2boolbool*)(right_value59=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_61], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b52)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59),
                    (right_value59 && right_value59 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value59, 
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        # 1602 "./comelang2.h"
                        __result53__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1602))->items[it_61];
                        return __result53__;
                    }
                    # 1605 "./comelang2.h"
                    it_61++;
                    # 1613 "./comelang2.h"
                    # 1607 "./comelang2.h"
                    if(_if_conditional115=it_61>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->size,                    _if_conditional115) {
                        # 1608 "./comelang2.h"
                        it_61=0;
                    }
                    else {
                        # 1613 "./comelang2.h"
                        # 1610 "./comelang2.h"
                        if(_if_conditional116=it_61==hash_60,                        _if_conditional116) {
                            # 1611 "./comelang2.h"
                            __result54__ = __result_obj__ = default_value_59;
                            return __result54__;
                        }
                    }
                }
                else {
                    # 1615 "./comelang2.h"
                    __result55__ = __result_obj__ = default_value_59;
                    return __result55__;
                }
            }
            # 1619 "./comelang2.h"
            __result57__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sClasspbool*)(right_value61=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value60=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_59,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value60;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value61;
            __freed_obj__ = 0;
            return __result57__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 40 "./comelang2.h"
                ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                # 41 "./comelang2.h"
                ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                # 43 "./comelang2.h"
                __result56__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result56__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sClass_finalize"
            # 0 "sClass_finalize"
            if(_if_conditional118=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName!=((void*)0),            _if_conditional118) {
                # 0 "sClass_finalize"
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 2 "sClass_finalize"
            # 1 "sClass_finalize"
            if(_if_conditional119=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields!=((void*)0),            _if_conditional119) {
                # 1 "sClass_finalize"
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sClass_finalize"
            # 2 "sClass_finalize"
            if(_if_conditional120=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName!=((void*)0),            _if_conditional120) {
                # 2 "sClass_finalize"
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
unsigned int __exception_result_var_b69;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional14;
_Bool _if_conditional133;
void* right_value68;
struct optional$2boolbool* __exception_result_var_b70;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct list$1charp* __exception_result_var_b74;
struct list$1charp* __exception_result_var_b75;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
int __exception_result_var_b76;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool same_key_exist_99;
char* __exception_result_var_b79;
char* it2_102;
_Bool __exception_result_var_b80;
_Bool _for_condtionalA6;
char* __exception_result_var_b83;
void* right_value70;
struct optional$2boolbool* __exception_result_var_b84;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list$1charp* __exception_result_var_b85;
struct map$2charphsClassph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
memset(&right_value68, 0, sizeof(void*));
memset(&same_key_exist_99, 0, sizeof(_Bool));
memset(&it2_102, 0, sizeof(char*));
memset(&right_value70, 0, sizeof(void*));
            # 1432 "./comelang2.h"
            # 1429 "./comelang2.h"
            if(_if_conditional121=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->size,            _if_conditional121) {
                # 1430 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1430),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
            }
            # 1432 "./comelang2.h"
            hash_81=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b69=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b69)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1432))->size;
            # 1433 "./comelang2.h"
            it_82=hash_81;
            # 1491 "./comelang2.h"
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                # 1489 "./comelang2.h"
                # 1436 "./comelang2.h"
                if(_if_conditional133=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_82],                _if_conditional133) {
                    # 1459 "./comelang2.h"
                    # 1438 "./comelang2.h"
                    if(_if_conditional134=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b70=((struct optional$2boolbool*)(right_value68=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_82], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b70)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68),
                    (right_value68 && right_value68 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value68, 
                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        # 1449 "./comelang2.h"
                        # 1440 "./comelang2.h"
                        if(_if_conditional135=1,                        _if_conditional135) {
                            # 1441 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b74=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_82]), come_pop_stackframe(), __exception_result_var_b74);
                            # 1442 "./comelang2.h"
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_82] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_82] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_82], (void*)0, (void*)0, 0, 0, 0); }
                            # 1443 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_82]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1446 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b75=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_82]), come_pop_stackframe(), __exception_result_var_b75);
                            # 1447 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_82]=key;
                        }
                        # 1456 "./comelang2.h"
                        # 1449 "./comelang2.h"
                        if(_if_conditional155=1,                        _if_conditional155) {
                            # 1450 "./comelang2.h"
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1450))->items[it_82] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1450))->items[it_82], (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 1451 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->items[it_82]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1454 "./comelang2.h"
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1454))->items[it_82]=item;
                        }
                        # 1456 "./comelang2.h"
                        break;
                    }
                    # 1459 "./comelang2.h"
                    it_82++;
                    # 1469 "./comelang2.h"
                    # 1461 "./comelang2.h"
                    if(_if_conditional156=it_82>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1461))->size,                    _if_conditional156) {
                        # 1462 "./comelang2.h"
                        it_82=0;
                    }
                    else {
                        # 1469 "./comelang2.h"
                        # 1464 "./comelang2.h"
                        if(_if_conditional157=it_82==hash_81,                        _if_conditional157) {
                            # 1465 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b76=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b76);
                            # 1466 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1466),stackframe(),come_pop_stackframe());
                            # 1467 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1467),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    # 1471 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1471))->item_existance[it_82]=(_Bool)1;
                    # 1478 "./comelang2.h"
                    # 1472 "./comelang2.h"
                    if(_if_conditional158=1,                    _if_conditional158) {
                        # 1473 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_82]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1476 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_82]=key;
                    }
                    # 1485 "./comelang2.h"
                    # 1478 "./comelang2.h"
                    if(_if_conditional159=1,                    _if_conditional159) {
                        # 1479 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1479))->items[it_82]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1482 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1482))->items[it_82]=item;
                    }
                    # 1485 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1485))->len++;
                    # 1487 "./comelang2.h"
                    break;
                }
            }
            # 1491 "./comelang2.h"
            same_key_exist_99=(_Bool)0;
            # 1499 "./comelang2.h"
            for(
            it2_102=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b79=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b79) ,            0;            _for_condtionalA6=            !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b80=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b80) ,            _for_condtionalA6;            it2_102=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b83=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b83) ,            0            ){
                # 1497 "./comelang2.h"
                # 1494 "./comelang2.h"
                if(_if_conditional164=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b84=((struct optional$2boolbool*)(right_value70=string_equals(((char*)come_null_check(it2_102, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b84)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70),
                (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value70, 
                __freed_obj__ = 0, 
                _if_conditional164) {
                    # 1495 "./comelang2.h"
                    same_key_exist_99=(_Bool)1;
                }
            }
            # 1503 "./comelang2.h"
            # 1499 "./comelang2.h"
            if(_if_conditional165=!same_key_exist_99,            _if_conditional165) {
                # 1500 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b85=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b85);
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
int size_64;
void* right_value64;
char** keys_65;
void* right_value65;
struct sClass** items_66;
void* right_value66;
_Bool* item_existance_67;
int len_68;
char* __exception_result_var_b57;
char* it_71;
_Bool __exception_result_var_b58;
_Bool _for_condtionalA5;
char* __exception_result_var_b61;
struct sClass* default_value_74;
void* __exception_result_var_b62;
struct sClass* __exception_result_var_b65;
struct sClass* it2_77;
unsigned int __exception_result_var_b66;
unsigned int hash_78;
int n_79;
_Bool _while_condtional13;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __exception_result_var_b67;
struct sClass* default_value_80;
struct sClass* __exception_result_var_b68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_64, 0, sizeof(int));
memset(&right_value64, 0, sizeof(void*));
memset(&keys_65, 0, sizeof(char**));
memset(&right_value65, 0, sizeof(void*));
memset(&items_66, 0, sizeof(struct sClass**));
memset(&right_value66, 0, sizeof(void*));
memset(&item_existance_67, 0, sizeof(_Bool*));
memset(&len_68, 0, sizeof(int));
memset(&it_71, 0, sizeof(char*));
memset(&default_value_74, 0, sizeof(struct sClass*));
memset(&it2_77, 0, sizeof(struct sClass*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&n_79, 0, sizeof(int));
memset(&default_value_80, 0, sizeof(struct sClass*));
                    # 1376 "./comelang2.h"
                    size_64=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                    # 1377 "./comelang2.h"
                    keys_65=(char**)come_increment_ref_count(((char**)(right_value64=(char**)come_calloc(1, sizeof(char*)*(1*(size_64)), "./comelang2.h", 1377))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                    # 1378 "./comelang2.h"
                    items_66=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value65=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_64)), "./comelang2.h", 1378))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value65);
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value65;
                    __freed_obj__ = 0;
                    # 1379 "./comelang2.h"
                    item_existance_67=(_Bool*)come_increment_ref_count(((_Bool*)(right_value66=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_64)), "./comelang2.h", 1379))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value66;
                    __freed_obj__ = 0;
                    # 1381 "./comelang2.h"
                    len_68=0;
                    # 1416 "./comelang2.h"
                    for(
                    it_71=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b57=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b57) ,                    0;                    _for_condtionalA5=                    !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b58=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b58) ,                    _for_condtionalA5;                    it_71=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b61=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b61) ,                    0                    ){
                        # 1384 "./comelang2.h"
                        # 1385 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b62=memset(&default_value_74,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b62);
                        # 1386 "./comelang2.h"
                        it2_77=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b65=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386)),it_71,default_value_74), come_pop_stackframe(), __exception_result_var_b65);
                        # 1387 "./comelang2.h"
                        hash_78=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b66=string_get_hash_key(((char*)come_null_check(it_71, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b66)%size_64;
                        # 1388 "./comelang2.h"
                        n_79=hash_78;
                        # 1414 "./comelang2.h"
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            # 1413 "./comelang2.h"
                            # 1391 "./comelang2.h"
                            if(_if_conditional130=item_existance_67[n_79],                            _if_conditional130) {
                                # 1393 "./comelang2.h"
                                n_79++;
                                # 1403 "./comelang2.h"
                                # 1395 "./comelang2.h"
                                if(_if_conditional131=n_79>=size_64,                                _if_conditional131) {
                                    # 1396 "./comelang2.h"
                                    n_79=0;
                                }
                                else {
                                    # 1403 "./comelang2.h"
                                    # 1398 "./comelang2.h"
                                    if(_if_conditional132=n_79==hash_78,                                    _if_conditional132) {
                                        # 1399 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b67=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b67);
                                        # 1400 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1400),stackframe(),come_pop_stackframe());
                                        # 1401 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1401),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                # 1405 "./comelang2.h"
                                item_existance_67[n_79]=(_Bool)1;
                                # 1406 "./comelang2.h"
                                keys_65[n_79]=it_71;
                                # 1407 "./comelang2.h"
                                # 1408 "./comelang2.h"
                                items_66[n_79]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b68=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408)),it_71,default_value_80), come_pop_stackframe(), __exception_result_var_b68);
                                # 1410 "./comelang2.h"
                                len_68++;
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1420))->keys=keys_65;
                    # 1421 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1421))->items=items_66;
                    # 1422 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422))->item_existance=item_existance_67;
                    # 1424 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size=size_64;
                    # 1425 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1425))->len=len_68;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
char* result_69;
void* __exception_result_var_b55;
char* __result59__;
_Bool _if_conditional123;
char* __result60__;
char* result_70;
void* __exception_result_var_b56;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                        # 1343 "./comelang2.h"
                        # 1338 "./comelang2.h"
                        if(_if_conditional122=self==((void*)0),                        _if_conditional122) {
                            # 1339 "./comelang2.h"
                            # 1340 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b55=memset(&result_69,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b55);
                            # 1341 "./comelang2.h"
                            __result59__ = __result_obj__ = result_69;
                            return __result59__;
                        }
                        # 1343 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                        # 1349 "./comelang2.h"
                        # 1345 "./comelang2.h"
                        if(_if_conditional123=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                        _if_conditional123) {
                            # 1346 "./comelang2.h"
                            __result60__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                            return __result60__;
                        }
                        # 1349 "./comelang2.h"
                        # 1350 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b56=memset(&result_70,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b56);
                        # 1351 "./comelang2.h"
                        __result61__ = __result_obj__ = result_70;
                        return __result61__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1372 "./comelang2.h"
                        __result62__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                        return __result62__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
char* result_72;
void* __exception_result_var_b59;
char* __result63__;
_Bool _if_conditional125;
char* __result64__;
char* result_73;
void* __exception_result_var_b60;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                        # 1360 "./comelang2.h"
                        # 1355 "./comelang2.h"
                        if(_if_conditional124=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                        _if_conditional124) {
                            # 1356 "./comelang2.h"
                            # 1357 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b59=memset(&result_72,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b59);
                            # 1358 "./comelang2.h"
                            __result63__ = __result_obj__ = result_72;
                            return __result63__;
                        }
                        # 1360 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                        # 1366 "./comelang2.h"
                        # 1362 "./comelang2.h"
                        if(_if_conditional125=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                        _if_conditional125) {
                            # 1363 "./comelang2.h"
                            __result64__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                            return __result64__;
                        }
                        # 1366 "./comelang2.h"
                        # 1367 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b60=memset(&result_73,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b60);
                        # 1368 "./comelang2.h"
                        __result65__ = __result_obj__ = result_73;
                        return __result65__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b63;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional126;
void* right_value67;
struct optional$2boolbool* __exception_result_var_b64;
_Bool _if_conditional127;
struct sClass* __result66__;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct sClass* __result67__;
struct sClass* __result68__;
struct sClass* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
memset(&right_value67, 0, sizeof(void*));
                            # 1265 "./comelang2.h"
                            hash_75=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b63=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b63)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1265))->size;
                            # 1266 "./comelang2.h"
                            it_76=hash_75;
                            # 1290 "./comelang2.h"
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                # 1288 "./comelang2.h"
                                # 1269 "./comelang2.h"
                                if(_if_conditional126=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_76],                                _if_conditional126) {
                                    # 1276 "./comelang2.h"
                                    # 1271 "./comelang2.h"
                                    if(_if_conditional127=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b64=((struct optional$2boolbool*)(right_value67=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_76], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b64)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67),
                                    (right_value67 && right_value67 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value67, 
                                    __freed_obj__ = 0, 
                                    _if_conditional127) {
                                        # 1273 "./comelang2.h"
                                        __result66__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1273))->items[it_76];
                                        return __result66__;
                                    }
                                    # 1276 "./comelang2.h"
                                    it_76++;
                                    # 1284 "./comelang2.h"
                                    # 1278 "./comelang2.h"
                                    if(_if_conditional128=it_76>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1278))->size,                                    _if_conditional128) {
                                        # 1279 "./comelang2.h"
                                        it_76=0;
                                    }
                                    else {
                                        # 1284 "./comelang2.h"
                                        # 1281 "./comelang2.h"
                                        if(_if_conditional129=it_76==hash_75,                                        _if_conditional129) {
                                            # 1282 "./comelang2.h"
                                            __result67__ = __result_obj__ = default_value;
                                            return __result67__;
                                        }
                                    }
                                }
                                else {
                                    # 1286 "./comelang2.h"
                                    __result68__ = __result_obj__ = default_value;
                                    return __result68__;
                                }
                            }
                            # 1290 "./comelang2.h"
                            __result69__ = __result_obj__ = default_value;
                            return __result69__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_83;
struct list_item$1charp* it_84;
_Bool _while_condtional15;
void* right_value69;
struct optional$2boolbool* __exception_result_var_b71;
_Bool _if_conditional136;
struct list$1charp* __exception_result_var_b73;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_83, 0, sizeof(int));
memset(&it_84, 0, sizeof(struct list_item$1charp*));
memset(&right_value69, 0, sizeof(void*));
                                # 498 "./comelang2.h"
                                it2_83=0;
                                # 499 "./comelang2.h"
                                it_84=((struct list$1charp*)come_null_check(self, "./comelang2.h", 499))->head;
                                # 510 "./comelang2.h"
                                while(_while_condtional15=it_84!=((void*)0),                                _while_condtional15) {
                                    # 505 "./comelang2.h"
                                    # 501 "./comelang2.h"
                                    if(_if_conditional136=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 501),__exception_result_var_b71=((struct optional$2boolbool*)(right_value69=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_84, "./comelang2.h", 501))->item, "./comelang2.h", 501)),item))), come_pop_stackframe(), __exception_result_var_b71)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69),
                                    (right_value69 && right_value69 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value69, 
                                    __freed_obj__ = 0, 
                                    _if_conditional136) {
                                        # 502 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 502),__exception_result_var_b73=list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 502)),it2_83,it2_83+1), come_pop_stackframe(), __exception_result_var_b73);
                                        # 503 "./comelang2.h"
                                        break;
                                    }
                                    # 505 "./comelang2.h"
                                    it2_83++;
                                    # 507 "./comelang2.h"
                                    it_84=((struct list_item$1charp*)come_null_check(it_84, "./comelang2.h", 507))->next;
                                }
                                # 510 "./comelang2.h"
                                __result73__ = __result_obj__ = self;
                                return __result73__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
int tmp_85;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct list$1charp* __result70__;
_Bool _if_conditional143;
struct list$1charp* __exception_result_var_b72;
_Bool _if_conditional144;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional17;
_Bool _if_conditional145;
struct list_item$1charp* prev_it_90;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct list_item$1charp* it_91;
int i_92;
_Bool _while_condtional18;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct list_item$1charp* prev_it_93;
struct list_item$1charp* it_94;
struct list_item$1charp* head_prev_it_95;
struct list_item$1charp* tail_it_96;
int i_97;
_Bool _while_condtional19;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_85, 0, sizeof(int));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
memset(&it_91, 0, sizeof(struct list_item$1charp*));
memset(&i_92, 0, sizeof(int));
memset(&prev_it_93, 0, sizeof(struct list_item$1charp*));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_95, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_96, 0, sizeof(struct list_item$1charp*));
memset(&i_97, 0, sizeof(int));
memset(&prev_it_98, 0, sizeof(struct list_item$1charp*));
                                            # 517 "./comelang2.h"
                                            # 514 "./comelang2.h"
                                            if(_if_conditional137=head<0,                                            _if_conditional137) {
                                                # 515 "./comelang2.h"
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 515))->len;
                                            }
                                            # 521 "./comelang2.h"
                                            # 517 "./comelang2.h"
                                            if(_if_conditional138=tail<0,                                            _if_conditional138) {
                                                # 518 "./comelang2.h"
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 518))->len+1;
                                            }
                                            # 527 "./comelang2.h"
                                            # 521 "./comelang2.h"
                                            if(_if_conditional139=head>tail,                                            _if_conditional139) {
                                                # 522 "./comelang2.h"
                                                tmp_85=tail;
                                                # 523 "./comelang2.h"
                                                tail=head;
                                                # 524 "./comelang2.h"
                                                head=tmp_85;
                                            }
                                            # 531 "./comelang2.h"
                                            # 527 "./comelang2.h"
                                            if(_if_conditional140=head<0,                                            _if_conditional140) {
                                                # 528 "./comelang2.h"
                                                head=0;
                                            }
                                            # 535 "./comelang2.h"
                                            # 531 "./comelang2.h"
                                            if(_if_conditional141=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 531))->len,                                            _if_conditional141) {
                                                # 532 "./comelang2.h"
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 532))->len;
                                            }
                                            # 539 "./comelang2.h"
                                            # 535 "./comelang2.h"
                                            if(_if_conditional142=head==tail,                                            _if_conditional142) {
                                                # 536 "./comelang2.h"
                                                __result70__ = __result_obj__ = self;
                                                return __result70__;
                                            }
                                            # 634 "./comelang2.h"
                                            # 539 "./comelang2.h"
                                            if(_if_conditional143=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 539))->len,                                            _if_conditional143) {
                                                # 541 "./comelang2.h"
                                                (come_push_stackframe("./comelang2.h", 541),__exception_result_var_b72=list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 541))), come_pop_stackframe(), __exception_result_var_b72);
                                            }
                                            else {
                                                # 634 "./comelang2.h"
                                                # 543 "./comelang2.h"
                                                if(_if_conditional144=head==0,                                                _if_conditional144) {
                                                    # 544 "./comelang2.h"
                                                    it_88=((struct list$1charp*)come_null_check(self, "./comelang2.h", 544))->head;
                                                    # 545 "./comelang2.h"
                                                    i_89=0;
                                                    # 567 "./comelang2.h"
                                                    while(_while_condtional17=it_88!=((void*)0),                                                    _while_condtional17) {
                                                        # 566 "./comelang2.h"
                                                        # 547 "./comelang2.h"
                                                        if(_if_conditional145=i_89<tail,                                                        _if_conditional145) {
                                                            # 548 "./comelang2.h"
                                                            prev_it_90=it_88;
                                                            # 550 "./comelang2.h"
                                                            it_88=((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 550))->next;
                                                            # 551 "./comelang2.h"
                                                            i_89++;
                                                            # 553 "./comelang2.h"
                                                            if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 555 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 555))->len--;
                                                        }
                                                        else {
                                                            # 566 "./comelang2.h"
                                                            # 557 "./comelang2.h"
                                                            if(_if_conditional146=i_89==tail,                                                            _if_conditional146) {
                                                                # 558 "./comelang2.h"
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 558))->head=it_88;
                                                                # 559 "./comelang2.h"
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 559))->head, "./comelang2.h", 559))->prev=((void*)0);
                                                                # 560 "./comelang2.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 563 "./comelang2.h"
                                                                it_88=((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 563))->next;
                                                                # 564 "./comelang2.h"
                                                                i_89++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 634 "./comelang2.h"
                                                    # 568 "./comelang2.h"
                                                    if(_if_conditional147=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 568))->len,                                                    _if_conditional147) {
                                                        # 569 "./comelang2.h"
                                                        it_91=((struct list$1charp*)come_null_check(self, "./comelang2.h", 569))->head;
                                                        # 570 "./comelang2.h"
                                                        i_92=0;
                                                        # 592 "./comelang2.h"
                                                        while(_while_condtional18=it_91!=((void*)0),                                                        _while_condtional18) {
                                                            # 577 "./comelang2.h"
                                                            # 572 "./comelang2.h"
                                                            if(_if_conditional148=i_92==head,                                                            _if_conditional148) {
                                                                # 573 "./comelang2.h"
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 573))->tail=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 573))->prev;
                                                                # 574 "./comelang2.h"
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 574))->tail, "./comelang2.h", 574))->next=((void*)0);
                                                            }
                                                            # 591 "./comelang2.h"
                                                            # 577 "./comelang2.h"
                                                            if(_if_conditional149=i_92>=head,                                                            _if_conditional149) {
                                                                # 578 "./comelang2.h"
                                                                prev_it_93=it_91;
                                                                # 580 "./comelang2.h"
                                                                it_91=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 580))->next;
                                                                # 581 "./comelang2.h"
                                                                i_92++;
                                                                # 583 "./comelang2.h"
                                                                if(prev_it_93 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                # 585 "./comelang2.h"
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 585))->len--;
                                                            }
                                                            else {
                                                                # 588 "./comelang2.h"
                                                                it_91=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 588))->next;
                                                                # 589 "./comelang2.h"
                                                                i_92++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 594 "./comelang2.h"
                                                        it_94=((struct list$1charp*)come_null_check(self, "./comelang2.h", 594))->head;
                                                        # 596 "./comelang2.h"
                                                        head_prev_it_95=((void*)0);
                                                        # 597 "./comelang2.h"
                                                        tail_it_96=((void*)0);
                                                        # 600 "./comelang2.h"
                                                        i_97=0;
                                                        # 626 "./comelang2.h"
                                                        while(_while_condtional19=it_94!=((void*)0),                                                        _while_condtional19) {
                                                            # 605 "./comelang2.h"
                                                            # 602 "./comelang2.h"
                                                            if(_if_conditional150=i_97==head,                                                            _if_conditional150) {
                                                                # 603 "./comelang2.h"
                                                                head_prev_it_95=((struct list_item$1charp*)come_null_check(it_94, "./comelang2.h", 603))->prev;
                                                            }
                                                            # 609 "./comelang2.h"
                                                            # 605 "./comelang2.h"
                                                            if(_if_conditional151=i_97==tail,                                                            _if_conditional151) {
                                                                # 606 "./comelang2.h"
                                                                tail_it_96=it_94;
                                                            }
                                                            # 624 "./comelang2.h"
                                                            # 609 "./comelang2.h"
                                                            if(_if_conditional152=i_97>=head&&i_97<tail,                                                            _if_conditional152) {
                                                                # 611 "./comelang2.h"
                                                                prev_it_98=it_94;
                                                                # 613 "./comelang2.h"
                                                                it_94=((struct list_item$1charp*)come_null_check(it_94, "./comelang2.h", 613))->next;
                                                                # 614 "./comelang2.h"
                                                                i_97++;
                                                                # 616 "./comelang2.h"
                                                                if(prev_it_98 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                # 618 "./comelang2.h"
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 618))->len--;
                                                            }
                                                            else {
                                                                # 621 "./comelang2.h"
                                                                it_94=((struct list_item$1charp*)come_null_check(it_94, "./comelang2.h", 621))->next;
                                                                # 622 "./comelang2.h"
                                                                i_97++;
                                                            }
                                                        }
                                                        # 629 "./comelang2.h"
                                                        # 626 "./comelang2.h"
                                                        if(_if_conditional153=head_prev_it_95!=((void*)0),                                                        _if_conditional153) {
                                                            # 627 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_95, "./comelang2.h", 627))->next=tail_it_96;
                                                        }
                                                        # 632 "./comelang2.h"
                                                        # 629 "./comelang2.h"
                                                        if(_if_conditional154=tail_it_96!=((void*)0),                                                        _if_conditional154) {
                                                            # 630 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(tail_it_96, "./comelang2.h", 630))->prev=head_prev_it_95;
                                                        }
                                                    }
                                                }
                                            }
                                            # 634 "./comelang2.h"
                                            __result72__ = __result_obj__ = self;
                                            return __result72__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_86;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_87;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_86, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
                                                    # 483 "./comelang2.h"
                                                    it_86=((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head;
                                                    # 490 "./comelang2.h"
                                                    while(_while_condtional16=it_86!=((void*)0),                                                    _while_condtional16) {
                                                        # 485 "./comelang2.h"
                                                        prev_it_87=it_86;
                                                        # 486 "./comelang2.h"
                                                        it_86=((struct list_item$1charp*)come_null_check(it_86, "./comelang2.h", 486))->next;
                                                        # 487 "./comelang2.h"
                                                        if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    # 490 "./comelang2.h"
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
                                                    # 491 "./comelang2.h"
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
                                                    # 493 "./comelang2.h"
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 493))->len=0;
                                                    # 495 "./comelang2.h"
                                                    __result71__ = __result_obj__ = self;
                                                    return __result71__;
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
_Bool _if_conditional160;
char* result_100;
void* __exception_result_var_b77;
char* __result74__;
_Bool _if_conditional161;
char* __result75__;
char* result_101;
void* __exception_result_var_b78;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
                # 343 "./comelang2.h"
                # 338 "./comelang2.h"
                if(_if_conditional160=self==((void*)0),                _if_conditional160) {
                    # 339 "./comelang2.h"
                    # 340 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b77=memset(&result_100,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b77);
                    # 341 "./comelang2.h"
                    __result74__ = __result_obj__ = result_100;
                    return __result74__;
                }
                # 343 "./comelang2.h"
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->head;
                # 349 "./comelang2.h"
                # 345 "./comelang2.h"
                if(_if_conditional161=((struct list$1charp*)come_null_check(self, "./comelang2.h", 345))->it,                _if_conditional161) {
                    # 346 "./comelang2.h"
                    __result75__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                    return __result75__;
                }
                # 349 "./comelang2.h"
                # 350 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b78=memset(&result_101,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b78);
                # 351 "./comelang2.h"
                __result76__ = __result_obj__ = result_101;
                return __result76__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 373 "./comelang2.h"
                __result77__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
                return __result77__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
char* result_103;
void* __exception_result_var_b81;
char* __result78__;
_Bool _if_conditional163;
char* __result79__;
char* result_104;
void* __exception_result_var_b82;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
                # 361 "./comelang2.h"
                # 355 "./comelang2.h"
                if(_if_conditional162=self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),                _if_conditional162) {
                    # 356 "./comelang2.h"
                    # 357 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b81=memset(&result_103,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b81);
                    # 358 "./comelang2.h"
                    __result78__ = __result_obj__ = result_103;
                    return __result78__;
                }
                # 361 "./comelang2.h"
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
                # 367 "./comelang2.h"
                # 363 "./comelang2.h"
                if(_if_conditional163=((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it,                _if_conditional163) {
                    # 364 "./comelang2.h"
                    __result79__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                    return __result79__;
                }
                # 367 "./comelang2.h"
                # 368 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b82=memset(&result_104,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b82);
                # 369 "./comelang2.h"
                __result80__ = __result_obj__ = result_104;
                return __result80__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
void* right_value71;
struct list_item$1charp* litem_105;
_Bool _if_conditional167;
void* right_value72;
struct list_item$1charp* litem_106;
void* right_value73;
struct list_item$1charp* litem_107;
struct list$1charp* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1charp*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1charp*));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1charp*));
                    # 309 "./comelang2.h"
                    # 278 "./comelang2.h"
                    if(_if_conditional166=((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->len==0,                    _if_conditional166) {
                        # 279 "./comelang2.h"
                        litem_105=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value71=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value71;
                        __freed_obj__ = 0;
                        # 281 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_105, "./comelang2.h", 281))->prev=((void*)0);
                        # 282 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_105, "./comelang2.h", 282))->next=((void*)0);
                        # 283 "./comelang2.h"
                        ((struct list_item$1charp*)come_null_check(litem_105, "./comelang2.h", 283))->item=item;
                        # 285 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 285))->tail=litem_105;
                        # 286 "./comelang2.h"
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 286))->head=litem_105;
                    }
                    else {
                        # 309 "./comelang2.h"
                        # 288 "./comelang2.h"
                        if(_if_conditional167=((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->len==1,                        _if_conditional167) {
                            # 289 "./comelang2.h"
                            litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value72=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value72;
                            __freed_obj__ = 0;
                            # 291 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(litem_106, "./comelang2.h", 291))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 291))->head;
                            # 292 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(litem_106, "./comelang2.h", 292))->next=((void*)0);
                            # 293 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(litem_106, "./comelang2.h", 293))->item=item;
                            # 295 "./comelang2.h"
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 295))->tail=litem_106;
                            # 296 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_106;
                        }
                        else {
                            # 299 "./comelang2.h"
                            litem_107=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value73=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value73;
                            __freed_obj__ = 0;
                            # 301 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(litem_107, "./comelang2.h", 301))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 301))->tail;
                            # 302 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(litem_107, "./comelang2.h", 302))->next=((void*)0);
                            # 303 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(litem_107, "./comelang2.h", 303))->item=item;
                            # 305 "./comelang2.h"
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_107;
                            # 306 "./comelang2.h"
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 306))->tail=litem_107;
                        }
                    }
                    # 309 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 309))->len++;
                    # 311 "./comelang2.h"
                    __result81__ = __result_obj__ = self;
                    return __result81__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
void* right_value76;
struct list_item$1tuple2$2charphsTypephph* litem_114;
struct tuple2$2charphsTypeph* __dec_obj28;
_Bool _if_conditional171;
void* right_value77;
struct list_item$1tuple2$2charphsTypephph* litem_115;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value78;
struct list_item$1tuple2$2charphsTypephph* litem_116;
struct tuple2$2charphsTypeph* __dec_obj30;
struct list$1tuple2$2charphsTypephph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value77, 0, sizeof(void*));
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value78, 0, sizeof(void*));
memset(&litem_116, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional168=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional168) {
                    # 279 "./comelang2.h"
                    litem_114=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value76=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value76;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 281))->prev=((void*)0);
                    # 282 "./comelang2.h"
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 282))->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj28=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 283))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_114, "./comelang2.h", 283))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj28) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_114;
                    # 286 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 286))->head=litem_114;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional171=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional171) {
                        # 289 "./comelang2.h"
                        litem_115=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value77=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value77;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 291))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 291))->head;
                        # 292 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 292))->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj29=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 293))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_115, "./comelang2.h", 293))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_115;
                        # 296 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_115;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_116=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value78=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value78;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_116, "./comelang2.h", 301))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 301))->tail;
                        # 302 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_116, "./comelang2.h", 302))->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj30=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_116, "./comelang2.h", 303))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_116, "./comelang2.h", 303))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj30) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_116;
                        # 306 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_116;
                    }
                }
                # 309 "./comelang2.h"
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 309))->len++;
                # 311 "./comelang2.h"
                __result83__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result83__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "tuple2$2charphsTypeph_finalize"
                        # 0 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional169=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1!=((void*)0),                        _if_conditional169) {
                            # 0 "tuple2$2charphsTypeph_finalize"
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "tuple2$2charphsTypeph_finalize"
                        # 1 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional170=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2!=((void*)0),                        _if_conditional170) {
                            # 1 "tuple2$2charphsTypeph_finalize"
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __dec_obj31;
void* right_value83;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
                # 1814 "./comelang2.h"
                __dec_obj31=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1814))->v1;
                ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1814))->v1=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(v1))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value82;
                __freed_obj__ = 0;
                # 1815 "./comelang2.h"
                __dec_obj32=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1815))->v2;
                ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1815))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(v2))));
                if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value83;
                __freed_obj__ = 0;
                # 1817 "./comelang2.h"
                __result84__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result84__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_117;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_118;
struct list$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_117, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_118, 0, sizeof(struct list_item$1sTypeph*));
            # 483 "./comelang2.h"
            it_117=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 483))->head;
            # 490 "./comelang2.h"
            while(_while_condtional20=it_117!=((void*)0),            _while_condtional20) {
                # 485 "./comelang2.h"
                prev_it_118=it_117;
                # 486 "./comelang2.h"
                it_117=((struct list_item$1sTypeph*)come_null_check(it_117, "./comelang2.h", 486))->next;
                # 487 "./comelang2.h"
                if(prev_it_118 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 490 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
            # 491 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
            # 493 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 493))->len=0;
            # 495 "./comelang2.h"
            __result85__ = __result_obj__ = self;
            return __result85__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
char* __exception_result_var_b107;
char* __dec_obj36;
void* right_value97;
char* __exception_result_var_b108;
char* __dec_obj37;
void* right_value111;
struct sClass* __dec_obj46;
struct sStructNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    # 193 "14struct.c"
    ((struct sStructNode*)come_null_check(self, "14struct.c", 193))->sline=((struct sInfo*)come_null_check(info, "14struct.c", 193))->sline;
    # 194 "14struct.c"
    __dec_obj36=((struct sStructNode*)come_null_check(self, "14struct.c", 194))->sname;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 194))->sname=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 194),__exception_result_var_b107=((char*)(right_value96=__builtin_string(((struct sInfo*)come_null_check(info, "14struct.c", 194))->sname))), come_pop_stackframe(), __exception_result_var_b107));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    # 196 "14struct.c"
    __dec_obj37=((struct sStructNode*)come_null_check(self, "14struct.c", 196))->mName;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 196))->mName=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 196),__exception_result_var_b108=((char*)(right_value97=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b108));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value97;
    __freed_obj__ = 0;
    # 197 "14struct.c"
    __dec_obj46=((struct sStructNode*)come_null_check(self, "14struct.c", 197))->mClass;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 197))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value111=sClass_clone(klass))));
    if(__dec_obj46) { come_call_finalizer(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value111;
    __freed_obj__ = 0;
    # 199 "14struct.c"
    ((struct sStructNode*)come_null_check(self, "14struct.c", 199))->mOutput=output;
    # 201 "14struct.c"
    __result96__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result96__;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
struct sClass* __result88__;
void* right_value98;
struct sClass* result_127;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value99;
char* __dec_obj38;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value109;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value110;
char* __dec_obj45;
struct sClass* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct sClass*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
        # 3 "sClass_clone"
        # 2 "sClass_clone"
        if(_if_conditional175=self==(void*)0,        _if_conditional175) {
            # 2 "sClass_clone"
            __result88__ = __result_obj__ = (void*)0;
            return __result88__;
        }
        # 3 "sClass_clone"
        result_127=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value98=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value98;
        __freed_obj__ = 0;
        # 5 "sClass_clone"
        # 4 "sClass_clone"
        if(_if_conditional176=self!=((void*)0),        _if_conditional176) {
            # 4 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
        }
        # 6 "sClass_clone"
        # 5 "sClass_clone"
        if(_if_conditional177=self!=((void*)0),        _if_conditional177) {
            # 5 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
        }
        # 7 "sClass_clone"
        # 6 "sClass_clone"
        if(_if_conditional178=self!=((void*)0),        _if_conditional178) {
            # 6 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
        }
        # 8 "sClass_clone"
        # 7 "sClass_clone"
        if(_if_conditional179=self!=((void*)0),        _if_conditional179) {
            # 7 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
        }
        # 9 "sClass_clone"
        # 8 "sClass_clone"
        if(_if_conditional180=self!=((void*)0),        _if_conditional180) {
            # 8 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
        }
        # 10 "sClass_clone"
        # 9 "sClass_clone"
        if(_if_conditional181=self!=((void*)0),        _if_conditional181) {
            # 9 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
        }
        # 11 "sClass_clone"
        # 10 "sClass_clone"
        if(_if_conditional182=self!=((void*)0),        _if_conditional182) {
            # 10 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
        }
        # 12 "sClass_clone"
        # 11 "sClass_clone"
        if(_if_conditional183=self!=((void*)0),        _if_conditional183) {
            # 11 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
        }
        # 13 "sClass_clone"
        # 12 "sClass_clone"
        if(_if_conditional184=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName!=((void*)0),        _if_conditional184) {
            # 12 "sClass_clone"
            __dec_obj38=((struct sClass*)come_null_check(result_127, "sClass_clone", 12))->mName;
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value99;
            __freed_obj__ = 0;
        }
        # 14 "sClass_clone"
        # 13 "sClass_clone"
        if(_if_conditional185=self!=((void*)0),        _if_conditional185) {
            # 13 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
        }
        # 15 "sClass_clone"
        # 14 "sClass_clone"
        if(_if_conditional186=self!=((void*)0),        _if_conditional186) {
            # 14 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
        }
        # 16 "sClass_clone"
        # 15 "sClass_clone"
        if(_if_conditional187=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields!=((void*)0),        _if_conditional187) {
            # 15 "sClass_clone"
            __dec_obj44=((struct sClass*)come_null_check(result_127, "sClass_clone", 15))->mFields;
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value109=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
            if(__dec_obj44) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value109;
            __freed_obj__ = 0;
        }
        # 17 "sClass_clone"
        # 16 "sClass_clone"
        if(_if_conditional194=self!=((void*)0),        _if_conditional194) {
            # 16 "sClass_clone"
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
        }
        # 18 "sClass_clone"
        # 17 "sClass_clone"
        if(_if_conditional195=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName!=((void*)0),        _if_conditional195) {
            # 17 "sClass_clone"
            __dec_obj45=((struct sClass*)come_null_check(result_127, "sClass_clone", 17))->mDeclareSName;
            ((struct sClass*)come_null_check(result_127, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value110;
            __freed_obj__ = 0;
        }
        # 18 "sClass_clone"
        __result95__ = __result_obj__ = result_127;
        if(result_127 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_127, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result95__;
        if(result_127 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
struct list$1tuple2$2charphsTypephph* __result89__;
void* right_value100;
void* right_value101;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b109;
struct list$1tuple2$2charphsTypephph* result_128;
struct list_item$1tuple2$2charphsTypephph* it_129;
_Bool _while_condtional21;
void* right_value108;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b110;
struct list$1tuple2$2charphsTypephph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value108, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional188=self==((void*)0),                _if_conditional188) {
                    # 193 "./comelang2.h"
                    __result89__ = __result_obj__ = ((void*)0);
                    return __result89__;
                }
                # 195 "./comelang2.h"
                result_128=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b109=((struct list$1tuple2$2charphsTypephph*)(right_value101=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value100=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b109));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value100;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value101;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_129=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional21=it_129!=((void*)0),                _while_condtional21) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b110=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_128, "./comelang2.h", 199)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value108=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_129, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b110);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_129=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_129, "./comelang2.h", 201))->next;
                }
                # 204 "./comelang2.h"
                __result94__ = __result_obj__ = result_128;
                if(result_128 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result94__;
                if(result_128 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 157 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                    # 158 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                    # 159 "./comelang2.h"
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                    # 161 "./comelang2.h"
                    __result90__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result90__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
void* right_value102;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj39;
_Bool _if_conditional190;
void* right_value103;
struct list_item$1tuple2$2charphsTypephph* litem_131;
struct tuple2$2charphsTypeph* __dec_obj40;
void* right_value104;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj41;
struct list$1tuple2$2charphsTypephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional189=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional189) {
                            # 209 "./comelang2.h"
                            litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value102=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value102;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_130, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_130, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj39=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_130, "./comelang2.h", 213))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_130, "./comelang2.h", 213))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj39) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 215 "./comelang2.h"
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_130;
                            # 216 "./comelang2.h"
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 216))->head=litem_130;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional190=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional190) {
                                # 219 "./comelang2.h"
                                litem_131=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value103=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value103;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_131, "./comelang2.h", 221))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_131, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj40=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_131, "./comelang2.h", 223))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_131, "./comelang2.h", 223))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj40) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 225 "./comelang2.h"
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_131;
                                # 226 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_131;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value104=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value104;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 231))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj41=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 233))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 233))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj41) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 235 "./comelang2.h"
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_132;
                                # 236 "./comelang2.h"
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_132;
                            }
                        }
                        # 239 "./comelang2.h"
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 239))->len++;
                        # 241 "./comelang2.h"
                        __result91__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result91__;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
struct tuple2$2charphsTypeph* __result92__;
void* right_value105;
struct tuple2$2charphsTypeph* result_133;
_Bool _if_conditional192;
void* right_value106;
char* __dec_obj42;
_Bool _if_conditional193;
void* right_value107;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional191=self==(void*)0,                        _if_conditional191) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result92__ = __result_obj__ = (void*)0;
                            return __result92__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_133=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value105=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value105;
                        __freed_obj__ = 0;
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional192=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1!=((void*)0),                        _if_conditional192) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj42=((struct tuple2$2charphsTypeph*)come_null_check(result_133, "tuple2$2charphsTypephp_clone", 4))->v1;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_133, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value106=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value106;
                            __freed_obj__ = 0;
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2!=((void*)0),                        _if_conditional193) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj43=((struct tuple2$2charphsTypeph*)come_null_check(result_133, "tuple2$2charphsTypephp_clone", 5))->v2;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_133, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result93__ = __result_obj__ = result_133;
                        if(result_133 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_133, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result93__;
                        if(result_133 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_133, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 206 "14struct.c"
    __result97__ = (_Bool)1;
    return __result97__;
}

char* sStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value112;
char* __exception_result_var_b111;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
    # 211 "14struct.c"
    __result98__ = __result_obj__ = (come_push_stackframe("14struct.c", 211),__exception_result_var_b111=((char*)(right_value112=__builtin_string("sStructNode"))), come_pop_stackframe(), __exception_result_var_b111);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112;
    __freed_obj__ = 0;
    return __result98__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
struct sClass* klass_134;
void* right_value114;
char* __exception_result_var_b112;
char* name_135;
struct sClass* __exception_result_var_b113;
_Bool _if_conditional199;
void* right_value115;
struct map$2charphsClassph* __exception_result_var_b114;
struct sClass* __exception_result_var_b115;
int __exception_result_var_b116;
int __exception_result_var_b117;
_Bool _if_conditional200;
struct sClass* __exception_result_var_b118;
struct sClass* klass2_136;
void* right_value116;
struct list$1tuple2$2charphsTypephph* __dec_obj47;
void* right_value117;
void* right_value118;
struct sType* __exception_result_var_b119;
struct sType* type_137;
void* right_value125;
struct map$2charphsTypeph* __exception_result_var_b144;
_Bool _if_conditional223;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&klass_134, 0, sizeof(struct sClass*));
memset(&right_value114, 0, sizeof(void*));
memset(&name_135, 0, sizeof(char*));
memset(&right_value115, 0, sizeof(void*));
memset(&klass2_136, 0, sizeof(struct sClass*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&right_value125, 0, sizeof(void*));
    # 216 "14struct.c"
    klass_134=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value113=sClass_clone(((struct sStructNode*)come_null_check(self, "14struct.c", 216))->mClass))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    # 217 "14struct.c"
    name_135=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 217),__exception_result_var_b112=((char*)(right_value114=__builtin_string(((struct sStructNode*)come_null_check(self, "14struct.c", 217))->mName))), come_pop_stackframe(), __exception_result_var_b112));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    # 227 "14struct.c"
    # 219 "14struct.c"
    if(_if_conditional199=(come_push_stackframe("14struct.c", 219),__exception_result_var_b113=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 219))->classes, "14struct.c", 219)),name_135,((void*)0)), come_pop_stackframe(), __exception_result_var_b113)==((void*)0),    _if_conditional199) {
        # 220 "14struct.c"
        (come_push_stackframe("14struct.c", 220),__exception_result_var_b114=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 220))->classes, "14struct.c", 220)),(char*)come_increment_ref_count(name_135),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value115=sClass_clone(klass_134))))), come_pop_stackframe(), __exception_result_var_b114);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value115;
        __freed_obj__ = 0;
    }
    else {
        # 227 "14struct.c"
        # 222 "14struct.c"
        if(_if_conditional200=(come_push_stackframe("14struct.c", 222),__exception_result_var_b116=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check((come_push_stackframe("14struct.c", 222),__exception_result_var_b115=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 222))->classes, "14struct.c", 222)),name_135,((void*)0)), come_pop_stackframe(), __exception_result_var_b115), "14struct.c", 222))->mFields, "14struct.c", 222))), come_pop_stackframe(), __exception_result_var_b116)==0&&(come_push_stackframe("14struct.c", 222),__exception_result_var_b117=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_134, "14struct.c", 222))->mFields, "14struct.c", 222))), come_pop_stackframe(), __exception_result_var_b117)>0,        _if_conditional200) {
            # 223 "14struct.c"
            klass2_136=(come_push_stackframe("14struct.c", 223),__exception_result_var_b118=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 223))->classes, "14struct.c", 223)),name_135,((void*)0)), come_pop_stackframe(), __exception_result_var_b118);
            # 224 "14struct.c"
            __dec_obj47=((struct sClass*)come_null_check(klass2_136, "14struct.c", 224))->mFields;
            ((struct sClass*)come_null_check(klass2_136, "14struct.c", 224))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value116=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(klass_134, "14struct.c", 224))->mFields))));
            if(__dec_obj47) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value116;
            __freed_obj__ = 0;
        }
    }
    # 227 "14struct.c"
    type_137=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 227),__exception_result_var_b119=((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 227)))),name_135,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b119));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value117;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value118;
    __freed_obj__ = 0;
    # 228 "14struct.c"
    (come_push_stackframe("14struct.c", 228),__exception_result_var_b144=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 228))->types, "14struct.c", 228)),(char*)come_increment_ref_count(name_135),(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(type_137))))), come_pop_stackframe(), __exception_result_var_b144);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value125;
    __freed_obj__ = 0;
    # 234 "14struct.c"
    # 230 "14struct.c"
    if(_if_conditional223=((struct sStructNode*)come_null_check(self, "14struct.c", 230))->mOutput,    _if_conditional223) {
        # 231 "14struct.c"
        (come_push_stackframe("14struct.c", 231),output_struct(klass_134,info),come_pop_stackframe());
    }
    # 234 "14struct.c"
    __result112__ = (_Bool)1;
    if(klass_134 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result112__;
    if(klass_134 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 417 "./comelang2.h"
            __result99__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 417))->len;
            return __result99__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
unsigned int __exception_result_var_b134;
unsigned int hash_155;
unsigned int it_156;
_Bool _while_condtional24;
_Bool _if_conditional213;
void* right_value123;
struct optional$2boolbool* __exception_result_var_b135;
_Bool _if_conditional214;
_Bool _if_conditional215;
struct list$1charp* __exception_result_var_b136;
struct list$1charp* __exception_result_var_b137;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
int __exception_result_var_b138;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool same_key_exist_157;
char* __exception_result_var_b139;
char* it2_158;
_Bool __exception_result_var_b140;
_Bool _for_condtionalA10;
char* __exception_result_var_b141;
void* right_value124;
struct optional$2boolbool* __exception_result_var_b142;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct list$1charp* __exception_result_var_b143;
struct map$2charphsTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_155, 0, sizeof(unsigned int));
memset(&it_156, 0, sizeof(unsigned int));
memset(&right_value123, 0, sizeof(void*));
memset(&same_key_exist_157, 0, sizeof(_Bool));
memset(&it2_158, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
        # 1432 "./comelang2.h"
        # 1429 "./comelang2.h"
        if(_if_conditional201=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1429))->size,        _if_conditional201) {
            # 1430 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1430),map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
        }
        # 1432 "./comelang2.h"
        hash_155=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b134=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b134)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1432))->size;
        # 1433 "./comelang2.h"
        it_156=hash_155;
        # 1491 "./comelang2.h"
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            # 1489 "./comelang2.h"
            # 1436 "./comelang2.h"
            if(_if_conditional213=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_156],            _if_conditional213) {
                # 1459 "./comelang2.h"
                # 1438 "./comelang2.h"
                if(_if_conditional214=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b135=((struct optional$2boolbool*)(right_value123=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_156], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b135)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123),
                (right_value123 && right_value123 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value123, 
                __freed_obj__ = 0, 
                _if_conditional214) {
                    # 1449 "./comelang2.h"
                    # 1440 "./comelang2.h"
                    if(_if_conditional215=1,                    _if_conditional215) {
                        # 1441 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b136=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_156]), come_pop_stackframe(), __exception_result_var_b136);
                        # 1442 "./comelang2.h"
                        if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_156] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_156] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_156], (void*)0, (void*)0, 0, 0, 0); }
                        # 1443 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_156]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1446 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b137=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_156]), come_pop_stackframe(), __exception_result_var_b137);
                        # 1447 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_156]=key;
                    }
                    # 1456 "./comelang2.h"
                    # 1449 "./comelang2.h"
                    if(_if_conditional216=1,                    _if_conditional216) {
                        # 1450 "./comelang2.h"
                        if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1450))->items[it_156] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1450))->items[it_156], (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 1451 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->items[it_156]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1454 "./comelang2.h"
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1454))->items[it_156]=item;
                    }
                    # 1456 "./comelang2.h"
                    break;
                }
                # 1459 "./comelang2.h"
                it_156++;
                # 1469 "./comelang2.h"
                # 1461 "./comelang2.h"
                if(_if_conditional217=it_156>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1461))->size,                _if_conditional217) {
                    # 1462 "./comelang2.h"
                    it_156=0;
                }
                else {
                    # 1469 "./comelang2.h"
                    # 1464 "./comelang2.h"
                    if(_if_conditional218=it_156==hash_155,                    _if_conditional218) {
                        # 1465 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b138=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b138);
                        # 1466 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1466),stackframe(),come_pop_stackframe());
                        # 1467 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1467),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                # 1471 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1471))->item_existance[it_156]=(_Bool)1;
                # 1478 "./comelang2.h"
                # 1472 "./comelang2.h"
                if(_if_conditional219=1,                _if_conditional219) {
                    # 1473 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_156]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1476 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_156]=key;
                }
                # 1485 "./comelang2.h"
                # 1478 "./comelang2.h"
                if(_if_conditional220=1,                _if_conditional220) {
                    # 1479 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1479))->items[it_156]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    # 1482 "./comelang2.h"
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1482))->items[it_156]=item;
                }
                # 1485 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1485))->len++;
                # 1487 "./comelang2.h"
                break;
            }
        }
        # 1491 "./comelang2.h"
        same_key_exist_157=(_Bool)0;
        # 1499 "./comelang2.h"
        for(
        it2_158=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b139=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b139) ,        0;        _for_condtionalA10=        !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b140=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b140) ,        _for_condtionalA10;        it2_158=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b141=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b141) ,        0        ){
            # 1497 "./comelang2.h"
            # 1494 "./comelang2.h"
            if(_if_conditional221=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b142=((struct optional$2boolbool*)(right_value124=string_equals(((char*)come_null_check(it2_158, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b142)),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124),
            (right_value124 && right_value124 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value124, 
            __freed_obj__ = 0, 
            _if_conditional221) {
                # 1495 "./comelang2.h"
                same_key_exist_157=(_Bool)1;
            }
        }
        # 1503 "./comelang2.h"
        # 1499 "./comelang2.h"
        if(_if_conditional222=!same_key_exist_157,        _if_conditional222) {
            # 1500 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b143=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b143);
        }
        # 1503 "./comelang2.h"
        __result111__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result111__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_138;
void* right_value119;
char** keys_139;
void* right_value120;
struct sType** items_140;
void* right_value121;
_Bool* item_existance_141;
int len_142;
char* __exception_result_var_b122;
char* it_145;
_Bool __exception_result_var_b123;
_Bool _for_condtionalA9;
char* __exception_result_var_b126;
struct sType* default_value_148;
void* __exception_result_var_b127;
struct sType* __exception_result_var_b130;
struct sType* it2_151;
unsigned int __exception_result_var_b131;
unsigned int hash_152;
int n_153;
_Bool _while_condtional23;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
int __exception_result_var_b132;
struct sType* default_value_154;
struct sType* __exception_result_var_b133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_138, 0, sizeof(int));
memset(&right_value119, 0, sizeof(void*));
memset(&keys_139, 0, sizeof(char**));
memset(&right_value120, 0, sizeof(void*));
memset(&items_140, 0, sizeof(struct sType**));
memset(&right_value121, 0, sizeof(void*));
memset(&item_existance_141, 0, sizeof(_Bool*));
memset(&len_142, 0, sizeof(int));
memset(&it_145, 0, sizeof(char*));
memset(&default_value_148, 0, sizeof(struct sType*));
memset(&it2_151, 0, sizeof(struct sType*));
memset(&hash_152, 0, sizeof(unsigned int));
memset(&n_153, 0, sizeof(int));
memset(&default_value_154, 0, sizeof(struct sType*));
                # 1376 "./comelang2.h"
                size_138=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                # 1377 "./comelang2.h"
                keys_139=(char**)come_increment_ref_count(((char**)(right_value119=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value119;
                __freed_obj__ = 0;
                # 1378 "./comelang2.h"
                items_140=(struct sType**)come_increment_ref_count(((struct sType**)(right_value120=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_138)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value120;
                __freed_obj__ = 0;
                # 1379 "./comelang2.h"
                item_existance_141=(_Bool*)come_increment_ref_count(((_Bool*)(right_value121=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_138)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value121);
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value121;
                __freed_obj__ = 0;
                # 1381 "./comelang2.h"
                len_142=0;
                # 1416 "./comelang2.h"
                for(
                it_145=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b122=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b122) ,                0;                _for_condtionalA9=                !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b123=map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b123) ,                _for_condtionalA9;                it_145=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b126=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b126) ,                0                ){
                    # 1384 "./comelang2.h"
                    # 1385 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b127=memset(&default_value_148,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b127);
                    # 1386 "./comelang2.h"
                    it2_151=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b130=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1386)),it_145,default_value_148), come_pop_stackframe(), __exception_result_var_b130);
                    # 1387 "./comelang2.h"
                    hash_152=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b131=string_get_hash_key(((char*)come_null_check(it_145, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b131)%size_138;
                    # 1388 "./comelang2.h"
                    n_153=hash_152;
                    # 1414 "./comelang2.h"
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        # 1413 "./comelang2.h"
                        # 1391 "./comelang2.h"
                        if(_if_conditional210=item_existance_141[n_153],                        _if_conditional210) {
                            # 1393 "./comelang2.h"
                            n_153++;
                            # 1403 "./comelang2.h"
                            # 1395 "./comelang2.h"
                            if(_if_conditional211=n_153>=size_138,                            _if_conditional211) {
                                # 1396 "./comelang2.h"
                                n_153=0;
                            }
                            else {
                                # 1403 "./comelang2.h"
                                # 1398 "./comelang2.h"
                                if(_if_conditional212=n_153==hash_152,                                _if_conditional212) {
                                    # 1399 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b132=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b132);
                                    # 1400 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1400),stackframe(),come_pop_stackframe());
                                    # 1401 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1401),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            # 1405 "./comelang2.h"
                            item_existance_141[n_153]=(_Bool)1;
                            # 1406 "./comelang2.h"
                            keys_139[n_153]=it_145;
                            # 1407 "./comelang2.h"
                            # 1408 "./comelang2.h"
                            items_140[n_153]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b133=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408)),it_145,default_value_154), come_pop_stackframe(), __exception_result_var_b133);
                            # 1410 "./comelang2.h"
                            len_142++;
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
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1420))->keys=keys_139;
                # 1421 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1421))->items=items_140;
                # 1422 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422))->item_existance=item_existance_141;
                # 1424 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size=size_138;
                # 1425 "./comelang2.h"
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1425))->len=len_142;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
char* result_143;
void* __exception_result_var_b120;
char* __result100__;
_Bool _if_conditional203;
char* __result101__;
char* result_144;
void* __exception_result_var_b121;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
                    # 1343 "./comelang2.h"
                    # 1338 "./comelang2.h"
                    if(_if_conditional202=self==((void*)0),                    _if_conditional202) {
                        # 1339 "./comelang2.h"
                        # 1340 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b120=memset(&result_143,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b120);
                        # 1341 "./comelang2.h"
                        __result100__ = __result_obj__ = result_143;
                        return __result100__;
                    }
                    # 1343 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                    # 1349 "./comelang2.h"
                    # 1345 "./comelang2.h"
                    if(_if_conditional203=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                    _if_conditional203) {
                        # 1346 "./comelang2.h"
                        __result101__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                        return __result101__;
                    }
                    # 1349 "./comelang2.h"
                    # 1350 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b121=memset(&result_144,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b121);
                    # 1351 "./comelang2.h"
                    __result102__ = __result_obj__ = result_144;
                    return __result102__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1372 "./comelang2.h"
                    __result103__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                    return __result103__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
char* result_146;
void* __exception_result_var_b124;
char* __result104__;
_Bool _if_conditional205;
char* __result105__;
char* result_147;
void* __exception_result_var_b125;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
                    # 1360 "./comelang2.h"
                    # 1355 "./comelang2.h"
                    if(_if_conditional204=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                    _if_conditional204) {
                        # 1356 "./comelang2.h"
                        # 1357 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b124=memset(&result_146,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b124);
                        # 1358 "./comelang2.h"
                        __result104__ = __result_obj__ = result_146;
                        return __result104__;
                    }
                    # 1360 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                    # 1366 "./comelang2.h"
                    # 1362 "./comelang2.h"
                    if(_if_conditional205=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                    _if_conditional205) {
                        # 1363 "./comelang2.h"
                        __result105__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                        return __result105__;
                    }
                    # 1366 "./comelang2.h"
                    # 1367 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b125=memset(&result_147,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b125);
                    # 1368 "./comelang2.h"
                    __result106__ = __result_obj__ = result_147;
                    return __result106__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b128;
unsigned int hash_149;
unsigned int it_150;
_Bool _while_condtional22;
_Bool _if_conditional206;
void* right_value122;
struct optional$2boolbool* __exception_result_var_b129;
_Bool _if_conditional207;
struct sType* __result107__;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sType* __result108__;
struct sType* __result109__;
struct sType* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_149, 0, sizeof(unsigned int));
memset(&it_150, 0, sizeof(unsigned int));
memset(&right_value122, 0, sizeof(void*));
                        # 1265 "./comelang2.h"
                        hash_149=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b128=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b128)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1265))->size;
                        # 1266 "./comelang2.h"
                        it_150=hash_149;
                        # 1290 "./comelang2.h"
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            # 1288 "./comelang2.h"
                            # 1269 "./comelang2.h"
                            if(_if_conditional206=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_150],                            _if_conditional206) {
                                # 1276 "./comelang2.h"
                                # 1271 "./comelang2.h"
                                if(_if_conditional207=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b129=((struct optional$2boolbool*)(right_value122=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_150], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b129)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122),
                                (right_value122 && right_value122 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value122, 
                                __freed_obj__ = 0, 
                                _if_conditional207) {
                                    # 1273 "./comelang2.h"
                                    __result107__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1273))->items[it_150];
                                    return __result107__;
                                }
                                # 1276 "./comelang2.h"
                                it_150++;
                                # 1284 "./comelang2.h"
                                # 1278 "./comelang2.h"
                                if(_if_conditional208=it_150>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1278))->size,                                _if_conditional208) {
                                    # 1279 "./comelang2.h"
                                    it_150=0;
                                }
                                else {
                                    # 1284 "./comelang2.h"
                                    # 1281 "./comelang2.h"
                                    if(_if_conditional209=it_150==hash_149,                                    _if_conditional209) {
                                        # 1282 "./comelang2.h"
                                        __result108__ = __result_obj__ = default_value;
                                        return __result108__;
                                    }
                                }
                            }
                            else {
                                # 1286 "./comelang2.h"
                                __result109__ = __result_obj__ = default_value;
                                return __result109__;
                            }
                        }
                        # 1290 "./comelang2.h"
                        __result110__ = __result_obj__ = default_value;
                        return __result110__;
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 239 "14struct.c"
    __result113__ = ((struct sStructNode*)come_null_check(self, "14struct.c", 239))->sline;
    return __result113__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __exception_result_var_b145;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    # 244 "14struct.c"
    __result114__ = __result_obj__ = (come_push_stackframe("14struct.c", 244),__exception_result_var_b145=((char*)(right_value126=__builtin_string(((struct sStructNode*)come_null_check(self, "14struct.c", 244))->sname))), come_pop_stackframe(), __exception_result_var_b145);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126;
    __freed_obj__ = 0;
    return __result114__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value127;
char* __exception_result_var_b146;
char* __dec_obj48;
void* right_value128;
char* __exception_result_var_b147;
char* __dec_obj49;
void* right_value129;
struct sClass* __dec_obj50;
struct sStructNobodyNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
    # 258 "14struct.c"
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 258))->sline=((struct sInfo*)come_null_check(info, "14struct.c", 258))->sline;
    # 259 "14struct.c"
    __dec_obj48=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 259))->sname;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 259))->sname=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 259),__exception_result_var_b146=((char*)(right_value127=__builtin_string(((struct sInfo*)come_null_check(info, "14struct.c", 259))->sname))), come_pop_stackframe(), __exception_result_var_b146));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    # 261 "14struct.c"
    __dec_obj49=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 261))->mName;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 261))->mName=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 261),__exception_result_var_b147=((char*)(right_value128=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b147));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    # 262 "14struct.c"
    __dec_obj50=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 262))->mClass;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 262))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value129=sClass_clone(klass))));
    if(__dec_obj50) { come_call_finalizer(sClass_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value129;
    __freed_obj__ = 0;
    # 264 "14struct.c"
    __result115__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result115__;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 269 "14struct.c"
    __result116__ = (_Bool)1;
    return __result116__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value130;
char* __exception_result_var_b148;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
    # 274 "14struct.c"
    __result117__ = __result_obj__ = (come_push_stackframe("14struct.c", 274),__exception_result_var_b148=((char*)(right_value130=__builtin_string("sStructNobodyNode"))), come_pop_stackframe(), __exception_result_var_b148);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130;
    __freed_obj__ = 0;
    return __result117__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value131;
char* __exception_result_var_b149;
char* name_159;
struct sClass* klass_160;
struct sClass* __exception_result_var_b150;
_Bool _if_conditional227;
void* right_value132;
struct map$2charphsClassph* __exception_result_var_b151;
void* right_value133;
void* right_value134;
struct sType* __exception_result_var_b152;
struct sType* type_161;
void* right_value135;
struct map$2charphsTypeph* __exception_result_var_b153;
_Bool __exception_result_var_b154;
_Bool _if_conditional228;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&name_159, 0, sizeof(char*));
memset(&klass_160, 0, sizeof(struct sClass*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&type_161, 0, sizeof(struct sType*));
memset(&right_value135, 0, sizeof(void*));
    # 279 "14struct.c"
    name_159=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 279),__exception_result_var_b149=((char*)(right_value131=__builtin_string(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 279))->mName))), come_pop_stackframe(), __exception_result_var_b149));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value131;
    __freed_obj__ = 0;
    # 280 "14struct.c"
    klass_160=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 280))->mClass;
    # 286 "14struct.c"
    # 282 "14struct.c"
    if(_if_conditional227=(come_push_stackframe("14struct.c", 282),__exception_result_var_b150=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 282))->classes, "14struct.c", 282)),name_159,((void*)0)), come_pop_stackframe(), __exception_result_var_b150)==((void*)0),    _if_conditional227) {
        # 283 "14struct.c"
        (come_push_stackframe("14struct.c", 283),__exception_result_var_b151=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 283))->classes, "14struct.c", 283)),(char*)come_increment_ref_count(name_159),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value132=sClass_clone(klass_160))))), come_pop_stackframe(), __exception_result_var_b151);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132;
        __freed_obj__ = 0;
    }
    # 286 "14struct.c"
    type_161=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 286),__exception_result_var_b152=((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 286)))),name_159,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b152));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value133;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value134;
    __freed_obj__ = 0;
    # 288 "14struct.c"
    (come_push_stackframe("14struct.c", 288),__exception_result_var_b153=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 288))->types, "14struct.c", 288)),(char*)come_increment_ref_count(name_159),(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type_161))))), come_pop_stackframe(), __exception_result_var_b153);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value135;
    __freed_obj__ = 0;
    # 296 "14struct.c"
    # 290 "14struct.c"
    if(_if_conditional228=((struct sInfo*)come_null_check(info, "14struct.c", 290))->output_header_file&&(come_push_stackframe("14struct.c", 290),__exception_result_var_b154=string_operator_not_equals(((struct sClass*)come_null_check(klass_160, "14struct.c", 290))->mDeclareSName,((struct sInfo*)come_null_check(info, "14struct.c", 290))->base_sname), come_pop_stackframe(), __exception_result_var_b154),    _if_conditional228) {
    }
    else {
        # 293 "14struct.c"
        (come_push_stackframe("14struct.c", 293),add_come_code_at_source_head(info,"struct %s;\n",name_159),come_pop_stackframe());
    }
    # 296 "14struct.c"
    __result118__ = (_Bool)1;
    if(name_159 && !__freed_obj__) { name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, 0); }
    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result118__;
    if(name_159 && !__freed_obj__) { name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, 0); }
    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 301 "14struct.c"
    __result119__ = ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 301))->sline;
    return __result119__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __exception_result_var_b155;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
    # 306 "14struct.c"
    __result120__ = __result_obj__ = (come_push_stackframe("14struct.c", 306),__exception_result_var_b155=((char*)(right_value136=__builtin_string(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 306))->sname))), come_pop_stackframe(), __exception_result_var_b155);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    return __result120__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
char* __exception_result_var_b156;
char* __dec_obj51;
struct sGenericsStructNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
    # 317 "14struct.c"
    ((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 317))->sline=((struct sInfo*)come_null_check(info, "14struct.c", 317))->sline;
    # 318 "14struct.c"
    __dec_obj51=((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 318))->sname;
    ((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 318))->sname=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 318),__exception_result_var_b156=((char*)(right_value137=__builtin_string(((struct sInfo*)come_null_check(info, "14struct.c", 318))->sname))), come_pop_stackframe(), __exception_result_var_b156));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137;
    __freed_obj__ = 0;
    # 320 "14struct.c"
    __result121__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result121__;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 326 "14struct.c"
    __result122__ = (_Bool)1;
    return __result122__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value138;
char* __exception_result_var_b157;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value138, 0, sizeof(void*));
    # 331 "14struct.c"
    __result123__ = __result_obj__ = (come_push_stackframe("14struct.c", 331),__exception_result_var_b157=((char*)(right_value138=__builtin_string("sGenericsStructNode"))), come_pop_stackframe(), __exception_result_var_b157);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value138;
    __freed_obj__ = 0;
    return __result123__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 337 "14struct.c"
    __result124__ = (_Bool)1;
    return __result124__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 342 "14struct.c"
    __result125__ = ((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 342))->sline;
    return __result125__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __exception_result_var_b158;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
    # 347 "14struct.c"
    __result126__ = __result_obj__ = (come_push_stackframe("14struct.c", 347),__exception_result_var_b158=((char*)(right_value139=__builtin_string(((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 347))->sname))), come_pop_stackframe(), __exception_result_var_b158);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    return __result126__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_162;
_Bool output_163;
struct sClass* __exception_result_var_b159;
_Bool _if_conditional230;
void* right_value140;
void* right_value141;
char* __exception_result_var_b160;
void* right_value142;
struct sClass* __exception_result_var_b161;
struct sClass* __dec_obj52;
void* right_value143;
char* __exception_result_var_b162;
struct map$2charphsClassph* __exception_result_var_b163;
struct sClass* __exception_result_var_b164;
void* right_value144;
struct sClass* __dec_obj53;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b165;
int __exception_result_var_b166;
_Bool _while_condtional26;
_Bool multiple_declare_166;
char* p_167;
int sline_168;
_Bool no_output_err_169;
void* right_value145;
struct tuple3$3sTypephcharphbool* __exception_result_var_b167;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* type_170;
char* name_171;
_Bool err_172;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value146;
struct tuple3$3sTypephcharphbool* __exception_result_var_b168;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_173;
char* name_174;
_Bool err_175;
void* right_value147;
struct tuple2$2sTypephcharph* __exception_result_var_b169;
struct tuple2$2sTypephcharph* multiple_assgin_var6;
struct sType* type2_176;
char* name2_177;
_Bool _if_conditional237;
void* right_value148;
void* right_value149;
struct tuple2$2charphsTypeph* __exception_result_var_b170;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b171;
_Bool _while_condtional27;
void* right_value150;
struct tuple2$2sTypephcharph* __exception_result_var_b172;
struct tuple2$2sTypephcharph* multiple_assgin_var7;
struct sType* type2_178;
char* name2_179;
_Bool _if_conditional238;
void* right_value151;
void* right_value152;
struct tuple2$2charphsTypeph* __exception_result_var_b173;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b174;
void* right_value153;
struct tuple3$3sTypephcharphbool* __exception_result_var_b175;
struct tuple3$3sTypephcharphbool* multiple_assgin_var8;
struct sType* type2_180;
char* name_181;
_Bool err_182;
_Bool _if_conditional239;
int __exception_result_var_b176;
_Bool _if_conditional240;
void* right_value154;
void* right_value155;
struct tuple2$2charphsTypeph* __exception_result_var_b177;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b178;
int __exception_result_var_b179;
_Bool _if_conditional241;
void* right_value156;
void* right_value157;
char* __exception_result_var_b180;
void* right_value158;
struct sStructNode* __exception_result_var_b181;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value163;
struct sNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_162, 0, sizeof(struct sClass*));
memset(&output_163, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&multiple_declare_166, 0, sizeof(_Bool));
memset(&p_167, 0, sizeof(char*));
memset(&sline_168, 0, sizeof(int));
memset(&no_output_err_169, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
memset(&type_170, 0, sizeof(struct sType*));
memset(&name_171, 0, sizeof(char*));
memset(&err_172, 0, sizeof(_Bool));
memset(&type_170, 0, sizeof(struct sType*));
memset(&name_171, 0, sizeof(char*));
memset(&err_172, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&base_type_173, 0, sizeof(struct sType*));
memset(&name_174, 0, sizeof(char*));
memset(&err_175, 0, sizeof(_Bool));
memset(&base_type_173, 0, sizeof(struct sType*));
memset(&name_174, 0, sizeof(char*));
memset(&err_175, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&type2_176, 0, sizeof(struct sType*));
memset(&name2_177, 0, sizeof(char*));
memset(&type2_176, 0, sizeof(struct sType*));
memset(&name2_177, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&type2_178, 0, sizeof(struct sType*));
memset(&name2_179, 0, sizeof(char*));
memset(&type2_178, 0, sizeof(struct sType*));
memset(&name2_179, 0, sizeof(char*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&type2_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
memset(&err_182, 0, sizeof(_Bool));
memset(&type2_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
memset(&err_182, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
    # 352 "14struct.c"
    # 353 "14struct.c"
    # 364 "14struct.c"
    # 354 "14struct.c"
    if(_if_conditional230=(come_push_stackframe("14struct.c", 354),__exception_result_var_b159=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 354))->classes, "14struct.c", 354)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b159)==((void*)0),    _if_conditional230) {
        # 355 "14struct.c"
        output_163=(_Bool)1;
        # 356 "14struct.c"
        __dec_obj52=klass_162;
        klass_162=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 356),__exception_result_var_b161=((struct sClass*)(right_value142=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value140=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 356)))),(come_push_stackframe("14struct.c", 356),__exception_result_var_b160=((char*)(right_value141=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b160),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b161));
        if(__dec_obj52) { come_call_finalizer(sClass_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value141;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value142;
        __freed_obj__ = 0;
        # 357 "14struct.c"
        (come_push_stackframe("14struct.c", 357),__exception_result_var_b163=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 357))->classes, "14struct.c", 357)),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 357),__exception_result_var_b162=((char*)(right_value143=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b162)),(struct sClass*)come_increment_ref_count(klass_162)), come_pop_stackframe(), __exception_result_var_b163);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value143;
        __freed_obj__ = 0;
    }
    else {
        # 360 "14struct.c"
        output_163=(_Bool)0;
        # 361 "14struct.c"
        __dec_obj53=klass_162;
        klass_162=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value144=sClass_clone((come_push_stackframe("14struct.c", 361),__exception_result_var_b164=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 361))->classes, "14struct.c", 361)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b164)))));
        if(__dec_obj53) { come_call_finalizer(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144;
        __freed_obj__ = 0;
    }
    # 364 "14struct.c"
    (come_push_stackframe("14struct.c", 364),__exception_result_var_b165=list$1tuple2$2charphsTypephph_reset(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_162, "14struct.c", 364))->mFields, "14struct.c", 364))), come_pop_stackframe(), __exception_result_var_b165);
    # 366 "14struct.c"
    (come_push_stackframe("14struct.c", 366),__exception_result_var_b166=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b166);
    # 431 "14struct.c"
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        # 369 "14struct.c"
        multiple_declare_166=(_Bool)0;
        # 387 "14struct.c"
        {
            # 371 "14struct.c"
            p_167=((struct sInfo*)come_null_check(info, "14struct.c", 371))->p;
            # 372 "14struct.c"
            sline_168=((struct sInfo*)come_null_check(info, "14struct.c", 372))->sline;
            # 374 "14struct.c"
            no_output_err_169=((struct sInfo*)come_null_check(info, "14struct.c", 374))->no_output_err;
            # 375 "14struct.c"
            ((struct sInfo*)come_null_check(info, "14struct.c", 375))->no_output_err=(_Bool)1;
            # 376 "14struct.c"
            multiple_assgin_var4=(come_push_stackframe("14struct.c", 376),__exception_result_var_b167=((struct tuple3$3sTypephcharphbool*)(right_value145=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b167);
            type_170=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_171=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_172=multiple_assgin_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value145;
            __freed_obj__ = 0;
            # 377 "14struct.c"
            ((struct sInfo*)come_null_check(info, "14struct.c", 377))->no_output_err=no_output_err_169;
            # 383 "14struct.c"
            # 379 "14struct.c"
            if(_if_conditional233=err_172&&*((struct sInfo*)come_null_check(info, "14struct.c", 379))->p==44,            _if_conditional233) {
                # 380 "14struct.c"
                multiple_declare_166=(_Bool)1;
            }
            # 383 "14struct.c"
            ((struct sInfo*)come_null_check(info, "14struct.c", 383))->p=p_167;
            # 384 "14struct.c"
            ((struct sInfo*)come_null_check(info, "14struct.c", 384))->sline=sline_168;
            if(type_170 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_170, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_171 && !__freed_obj__) { name_171 = come_decrement_ref_count(name_171, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 419 "14struct.c"
        # 387 "14struct.c"
        if(_if_conditional234=multiple_declare_166,        _if_conditional234) {
            # 388 "14struct.c"
            multiple_assgin_var5=(come_push_stackframe("14struct.c", 388),__exception_result_var_b168=((struct tuple3$3sTypephcharphbool*)(right_value146=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b168);
            base_type_173=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
            name_174=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
            err_175=multiple_assgin_var5->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value146;
            __freed_obj__ = 0;
            # 390 "14struct.c"
            multiple_assgin_var6=(come_push_stackframe("14struct.c", 390),__exception_result_var_b169=((struct tuple2$2sTypephcharph*)(right_value147=parse_variable_name((struct sType*)come_increment_ref_count(base_type_173),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b169);
            type2_176=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
            name2_177=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value147;
            __freed_obj__ = 0;
            # 396 "14struct.c"
            # 392 "14struct.c"
            if(_if_conditional237=!((struct sInfo*)come_null_check(info, "14struct.c", 392))->no_output_err,            _if_conditional237) {
                # 393 "14struct.c"
                (come_push_stackframe("14struct.c", 393),__exception_result_var_b171=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_162, "14struct.c", 393))->mFields, "14struct.c", 393)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 393),__exception_result_var_b170=((struct tuple2$2charphsTypeph*)(right_value149=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value148=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 393)))),(char*)come_increment_ref_count(name2_177),(struct sType*)come_increment_ref_count(type2_176)))), come_pop_stackframe(), __exception_result_var_b170))), come_pop_stackframe(), __exception_result_var_b171);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value148;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value149;
                __freed_obj__ = 0;
            }
            # 406 "14struct.c"
            while(_while_condtional27=*((struct sInfo*)come_null_check(info, "14struct.c", 396))->p==44,            _while_condtional27) {
                # 397 "14struct.c"
                ((struct sInfo*)come_null_check(info, "14struct.c", 397))->p++;
                # 398 "14struct.c"
                (come_push_stackframe("14struct.c", 398),skip_spaces_and_lf(info),come_pop_stackframe());
                # 400 "14struct.c"
                multiple_assgin_var7=(come_push_stackframe("14struct.c", 400),__exception_result_var_b172=((struct tuple2$2sTypephcharph*)(right_value150=parse_variable_name((struct sType*)come_increment_ref_count(base_type_173),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b172);
                type2_178=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v1);
                name2_179=(char*)come_increment_ref_count(multiple_assgin_var7->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value150;
                __freed_obj__ = 0;
                # 405 "14struct.c"
                # 402 "14struct.c"
                if(_if_conditional238=!((struct sInfo*)come_null_check(info, "14struct.c", 402))->no_output_err,                _if_conditional238) {
                    # 403 "14struct.c"
                    (come_push_stackframe("14struct.c", 403),__exception_result_var_b174=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_162, "14struct.c", 403))->mFields, "14struct.c", 403)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 403),__exception_result_var_b173=((struct tuple2$2charphsTypeph*)(right_value152=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value151=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 403)))),(char*)come_increment_ref_count(name2_179),(struct sType*)come_increment_ref_count(type2_178)))), come_pop_stackframe(), __exception_result_var_b173))), come_pop_stackframe(), __exception_result_var_b174);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value151;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value152;
                    __freed_obj__ = 0;
                }
                if(type2_178 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name2_179 && !__freed_obj__) { name2_179 = come_decrement_ref_count(name2_179, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(base_type_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_173, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_174 && !__freed_obj__) { name_174 = come_decrement_ref_count(name_174, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_176 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_176, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name2_177 && !__freed_obj__) { name2_177 = come_decrement_ref_count(name2_177, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 408 "14struct.c"
            (come_push_stackframe("14struct.c", 408),parse_sharp_v5(info),come_pop_stackframe());
            # 409 "14struct.c"
            multiple_assgin_var8=(come_push_stackframe("14struct.c", 409),__exception_result_var_b175=((struct tuple3$3sTypephcharphbool*)(right_value153=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b175);
            type2_180=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v1);
            name_181=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
            err_182=multiple_assgin_var8->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value153;
            __freed_obj__ = 0;
            # 415 "14struct.c"
            # 410 "14struct.c"
            if(_if_conditional239=!err_182,            _if_conditional239) {
                # 411 "14struct.c"
                (come_push_stackframe("14struct.c", 411),__exception_result_var_b176=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "14struct.c", 411))->sname,((struct sInfo*)come_null_check(info, "14struct.c", 411))->sline), come_pop_stackframe(), __exception_result_var_b176);
                # 412 "14struct.c"
                (come_push_stackframe("14struct.c", 412),exit(2),come_pop_stackframe());
            }
            # 418 "14struct.c"
            # 415 "14struct.c"
            if(_if_conditional240=!((struct sInfo*)come_null_check(info, "14struct.c", 415))->no_output_err,            _if_conditional240) {
                # 416 "14struct.c"
                (come_push_stackframe("14struct.c", 416),__exception_result_var_b178=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_162, "14struct.c", 416))->mFields, "14struct.c", 416)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 416),__exception_result_var_b177=((struct tuple2$2charphsTypeph*)(right_value155=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value154=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 416)))),(char*)come_increment_ref_count(name_181),(struct sType*)come_increment_ref_count(type2_180)))), come_pop_stackframe(), __exception_result_var_b177))), come_pop_stackframe(), __exception_result_var_b178);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value154;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value155);
                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value155;
                __freed_obj__ = 0;
            }
            if(type2_180 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_180, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_181 && !__freed_obj__) { name_181 = come_decrement_ref_count(name_181, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 419 "14struct.c"
        (come_push_stackframe("14struct.c", 419),__exception_result_var_b179=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b179);
        # 421 "14struct.c"
        (come_push_stackframe("14struct.c", 421),parse_sharp_v5(info),come_pop_stackframe());
        # 428 "14struct.c"
        # 423 "14struct.c"
        if(_if_conditional241=*((struct sInfo*)come_null_check(info, "14struct.c", 423))->p==125,        _if_conditional241) {
            # 424 "14struct.c"
            ((struct sInfo*)come_null_check(info, "14struct.c", 424))->p++;
            # 425 "14struct.c"
            (come_push_stackframe("14struct.c", 425),skip_spaces_and_lf(info),come_pop_stackframe());
            # 426 "14struct.c"
            break;
        }
        # 428 "14struct.c"
        (come_push_stackframe("14struct.c", 428),parse_sharp_v5(info),come_pop_stackframe());
    }
    # 431 "14struct.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 431);
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("14struct.c", 431),__exception_result_var_b181=((struct sStructNode*)(right_value158=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value156=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 431)))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 431),__exception_result_var_b180=((char*)(right_value157=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b180)),(struct sClass*)come_increment_ref_count(klass_162),output_163,info))), come_pop_stackframe(), __exception_result_var_b181));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result130__ = __result_obj__ = ((struct sNode*)(right_value163=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_162 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value157;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value158;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value163;
    __freed_obj__ = 0;
    return __result130__;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_162 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_164;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_165;
struct list$1tuple2$2charphsTypephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_165, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 483 "./comelang2.h"
        it_164=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 483))->head;
        # 490 "./comelang2.h"
        while(_while_condtional25=it_164!=((void*)0),        _while_condtional25) {
            # 485 "./comelang2.h"
            prev_it_165=it_164;
            # 486 "./comelang2.h"
            it_164=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_164, "./comelang2.h", 486))->next;
            # 487 "./comelang2.h"
            if(prev_it_165 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 490 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
        # 491 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
        # 493 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 493))->len=0;
        # 495 "./comelang2.h"
        __result127__ = __result_obj__ = self;
        return __result127__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
_Bool _if_conditional232;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional231=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1!=((void*)0),                _if_conditional231) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional232=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2!=((void*)0),                _if_conditional232) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
_Bool _if_conditional236;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional235=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1!=((void*)0),                _if_conditional235) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional236=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2!=((void*)0),                _if_conditional236) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b182;
_Bool _if_conditional251;
char* header_head_184;
void* right_value164;
char* __exception_result_var_b183;
char* type_name_185;
_Bool _if_conditional252;
struct sClass* struct_class_186;
struct sClass* __exception_result_var_b184;
_Bool _if_conditional253;
void* right_value165;
void* right_value166;
struct sClass* __exception_result_var_b185;
struct sClass* __dec_obj57;
struct sClass* __exception_result_var_b186;
void* right_value167;
struct sClass* __dec_obj58;
void* right_value168;
void* right_value169;
char* __exception_result_var_b187;
void* right_value170;
struct sStructNobodyNode* __exception_result_var_b188;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value175;
struct sNode* __result133__;
_Bool _if_conditional262;
struct list$1charph* __exception_result_var_b189;
_Bool _while_condtional29;
void* right_value176;
char* __exception_result_var_b190;
char* T_190;
void* right_value180;
struct list$1charph* __exception_result_var_b191;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sClass* generics_class_194;
struct sClass* __exception_result_var_b192;
_Bool _if_conditional267;
void* right_value181;
void* right_value182;
struct sClass* __exception_result_var_b193;
struct sClass* __dec_obj65;
struct sClass* __exception_result_var_b194;
_Bool _if_conditional268;
struct map$2charphsClassph* __exception_result_var_b195;
int __exception_result_var_b196;
_Bool _while_condtional30;
void* right_value183;
struct tuple3$3sTypephcharphbool* __exception_result_var_b197;
struct tuple3$3sTypephcharphbool* multiple_assgin_var9;
struct sType* type2_195;
char* name_196;
_Bool err_197;
_Bool _if_conditional269;
int __exception_result_var_b198;
_Bool _if_conditional270;
void* right_value184;
void* right_value185;
struct tuple2$2charphsTypeph* __exception_result_var_b199;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b200;
_Bool _while_condtional31;
void* right_value186;
char* __exception_result_var_b201;
char* name2_198;
void* right_value187;
struct sType* type3_199;
_Bool _if_conditional271;
_Bool no_comma_200;
void* right_value188;
struct sNode* __exception_result_var_b202;
struct sNode* node_201;
struct sNode* __dec_obj66;
void* right_value189;
void* right_value190;
struct tuple2$2charphsTypeph* __exception_result_var_b203;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b204;
void* right_value191;
void* right_value192;
struct tuple2$2charphsTypeph* __exception_result_var_b205;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b206;
int __exception_result_var_b207;
_Bool _if_conditional272;
struct list$1charph* __exception_result_var_b208;
void* right_value193;
void* right_value194;
struct sGenericsStructNode* __exception_result_var_b209;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value197;
struct sNode* __result138__;
struct sClass* struct_class_203;
struct sClass* __exception_result_var_b210;
_Bool _if_conditional277;
void* right_value198;
void* right_value199;
struct sClass* __exception_result_var_b211;
struct sClass* __dec_obj68;
struct sClass* __exception_result_var_b212;
void* right_value200;
struct sClass* __dec_obj69;
int __exception_result_var_b213;
_Bool _while_condtional32;
_Bool multiple_declare_204;
char* p_205;
int sline_206;
_Bool no_output_err_207;
void* right_value201;
struct tuple3$3sTypephcharphbool* __exception_result_var_b214;
struct tuple3$3sTypephcharphbool* multiple_assgin_var10;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value202;
struct tuple3$3sTypephcharphbool* __exception_result_var_b215;
struct tuple3$3sTypephcharphbool* multiple_assgin_var11;
struct sType* base_type_211;
char* name_212;
_Bool err_213;
void* right_value203;
struct tuple2$2sTypephcharph* __exception_result_var_b216;
struct tuple2$2sTypephcharph* multiple_assgin_var12;
struct sType* type2_214;
char* name2_215;
void* right_value204;
void* right_value205;
struct tuple2$2charphsTypeph* __exception_result_var_b217;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b218;
_Bool _while_condtional33;
void* right_value206;
struct tuple2$2sTypephcharph* __exception_result_var_b219;
struct tuple2$2sTypephcharph* multiple_assgin_var13;
struct sType* type2_216;
char* name2_217;
void* right_value207;
void* right_value208;
struct tuple2$2charphsTypeph* __exception_result_var_b220;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b221;
void* right_value209;
struct tuple3$3sTypephcharphbool* __exception_result_var_b222;
struct tuple3$3sTypephcharphbool* multiple_assgin_var14;
struct sType* type2_218;
char* name_219;
_Bool err_220;
_Bool _if_conditional280;
int __exception_result_var_b223;
void* right_value210;
void* right_value211;
struct tuple2$2charphsTypeph* __exception_result_var_b224;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b225;
int __exception_result_var_b226;
_Bool _if_conditional281;
struct list$1charph* __exception_result_var_b227;
void* right_value212;
void* right_value213;
char* __exception_result_var_b228;
void* right_value214;
void* right_value215;
struct sStructNode* __exception_result_var_b229;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value220;
struct sNode* __result141__;
void* right_value221;
char* __exception_result_var_b230;
void* right_value222;
struct sNode* __exception_result_var_b231;
struct sNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_head_184, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&type_name_185, 0, sizeof(char*));
memset(&struct_class_186, 0, sizeof(struct sClass*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&T_190, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&generics_class_194, 0, sizeof(struct sClass*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&type2_195, 0, sizeof(struct sType*));
memset(&name_196, 0, sizeof(char*));
memset(&err_197, 0, sizeof(_Bool));
memset(&type2_195, 0, sizeof(struct sType*));
memset(&name_196, 0, sizeof(char*));
memset(&err_197, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&name2_198, 0, sizeof(char*));
memset(&right_value187, 0, sizeof(void*));
memset(&type3_199, 0, sizeof(struct sType*));
memset(&no_comma_200, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&node_201, 0, sizeof(struct sNode*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&struct_class_203, 0, sizeof(struct sClass*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&multiple_declare_204, 0, sizeof(_Bool));
memset(&p_205, 0, sizeof(char*));
memset(&sline_206, 0, sizeof(int));
memset(&no_output_err_207, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
memset(&base_type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&base_type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&right_value203, 0, sizeof(void*));
memset(&type2_214, 0, sizeof(struct sType*));
memset(&name2_215, 0, sizeof(char*));
memset(&type2_214, 0, sizeof(struct sType*));
memset(&name2_215, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&type2_216, 0, sizeof(struct sType*));
memset(&name2_217, 0, sizeof(char*));
memset(&type2_216, 0, sizeof(struct sType*));
memset(&name2_217, 0, sizeof(char*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&type2_218, 0, sizeof(struct sType*));
memset(&name_219, 0, sizeof(char*));
memset(&err_220, 0, sizeof(_Bool));
memset(&type2_218, 0, sizeof(struct sType*));
memset(&name_219, 0, sizeof(char*));
memset(&err_220, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
    # 629 "14struct.c"
    # 436 "14struct.c"
    if(_if_conditional251=(come_push_stackframe("14struct.c", 436),__exception_result_var_b182=string_operator_equals(buf,"struct"), come_pop_stackframe(), __exception_result_var_b182),    _if_conditional251) {
        # 437 "14struct.c"
        header_head_184=head;
        # 439 "14struct.c"
        type_name_185=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 439),__exception_result_var_b183=((char*)(right_value164=parse_word(info))), come_pop_stackframe(), __exception_result_var_b183));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value164;
        __freed_obj__ = 0;
        # 627 "14struct.c"
        # 441 "14struct.c"
        if(_if_conditional252=*((struct sInfo*)come_null_check(info, "14struct.c", 441))->p==59,        _if_conditional252) {
            # 442 "14struct.c"
            ((struct sInfo*)come_null_check(info, "14struct.c", 442))->p++;
            # 443 "14struct.c"
            (come_push_stackframe("14struct.c", 443),skip_spaces_and_lf(info),come_pop_stackframe());
            # 445 "14struct.c"
            # 453 "14struct.c"
            # 446 "14struct.c"
            if(_if_conditional253=(come_push_stackframe("14struct.c", 446),__exception_result_var_b184=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 446))->classes, "14struct.c", 446)),type_name_185,((void*)0)), come_pop_stackframe(), __exception_result_var_b184)==((void*)0),            _if_conditional253) {
                # 447 "14struct.c"
                __dec_obj57=struct_class_186;
                struct_class_186=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 447),__exception_result_var_b185=((struct sClass*)(right_value166=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value165=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 447)))),type_name_185,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b185));
                if(__dec_obj57) { come_call_finalizer(sClass_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value165;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value166;
                __freed_obj__ = 0;
            }
            else {
                # 450 "14struct.c"
                __dec_obj58=struct_class_186;
                struct_class_186=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value167=sClass_clone((come_push_stackframe("14struct.c", 450),__exception_result_var_b186=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 450))->classes, "14struct.c", 450)),type_name_185,((void*)0)), come_pop_stackframe(), __exception_result_var_b186)))));
                if(__dec_obj58) { come_call_finalizer(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value167;
                __freed_obj__ = 0;
            }
            # 453 "14struct.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 453);
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("14struct.c", 453),__exception_result_var_b188=((struct sStructNobodyNode*)(right_value170=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value168=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 453)))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 453),__exception_result_var_b187=((char*)(right_value169=__builtin_string(type_name_185))), come_pop_stackframe(), __exception_result_var_b187)),(struct sClass*)come_increment_ref_count(struct_class_186),info))), come_pop_stackframe(), __exception_result_var_b188));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result133__ = __result_obj__ = ((struct sNode*)(right_value175=_inf_value2));
            if(struct_class_186 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_186, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
            if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value168;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value169;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value170);
            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value170;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value175;
            __freed_obj__ = 0;
            return __result133__;
            if(struct_class_186 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 626 "14struct.c"
            # 456 "14struct.c"
            if(_if_conditional262=*((struct sInfo*)come_null_check(info, "14struct.c", 456))->p==60,            _if_conditional262) {
                # 457 "14struct.c"
                (come_push_stackframe("14struct.c", 457),__exception_result_var_b189=list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 457))->generics_type_names, "14struct.c", 457))), come_pop_stackframe(), __exception_result_var_b189);
                # 459 "14struct.c"
                ((struct sInfo*)come_null_check(info, "14struct.c", 459))->p++;
                # 460 "14struct.c"
                (come_push_stackframe("14struct.c", 460),skip_spaces_and_lf(info),come_pop_stackframe());
                # 481 "14struct.c"
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    # 463 "14struct.c"
                    T_190=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 463),__exception_result_var_b190=((char*)(right_value176=parse_word(info))), come_pop_stackframe(), __exception_result_var_b190));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value176;
                    __freed_obj__ = 0;
                    # 464 "14struct.c"
                    (come_push_stackframe("14struct.c", 464),__exception_result_var_b191=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 464))->generics_type_names, "14struct.c", 464)),(char*)come_increment_ref_count(((char*)(right_value180=string_clone(T_190))))), come_pop_stackframe(), __exception_result_var_b191);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
                    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value180;
                    __freed_obj__ = 0;
                    # 479 "14struct.c"
                    # 466 "14struct.c"
                    if(_if_conditional265=*((struct sInfo*)come_null_check(info, "14struct.c", 466))->p==62,                    _if_conditional265) {
                        # 467 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 467))->p++;
                        # 468 "14struct.c"
                        (come_push_stackframe("14struct.c", 468),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 469 "14struct.c"
                        if(T_190 && !__freed_obj__) { T_190 = come_decrement_ref_count(T_190, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    else {
                        # 479 "14struct.c"
                        # 471 "14struct.c"
                        if(_if_conditional266=*((struct sInfo*)come_null_check(info, "14struct.c", 471))->p==44,                        _if_conditional266) {
                            # 472 "14struct.c"
                            ((struct sInfo*)come_null_check(info, "14struct.c", 472))->p++;
                            # 473 "14struct.c"
                            (come_push_stackframe("14struct.c", 473),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        else {
                            # 476 "14struct.c"
                            (come_push_stackframe("14struct.c", 476),err_msg(info,"invalid generics struct definition"),come_pop_stackframe());
                            # 477 "14struct.c"
                            (come_push_stackframe("14struct.c", 477),exit(2),come_pop_stackframe());
                        }
                    }
                    if(T_190 && !__freed_obj__) { T_190 = come_decrement_ref_count(T_190, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 481 "14struct.c"
                # 490 "14struct.c"
                # 482 "14struct.c"
                if(_if_conditional267=(come_push_stackframe("14struct.c", 482),__exception_result_var_b192=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 482))->generics_classes, "14struct.c", 482)),type_name_185,((void*)0)), come_pop_stackframe(), __exception_result_var_b192)!=((void*)0),                _if_conditional267) {
                    # 483 "14struct.c"
                    (come_push_stackframe("14struct.c", 483),err_msg(info,"redifined generics struct(%s)",type_name_185),come_pop_stackframe());
                    # 484 "14struct.c"
                    (come_push_stackframe("14struct.c", 484),exit(2),come_pop_stackframe());
                }
                else {
                    # 487 "14struct.c"
                    __dec_obj65=generics_class_194;
                    generics_class_194=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 487),__exception_result_var_b193=((struct sClass*)(right_value182=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value181=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 487)))),type_name_185,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b193));
                    if(__dec_obj65) { come_call_finalizer(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value181;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value182;
                    __freed_obj__ = 0;
                }
                # 494 "14struct.c"
                # 490 "14struct.c"
                if(_if_conditional268=(come_push_stackframe("14struct.c", 490),__exception_result_var_b194=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 490))->generics_classes, "14struct.c", 490)),type_name_185,((void*)0)), come_pop_stackframe(), __exception_result_var_b194)==((void*)0),                _if_conditional268) {
                    # 491 "14struct.c"
                    (come_push_stackframe("14struct.c", 491),__exception_result_var_b195=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 491))->generics_classes, "14struct.c", 491)),(char*)come_increment_ref_count(type_name_185),(struct sClass*)come_increment_ref_count(generics_class_194)), come_pop_stackframe(), __exception_result_var_b195);
                }
                # 494 "14struct.c"
                (come_push_stackframe("14struct.c", 494),__exception_result_var_b196=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b196);
                # 548 "14struct.c"
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    # 497 "14struct.c"
                    (come_push_stackframe("14struct.c", 497),parse_sharp_v5(info),come_pop_stackframe());
                    # 499 "14struct.c"
                    multiple_assgin_var9=(come_push_stackframe("14struct.c", 499),__exception_result_var_b197=((struct tuple3$3sTypephcharphbool*)(right_value183=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b197);
                    type2_195=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v1);
                    name_196=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
                    err_197=multiple_assgin_var9->v3;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value183;
                    __freed_obj__ = 0;
                    # 506 "14struct.c"
                    # 501 "14struct.c"
                    if(_if_conditional269=!err_197,                    _if_conditional269) {
                        # 502 "14struct.c"
                        (come_push_stackframe("14struct.c", 502),__exception_result_var_b198=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "14struct.c", 502))->sname,((struct sInfo*)come_null_check(info, "14struct.c", 502))->sline), come_pop_stackframe(), __exception_result_var_b198);
                        # 503 "14struct.c"
                        (come_push_stackframe("14struct.c", 503),exit(2),come_pop_stackframe());
                    }
                    # 536 "14struct.c"
                    # 506 "14struct.c"
                    if(_if_conditional270=*((struct sInfo*)come_null_check(info, "14struct.c", 506))->p==44,                    _if_conditional270) {
                        # 507 "14struct.c"
                        (come_push_stackframe("14struct.c", 507),__exception_result_var_b200=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(generics_class_194, "14struct.c", 507))->mFields, "14struct.c", 507)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 507),__exception_result_var_b199=((struct tuple2$2charphsTypeph*)(right_value185=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value184=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 507)))),(char*)come_increment_ref_count(name_196),(struct sType*)come_increment_ref_count(type2_195)))), come_pop_stackframe(), __exception_result_var_b199))), come_pop_stackframe(), __exception_result_var_b200);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value184;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
                        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value185;
                        __freed_obj__ = 0;
                        # 531 "14struct.c"
                        while(_while_condtional31=*((struct sInfo*)come_null_check(info, "14struct.c", 509))->p==44,                        _while_condtional31) {
                            # 510 "14struct.c"
                            ((struct sInfo*)come_null_check(info, "14struct.c", 510))->p++;
                            # 511 "14struct.c"
                            (come_push_stackframe("14struct.c", 511),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 513 "14struct.c"
                            name2_198=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 513),__exception_result_var_b201=((char*)(right_value186=parse_word(info))), come_pop_stackframe(), __exception_result_var_b201));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                            if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value186;
                            __freed_obj__ = 0;
                            # 515 "14struct.c"
                            type3_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(type2_195))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
                            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value187;
                            __freed_obj__ = 0;
                            # 529 "14struct.c"
                            # 517 "14struct.c"
                            if(_if_conditional271=*((struct sInfo*)come_null_check(info, "14struct.c", 517))->p==58,                            _if_conditional271) {
                                # 518 "14struct.c"
                                ((struct sInfo*)come_null_check(info, "14struct.c", 518))->p++;
                                # 519 "14struct.c"
                                (come_push_stackframe("14struct.c", 519),skip_spaces_and_lf(info),come_pop_stackframe());
                                # 521 "14struct.c"
                                no_comma_200=((struct sInfo*)come_null_check(info, "14struct.c", 521))->no_comma;
                                # 522 "14struct.c"
                                ((struct sInfo*)come_null_check(info, "14struct.c", 522))->no_comma=(_Bool)1;
                                # 523 "14struct.c"
                                node_201=(struct sNode*)come_increment_ref_count((come_push_stackframe("14struct.c", 523),__exception_result_var_b202=((struct sNode*)(right_value188=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b202));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value188;
                                __freed_obj__ = 0;
                                # 524 "14struct.c"
                                ((struct sInfo*)come_null_check(info, "14struct.c", 524))->no_comma=no_comma_200;
                                # 526 "14struct.c"
                                __dec_obj66=((struct sType*)come_null_check(type3_199, "14struct.c", 526))->mSizeNum;
                                ((struct sType*)come_null_check(type3_199, "14struct.c", 526))->mSizeNum=(struct sNode*)come_increment_ref_count(node_201);
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0); }
                                if(node_201 && !__freed_obj__) { node_201 = come_decrement_ref_count(node_201, ((struct sNode*)node_201)->finalize, ((struct sNode*)node_201)->_protocol_obj, 0, 0, 0); } 
                            }
                            # 529 "14struct.c"
                            (come_push_stackframe("14struct.c", 529),__exception_result_var_b204=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(generics_class_194, "14struct.c", 529))->mFields, "14struct.c", 529)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 529),__exception_result_var_b203=((struct tuple2$2charphsTypeph*)(right_value190=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value189=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 529)))),(char*)come_increment_ref_count(name2_198),(struct sType*)come_increment_ref_count(type3_199)))), come_pop_stackframe(), __exception_result_var_b203))), come_pop_stackframe(), __exception_result_var_b204);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
                            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value189;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value190);
                            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value190;
                            __freed_obj__ = 0;
                            if(name2_198 && !__freed_obj__) { name2_198 = come_decrement_ref_count(name2_198, (void*)0, (void*)0, 0, 0, 0); }
                            if(type3_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                    else {
                        # 533 "14struct.c"
                        (come_push_stackframe("14struct.c", 533),__exception_result_var_b206=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(generics_class_194, "14struct.c", 533))->mFields, "14struct.c", 533)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 533),__exception_result_var_b205=((struct tuple2$2charphsTypeph*)(right_value192=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value191=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 533)))),(char*)come_increment_ref_count(name_196),(struct sType*)come_increment_ref_count(type2_195)))), come_pop_stackframe(), __exception_result_var_b205))), come_pop_stackframe(), __exception_result_var_b206);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value191;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value192;
                        __freed_obj__ = 0;
                    }
                    # 536 "14struct.c"
                    (come_push_stackframe("14struct.c", 536),__exception_result_var_b207=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b207);
                    # 538 "14struct.c"
                    (come_push_stackframe("14struct.c", 538),parse_sharp_v5(info),come_pop_stackframe());
                    # 545 "14struct.c"
                    # 540 "14struct.c"
                    if(_if_conditional272=*((struct sInfo*)come_null_check(info, "14struct.c", 540))->p==125,                    _if_conditional272) {
                        # 541 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 541))->p++;
                        # 542 "14struct.c"
                        (come_push_stackframe("14struct.c", 542),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 543 "14struct.c"
                        if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_196 && !__freed_obj__) { name_196 = come_decrement_ref_count(name_196, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    # 545 "14struct.c"
                    (come_push_stackframe("14struct.c", 545),parse_sharp_v5(info),come_pop_stackframe());
                    if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(name_196 && !__freed_obj__) { name_196 = come_decrement_ref_count(name_196, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 548 "14struct.c"
                (come_push_stackframe("14struct.c", 548),__exception_result_var_b208=list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 548))->generics_type_names, "14struct.c", 548))), come_pop_stackframe(), __exception_result_var_b208);
                # 550 "14struct.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 550);
                _inf_obj_value3=come_increment_ref_count((come_push_stackframe("14struct.c", 550),__exception_result_var_b209=((struct sGenericsStructNode*)(right_value194=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value193=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 550)))),info))), come_pop_stackframe(), __exception_result_var_b209));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result138__ = __result_obj__ = ((struct sNode*)(right_value197=_inf_value3));
                if(generics_class_194 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
                if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value193;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value194;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value197);
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value197;
                __freed_obj__ = 0;
                return __result138__;
                if(generics_class_194 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_194, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                # 553 "14struct.c"
                # 561 "14struct.c"
                # 554 "14struct.c"
                if(_if_conditional277=(come_push_stackframe("14struct.c", 554),__exception_result_var_b210=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 554))->classes, "14struct.c", 554)),type_name_185,((void*)0)), come_pop_stackframe(), __exception_result_var_b210)==((void*)0),                _if_conditional277) {
                    # 555 "14struct.c"
                    __dec_obj68=struct_class_203;
                    struct_class_203=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 555),__exception_result_var_b211=((struct sClass*)(right_value199=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value198=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 555)))),type_name_185,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b211));
                    if(__dec_obj68) { come_call_finalizer(sClass_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value198;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
                    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value199;
                    __freed_obj__ = 0;
                }
                else {
                    # 558 "14struct.c"
                    __dec_obj69=struct_class_203;
                    struct_class_203=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_clone((come_push_stackframe("14struct.c", 558),__exception_result_var_b212=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 558))->classes, "14struct.c", 558)),type_name_185,((void*)0)), come_pop_stackframe(), __exception_result_var_b212)))));
                    if(__dec_obj69) { come_call_finalizer(sClass_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value200;
                    __freed_obj__ = 0;
                }
                # 561 "14struct.c"
                (come_push_stackframe("14struct.c", 561),__exception_result_var_b213=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b213);
                # 622 "14struct.c"
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    # 564 "14struct.c"
                    (come_push_stackframe("14struct.c", 564),parse_sharp_v5(info),come_pop_stackframe());
                    # 566 "14struct.c"
                    multiple_declare_204=(_Bool)0;
                    # 584 "14struct.c"
                    {
                        # 568 "14struct.c"
                        p_205=((struct sInfo*)come_null_check(info, "14struct.c", 568))->p;
                        # 569 "14struct.c"
                        sline_206=((struct sInfo*)come_null_check(info, "14struct.c", 569))->sline;
                        # 571 "14struct.c"
                        no_output_err_207=((struct sInfo*)come_null_check(info, "14struct.c", 571))->no_output_err;
                        # 572 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 572))->no_output_err=(_Bool)1;
                        # 573 "14struct.c"
                        multiple_assgin_var10=(come_push_stackframe("14struct.c", 573),__exception_result_var_b214=((struct tuple3$3sTypephcharphbool*)(right_value201=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b214);
                        type_208=(struct sType*)come_increment_ref_count(multiple_assgin_var10->v1);
                        name_209=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
                        err_210=multiple_assgin_var10->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value201;
                        __freed_obj__ = 0;
                        # 574 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 574))->no_output_err=no_output_err_207;
                        # 580 "14struct.c"
                        # 576 "14struct.c"
                        if(_if_conditional278=err_210&&*((struct sInfo*)come_null_check(info, "14struct.c", 576))->p==44,                        _if_conditional278) {
                            # 577 "14struct.c"
                            multiple_declare_204=(_Bool)1;
                        }
                        # 580 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 580))->p=p_205;
                        # 581 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 581))->sline=sline_206;
                        if(type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_209 && !__freed_obj__) { name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 610 "14struct.c"
                    # 584 "14struct.c"
                    if(_if_conditional279=multiple_declare_204,                    _if_conditional279) {
                        # 585 "14struct.c"
                        multiple_assgin_var11=(come_push_stackframe("14struct.c", 585),__exception_result_var_b215=((struct tuple3$3sTypephcharphbool*)(right_value202=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b215);
                        base_type_211=(struct sType*)come_increment_ref_count(multiple_assgin_var11->v1);
                        name_212=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
                        err_213=multiple_assgin_var11->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value202;
                        __freed_obj__ = 0;
                        # 587 "14struct.c"
                        multiple_assgin_var12=(come_push_stackframe("14struct.c", 587),__exception_result_var_b216=((struct tuple2$2sTypephcharph*)(right_value203=parse_variable_name((struct sType*)come_increment_ref_count(base_type_211),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b216);
                        type2_214=(struct sType*)come_increment_ref_count(multiple_assgin_var12->v1);
                        name2_215=(char*)come_increment_ref_count(multiple_assgin_var12->v2);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
                        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value203;
                        __freed_obj__ = 0;
                        # 589 "14struct.c"
                        (come_push_stackframe("14struct.c", 589),__exception_result_var_b218=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(struct_class_203, "14struct.c", 589))->mFields, "14struct.c", 589)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 589),__exception_result_var_b217=((struct tuple2$2charphsTypeph*)(right_value205=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value204=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 589)))),(char*)come_increment_ref_count(name2_215),(struct sType*)come_increment_ref_count(type2_214)))), come_pop_stackframe(), __exception_result_var_b217))), come_pop_stackframe(), __exception_result_var_b218);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value204);
                        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value204;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value205);
                        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value205;
                        __freed_obj__ = 0;
                        # 599 "14struct.c"
                        while(_while_condtional33=*((struct sInfo*)come_null_check(info, "14struct.c", 591))->p==44,                        _while_condtional33) {
                            # 592 "14struct.c"
                            ((struct sInfo*)come_null_check(info, "14struct.c", 592))->p++;
                            # 593 "14struct.c"
                            (come_push_stackframe("14struct.c", 593),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 595 "14struct.c"
                            multiple_assgin_var13=(come_push_stackframe("14struct.c", 595),__exception_result_var_b219=((struct tuple2$2sTypephcharph*)(right_value206=parse_variable_name((struct sType*)come_increment_ref_count(base_type_211),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b219);
                            type2_216=(struct sType*)come_increment_ref_count(multiple_assgin_var13->v1);
                            name2_217=(char*)come_increment_ref_count(multiple_assgin_var13->v2);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value206;
                            __freed_obj__ = 0;
                            # 597 "14struct.c"
                            (come_push_stackframe("14struct.c", 597),__exception_result_var_b221=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(struct_class_203, "14struct.c", 597))->mFields, "14struct.c", 597)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 597),__exception_result_var_b220=((struct tuple2$2charphsTypeph*)(right_value208=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value207=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 597)))),(char*)come_increment_ref_count(name2_217),(struct sType*)come_increment_ref_count(type2_216)))), come_pop_stackframe(), __exception_result_var_b220))), come_pop_stackframe(), __exception_result_var_b221);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
                            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value207;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value208);
                            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value208;
                            __freed_obj__ = 0;
                            if(type2_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name2_217 && !__freed_obj__) { name2_217 = come_decrement_ref_count(name2_217, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(base_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_212 && !__freed_obj__) { name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, 0); }
                        if(type2_214 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_214, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name2_215 && !__freed_obj__) { name2_215 = come_decrement_ref_count(name2_215, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        # 601 "14struct.c"
                        multiple_assgin_var14=(come_push_stackframe("14struct.c", 601),__exception_result_var_b222=((struct tuple3$3sTypephcharphbool*)(right_value209=parse_type(info,(_Bool)1,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b222);
                        type2_218=(struct sType*)come_increment_ref_count(multiple_assgin_var14->v1);
                        name_219=(char*)come_increment_ref_count(multiple_assgin_var14->v2);
                        err_220=multiple_assgin_var14->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value209;
                        __freed_obj__ = 0;
                        # 607 "14struct.c"
                        # 602 "14struct.c"
                        if(_if_conditional280=!err_220,                        _if_conditional280) {
                            # 603 "14struct.c"
                            (come_push_stackframe("14struct.c", 603),__exception_result_var_b223=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "14struct.c", 603))->sname,((struct sInfo*)come_null_check(info, "14struct.c", 603))->sline), come_pop_stackframe(), __exception_result_var_b223);
                            # 604 "14struct.c"
                            (come_push_stackframe("14struct.c", 604),exit(2),come_pop_stackframe());
                        }
                        # 607 "14struct.c"
                        (come_push_stackframe("14struct.c", 607),__exception_result_var_b225=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(struct_class_203, "14struct.c", 607))->mFields, "14struct.c", 607)),(struct tuple2$2charphsTypeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 607),__exception_result_var_b224=((struct tuple2$2charphsTypeph*)(right_value211=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value210=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 607)))),(char*)come_increment_ref_count(name_219),(struct sType*)come_increment_ref_count(type2_218)))), come_pop_stackframe(), __exception_result_var_b224))), come_pop_stackframe(), __exception_result_var_b225);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
                        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value210;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value211);
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value211;
                        __freed_obj__ = 0;
                        if(type2_218 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_218, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_219 && !__freed_obj__) { name_219 = come_decrement_ref_count(name_219, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 610 "14struct.c"
                    (come_push_stackframe("14struct.c", 610),__exception_result_var_b226=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b226);
                    # 612 "14struct.c"
                    (come_push_stackframe("14struct.c", 612),parse_sharp_v5(info),come_pop_stackframe());
                    # 619 "14struct.c"
                    # 614 "14struct.c"
                    if(_if_conditional281=*((struct sInfo*)come_null_check(info, "14struct.c", 614))->p==125,                    _if_conditional281) {
                        # 615 "14struct.c"
                        ((struct sInfo*)come_null_check(info, "14struct.c", 615))->p++;
                        # 616 "14struct.c"
                        (come_push_stackframe("14struct.c", 616),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 617 "14struct.c"
                        break;
                    }
                    # 619 "14struct.c"
                    (come_push_stackframe("14struct.c", 619),parse_sharp_v5(info),come_pop_stackframe());
                }
                # 622 "14struct.c"
                (come_push_stackframe("14struct.c", 622),__exception_result_var_b227=list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 622))->generics_type_names, "14struct.c", 622))), come_pop_stackframe(), __exception_result_var_b227);
                # 624 "14struct.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 624);
                _inf_obj_value4=come_increment_ref_count((come_push_stackframe("14struct.c", 624),__exception_result_var_b229=((struct sStructNode*)(right_value215=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value212=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 624)))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 624),__exception_result_var_b228=((char*)(right_value213=__builtin_string(type_name_185))), come_pop_stackframe(), __exception_result_var_b228)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=sClass_clone(struct_class_203)))),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b229));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result141__ = __result_obj__ = ((struct sNode*)(right_value220=_inf_value4));
                if(struct_class_203 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
                if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
                if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value213;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value214);
                if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value214;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value215);
                if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value215;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value220);
                if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[4] = right_value220;
                __freed_obj__ = 0;
                return __result141__;
                if(struct_class_203 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_203, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        if(type_name_185 && !__freed_obj__) { type_name_185 = come_decrement_ref_count(type_name_185, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 629 "14struct.c"
    __result142__ = __result_obj__ = (come_push_stackframe("14struct.c", 629),__exception_result_var_b231=((struct sNode*)(right_value222=top_level_v97((char*)come_increment_ref_count((come_push_stackframe("14struct.c", 629),__exception_result_var_b230=((char*)(right_value221=__builtin_string(buf))), come_pop_stackframe(), __exception_result_var_b230)),head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b231);
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value222;
    __freed_obj__ = 0;
    return __result142__;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "sStructNobodyNode_finalize"
                # 0 "sStructNobodyNode_finalize"
                if(_if_conditional254=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName!=((void*)0),                _if_conditional254) {
                    # 0 "sStructNobodyNode_finalize"
                    if(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName && !__freed_obj__) { ((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName = come_decrement_ref_count(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 2 "sStructNobodyNode_finalize"
                # 1 "sStructNobodyNode_finalize"
                if(_if_conditional255=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1))->mClass!=((void*)0),                _if_conditional255) {
                    # 1 "sStructNobodyNode_finalize"
                    if(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1))->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1))->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 3 "sStructNobodyNode_finalize"
                # 2 "sStructNobodyNode_finalize"
                if(_if_conditional256=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname!=((void*)0),                _if_conditional256) {
                    # 2 "sStructNobodyNode_finalize"
                    if(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname && !__freed_obj__) { ((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional257;
struct sStructNobodyNode* __result131__;
void* right_value171;
struct sStructNobodyNode* result_187;
_Bool _if_conditional258;
void* right_value172;
char* __dec_obj59;
_Bool _if_conditional259;
void* right_value173;
struct sClass* __dec_obj60;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value174;
char* __dec_obj61;
struct sStructNobodyNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&result_187, 0, sizeof(struct sStructNobodyNode*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
                # 3 "sStructNobodyNode_clone"
                # 2 "sStructNobodyNode_clone"
                if(_if_conditional257=self==(void*)0,                _if_conditional257) {
                    # 2 "sStructNobodyNode_clone"
                    __result131__ = __result_obj__ = (void*)0;
                    return __result131__;
                }
                # 3 "sStructNobodyNode_clone"
                result_187=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value171=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value171;
                __freed_obj__ = 0;
                # 5 "sStructNobodyNode_clone"
                # 4 "sStructNobodyNode_clone"
                if(_if_conditional258=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 4))->mName!=((void*)0),                _if_conditional258) {
                    # 4 "sStructNobodyNode_clone"
                    __dec_obj59=((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 4))->mName;
                    ((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 4))->mName))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value172;
                    __freed_obj__ = 0;
                }
                # 6 "sStructNobodyNode_clone"
                # 5 "sStructNobodyNode_clone"
                if(_if_conditional259=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 5))->mClass!=((void*)0),                _if_conditional259) {
                    # 5 "sStructNobodyNode_clone"
                    __dec_obj60=((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 5))->mClass;
                    ((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 5))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value173=sClass_clone(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 5))->mClass))));
                    if(__dec_obj60) { come_call_finalizer(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value173;
                    __freed_obj__ = 0;
                }
                # 7 "sStructNobodyNode_clone"
                # 6 "sStructNobodyNode_clone"
                if(_if_conditional260=self!=((void*)0),                _if_conditional260) {
                    # 6 "sStructNobodyNode_clone"
                    ((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 6))->sline=((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 6))->sline;
                }
                # 8 "sStructNobodyNode_clone"
                # 7 "sStructNobodyNode_clone"
                if(_if_conditional261=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 7))->sname!=((void*)0),                _if_conditional261) {
                    # 7 "sStructNobodyNode_clone"
                    __dec_obj61=((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 7))->sname;
                    ((struct sStructNobodyNode*)come_null_check(result_187, "sStructNobodyNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value174=string_clone(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 7))->sname))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value174;
                    __freed_obj__ = 0;
                }
                # 8 "sStructNobodyNode_clone"
                __result132__ = __result_obj__ = result_187;
                if(result_187 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_187, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result132__;
                if(result_187 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_187, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_188;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_189;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_188, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_189, 0, sizeof(struct list_item$1charph*));
                    # 483 "./comelang2.h"
                    it_188=((struct list$1charph*)come_null_check(self, "./comelang2.h", 483))->head;
                    # 490 "./comelang2.h"
                    while(_while_condtional28=it_188!=((void*)0),                    _while_condtional28) {
                        # 485 "./comelang2.h"
                        prev_it_189=it_188;
                        # 486 "./comelang2.h"
                        it_188=((struct list_item$1charph*)come_null_check(it_188, "./comelang2.h", 486))->next;
                        # 487 "./comelang2.h"
                        if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 490 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
                    # 491 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
                    # 493 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 493))->len=0;
                    # 495 "./comelang2.h"
                    __result134__ = __result_obj__ = self;
                    return __result134__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional263;
void* right_value177;
struct list_item$1charph* litem_191;
char* __dec_obj62;
_Bool _if_conditional264;
void* right_value178;
struct list_item$1charph* litem_192;
char* __dec_obj63;
void* right_value179;
struct list_item$1charph* litem_193;
char* __dec_obj64;
struct list$1charph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
memset(&litem_191, 0, sizeof(struct list_item$1charph*));
memset(&right_value178, 0, sizeof(void*));
memset(&litem_192, 0, sizeof(struct list_item$1charph*));
memset(&right_value179, 0, sizeof(void*));
memset(&litem_193, 0, sizeof(struct list_item$1charph*));
                        # 309 "./comelang2.h"
                        # 278 "./comelang2.h"
                        if(_if_conditional263=((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->len==0,                        _if_conditional263) {
                            # 279 "./comelang2.h"
                            litem_191=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value177=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value177;
                            __freed_obj__ = 0;
                            # 281 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 281))->prev=((void*)0);
                            # 282 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 282))->next=((void*)0);
                            # 283 "./comelang2.h"
                            __dec_obj62=((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 283))->item;
                            ((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 283))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            # 285 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_191;
                            # 286 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 286))->head=litem_191;
                        }
                        else {
                            # 309 "./comelang2.h"
                            # 288 "./comelang2.h"
                            if(_if_conditional264=((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->len==1,                            _if_conditional264) {
                                # 289 "./comelang2.h"
                                litem_192=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value178=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value178;
                                __freed_obj__ = 0;
                                # 291 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 291))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 291))->head;
                                # 292 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 292))->next=((void*)0);
                                # 293 "./comelang2.h"
                                __dec_obj63=((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 293))->item;
                                ((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 293))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                # 295 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_192;
                                # 296 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_192;
                            }
                            else {
                                # 299 "./comelang2.h"
                                litem_193=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value179=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value179;
                                __freed_obj__ = 0;
                                # 301 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_193, "./comelang2.h", 301))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 301))->tail;
                                # 302 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_193, "./comelang2.h", 302))->next=((void*)0);
                                # 303 "./comelang2.h"
                                __dec_obj64=((struct list_item$1charph*)come_null_check(litem_193, "./comelang2.h", 303))->item;
                                ((struct list_item$1charph*)come_null_check(litem_193, "./comelang2.h", 303))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                # 305 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_193;
                                # 306 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_193;
                            }
                        }
                        # 309 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 309))->len++;
                        # 311 "./comelang2.h"
                        __result135__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result135__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "sGenericsStructNode_finalize"
                    # 0 "sGenericsStructNode_finalize"
                    if(_if_conditional273=self!=((void*)0)&&((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname!=((void*)0),                    _if_conditional273) {
                        # 0 "sGenericsStructNode_finalize"
                        if(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname && !__freed_obj__) { ((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname = come_decrement_ref_count(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
struct sGenericsStructNode* __result136__;
void* right_value195;
struct sGenericsStructNode* result_202;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value196;
char* __dec_obj67;
struct sGenericsStructNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&result_202, 0, sizeof(struct sGenericsStructNode*));
memset(&right_value196, 0, sizeof(void*));
                    # 3 "sGenericsStructNode_clone"
                    # 2 "sGenericsStructNode_clone"
                    if(_if_conditional274=self==(void*)0,                    _if_conditional274) {
                        # 2 "sGenericsStructNode_clone"
                        __result136__ = __result_obj__ = (void*)0;
                        return __result136__;
                    }
                    # 3 "sGenericsStructNode_clone"
                    result_202=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value195=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value195;
                    __freed_obj__ = 0;
                    # 5 "sGenericsStructNode_clone"
                    # 4 "sGenericsStructNode_clone"
                    if(_if_conditional275=self!=((void*)0),                    _if_conditional275) {
                        # 4 "sGenericsStructNode_clone"
                        ((struct sGenericsStructNode*)come_null_check(result_202, "sGenericsStructNode_clone", 4))->sline=((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 4))->sline;
                    }
                    # 6 "sGenericsStructNode_clone"
                    # 5 "sGenericsStructNode_clone"
                    if(_if_conditional276=self!=((void*)0)&&((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 5))->sname!=((void*)0),                    _if_conditional276) {
                        # 5 "sGenericsStructNode_clone"
                        __dec_obj67=((struct sGenericsStructNode*)come_null_check(result_202, "sGenericsStructNode_clone", 5))->sname;
                        ((struct sGenericsStructNode*)come_null_check(result_202, "sGenericsStructNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value196=string_clone(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 5))->sname))));
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value196;
                        __freed_obj__ = 0;
                    }
                    # 6 "sGenericsStructNode_clone"
                    __result137__ = __result_obj__ = result_202;
                    if(result_202 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_202, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result137__;
                    if(result_202 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_202, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "sStructNode_finalize"
                    # 0 "sStructNode_finalize"
                    if(_if_conditional282=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName!=((void*)0),                    _if_conditional282) {
                        # 0 "sStructNode_finalize"
                        if(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName && !__freed_obj__) { ((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName = come_decrement_ref_count(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 2 "sStructNode_finalize"
                    # 1 "sStructNode_finalize"
                    if(_if_conditional283=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1))->mClass!=((void*)0),                    _if_conditional283) {
                        # 1 "sStructNode_finalize"
                        if(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1))->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1))->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 3 "sStructNode_finalize"
                    # 2 "sStructNode_finalize"
                    if(_if_conditional284=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname!=((void*)0),                    _if_conditional284) {
                        # 2 "sStructNode_finalize"
                        if(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname && !__freed_obj__) { ((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
struct sStructNode* __result139__;
void* right_value216;
struct sStructNode* result_221;
_Bool _if_conditional286;
void* right_value217;
char* __dec_obj70;
_Bool _if_conditional287;
void* right_value218;
struct sClass* __dec_obj71;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value219;
char* __dec_obj72;
_Bool _if_conditional290;
struct sStructNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct sStructNode*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
                    # 3 "sStructNode_clone"
                    # 2 "sStructNode_clone"
                    if(_if_conditional285=self==(void*)0,                    _if_conditional285) {
                        # 2 "sStructNode_clone"
                        __result139__ = __result_obj__ = (void*)0;
                        return __result139__;
                    }
                    # 3 "sStructNode_clone"
                    result_221=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value216=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value216;
                    __freed_obj__ = 0;
                    # 5 "sStructNode_clone"
                    # 4 "sStructNode_clone"
                    if(_if_conditional286=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_clone", 4))->mName!=((void*)0),                    _if_conditional286) {
                        # 4 "sStructNode_clone"
                        __dec_obj70=((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 4))->mName;
                        ((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value217=string_clone(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 4))->mName))));
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value217;
                        __freed_obj__ = 0;
                    }
                    # 6 "sStructNode_clone"
                    # 5 "sStructNode_clone"
                    if(_if_conditional287=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_clone", 5))->mClass!=((void*)0),                    _if_conditional287) {
                        # 5 "sStructNode_clone"
                        __dec_obj71=((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 5))->mClass;
                        ((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 5))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_clone(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 5))->mClass))));
                        if(__dec_obj71) { come_call_finalizer(sClass_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value218;
                        __freed_obj__ = 0;
                    }
                    # 7 "sStructNode_clone"
                    # 6 "sStructNode_clone"
                    if(_if_conditional288=self!=((void*)0),                    _if_conditional288) {
                        # 6 "sStructNode_clone"
                        ((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 6))->sline=((struct sStructNode*)come_null_check(self, "sStructNode_clone", 6))->sline;
                    }
                    # 8 "sStructNode_clone"
                    # 7 "sStructNode_clone"
                    if(_if_conditional289=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_clone", 7))->sname!=((void*)0),                    _if_conditional289) {
                        # 7 "sStructNode_clone"
                        __dec_obj72=((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 7))->sname;
                        ((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value219=string_clone(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 7))->sname))));
                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value219;
                        __freed_obj__ = 0;
                    }
                    # 9 "sStructNode_clone"
                    # 8 "sStructNode_clone"
                    if(_if_conditional290=self!=((void*)0),                    _if_conditional290) {
                        # 8 "sStructNode_clone"
                        ((struct sStructNode*)come_null_check(result_221, "sStructNode_clone", 8))->mOutput=((struct sStructNode*)come_null_check(self, "sStructNode_clone", 8))->mOutput;
                    }
                    # 9 "sStructNode_clone"
                    __result140__ = __result_obj__ = result_221;
                    if(result_221 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_221, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result140__;
                    if(result_221 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_221, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool define_struct_222;
char* p_223;
int sline_224;
_Bool __exception_result_var_b232;
_Bool _if_conditional291;
void* right_value223;
char* __exception_result_var_b233;
char* type_name_225;
_Bool _if_conditional292;
void* right_value224;
char* __exception_result_var_b234;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value225;
char* __exception_result_var_b235;
char* type_name_226;
void* right_value226;
struct sNode* __exception_result_var_b236;
struct sNode* __result143__;
void* right_value227;
struct sNode* __exception_result_var_b237;
struct sNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&define_struct_222, 0, sizeof(_Bool));
memset(&p_223, 0, sizeof(char*));
memset(&sline_224, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&type_name_225, 0, sizeof(char*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&type_name_226, 0, sizeof(char*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    # 634 "14struct.c"
    define_struct_222=(_Bool)0;
    # 655 "14struct.c"
    {
        # 636 "14struct.c"
        p_223=((struct sInfo*)come_null_check(info, "14struct.c", 636))->p;
        # 637 "14struct.c"
        sline_224=((struct sInfo*)come_null_check(info, "14struct.c", 637))->sline;
        # 651 "14struct.c"
        # 639 "14struct.c"
        if(_if_conditional291=(come_push_stackframe("14struct.c", 639),__exception_result_var_b232=charp_operator_equals(buf,"struct"), come_pop_stackframe(), __exception_result_var_b232),        _if_conditional291) {
            # 640 "14struct.c"
            type_name_225=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 640),__exception_result_var_b233=((char*)(right_value223=parse_word(info))), come_pop_stackframe(), __exception_result_var_b233));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value223;
            __freed_obj__ = 0;
            # 649 "14struct.c"
            # 642 "14struct.c"
            if(_if_conditional292=*((struct sInfo*)come_null_check(info, "14struct.c", 642))->p==123,            _if_conditional292) {
                # 643 "14struct.c"
                (come_push_stackframe("14struct.c", 643),__exception_result_var_b234=((char*)(right_value224=skip_block(info))), come_pop_stackframe(), __exception_result_var_b234);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value224;
                __freed_obj__ = 0;
                # 648 "14struct.c"
                # 645 "14struct.c"
                if(_if_conditional293=*((struct sInfo*)come_null_check(info, "14struct.c", 645))->p==59,                _if_conditional293) {
                    # 646 "14struct.c"
                    define_struct_222=(_Bool)1;
                }
            }
            if(type_name_225 && !__freed_obj__) { type_name_225 = come_decrement_ref_count(type_name_225, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 651 "14struct.c"
        ((struct sInfo*)come_null_check(info, "14struct.c", 651))->p=p_223;
        # 652 "14struct.c"
        ((struct sInfo*)come_null_check(info, "14struct.c", 652))->sline=sline_224;
    }
    # 661 "14struct.c"
    # 655 "14struct.c"
    if(_if_conditional294=define_struct_222,    _if_conditional294) {
        # 656 "14struct.c"
        type_name_226=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 656),__exception_result_var_b235=((char*)(right_value225=parse_word(info))), come_pop_stackframe(), __exception_result_var_b235));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value225;
        __freed_obj__ = 0;
        # 658 "14struct.c"
        __result143__ = __result_obj__ = (come_push_stackframe("14struct.c", 658),__exception_result_var_b236=((struct sNode*)(right_value226=parse_struct((char*)come_increment_ref_count(type_name_226),info))), come_pop_stackframe(), __exception_result_var_b236);
        if(type_name_226 && !__freed_obj__) { type_name_226 = come_decrement_ref_count(type_name_226, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value226;
        __freed_obj__ = 0;
        return __result143__;
        if(type_name_226 && !__freed_obj__) { type_name_226 = come_decrement_ref_count(type_name_226, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 661 "14struct.c"
    __result144__ = __result_obj__ = (come_push_stackframe("14struct.c", 661),__exception_result_var_b237=((struct sNode*)(right_value227=string_node_v13(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b237);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = 0;
    return __result144__;
}

