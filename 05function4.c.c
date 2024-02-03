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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2sTypepbool
{
    struct sType* v1;
    _Bool v2;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
    _Bool v3;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
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

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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

void skip_paren(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int nest_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&nest_5, 0, sizeof(int));
    # 5 "05function4.c"
    nest_5=0;
    # 26 "05function4.c"
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        # 25 "05function4.c"
        # 7 "05function4.c"
        if(_if_conditional5=*((struct sInfo*)come_null_check(info, "05function4.c", 7))->p==40,        _if_conditional5) {
            # 8 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 8))->p++;
            # 9 "05function4.c"
            (come_push_stackframe("05function4.c", 9),skip_spaces_and_lf(info),come_pop_stackframe());
            # 11 "05function4.c"
            nest_5++;
        }
        else {
            # 25 "05function4.c"
            # 13 "05function4.c"
            if(_if_conditional6=*((struct sInfo*)come_null_check(info, "05function4.c", 13))->p==41,            _if_conditional6) {
                # 14 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 14))->p++;
                # 15 "05function4.c"
                (come_push_stackframe("05function4.c", 15),skip_spaces_and_lf(info),come_pop_stackframe());
                # 17 "05function4.c"
                nest_5--;
                # 21 "05function4.c"
                # 18 "05function4.c"
                if(_if_conditional7=nest_5==0,                _if_conditional7) {
                    # 19 "05function4.c"
                    break;
                }
            }
            else {
                # 23 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 23))->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b1;
_Bool _while_condtional2;
long int __exception_result_var_b2;
_Bool __exception_result_var_b3;
_Bool _while_condtional3;
long int __exception_result_var_b4;
_Bool _while_condtional4;
_Bool __exception_result_var_b5;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool __exception_result_var_b6;
_Bool _if_conditional10;
int line_6;
void* right_value10;
void* right_value11;
struct buffer* __exception_result_var_b7;
struct buffer* fname_7;
_Bool __exception_result_var_b8;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
struct buffer* __exception_result_var_b9;
_Bool _while_condtional8;
void* right_value12;
char* __exception_result_var_b10;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool __exception_result_var_b11;
_Bool _while_condtional11;
long int __exception_result_var_b12;
_Bool __exception_result_var_b13;
_Bool _while_condtional12;
long int __exception_result_var_b14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&line_6, 0, sizeof(int));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&fname_7, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
    # 35 "05function4.c"
    while(_while_condtional2=(come_push_stackframe("05function4.c", 30),__exception_result_var_b1=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 30))->p,"__attribute__"), come_pop_stackframe(), __exception_result_var_b1),    _while_condtional2) {
        # 31 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 31))->p+=(come_push_stackframe("05function4.c", 31),__exception_result_var_b2=strlen("__attribute__"), come_pop_stackframe(), __exception_result_var_b2);
        # 32 "05function4.c"
        (come_push_stackframe("05function4.c", 32),skip_spaces_and_lf(info),come_pop_stackframe());
        # 33 "05function4.c"
        (come_push_stackframe("05function4.c", 33),skip_paren(info),come_pop_stackframe());
    }
    # 39 "05function4.c"
    while(_while_condtional3=(come_push_stackframe("05function4.c", 35),__exception_result_var_b3=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 35))->p,"__extension__"), come_pop_stackframe(), __exception_result_var_b3),    _while_condtional3) {
        # 36 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 36))->p+=(come_push_stackframe("05function4.c", 36),__exception_result_var_b4=strlen("__extension__"), come_pop_stackframe(), __exception_result_var_b4);
        # 37 "05function4.c"
        (come_push_stackframe("05function4.c", 37),skip_spaces_and_lf(info),come_pop_stackframe());
    }
    # 114 "05function4.c"
    while(_while_condtional4=*((struct sInfo*)come_null_check(info, "05function4.c", 52))->p==35,    _while_condtional4) {
        # 53 "05function4.c"
        (come_push_stackframe("05function4.c", 53),skip_spaces_and_lf(info),come_pop_stackframe());
        # 55 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 55))->p++;
        # 56 "05function4.c"
        (come_push_stackframe("05function4.c", 56),skip_spaces_and_lf(info),come_pop_stackframe());
        # 111 "05function4.c"
        # 58 "05function4.c"
        if(_if_conditional8=(come_push_stackframe("05function4.c", 58),__exception_result_var_b5=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 58))->p,"pragma"), come_pop_stackframe(), __exception_result_var_b5),        _if_conditional8) {
            # 68 "05function4.c"
            while(_while_condtional5=*((struct sInfo*)come_null_check(info, "05function4.c", 59))->p,            _while_condtional5) {
                # 67 "05function4.c"
                # 60 "05function4.c"
                if(_if_conditional9=*((struct sInfo*)come_null_check(info, "05function4.c", 60))->p==10,                _if_conditional9) {
                    # 61 "05function4.c"
                    (come_push_stackframe("05function4.c", 61),skip_spaces_and_lf(info),come_pop_stackframe());
                    # 62 "05function4.c"
                    break;
                }
                else {
                    # 65 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 65))->p++;
                }
            }
        }
        else {
            # 111 "05function4.c"
            # 69 "05function4.c"
            if(_if_conditional10=(come_push_stackframe("05function4.c", 69),__exception_result_var_b6=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 69))->p), come_pop_stackframe(), __exception_result_var_b6),            _if_conditional10) {
                # 70 "05function4.c"
                line_6=0;
                # 71 "05function4.c"
                fname_7=(struct buffer*)come_increment_ref_count((come_push_stackframe("05function4.c", 71),__exception_result_var_b7=((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71))))))), come_pop_stackframe(), __exception_result_var_b7));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value11;
                __freed_obj__ = 0;
                # 77 "05function4.c"
                while(_while_condtional6=(come_push_stackframe("05function4.c", 73),__exception_result_var_b8=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 73))->p), come_pop_stackframe(), __exception_result_var_b8),                _while_condtional6) {
                    # 74 "05function4.c"
                    line_6=line_6*10+(*((struct sInfo*)come_null_check(info, "05function4.c", 74))->p-48);
                    # 75 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 75))->p++;
                }
                # 77 "05function4.c"
                (come_push_stackframe("05function4.c", 77),skip_spaces_and_lf(info),come_pop_stackframe());
                # 93 "05function4.c"
                # 79 "05function4.c"
                if(_if_conditional11=*((struct sInfo*)come_null_check(info, "05function4.c", 79))->p==34,                _if_conditional11) {
                    # 80 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 80))->p++;
                    # 87 "05function4.c"
                    while(_while_condtional7=*((struct sInfo*)come_null_check(info, "05function4.c", 82))->p!=34,                    _while_condtional7) {
                        # 83 "05function4.c"
                        (come_push_stackframe("05function4.c", 83),__exception_result_var_b9=buffer_append_char(((struct buffer*)come_null_check(fname_7, "05function4.c", 83)),*((struct sInfo*)come_null_check(info, "05function4.c", 83))->p), come_pop_stackframe(), __exception_result_var_b9);
                        # 84 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 84))->p++;
                    }
                    # 90 "05function4.c"
                    while(_while_condtional8=*((struct sInfo*)come_null_check(info, "05function4.c", 87))->p!=10,                    _while_condtional8) {
                        # 88 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 88))->p++;
                    }
                    # 90 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 90))->p++;
                }
                # 93 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 93))->sline=line_6;
                # 94 "05function4.c"
                __dec_obj6=((struct sInfo*)come_null_check(info, "05function4.c", 94))->sname;
                ((struct sInfo*)come_null_check(info, "05function4.c", 94))->sname=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 94),__exception_result_var_b10=((char*)(right_value12=buffer_to_string(((struct buffer*)come_null_check(fname_7, "05function4.c", 94))))), come_pop_stackframe(), __exception_result_var_b10));
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value12;
                __freed_obj__ = 0;
                # 96 "05function4.c"
                (come_push_stackframe("05function4.c", 96),skip_spaces_and_lf(info),come_pop_stackframe());
                if(fname_7 && !__freed_obj__) { come_call_finalizer(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                # 111 "05function4.c"
                # 98 "05function4.c"
                if(_if_conditional12=*((struct sInfo*)come_null_check(info, "05function4.c", 98))->p==34,                _if_conditional12) {
                    # 99 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 99))->p++;
                    # 105 "05function4.c"
                    while(_while_condtional9=*((struct sInfo*)come_null_check(info, "05function4.c", 101))->p!=34,                    _while_condtional9) {
                        # 102 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 102))->p++;
                    }
                    # 108 "05function4.c"
                    while(_while_condtional10=*((struct sInfo*)come_null_check(info, "05function4.c", 105))->p!=10,                    _while_condtional10) {
                        # 106 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 106))->p++;
                    }
                    # 108 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 108))->p++;
                }
            }
        }
        # 111 "05function4.c"
        (come_push_stackframe("05function4.c", 111),skip_spaces_and_lf(info),come_pop_stackframe());
    }
    # 119 "05function4.c"
    while(_while_condtional11=(come_push_stackframe("05function4.c", 114),__exception_result_var_b11=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 114))->p,"__attribute__"), come_pop_stackframe(), __exception_result_var_b11),    _while_condtional11) {
        # 115 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 115))->p+=(come_push_stackframe("05function4.c", 115),__exception_result_var_b12=strlen("__attribute__"), come_pop_stackframe(), __exception_result_var_b12);
        # 116 "05function4.c"
        (come_push_stackframe("05function4.c", 116),skip_spaces_and_lf(info),come_pop_stackframe());
        # 117 "05function4.c"
        (come_push_stackframe("05function4.c", 117),skip_paren(info),come_pop_stackframe());
    }
    # 123 "05function4.c"
    while(_while_condtional12=(come_push_stackframe("05function4.c", 119),__exception_result_var_b13=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 119))->p,"__extension__"), come_pop_stackframe(), __exception_result_var_b13),    _while_condtional12) {
        # 120 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 120))->p+=(come_push_stackframe("05function4.c", 120),__exception_result_var_b14=strlen("__extension__"), come_pop_stackframe(), __exception_result_var_b14);
        # 121 "05function4.c"
        (come_push_stackframe("05function4.c", 121),skip_spaces_and_lf(info),come_pop_stackframe());
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __exception_result_var_b15;
char c_8;
_Bool __exception_result_var_b16;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&c_8, 0, sizeof(char));
    # 139 "05function4.c"
    c_8=*(((struct sInfo*)come_null_check(info, "05function4.c", 139))->p+(come_push_stackframe("05function4.c", 139),__exception_result_var_b15=strlen(str), come_pop_stackframe(), __exception_result_var_b15));
    # 140 "05function4.c"
    __result13__ = (come_push_stackframe("05function4.c", 140),__exception_result_var_b16=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 140))->p,str), come_pop_stackframe(), __exception_result_var_b16)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result13__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* __exception_result_var_b17;
struct buffer* buf_9;
_Bool _while_condtional13;
struct buffer* __exception_result_var_b18;
void* right_value15;
char* __exception_result_var_b19;
int __exception_result_var_b20;
_Bool _if_conditional13;
void* right_value16;
char* __exception_result_var_b21;
char* __result14__;
void* right_value17;
char* __exception_result_var_b22;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_9, 0, sizeof(struct buffer*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
    # 145 "05function4.c"
    buf_9=(struct buffer*)come_increment_ref_count((come_push_stackframe("05function4.c", 145),__exception_result_var_b17=((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145))))))), come_pop_stackframe(), __exception_result_var_b17));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = 0;
    # 146 "05function4.c"
    (come_push_stackframe("05function4.c", 146),parse_sharp_v5(info),come_pop_stackframe());
    # 153 "05function4.c"
    while(_while_condtional13=(*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p>=97&&*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p<=122)||(*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p>=65&&*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p<=90)||*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p==95||(*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p>=48&&*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p<=57)||(*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p==36),    _while_condtional13) {
        # 150 "05function4.c"
        (come_push_stackframe("05function4.c", 150),__exception_result_var_b18=buffer_append_char(((struct buffer*)come_null_check(buf_9, "05function4.c", 150)),*((struct sInfo*)come_null_check(info, "05function4.c", 150))->p), come_pop_stackframe(), __exception_result_var_b18);
        # 151 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 151))->p++;
    }
    # 153 "05function4.c"
    (come_push_stackframe("05function4.c", 153),skip_spaces_and_lf(info),come_pop_stackframe());
    # 160 "05function4.c"
    # 155 "05function4.c"
    if(_if_conditional13=(come_push_stackframe("05function4.c", 155),__exception_result_var_b20=string_length(((char*)come_null_check((come_push_stackframe("05function4.c", 155),__exception_result_var_b19=((char*)(right_value15=buffer_to_string(((struct buffer*)come_null_check(buf_9, "05function4.c", 155))))), come_pop_stackframe(), __exception_result_var_b19), "05function4.c", 155))), come_pop_stackframe(), __exception_result_var_b20)==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15),
    (right_value15 && right_value15 != __result_obj__ && !__freed_obj__) ? right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value15, 
    __freed_obj__ = 0, 
    _if_conditional13) {
        # 156 "05function4.c"
        (come_push_stackframe("05function4.c", 156),err_msg(info,"unexpected character(%c). expected word character",*((struct sInfo*)come_null_check(info, "05function4.c", 156))->p),come_pop_stackframe());
        # 157 "05function4.c"
        __result14__ = __result_obj__ = (come_push_stackframe("05function4.c", 157),__exception_result_var_b21=((char*)(right_value16=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b21);
        if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value16;
        __freed_obj__ = 0;
        return __result14__;
    }
    # 160 "05function4.c"
    __result15__ = __result_obj__ = (come_push_stackframe("05function4.c", 160),__exception_result_var_b22=((char*)(right_value17=buffer_to_string(((struct buffer*)come_null_check(buf_9, "05function4.c", 160))))), come_pop_stackframe(), __exception_result_var_b22);
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value17;
    __freed_obj__ = 0;
    return __result15__;
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional14;
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 177 "05function4.c"
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        # 176 "05function4.c"
        # 166 "05function4.c"
        if(_if_conditional14=*((struct sInfo*)come_null_check(info, "05function4.c", 166))->p==32||*((struct sInfo*)come_null_check(info, "05function4.c", 166))->p==9,        _if_conditional14) {
            # 167 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 167))->p++;
        }
        else {
            # 176 "05function4.c"
            # 169 "05function4.c"
            if(_if_conditional15=*((struct sInfo*)come_null_check(info, "05function4.c", 169))->p==10,            _if_conditional15) {
                # 170 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 170))->p++;
                # 171 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 171))->sline++;
            }
            else {
                # 174 "05function4.c"
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* o2_saved_10;
struct sType* __exception_result_var_b25;
struct sType* it_13;
_Bool __exception_result_var_b26;
_Bool _for_condtionalA1;
struct sType* __exception_result_var_b29;
_Bool __exception_result_var_b30;
_Bool _if_conditional20;
_Bool __result23__;
_Bool _if_conditional37;
_Bool __result24__;
_Bool __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
    # 187 "05function4.c"
    for(
    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "05function4.c", 181))->mGenericsTypes)),it_13=(come_push_stackframe("05function4.c", 181),__exception_result_var_b25=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_10), "05function4.c", 181))), come_pop_stackframe(), __exception_result_var_b25) ,    0;    _for_condtionalA1=    !(come_push_stackframe("05function4.c", 181),__exception_result_var_b26=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_10), "05function4.c", 181))), come_pop_stackframe(), __exception_result_var_b26) ,    _for_condtionalA1;    it_13=(come_push_stackframe("05function4.c", 181),__exception_result_var_b29=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_10), "05function4.c", 181))), come_pop_stackframe(), __exception_result_var_b29) ,    0    ){
        # 185 "05function4.c"
        # 182 "05function4.c"
        if(_if_conditional20=(come_push_stackframe("05function4.c", 182),__exception_result_var_b30=is_contained_generics_class(it_13,info), come_pop_stackframe(), __exception_result_var_b30),        _if_conditional20) {
            # 183 "05function4.c"
            __result23__ = (_Bool)1;
            if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result23__;
        }
    }
    if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 191 "05function4.c"
    # 187 "05function4.c"
    if(_if_conditional37=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "05function4.c", 187))->mClass, "05function4.c", 187))->mGenerics,    _if_conditional37) {
        # 188 "05function4.c"
        __result24__ = (_Bool)1;
        return __result24__;
    }
    # 191 "05function4.c"
    __result25__ = (_Bool)0;
    return __result25__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
struct sType* result_11;
void* __exception_result_var_b23;
struct sType* __result16__;
_Bool _if_conditional17;
struct sType* __result17__;
struct sType* result_12;
void* __exception_result_var_b24;
struct sType* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        # 343 "./comelang2.h"
        # 338 "./comelang2.h"
        if(_if_conditional16=self==((void*)0),        _if_conditional16) {
            # 339 "./comelang2.h"
            # 340 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b23=memset(&result_11,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b23);
            # 341 "./comelang2.h"
            __result16__ = __result_obj__ = result_11;
            return __result16__;
        }
        # 343 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->head;
        # 349 "./comelang2.h"
        # 345 "./comelang2.h"
        if(_if_conditional17=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 345))->it,        _if_conditional17) {
            # 346 "./comelang2.h"
            __result17__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
            return __result17__;
        }
        # 349 "./comelang2.h"
        # 350 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b24=memset(&result_12,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b24);
        # 351 "./comelang2.h"
        __result18__ = __result_obj__ = result_12;
        return __result18__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 373 "./comelang2.h"
        __result19__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
        return __result19__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
struct sType* result_14;
void* __exception_result_var_b27;
struct sType* __result20__;
_Bool _if_conditional19;
struct sType* __result21__;
struct sType* result_15;
void* __exception_result_var_b28;
struct sType* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        # 361 "./comelang2.h"
        # 355 "./comelang2.h"
        if(_if_conditional18=self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),        _if_conditional18) {
            # 356 "./comelang2.h"
            # 357 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b27=memset(&result_14,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b27);
            # 358 "./comelang2.h"
            __result20__ = __result_obj__ = result_14;
            return __result20__;
        }
        # 361 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
        # 367 "./comelang2.h"
        # 363 "./comelang2.h"
        if(_if_conditional19=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 363))->it,        _if_conditional19) {
            # 364 "./comelang2.h"
            __result21__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
            return __result21__;
        }
        # 367 "./comelang2.h"
        # 368 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b28=memset(&result_15,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b28);
        # 369 "./comelang2.h"
        __result22__ = __result_obj__ = result_15;
        return __result22__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_16;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1sTypeph*));
                # 176 "./comelang2.h"
                it_16=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 176))->head;
                # 182 "./comelang2.h"
                while(_while_condtional15=it_16!=((void*)0),                _while_condtional15) {
                    # 178 "./comelang2.h"
                    prev_it_17=it_16;
                    # 179 "./comelang2.h"
                    it_16=((struct list_item$1sTypeph*)come_null_check(it_16, "./comelang2.h", 179))->next;
                    # 180 "./comelang2.h"
                    if(prev_it_17 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional21=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                        _if_conditional21) {
                            # 0 "list_item$1sTypephp_finalize"
                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "sType_finalize"
                                # 0 "sType_finalize"
                                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),                                _if_conditional22) {
                                    # 0 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 2 "sType_finalize"
                                # 1 "sType_finalize"
                                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),                                _if_conditional24) {
                                    # 1 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 3 "sType_finalize"
                                # 2 "sType_finalize"
                                if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),                                _if_conditional25) {
                                    # 2 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 4 "sType_finalize"
                                # 3 "sType_finalize"
                                if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),                                _if_conditional26) {
                                    # 3 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 5 "sType_finalize"
                                # 4 "sType_finalize"
                                if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),                                _if_conditional27) {
                                    # 4 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 6 "sType_finalize"
                                # 5 "sType_finalize"
                                if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),                                _if_conditional29) {
                                    # 5 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 7 "sType_finalize"
                                # 6 "sType_finalize"
                                if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),                                _if_conditional30) {
                                    # 6 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 8 "sType_finalize"
                                # 7 "sType_finalize"
                                if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),                                _if_conditional32) {
                                    # 7 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 9 "sType_finalize"
                                # 8 "sType_finalize"
                                if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),                                _if_conditional33) {
                                    # 8 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                }
                                # 10 "sType_finalize"
                                # 9 "sType_finalize"
                                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),                                _if_conditional34) {
                                    # 9 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                }
                                # 11 "sType_finalize"
                                # 10 "sType_finalize"
                                if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),                                _if_conditional35) {
                                    # 10 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 12 "sType_finalize"
                                # 11 "sType_finalize"
                                if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),                                _if_conditional36) {
                                    # 11 "sType_finalize"
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        # 1 "tuple1$1sTypephp_finalize"
                                        # 0 "tuple1$1sTypephp_finalize"
                                        if(_if_conditional23=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                                        _if_conditional23) {
                                            # 0 "tuple1$1sTypephp_finalize"
                                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_18;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sNodeph*));
                                        # 176 "./comelang2.h"
                                        it_18=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 176))->head;
                                        # 182 "./comelang2.h"
                                        while(_while_condtional16=it_18!=((void*)0),                                        _while_condtional16) {
                                            # 178 "./comelang2.h"
                                            prev_it_19=it_18;
                                            # 179 "./comelang2.h"
                                            it_18=((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 179))->next;
                                            # 180 "./comelang2.h"
                                            if(prev_it_19 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 1 "list_item$1sNodephp_finalize"
                                                # 0 "list_item$1sNodephp_finalize"
                                                if(_if_conditional28=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                                                _if_conditional28) {
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_20;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                        # 176 "./comelang2.h"
                                        it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 176))->head;
                                        # 182 "./comelang2.h"
                                        while(_while_condtional17=it_20!=((void*)0),                                        _while_condtional17) {
                                            # 178 "./comelang2.h"
                                            prev_it_21=it_20;
                                            # 179 "./comelang2.h"
                                            it_20=((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 179))->next;
                                            # 180 "./comelang2.h"
                                            if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 1 "list_item$1charphp_finalize"
                                                # 0 "list_item$1charphp_finalize"
                                                if(_if_conditional31=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                                                _if_conditional31) {
                                                    # 0 "list_item$1charphp_finalize"
                                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
void* right_value19;
struct list$1sTypeph* __exception_result_var_b31;
struct list$1sTypeph* param_types_22;
void* right_value20;
void* right_value21;
struct list$1charph* __exception_result_var_b32;
struct list$1charph* param_names_23;
void* right_value22;
void* right_value23;
struct list$1charph* __exception_result_var_b33;
struct list$1charph* param_default_parametors_24;
_Bool var_args_25;
int __exception_result_var_b34;
_Bool void_param_26;
char* p_27;
int sline_28;
_Bool __exception_result_var_b35;
_Bool _if_conditional38;
long int __exception_result_var_b36;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool __exception_result_var_b37;
_Bool _if_conditional41;
long int __exception_result_var_b38;
_Bool _if_conditional42;
_Bool _while_condtional18;
_Bool _if_conditional43;
void* right_value24;
struct tuple3$3sTypephcharphbool* __exception_result_var_b39;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_29;
char* param_name_30;
_Bool err_31;
_Bool _if_conditional46;
int __exception_result_var_b40;
void* right_value25;
void* right_value26;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result29__;
void* right_value27;
struct sType* __exception_result_var_b41;
struct sType* param_type2_32;
void* right_value65;
struct list$1sTypeph* __exception_result_var_b48;
void* right_value69;
struct list$1charph* __exception_result_var_b49;
_Bool _if_conditional121;
char* p_57;
_Bool no_comma_58;
void* right_value70;
struct sNode* __exception_result_var_b50;
struct sNode* node_59;
char* p2_60;
void* __exception_result_var_b51;
void* right_value71;
char* __exception_result_var_b52;
struct list$1charph* __exception_result_var_b53;
struct list$1charph* __exception_result_var_b54;
_Bool _if_conditional122;
_Bool __exception_result_var_b55;
_Bool _if_conditional123;
long int __exception_result_var_b56;
int __exception_result_var_b57;
_Bool _if_conditional124;
void* right_value72;
void* right_value82;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&param_names_23, 0, sizeof(struct list$1charph*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&void_param_26, 0, sizeof(_Bool));
memset(&p_27, 0, sizeof(char*));
memset(&sline_28, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&param_type_29, 0, sizeof(struct sType*));
memset(&param_name_30, 0, sizeof(char*));
memset(&err_31, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&param_type2_32, 0, sizeof(struct sType*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&p_57, 0, sizeof(char*));
memset(&no_comma_58, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&node_59, 0, sizeof(struct sNode*));
memset(&p2_60, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    # 196 "05function4.c"
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("05function4.c", 196),__exception_result_var_b31=((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196))))))), come_pop_stackframe(), __exception_result_var_b31));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19;
    __freed_obj__ = 0;
    # 197 "05function4.c"
    param_names_23=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("05function4.c", 197),__exception_result_var_b32=((struct list$1charph*)(right_value21=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197))))))), come_pop_stackframe(), __exception_result_var_b32));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value20;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value21);
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value21;
    __freed_obj__ = 0;
    # 198 "05function4.c"
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("05function4.c", 198),__exception_result_var_b33=((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198))))))), come_pop_stackframe(), __exception_result_var_b33));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value23;
    __freed_obj__ = 0;
    # 199 "05function4.c"
    var_args_25=(_Bool)0;
    # 201 "05function4.c"
    (come_push_stackframe("05function4.c", 201),__exception_result_var_b34=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b34);
    # 204 "05function4.c"
    void_param_26=(_Bool)0;
    # 222 "05function4.c"
    {
        # 206 "05function4.c"
        p_27=((struct sInfo*)come_null_check(info, "05function4.c", 206))->p;
        # 207 "05function4.c"
        sline_28=((struct sInfo*)come_null_check(info, "05function4.c", 207))->sline;
        # 218 "05function4.c"
        # 209 "05function4.c"
        if(_if_conditional38=(come_push_stackframe("05function4.c", 209),__exception_result_var_b35=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 209))->p,"void"), come_pop_stackframe(), __exception_result_var_b35),        _if_conditional38) {
            # 210 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 210))->p+=(come_push_stackframe("05function4.c", 210),__exception_result_var_b36=strlen("void"), come_pop_stackframe(), __exception_result_var_b36);
            # 211 "05function4.c"
            (come_push_stackframe("05function4.c", 211),skip_spaces_and_lf(info),come_pop_stackframe());
            # 216 "05function4.c"
            # 213 "05function4.c"
            if(_if_conditional39=*((struct sInfo*)come_null_check(info, "05function4.c", 213))->p==41,            _if_conditional39) {
                # 214 "05function4.c"
                void_param_26=(_Bool)1;
            }
        }
        # 218 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 218))->p=p_27;
        # 219 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 219))->sline=sline_28;
    }
    # 307 "05function4.c"
    # 222 "05function4.c"
    if(_if_conditional40=void_param_26,    _if_conditional40) {
        # 232 "05function4.c"
        # 223 "05function4.c"
        if(_if_conditional41=(come_push_stackframe("05function4.c", 223),__exception_result_var_b37=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 223))->p,"void"), come_pop_stackframe(), __exception_result_var_b37),        _if_conditional41) {
            # 224 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 224))->p+=(come_push_stackframe("05function4.c", 224),__exception_result_var_b38=strlen("void"), come_pop_stackframe(), __exception_result_var_b38);
            # 225 "05function4.c"
            (come_push_stackframe("05function4.c", 225),skip_spaces_and_lf(info),come_pop_stackframe());
            # 231 "05function4.c"
            # 227 "05function4.c"
            if(_if_conditional42=*((struct sInfo*)come_null_check(info, "05function4.c", 227))->p==41,            _if_conditional42) {
                # 228 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 228))->p++;
                # 229 "05function4.c"
                (come_push_stackframe("05function4.c", 229),skip_spaces_and_lf(info),come_pop_stackframe());
            }
        }
    }
    else {
        # 305 "05function4.c"
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            # 241 "05function4.c"
            # 235 "05function4.c"
            if(_if_conditional43=*((struct sInfo*)come_null_check(info, "05function4.c", 235))->p==41,            _if_conditional43) {
                # 236 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 236))->p++;
                # 237 "05function4.c"
                (come_push_stackframe("05function4.c", 237),skip_spaces_and_lf(info),come_pop_stackframe());
                # 238 "05function4.c"
                break;
            }
            # 241 "05function4.c"
            (come_push_stackframe("05function4.c", 241),parse_sharp_v5(info),come_pop_stackframe());
            # 243 "05function4.c"
            multiple_assgin_var1=(come_push_stackframe("05function4.c", 243),__exception_result_var_b39=((struct tuple3$3sTypephcharphbool*)(right_value24=parse_type(info,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b39);
            param_type_29=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_30=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_31=multiple_assgin_var1->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value24;
            __freed_obj__ = 0;
            # 250 "05function4.c"
            # 245 "05function4.c"
            if(_if_conditional46=!err_31,            _if_conditional46) {
                # 246 "05function4.c"
                (come_push_stackframe("05function4.c", 246),__exception_result_var_b40=printf("%s %d: failed to function parametor\n",((struct sInfo*)come_null_check(info, "05function4.c", 246))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 246))->sline), come_pop_stackframe(), __exception_result_var_b40);
                # 247 "05function4.c"
                __result29__ = __result_obj__ = ((struct tuple4$4voidpvoidpvoidpbool*)(right_value26=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value25=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247)))),((void*)0),((void*)0),((void*)0),(_Bool)0)));
                if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26;
                __freed_obj__ = 0;
                return __result29__;
            }
            # 250 "05function4.c"
            param_type2_32=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 250),__exception_result_var_b41=((struct sType*)(right_value27=solve_generics(param_type_29,((struct sInfo*)come_null_check(info, "05function4.c", 250))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b41));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value27;
            __freed_obj__ = 0;
            # 252 "05function4.c"
            ((struct sType*)come_null_check(param_type2_32, "05function4.c", 252))->mFunctionParam=(_Bool)1;
            # 254 "05function4.c"
            (come_push_stackframe("05function4.c", 254),__exception_result_var_b48=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_22, "05function4.c", 254)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(param_type2_32))))), come_pop_stackframe(), __exception_result_var_b48);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value65;
            __freed_obj__ = 0;
            # 255 "05function4.c"
            (come_push_stackframe("05function4.c", 255),__exception_result_var_b49=list$1charph_push_back(((struct list$1charph*)come_null_check(param_names_23, "05function4.c", 255)),(char*)come_increment_ref_count(((char*)(right_value69=string_clone(param_name_30))))), come_pop_stackframe(), __exception_result_var_b49);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value69;
            __freed_obj__ = 0;
            # 284 "05function4.c"
            # 257 "05function4.c"
            if(_if_conditional121=*((struct sInfo*)come_null_check(info, "05function4.c", 257))->p==61,            _if_conditional121) {
                # 258 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 258))->p++;
                # 259 "05function4.c"
                (come_push_stackframe("05function4.c", 259),skip_spaces_and_lf(info),come_pop_stackframe());
                # 261 "05function4.c"
                (come_push_stackframe("05function4.c", 261),parse_sharp_v5(info),come_pop_stackframe());
                # 263 "05function4.c"
                p_57=((struct sInfo*)come_null_check(info, "05function4.c", 263))->p;
                # 265 "05function4.c"
                no_comma_58=((struct sInfo*)come_null_check(info, "05function4.c", 265))->no_comma;
                # 266 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 266))->no_comma=(_Bool)1;
                # 268 "05function4.c"
                node_59=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 268),__exception_result_var_b50=((struct sNode*)(right_value70=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b50));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value70;
                __freed_obj__ = 0;
                # 270 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 270))->no_comma=no_comma_58;
                # 272 "05function4.c"
                p2_60=((struct sInfo*)come_null_check(info, "05function4.c", 272))->p;
                # 274 "05function4.c"
                char buf_61[p2_60-p_57+1];
                memset(&buf_61, 0, sizeof(char)                *(p2_60-p_57+1)                );
                # 275 "05function4.c"
                (come_push_stackframe("05function4.c", 275),__exception_result_var_b51=memcpy(buf_61,p_57,p2_60-p_57), come_pop_stackframe(), __exception_result_var_b51);
                # 276 "05function4.c"
                buf_61[p2_60-p_57]=0;
                # 278 "05function4.c"
                (come_push_stackframe("05function4.c", 278),__exception_result_var_b53=list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_24, "05function4.c", 278)),(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 278),__exception_result_var_b52=((char*)(right_value71=__builtin_string(buf_61))), come_pop_stackframe(), __exception_result_var_b52))), come_pop_stackframe(), __exception_result_var_b53);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value71;
                __freed_obj__ = 0;
                if(node_59 && !__freed_obj__) { node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                # 281 "05function4.c"
                (come_push_stackframe("05function4.c", 281),__exception_result_var_b54=list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_24, "05function4.c", 281)),((void*)0)), come_pop_stackframe(), __exception_result_var_b54);
            }
            # 284 "05function4.c"
            (come_push_stackframe("05function4.c", 284),parse_sharp_v5(info),come_pop_stackframe());
            # 304 "05function4.c"
            # 286 "05function4.c"
            if(_if_conditional122=*((struct sInfo*)come_null_check(info, "05function4.c", 286))->p==44,            _if_conditional122) {
                # 287 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 287))->p++;
                # 288 "05function4.c"
                (come_push_stackframe("05function4.c", 288),skip_spaces_and_lf(info),come_pop_stackframe());
                # 298 "05function4.c"
                # 290 "05function4.c"
                if(_if_conditional123=(come_push_stackframe("05function4.c", 290),__exception_result_var_b55=strmemcmp(((struct sInfo*)come_null_check(info, "05function4.c", 290))->p,"..."), come_pop_stackframe(), __exception_result_var_b55),                _if_conditional123) {
                    # 291 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 291))->p+=(come_push_stackframe("05function4.c", 291),__exception_result_var_b56=strlen("..."), come_pop_stackframe(), __exception_result_var_b56);
                    # 292 "05function4.c"
                    (come_push_stackframe("05function4.c", 292),skip_spaces_and_lf(info),come_pop_stackframe());
                    # 293 "05function4.c"
                    var_args_25=(_Bool)1;
                    # 295 "05function4.c"
                    (come_push_stackframe("05function4.c", 295),__exception_result_var_b57=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b57);
                    # 296 "05function4.c"
                    if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            else {
                # 304 "05function4.c"
                # 299 "05function4.c"
                if(_if_conditional124=*((struct sInfo*)come_null_check(info, "05function4.c", 299))->p==41,                _if_conditional124) {
                    # 300 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 300))->p++;
                    # 301 "05function4.c"
                    (come_push_stackframe("05function4.c", 301),skip_spaces_and_lf(info),come_pop_stackframe());
                    # 302 "05function4.c"
                    if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            if(param_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_name_30 && !__freed_obj__) { param_name_30 = come_decrement_ref_count(param_name_30, (void*)0, (void*)0, 0, 0, 0); }
            if(param_type2_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_32, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    # 307 "05function4.c"
    __result53__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value82=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value72=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)));
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value72;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value82;
    __freed_obj__ = 0;
    return __result53__;
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 157 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
        # 158 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
        # 159 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
        # 161 "./comelang2.h"
        __result26__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result26__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
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

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional44=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1!=((void*)0),                _if_conditional44) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional45=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2!=((void*)0),                _if_conditional45) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1889 "./comelang2.h"
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1889))->v1=v1;
                    # 1890 "./comelang2.h"
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1890))->v2=v2;
                    # 1891 "./comelang2.h"
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1891))->v3=v3;
                    # 1892 "./comelang2.h"
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1892))->v4=v4;
                    # 1894 "./comelang2.h"
                    __result28__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result28__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
void* right_value28;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj7;
_Bool _if_conditional48;
void* right_value29;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj8;
void* right_value30;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj9;
struct list$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional47=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional47) {
                    # 279 "./comelang2.h"
                    litem_33=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value28;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    ((struct list_item$1sTypeph*)come_null_check(litem_33, "./comelang2.h", 281))->prev=((void*)0);
                    # 282 "./comelang2.h"
                    ((struct list_item$1sTypeph*)come_null_check(litem_33, "./comelang2.h", 282))->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_33, "./comelang2.h", 283))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_33, "./comelang2.h", 283))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_33;
                    # 286 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 286))->head=litem_33;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional48=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional48) {
                        # 289 "./comelang2.h"
                        litem_34=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value29=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_34, "./comelang2.h", 291))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 291))->head;
                        # 292 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_34, "./comelang2.h", 292))->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_34, "./comelang2.h", 293))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_34, "./comelang2.h", 293))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_34;
                        # 296 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_34;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value30;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 301))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 301))->tail;
                        # 302 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 302))->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 303))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_35, "./comelang2.h", 303))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_35;
                        # 306 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_35;
                    }
                }
                # 309 "./comelang2.h"
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 309))->len++;
                # 311 "./comelang2.h"
                __result30__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result30__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* __result31__;
void* right_value31;
struct sType* result_36;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value34;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional55;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional56;
void* right_value36;
char* __dec_obj13;
_Bool _if_conditional57;
void* right_value43;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional61;
void* right_value51;
struct list$1sNodeph* __dec_obj21;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value52;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional76;
void* right_value59;
struct list$1charph* __dec_obj26;
_Bool _if_conditional80;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value61;
struct sNode* __dec_obj28;
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
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value62;
struct sNode* __dec_obj29;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value63;
char* __dec_obj30;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value64;
char* __dec_obj31;
struct sType* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct sType*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional49=self==(void*)0,                _if_conditional49) {
                    # 2 "sType_clone"
                    __result31__ = __result_obj__ = (void*)0;
                    return __result31__;
                }
                # 3 "sType_clone"
                result_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31;
                __freed_obj__ = 0;
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional50=self!=((void*)0),                _if_conditional50) {
                    # 4 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),                _if_conditional51) {
                    # 5 "sType_clone"
                    __dec_obj11=((struct sType*)come_null_check(result_36, "sType_clone", 5))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value34=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                    if(__dec_obj11) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value34;
                    __freed_obj__ = 0;
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),                _if_conditional55) {
                    # 6 "sType_clone"
                    __dec_obj12=((struct sType*)come_null_check(result_36, "sType_clone", 6))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                    if(__dec_obj12) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value35;
                    __freed_obj__ = 0;
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),                _if_conditional56) {
                    # 7 "sType_clone"
                    __dec_obj13=((struct sType*)come_null_check(result_36, "sType_clone", 7))->mGenericsName;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value36;
                    __freed_obj__ = 0;
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional57=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),                _if_conditional57) {
                    # 8 "sType_clone"
                    __dec_obj17=((struct sType*)come_null_check(result_36, "sType_clone", 8))->mGenericsTypes;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                    if(__dec_obj17) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43;
                    __freed_obj__ = 0;
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional61=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),                _if_conditional61) {
                    # 9 "sType_clone"
                    __dec_obj21=((struct sType*)come_null_check(result_36, "sType_clone", 9))->mArrayNum;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                    if(__dec_obj21) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value51;
                    __freed_obj__ = 0;
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    # 10 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),                _if_conditional75) {
                    # 11 "sType_clone"
                    __dec_obj22=((struct sType*)come_null_check(result_36, "sType_clone", 11))->mParamTypes;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                    if(__dec_obj22) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),                _if_conditional76) {
                    # 12 "sType_clone"
                    __dec_obj26=((struct sType*)come_null_check(result_36, "sType_clone", 12))->mParamNames;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                    if(__dec_obj26) { come_call_finalizer(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),                _if_conditional80) {
                    # 13 "sType_clone"
                    __dec_obj27=((struct sType*)come_null_check(result_36, "sType_clone", 13))->mResultType;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                    if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
                    __freed_obj__ = 0;
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    # 14 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional82=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),                _if_conditional82) {
                    # 15 "sType_clone"
                    __dec_obj28=((struct sType*)come_null_check(result_36, "sType_clone", 15))->mAlignas;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, ((struct sNode*)right_value61)->finalize, ((struct sNode*)right_value61)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value61;
                    __freed_obj__ = 0;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    # 16 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    # 17 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    # 18 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    # 19 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    # 20 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    # 21 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    # 22 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    # 23 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    # 24 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 25 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    # 26 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 27 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    # 28 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    # 29 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 30 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 31 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 32 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 33 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 34 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 35 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 36 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 37 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 38 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional106=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),                _if_conditional106) {
                    # 39 "sType_clone"
                    __dec_obj29=((struct sType*)come_null_check(result_36, "sType_clone", 39))->mSizeNum;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value62;
                    __freed_obj__ = 0;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 40 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 41 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional109=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),                _if_conditional109) {
                    # 42 "sType_clone"
                    __dec_obj30=((struct sType*)come_null_check(result_36, "sType_clone", 42))->mOriginalTypeName;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63;
                    __freed_obj__ = 0;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 43 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    # 44 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    # 45 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    # 46 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    # 47 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    # 48 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    # 49 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 50 "sType_clone"
                    ((struct sType*)come_null_check(result_36, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional118=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),                _if_conditional118) {
                    # 51 "sType_clone"
                    __dec_obj31=((struct sType*)come_null_check(result_36, "sType_clone", 51))->mAsmName;
                    ((struct sType*)come_null_check(result_36, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                }
                # 52 "sType_clone"
                __result46__ = __result_obj__ = result_36;
                if(result_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result46__;
                if(result_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct tuple1$1sTypeph* __result32__;
void* right_value32;
struct tuple1$1sTypeph* result_37;
_Bool _if_conditional54;
void* right_value33;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional52=self==(void*)0,                        _if_conditional52) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result32__ = __result_obj__ = (void*)0;
                            return __result32__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value32;
                        __freed_obj__ = 0;
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional54=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                        _if_conditional54) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj10=((struct tuple1$1sTypeph*)come_null_check(result_37, "tuple1$1sTypephp_clone", 4))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(result_37, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value33;
                            __freed_obj__ = 0;
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result33__ = __result_obj__ = result_37;
                        if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result33__;
                        if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional53=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                            _if_conditional53) {
                                # 0 "tuple1$1sTypeph_finalize"
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct list$1sTypeph* __result34__;
void* right_value37;
void* right_value38;
struct list$1sTypeph* __exception_result_var_b42;
struct list$1sTypeph* result_38;
struct list_item$1sTypeph* it_39;
_Bool _while_condtional19;
void* right_value42;
struct list$1sTypeph* __exception_result_var_b43;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value42, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional58=self==((void*)0),                        _if_conditional58) {
                            # 193 "./comelang2.h"
                            __result34__ = __result_obj__ = ((void*)0);
                            return __result34__;
                        }
                        # 195 "./comelang2.h"
                        result_38=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b42=((struct list$1sTypeph*)(right_value38=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b42));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value37;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value38;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_39=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional19=it_39!=((void*)0),                        _while_condtional19) {
                            # 199 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b43=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_38, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b43);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value42;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_39=((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 201))->next;
                        }
                        # 204 "./comelang2.h"
                        __result36__ = __result_obj__ = result_38;
                        if(result_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result36__;
                        if(result_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
void* right_value39;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj14;
_Bool _if_conditional60;
void* right_value40;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj15;
void* right_value41;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj16;
struct list$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional59=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                                _if_conditional59) {
                                    # 209 "./comelang2.h"
                                    litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 211))->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 212))->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj14=((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 213))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 213))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 215 "./comelang2.h"
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_40;
                                    # 216 "./comelang2.h"
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_40;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional60=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                    _if_conditional60) {
                                        # 219 "./comelang2.h"
                                        litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value40=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value40;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 221))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                        # 222 "./comelang2.h"
                                        ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 222))->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj15=((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 223))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 223))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 225 "./comelang2.h"
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_41;
                                        # 226 "./comelang2.h"
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_41;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value41=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value41;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 231))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                        # 232 "./comelang2.h"
                                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 232))->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj16=((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 233))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 233))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 235 "./comelang2.h"
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_42;
                                        # 236 "./comelang2.h"
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_42;
                                    }
                                }
                                # 239 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                                # 241 "./comelang2.h"
                                __result35__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result35__;
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
_Bool _if_conditional62;
struct list$1sNodeph* __result37__;
void* right_value44;
void* right_value45;
struct list$1sNodeph* __exception_result_var_b44;
struct list$1sNodeph* result_43;
struct list_item$1sNodeph* it_44;
_Bool _while_condtional20;
void* right_value50;
struct list$1sNodeph* __exception_result_var_b45;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct list$1sNodeph*));
memset(&it_44, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value50, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional62=self==((void*)0),                        _if_conditional62) {
                            # 193 "./comelang2.h"
                            __result37__ = __result_obj__ = ((void*)0);
                            return __result37__;
                        }
                        # 195 "./comelang2.h"
                        result_43=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b44=((struct list$1sNodeph*)(right_value45=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value44=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b44));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value44;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value45;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_44=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 197))->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional20=it_44!=((void*)0),                        _while_condtional20) {
                            # 199 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b45=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_43, "./comelang2.h", 199)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_44, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b45);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value50;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_44=((struct list_item$1sNodeph*)come_null_check(it_44, "./comelang2.h", 201))->next;
                        }
                        # 204 "./comelang2.h"
                        __result42__ = __result_obj__ = result_43;
                        if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result42__;
                        if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 157 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                            # 158 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                            # 159 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                            # 161 "./comelang2.h"
                            __result38__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result38__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
void* right_value46;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj18;
_Bool _if_conditional64;
void* right_value47;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj19;
void* right_value48;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional63=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                                _if_conditional63) {
                                    # 209 "./comelang2.h"
                                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value46;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 211))->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 212))->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj18=((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 213))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 213))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                    # 215 "./comelang2.h"
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_45;
                                    # 216 "./comelang2.h"
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_45;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional64=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                    _if_conditional64) {
                                        # 219 "./comelang2.h"
                                        litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value47;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        ((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 221))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                        # 222 "./comelang2.h"
                                        ((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 222))->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj19=((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 223))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 223))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                                        # 225 "./comelang2.h"
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_46;
                                        # 226 "./comelang2.h"
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_46;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value48=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value48;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        ((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 231))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                        # 232 "./comelang2.h"
                                        ((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 232))->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj20=((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 233))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 233))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                        # 235 "./comelang2.h"
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_47;
                                        # 236 "./comelang2.h"
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_47;
                                    }
                                }
                                # 239 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                                # 241 "./comelang2.h"
                                __result39__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result39__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct sNode* __result40__;
void* right_value49;
struct sNode* result_48;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct sNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional65=self==(void*)0,                                _if_conditional65) {
                                    # 2 "sNode_clone"
                                    __result40__ = __result_obj__ = (void*)0;
                                    return __result40__;
                                }
                                # 3 "sNode_clone"
                                result_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value49;
                                __freed_obj__ = 0;
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional66=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                                _if_conditional66) {
                                    # 4 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional67=self!=((void*)0),                                _if_conditional67) {
                                    # 5 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional68=self!=((void*)0),                                _if_conditional68) {
                                    # 6 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional69=self!=((void*)0),                                _if_conditional69) {
                                    # 7 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional70=self!=((void*)0),                                _if_conditional70) {
                                    # 8 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    # 9 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    # 10 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    # 11 "sNode_clone"
                                    ((struct sNode*)come_null_check(result_48, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                }
                                # 12 "sNode_clone"
                                __result41__ = __result_obj__ = result_48;
                                if(result_48 && !__freed_obj__) { result_48 = come_decrement_ref_count(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 1, 0); } 
                                return __result41__;
                                if(result_48 && !__freed_obj__) { result_48 = come_decrement_ref_count(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional77;
struct list$1charph* __result43__;
void* right_value53;
void* right_value54;
struct list$1charph* __exception_result_var_b46;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional21;
void* right_value58;
struct list$1charph* __exception_result_var_b47;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value58, 0, sizeof(void*));
                        # 195 "./comelang2.h"
                        # 192 "./comelang2.h"
                        if(_if_conditional77=self==((void*)0),                        _if_conditional77) {
                            # 193 "./comelang2.h"
                            __result43__ = __result_obj__ = ((void*)0);
                            return __result43__;
                        }
                        # 195 "./comelang2.h"
                        result_49=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b46=((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b46));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value54;
                        __freed_obj__ = 0;
                        # 197 "./comelang2.h"
                        it_50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
                        # 204 "./comelang2.h"
                        while(_while_condtional21=it_50!=((void*)0),                        _while_condtional21) {
                            # 199 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b47=list$1charph_add(((struct list$1charph*)come_null_check(result_49, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value58=string_clone(((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b47);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value58;
                            __freed_obj__ = 0;
                            # 201 "./comelang2.h"
                            it_50=((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 201))->next;
                        }
                        # 204 "./comelang2.h"
                        __result45__ = __result_obj__ = result_49;
                        if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result45__;
                        if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
void* right_value55;
struct list_item$1charph* litem_51;
char* __dec_obj23;
_Bool _if_conditional79;
void* right_value56;
struct list_item$1charph* litem_52;
char* __dec_obj24;
void* right_value57;
struct list_item$1charph* litem_53;
char* __dec_obj25;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value57, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                                # 239 "./comelang2.h"
                                # 208 "./comelang2.h"
                                if(_if_conditional78=((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->len==0,                                _if_conditional78) {
                                    # 209 "./comelang2.h"
                                    litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value55;
                                    __freed_obj__ = 0;
                                    # 211 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 211))->prev=((void*)0);
                                    # 212 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 212))->next=((void*)0);
                                    # 213 "./comelang2.h"
                                    __dec_obj23=((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 213))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 213))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                    # 215 "./comelang2.h"
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_51;
                                    # 216 "./comelang2.h"
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->head=litem_51;
                                }
                                else {
                                    # 239 "./comelang2.h"
                                    # 218 "./comelang2.h"
                                    if(_if_conditional79=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                    _if_conditional79) {
                                        # 219 "./comelang2.h"
                                        litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value56=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value56;
                                        __freed_obj__ = 0;
                                        # 221 "./comelang2.h"
                                        ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 221))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->head;
                                        # 222 "./comelang2.h"
                                        ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 222))->next=((void*)0);
                                        # 223 "./comelang2.h"
                                        __dec_obj24=((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 223))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 223))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                                        # 225 "./comelang2.h"
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_52;
                                        # 226 "./comelang2.h"
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_52;
                                    }
                                    else {
                                        # 229 "./comelang2.h"
                                        litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value57=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value57;
                                        __freed_obj__ = 0;
                                        # 231 "./comelang2.h"
                                        ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 231))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                        # 232 "./comelang2.h"
                                        ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 232))->next=((void*)0);
                                        # 233 "./comelang2.h"
                                        __dec_obj25=((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 233))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 233))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                        # 235 "./comelang2.h"
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_53;
                                        # 236 "./comelang2.h"
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_53;
                                    }
                                }
                                # 239 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 239))->len++;
                                # 241 "./comelang2.h"
                                __result44__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result44__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
void* right_value66;
struct list_item$1charph* litem_54;
char* __dec_obj32;
_Bool _if_conditional120;
void* right_value67;
struct list_item$1charph* litem_55;
char* __dec_obj33;
void* right_value68;
struct list_item$1charph* litem_56;
char* __dec_obj34;
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
memset(&right_value67, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value68, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional119=((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional119) {
                    # 279 "./comelang2.h"
                    litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value66=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    ((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 281))->prev=((void*)0);
                    # 282 "./comelang2.h"
                    ((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 282))->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj32=((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 283))->item;
                    ((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 283))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    # 285 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_54;
                    # 286 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 286))->head=litem_54;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional120=((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional120) {
                        # 289 "./comelang2.h"
                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value67;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 291))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 291))->head;
                        # 292 "./comelang2.h"
                        ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 292))->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj33=((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 293))->item;
                        ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 293))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                        # 295 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_55;
                        # 296 "./comelang2.h"
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_55;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value68;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 301))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 301))->tail;
                        # 302 "./comelang2.h"
                        ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 302))->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj34=((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 303))->item;
                        ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 303))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        # 305 "./comelang2.h"
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_56;
                        # 306 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_56;
                    }
                }
                # 309 "./comelang2.h"
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 309))->len++;
                # 311 "./comelang2.h"
                __result47__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result47__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
struct list$1sTypeph* __dec_obj35;
void* right_value80;
struct list$1charph* __dec_obj36;
void* right_value81;
struct list$1charph* __dec_obj37;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
        # 1889 "./comelang2.h"
        __dec_obj35=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1889))->v1;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1889))->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value76=list$1sTypeph_clone(v1))));
        if(__dec_obj35) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value76;
        __freed_obj__ = 0;
        # 1890 "./comelang2.h"
        __dec_obj36=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1890))->v2;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1890))->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=list$1charph_clone(v2))));
        if(__dec_obj36) { come_call_finalizer(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value80;
        __freed_obj__ = 0;
        # 1891 "./comelang2.h"
        __dec_obj37=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1891))->v3;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1891))->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charph_clone(v3))));
        if(__dec_obj37) { come_call_finalizer(list$1charph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value81;
        __freed_obj__ = 0;
        # 1892 "./comelang2.h"
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1892))->v4=v4;
        # 1894 "./comelang2.h"
        __result52__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result52__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
struct list$1sTypeph* __result48__;
void* right_value73;
void* right_value74;
struct list$1sTypeph* __exception_result_var_b58;
struct list$1sTypeph* result_62;
struct list_item$1sTypeph* it_63;
_Bool _while_condtional22;
void* right_value75;
struct list$1sTypeph* __exception_result_var_b59;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct list$1sTypeph*));
memset(&it_63, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value75, 0, sizeof(void*));
            # 195 "./comelang2.h"
            # 192 "./comelang2.h"
            if(_if_conditional125=self==((void*)0),            _if_conditional125) {
                # 193 "./comelang2.h"
                __result48__ = __result_obj__ = ((void*)0);
                return __result48__;
            }
            # 195 "./comelang2.h"
            result_62=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b58=((struct list$1sTypeph*)(right_value74=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value73=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b58));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value73;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value74;
            __freed_obj__ = 0;
            # 197 "./comelang2.h"
            it_63=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
            # 204 "./comelang2.h"
            while(_while_condtional22=it_63!=((void*)0),            _while_condtional22) {
                # 199 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b59=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_62, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_63, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b59);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value75;
                __freed_obj__ = 0;
                # 201 "./comelang2.h"
                it_63=((struct list_item$1sTypeph*)come_null_check(it_63, "./comelang2.h", 201))->next;
            }
            # 204 "./comelang2.h"
            __result49__ = __result_obj__ = result_62;
            if(result_62 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result49__;
            if(result_62 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
struct list$1charph* __result50__;
void* right_value77;
void* right_value78;
struct list$1charph* __exception_result_var_b60;
struct list$1charph* result_64;
struct list_item$1charph* it_65;
_Bool _while_condtional23;
void* right_value79;
struct list$1charph* __exception_result_var_b61;
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct list$1charph*));
memset(&it_65, 0, sizeof(struct list_item$1charph*));
memset(&right_value79, 0, sizeof(void*));
            # 195 "./comelang2.h"
            # 192 "./comelang2.h"
            if(_if_conditional126=self==((void*)0),            _if_conditional126) {
                # 193 "./comelang2.h"
                __result50__ = __result_obj__ = ((void*)0);
                return __result50__;
            }
            # 195 "./comelang2.h"
            result_64=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b60=((struct list$1charph*)(right_value78=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value77=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b60));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value78;
            __freed_obj__ = 0;
            # 197 "./comelang2.h"
            it_65=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
            # 204 "./comelang2.h"
            while(_while_condtional23=it_65!=((void*)0),            _while_condtional23) {
                # 199 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b61=list$1charph_add(((struct list$1charph*)come_null_check(result_64, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value79=string_clone(((struct list_item$1charph*)come_null_check(it_65, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b61);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value79;
                __freed_obj__ = 0;
                # 201 "./comelang2.h"
                it_65=((struct list_item$1charph*)come_null_check(it_65, "./comelang2.h", 201))->next;
            }
            # 204 "./comelang2.h"
            __result51__ = __result_obj__ = result_64;
            if(result_64 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_64, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result51__;
            if(result_64 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional127=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1!=((void*)0),            _if_conditional127) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional128=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2!=((void*)0),            _if_conditional128) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional129=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3!=((void*)0),            _if_conditional129) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
struct sType* right_type2_66;
struct sType* left_no_solved_generics_type_67;
struct sType* right_no_solved_generics_type_68;
_Bool _if_conditional130;
int __exception_result_var_b62;
_Bool _if_conditional131;
int __exception_result_var_b63;
int __exception_result_var_b64;
_Bool _if_conditional132;
int __exception_result_var_b65;
int __exception_result_var_b66;
int __exception_result_var_b67;
int __exception_result_var_b68;
int i_69;
int __exception_result_var_b69;
_Bool _for_condtionalA2;
struct sType* __exception_result_var_b71;
struct sType* __exception_result_var_b72;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool __exception_result_var_b73;
_Bool __exception_result_var_b74;
_Bool _if_conditional138;
_Bool __exception_result_var_b75;
_Bool __exception_result_var_b76;
_Bool _if_conditional139;
_Bool __exception_result_var_b77;
_Bool _if_conditional140;
int __exception_result_var_b78;
int __exception_result_var_b79;
int __exception_result_var_b80;
int __exception_result_var_b81;
_Bool _if_conditional141;
int __exception_result_var_b82;
int __exception_result_var_b83;
_Bool __exception_result_var_b84;
_Bool _if_conditional142;
int __exception_result_var_b85;
int __exception_result_var_b86;
_Bool _if_conditional143;
_Bool __exception_result_var_b87;
_Bool __exception_result_var_b88;
_Bool _if_conditional144;
_Bool __exception_result_var_b89;
_Bool __exception_result_var_b90;
_Bool _if_conditional145;
_Bool __exception_result_var_b91;
_Bool _if_conditional146;
int __exception_result_var_b92;
int __exception_result_var_b93;
void* right_value84;
void* right_value85;
struct buffer* __exception_result_var_b94;
struct buffer* buf2_73;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
struct buffer* __exception_result_var_b95;
void* right_value90;
char* __exception_result_var_b96;
char* __dec_obj38;
void* right_value91;
struct sType* __dec_obj39;
void* right_value92;
struct sType* __dec_obj40;
_Bool __exception_result_var_b97;
_Bool _if_conditional147;
_Bool __exception_result_var_b98;
_Bool _if_conditional148;
_Bool __exception_result_var_b99;
_Bool __exception_result_var_b100;
_Bool _if_conditional149;
_Bool __exception_result_var_b101;
_Bool __exception_result_var_b102;
_Bool _if_conditional150;
_Bool __exception_result_var_b103;
_Bool _if_conditional151;
int __exception_result_var_b104;
int __exception_result_var_b105;
_Bool __exception_result_var_b106;
_Bool _if_conditional152;
_Bool __exception_result_var_b107;
_Bool _if_conditional153;
int __exception_result_var_b108;
int __exception_result_var_b109;
void* right_value93;
char* __exception_result_var_b110;
char* method_name_74;
struct sFun* __exception_result_var_b114;
_Bool _if_conditional159;
struct sType* obj_type_78;
int __exception_result_var_b115;
_Bool _if_conditional160;
struct sType* obj_type2_79;
void* right_value95;
char* __exception_result_var_b116;
void* right_value96;
char* __exception_result_var_b117;
char* __dec_obj41;
void* right_value97;
void* right_value98;
struct buffer* __exception_result_var_b118;
struct buffer* buf2_80;
struct buffer* __exception_result_var_b119;
struct buffer* __exception_result_var_b120;
struct buffer* __exception_result_var_b121;
struct buffer* __exception_result_var_b122;
void* right_value99;
void* right_value100;
struct sType* __exception_result_var_b123;
struct sType* type_81;
void* right_value101;
char* __exception_result_var_b124;
void* right_value102;
char* __exception_result_var_b125;
char* __dec_obj42;
void* right_value103;
struct sType* __dec_obj43;
void* right_value104;
struct sType* __dec_obj44;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool __exception_result_var_b126;
_Bool __exception_result_var_b127;
_Bool _if_conditional163;
_Bool __exception_result_var_b128;
_Bool __exception_result_var_b129;
_Bool _if_conditional164;
_Bool __exception_result_var_b130;
_Bool _if_conditional165;
int __exception_result_var_b131;
int __exception_result_var_b132;
_Bool _if_conditional166;
int __exception_result_var_b133;
int __exception_result_var_b134;
int __exception_result_var_b135;
int __exception_result_var_b136;
_Bool _if_conditional167;
int __exception_result_var_b137;
int __exception_result_var_b138;
int __exception_result_var_b139;
int __exception_result_var_b140;
int __exception_result_var_b141;
_Bool __exception_result_var_b142;
_Bool __exception_result_var_b143;
_Bool _if_conditional168;
_Bool __exception_result_var_b144;
_Bool __exception_result_var_b145;
_Bool _if_conditional169;
_Bool __exception_result_var_b146;
_Bool __exception_result_var_b147;
_Bool _if_conditional170;
_Bool __exception_result_var_b148;
_Bool __exception_result_var_b149;
_Bool _if_conditional171;
int __exception_result_var_b150;
int __exception_result_var_b151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_type2_66, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_67, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_68, 0, sizeof(struct sType*));
memset(&i_69, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&buf2_73, 0, sizeof(struct buffer*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&method_name_74, 0, sizeof(char*));
memset(&obj_type_78, 0, sizeof(struct sType*));
memset(&obj_type2_79, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&buf2_80, 0, sizeof(struct buffer*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&type_81, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    # 312 "05function4.c"
    right_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    # 314 "05function4.c"
    left_no_solved_generics_type_67=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 314))->mNoSolvedGenericsType, "05function4.c", 314))->v1;
    # 315 "05function4.c"
    right_no_solved_generics_type_68=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 315))->mNoSolvedGenericsType, "05function4.c", 315))->v1;
    # 487 "05function4.c"
    # 317 "05function4.c"
    if(_if_conditional130=left_no_solved_generics_type_67&&right_no_solved_generics_type_68,    _if_conditional130) {
        # 332 "05function4.c"
        # 318 "05function4.c"
        if(_if_conditional131=(come_push_stackframe("05function4.c", 318),__exception_result_var_b62=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_67, "05function4.c", 318))->mGenericsTypes, "05function4.c", 318))), come_pop_stackframe(), __exception_result_var_b62)>0,        _if_conditional131) {
            # 326 "05function4.c"
            # 319 "05function4.c"
            if(_if_conditional132=(come_push_stackframe("05function4.c", 319),__exception_result_var_b63=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_67, "05function4.c", 319))->mGenericsTypes, "05function4.c", 319))), come_pop_stackframe(), __exception_result_var_b63)!=(come_push_stackframe("05function4.c", 319),__exception_result_var_b64=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_68, "05function4.c", 319))->mGenericsTypes, "05function4.c", 319))), come_pop_stackframe(), __exception_result_var_b64),            _if_conditional132) {
                # 320 "05function4.c"
                (come_push_stackframe("05function4.c", 320),err_msg(info,"generics type parametor number error"),come_pop_stackframe());
                # 321 "05function4.c"
                (come_push_stackframe("05function4.c", 321),__exception_result_var_b66=printf("left type generics type parametor number is %d\n",(come_push_stackframe("05function4.c", 321),__exception_result_var_b65=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_67, "05function4.c", 321))->mGenericsTypes, "05function4.c", 321))), come_pop_stackframe(), __exception_result_var_b65)), come_pop_stackframe(), __exception_result_var_b66);
                # 322 "05function4.c"
                (come_push_stackframe("05function4.c", 322),__exception_result_var_b68=printf("right type generics type parametor number is %d\n",(come_push_stackframe("05function4.c", 322),__exception_result_var_b67=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_68, "05function4.c", 322))->mGenericsTypes, "05function4.c", 322))), come_pop_stackframe(), __exception_result_var_b67)), come_pop_stackframe(), __exception_result_var_b68);
                # 323 "05function4.c"
                (come_push_stackframe("05function4.c", 323),exit(2),come_pop_stackframe());
            }
            # 330 "05function4.c"
            for(
            i_69=0 ,            0;            _for_condtionalA2=            i_69<(come_push_stackframe("05function4.c", 326),__exception_result_var_b69=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_67, "05function4.c", 326))->mGenericsTypes, "05function4.c", 326))), come_pop_stackframe(), __exception_result_var_b69) ,            _for_condtionalA2;            i_69++ ,            0            ){
                # 327 "05function4.c"
                (come_push_stackframe("05function4.c", 327),check_assign_type(msg,(come_push_stackframe("05function4.c", 327),__exception_result_var_b71=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(left_no_solved_generics_type_67, "05function4.c", 327))->mGenericsTypes,i_69), come_pop_stackframe(), __exception_result_var_b71),(come_push_stackframe("05function4.c", 327),__exception_result_var_b72=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_no_solved_generics_type_68, "05function4.c", 327))->mGenericsTypes,i_69), come_pop_stackframe(), __exception_result_var_b72),come_value,(_Bool)1,info),come_pop_stackframe());
            }
            # 330 "05function4.c"
            (come_push_stackframe("05function4.c", 330),check_assign_type(msg,left_no_solved_generics_type_67,right_no_solved_generics_type_68,come_value,(_Bool)0,info),come_pop_stackframe());
        }
    }
    else {
        # 487 "05function4.c"
        # 333 "05function4.c"
        if(_if_conditional135=check_no_pointer,        _if_conditional135) {
            # 366 "05function4.c"
            # 334 "05function4.c"
            if(_if_conditional136=((struct sType*)come_null_check(left_type, "05function4.c", 334))->mPointerNum>0,            _if_conditional136) {
                # 353 "05function4.c"
                # 335 "05function4.c"
                if(_if_conditional137=((struct sType*)come_null_check(right_type2_66, "05function4.c", 335))->mPointerNum>0,                _if_conditional137) {
                    # 346 "05function4.c"
                    # 336 "05function4.c"
                    if(_if_conditional138=(come_push_stackframe("05function4.c", 336),__exception_result_var_b73=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,"void"), come_pop_stackframe(), __exception_result_var_b73)||(come_push_stackframe("05function4.c", 336),__exception_result_var_b74=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,"void"), come_pop_stackframe(), __exception_result_var_b74),                    _if_conditional138) {
                    }
                    else {
                        # 346 "05function4.c"
                        # 338 "05function4.c"
                        if(_if_conditional139=(come_push_stackframe("05function4.c", 338),__exception_result_var_b75=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 338))->mClass, "05function4.c", 338))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b75)||(come_push_stackframe("05function4.c", 338),__exception_result_var_b76=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 338))->mClass, "05function4.c", 338))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b76),                        _if_conditional139) {
                        }
                        else {
                            # 346 "05function4.c"
                            # 340 "05function4.c"
                            if(_if_conditional140=(come_push_stackframe("05function4.c", 340),__exception_result_var_b77=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 340))->mClass, "05function4.c", 340))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 340))->mClass, "05function4.c", 340))->mName), come_pop_stackframe(), __exception_result_var_b77),                            _if_conditional140) {
                                # 341 "05function4.c"
                                (come_push_stackframe("05function4.c", 341),err_msg(info,"type error1"),come_pop_stackframe());
                                # 342 "05function4.c"
                                (come_push_stackframe("05function4.c", 342),__exception_result_var_b78=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 342))->mClass, "05function4.c", 342))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 342))->mPointerNum), come_pop_stackframe(), __exception_result_var_b78);
                                # 343 "05function4.c"
                                (come_push_stackframe("05function4.c", 343),__exception_result_var_b79=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 343))->mClass, "05function4.c", 343))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 343))->mPointerNum), come_pop_stackframe(), __exception_result_var_b79);
                                # 344 "05function4.c"
                                (come_push_stackframe("05function4.c", 344),exit(2),come_pop_stackframe());
                            }
                        }
                    }
                }
                else {
                    # 348 "05function4.c"
                    (come_push_stackframe("05function4.c", 348),err_msg(info,"type error2"),come_pop_stackframe());
                    # 349 "05function4.c"
                    (come_push_stackframe("05function4.c", 349),__exception_result_var_b80=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 349))->mClass, "05function4.c", 349))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 349))->mPointerNum), come_pop_stackframe(), __exception_result_var_b80);
                    # 350 "05function4.c"
                    (come_push_stackframe("05function4.c", 350),__exception_result_var_b81=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 350))->mClass, "05function4.c", 350))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 350))->mPointerNum), come_pop_stackframe(), __exception_result_var_b81);
                    # 351 "05function4.c"
                    (come_push_stackframe("05function4.c", 351),exit(2),come_pop_stackframe());
                }
            }
            else {
                # 366 "05function4.c"
                # 354 "05function4.c"
                if(_if_conditional141=((struct sType*)come_null_check(left_type, "05function4.c", 354))->mPointerNum==0&&((struct sType*)come_null_check(right_type2_66, "05function4.c", 354))->mPointerNum>0,                _if_conditional141) {
                    # 355 "05function4.c"
                    (come_push_stackframe("05function4.c", 355),err_msg(info,"type error3"),come_pop_stackframe());
                    # 356 "05function4.c"
                    (come_push_stackframe("05function4.c", 356),__exception_result_var_b82=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 356))->mClass, "05function4.c", 356))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 356))->mPointerNum), come_pop_stackframe(), __exception_result_var_b82);
                    # 357 "05function4.c"
                    (come_push_stackframe("05function4.c", 357),__exception_result_var_b83=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 357))->mClass, "05function4.c", 357))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 357))->mPointerNum), come_pop_stackframe(), __exception_result_var_b83);
                    # 358 "05function4.c"
                    (come_push_stackframe("05function4.c", 358),exit(2),come_pop_stackframe());
                }
                else {
                    # 366 "05function4.c"
                    # 360 "05function4.c"
                    if(_if_conditional142=(come_push_stackframe("05function4.c", 360),__exception_result_var_b84=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 360))->mClass, "05function4.c", 360))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 360))->mClass, "05function4.c", 360))->mName), come_pop_stackframe(), __exception_result_var_b84),                    _if_conditional142) {
                        # 361 "05function4.c"
                        (come_push_stackframe("05function4.c", 361),err_msg(info,"type error4"),come_pop_stackframe());
                        # 362 "05function4.c"
                        (come_push_stackframe("05function4.c", 362),__exception_result_var_b85=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 362))->mClass, "05function4.c", 362))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 362))->mPointerNum), come_pop_stackframe(), __exception_result_var_b85);
                        # 363 "05function4.c"
                        (come_push_stackframe("05function4.c", 363),__exception_result_var_b86=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 363))->mClass, "05function4.c", 363))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 363))->mPointerNum), come_pop_stackframe(), __exception_result_var_b86);
                        # 364 "05function4.c"
                        (come_push_stackframe("05function4.c", 364),exit(2),come_pop_stackframe());
                    }
                }
            }
        }
        else {
            # 487 "05function4.c"
            # 375 "05function4.c"
            if(_if_conditional143=!((struct sType*)come_null_check(left_type, "05function4.c", 375))->mNullValue&&((struct sType*)come_null_check(right_type2_66, "05function4.c", 375))->mNullValue,            _if_conditional143) {
                # 397 "05function4.c"
                # 376 "05function4.c"
                if(_if_conditional144=(come_push_stackframe("05function4.c", 376),__exception_result_var_b87=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 376))->mClass, "05function4.c", 376))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b87)||(come_push_stackframe("05function4.c", 376),__exception_result_var_b88=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 376))->mClass, "05function4.c", 376))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b88),                _if_conditional144) {
                }
                else {
                    # 397 "05function4.c"
                    # 378 "05function4.c"
                    if(_if_conditional145=(come_push_stackframe("05function4.c", 378),__exception_result_var_b89=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 378))->mClass, "05function4.c", 378))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b89)||(come_push_stackframe("05function4.c", 378),__exception_result_var_b90=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 378))->mClass, "05function4.c", 378))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b90),                    _if_conditional145) {
                    }
                    else {
                        # 397 "05function4.c"
                        # 380 "05function4.c"
                        if(_if_conditional146=(come_push_stackframe("05function4.c", 380),__exception_result_var_b91=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 380))->mClass, "05function4.c", 380))->mName,"void"), come_pop_stackframe(), __exception_result_var_b91)&&((struct sType*)come_null_check(right_type2_66, "05function4.c", 380))->mPointerNum==0,                        _if_conditional146) {
                            # 381 "05function4.c"
                            (come_push_stackframe("05function4.c", 381),err_msg(info,"type error6"),come_pop_stackframe());
                            # 382 "05function4.c"
                            (come_push_stackframe("05function4.c", 382),__exception_result_var_b92=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 382))->mClass, "05function4.c", 382))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 382))->mPointerNum), come_pop_stackframe(), __exception_result_var_b92);
                            # 383 "05function4.c"
                            (come_push_stackframe("05function4.c", 383),__exception_result_var_b93=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 383))->mClass, "05function4.c", 383))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 383))->mPointerNum), come_pop_stackframe(), __exception_result_var_b93);
                            # 384 "05function4.c"
                            (come_push_stackframe("05function4.c", 384),exit(2),come_pop_stackframe());
                        }
                        else {
                            # 387 "05function4.c"
                            buf2_73=(struct buffer*)come_increment_ref_count((come_push_stackframe("05function4.c", 387),__exception_result_var_b94=((struct buffer*)(right_value85=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value84=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387))))))), come_pop_stackframe(), __exception_result_var_b94));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
                            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value85;
                            __freed_obj__ = 0;
                            # 389 "05function4.c"
                            (come_push_stackframe("05function4.c", 389),__exception_result_var_b95=buffer_append_str(((struct buffer*)come_null_check(buf2_73, "05function4.c", 389)),((char*)(right_value89=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value86=string_to_string(((struct CVALUE*)come_null_check(come_value, "05function4.c", 389))->c_value))),((char*)(right_value87=string_to_string(((struct sInfo*)come_null_check(info, "05function4.c", 389))->sname))),((char*)(right_value88=int_to_string(((struct sInfo*)come_null_check(info, "05function4.c", 389))->sline))))))), come_pop_stackframe(), __exception_result_var_b95);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value86;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value87;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value88);
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value88;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value89);
                            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[5] = right_value89;
                            __freed_obj__ = 0;
                            # 391 "05function4.c"
                            __dec_obj38=((struct CVALUE*)come_null_check(come_value, "05function4.c", 391))->c_value;
                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 391))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 391),__exception_result_var_b96=((char*)(right_value90=buffer_to_string(((struct buffer*)come_null_check(buf2_73, "05function4.c", 391))))), come_pop_stackframe(), __exception_result_var_b96));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value90);
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[6] = right_value90;
                            __freed_obj__ = 0;
                            # 392 "05function4.c"
                            __dec_obj39=((struct CVALUE*)come_null_check(come_value, "05function4.c", 392))->type;
                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 392))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_type))));
                            if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value91);
                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[7] = right_value91;
                            __freed_obj__ = 0;
                            # 393 "05function4.c"
                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 393))->var=((void*)0);
                            # 395 "05function4.c"
                            __dec_obj40=right_type2_66;
                            right_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(left_type))));
                            if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[8] = right_value92;
                            __freed_obj__ = 0;
                            if(buf2_73 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
            }
            else {
                # 487 "05function4.c"
                # 398 "05function4.c"
                if(_if_conditional147=(come_push_stackframe("05function4.c", 398),__exception_result_var_b97=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 398))->mClass, "05function4.c", 398))->mName,"char"), come_pop_stackframe(), __exception_result_var_b97)&&((struct sType*)come_null_check(left_type, "05function4.c", 398))->mPointerNum==1,                _if_conditional147) {
                    # 450 "05function4.c"
                    # 399 "05function4.c"
                    if(_if_conditional148=(come_push_stackframe("05function4.c", 399),__exception_result_var_b98=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 399))->mClass, "05function4.c", 399))->mName,"char"), come_pop_stackframe(), __exception_result_var_b98)&&((struct sType*)come_null_check(right_type2_66, "05function4.c", 399))->mPointerNum==1,                    _if_conditional148) {
                    }
                    else {
                        # 450 "05function4.c"
                        # 401 "05function4.c"
                        if(_if_conditional149=(come_push_stackframe("05function4.c", 401),__exception_result_var_b99=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 401))->mClass, "05function4.c", 401))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b99)||(come_push_stackframe("05function4.c", 401),__exception_result_var_b100=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 401))->mClass, "05function4.c", 401))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b100),                        _if_conditional149) {
                        }
                        else {
                            # 450 "05function4.c"
                            # 403 "05function4.c"
                            if(_if_conditional150=(come_push_stackframe("05function4.c", 403),__exception_result_var_b101=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 403))->mClass, "05function4.c", 403))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b101)||(come_push_stackframe("05function4.c", 403),__exception_result_var_b102=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 403))->mClass, "05function4.c", 403))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b102),                            _if_conditional150) {
                            }
                            else {
                                # 450 "05function4.c"
                                # 405 "05function4.c"
                                if(_if_conditional151=(come_push_stackframe("05function4.c", 405),__exception_result_var_b103=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 405))->mClass, "05function4.c", 405))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b103),                                _if_conditional151) {
                                    # 406 "05function4.c"
                                    (come_push_stackframe("05function4.c", 406),err_msg(info,"type error6"),come_pop_stackframe());
                                    # 407 "05function4.c"
                                    (come_push_stackframe("05function4.c", 407),__exception_result_var_b104=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 407))->mClass, "05function4.c", 407))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 407))->mPointerNum), come_pop_stackframe(), __exception_result_var_b104);
                                    # 408 "05function4.c"
                                    (come_push_stackframe("05function4.c", 408),__exception_result_var_b105=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 408))->mClass, "05function4.c", 408))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 408))->mPointerNum), come_pop_stackframe(), __exception_result_var_b105);
                                    # 409 "05function4.c"
                                    (come_push_stackframe("05function4.c", 409),exit(2),come_pop_stackframe());
                                }
                                else {
                                    # 450 "05function4.c"
                                    # 411 "05function4.c"
                                    if(_if_conditional152=(come_push_stackframe("05function4.c", 411),__exception_result_var_b106=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 411))->mClass, "05function4.c", 411))->mName,"void"), come_pop_stackframe(), __exception_result_var_b106)&&((struct sType*)come_null_check(right_type2_66, "05function4.c", 411))->mPointerNum>0,                                    _if_conditional152) {
                                    }
                                    else {
                                        # 450 "05function4.c"
                                        # 413 "05function4.c"
                                        if(_if_conditional153=(come_push_stackframe("05function4.c", 413),__exception_result_var_b107=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 413))->mClass, "05function4.c", 413))->mName,"void"), come_pop_stackframe(), __exception_result_var_b107),                                        _if_conditional153) {
                                            # 414 "05function4.c"
                                            (come_push_stackframe("05function4.c", 414),err_msg(info,"type error6"),come_pop_stackframe());
                                            # 415 "05function4.c"
                                            (come_push_stackframe("05function4.c", 415),__exception_result_var_b108=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 415))->mClass, "05function4.c", 415))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 415))->mPointerNum), come_pop_stackframe(), __exception_result_var_b108);
                                            # 416 "05function4.c"
                                            (come_push_stackframe("05function4.c", 416),__exception_result_var_b109=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 416))->mClass, "05function4.c", 416))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 416))->mPointerNum), come_pop_stackframe(), __exception_result_var_b109);
                                            # 417 "05function4.c"
                                            (come_push_stackframe("05function4.c", 417),exit(2),come_pop_stackframe());
                                        }
                                        else {
                                            # 420 "05function4.c"
                                            method_name_74=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 420),__exception_result_var_b110=((char*)(right_value93=create_method_name(right_type2_66,(_Bool)0,"to_string",info))), come_pop_stackframe(), __exception_result_var_b110));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value93;
                                            __freed_obj__ = 0;
                                            # 434 "05function4.c"
                                            # 422 "05function4.c"
                                            if(_if_conditional159=(come_push_stackframe("05function4.c", 422),__exception_result_var_b114=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 422))->funcs, "05function4.c", 422)),method_name_74,((void*)0)), come_pop_stackframe(), __exception_result_var_b114)==((void*)0),                                            _if_conditional159) {
                                                # 423 "05function4.c"
                                                obj_type_78=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 423))->mNoSolvedGenericsType, "05function4.c", 423))->v1;
                                                # 432 "05function4.c"
                                                # 424 "05function4.c"
                                                if(_if_conditional160=obj_type_78&&(come_push_stackframe("05function4.c", 424),__exception_result_var_b115=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_78, "05function4.c", 424))->mGenericsTypes, "05function4.c", 424))), come_pop_stackframe(), __exception_result_var_b115)>0,                                                _if_conditional160) {
                                                    # 425 "05function4.c"
                                                    obj_type2_79=right_type2_66;
                                                    # 426 "05function4.c"
                                                    __dec_obj41=method_name_74;
                                                    method_name_74=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 426),__exception_result_var_b117=((char*)(right_value96=make_generics_function(obj_type2_79,(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 426),__exception_result_var_b116=((char*)(right_value95=__builtin_string("to_string"))), come_pop_stackframe(), __exception_result_var_b116)),info))), come_pop_stackframe(), __exception_result_var_b117));
                                                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                                                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value95;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
                                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value96;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    # 429 "05function4.c"
                                                    (come_push_stackframe("05function4.c", 429),err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 429))->mClass, "05function4.c", 429))->mName),come_pop_stackframe());
                                                    # 430 "05function4.c"
                                                    (come_push_stackframe("05function4.c", 430),exit(1),come_pop_stackframe());
                                                }
                                            }
                                            # 434 "05function4.c"
                                            buf2_80=(struct buffer*)come_increment_ref_count((come_push_stackframe("05function4.c", 434),__exception_result_var_b118=((struct buffer*)(right_value98=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value97=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434))))))), come_pop_stackframe(), __exception_result_var_b118));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
                                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value97;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value98);
                                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value98;
                                            __freed_obj__ = 0;
                                            # 436 "05function4.c"
                                            (come_push_stackframe("05function4.c", 436),__exception_result_var_b119=buffer_append_str(((struct buffer*)come_null_check(buf2_80, "05function4.c", 436)),method_name_74), come_pop_stackframe(), __exception_result_var_b119);
                                            # 437 "05function4.c"
                                            (come_push_stackframe("05function4.c", 437),__exception_result_var_b120=buffer_append_str(((struct buffer*)come_null_check(buf2_80, "05function4.c", 437)),"("), come_pop_stackframe(), __exception_result_var_b120);
                                            # 438 "05function4.c"
                                            (come_push_stackframe("05function4.c", 438),__exception_result_var_b121=buffer_append_str(((struct buffer*)come_null_check(buf2_80, "05function4.c", 438)),((struct CVALUE*)come_null_check(come_value, "05function4.c", 438))->c_value), come_pop_stackframe(), __exception_result_var_b121);
                                            # 439 "05function4.c"
                                            (come_push_stackframe("05function4.c", 439),__exception_result_var_b122=buffer_append_str(((struct buffer*)come_null_check(buf2_80, "05function4.c", 439)),")"), come_pop_stackframe(), __exception_result_var_b122);
                                            # 441 "05function4.c"
                                            type_81=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 441),__exception_result_var_b123=((struct sType*)(right_value100=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value99=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b123));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value99);
                                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value99;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value100);
                                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[4] = right_value100;
                                            __freed_obj__ = 0;
                                            # 442 "05function4.c"
                                            ((struct sType*)come_null_check(type_81, "05function4.c", 442))->mHeap=(_Bool)1;
                                            # 444 "05function4.c"
                                            __dec_obj42=((struct CVALUE*)come_null_check(come_value, "05function4.c", 444))->c_value;
                                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 444))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 444),__exception_result_var_b125=((char*)(right_value102=append_object_to_right_values((come_push_stackframe("05function4.c", 444),__exception_result_var_b124=((char*)(right_value101=buffer_to_string(((struct buffer*)come_null_check(buf2_80, "05function4.c", 444))))), come_pop_stackframe(), __exception_result_var_b124),(struct sType*)come_increment_ref_count(type_81),info))), come_pop_stackframe(), __exception_result_var_b125));
                                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value101);
                                            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[5] = right_value101;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value102);
                                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[6] = right_value102;
                                            __freed_obj__ = 0;
                                            # 445 "05function4.c"
                                            __dec_obj43=((struct CVALUE*)come_null_check(come_value, "05function4.c", 445))->type;
                                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 445))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(type_81))));
                                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value103);
                                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[7] = right_value103;
                                            __freed_obj__ = 0;
                                            # 446 "05function4.c"
                                            ((struct CVALUE*)come_null_check(come_value, "05function4.c", 446))->var=((void*)0);
                                            # 448 "05function4.c"
                                            __dec_obj44=right_type2_66;
                                            right_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(type_81))));
                                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value104);
                                            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[8] = right_value104;
                                            __freed_obj__ = 0;
                                            if(method_name_74 && !__freed_obj__) { method_name_74 = come_decrement_ref_count(method_name_74, (void*)0, (void*)0, 0, 0, 0); }
                                            if(buf2_80 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    # 487 "05function4.c"
                    # 451 "05function4.c"
                    if(_if_conditional161=((struct sType*)come_null_check(left_type, "05function4.c", 451))->mPointerNum>0,                    _if_conditional161) {
                        # 486 "05function4.c"
                        # 452 "05function4.c"
                        if(_if_conditional162=((struct sType*)come_null_check(right_type2_66, "05function4.c", 452))->mPointerNum>0,                        _if_conditional162) {
                            # 473 "05function4.c"
                            # 453 "05function4.c"
                            if(_if_conditional163=(come_push_stackframe("05function4.c", 453),__exception_result_var_b126=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 453))->mClass, "05function4.c", 453))->mName,"void"), come_pop_stackframe(), __exception_result_var_b126)||(come_push_stackframe("05function4.c", 453),__exception_result_var_b127=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 453))->mClass, "05function4.c", 453))->mName,"void"), come_pop_stackframe(), __exception_result_var_b127),                            _if_conditional163) {
                            }
                            else {
                                # 473 "05function4.c"
                                # 455 "05function4.c"
                                if(_if_conditional164=(come_push_stackframe("05function4.c", 455),__exception_result_var_b128=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 455))->mClass, "05function4.c", 455))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b128)||(come_push_stackframe("05function4.c", 455),__exception_result_var_b129=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 455))->mClass, "05function4.c", 455))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b129),                                _if_conditional164) {
                                }
                                else {
                                    # 473 "05function4.c"
                                    # 457 "05function4.c"
                                    if(_if_conditional165=(come_push_stackframe("05function4.c", 457),__exception_result_var_b130=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 457))->mClass, "05function4.c", 457))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 457))->mClass, "05function4.c", 457))->mName), come_pop_stackframe(), __exception_result_var_b130),                                    _if_conditional165) {
                                        # 458 "05function4.c"
                                        (come_push_stackframe("05function4.c", 458),err_msg(info,"type error5"),come_pop_stackframe());
                                        # 459 "05function4.c"
                                        (come_push_stackframe("05function4.c", 459),__exception_result_var_b131=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 459))->mClass, "05function4.c", 459))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 459))->mPointerNum), come_pop_stackframe(), __exception_result_var_b131);
                                        # 460 "05function4.c"
                                        (come_push_stackframe("05function4.c", 460),__exception_result_var_b132=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 460))->mClass, "05function4.c", 460))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 460))->mPointerNum), come_pop_stackframe(), __exception_result_var_b132);
                                        # 461 "05function4.c"
                                        (come_push_stackframe("05function4.c", 461),exit(2),come_pop_stackframe());
                                    }
                                    else {
                                        # 473 "05function4.c"
                                        # 463 "05function4.c"
                                        if(_if_conditional166=((struct sType*)come_null_check(left_type, "05function4.c", 463))->mPointerNum!=((struct sType*)come_null_check(right_type2_66, "05function4.c", 463))->mPointerNum,                                        _if_conditional166) {
                                            # 464 "05function4.c"
                                            (come_push_stackframe("05function4.c", 464),__exception_result_var_b133=printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 464))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 464))->sline), come_pop_stackframe(), __exception_result_var_b133);
                                            # 465 "05function4.c"
                                            (come_push_stackframe("05function4.c", 465),__exception_result_var_b134=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 465))->mClass, "05function4.c", 465))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 465))->mPointerNum), come_pop_stackframe(), __exception_result_var_b134);
                                            # 466 "05function4.c"
                                            (come_push_stackframe("05function4.c", 466),__exception_result_var_b135=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 466))->mClass, "05function4.c", 466))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 466))->mPointerNum), come_pop_stackframe(), __exception_result_var_b135);
                                        }
                                        else {
                                            # 473 "05function4.c"
                                            # 468 "05function4.c"
                                            if(_if_conditional167=(come_push_stackframe("05function4.c", 468),__exception_result_var_b136=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 468))->mArrayNum, "05function4.c", 468))), come_pop_stackframe(), __exception_result_var_b136)>0,                                            _if_conditional167) {
                                                # 469 "05function4.c"
                                                (come_push_stackframe("05function4.c", 469),__exception_result_var_b137=printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 469))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 469))->sline), come_pop_stackframe(), __exception_result_var_b137);
                                                # 470 "05function4.c"
                                                (come_push_stackframe("05function4.c", 470),__exception_result_var_b139=printf("left type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 470))->mClass, "05function4.c", 470))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 470))->mPointerNum,(come_push_stackframe("05function4.c", 470),__exception_result_var_b138=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 470))->mArrayNum, "05function4.c", 470))), come_pop_stackframe(), __exception_result_var_b138)), come_pop_stackframe(), __exception_result_var_b139);
                                                # 471 "05function4.c"
                                                (come_push_stackframe("05function4.c", 471),__exception_result_var_b141=printf("right type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 471))->mClass, "05function4.c", 471))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 471))->mPointerNum,(come_push_stackframe("05function4.c", 471),__exception_result_var_b140=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 471))->mArrayNum, "05function4.c", 471))), come_pop_stackframe(), __exception_result_var_b140)), come_pop_stackframe(), __exception_result_var_b141);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            # 486 "05function4.c"
                            # 474 "05function4.c"
                            if(_if_conditional168=(come_push_stackframe("05function4.c", 474),__exception_result_var_b142=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 474))->mClass, "05function4.c", 474))->mName,"void"), come_pop_stackframe(), __exception_result_var_b142)||(come_push_stackframe("05function4.c", 474),__exception_result_var_b143=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 474))->mClass, "05function4.c", 474))->mName,"void"), come_pop_stackframe(), __exception_result_var_b143),                            _if_conditional168) {
                            }
                            else {
                                # 486 "05function4.c"
                                # 476 "05function4.c"
                                if(_if_conditional169=(come_push_stackframe("05function4.c", 476),__exception_result_var_b144=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 476))->mClass, "05function4.c", 476))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b144)||(come_push_stackframe("05function4.c", 476),__exception_result_var_b145=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 476))->mClass, "05function4.c", 476))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b145),                                _if_conditional169) {
                                }
                                else {
                                    # 486 "05function4.c"
                                    # 478 "05function4.c"
                                    if(_if_conditional170=(come_push_stackframe("05function4.c", 478),__exception_result_var_b146=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 478))->mClass, "05function4.c", 478))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b146)||(come_push_stackframe("05function4.c", 478),__exception_result_var_b147=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 478))->mClass, "05function4.c", 478))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b147),                                    _if_conditional170) {
                                    }
                                    else {
                                        # 486 "05function4.c"
                                        # 480 "05function4.c"
                                        if(_if_conditional171=!((come_push_stackframe("05function4.c", 480),__exception_result_var_b148=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 480))->mClass, "05function4.c", 480))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b148)&&(come_push_stackframe("05function4.c", 480),__exception_result_var_b149=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 480))->mClass, "05function4.c", 480))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b149))&&((struct sType*)come_null_check(right_type2_66, "05function4.c", 480))->mPointerNum==0,                                        _if_conditional171) {
                                            # 481 "05function4.c"
                                            (come_push_stackframe("05function4.c", 481),err_msg(info,"type error6"),come_pop_stackframe());
                                            # 482 "05function4.c"
                                            (come_push_stackframe("05function4.c", 482),__exception_result_var_b150=printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 482))->mClass, "05function4.c", 482))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 482))->mPointerNum), come_pop_stackframe(), __exception_result_var_b150);
                                            # 483 "05function4.c"
                                            (come_push_stackframe("05function4.c", 483),__exception_result_var_b151=printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_66, "05function4.c", 483))->mClass, "05function4.c", 483))->mName,((struct sType*)come_null_check(right_type2_66, "05function4.c", 483))->mPointerNum), come_pop_stackframe(), __exception_result_var_b151);
                                            # 484 "05function4.c"
                                            (come_push_stackframe("05function4.c", 484),exit(2),come_pop_stackframe());
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
    if(right_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 417 "./comelang2.h"
            __result54__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 417))->len;
            return __result54__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
struct list_item$1sTypeph* it_70;
int i_71;
_Bool _while_condtional24;
_Bool _if_conditional134;
struct sType* __result55__;
struct sType* default_value_72;
void* __exception_result_var_b70;
struct sType* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_71, 0, sizeof(int));
memset(&default_value_72, 0, sizeof(struct sType*));
                    # 745 "./comelang2.h"
                    # 741 "./comelang2.h"
                    if(_if_conditional133=position<0,                    _if_conditional133) {
                        # 742 "./comelang2.h"
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 742))->len;
                    }
                    # 745 "./comelang2.h"
                    it_70=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 745))->head;
                    # 746 "./comelang2.h"
                    i_71=0;
                    # 753 "./comelang2.h"
                    while(_while_condtional24=it_70!=((void*)0),                    _while_condtional24) {
                        # 751 "./comelang2.h"
                        # 748 "./comelang2.h"
                        if(_if_conditional134=position==i_71,                        _if_conditional134) {
                            # 749 "./comelang2.h"
                            __result55__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(it_70, "./comelang2.h", 749))->item;
                            return __result55__;
                        }
                        # 751 "./comelang2.h"
                        it_70=((struct list_item$1sTypeph*)come_null_check(it_70, "./comelang2.h", 751))->next;
                        # 752 "./comelang2.h"
                        i_71++;
                    }
                    # 755 "./comelang2.h"
                    # 756 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b70=memset(&default_value_72,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b70);
                    # 757 "./comelang2.h"
                    __result56__ = __result_obj__ = default_value_72;
                    if(default_value_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_72, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result56__;
                    if(default_value_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b111;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional25;
_Bool _if_conditional154;
void* right_value94;
struct optional$2boolbool* __exception_result_var_b112;
_Bool _if_conditional156;
struct sFun* __result59__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sFun* __result60__;
struct sFun* __result61__;
struct sFun* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
memset(&right_value94, 0, sizeof(void*));
                                                # 1265 "./comelang2.h"
                                                hash_75=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b111=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b111)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1265))->size;
                                                # 1266 "./comelang2.h"
                                                it_76=hash_75;
                                                # 1290 "./comelang2.h"
                                                while(_while_condtional25=(_Bool)1,                                                _while_condtional25) {
                                                    # 1288 "./comelang2.h"
                                                    # 1269 "./comelang2.h"
                                                    if(_if_conditional154=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_76],                                                    _if_conditional154) {
                                                        # 1276 "./comelang2.h"
                                                        # 1271 "./comelang2.h"
                                                        if(_if_conditional156=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b112=((struct optional$2boolbool*)(right_value94=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_76], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b112)),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94),
                                                        (right_value94 && right_value94 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value94, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional156) {
                                                            # 1273 "./comelang2.h"
                                                            __result59__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1273))->items[it_76];
                                                            return __result59__;
                                                        }
                                                        # 1276 "./comelang2.h"
                                                        it_76++;
                                                        # 1284 "./comelang2.h"
                                                        # 1278 "./comelang2.h"
                                                        if(_if_conditional157=it_76>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1278))->size,                                                        _if_conditional157) {
                                                            # 1279 "./comelang2.h"
                                                            it_76=0;
                                                        }
                                                        else {
                                                            # 1284 "./comelang2.h"
                                                            # 1281 "./comelang2.h"
                                                            if(_if_conditional158=it_76==hash_75,                                                            _if_conditional158) {
                                                                # 1282 "./comelang2.h"
                                                                __result60__ = __result_obj__ = default_value;
                                                                return __result60__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 1286 "./comelang2.h"
                                                        __result61__ = __result_obj__ = default_value;
                                                        return __result61__;
                                                    }
                                                }
                                                # 1290 "./comelang2.h"
                                                __result62__ = __result_obj__ = default_value;
                                                return __result62__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
_Bool default_value_77;
void* __exception_result_var_b113;
_Bool __result57__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_77, 0, sizeof(_Bool));
                                                            # 69 "./comelang2.h"
                                                            # 61 "./comelang2.h"
                                                            if(_if_conditional155=self==((void*)0),                                                            _if_conditional155) {
                                                                # 62 "./comelang2.h"
                                                                # 63 "./comelang2.h"
                                                                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b113=memset(&default_value_77,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b113);
                                                                # 64 "./comelang2.h"
                                                                __result57__ = default_value_77;
                                                                return __result57__;
                                                            }
                                                            else {
                                                                # 67 "./comelang2.h"
                                                                __result58__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                                                                return __result58__;
                                                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 417 "./comelang2.h"
                                                __result63__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 417))->len;
                                                return __result63__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
struct sType* result_type_82;
_Bool _if_conditional172;
char* var_name_83;
char* p_84;
int sline_85;
_Bool __exception_result_var_b152;
_Bool _if_conditional173;
void* right_value106;
char* __exception_result_var_b153;
char* word_86;
_Bool __exception_result_var_b154;
_Bool __exception_result_var_b155;
_Bool __exception_result_var_b156;
_Bool __exception_result_var_b157;
_Bool __exception_result_var_b158;
_Bool __exception_result_var_b159;
_Bool __exception_result_var_b160;
_Bool __exception_result_var_b161;
_Bool __exception_result_var_b162;
_Bool _if_conditional174;
_Bool between_brace_87;
char* p_88;
int sline_89;
_Bool _if_conditional175;
_Bool __exception_result_var_b163;
_Bool _if_conditional176;
void* right_value107;
char* __exception_result_var_b164;
char* word_90;
_Bool __exception_result_var_b165;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _while_condtional26;
char* p_91;
int sline_92;
_Bool __exception_result_var_b166;
_Bool _if_conditional180;
void* right_value108;
char* __exception_result_var_b167;
char* word_93;
_Bool __exception_result_var_b168;
_Bool __exception_result_var_b169;
_Bool __exception_result_var_b170;
_Bool __exception_result_var_b171;
_Bool __exception_result_var_b172;
_Bool __exception_result_var_b173;
_Bool __exception_result_var_b174;
_Bool __exception_result_var_b175;
_Bool __exception_result_var_b176;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool __exception_result_var_b177;
_Bool _if_conditional183;
void* right_value109;
char* __exception_result_var_b178;
char* __dec_obj45;
static int num_anonymous_var_name_94=0;
void* right_value110;
char* __exception_result_var_b179;
char* __dec_obj46;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool no_comma_95;
void* right_value111;
struct sNode* __exception_result_var_b180;
struct sNode* node_96;
struct sNode* __dec_obj47;
_Bool _while_condtional27;
char* p_97;
int sline_98;
_Bool __exception_result_var_b181;
_Bool _if_conditional186;
void* right_value112;
char* __exception_result_var_b182;
char* word_99;
_Bool __exception_result_var_b183;
_Bool __exception_result_var_b184;
_Bool __exception_result_var_b185;
_Bool __exception_result_var_b186;
_Bool __exception_result_var_b187;
_Bool __exception_result_var_b188;
_Bool __exception_result_var_b189;
_Bool __exception_result_var_b190;
_Bool __exception_result_var_b191;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value113;
struct sNode* __exception_result_var_b192;
struct sNode* node_100;
struct list$1sNodeph* __exception_result_var_b193;
int __exception_result_var_b194;
void* right_value117;
void* right_value120;
struct tuple2$2sTypephcharph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&result_type_82, 0, sizeof(struct sType*));
memset(&var_name_83, 0, sizeof(char*));
memset(&p_84, 0, sizeof(char*));
memset(&sline_85, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&word_86, 0, sizeof(char*));
memset(&between_brace_87, 0, sizeof(_Bool));
memset(&p_88, 0, sizeof(char*));
memset(&sline_89, 0, sizeof(int));
memset(&right_value107, 0, sizeof(void*));
memset(&word_90, 0, sizeof(char*));
memset(&p_91, 0, sizeof(char*));
memset(&sline_92, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&word_93, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&no_comma_95, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&node_96, 0, sizeof(struct sNode*));
memset(&p_97, 0, sizeof(char*));
memset(&sline_98, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&word_99, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&node_100, 0, sizeof(struct sNode*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    # 491 "05function4.c"
    result_type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
    __freed_obj__ = 0;
    # 495 "05function4.c"
    # 492 "05function4.c"
    if(_if_conditional172=!first,    _if_conditional172) {
        # 493 "05function4.c"
        ((struct sType*)come_null_check(result_type_82, "05function4.c", 493))->mPointerNum=0;
    }
    # 495 "05function4.c"
    var_name_83=((void*)0);
    # 517 "05function4.c"
    {
        # 498 "05function4.c"
        p_84=((struct sInfo*)come_null_check(info, "05function4.c", 498))->p;
        # 499 "05function4.c"
        sline_85=((struct sInfo*)come_null_check(info, "05function4.c", 499))->sline;
        # 515 "05function4.c"
        # 501 "05function4.c"
        if(_if_conditional173=(come_push_stackframe("05function4.c", 501),__exception_result_var_b152=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 501))->p), come_pop_stackframe(), __exception_result_var_b152)||*((struct sInfo*)come_null_check(info, "05function4.c", 501))->p==95,        _if_conditional173) {
            # 502 "05function4.c"
            word_86=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 502),__exception_result_var_b153=((char*)(right_value106=parse_word(info))), come_pop_stackframe(), __exception_result_var_b153));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = 0;
            # 510 "05function4.c"
            # 504 "05function4.c"
            if(_if_conditional174=(come_push_stackframe("05function4.c", 504),__exception_result_var_b154=string_operator_equals(word_86,"const"), come_pop_stackframe(), __exception_result_var_b154)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b155=string_operator_equals(word_86,"__restrict"), come_pop_stackframe(), __exception_result_var_b155)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b156=string_operator_equals(word_86,"restrict"), come_pop_stackframe(), __exception_result_var_b156)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b157=string_operator_equals(word_86,"__user"), come_pop_stackframe(), __exception_result_var_b157)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b158=string_operator_equals(word_86,"volatile"), come_pop_stackframe(), __exception_result_var_b158)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b159=string_operator_equals(word_86,"_Nonnull"), come_pop_stackframe(), __exception_result_var_b159)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b160=string_operator_equals(word_86,"_Nullable"), come_pop_stackframe(), __exception_result_var_b160)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b161=string_operator_equals(word_86,"_Null_unspecified"), come_pop_stackframe(), __exception_result_var_b161)||(come_push_stackframe("05function4.c", 504),__exception_result_var_b162=string_operator_equals(word_86,"__user"), come_pop_stackframe(), __exception_result_var_b162),            _if_conditional174) {
            }
            else {
                # 507 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 507))->p=p_84;
                # 508 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 508))->sline=sline_85;
            }
            if(word_86 && !__freed_obj__) { word_86 = come_decrement_ref_count(word_86, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 512 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 512))->p=p_84;
            # 513 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 513))->sline=sline_85;
        }
    }
    # 517 "05function4.c"
    between_brace_87=(_Bool)0;
    # 546 "05function4.c"
    {
        # 519 "05function4.c"
        p_88=((struct sInfo*)come_null_check(info, "05function4.c", 519))->p;
        # 520 "05function4.c"
        sline_89=((struct sInfo*)come_null_check(info, "05function4.c", 520))->sline;
        # 542 "05function4.c"
        # 522 "05function4.c"
        if(_if_conditional175=*((struct sInfo*)come_null_check(info, "05function4.c", 522))->p==40,        _if_conditional175) {
            # 523 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 523))->p++;
            # 524 "05function4.c"
            (come_push_stackframe("05function4.c", 524),skip_spaces_and_lf(info),come_pop_stackframe());
            # 540 "05function4.c"
            # 526 "05function4.c"
            if(_if_conditional176=(come_push_stackframe("05function4.c", 526),__exception_result_var_b163=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 526))->p), come_pop_stackframe(), __exception_result_var_b163)||*((struct sInfo*)come_null_check(info, "05function4.c", 526))->p==95,            _if_conditional176) {
                # 527 "05function4.c"
                word_90=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 527),__exception_result_var_b164=((char*)(right_value107=parse_word(info))), come_pop_stackframe(), __exception_result_var_b164));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
                # 539 "05function4.c"
                # 529 "05function4.c"
                if(_if_conditional177=(come_push_stackframe("05function4.c", 529),__exception_result_var_b165=is_type_name(word_90,info), come_pop_stackframe(), __exception_result_var_b165),                _if_conditional177) {
                }
                else {
                    # 539 "05function4.c"
                    # 531 "05function4.c"
                    if(_if_conditional178=*((struct sInfo*)come_null_check(info, "05function4.c", 531))->p==41,                    _if_conditional178) {
                        # 532 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 532))->p++;
                        # 533 "05function4.c"
                        (come_push_stackframe("05function4.c", 533),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 538 "05function4.c"
                        # 535 "05function4.c"
                        if(_if_conditional179=*((struct sInfo*)come_null_check(info, "05function4.c", 535))->p!=40,                        _if_conditional179) {
                            # 536 "05function4.c"
                            between_brace_87=(_Bool)1;
                        }
                    }
                }
                if(word_90 && !__freed_obj__) { word_90 = come_decrement_ref_count(word_90, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        # 542 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 542))->p=p_88;
        # 543 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 543))->sline=sline_89;
    }
    # 546 "05function4.c"
    (come_push_stackframe("05function4.c", 546),parse_sharp_v5(info),come_pop_stackframe());
    # 573 "05function4.c"
    while(_while_condtional26=*((struct sInfo*)come_null_check(info, "05function4.c", 547))->p==42,    _while_condtional26) {
        # 548 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 548))->p++;
        # 549 "05function4.c"
        (come_push_stackframe("05function4.c", 549),skip_spaces_and_lf(info),come_pop_stackframe());
        # 571 "05function4.c"
        {
            # 552 "05function4.c"
            p_91=((struct sInfo*)come_null_check(info, "05function4.c", 552))->p;
            # 553 "05function4.c"
            sline_92=((struct sInfo*)come_null_check(info, "05function4.c", 553))->sline;
            # 569 "05function4.c"
            # 555 "05function4.c"
            if(_if_conditional180=(come_push_stackframe("05function4.c", 555),__exception_result_var_b166=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 555))->p), come_pop_stackframe(), __exception_result_var_b166)||*((struct sInfo*)come_null_check(info, "05function4.c", 555))->p==95,            _if_conditional180) {
                # 556 "05function4.c"
                word_93=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 556),__exception_result_var_b167=((char*)(right_value108=parse_word(info))), come_pop_stackframe(), __exception_result_var_b167));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value108;
                __freed_obj__ = 0;
                # 564 "05function4.c"
                # 558 "05function4.c"
                if(_if_conditional181=(come_push_stackframe("05function4.c", 558),__exception_result_var_b168=string_operator_equals(word_93,"const"), come_pop_stackframe(), __exception_result_var_b168)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b169=string_operator_equals(word_93,"__restrict"), come_pop_stackframe(), __exception_result_var_b169)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b170=string_operator_equals(word_93,"restrict"), come_pop_stackframe(), __exception_result_var_b170)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b171=string_operator_equals(word_93,"__user"), come_pop_stackframe(), __exception_result_var_b171)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b172=string_operator_equals(word_93,"volatile"), come_pop_stackframe(), __exception_result_var_b172)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b173=string_operator_equals(word_93,"_Nonnull"), come_pop_stackframe(), __exception_result_var_b173)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b174=string_operator_equals(word_93,"_Nullable"), come_pop_stackframe(), __exception_result_var_b174)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b175=string_operator_equals(word_93,"_Null_unspecified"), come_pop_stackframe(), __exception_result_var_b175)||(come_push_stackframe("05function4.c", 558),__exception_result_var_b176=string_operator_equals(word_93,"__user"), come_pop_stackframe(), __exception_result_var_b176),                _if_conditional181) {
                }
                else {
                    # 561 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 561))->p=p_91;
                    # 562 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 562))->sline=sline_92;
                }
                if(word_93 && !__freed_obj__) { word_93 = come_decrement_ref_count(word_93, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 566 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 566))->p=p_91;
                # 567 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 567))->sline=sline_92;
            }
        }
        # 571 "05function4.c"
        ((struct sType*)come_null_check(result_type_82, "05function4.c", 571))->mPointerNum++;
    }
    # 573 "05function4.c"
    (come_push_stackframe("05function4.c", 573),parse_sharp_v5(info),come_pop_stackframe());
    # 580 "05function4.c"
    # 575 "05function4.c"
    if(_if_conditional182=between_brace_87&&*((struct sInfo*)come_null_check(info, "05function4.c", 575))->p==40,    _if_conditional182) {
        # 576 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 576))->p++;
        # 577 "05function4.c"
        (come_push_stackframe("05function4.c", 577),skip_spaces_and_lf(info),come_pop_stackframe());
    }
    # 589 "05function4.c"
    # 580 "05function4.c"
    if(_if_conditional183=(come_push_stackframe("05function4.c", 580),__exception_result_var_b177=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 580))->p), come_pop_stackframe(), __exception_result_var_b177)||*((struct sInfo*)come_null_check(info, "05function4.c", 580))->p==95,    _if_conditional183) {
        # 581 "05function4.c"
        __dec_obj45=var_name_83;
        var_name_83=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 581),__exception_result_var_b178=((char*)(right_value109=parse_word(info))), come_pop_stackframe(), __exception_result_var_b178));
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = 0;
    }
    else {
        # 584 "05function4.c"
        # 585 "05function4.c"
        num_anonymous_var_name_94++;
        # 586 "05function4.c"
        __dec_obj46=var_name_83;
        var_name_83=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 586),__exception_result_var_b179=((char*)(right_value110=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_94))), come_pop_stackframe(), __exception_result_var_b179));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value110;
        __freed_obj__ = 0;
    }
    # 594 "05function4.c"
    # 589 "05function4.c"
    if(_if_conditional184=between_brace_87&&*((struct sInfo*)come_null_check(info, "05function4.c", 589))->p==41,    _if_conditional184) {
        # 590 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 590))->p++;
        # 591 "05function4.c"
        (come_push_stackframe("05function4.c", 591),skip_spaces_and_lf(info),come_pop_stackframe());
    }
    # 606 "05function4.c"
    # 594 "05function4.c"
    if(_if_conditional185=*((struct sInfo*)come_null_check(info, "05function4.c", 594))->p==58,    _if_conditional185) {
        # 595 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 595))->p++;
        # 596 "05function4.c"
        (come_push_stackframe("05function4.c", 596),skip_spaces_and_lf(info),come_pop_stackframe());
        # 598 "05function4.c"
        no_comma_95=((struct sInfo*)come_null_check(info, "05function4.c", 598))->no_comma;
        # 599 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 599))->no_comma=(_Bool)1;
        # 600 "05function4.c"
        node_96=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 600),__exception_result_var_b180=((struct sNode*)(right_value111=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b180));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        # 601 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 601))->no_comma=no_comma_95;
        # 603 "05function4.c"
        __dec_obj47=((struct sType*)come_null_check(result_type_82, "05function4.c", 603))->mSizeNum;
        ((struct sType*)come_null_check(result_type_82, "05function4.c", 603))->mSizeNum=(struct sNode*)come_increment_ref_count(node_96);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
        if(node_96 && !__freed_obj__) { node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0, 0); } 
    }
    # 647 "05function4.c"
    while(_while_condtional27=*((struct sInfo*)come_null_check(info, "05function4.c", 606))->p==91,    _while_condtional27) {
        # 607 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 607))->p++;
        # 608 "05function4.c"
        (come_push_stackframe("05function4.c", 608),skip_spaces_and_lf(info),come_pop_stackframe());
        # 609 "05function4.c"
        (come_push_stackframe("05function4.c", 609),parse_sharp_v5(info),come_pop_stackframe());
        # 631 "05function4.c"
        {
            # 612 "05function4.c"
            p_97=((struct sInfo*)come_null_check(info, "05function4.c", 612))->p;
            # 613 "05function4.c"
            sline_98=((struct sInfo*)come_null_check(info, "05function4.c", 613))->sline;
            # 629 "05function4.c"
            # 615 "05function4.c"
            if(_if_conditional186=(come_push_stackframe("05function4.c", 615),__exception_result_var_b181=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 615))->p), come_pop_stackframe(), __exception_result_var_b181)||*((struct sInfo*)come_null_check(info, "05function4.c", 615))->p==95,            _if_conditional186) {
                # 616 "05function4.c"
                word_99=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 616),__exception_result_var_b182=((char*)(right_value112=parse_word(info))), come_pop_stackframe(), __exception_result_var_b182));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value112;
                __freed_obj__ = 0;
                # 624 "05function4.c"
                # 618 "05function4.c"
                if(_if_conditional187=(come_push_stackframe("05function4.c", 618),__exception_result_var_b183=string_operator_equals(word_99,"const"), come_pop_stackframe(), __exception_result_var_b183)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b184=string_operator_equals(word_99,"__restrict"), come_pop_stackframe(), __exception_result_var_b184)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b185=string_operator_equals(word_99,"restrict"), come_pop_stackframe(), __exception_result_var_b185)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b186=string_operator_equals(word_99,"__user"), come_pop_stackframe(), __exception_result_var_b186)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b187=string_operator_equals(word_99,"volatile"), come_pop_stackframe(), __exception_result_var_b187)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b188=string_operator_equals(word_99,"_Nonnull"), come_pop_stackframe(), __exception_result_var_b188)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b189=string_operator_equals(word_99,"_Nullable"), come_pop_stackframe(), __exception_result_var_b189)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b190=string_operator_equals(word_99,"_Null_unspecified"), come_pop_stackframe(), __exception_result_var_b190)||(come_push_stackframe("05function4.c", 618),__exception_result_var_b191=string_operator_equals(word_99,"__user"), come_pop_stackframe(), __exception_result_var_b191),                _if_conditional187) {
                }
                else {
                    # 621 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 621))->p=p_97;
                    # 622 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 622))->sline=sline_98;
                }
                if(word_99 && !__freed_obj__) { word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 626 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 626))->p=p_97;
                # 627 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 627))->sline=sline_98;
            }
        }
        # 638 "05function4.c"
        # 631 "05function4.c"
        if(_if_conditional188=*((struct sInfo*)come_null_check(info, "05function4.c", 631))->p==93,        _if_conditional188) {
            # 632 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 632))->p++;
            # 633 "05function4.c"
            (come_push_stackframe("05function4.c", 633),skip_spaces_and_lf(info),come_pop_stackframe());
            # 635 "05function4.c"
            ((struct sType*)come_null_check(result_type_82, "05function4.c", 635))->mPointerNum++;
            # 636 "05function4.c"
            break;
        }
        # 638 "05function4.c"
        (come_push_stackframe("05function4.c", 638),parse_sharp_v5(info),come_pop_stackframe());
        # 640 "05function4.c"
        node_100=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 640),__exception_result_var_b192=((struct sNode*)(right_value113=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b192));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value113;
        __freed_obj__ = 0;
        # 641 "05function4.c"
        (come_push_stackframe("05function4.c", 641),__exception_result_var_b193=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_82, "05function4.c", 641))->mArrayNum, "05function4.c", 641)),(struct sNode*)come_increment_ref_count(node_100)), come_pop_stackframe(), __exception_result_var_b193);
        # 642 "05function4.c"
        (come_push_stackframe("05function4.c", 642),parse_sharp_v5(info),come_pop_stackframe());
        # 644 "05function4.c"
        (come_push_stackframe("05function4.c", 644),__exception_result_var_b194=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b194);
        if(node_100 && !__freed_obj__) { node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 0, 0); } 
    }
    # 647 "05function4.c"
    __result66__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value120=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value117=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647)))),(struct sType*)come_increment_ref_count(result_type_82),(char*)come_increment_ref_count(var_name_83))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_83 && !__freed_obj__) { var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value117;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value120;
    __freed_obj__ = 0;
    return __result66__;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_83 && !__freed_obj__) { var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
void* right_value114;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj48;
_Bool _if_conditional190;
void* right_value115;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj49;
void* right_value116;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
            # 309 "./comelang2.h"
            # 278 "./comelang2.h"
            if(_if_conditional189=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->len==0,            _if_conditional189) {
                # 279 "./comelang2.h"
                litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 279))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = 0;
                # 281 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 281))->prev=((void*)0);
                # 282 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 282))->next=((void*)0);
                # 283 "./comelang2.h"
                __dec_obj48=((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 283))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_101, "./comelang2.h", 283))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                # 285 "./comelang2.h"
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_101;
                # 286 "./comelang2.h"
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 286))->head=litem_101;
            }
            else {
                # 309 "./comelang2.h"
                # 288 "./comelang2.h"
                if(_if_conditional190=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->len==1,                _if_conditional190) {
                    # 289 "./comelang2.h"
                    litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 289))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = 0;
                    # 291 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 291))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 291))->head;
                    # 292 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 292))->next=((void*)0);
                    # 293 "./comelang2.h"
                    __dec_obj49=((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 293))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_102, "./comelang2.h", 293))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    # 295 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_102;
                    # 296 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_102;
                }
                else {
                    # 299 "./comelang2.h"
                    litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 299))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                    # 301 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(litem_103, "./comelang2.h", 301))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 301))->tail;
                    # 302 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(litem_103, "./comelang2.h", 302))->next=((void*)0);
                    # 303 "./comelang2.h"
                    __dec_obj50=((struct list_item$1sNodeph*)come_null_check(litem_103, "./comelang2.h", 303))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_103, "./comelang2.h", 303))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
                    # 305 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_103;
                    # 306 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_103;
                }
            }
            # 309 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 309))->len++;
            # 311 "./comelang2.h"
            __result64__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            return __result64__;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
struct sType* __dec_obj51;
void* right_value119;
char* __dec_obj52;
struct tuple2$2sTypephcharph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
        # 1814 "./comelang2.h"
        __dec_obj51=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1814))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1814))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(v1))));
        if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value118;
        __freed_obj__ = 0;
        # 1815 "./comelang2.h"
        __dec_obj52=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1815))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1815))->v2=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(v2))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value119;
        __freed_obj__ = 0;
        # 1817 "./comelang2.h"
        __result65__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result65__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional191=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1!=((void*)0),            _if_conditional191) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional192=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2!=((void*)0),            _if_conditional192) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_104;
int sline_105;
_Bool __exception_result_var_b195;
_Bool _if_conditional193;
void* right_value121;
char* __exception_result_var_b196;
char* word_106;
_Bool __exception_result_var_b197;
_Bool __exception_result_var_b198;
_Bool __exception_result_var_b199;
_Bool __exception_result_var_b200;
_Bool __exception_result_var_b201;
_Bool __exception_result_var_b202;
_Bool __exception_result_var_b203;
_Bool __exception_result_var_b204;
_Bool __exception_result_var_b205;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_104, 0, sizeof(char*));
memset(&sline_105, 0, sizeof(int));
memset(&right_value121, 0, sizeof(void*));
memset(&word_106, 0, sizeof(char*));
    # 652 "05function4.c"
    p_104=((struct sInfo*)come_null_check(info, "05function4.c", 652))->p;
    # 653 "05function4.c"
    sline_105=((struct sInfo*)come_null_check(info, "05function4.c", 653))->sline;
    # 669 "05function4.c"
    # 655 "05function4.c"
    if(_if_conditional193=(come_push_stackframe("05function4.c", 655),__exception_result_var_b195=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 655))->p), come_pop_stackframe(), __exception_result_var_b195)||*((struct sInfo*)come_null_check(info, "05function4.c", 655))->p==95,    _if_conditional193) {
        # 656 "05function4.c"
        word_106=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 656),__exception_result_var_b196=((char*)(right_value121=parse_word(info))), come_pop_stackframe(), __exception_result_var_b196));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = 0;
        # 664 "05function4.c"
        # 658 "05function4.c"
        if(_if_conditional194=(come_push_stackframe("05function4.c", 658),__exception_result_var_b197=string_operator_equals(word_106,"const"), come_pop_stackframe(), __exception_result_var_b197)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b198=string_operator_equals(word_106,"__restrict"), come_pop_stackframe(), __exception_result_var_b198)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b199=string_operator_equals(word_106,"restrict"), come_pop_stackframe(), __exception_result_var_b199)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b200=string_operator_equals(word_106,"__user"), come_pop_stackframe(), __exception_result_var_b200)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b201=string_operator_equals(word_106,"volatile"), come_pop_stackframe(), __exception_result_var_b201)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b202=string_operator_equals(word_106,"_Nonnull"), come_pop_stackframe(), __exception_result_var_b202)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b203=string_operator_equals(word_106,"_Nullable"), come_pop_stackframe(), __exception_result_var_b203)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b204=string_operator_equals(word_106,"_Null_unspecified"), come_pop_stackframe(), __exception_result_var_b204)||(come_push_stackframe("05function4.c", 658),__exception_result_var_b205=string_operator_equals(word_106,"__user"), come_pop_stackframe(), __exception_result_var_b205),        _if_conditional194) {
        }
        else {
            # 661 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 661))->p=p_104;
            # 662 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 662))->sline=sline_105;
        }
        if(word_106 && !__freed_obj__) { word_106 = come_decrement_ref_count(word_106, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 666 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 666))->p=p_104;
        # 667 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 667))->sline=sline_105;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_107;
int head_sline_108;
void* right_value122;
char* __exception_result_var_b206;
char* type_name_109;
_Bool __exception_result_var_b207;
_Bool _while_condtional28;
void* right_value123;
char* __exception_result_var_b208;
char* __dec_obj53;
_Bool constant_110;
_Bool static__111;
_Bool exception__112;
_Bool volatile__113;
_Bool register__114;
_Bool unsigned__115;
_Bool long__116;
_Bool long_long_117;
_Bool short__118;
_Bool restrict__119;
_Bool struct__120;
_Bool union__121;
_Bool enum__122;
_Bool no_heap_123;
_Bool extern__124;
_Bool inline__125;
_Bool come_mem_core__126;
struct sNode* alignas__127;
_Bool anonymous_type_128;
_Bool anonymous_name_129;
_Bool _while_condtional29;
_Bool __exception_result_var_b209;
_Bool _if_conditional195;
_Bool _if_conditional196;
char* p_130;
int sline_131;
void* right_value124;
char* __exception_result_var_b210;
_Bool _if_conditional197;
void* right_value125;
char* __exception_result_var_b211;
char* __dec_obj54;
void* right_value126;
char* __exception_result_var_b212;
char* __dec_obj55;
void* right_value127;
char* __exception_result_var_b213;
char* __dec_obj56;
_Bool _if_conditional198;
char* p_132;
int sline_133;
_Bool _while_condtional30;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value128;
void* right_value131;
struct tuple3$3sTypephcharphbool* __exception_result_var_b214;
struct tuple3$3sTypephcharphbool* __result68__;
_Bool _if_conditional202;
char* p_134;
int sline_135;
void* right_value132;
char* __exception_result_var_b215;
_Bool _if_conditional203;
void* right_value133;
void* right_value134;
struct tuple3$3sTypephcharphbool* __exception_result_var_b216;
struct tuple3$3sTypephcharphbool* __result69__;
_Bool __exception_result_var_b217;
_Bool _if_conditional204;
_Bool _if_conditional205;
char* p_136;
int sline_137;
void* right_value135;
char* __exception_result_var_b218;
_Bool _if_conditional206;
void* right_value136;
char* __exception_result_var_b219;
char* __dec_obj59;
void* right_value137;
char* __exception_result_var_b220;
char* __dec_obj60;
void* right_value138;
char* __exception_result_var_b221;
char* __dec_obj61;
_Bool _if_conditional207;
char* p_138;
int sline_139;
void* right_value139;
char* __exception_result_var_b222;
_Bool _if_conditional208;
void* right_value140;
void* right_value141;
struct tuple3$3sTypephcharphbool* __exception_result_var_b223;
struct tuple3$3sTypephcharphbool* __result70__;
_Bool __exception_result_var_b224;
_Bool _if_conditional209;
_Bool _if_conditional210;
char* p_140;
int sline_141;
void* right_value142;
char* __exception_result_var_b225;
_Bool _if_conditional211;
void* right_value143;
void* right_value144;
struct tuple3$3sTypephcharphbool* __exception_result_var_b226;
struct tuple3$3sTypephcharphbool* __result71__;
void* right_value145;
char* __exception_result_var_b227;
char* __dec_obj62;
void* right_value146;
char* __exception_result_var_b228;
char* __dec_obj63;
_Bool _if_conditional212;
char* p_142;
int sline_143;
void* right_value147;
char* __exception_result_var_b229;
_Bool _if_conditional213;
void* right_value148;
void* right_value149;
struct tuple3$3sTypephcharphbool* __exception_result_var_b230;
struct tuple3$3sTypephcharphbool* __result72__;
_Bool __exception_result_var_b231;
_Bool _if_conditional214;
int __exception_result_var_b232;
void* right_value150;
struct sNode* __exception_result_var_b233;
struct sNode* exp_144;
struct sNode* __dec_obj64;
int __exception_result_var_b234;
void* right_value151;
char* __exception_result_var_b235;
char* __dec_obj65;
_Bool __exception_result_var_b236;
_Bool _if_conditional215;
void* right_value152;
char* __exception_result_var_b237;
char* __dec_obj66;
_Bool __exception_result_var_b238;
_Bool _if_conditional216;
void* right_value153;
char* __exception_result_var_b239;
char* __dec_obj67;
_Bool __exception_result_var_b240;
_Bool _if_conditional217;
void* right_value154;
char* __exception_result_var_b241;
char* __dec_obj68;
_Bool __exception_result_var_b242;
_Bool _if_conditional218;
void* right_value155;
char* __exception_result_var_b243;
char* __dec_obj69;
_Bool __exception_result_var_b244;
_Bool _if_conditional219;
void* right_value156;
char* __exception_result_var_b245;
char* __dec_obj70;
_Bool __exception_result_var_b246;
_Bool _if_conditional220;
void* right_value157;
char* __exception_result_var_b247;
char* __dec_obj71;
_Bool __exception_result_var_b248;
_Bool __exception_result_var_b249;
_Bool __exception_result_var_b250;
_Bool __exception_result_var_b251;
_Bool _if_conditional221;
void* right_value158;
char* __exception_result_var_b252;
char* __dec_obj72;
_Bool __exception_result_var_b253;
_Bool _if_conditional222;
void* right_value159;
char* __exception_result_var_b254;
char* __dec_obj73;
_Bool __exception_result_var_b255;
_Bool _if_conditional223;
char* p_145;
int sline_146;
_Bool __exception_result_var_b256;
_Bool _if_conditional224;
void* right_value160;
char* __exception_result_var_b257;
char* __dec_obj74;
void* right_value161;
char* __exception_result_var_b258;
char* __dec_obj75;
_Bool __exception_result_var_b259;
_Bool _if_conditional225;
void* right_value162;
char* __exception_result_var_b260;
char* __dec_obj76;
_Bool __exception_result_var_b261;
_Bool _if_conditional226;
_Bool __exception_result_var_b262;
_Bool _if_conditional227;
_Bool __exception_result_var_b263;
_Bool _if_conditional228;
void* right_value163;
char* __exception_result_var_b264;
char* __dec_obj77;
_Bool __exception_result_var_b265;
_Bool _if_conditional229;
_Bool __exception_result_var_b266;
_Bool _if_conditional230;
void* right_value164;
char* __exception_result_var_b267;
char* __dec_obj78;
_Bool __exception_result_var_b268;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value165;
char* __exception_result_var_b269;
char* __dec_obj79;
_Bool __exception_result_var_b270;
_Bool _if_conditional233;
_Bool __exception_result_var_b271;
_Bool _if_conditional234;
char* p_147;
int sline_148;
void* right_value166;
char* __exception_result_var_b272;
char* __dec_obj80;
_Bool __exception_result_var_b273;
_Bool _if_conditional235;
_Bool __exception_result_var_b274;
_Bool _if_conditional236;
char* p_149;
int sline_150;
void* right_value167;
char* __exception_result_var_b275;
char* __dec_obj81;
_Bool __exception_result_var_b276;
_Bool _if_conditional237;
void* right_value168;
char* __exception_result_var_b277;
char* __dec_obj82;
void* right_value169;
char* __exception_result_var_b278;
char* __dec_obj83;
_Bool __exception_result_var_b279;
_Bool _if_conditional238;
_Bool __exception_result_var_b280;
_Bool _if_conditional239;
char* p_151;
int sline_152;
void* right_value170;
char* __exception_result_var_b281;
char* __dec_obj84;
_Bool __exception_result_var_b282;
_Bool _if_conditional240;
void* right_value171;
char* __exception_result_var_b283;
char* __dec_obj85;
void* right_value172;
char* __exception_result_var_b284;
char* __dec_obj86;
_Bool __exception_result_var_b285;
_Bool _if_conditional241;
void* right_value173;
char* __exception_result_var_b286;
char* __dec_obj87;
void* right_value174;
char* __exception_result_var_b287;
char* __dec_obj88;
_Bool __exception_result_var_b288;
_Bool __exception_result_var_b289;
_Bool _if_conditional242;
void* right_value175;
char* __exception_result_var_b290;
char* __dec_obj89;
_Bool __exception_result_var_b291;
_Bool _if_conditional243;
void* right_value176;
char* __exception_result_var_b292;
char* __dec_obj90;
_Bool __exception_result_var_b293;
_Bool _if_conditional244;
void* right_value177;
char* __exception_result_var_b294;
char* __dec_obj91;
_Bool __exception_result_var_b295;
_Bool _if_conditional245;
void* right_value178;
char* __exception_result_var_b296;
char* __dec_obj92;
_Bool __exception_result_var_b297;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool __exception_result_var_b298;
_Bool _if_conditional248;
char* p_153;
int sline_154;
void* right_value179;
char* __exception_result_var_b299;
char* __dec_obj93;
_Bool __exception_result_var_b300;
_Bool _if_conditional249;
_Bool __exception_result_var_b301;
_Bool _if_conditional250;
_Bool __exception_result_var_b302;
_Bool _if_conditional251;
void* right_value180;
char* __exception_result_var_b303;
char* __dec_obj94;
int pointer_num_155;
_Bool _while_condtional31;
_Bool lambda_flag_156;
char* pX_157;
int slineX_158;
_Bool __exception_result_var_b304;
_Bool _if_conditional252;
void* right_value181;
char* __exception_result_var_b305;
_Bool _if_conditional253;
struct sType* type_159;
char* var_name_160;
_Bool function_pointer_flag_161;
char* p_162;
int sline_163;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool __exception_result_var_b306;
_Bool _if_conditional256;
void* right_value182;
char* __exception_result_var_b307;
char* word_164;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool var_name_between_brace_165;
char* p_166;
int sline_167;
_Bool _if_conditional259;
_Bool __exception_result_var_b308;
_Bool _if_conditional260;
void* right_value183;
char* __exception_result_var_b309;
char* word_168;
_Bool __exception_result_var_b310;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
static int anonymous_num_169=0;
_Bool _if_conditional265;
_Bool __exception_result_var_b311;
_Bool _if_conditional266;
void* right_value184;
char* __exception_result_var_b312;
char* __dec_obj95;
void* right_value185;
struct sNode* __exception_result_var_b313;
struct sNode* node_170;
_Bool __exception_result_var_b314;
_Bool _if_conditional267;
void* right_value186;
void* right_value187;
struct tuple3$3sTypephcharphbool* __exception_result_var_b315;
struct tuple3$3sTypephcharphbool* __result73__;
int pointer_num_171;
_Bool _while_condtional32;
void* right_value188;
void* right_value189;
struct sType* __exception_result_var_b316;
struct sType* __dec_obj96;
_Bool _if_conditional268;
_Bool __exception_result_var_b317;
_Bool _if_conditional269;
void* right_value190;
char* __exception_result_var_b318;
char* __dec_obj97;
void* right_value191;
struct sNode* __exception_result_var_b319;
struct sNode* node_172;
_Bool _if_conditional270;
_Bool __exception_result_var_b320;
_Bool _if_conditional271;
int __exception_result_var_b321;
void* right_value192;
void* right_value193;
struct tuple3$3sTypephcharphbool* __exception_result_var_b322;
struct tuple3$3sTypephcharphbool* __result74__;
void* right_value194;
void* right_value195;
struct sType* __exception_result_var_b323;
struct sType* __dec_obj98;
_Bool _if_conditional272;
_Bool __exception_result_var_b324;
_Bool _if_conditional273;
void* right_value196;
char* __exception_result_var_b325;
char* __dec_obj99;
void* right_value197;
struct sNode* __exception_result_var_b326;
struct sNode* node_173;
_Bool __exception_result_var_b327;
_Bool _if_conditional274;
int __exception_result_var_b328;
void* right_value198;
void* right_value199;
struct tuple3$3sTypephcharphbool* __exception_result_var_b329;
struct tuple3$3sTypephcharphbool* __result75__;
int pointer_num_174;
_Bool _while_condtional33;
void* right_value200;
void* right_value201;
struct sType* __exception_result_var_b330;
struct sType* __dec_obj100;
void* right_value202;
void* right_value203;
struct tuple3$3sTypephcharphbool* __exception_result_var_b331;
struct tuple3$3sTypephcharphbool* __result76__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value204;
char* __exception_result_var_b332;
char* __dec_obj101;
_Bool _if_conditional278;
static int num_anonymous_var_name_175=0;
void* right_value205;
char* __exception_result_var_b333;
char* __dec_obj102;
_Bool __exception_result_var_b334;
_Bool _if_conditional279;
void* right_value206;
char* __exception_result_var_b335;
char* __dec_obj103;
static int num_anonymous_var_name_176=0;
void* right_value207;
char* __exception_result_var_b336;
char* __dec_obj104;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool no_comma_177;
void* right_value208;
struct sNode* __exception_result_var_b337;
struct sNode* node_178;
struct sNode* __dec_obj105;
_Bool _if_conditional282;
struct sType* result_type_179;
struct sType* __exception_result_var_b341;
_Bool _if_conditional287;
struct sType* __exception_result_var_b342;
void* right_value212;
struct sType* __dec_obj106;
_Bool __exception_result_var_b351;
_Bool _if_conditional293;
int i_188;
int __exception_result_var_b352;
_Bool _for_condtionalA4;
char* __exception_result_var_b354;
_Bool __exception_result_var_b355;
_Bool _if_conditional296;
void* right_value213;
void* right_value214;
char* __exception_result_var_b356;
void* right_value215;
struct sType* __exception_result_var_b357;
struct sType* __dec_obj107;
void* right_value216;
void* right_value217;
struct sType* __exception_result_var_b358;
struct sType* __dec_obj108;
struct sNode* __dec_obj109;
void* right_value218;
char* __exception_result_var_b359;
char* __dec_obj110;
void* right_value219;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __exception_result_var_b360;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_192;
struct list$1charph* param_names_193;
struct list$1charph* param_default_parametors_194;
_Bool var_args_195;
void* right_value220;
void* right_value221;
struct sType* __exception_result_var_b361;
struct sType* __dec_obj111;
void* right_value222;
void* right_value224;
struct tuple1$1sTypeph* __exception_result_var_b362;
struct tuple1$1sTypeph* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct sType* result_type_196;
struct sType* __exception_result_var_b363;
_Bool _if_conditional299;
struct sType* __exception_result_var_b364;
void* right_value225;
struct sType* __dec_obj116;
_Bool __exception_result_var_b365;
_Bool _if_conditional300;
int i_197;
int __exception_result_var_b366;
_Bool _for_condtionalA5;
char* __exception_result_var_b367;
_Bool __exception_result_var_b368;
_Bool _if_conditional301;
void* right_value226;
void* right_value227;
char* __exception_result_var_b369;
void* right_value228;
struct sType* __exception_result_var_b370;
struct sType* __dec_obj117;
void* right_value229;
void* right_value230;
struct sType* __exception_result_var_b371;
struct sType* __dec_obj118;
struct sNode* __dec_obj119;
_Bool __exception_result_var_b372;
_Bool _if_conditional302;
void* right_value231;
char* __exception_result_var_b373;
char* __dec_obj120;
_Bool _if_conditional303;
void* right_value232;
void* right_value233;
struct tuple3$3sTypephcharphbool* __exception_result_var_b374;
struct tuple3$3sTypephcharphbool* __result95__;
static int num_anonymous_var_name_198=0;
void* right_value234;
char* __exception_result_var_b375;
char* __dec_obj121;
int __exception_result_var_b376;
void* right_value235;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __exception_result_var_b377;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_199;
struct list$1charph* param_names_200;
struct list$1charph* param_default_parametors_201;
_Bool var_args_202;
void* right_value236;
void* right_value237;
struct sType* __exception_result_var_b378;
struct sType* __dec_obj122;
void* right_value238;
void* right_value239;
struct tuple1$1sTypeph* __exception_result_var_b379;
struct tuple1$1sTypeph* __dec_obj123;
struct list$1sTypeph* __dec_obj124;
struct list$1charph* __dec_obj125;
_Bool __exception_result_var_b380;
_Bool _if_conditional304;
void* right_value240;
struct sNode* __exception_result_var_b381;
struct sNode* exp_203;
int __exception_result_var_b382;
_Bool __exception_result_var_b383;
_Bool _if_conditional305;
void* right_value241;
void* right_value242;
struct tuple3$3sTypephcharphbool* __result97__;
void* right_value243;
struct CVALUE* __exception_result_var_b384;
struct CVALUE* come_value_204;
void* right_value244;
struct sType* __dec_obj126;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value245;
char* __exception_result_var_b385;
char* __dec_obj127;
_Bool _if_conditional311;
static int num_anonymous_var_name_205=0;
void* right_value246;
char* __exception_result_var_b386;
char* __dec_obj128;
_Bool __exception_result_var_b387;
_Bool _if_conditional312;
void* right_value247;
char* __exception_result_var_b388;
char* __dec_obj129;
static int num_anonymous_var_name_206=0;
void* right_value248;
char* __exception_result_var_b389;
char* __dec_obj130;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool no_comma_207;
void* right_value249;
struct sNode* __exception_result_var_b390;
struct sNode* node_208;
struct sNode* __dec_obj131;
struct sType* __exception_result_var_b391;
_Bool _if_conditional315;
struct sType* __exception_result_var_b392;
void* right_value250;
struct sType* __dec_obj132;
void* right_value251;
char* __exception_result_var_b393;
char* __dec_obj133;
struct sNode* __dec_obj134;
_Bool __exception_result_var_b394;
_Bool _if_conditional316;
int i_209;
int __exception_result_var_b395;
_Bool _for_condtionalA6;
char* __exception_result_var_b396;
_Bool __exception_result_var_b397;
_Bool _if_conditional317;
void* right_value252;
void* right_value253;
char* __exception_result_var_b398;
void* right_value254;
struct sType* __exception_result_var_b399;
struct sType* __dec_obj135;
struct sNode* __dec_obj136;
_Bool _if_conditional318;
struct sClass* __exception_result_var_b403;
_Bool _if_conditional323;
void* right_value258;
void* right_value259;
struct tuple3$3sTypephcharphbool* __exception_result_var_b404;
struct tuple3$3sTypephcharphbool* __result103__;
void* right_value260;
void* right_value261;
struct sType* __exception_result_var_b405;
struct sType* __dec_obj137;
_Bool _while_condtional37;
void* right_value262;
struct tuple3$3sTypephcharphbool* __exception_result_var_b406;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_213;
char* var_name_214;
_Bool err_215;
_Bool _if_conditional324;
void* right_value263;
void* right_value264;
struct tuple3$3sTypephcharphbool* __exception_result_var_b407;
struct tuple3$3sTypephcharphbool* __result104__;
struct list$1sTypeph* __exception_result_var_b408;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value265;
void* right_value266;
struct tuple3$3sTypephcharphbool* __exception_result_var_b409;
struct tuple3$3sTypephcharphbool* __result105__;
_Bool __exception_result_var_b410;
_Bool _if_conditional327;
void* right_value267;
struct sType* __exception_result_var_b411;
struct sType* __dec_obj138;
_Bool __exception_result_var_b412;
_Bool _if_conditional328;
void* right_value268;
char* __exception_result_var_b413;
char* new_name_216;
int __exception_result_var_b414;
struct sNode* __dec_obj139;
_Bool _if_conditional329;
struct sClass* __exception_result_var_b415;
struct sClass* klass_217;
_Bool _if_conditional330;
void* right_value279;
void* right_value280;
struct sClass* __exception_result_var_b447;
struct map$2charphsClassph* __exception_result_var_b448;
void* right_value281;
void* right_value282;
struct sType* __exception_result_var_b449;
struct sType* __dec_obj140;
struct sNode* __dec_obj141;
_Bool _while_condtional47;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _while_condtional48;
_Bool _if_conditional391;
_Bool _if_conditional392;
void* right_value283;
void* right_value284;
struct list$1sTypeph* __exception_result_var_b450;
struct list$1sTypeph* types_264;
void* right_value285;
struct list$1sTypeph* __exception_result_var_b451;
_Bool _while_condtional49;
void* right_value286;
struct tuple3$3sTypephcharphbool* __exception_result_var_b452;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_265;
char* name_266;
_Bool err_267;
_Bool _if_conditional393;
void* right_value287;
void* right_value288;
struct tuple3$3sTypephcharphbool* __exception_result_var_b453;
struct tuple3$3sTypephcharphbool* __result130__;
void* right_value289;
struct list$1sTypeph* __exception_result_var_b454;
int __exception_result_var_b455;
int num_tuples_268;
void* right_value290;
void* right_value291;
char* __exception_result_var_b456;
void* right_value292;
struct sType* __exception_result_var_b457;
struct sType* __dec_obj142;
struct list$1sTypeph* o2_saved_269;
struct sType* __exception_result_var_b458;
struct sType* it_270;
_Bool __exception_result_var_b459;
_Bool _for_condtionalA9;
struct sType* __exception_result_var_b460;
void* right_value293;
struct list$1sTypeph* __exception_result_var_b461;
_Bool __exception_result_var_b462;
_Bool _if_conditional394;
void* right_value294;
struct sType* __exception_result_var_b463;
struct sType* __dec_obj143;
_Bool __exception_result_var_b464;
_Bool _if_conditional395;
void* right_value295;
char* __exception_result_var_b465;
char* new_name_271;
int __exception_result_var_b466;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value296;
char* __exception_result_var_b467;
char* __dec_obj144;
_Bool _if_conditional399;
static int num_anonymous_var_name_272=0;
void* right_value297;
char* __exception_result_var_b468;
char* __dec_obj145;
_Bool __exception_result_var_b469;
_Bool _if_conditional400;
void* right_value298;
char* __exception_result_var_b470;
char* __dec_obj146;
static int num_anonymous_var_name_273=0;
void* right_value299;
char* __exception_result_var_b471;
char* __dec_obj147;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool no_comma_274;
void* right_value300;
struct sNode* __exception_result_var_b472;
struct sNode* node_275;
struct sNode* __dec_obj148;
_Bool _while_condtional50;
_Bool _if_conditional403;
void* right_value301;
struct sNode* __exception_result_var_b473;
struct sNode* node_276;
struct list$1sNodeph* __exception_result_var_b474;
int __exception_result_var_b475;
void* right_value302;
char* __exception_result_var_b476;
char* asm_name_277;
char* __dec_obj149;
_Bool _if_conditional404;
void* right_value303;
void* right_value304;
struct sType* __exception_result_var_b477;
struct sType* type2_278;
struct list$1sTypeph* __exception_result_var_b478;
void* right_value305;
void* right_value306;
struct sType* __exception_result_var_b479;
struct list$1sTypeph* __exception_result_var_b480;
_Bool __exception_result_var_b481;
_Bool _if_conditional405;
_Bool __exception_result_var_b482;
_Bool _if_conditional406;
void* right_value307;
void* right_value308;
struct tuple3$3sTypephcharphbool* __exception_result_var_b483;
struct tuple3$3sTypephcharphbool* __result131__;
void* right_value309;
void* right_value310;
struct tuple3$3sTypephcharphbool* __exception_result_var_b484;
struct tuple3$3sTypephcharphbool* __result132__;
void* right_value311;
void* right_value312;
struct tuple3$3sTypephcharphbool* __exception_result_var_b485;
struct tuple3$3sTypephcharphbool* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_107, 0, sizeof(char*));
memset(&head_sline_108, 0, sizeof(int));
memset(&right_value122, 0, sizeof(void*));
memset(&type_name_109, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&constant_110, 0, sizeof(_Bool));
memset(&static__111, 0, sizeof(_Bool));
memset(&exception__112, 0, sizeof(_Bool));
memset(&volatile__113, 0, sizeof(_Bool));
memset(&register__114, 0, sizeof(_Bool));
memset(&unsigned__115, 0, sizeof(_Bool));
memset(&long__116, 0, sizeof(_Bool));
memset(&long_long_117, 0, sizeof(_Bool));
memset(&short__118, 0, sizeof(_Bool));
memset(&restrict__119, 0, sizeof(_Bool));
memset(&struct__120, 0, sizeof(_Bool));
memset(&union__121, 0, sizeof(_Bool));
memset(&enum__122, 0, sizeof(_Bool));
memset(&no_heap_123, 0, sizeof(_Bool));
memset(&extern__124, 0, sizeof(_Bool));
memset(&inline__125, 0, sizeof(_Bool));
memset(&come_mem_core__126, 0, sizeof(_Bool));
memset(&alignas__127, 0, sizeof(struct sNode*));
memset(&anonymous_type_128, 0, sizeof(_Bool));
memset(&anonymous_name_129, 0, sizeof(_Bool));
memset(&p_130, 0, sizeof(char*));
memset(&sline_131, 0, sizeof(int));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&p_142, 0, sizeof(char*));
memset(&sline_143, 0, sizeof(int));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&exp_144, 0, sizeof(struct sNode*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&p_145, 0, sizeof(char*));
memset(&sline_146, 0, sizeof(int));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&p_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
memset(&right_value166, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&pointer_num_155, 0, sizeof(int));
memset(&lambda_flag_156, 0, sizeof(_Bool));
memset(&pX_157, 0, sizeof(char*));
memset(&slineX_158, 0, sizeof(int));
memset(&right_value181, 0, sizeof(void*));
memset(&type_159, 0, sizeof(struct sType*));
memset(&var_name_160, 0, sizeof(char*));
memset(&function_pointer_flag_161, 0, sizeof(_Bool));
memset(&p_162, 0, sizeof(char*));
memset(&sline_163, 0, sizeof(int));
memset(&right_value182, 0, sizeof(void*));
memset(&word_164, 0, sizeof(char*));
memset(&var_name_between_brace_165, 0, sizeof(_Bool));
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
memset(&right_value183, 0, sizeof(void*));
memset(&word_168, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&node_170, 0, sizeof(struct sNode*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&pointer_num_171, 0, sizeof(int));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&node_173, 0, sizeof(struct sNode*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&pointer_num_174, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&no_comma_177, 0, sizeof(_Bool));
memset(&right_value208, 0, sizeof(void*));
memset(&node_178, 0, sizeof(struct sNode*));
memset(&result_type_179, 0, sizeof(struct sType*));
memset(&right_value212, 0, sizeof(void*));
memset(&i_188, 0, sizeof(int));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&param_types_192, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_193, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_194, 0, sizeof(struct list$1charph*));
memset(&var_args_195, 0, sizeof(_Bool));
memset(&param_types_192, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_193, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_194, 0, sizeof(struct list$1charph*));
memset(&var_args_195, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&result_type_196, 0, sizeof(struct sType*));
memset(&right_value225, 0, sizeof(void*));
memset(&i_197, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&param_types_199, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_200, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_201, 0, sizeof(struct list$1charph*));
memset(&var_args_202, 0, sizeof(_Bool));
memset(&param_types_199, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_200, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_201, 0, sizeof(struct list$1charph*));
memset(&var_args_202, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&exp_203, 0, sizeof(struct sNode*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&come_value_204, 0, sizeof(struct CVALUE*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&no_comma_207, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&node_208, 0, sizeof(struct sNode*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&i_209, 0, sizeof(int));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&generics_type_213, 0, sizeof(struct sType*));
memset(&var_name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&generics_type_213, 0, sizeof(struct sType*));
memset(&var_name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&new_name_216, 0, sizeof(char*));
memset(&klass_217, 0, sizeof(struct sClass*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&types_264, 0, sizeof(struct list$1sTypeph*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&type2_265, 0, sizeof(struct sType*));
memset(&name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
memset(&type2_265, 0, sizeof(struct sType*));
memset(&name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&num_tuples_268, 0, sizeof(int));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&o2_saved_269, 0, sizeof(struct list$1sTypeph*));
memset(&it_270, 0, sizeof(struct sType*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&new_name_271, 0, sizeof(char*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&no_comma_274, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&node_275, 0, sizeof(struct sNode*));
memset(&right_value301, 0, sizeof(void*));
memset(&node_276, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&asm_name_277, 0, sizeof(char*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&type2_278, 0, sizeof(struct sType*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
    # 673 "05function4.c"
    head_107=((struct sInfo*)come_null_check(info, "05function4.c", 673))->p;
    # 674 "05function4.c"
    head_sline_108=((struct sInfo*)come_null_check(info, "05function4.c", 674))->sline;
    # 675 "05function4.c"
    ((struct sInfo*)come_null_check(info, "05function4.c", 675))->define_struct=(_Bool)0;
    # 677 "05function4.c"
    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 677),__exception_result_var_b206=((char*)(right_value122=parse_word(info))), come_pop_stackframe(), __exception_result_var_b206));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    # 682 "05function4.c"
    while(_while_condtional28=(come_push_stackframe("05function4.c", 678),__exception_result_var_b207=string_operator_equals(type_name_109,"__extension__"), come_pop_stackframe(), __exception_result_var_b207),    _while_condtional28) {
        # 679 "05function4.c"
        __dec_obj53=type_name_109;
        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 679),__exception_result_var_b208=((char*)(right_value123=parse_word(info))), come_pop_stackframe(), __exception_result_var_b208));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123;
        __freed_obj__ = 0;
    }
    # 682 "05function4.c"
    constant_110=(_Bool)0;
    # 683 "05function4.c"
    static__111=(_Bool)0;
    # 684 "05function4.c"
    exception__112=(_Bool)0;
    # 685 "05function4.c"
    volatile__113=(_Bool)0;
    # 686 "05function4.c"
    register__114=(_Bool)0;
    # 687 "05function4.c"
    unsigned__115=(_Bool)0;
    # 688 "05function4.c"
    long__116=(_Bool)0;
    # 689 "05function4.c"
    long_long_117=(_Bool)0;
    # 690 "05function4.c"
    short__118=(_Bool)0;
    # 691 "05function4.c"
    restrict__119=(_Bool)0;
    # 692 "05function4.c"
    struct__120=(_Bool)0;
    # 693 "05function4.c"
    union__121=(_Bool)0;
    # 694 "05function4.c"
    enum__122=(_Bool)0;
    # 695 "05function4.c"
    no_heap_123=(_Bool)0;
    # 696 "05function4.c"
    extern__124=(_Bool)0;
    # 697 "05function4.c"
    inline__125=(_Bool)0;
    # 698 "05function4.c"
    come_mem_core__126=(_Bool)0;
    # 700 "05function4.c"
    alignas__127=((void*)0);
    # 702 "05function4.c"
    anonymous_type_128=(_Bool)0;
    # 703 "05function4.c"
    anonymous_name_129=(_Bool)0;
    # 1139 "05function4.c"
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        # 1137 "05function4.c"
        # 706 "05function4.c"
        if(_if_conditional195=(come_push_stackframe("05function4.c", 706),__exception_result_var_b209=string_operator_equals(type_name_109,"struct"), come_pop_stackframe(), __exception_result_var_b209),        _if_conditional195) {
            # 707 "05function4.c"
            struct__120=(_Bool)1;
            # 732 "05function4.c"
            # 709 "05function4.c"
            if(_if_conditional196=*((struct sInfo*)come_null_check(info, "05function4.c", 709))->p==123,            _if_conditional196) {
                # 710 "05function4.c"
                p_130=((struct sInfo*)come_null_check(info, "05function4.c", 710))->p;
                # 711 "05function4.c"
                sline_131=((struct sInfo*)come_null_check(info, "05function4.c", 711))->sline;
                # 713 "05function4.c"
                (come_push_stackframe("05function4.c", 713),__exception_result_var_b210=((char*)(right_value124=skip_block(info))), come_pop_stackframe(), __exception_result_var_b210);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                # 730 "05function4.c"
                # 715 "05function4.c"
                if(_if_conditional197=*((struct sInfo*)come_null_check(info, "05function4.c", 715))->p==59,                _if_conditional197) {
                    # 716 "05function4.c"
                    anonymous_name_129=(_Bool)1;
                    # 717 "05function4.c"
                    anonymous_type_128=(_Bool)1;
                    # 718 "05function4.c"
                    __dec_obj54=type_name_109;
                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 718),__exception_result_var_b211=((char*)(right_value125=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b211));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = 0;
                    # 719 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 719))->p=p_130;
                    # 720 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 720))->sline=sline_131;
                    # 721 "05function4.c"
                    break;
                }
                else {
                    # 724 "05function4.c"
                    anonymous_type_128=(_Bool)1;
                    # 725 "05function4.c"
                    __dec_obj55=type_name_109;
                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 725),__exception_result_var_b212=((char*)(right_value126=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b212));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    # 726 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 726))->p=p_130;
                    # 727 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 727))->sline=sline_131;
                    # 728 "05function4.c"
                    break;
                }
            }
            # 732 "05function4.c"
            (come_push_stackframe("05function4.c", 732),parse_sharp_v5(info),come_pop_stackframe());
            # 734 "05function4.c"
            __dec_obj56=type_name_109;
            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 734),__exception_result_var_b213=((char*)(right_value127=parse_word(info))), come_pop_stackframe(), __exception_result_var_b213));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value127;
            __freed_obj__ = 0;
            # 736 "05function4.c"
            (come_push_stackframe("05function4.c", 736),parse_sharp_v5(info),come_pop_stackframe());
            # 768 "05function4.c"
            # 738 "05function4.c"
            if(_if_conditional198=*((struct sInfo*)come_null_check(info, "05function4.c", 738))->p==60,            _if_conditional198) {
                # 739 "05function4.c"
                p_132=((struct sInfo*)come_null_check(info, "05function4.c", 739))->p;
                # 740 "05function4.c"
                sline_133=((struct sInfo*)come_null_check(info, "05function4.c", 740))->sline;
                # 742 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 742))->p++;
                # 743 "05function4.c"
                (come_push_stackframe("05function4.c", 743),skip_spaces_and_lf(info),come_pop_stackframe());
                # 766 "05function4.c"
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    # 765 "05function4.c"
                    # 746 "05function4.c"
                    if(_if_conditional199=*((struct sInfo*)come_null_check(info, "05function4.c", 746))->p==62,                    _if_conditional199) {
                        # 747 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 747))->p++;
                        # 748 "05function4.c"
                        (come_push_stackframe("05function4.c", 748),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 756 "05function4.c"
                        # 750 "05function4.c"
                        if(_if_conditional200=*((struct sInfo*)come_null_check(info, "05function4.c", 750))->p==123,                        _if_conditional200) {
                        }
                        else {
                            # 753 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 753))->p=p_132;
                            # 754 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 754))->sline=sline_133;
                        }
                        # 756 "05function4.c"
                        break;
                    }
                    else {
                        # 765 "05function4.c"
                        # 758 "05function4.c"
                        if(_if_conditional201=*((struct sInfo*)come_null_check(info, "05function4.c", 758))->p==0,                        _if_conditional201) {
                            # 759 "05function4.c"
                            (come_push_stackframe("05function4.c", 759),err_msg(info,"invalid struct definition"),come_pop_stackframe());
                            # 760 "05function4.c"
                            __result68__ = __result_obj__ = (come_push_stackframe("05function4.c", 760),__exception_result_var_b214=((struct tuple3$3sTypephcharphbool*)(right_value131=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value128=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b214);
                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                            if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value128;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value131;
                            __freed_obj__ = 0;
                            return __result68__;
                        }
                        else {
                            # 763 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 763))->p++;
                        }
                    }
                }
            }
            # 787 "05function4.c"
            # 768 "05function4.c"
            if(_if_conditional202=*((struct sInfo*)come_null_check(info, "05function4.c", 768))->p==123,            _if_conditional202) {
                # 769 "05function4.c"
                p_134=((struct sInfo*)come_null_check(info, "05function4.c", 769))->p;
                # 770 "05function4.c"
                sline_135=((struct sInfo*)come_null_check(info, "05function4.c", 770))->sline;
                # 772 "05function4.c"
                (come_push_stackframe("05function4.c", 772),__exception_result_var_b215=((char*)(right_value132=skip_block(info))), come_pop_stackframe(), __exception_result_var_b215);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value132;
                __freed_obj__ = 0;
                # 786 "05function4.c"
                # 774 "05function4.c"
                if(_if_conditional203=*((struct sInfo*)come_null_check(info, "05function4.c", 774))->p==59,                _if_conditional203) {
                    # 775 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 775))->p=head_107;
                    # 776 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 776))->sline=head_sline_108;
                    # 777 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 777))->define_struct=(_Bool)1;
                    # 778 "05function4.c"
                    __result69__ = __result_obj__ = (come_push_stackframe("05function4.c", 778),__exception_result_var_b216=((struct tuple3$3sTypephcharphbool*)(right_value134=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value133=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 778)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b216);
                    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value133;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value134;
                    __freed_obj__ = 0;
                    return __result69__;
                }
                else {
                    # 781 "05function4.c"
                    anonymous_type_128=(_Bool)1;
                    # 782 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 782))->p=p_134;
                    # 783 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 783))->sline=sline_135;
                    # 784 "05function4.c"
                    break;
                }
            }
        }
        else {
            # 1137 "05function4.c"
            # 788 "05function4.c"
            if(_if_conditional204=(come_push_stackframe("05function4.c", 788),__exception_result_var_b217=string_operator_equals(type_name_109,"union"), come_pop_stackframe(), __exception_result_var_b217),            _if_conditional204) {
                # 789 "05function4.c"
                union__121=(_Bool)1;
                # 817 "05function4.c"
                # 791 "05function4.c"
                if(_if_conditional205=*((struct sInfo*)come_null_check(info, "05function4.c", 791))->p==123,                _if_conditional205) {
                    # 792 "05function4.c"
                    p_136=((struct sInfo*)come_null_check(info, "05function4.c", 792))->p;
                    # 793 "05function4.c"
                    sline_137=((struct sInfo*)come_null_check(info, "05function4.c", 793))->sline;
                    # 795 "05function4.c"
                    (come_push_stackframe("05function4.c", 795),__exception_result_var_b218=((char*)(right_value135=skip_block(info))), come_pop_stackframe(), __exception_result_var_b218);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value135;
                    __freed_obj__ = 0;
                    # 815 "05function4.c"
                    # 797 "05function4.c"
                    if(_if_conditional206=*((struct sInfo*)come_null_check(info, "05function4.c", 797))->p==59,                    _if_conditional206) {
                        # 798 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 798))->p=head_107;
                        # 799 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 799))->sline=head_sline_108;
                        # 801 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 801))->define_struct=(_Bool)0;
                        # 802 "05function4.c"
                        anonymous_type_128=(_Bool)1;
                        # 803 "05function4.c"
                        __dec_obj59=type_name_109;
                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 803),__exception_result_var_b219=((char*)(right_value136=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b219));
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value136;
                        __freed_obj__ = 0;
                        # 804 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 804))->p=p_136;
                        # 805 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 805))->sline=sline_137;
                        # 806 "05function4.c"
                        break;
                    }
                    else {
                        # 809 "05function4.c"
                        anonymous_type_128=(_Bool)1;
                        # 810 "05function4.c"
                        __dec_obj60=type_name_109;
                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 810),__exception_result_var_b220=((char*)(right_value137=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b220));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value137;
                        __freed_obj__ = 0;
                        # 811 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 811))->p=p_136;
                        # 812 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 812))->sline=sline_137;
                        # 813 "05function4.c"
                        break;
                    }
                }
                # 817 "05function4.c"
                (come_push_stackframe("05function4.c", 817),parse_sharp_v5(info),come_pop_stackframe());
                # 819 "05function4.c"
                __dec_obj61=type_name_109;
                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 819),__exception_result_var_b221=((char*)(right_value138=parse_word(info))), come_pop_stackframe(), __exception_result_var_b221));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138;
                __freed_obj__ = 0;
                # 821 "05function4.c"
                (come_push_stackframe("05function4.c", 821),parse_sharp_v5(info),come_pop_stackframe());
                # 842 "05function4.c"
                # 823 "05function4.c"
                if(_if_conditional207=*((struct sInfo*)come_null_check(info, "05function4.c", 823))->p==123,                _if_conditional207) {
                    # 824 "05function4.c"
                    p_138=((struct sInfo*)come_null_check(info, "05function4.c", 824))->p;
                    # 825 "05function4.c"
                    sline_139=((struct sInfo*)come_null_check(info, "05function4.c", 825))->sline;
                    # 827 "05function4.c"
                    (come_push_stackframe("05function4.c", 827),__exception_result_var_b222=((char*)(right_value139=skip_block(info))), come_pop_stackframe(), __exception_result_var_b222);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value139;
                    __freed_obj__ = 0;
                    # 841 "05function4.c"
                    # 829 "05function4.c"
                    if(_if_conditional208=*((struct sInfo*)come_null_check(info, "05function4.c", 829))->p==59,                    _if_conditional208) {
                        # 830 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 830))->p=head_107;
                        # 831 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 831))->sline=head_sline_108;
                        # 832 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 832))->define_struct=(_Bool)1;
                        # 833 "05function4.c"
                        __result70__ = __result_obj__ = (come_push_stackframe("05function4.c", 833),__exception_result_var_b223=((struct tuple3$3sTypephcharphbool*)(right_value141=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value140=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 833)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b223);
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value140;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value141;
                        __freed_obj__ = 0;
                        return __result70__;
                    }
                    else {
                        # 836 "05function4.c"
                        anonymous_type_128=(_Bool)1;
                        # 837 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 837))->p=p_138;
                        # 838 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 838))->sline=sline_139;
                        # 839 "05function4.c"
                        break;
                    }
                }
            }
            else {
                # 1137 "05function4.c"
                # 843 "05function4.c"
                if(_if_conditional209=(come_push_stackframe("05function4.c", 843),__exception_result_var_b224=string_operator_equals(type_name_109,"enum"), come_pop_stackframe(), __exception_result_var_b224),                _if_conditional209) {
                    # 844 "05function4.c"
                    enum__122=(_Bool)1;
                    # 846 "05function4.c"
                    (come_push_stackframe("05function4.c", 846),parse_sharp_v5(info),come_pop_stackframe());
                    # 869 "05function4.c"
                    # 848 "05function4.c"
                    if(_if_conditional210=*((struct sInfo*)come_null_check(info, "05function4.c", 848))->p==123,                    _if_conditional210) {
                        # 849 "05function4.c"
                        p_140=((struct sInfo*)come_null_check(info, "05function4.c", 849))->p;
                        # 850 "05function4.c"
                        sline_141=((struct sInfo*)come_null_check(info, "05function4.c", 850))->sline;
                        # 852 "05function4.c"
                        (come_push_stackframe("05function4.c", 852),__exception_result_var_b225=((char*)(right_value142=skip_block(info))), come_pop_stackframe(), __exception_result_var_b225);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value142;
                        __freed_obj__ = 0;
                        # 867 "05function4.c"
                        # 854 "05function4.c"
                        if(_if_conditional211=*((struct sInfo*)come_null_check(info, "05function4.c", 854))->p==59,                        _if_conditional211) {
                            # 855 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 855))->p=head_107;
                            # 856 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 856))->sline=head_sline_108;
                            # 857 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 857))->define_struct=(_Bool)1;
                            # 858 "05function4.c"
                            __result71__ = __result_obj__ = (come_push_stackframe("05function4.c", 858),__exception_result_var_b226=((struct tuple3$3sTypephcharphbool*)(right_value144=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value143=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 858)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b226);
                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value144;
                            __freed_obj__ = 0;
                            return __result71__;
                        }
                        else {
                            # 861 "05function4.c"
                            anonymous_type_128=(_Bool)1;
                            # 862 "05function4.c"
                            __dec_obj62=type_name_109;
                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 862),__exception_result_var_b227=((char*)(right_value145=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b227));
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value145;
                            __freed_obj__ = 0;
                            # 863 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 863))->p=p_140;
                            # 864 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 864))->sline=sline_141;
                            # 865 "05function4.c"
                            break;
                        }
                    }
                    # 869 "05function4.c"
                    (come_push_stackframe("05function4.c", 869),parse_sharp_v5(info),come_pop_stackframe());
                    # 871 "05function4.c"
                    __dec_obj63=type_name_109;
                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 871),__exception_result_var_b228=((char*)(right_value146=parse_word(info))), come_pop_stackframe(), __exception_result_var_b228));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value146;
                    __freed_obj__ = 0;
                    # 873 "05function4.c"
                    (come_push_stackframe("05function4.c", 873),parse_sharp_v5(info),come_pop_stackframe());
                    # 894 "05function4.c"
                    # 875 "05function4.c"
                    if(_if_conditional212=*((struct sInfo*)come_null_check(info, "05function4.c", 875))->p==123,                    _if_conditional212) {
                        # 876 "05function4.c"
                        p_142=((struct sInfo*)come_null_check(info, "05function4.c", 876))->p;
                        # 877 "05function4.c"
                        sline_143=((struct sInfo*)come_null_check(info, "05function4.c", 877))->sline;
                        # 879 "05function4.c"
                        (come_push_stackframe("05function4.c", 879),__exception_result_var_b229=((char*)(right_value147=skip_block(info))), come_pop_stackframe(), __exception_result_var_b229);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value147;
                        __freed_obj__ = 0;
                        # 893 "05function4.c"
                        # 881 "05function4.c"
                        if(_if_conditional213=*((struct sInfo*)come_null_check(info, "05function4.c", 881))->p==59,                        _if_conditional213) {
                            # 882 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 882))->p=head_107;
                            # 883 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 883))->sline=head_sline_108;
                            # 884 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 884))->define_struct=(_Bool)1;
                            # 885 "05function4.c"
                            __result72__ = __result_obj__ = (come_push_stackframe("05function4.c", 885),__exception_result_var_b230=((struct tuple3$3sTypephcharphbool*)(right_value149=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value148=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 885)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b230);
                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value148;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value149;
                            __freed_obj__ = 0;
                            return __result72__;
                        }
                        else {
                            # 888 "05function4.c"
                            anonymous_type_128=(_Bool)1;
                            # 889 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 889))->p=p_142;
                            # 890 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 890))->sline=sline_143;
                            # 891 "05function4.c"
                            break;
                        }
                    }
                }
                else {
                    # 1137 "05function4.c"
                    # 895 "05function4.c"
                    if(_if_conditional214=(come_push_stackframe("05function4.c", 895),__exception_result_var_b231=string_operator_equals(type_name_109,"_Alignas"), come_pop_stackframe(), __exception_result_var_b231),                    _if_conditional214) {
                        # 896 "05function4.c"
                        (come_push_stackframe("05function4.c", 896),__exception_result_var_b232=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b232);
                        # 898 "05function4.c"
                        exp_144=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 898),__exception_result_var_b233=((struct sNode*)(right_value150=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b233));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value150;
                        __freed_obj__ = 0;
                        # 900 "05function4.c"
                        __dec_obj64=alignas__127;
                        alignas__127=(struct sNode*)come_increment_ref_count(exp_144);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
                        # 902 "05function4.c"
                        (come_push_stackframe("05function4.c", 902),__exception_result_var_b234=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b234);
                        # 904 "05function4.c"
                        __dec_obj65=type_name_109;
                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 904),__exception_result_var_b235=((char*)(right_value151=parse_word(info))), come_pop_stackframe(), __exception_result_var_b235));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value151;
                        __freed_obj__ = 0;
                        if(exp_144 && !__freed_obj__) { exp_144 = come_decrement_ref_count(exp_144, ((struct sNode*)exp_144)->finalize, ((struct sNode*)exp_144)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        # 1137 "05function4.c"
                        # 906 "05function4.c"
                        if(_if_conditional215=(come_push_stackframe("05function4.c", 906),__exception_result_var_b236=string_operator_equals(type_name_109,"const"), come_pop_stackframe(), __exception_result_var_b236),                        _if_conditional215) {
                            # 907 "05function4.c"
                            constant_110=(_Bool)1;
                            # 909 "05function4.c"
                            __dec_obj66=type_name_109;
                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 909),__exception_result_var_b237=((char*)(right_value152=parse_word(info))), come_pop_stackframe(), __exception_result_var_b237));
                            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value152;
                            __freed_obj__ = 0;
                        }
                        else {
                            # 1137 "05function4.c"
                            # 911 "05function4.c"
                            if(_if_conditional216=(come_push_stackframe("05function4.c", 911),__exception_result_var_b238=string_operator_equals(type_name_109,"exception"), come_pop_stackframe(), __exception_result_var_b238),                            _if_conditional216) {
                                # 912 "05function4.c"
                                exception__112=(_Bool)1;
                                # 914 "05function4.c"
                                __dec_obj67=type_name_109;
                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 914),__exception_result_var_b239=((char*)(right_value153=parse_word(info))), come_pop_stackframe(), __exception_result_var_b239));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value153;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 1137 "05function4.c"
                                # 916 "05function4.c"
                                if(_if_conditional217=(come_push_stackframe("05function4.c", 916),__exception_result_var_b240=string_operator_equals(type_name_109,"static"), come_pop_stackframe(), __exception_result_var_b240),                                _if_conditional217) {
                                    # 917 "05function4.c"
                                    static__111=(_Bool)1;
                                    # 919 "05function4.c"
                                    __dec_obj68=type_name_109;
                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 919),__exception_result_var_b241=((char*)(right_value154=parse_word(info))), come_pop_stackframe(), __exception_result_var_b241));
                                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value154;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    # 1137 "05function4.c"
                                    # 921 "05function4.c"
                                    if(_if_conditional218=(come_push_stackframe("05function4.c", 921),__exception_result_var_b242=string_operator_equals(type_name_109,"come_mem_core"), come_pop_stackframe(), __exception_result_var_b242),                                    _if_conditional218) {
                                        # 922 "05function4.c"
                                        come_mem_core__126=(_Bool)1;
                                        # 924 "05function4.c"
                                        __dec_obj69=type_name_109;
                                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 924),__exception_result_var_b243=((char*)(right_value155=parse_word(info))), come_pop_stackframe(), __exception_result_var_b243));
                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value155;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        # 1137 "05function4.c"
                                        # 926 "05function4.c"
                                        if(_if_conditional219=(come_push_stackframe("05function4.c", 926),__exception_result_var_b244=string_operator_equals(type_name_109,"extern"), come_pop_stackframe(), __exception_result_var_b244),                                        _if_conditional219) {
                                            # 927 "05function4.c"
                                            extern__124=(_Bool)1;
                                            # 929 "05function4.c"
                                            __dec_obj70=type_name_109;
                                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 929),__exception_result_var_b245=((char*)(right_value156=parse_word(info))), come_pop_stackframe(), __exception_result_var_b245));
                                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value156;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            # 1137 "05function4.c"
                                            # 931 "05function4.c"
                                            if(_if_conditional220=(come_push_stackframe("05function4.c", 931),__exception_result_var_b246=string_operator_equals(type_name_109,"_Noreturn"), come_pop_stackframe(), __exception_result_var_b246),                                            _if_conditional220) {
                                                # 932 "05function4.c"
                                                __dec_obj71=type_name_109;
                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 932),__exception_result_var_b247=((char*)(right_value157=parse_word(info))), come_pop_stackframe(), __exception_result_var_b247));
                                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value157;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                # 1137 "05function4.c"
                                                # 934 "05function4.c"
                                                if(_if_conditional221=(come_push_stackframe("05function4.c", 934),__exception_result_var_b248=string_operator_equals(type_name_109,"inline"), come_pop_stackframe(), __exception_result_var_b248)||(come_push_stackframe("05function4.c", 934),__exception_result_var_b249=string_operator_equals(type_name_109,"__inline"), come_pop_stackframe(), __exception_result_var_b249)||(come_push_stackframe("05function4.c", 934),__exception_result_var_b250=string_operator_equals(type_name_109,"__inline__"), come_pop_stackframe(), __exception_result_var_b250)||(come_push_stackframe("05function4.c", 934),__exception_result_var_b251=string_operator_equals(type_name_109,"__always_inline"), come_pop_stackframe(), __exception_result_var_b251),                                                _if_conditional221) {
                                                    # 935 "05function4.c"
                                                    inline__125=(_Bool)1;
                                                    # 937 "05function4.c"
                                                    __dec_obj72=type_name_109;
                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 937),__exception_result_var_b252=((char*)(right_value158=parse_word(info))), come_pop_stackframe(), __exception_result_var_b252));
                                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                                                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value158;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    # 1137 "05function4.c"
                                                    # 939 "05function4.c"
                                                    if(_if_conditional222=(come_push_stackframe("05function4.c", 939),__exception_result_var_b253=string_operator_equals(type_name_109,"volatile"), come_pop_stackframe(), __exception_result_var_b253),                                                    _if_conditional222) {
                                                        # 940 "05function4.c"
                                                        volatile__113=(_Bool)1;
                                                        # 942 "05function4.c"
                                                        __dec_obj73=type_name_109;
                                                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 942),__exception_result_var_b254=((char*)(right_value159=parse_word(info))), come_pop_stackframe(), __exception_result_var_b254));
                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                                                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value159;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        # 1137 "05function4.c"
                                                        # 944 "05function4.c"
                                                        if(_if_conditional223=(come_push_stackframe("05function4.c", 944),__exception_result_var_b255=string_operator_equals(type_name_109,"long"), come_pop_stackframe(), __exception_result_var_b255),                                                        _if_conditional223) {
                                                            # 1011 "05function4.c"
                                                            {
                                                                # 947 "05function4.c"
                                                                p_145=((struct sInfo*)come_null_check(info, "05function4.c", 947))->p;
                                                                # 948 "05function4.c"
                                                                sline_146=((struct sInfo*)come_null_check(info, "05function4.c", 948))->sline;
                                                                # 1010 "05function4.c"
                                                                # 950 "05function4.c"
                                                                if(_if_conditional224=!(come_push_stackframe("05function4.c", 950),__exception_result_var_b256=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 950))->p), come_pop_stackframe(), __exception_result_var_b256),                                                                _if_conditional224) {
                                                                    # 951 "05function4.c"
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 951))->p=p_145;
                                                                    # 952 "05function4.c"
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 952))->sline=sline_146;
                                                                    # 954 "05function4.c"
                                                                    __dec_obj74=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 954),__exception_result_var_b257=((char*)(right_value160=__builtin_string("long"))), come_pop_stackframe(), __exception_result_var_b257));
                                                                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                                                                    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value160;
                                                                    __freed_obj__ = 0;
                                                                    # 955 "05function4.c"
                                                                    break;
                                                                }
                                                                else {
                                                                    # 958 "05function4.c"
                                                                    __dec_obj75=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 958),__exception_result_var_b258=((char*)(right_value161=parse_word(info))), come_pop_stackframe(), __exception_result_var_b258));
                                                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                                                                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value161;
                                                                    __freed_obj__ = 0;
                                                                    # 1009 "05function4.c"
                                                                    # 960 "05function4.c"
                                                                    if(_if_conditional225=(come_push_stackframe("05function4.c", 960),__exception_result_var_b259=string_operator_equals(type_name_109,"unsigned"), come_pop_stackframe(), __exception_result_var_b259),                                                                    _if_conditional225) {
                                                                        # 961 "05function4.c"
                                                                        __dec_obj76=type_name_109;
                                                                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 961),__exception_result_var_b260=((char*)(right_value162=parse_word(info))), come_pop_stackframe(), __exception_result_var_b260));
                                                                        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                                                                        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value162;
                                                                        __freed_obj__ = 0;
                                                                        # 967 "05function4.c"
                                                                        # 963 "05function4.c"
                                                                        if(_if_conditional226=(come_push_stackframe("05function4.c", 963),__exception_result_var_b261=string_operator_equals(type_name_109,"int"), come_pop_stackframe(), __exception_result_var_b261),                                                                        _if_conditional226) {
                                                                            # 964 "05function4.c"
                                                                            long__116=(_Bool)1;
                                                                            # 965 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1009 "05function4.c"
                                                                        # 968 "05function4.c"
                                                                        if(_if_conditional227=(come_push_stackframe("05function4.c", 968),__exception_result_var_b262=string_operator_equals(type_name_109,"long"), come_pop_stackframe(), __exception_result_var_b262),                                                                        _if_conditional227) {
                                                                            # 969 "05function4.c"
                                                                            p_145=((struct sInfo*)come_null_check(info, "05function4.c", 969))->p;
                                                                            # 970 "05function4.c"
                                                                            sline_146=((struct sInfo*)come_null_check(info, "05function4.c", 970))->sline;
                                                                            # 980 "05function4.c"
                                                                            # 971 "05function4.c"
                                                                            if(_if_conditional228=(come_push_stackframe("05function4.c", 971),__exception_result_var_b263=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 971))->p), come_pop_stackframe(), __exception_result_var_b263),                                                                            _if_conditional228) {
                                                                                # 972 "05function4.c"
                                                                                long_long_117=(_Bool)1;
                                                                                # 973 "05function4.c"
                                                                                __dec_obj77=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 973),__exception_result_var_b264=((char*)(right_value163=parse_word(info))), come_pop_stackframe(), __exception_result_var_b264));
                                                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                                                                                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value163;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                # 976 "05function4.c"
                                                                                long__116=(_Bool)1;
                                                                                # 977 "05function4.c"
                                                                                break;
                                                                            }
                                                                            # 991 "05function4.c"
                                                                            # 980 "05function4.c"
                                                                            if(_if_conditional229=(come_push_stackframe("05function4.c", 980),__exception_result_var_b265=string_operator_equals(type_name_109,"int"), come_pop_stackframe(), __exception_result_var_b265),                                                                            _if_conditional229) {
                                                                                # 981 "05function4.c"
                                                                                long_long_117=(_Bool)1;
                                                                                # 982 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 991 "05function4.c"
                                                                                # 984 "05function4.c"
                                                                                if(_if_conditional230=!(come_push_stackframe("05function4.c", 984),__exception_result_var_b266=is_type_name(type_name_109,info), come_pop_stackframe(), __exception_result_var_b266),                                                                                _if_conditional230) {
                                                                                    # 985 "05function4.c"
                                                                                    __dec_obj78=type_name_109;
                                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 985),__exception_result_var_b267=((char*)(right_value164=__builtin_string("long"))), come_pop_stackframe(), __exception_result_var_b267));
                                                                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                                                                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value164;
                                                                                    __freed_obj__ = 0;
                                                                                    # 986 "05function4.c"
                                                                                    long_long_117=(_Bool)1;
                                                                                    # 987 "05function4.c"
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 987))->p=p_145;
                                                                                    # 988 "05function4.c"
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 988))->sline=sline_146;
                                                                                    # 989 "05function4.c"
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1009 "05function4.c"
                                                                            # 992 "05function4.c"
                                                                            if(_if_conditional231=(come_push_stackframe("05function4.c", 992),__exception_result_var_b268=is_type_name(type_name_109,info), come_pop_stackframe(), __exception_result_var_b268),                                                                            _if_conditional231) {
                                                                                # 1000 "05function4.c"
                                                                                # 993 "05function4.c"
                                                                                if(_if_conditional232=long__116,                                                                                _if_conditional232) {
                                                                                    # 994 "05function4.c"
                                                                                    long_long_117=(_Bool)1;
                                                                                    # 995 "05function4.c"
                                                                                    long__116=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    # 998 "05function4.c"
                                                                                    long__116=(_Bool)1;
                                                                                }
                                                                                # 1000 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1003 "05function4.c"
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1003))->p=p_145;
                                                                                # 1004 "05function4.c"
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1004))->sline=sline_146;
                                                                                # 1006 "05function4.c"
                                                                                __dec_obj79=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1006),__exception_result_var_b269=((char*)(right_value165=__builtin_string("long"))), come_pop_stackframe(), __exception_result_var_b269));
                                                                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                                                                                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value165;
                                                                                __freed_obj__ = 0;
                                                                                # 1007 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 1137 "05function4.c"
                                                            # 1012 "05function4.c"
                                                            if(_if_conditional233=(come_push_stackframe("05function4.c", 1012),__exception_result_var_b270=string_operator_equals(type_name_109,"unsigned"), come_pop_stackframe(), __exception_result_var_b270),                                                            _if_conditional233) {
                                                                # 1013 "05function4.c"
                                                                unsigned__115=(_Bool)1;
                                                                # 1080 "05function4.c"
                                                                # 1015 "05function4.c"
                                                                if(_if_conditional234=(come_push_stackframe("05function4.c", 1015),__exception_result_var_b271=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1015))->p), come_pop_stackframe(), __exception_result_var_b271)||*((struct sInfo*)come_null_check(info, "05function4.c", 1015))->p==95,                                                                _if_conditional234) {
                                                                    # 1016 "05function4.c"
                                                                    p_147=((struct sInfo*)come_null_check(info, "05function4.c", 1016))->p;
                                                                    # 1017 "05function4.c"
                                                                    sline_148=((struct sInfo*)come_null_check(info, "05function4.c", 1017))->sline;
                                                                    # 1019 "05function4.c"
                                                                    __dec_obj80=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1019),__exception_result_var_b272=((char*)(right_value166=parse_word(info))), come_pop_stackframe(), __exception_result_var_b272));
                                                                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                                                    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value166;
                                                                    __freed_obj__ = 0;
                                                                    # 1075 "05function4.c"
                                                                    # 1021 "05function4.c"
                                                                    if(_if_conditional235=(come_push_stackframe("05function4.c", 1021),__exception_result_var_b273=string_operator_equals(type_name_109,"short"), come_pop_stackframe(), __exception_result_var_b273),                                                                    _if_conditional235) {
                                                                        # 1044 "05function4.c"
                                                                        # 1022 "05function4.c"
                                                                        if(_if_conditional236=(come_push_stackframe("05function4.c", 1022),__exception_result_var_b274=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1022))->p), come_pop_stackframe(), __exception_result_var_b274)||*((struct sInfo*)come_null_check(info, "05function4.c", 1022))->p==95,                                                                        _if_conditional236) {
                                                                            # 1023 "05function4.c"
                                                                            p_149=((struct sInfo*)come_null_check(info, "05function4.c", 1023))->p;
                                                                            # 1024 "05function4.c"
                                                                            sline_150=((struct sInfo*)come_null_check(info, "05function4.c", 1024))->sline;
                                                                            # 1026 "05function4.c"
                                                                            __dec_obj81=type_name_109;
                                                                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1026),__exception_result_var_b275=((char*)(right_value167=parse_word(info))), come_pop_stackframe(), __exception_result_var_b275));
                                                                            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                                                                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value167;
                                                                            __freed_obj__ = 0;
                                                                            # 1038 "05function4.c"
                                                                            # 1028 "05function4.c"
                                                                            if(_if_conditional237=(come_push_stackframe("05function4.c", 1028),__exception_result_var_b276=is_type_name(type_name_109,info), come_pop_stackframe(), __exception_result_var_b276),                                                                            _if_conditional237) {
                                                                                # 1029 "05function4.c"
                                                                                short__118=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1032 "05function4.c"
                                                                                short__118=(_Bool)1;
                                                                                # 1033 "05function4.c"
                                                                                __dec_obj82=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1033),__exception_result_var_b277=((char*)(right_value168=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b277));
                                                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                                                                                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value168;
                                                                                __freed_obj__ = 0;
                                                                                # 1035 "05function4.c"
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1035))->p=p_149;
                                                                                # 1036 "05function4.c"
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1036))->sline=sline_150;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1040 "05function4.c"
                                                                            short__118=(_Bool)1;
                                                                            # 1041 "05function4.c"
                                                                            __dec_obj83=type_name_109;
                                                                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1041),__exception_result_var_b278=((char*)(right_value169=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b278));
                                                                            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                                                                            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value169;
                                                                            __freed_obj__ = 0;
                                                                            # 1042 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1075 "05function4.c"
                                                                        # 1045 "05function4.c"
                                                                        if(_if_conditional238=(come_push_stackframe("05function4.c", 1045),__exception_result_var_b279=string_operator_equals(type_name_109,"long"), come_pop_stackframe(), __exception_result_var_b279),                                                                        _if_conditional238) {
                                                                            # 1068 "05function4.c"
                                                                            # 1046 "05function4.c"
                                                                            if(_if_conditional239=(come_push_stackframe("05function4.c", 1046),__exception_result_var_b280=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1046))->p), come_pop_stackframe(), __exception_result_var_b280)||*((struct sInfo*)come_null_check(info, "05function4.c", 1046))->p==95,                                                                            _if_conditional239) {
                                                                                # 1047 "05function4.c"
                                                                                p_151=((struct sInfo*)come_null_check(info, "05function4.c", 1047))->p;
                                                                                # 1048 "05function4.c"
                                                                                sline_152=((struct sInfo*)come_null_check(info, "05function4.c", 1048))->sline;
                                                                                # 1050 "05function4.c"
                                                                                __dec_obj84=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1050),__exception_result_var_b281=((char*)(right_value170=parse_word(info))), come_pop_stackframe(), __exception_result_var_b281));
                                                                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                                                                                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value170;
                                                                                __freed_obj__ = 0;
                                                                                # 1062 "05function4.c"
                                                                                # 1052 "05function4.c"
                                                                                if(_if_conditional240=(come_push_stackframe("05function4.c", 1052),__exception_result_var_b282=is_type_name(type_name_109,info), come_pop_stackframe(), __exception_result_var_b282),                                                                                _if_conditional240) {
                                                                                    # 1053 "05function4.c"
                                                                                    long__116=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 1056 "05function4.c"
                                                                                    long__116=(_Bool)1;
                                                                                    # 1057 "05function4.c"
                                                                                    __dec_obj85=type_name_109;
                                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1057),__exception_result_var_b283=((char*)(right_value171=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b283));
                                                                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                                                                                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value171;
                                                                                    __freed_obj__ = 0;
                                                                                    # 1059 "05function4.c"
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 1059))->p=p_151;
                                                                                    # 1060 "05function4.c"
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 1060))->sline=sline_152;
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1064 "05function4.c"
                                                                                long__116=(_Bool)1;
                                                                                # 1065 "05function4.c"
                                                                                __dec_obj86=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1065),__exception_result_var_b284=((char*)(right_value172=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b284));
                                                                                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                                                                                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value172;
                                                                                __freed_obj__ = 0;
                                                                                # 1066 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1075 "05function4.c"
                                                                            # 1069 "05function4.c"
                                                                            if(_if_conditional241=!(come_push_stackframe("05function4.c", 1069),__exception_result_var_b285=is_type_name(type_name_109,info), come_pop_stackframe(), __exception_result_var_b285),                                                                            _if_conditional241) {
                                                                                # 1070 "05function4.c"
                                                                                __dec_obj87=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1070),__exception_result_var_b286=((char*)(right_value173=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b286));
                                                                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                                                                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value173;
                                                                                __freed_obj__ = 0;
                                                                                # 1071 "05function4.c"
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1071))->p=p_147;
                                                                                # 1072 "05function4.c"
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1072))->sline=sline_148;
                                                                                # 1073 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1077 "05function4.c"
                                                                    __dec_obj88=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1077),__exception_result_var_b287=((char*)(right_value174=__builtin_string("int"))), come_pop_stackframe(), __exception_result_var_b287));
                                                                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                                                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value174;
                                                                    __freed_obj__ = 0;
                                                                    # 1078 "05function4.c"
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                # 1137 "05function4.c"
                                                                # 1081 "05function4.c"
                                                                if(_if_conditional242=(come_push_stackframe("05function4.c", 1081),__exception_result_var_b288=string_operator_equals(type_name_109,"signed"), come_pop_stackframe(), __exception_result_var_b288)||(come_push_stackframe("05function4.c", 1081),__exception_result_var_b289=string_operator_equals(type_name_109,"__signed__"), come_pop_stackframe(), __exception_result_var_b289),                                                                _if_conditional242) {
                                                                    # 1082 "05function4.c"
                                                                    unsigned__115=(_Bool)0;
                                                                    # 1084 "05function4.c"
                                                                    __dec_obj89=type_name_109;
                                                                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1084),__exception_result_var_b290=((char*)(right_value175=parse_word(info))), come_pop_stackframe(), __exception_result_var_b290));
                                                                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                                                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value175;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    # 1137 "05function4.c"
                                                                    # 1086 "05function4.c"
                                                                    if(_if_conditional243=(come_push_stackframe("05function4.c", 1086),__exception_result_var_b291=string_operator_equals(type_name_109,"register"), come_pop_stackframe(), __exception_result_var_b291),                                                                    _if_conditional243) {
                                                                        # 1087 "05function4.c"
                                                                        register__114=(_Bool)1;
                                                                        # 1089 "05function4.c"
                                                                        __dec_obj90=type_name_109;
                                                                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1089),__exception_result_var_b292=((char*)(right_value176=parse_word(info))), come_pop_stackframe(), __exception_result_var_b292));
                                                                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                                                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value176;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        # 1137 "05function4.c"
                                                                        # 1091 "05function4.c"
                                                                        if(_if_conditional244=(come_push_stackframe("05function4.c", 1091),__exception_result_var_b293=string_operator_equals(type_name_109,"restrict"), come_pop_stackframe(), __exception_result_var_b293),                                                                        _if_conditional244) {
                                                                            # 1092 "05function4.c"
                                                                            restrict__119=(_Bool)1;
                                                                            # 1094 "05function4.c"
                                                                            __dec_obj91=type_name_109;
                                                                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1094),__exception_result_var_b294=((char*)(right_value177=parse_word(info))), come_pop_stackframe(), __exception_result_var_b294));
                                                                            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                                            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value177;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            # 1137 "05function4.c"
                                                                            # 1096 "05function4.c"
                                                                            if(_if_conditional245=(come_push_stackframe("05function4.c", 1096),__exception_result_var_b295=string_operator_equals(type_name_109,"__restrict"), come_pop_stackframe(), __exception_result_var_b295),                                                                            _if_conditional245) {
                                                                                # 1097 "05function4.c"
                                                                                restrict__119=(_Bool)1;
                                                                                # 1099 "05function4.c"
                                                                                __dec_obj92=type_name_109;
                                                                                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1099),__exception_result_var_b296=((char*)(right_value178=parse_word(info))), come_pop_stackframe(), __exception_result_var_b296));
                                                                                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                                                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value178;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                # 1137 "05function4.c"
                                                                                # 1101 "05function4.c"
                                                                                if(_if_conditional246=(come_push_stackframe("05function4.c", 1101),__exception_result_var_b297=string_operator_equals(type_name_109,"short"), come_pop_stackframe(), __exception_result_var_b297),                                                                                _if_conditional246) {
                                                                                    # 1102 "05function4.c"
                                                                                    short__118=(_Bool)1;
                                                                                    # 1133 "05function4.c"
                                                                                    # 1104 "05function4.c"
                                                                                    if(_if_conditional247=*((struct sInfo*)come_null_check(info, "05function4.c", 1104))->p==58,                                                                                    _if_conditional247) {
                                                                                        # 1105 "05function4.c"
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        # 1133 "05function4.c"
                                                                                        # 1107 "05function4.c"
                                                                                        if(_if_conditional248=(come_push_stackframe("05function4.c", 1107),__exception_result_var_b298=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1107))->p), come_pop_stackframe(), __exception_result_var_b298),                                                                                        _if_conditional248) {
                                                                                            # 1108 "05function4.c"
                                                                                            p_153=((struct sInfo*)come_null_check(info, "05function4.c", 1108))->p;
                                                                                            # 1109 "05function4.c"
                                                                                            sline_154=((struct sInfo*)come_null_check(info, "05function4.c", 1109))->sline;
                                                                                            # 1110 "05function4.c"
                                                                                            __dec_obj93=type_name_109;
                                                                                            type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1110),__exception_result_var_b299=((char*)(right_value179=parse_word(info))), come_pop_stackframe(), __exception_result_var_b299));
                                                                                            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                                                                            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value179;
                                                                                            __freed_obj__ = 0;
                                                                                            # 1129 "05function4.c"
                                                                                            # 1112 "05function4.c"
                                                                                            if(_if_conditional249=(come_push_stackframe("05function4.c", 1112),__exception_result_var_b300=string_operator_equals(type_name_109,"int"), come_pop_stackframe(), __exception_result_var_b300),                                                                                            _if_conditional249) {
                                                                                                # 1113 "05function4.c"
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                # 1129 "05function4.c"
                                                                                                # 1115 "05function4.c"
                                                                                                if(_if_conditional250=(come_push_stackframe("05function4.c", 1115),__exception_result_var_b301=string_operator_equals(type_name_109,"short"), come_pop_stackframe(), __exception_result_var_b301),                                                                                                _if_conditional250) {
                                                                                                    # 1116 "05function4.c"
                                                                                                    short__118=(_Bool)0;
                                                                                                    # 1117 "05function4.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1129 "05function4.c"
                                                                                                    # 1119 "05function4.c"
                                                                                                    if(_if_conditional251=(come_push_stackframe("05function4.c", 1119),__exception_result_var_b302=is_type_name(type_name_109,info), come_pop_stackframe(), __exception_result_var_b302),                                                                                                    _if_conditional251) {
                                                                                                        # 1120 "05function4.c"
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1120))->p=p_153;
                                                                                                        # 1121 "05function4.c"
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1121))->sline=sline_154;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1124 "05function4.c"
                                                                                                        __dec_obj94=type_name_109;
                                                                                                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1124),__exception_result_var_b303=((char*)(right_value180=__builtin_string("short"))), come_pop_stackframe(), __exception_result_var_b303));
                                                                                                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                                                                                                        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value180;
                                                                                                        __freed_obj__ = 0;
                                                                                                        # 1125 "05function4.c"
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1125))->p=p_153;
                                                                                                        # 1126 "05function4.c"
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1126))->sline=sline_154;
                                                                                                        # 1127 "05function4.c"
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 1131 "05function4.c"
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 1135 "05function4.c"
                                                                                    break;
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 1139 "05function4.c"
    (come_push_stackframe("05function4.c", 1139),skip_pointer_attribute(info),come_pop_stackframe());
    # 1141 "05function4.c"
    pointer_num_155=0;
    # 1151 "05function4.c"
    while(_while_condtional31=*((struct sInfo*)come_null_check(info, "05function4.c", 1142))->p==42,    _while_condtional31) {
        # 1143 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1143))->p++;
        # 1144 "05function4.c"
        (come_push_stackframe("05function4.c", 1144),skip_spaces_and_lf(info),come_pop_stackframe());
        # 1146 "05function4.c"
        (come_push_stackframe("05function4.c", 1146),skip_pointer_attribute(info),come_pop_stackframe());
        # 1148 "05function4.c"
        pointer_num_155++;
    }
    # 1151 "05function4.c"
    lambda_flag_156=(_Bool)0;
    # 1168 "05function4.c"
    {
        # 1153 "05function4.c"
        pX_157=((struct sInfo*)come_null_check(info, "05function4.c", 1153))->p;
        # 1154 "05function4.c"
        slineX_158=((struct sInfo*)come_null_check(info, "05function4.c", 1154))->sline;
        # 1164 "05function4.c"
        # 1156 "05function4.c"
        if(_if_conditional252=(come_push_stackframe("05function4.c", 1156),__exception_result_var_b304=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1156))->p), come_pop_stackframe(), __exception_result_var_b304)||*((struct sInfo*)come_null_check(info, "05function4.c", 1156))->p==95,        _if_conditional252) {
            # 1157 "05function4.c"
            (void)(come_push_stackframe("05function4.c", 1157),__exception_result_var_b305=((char*)(right_value181=parse_word(info))), come_pop_stackframe(), __exception_result_var_b305);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value181;
            __freed_obj__ = 0;
            # 1162 "05function4.c"
            # 1159 "05function4.c"
            if(_if_conditional253=*((struct sInfo*)come_null_check(info, "05function4.c", 1159))->p==40&&((struct sInfo*)come_null_check(info, "05function4.c", 1159))->in_typedef,            _if_conditional253) {
                # 1160 "05function4.c"
                lambda_flag_156=(_Bool)1;
            }
        }
        # 1164 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1164))->p=pX_157;
        # 1165 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1165))->sline=slineX_158;
    }
    # 1168 "05function4.c"
    # 1169 "05function4.c"
    # 1171 "05function4.c"
    function_pointer_flag_161=(_Bool)0;
    # 1203 "05function4.c"
    {
        # 1173 "05function4.c"
        p_162=((struct sInfo*)come_null_check(info, "05function4.c", 1173))->p;
        # 1174 "05function4.c"
        sline_163=((struct sInfo*)come_null_check(info, "05function4.c", 1174))->sline;
        # 1199 "05function4.c"
        # 1176 "05function4.c"
        if(_if_conditional254=*((struct sInfo*)come_null_check(info, "05function4.c", 1176))->p==40,        _if_conditional254) {
            # 1177 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 1177))->p++;
            # 1178 "05function4.c"
            (come_push_stackframe("05function4.c", 1178),skip_spaces_and_lf(info),come_pop_stackframe());
            # 1180 "05function4.c"
            (come_push_stackframe("05function4.c", 1180),skip_pointer_attribute(info),come_pop_stackframe());
            # 1197 "05function4.c"
            # 1182 "05function4.c"
            if(_if_conditional255=*((struct sInfo*)come_null_check(info, "05function4.c", 1182))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1182))->p==94,            _if_conditional255) {
                # 1183 "05function4.c"
                function_pointer_flag_161=(_Bool)1;
            }
            else {
                # 1197 "05function4.c"
                # 1185 "05function4.c"
                if(_if_conditional256=(come_push_stackframe("05function4.c", 1185),__exception_result_var_b306=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1185))->p), come_pop_stackframe(), __exception_result_var_b306)||*((struct sInfo*)come_null_check(info, "05function4.c", 1185))->p==95,                _if_conditional256) {
                    # 1186 "05function4.c"
                    word_164=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1186),__exception_result_var_b307=((char*)(right_value182=parse_word(info))), come_pop_stackframe(), __exception_result_var_b307));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value182;
                    __freed_obj__ = 0;
                    # 1196 "05function4.c"
                    # 1188 "05function4.c"
                    if(_if_conditional257=*((struct sInfo*)come_null_check(info, "05function4.c", 1188))->p==41,                    _if_conditional257) {
                        # 1189 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1189))->p++;
                        # 1190 "05function4.c"
                        (come_push_stackframe("05function4.c", 1190),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1195 "05function4.c"
                        # 1192 "05function4.c"
                        if(_if_conditional258=*((struct sInfo*)come_null_check(info, "05function4.c", 1192))->p==40,                        _if_conditional258) {
                            # 1193 "05function4.c"
                            function_pointer_flag_161=(_Bool)1;
                        }
                    }
                    if(word_164 && !__freed_obj__) { word_164 = come_decrement_ref_count(word_164, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        # 1199 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1199))->p=p_162;
        # 1200 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1200))->sline=sline_163;
    }
    # 1203 "05function4.c"
    var_name_between_brace_165=(_Bool)0;
    # 1234 "05function4.c"
    {
        # 1205 "05function4.c"
        p_166=((struct sInfo*)come_null_check(info, "05function4.c", 1205))->p;
        # 1206 "05function4.c"
        sline_167=((struct sInfo*)come_null_check(info, "05function4.c", 1206))->sline;
        # 1230 "05function4.c"
        # 1208 "05function4.c"
        if(_if_conditional259=*((struct sInfo*)come_null_check(info, "05function4.c", 1208))->p==40,        _if_conditional259) {
            # 1209 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 1209))->p++;
            # 1210 "05function4.c"
            (come_push_stackframe("05function4.c", 1210),skip_spaces_and_lf(info),come_pop_stackframe());
            # 1212 "05function4.c"
            (come_push_stackframe("05function4.c", 1212),skip_pointer_attribute(info),come_pop_stackframe());
            # 1228 "05function4.c"
            # 1214 "05function4.c"
            if(_if_conditional260=(come_push_stackframe("05function4.c", 1214),__exception_result_var_b308=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1214))->p), come_pop_stackframe(), __exception_result_var_b308)||*((struct sInfo*)come_null_check(info, "05function4.c", 1214))->p==95,            _if_conditional260) {
                # 1215 "05function4.c"
                word_168=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1215),__exception_result_var_b309=((char*)(right_value183=parse_word(info))), come_pop_stackframe(), __exception_result_var_b309));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183;
                __freed_obj__ = 0;
                # 1227 "05function4.c"
                # 1217 "05function4.c"
                if(_if_conditional261=(come_push_stackframe("05function4.c", 1217),__exception_result_var_b310=is_type_name(word_168,info), come_pop_stackframe(), __exception_result_var_b310),                _if_conditional261) {
                }
                else {
                    # 1227 "05function4.c"
                    # 1219 "05function4.c"
                    if(_if_conditional262=*((struct sInfo*)come_null_check(info, "05function4.c", 1219))->p==41,                    _if_conditional262) {
                        # 1220 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1220))->p++;
                        # 1221 "05function4.c"
                        (come_push_stackframe("05function4.c", 1221),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1226 "05function4.c"
                        # 1223 "05function4.c"
                        if(_if_conditional263=*((struct sInfo*)come_null_check(info, "05function4.c", 1223))->p!=40,                        _if_conditional263) {
                            # 1224 "05function4.c"
                            var_name_between_brace_165=(_Bool)1;
                        }
                    }
                }
                if(word_168 && !__freed_obj__) { word_168 = come_decrement_ref_count(word_168, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        # 1230 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1230))->p=p_166;
        # 1231 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1231))->sline=sline_167;
    }
    # 1799 "05function4.c"
    # 1234 "05function4.c"
    if(_if_conditional264=anonymous_type_128&&*((struct sInfo*)come_null_check(info, "05function4.c", 1234))->p==123,    _if_conditional264) {
        # 1235 "05function4.c"
        # 1305 "05function4.c"
        # 1236 "05function4.c"
        if(_if_conditional265=struct__120,        _if_conditional265) {
            # 1241 "05function4.c"
            # 1237 "05function4.c"
            if(_if_conditional266=(come_push_stackframe("05function4.c", 1237),__exception_result_var_b311=string_operator_equals(type_name_109,""), come_pop_stackframe(), __exception_result_var_b311),            _if_conditional266) {
                # 1238 "05function4.c"
                __dec_obj95=type_name_109;
                type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1238),__exception_result_var_b312=((char*)(right_value184=xsprintf("anonymous_typeX%d",++anonymous_num_169))), come_pop_stackframe(), __exception_result_var_b312));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value184;
                __freed_obj__ = 0;
            }
            # 1241 "05function4.c"
            node_170=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1241),__exception_result_var_b313=((struct sNode*)(right_value185=parse_struct((char*)come_increment_ref_count(type_name_109),info))), come_pop_stackframe(), __exception_result_var_b313));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value185;
            __freed_obj__ = 0;
            # 1248 "05function4.c"
            # 1243 "05function4.c"
            if(_if_conditional267=!(come_push_stackframe("05function4.c", 1243),__exception_result_var_b314=node_compile(node_170,info), come_pop_stackframe(), __exception_result_var_b314),            _if_conditional267) {
                # 1244 "05function4.c"
                (come_push_stackframe("05function4.c", 1244),err_msg(info,"parse_struct is failed"),come_pop_stackframe());
                # 1245 "05function4.c"
                __result73__ = __result_obj__ = (come_push_stackframe("05function4.c", 1245),__exception_result_var_b315=((struct tuple3$3sTypephcharphbool*)(right_value187=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value186=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1245)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b315);
                if(node_170 && !__freed_obj__) { node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0); } 
                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value186;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value187;
                __freed_obj__ = 0;
                return __result73__;
            }
            # 1248 "05function4.c"
            pointer_num_171=0;
            # 1255 "05function4.c"
            while(_while_condtional32=*((struct sInfo*)come_null_check(info, "05function4.c", 1249))->p==42,            _while_condtional32) {
                # 1251 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1250))->p++;
                # 1251 "05function4.c"
                (come_push_stackframe("05function4.c", 1251),skip_spaces_and_lf(info),come_pop_stackframe());
                # 1252 "05function4.c"
                pointer_num_171++;
            }
            # 1255 "05function4.c"
            __dec_obj96=type_159;
            type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1255),__exception_result_var_b316=((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1255)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b316));
            if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value188;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value189;
            __freed_obj__ = 0;
            # 1257 "05function4.c"
            ((struct sType*)come_null_check(type_159, "05function4.c", 1257))->mPointerNum=pointer_num_171;
            if(node_170 && !__freed_obj__) { node_170 = come_decrement_ref_count(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            # 1305 "05function4.c"
            # 1259 "05function4.c"
            if(_if_conditional268=enum__122,            _if_conditional268) {
                # 1264 "05function4.c"
                # 1260 "05function4.c"
                if(_if_conditional269=(come_push_stackframe("05function4.c", 1260),__exception_result_var_b317=string_operator_equals(type_name_109,""), come_pop_stackframe(), __exception_result_var_b317),                _if_conditional269) {
                    # 1261 "05function4.c"
                    __dec_obj97=type_name_109;
                    type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1261),__exception_result_var_b318=((char*)(right_value190=xsprintf("anonymous_typeY%d",++anonymous_num_169))), come_pop_stackframe(), __exception_result_var_b318));
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value190;
                    __freed_obj__ = 0;
                }
                # 1264 "05function4.c"
                node_172=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1264),__exception_result_var_b319=((struct sNode*)(right_value191=parse_enum((char*)come_increment_ref_count(type_name_109),info))), come_pop_stackframe(), __exception_result_var_b319));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value191;
                __freed_obj__ = 0;
                # 1273 "05function4.c"
                # 1266 "05function4.c"
                if(_if_conditional270=!((struct sInfo*)come_null_check(info, "05function4.c", 1266))->no_output_err,                _if_conditional270) {
                    # 1271 "05function4.c"
                    # 1267 "05function4.c"
                    if(_if_conditional271=!(come_push_stackframe("05function4.c", 1267),__exception_result_var_b320=node_compile(node_172,info), come_pop_stackframe(), __exception_result_var_b320),                    _if_conditional271) {
                        # 1268 "05function4.c"
                        (come_push_stackframe("05function4.c", 1268),__exception_result_var_b321=printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1268))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1268))->sline), come_pop_stackframe(), __exception_result_var_b321);
                        # 1269 "05function4.c"
                        __result74__ = __result_obj__ = (come_push_stackframe("05function4.c", 1269),__exception_result_var_b322=((struct tuple3$3sTypephcharphbool*)(right_value193=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value192=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1269)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b322);
                        if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value192;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value193;
                        __freed_obj__ = 0;
                        return __result74__;
                    }
                }
                # 1273 "05function4.c"
                __dec_obj98=type_159;
                type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1273),__exception_result_var_b323=((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1273)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b323));
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value194;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value195;
                __freed_obj__ = 0;
                if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                # 1305 "05function4.c"
                # 1275 "05function4.c"
                if(_if_conditional272=union__121,                _if_conditional272) {
                    # 1280 "05function4.c"
                    # 1276 "05function4.c"
                    if(_if_conditional273=(come_push_stackframe("05function4.c", 1276),__exception_result_var_b324=string_operator_equals(type_name_109,""), come_pop_stackframe(), __exception_result_var_b324),                    _if_conditional273) {
                        # 1277 "05function4.c"
                        __dec_obj99=type_name_109;
                        type_name_109=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1277),__exception_result_var_b325=((char*)(right_value196=xsprintf("anonymous_typeZ%d",++anonymous_num_169))), come_pop_stackframe(), __exception_result_var_b325));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value196;
                        __freed_obj__ = 0;
                    }
                    # 1280 "05function4.c"
                    node_173=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1280),__exception_result_var_b326=((struct sNode*)(right_value197=parse_union((char*)come_increment_ref_count(type_name_109),info))), come_pop_stackframe(), __exception_result_var_b326));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    # 1289 "05function4.c"
                    # 1283 "05function4.c"
                    if(_if_conditional274=!(come_push_stackframe("05function4.c", 1283),__exception_result_var_b327=node_compile(node_173,info), come_pop_stackframe(), __exception_result_var_b327),                    _if_conditional274) {
                        # 1284 "05function4.c"
                        (come_push_stackframe("05function4.c", 1284),__exception_result_var_b328=printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1284))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1284))->sline), come_pop_stackframe(), __exception_result_var_b328);
                        # 1285 "05function4.c"
                        __result75__ = __result_obj__ = (come_push_stackframe("05function4.c", 1285),__exception_result_var_b329=((struct tuple3$3sTypephcharphbool*)(right_value199=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value198=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1285)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b329);
                        if(node_173 && !__freed_obj__) { node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value198;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
                        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value199;
                        __freed_obj__ = 0;
                        return __result75__;
                    }
                    # 1289 "05function4.c"
                    pointer_num_174=0;
                    # 1296 "05function4.c"
                    while(_while_condtional33=*((struct sInfo*)come_null_check(info, "05function4.c", 1290))->p==42,                    _while_condtional33) {
                        # 1292 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1291))->p++;
                        # 1292 "05function4.c"
                        (come_push_stackframe("05function4.c", 1292),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1293 "05function4.c"
                        pointer_num_174++;
                    }
                    # 1296 "05function4.c"
                    __dec_obj100=type_159;
                    type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1296),__exception_result_var_b330=((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1296)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b330));
                    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value200;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value201;
                    __freed_obj__ = 0;
                    # 1298 "05function4.c"
                    ((struct sType*)come_null_check(type_159, "05function4.c", 1298))->mPointerNum=pointer_num_174;
                    if(node_173 && !__freed_obj__) { node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    # 1301 "05function4.c"
                    (come_push_stackframe("05function4.c", 1301),err_msg(info,"unexpected { character"),come_pop_stackframe());
                    # 1302 "05function4.c"
                    __result76__ = __result_obj__ = (come_push_stackframe("05function4.c", 1302),__exception_result_var_b331=((struct tuple3$3sTypephcharphbool*)(right_value203=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value202=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1302)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b331);
                    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value202;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value203;
                    __freed_obj__ = 0;
                    return __result76__;
                }
            }
        }
        # 1346 "05function4.c"
        # 1305 "05function4.c"
        if(_if_conditional275=parse_variable_name,        _if_conditional275) {
            # 1306 "05function4.c"
            (come_push_stackframe("05function4.c", 1306),parse_sharp_v5(info),come_pop_stackframe());
            # 1312 "05function4.c"
            # 1307 "05function4.c"
            if(_if_conditional276=var_name_between_brace_165&&*((struct sInfo*)come_null_check(info, "05function4.c", 1307))->p==40,            _if_conditional276) {
                # 1308 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1308))->p++;
                # 1309 "05function4.c"
                (come_push_stackframe("05function4.c", 1309),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            # 1329 "05function4.c"
            # 1312 "05function4.c"
            if(_if_conditional277=*((struct sInfo*)come_null_check(info, "05function4.c", 1312))->p==58,            _if_conditional277) {
                # 1313 "05function4.c"
                __dec_obj101=var_name_160;
                var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1313),__exception_result_var_b332=((char*)(right_value204=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b332));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value204;
                __freed_obj__ = 0;
            }
            else {
                # 1329 "05function4.c"
                # 1315 "05function4.c"
                if(_if_conditional278=anonymous_name_129,                _if_conditional278) {
                    # 1316 "05function4.c"
                    # 1317 "05function4.c"
                    num_anonymous_var_name_175++;
                    # 1318 "05function4.c"
                    __dec_obj102=var_name_160;
                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1318),__exception_result_var_b333=((char*)(right_value205=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_175))), come_pop_stackframe(), __exception_result_var_b333));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value205;
                    __freed_obj__ = 0;
                }
                else {
                    # 1329 "05function4.c"
                    # 1320 "05function4.c"
                    if(_if_conditional279=(come_push_stackframe("05function4.c", 1320),__exception_result_var_b334=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1320))->p), come_pop_stackframe(), __exception_result_var_b334)||*((struct sInfo*)come_null_check(info, "05function4.c", 1320))->p==95,                    _if_conditional279) {
                        # 1321 "05function4.c"
                        __dec_obj103=var_name_160;
                        var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1321),__exception_result_var_b335=((char*)(right_value206=parse_word(info))), come_pop_stackframe(), __exception_result_var_b335));
                        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value206;
                        __freed_obj__ = 0;
                    }
                    else {
                        # 1324 "05function4.c"
                        # 1325 "05function4.c"
                        num_anonymous_var_name_176++;
                        # 1326 "05function4.c"
                        __dec_obj104=var_name_160;
                        var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1326),__exception_result_var_b336=((char*)(right_value207=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_176))), come_pop_stackframe(), __exception_result_var_b336));
                        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value207;
                        __freed_obj__ = 0;
                    }
                }
            }
            # 1334 "05function4.c"
            # 1329 "05function4.c"
            if(_if_conditional280=var_name_between_brace_165&&*((struct sInfo*)come_null_check(info, "05function4.c", 1329))->p==41,            _if_conditional280) {
                # 1330 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1330))->p++;
                # 1331 "05function4.c"
                (come_push_stackframe("05function4.c", 1331),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            # 1345 "05function4.c"
            # 1334 "05function4.c"
            if(_if_conditional281=*((struct sInfo*)come_null_check(info, "05function4.c", 1334))->p==58,            _if_conditional281) {
                # 1335 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1335))->p++;
                # 1336 "05function4.c"
                (come_push_stackframe("05function4.c", 1336),skip_spaces_and_lf(info),come_pop_stackframe());
                # 1338 "05function4.c"
                no_comma_177=((struct sInfo*)come_null_check(info, "05function4.c", 1338))->no_comma;
                # 1339 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1339))->no_comma=(_Bool)1;
                # 1340 "05function4.c"
                node_178=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1340),__exception_result_var_b337=((struct sNode*)(right_value208=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b337));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value208;
                __freed_obj__ = 0;
                # 1341 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1341))->no_comma=no_comma_177;
                # 1343 "05function4.c"
                __dec_obj105=((struct sType*)come_null_check(type_159, "05function4.c", 1343))->mSizeNum;
                ((struct sType*)come_null_check(type_159, "05function4.c", 1343))->mSizeNum=(struct sNode*)come_increment_ref_count(node_178);
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
                if(node_178 && !__freed_obj__) { node_178 = come_decrement_ref_count(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0); } 
            }
        }
    }
    else {
        # 1799 "05function4.c"
        # 1347 "05function4.c"
        if(_if_conditional282=lambda_flag_156,        _if_conditional282) {
            # 1348 "05function4.c"
            # 1363 "05function4.c"
            # 1349 "05function4.c"
            if(_if_conditional287=(come_push_stackframe("05function4.c", 1349),__exception_result_var_b341=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1349))->types,type_name_109), come_pop_stackframe(), __exception_result_var_b341),            _if_conditional287) {
                # 1350 "05function4.c"
                __dec_obj106=result_type_179;
                result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone((come_push_stackframe("05function4.c", 1350),__exception_result_var_b342=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1350))->types,type_name_109), come_pop_stackframe(), __exception_result_var_b342)))));
                if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212;
                __freed_obj__ = 0;
            }
            else {
                # 1363 "05function4.c"
                # 1352 "05function4.c"
                if(_if_conditional293=(come_push_stackframe("05function4.c", 1352),__exception_result_var_b351=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1352))->generics_type_names, "05function4.c", 1352)),(char*)come_increment_ref_count(type_name_109)), come_pop_stackframe(), __exception_result_var_b351),                _if_conditional293) {
                    # 1358 "05function4.c"
                    for(
                    i_188=0 ,                    0;                    _for_condtionalA4=                    i_188<(come_push_stackframe("05function4.c", 1353),__exception_result_var_b352=list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1353))->generics_type_names, "05function4.c", 1353))), come_pop_stackframe(), __exception_result_var_b352) ,                    _for_condtionalA4;                    i_188++ ,                    0                    ){
                        # 1357 "05function4.c"
                        # 1354 "05function4.c"
                        if(_if_conditional296=(come_push_stackframe("05function4.c", 1354),__exception_result_var_b355=string_operator_equals((come_push_stackframe("05function4.c", 1354),__exception_result_var_b354=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1354))->generics_type_names,i_188), come_pop_stackframe(), __exception_result_var_b354),type_name_109), come_pop_stackframe(), __exception_result_var_b355),                        _if_conditional296) {
                            # 1355 "05function4.c"
                            __dec_obj107=result_type_179;
                            result_type_179=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1355),__exception_result_var_b357=((struct sType*)(right_value215=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1355)))),(come_push_stackframe("05function4.c", 1355),__exception_result_var_b356=((char*)(right_value214=xsprintf("generics_type%d",i_188))), come_pop_stackframe(), __exception_result_var_b356),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b357));
                            if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value213;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
                            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value214;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value215);
                            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value215;
                            __freed_obj__ = 0;
                        }
                    }
                }
                else {
                    # 1360 "05function4.c"
                    __dec_obj108=result_type_179;
                    result_type_179=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1360),__exception_result_var_b358=((struct sType*)(right_value217=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value216=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1360)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b358));
                    if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value216;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value217;
                    __freed_obj__ = 0;
                }
            }
            # 1363 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1363))->mConstant=((struct sType*)come_null_check(result_type_179, "05function4.c", 1363))->mConstant||constant_110;
            # 1364 "05function4.c"
            __dec_obj109=((struct sType*)come_null_check(result_type_179, "05function4.c", 1364))->mAlignas;
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1364))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
            # 1365 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1365))->mComeMemCore=((struct sType*)come_null_check(result_type_179, "05function4.c", 1365))->mComeMemCore||come_mem_core__126;
            # 1366 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1366))->mRegister=register__114;
            # 1367 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1367))->mUnsigned=((struct sType*)come_null_check(result_type_179, "05function4.c", 1367))->mUnsigned||unsigned__115;
            # 1368 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1368))->mVolatile=volatile__113;
            # 1369 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1369))->mStatic=((struct sType*)come_null_check(result_type_179, "05function4.c", 1369))->mStatic||static__111;
            # 1370 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1370))->mExtern=((struct sType*)come_null_check(result_type_179, "05function4.c", 1370))->mExtern||extern__124;
            # 1371 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1371))->mInline=((struct sType*)come_null_check(result_type_179, "05function4.c", 1371))->mInline||inline__125;
            # 1372 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1372))->mRestrict=((struct sType*)come_null_check(result_type_179, "05function4.c", 1372))->mRestrict||restrict__119;
            # 1373 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1373))->mLongLong=((struct sType*)come_null_check(result_type_179, "05function4.c", 1373))->mLongLong||long_long_117;
            # 1374 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1374))->mLong=((struct sType*)come_null_check(result_type_179, "05function4.c", 1374))->mLong||long__116;
            # 1375 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1375))->mShort=((struct sType*)come_null_check(result_type_179, "05function4.c", 1375))->mShort||short__118;
            # 1376 "05function4.c"
            ((struct sType*)come_null_check(result_type_179, "05function4.c", 1376))->mPointerNum=pointer_num_155;
            # 1378 "05function4.c"
            __dec_obj110=var_name_160;
            var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1378),__exception_result_var_b359=((char*)(right_value218=parse_word(info))), come_pop_stackframe(), __exception_result_var_b359));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value218;
            __freed_obj__ = 0;
            # 1380 "05function4.c"
            multiple_assgin_var2=(come_push_stackframe("05function4.c", 1380),__exception_result_var_b360=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value219=parse_params(info))), come_pop_stackframe(), __exception_result_var_b360);
            param_types_192=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
            param_names_193=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
            param_default_parametors_194=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
            var_args_195=multiple_assgin_var2->v4;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value219;
            __freed_obj__ = 0;
            # 1382 "05function4.c"
            __dec_obj111=type_159;
            type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1382),__exception_result_var_b361=((struct sType*)(right_value221=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1382)))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b361));
            if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value220;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value221;
            __freed_obj__ = 0;
            # 1384 "05function4.c"
            __dec_obj113=((struct sType*)come_null_check(type_159, "05function4.c", 1384))->mResultType;
            ((struct sType*)come_null_check(type_159, "05function4.c", 1384))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("05function4.c", 1384),__exception_result_var_b362=((struct tuple1$1sTypeph*)(right_value224=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value222=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1384)))),(struct sType*)come_increment_ref_count(result_type_179)))), come_pop_stackframe(), __exception_result_var_b362));
            if(__dec_obj113) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value222;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value224;
            __freed_obj__ = 0;
            # 1385 "05function4.c"
            __dec_obj114=((struct sType*)come_null_check(type_159, "05function4.c", 1385))->mParamTypes;
            ((struct sType*)come_null_check(type_159, "05function4.c", 1385))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_192);
            if(__dec_obj114) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 1386 "05function4.c"
            __dec_obj115=((struct sType*)come_null_check(type_159, "05function4.c", 1386))->mParamNames;
            ((struct sType*)come_null_check(type_159, "05function4.c", 1386))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_193);
            if(__dec_obj115) { come_call_finalizer(list$1charph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 1387 "05function4.c"
            ((struct sType*)come_null_check(type_159, "05function4.c", 1387))->mVarArgs=var_args_195;
            # 1388 "05function4.c"
            ((struct sType*)come_null_check(type_159, "05function4.c", 1388))->mExtern=extern__124;
            if(result_type_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_193 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_193, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_194 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 1799 "05function4.c"
            # 1390 "05function4.c"
            if(_if_conditional297=function_pointer_flag_161,            _if_conditional297) {
                # 1391 "05function4.c"
                ((struct sInfo*)come_null_check(info, "05function4.c", 1391))->p++;
                # 1392 "05function4.c"
                (come_push_stackframe("05function4.c", 1392),skip_spaces_and_lf(info),come_pop_stackframe());
                # 1394 "05function4.c"
                (come_push_stackframe("05function4.c", 1394),skip_pointer_attribute(info),come_pop_stackframe());
                # 1401 "05function4.c"
                # 1396 "05function4.c"
                if(_if_conditional298=*((struct sInfo*)come_null_check(info, "05function4.c", 1396))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1396))->p==94,                _if_conditional298) {
                    # 1397 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1397))->p++;
                    # 1398 "05function4.c"
                    (come_push_stackframe("05function4.c", 1398),skip_spaces_and_lf(info),come_pop_stackframe());
                }
                # 1401 "05function4.c"
                (come_push_stackframe("05function4.c", 1401),skip_pointer_attribute(info),come_pop_stackframe());
                # 1403 "05function4.c"
                # 1419 "05function4.c"
                # 1404 "05function4.c"
                if(_if_conditional299=(come_push_stackframe("05function4.c", 1404),__exception_result_var_b363=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1404))->types,type_name_109), come_pop_stackframe(), __exception_result_var_b363),                _if_conditional299) {
                    # 1405 "05function4.c"
                    __dec_obj116=result_type_196;
                    result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone((come_push_stackframe("05function4.c", 1405),__exception_result_var_b364=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1405))->types,type_name_109), come_pop_stackframe(), __exception_result_var_b364)))));
                    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value225;
                    __freed_obj__ = 0;
                }
                else {
                    # 1419 "05function4.c"
                    # 1408 "05function4.c"
                    if(_if_conditional300=(come_push_stackframe("05function4.c", 1408),__exception_result_var_b365=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1408))->generics_type_names, "05function4.c", 1408)),(char*)come_increment_ref_count(type_name_109)), come_pop_stackframe(), __exception_result_var_b365),                    _if_conditional300) {
                        # 1414 "05function4.c"
                        for(
                        i_197=0 ,                        0;                        _for_condtionalA5=                        i_197<(come_push_stackframe("05function4.c", 1409),__exception_result_var_b366=list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1409))->generics_type_names, "05function4.c", 1409))), come_pop_stackframe(), __exception_result_var_b366) ,                        _for_condtionalA5;                        i_197++ ,                        0                        ){
                            # 1413 "05function4.c"
                            # 1410 "05function4.c"
                            if(_if_conditional301=(come_push_stackframe("05function4.c", 1410),__exception_result_var_b368=string_operator_equals((come_push_stackframe("05function4.c", 1410),__exception_result_var_b367=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1410))->generics_type_names,i_197), come_pop_stackframe(), __exception_result_var_b367),type_name_109), come_pop_stackframe(), __exception_result_var_b368),                            _if_conditional301) {
                                # 1411 "05function4.c"
                                __dec_obj117=result_type_196;
                                result_type_196=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1411),__exception_result_var_b370=((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1411)))),(come_push_stackframe("05function4.c", 1411),__exception_result_var_b369=((char*)(right_value227=xsprintf("generics_type%d",i_197))), come_pop_stackframe(), __exception_result_var_b369),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b370));
                                if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                                if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value226;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
                                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value227;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value228);
                                if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value228;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                    else {
                        # 1416 "05function4.c"
                        __dec_obj118=result_type_196;
                        result_type_196=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1416),__exception_result_var_b371=((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1416)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b371));
                        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value229;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value230;
                        __freed_obj__ = 0;
                    }
                }
                # 1419 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1419))->mConstant=((struct sType*)come_null_check(result_type_196, "05function4.c", 1419))->mConstant||constant_110;
                # 1420 "05function4.c"
                __dec_obj119=((struct sType*)come_null_check(result_type_196, "05function4.c", 1420))->mAlignas;
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1420))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
                # 1421 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1421))->mComeMemCore=((struct sType*)come_null_check(result_type_196, "05function4.c", 1421))->mComeMemCore||come_mem_core__126;
                # 1422 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1422))->mRegister=register__114;
                # 1423 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1423))->mUnsigned=((struct sType*)come_null_check(result_type_196, "05function4.c", 1423))->mUnsigned||unsigned__115;
                # 1424 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1424))->mVolatile=volatile__113;
                # 1425 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1425))->mStatic=((struct sType*)come_null_check(result_type_196, "05function4.c", 1425))->mStatic||static__111;
                # 1426 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1426))->mExtern=((struct sType*)come_null_check(result_type_196, "05function4.c", 1426))->mExtern||extern__124;
                # 1427 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1427))->mInline=((struct sType*)come_null_check(result_type_196, "05function4.c", 1427))->mInline||inline__125;
                # 1428 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1428))->mRestrict=((struct sType*)come_null_check(result_type_196, "05function4.c", 1428))->mRestrict||restrict__119;
                # 1429 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1429))->mLongLong=((struct sType*)come_null_check(result_type_196, "05function4.c", 1429))->mLongLong||long_long_117;
                # 1430 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1430))->mLong=((struct sType*)come_null_check(result_type_196, "05function4.c", 1430))->mLong||long__116;
                # 1431 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1431))->mShort=((struct sType*)come_null_check(result_type_196, "05function4.c", 1431))->mShort||short__118;
                # 1432 "05function4.c"
                ((struct sType*)come_null_check(result_type_196, "05function4.c", 1432))->mPointerNum+=pointer_num_155;
                # 1445 "05function4.c"
                # 1434 "05function4.c"
                if(_if_conditional302=(come_push_stackframe("05function4.c", 1434),__exception_result_var_b372=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1434))->p), come_pop_stackframe(), __exception_result_var_b372)||*((struct sInfo*)come_null_check(info, "05function4.c", 1434))->p==95,                _if_conditional302) {
                    # 1435 "05function4.c"
                    __dec_obj120=var_name_160;
                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1435),__exception_result_var_b373=((char*)(right_value231=parse_word(info))), come_pop_stackframe(), __exception_result_var_b373));
                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value231;
                    __freed_obj__ = 0;
                    # 1439 "05function4.c"
                    # 1436 "05function4.c"
                    if(_if_conditional303=*((struct sInfo*)come_null_check(info, "05function4.c", 1436))->p==40,                    _if_conditional303) {
                        # 1437 "05function4.c"
                        __result95__ = __result_obj__ = (come_push_stackframe("05function4.c", 1437),__exception_result_var_b374=((struct tuple3$3sTypephcharphbool*)(right_value233=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value232=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1437)))),(struct sType*)come_increment_ref_count(result_type_196),(char*)come_increment_ref_count(var_name_160),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b374);
                        if(result_type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value232;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value233);
                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value233;
                        __freed_obj__ = 0;
                        return __result95__;
                    }
                }
                else {
                    # 1441 "05function4.c"
                    # 1442 "05function4.c"
                    num_anonymous_var_name_198++;
                    # 1443 "05function4.c"
                    __dec_obj121=var_name_160;
                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1443),__exception_result_var_b375=((char*)(right_value234=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_198))), come_pop_stackframe(), __exception_result_var_b375));
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = 0;
                }
                # 1445 "05function4.c"
                (come_push_stackframe("05function4.c", 1445),__exception_result_var_b376=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b376);
                # 1447 "05function4.c"
                multiple_assgin_var3=(come_push_stackframe("05function4.c", 1447),__exception_result_var_b377=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value235=parse_params(info))), come_pop_stackframe(), __exception_result_var_b377);
                param_types_199=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
                param_names_200=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
                param_default_parametors_201=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
                var_args_202=multiple_assgin_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value235;
                __freed_obj__ = 0;
                # 1449 "05function4.c"
                __dec_obj122=type_159;
                type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1449),__exception_result_var_b378=((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1449)))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b378));
                if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value236;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value237;
                __freed_obj__ = 0;
                # 1451 "05function4.c"
                __dec_obj123=((struct sType*)come_null_check(type_159, "05function4.c", 1451))->mResultType;
                ((struct sType*)come_null_check(type_159, "05function4.c", 1451))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("05function4.c", 1451),__exception_result_var_b379=((struct tuple1$1sTypeph*)(right_value239=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value238=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1451)))),(struct sType*)come_increment_ref_count(result_type_196)))), come_pop_stackframe(), __exception_result_var_b379));
                if(__dec_obj123) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value238;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value239;
                __freed_obj__ = 0;
                # 1452 "05function4.c"
                __dec_obj124=((struct sType*)come_null_check(type_159, "05function4.c", 1452))->mParamTypes;
                ((struct sType*)come_null_check(type_159, "05function4.c", 1452))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_199);
                if(__dec_obj124) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 1453 "05function4.c"
                __dec_obj125=((struct sType*)come_null_check(type_159, "05function4.c", 1453))->mParamNames;
                ((struct sType*)come_null_check(type_159, "05function4.c", 1453))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_200);
                if(__dec_obj125) { come_call_finalizer(list$1charph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 1454 "05function4.c"
                ((struct sType*)come_null_check(type_159, "05function4.c", 1454))->mVarArgs=var_args_202;
                # 1455 "05function4.c"
                ((struct sType*)come_null_check(type_159, "05function4.c", 1455))->mExtern=extern__124;
                if(result_type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_199 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_200 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_201 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_201, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                # 1799 "05function4.c"
                # 1457 "05function4.c"
                if(_if_conditional304=(come_push_stackframe("05function4.c", 1457),__exception_result_var_b380=string_operator_equals(type_name_109,"__typeof__"), come_pop_stackframe(), __exception_result_var_b380)&&*((struct sInfo*)come_null_check(info, "05function4.c", 1457))->p==40,                _if_conditional304) {
                    # 1458 "05function4.c"
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1458))->p++;
                    # 1459 "05function4.c"
                    (come_push_stackframe("05function4.c", 1459),skip_spaces_and_lf(info),come_pop_stackframe());
                    # 1461 "05function4.c"
                    exp_203=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1461),__exception_result_var_b381=((struct sNode*)(right_value240=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b381));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value240;
                    __freed_obj__ = 0;
                    # 1463 "05function4.c"
                    (come_push_stackframe("05function4.c", 1463),__exception_result_var_b382=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b382);
                    # 1470 "05function4.c"
                    # 1465 "05function4.c"
                    if(_if_conditional305=!(come_push_stackframe("05function4.c", 1465),__exception_result_var_b383=node_compile(exp_203,info), come_pop_stackframe(), __exception_result_var_b383),                    _if_conditional305) {
                        # 1466 "05function4.c"
                        (come_push_stackframe("05function4.c", 1466),err_msg(info,"invalid __typeof__ expression"),come_pop_stackframe());
                        # 1467 "05function4.c"
                        __result97__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value242=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value241=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1467)))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_203 && !__freed_obj__) { exp_203 = come_decrement_ref_count(exp_203, ((struct sNode*)exp_203)->finalize, ((struct sNode*)exp_203)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value241;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
                        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value242;
                        __freed_obj__ = 0;
                        return __result97__;
                    }
                    # 1470 "05function4.c"
                    come_value_204=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05function4.c", 1470),__exception_result_var_b384=((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b384));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
                    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value243;
                    __freed_obj__ = 0;
                    # 1471 "05function4.c"
                    (come_push_stackframe("05function4.c", 1471),dec_stack_ptr(1,info),come_pop_stackframe());
                    # 1473 "05function4.c"
                    __dec_obj126=type_159;
                    type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(((struct CVALUE*)come_null_check(come_value_204, "05function4.c", 1473))->type))));
                    if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value244);
                    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value244;
                    __freed_obj__ = 0;
                    # 1518 "05function4.c"
                    # 1476 "05function4.c"
                    if(_if_conditional308=parse_variable_name,                    _if_conditional308) {
                        # 1477 "05function4.c"
                        (come_push_stackframe("05function4.c", 1477),parse_sharp_v5(info),come_pop_stackframe());
                        # 1484 "05function4.c"
                        # 1479 "05function4.c"
                        if(_if_conditional309=var_name_between_brace_165&&*((struct sInfo*)come_null_check(info, "05function4.c", 1479))->p==40,                        _if_conditional309) {
                            # 1480 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1480))->p++;
                            # 1481 "05function4.c"
                            (come_push_stackframe("05function4.c", 1481),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        # 1501 "05function4.c"
                        # 1484 "05function4.c"
                        if(_if_conditional310=*((struct sInfo*)come_null_check(info, "05function4.c", 1484))->p==58,                        _if_conditional310) {
                            # 1485 "05function4.c"
                            __dec_obj127=var_name_160;
                            var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1485),__exception_result_var_b385=((char*)(right_value245=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b385));
                            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value245;
                            __freed_obj__ = 0;
                        }
                        else {
                            # 1501 "05function4.c"
                            # 1487 "05function4.c"
                            if(_if_conditional311=anonymous_name_129,                            _if_conditional311) {
                                # 1488 "05function4.c"
                                # 1489 "05function4.c"
                                num_anonymous_var_name_205++;
                                # 1490 "05function4.c"
                                __dec_obj128=var_name_160;
                                var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1490),__exception_result_var_b386=((char*)(right_value246=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_205))), come_pop_stackframe(), __exception_result_var_b386));
                                if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value246;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 1501 "05function4.c"
                                # 1492 "05function4.c"
                                if(_if_conditional312=(come_push_stackframe("05function4.c", 1492),__exception_result_var_b387=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1492))->p), come_pop_stackframe(), __exception_result_var_b387)||*((struct sInfo*)come_null_check(info, "05function4.c", 1492))->p==95,                                _if_conditional312) {
                                    # 1493 "05function4.c"
                                    __dec_obj129=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1493),__exception_result_var_b388=((char*)(right_value247=parse_word(info))), come_pop_stackframe(), __exception_result_var_b388));
                                    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value247;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    # 1496 "05function4.c"
                                    # 1497 "05function4.c"
                                    num_anonymous_var_name_206++;
                                    # 1498 "05function4.c"
                                    __dec_obj130=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1498),__exception_result_var_b389=((char*)(right_value248=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_206))), come_pop_stackframe(), __exception_result_var_b389));
                                    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                                    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value248;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        # 1506 "05function4.c"
                        # 1501 "05function4.c"
                        if(_if_conditional313=var_name_between_brace_165&&*((struct sInfo*)come_null_check(info, "05function4.c", 1501))->p==41,                        _if_conditional313) {
                            # 1502 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1502))->p++;
                            # 1503 "05function4.c"
                            (come_push_stackframe("05function4.c", 1503),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        # 1517 "05function4.c"
                        # 1506 "05function4.c"
                        if(_if_conditional314=*((struct sInfo*)come_null_check(info, "05function4.c", 1506))->p==58,                        _if_conditional314) {
                            # 1507 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1507))->p++;
                            # 1508 "05function4.c"
                            (come_push_stackframe("05function4.c", 1508),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 1510 "05function4.c"
                            no_comma_207=((struct sInfo*)come_null_check(info, "05function4.c", 1510))->no_comma;
                            # 1511 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1511))->no_comma=(_Bool)1;
                            # 1512 "05function4.c"
                            node_208=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1512),__exception_result_var_b390=((struct sNode*)(right_value249=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b390));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value249;
                            __freed_obj__ = 0;
                            # 1513 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1513))->no_comma=no_comma_207;
                            # 1515 "05function4.c"
                            __dec_obj131=((struct sType*)come_null_check(type_159, "05function4.c", 1515))->mSizeNum;
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1515))->mSizeNum=(struct sNode*)come_increment_ref_count(node_208);
                            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0); }
                            if(node_208 && !__freed_obj__) { node_208 = come_decrement_ref_count(node_208, ((struct sNode*)node_208)->finalize, ((struct sNode*)node_208)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                    if(exp_203 && !__freed_obj__) { exp_203 = come_decrement_ref_count(exp_203, ((struct sNode*)exp_203)->finalize, ((struct sNode*)exp_203)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 1652 "05function4.c"
                    # 1520 "05function4.c"
                    if(_if_conditional315=(come_push_stackframe("05function4.c", 1520),__exception_result_var_b391=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1520))->types,type_name_109), come_pop_stackframe(), __exception_result_var_b391),                    _if_conditional315) {
                        # 1521 "05function4.c"
                        __dec_obj132=type_159;
                        type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone((come_push_stackframe("05function4.c", 1521),__exception_result_var_b392=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1521))->types,type_name_109), come_pop_stackframe(), __exception_result_var_b392)))));
                        if(__dec_obj132) { come_call_finalizer(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value250;
                        __freed_obj__ = 0;
                        # 1522 "05function4.c"
                        __dec_obj133=((struct sType*)come_null_check(type_159, "05function4.c", 1522))->mOriginalTypeName;
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1522))->mOriginalTypeName=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1522),__exception_result_var_b393=((char*)(right_value251=__builtin_string(type_name_109))), come_pop_stackframe(), __exception_result_var_b393));
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
                        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value251;
                        __freed_obj__ = 0;
                        # 1523 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1523))->mOriginalTypeNamePointerNum=pointer_num_155;
                        # 1525 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1525))->mConstant=((struct sType*)come_null_check(type_159, "05function4.c", 1525))->mConstant||constant_110;
                        # 1526 "05function4.c"
                        __dec_obj134=((struct sType*)come_null_check(type_159, "05function4.c", 1526))->mAlignas;
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1526))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                        # 1527 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1527))->mComeMemCore=((struct sType*)come_null_check(type_159, "05function4.c", 1527))->mComeMemCore||come_mem_core__126;
                        # 1528 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1528))->mRegister=register__114;
                        # 1529 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1529))->mUnsigned=((struct sType*)come_null_check(type_159, "05function4.c", 1529))->mUnsigned||unsigned__115;
                        # 1530 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1530))->mVolatile=volatile__113;
                        # 1531 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1531))->mStatic=((struct sType*)come_null_check(type_159, "05function4.c", 1531))->mStatic||static__111;
                        # 1532 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1532))->mExtern=((struct sType*)come_null_check(type_159, "05function4.c", 1532))->mExtern||extern__124;
                        # 1533 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1533))->mInline=((struct sType*)come_null_check(type_159, "05function4.c", 1533))->mInline||inline__125;
                        # 1534 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1534))->mRestrict=((struct sType*)come_null_check(type_159, "05function4.c", 1534))->mRestrict||restrict__119;
                        # 1535 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1535))->mLongLong=((struct sType*)come_null_check(type_159, "05function4.c", 1535))->mLongLong||long_long_117;
                        # 1536 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1536))->mLong=((struct sType*)come_null_check(type_159, "05function4.c", 1536))->mLong||long__116;
                        # 1537 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1537))->mShort=((struct sType*)come_null_check(type_159, "05function4.c", 1537))->mShort||short__118;
                        # 1538 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1538))->mPointerNum+=pointer_num_155;
                    }
                    else {
                        # 1652 "05function4.c"
                        # 1540 "05function4.c"
                        if(_if_conditional316=(come_push_stackframe("05function4.c", 1540),__exception_result_var_b394=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1540))->generics_type_names, "05function4.c", 1540)),(char*)come_increment_ref_count(type_name_109)), come_pop_stackframe(), __exception_result_var_b394),                        _if_conditional316) {
                            # 1547 "05function4.c"
                            for(
                            i_209=0 ,                            0;                            _for_condtionalA6=                            i_209<(come_push_stackframe("05function4.c", 1541),__exception_result_var_b395=list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1541))->generics_type_names, "05function4.c", 1541))), come_pop_stackframe(), __exception_result_var_b395) ,                            _for_condtionalA6;                            i_209++ ,                            0                            ){
                                # 1545 "05function4.c"
                                # 1542 "05function4.c"
                                if(_if_conditional317=(come_push_stackframe("05function4.c", 1542),__exception_result_var_b397=string_operator_equals((come_push_stackframe("05function4.c", 1542),__exception_result_var_b396=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1542))->generics_type_names,i_209), come_pop_stackframe(), __exception_result_var_b396),type_name_109), come_pop_stackframe(), __exception_result_var_b397),                                _if_conditional317) {
                                    # 1543 "05function4.c"
                                    __dec_obj135=type_159;
                                    type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1543),__exception_result_var_b399=((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1543)))),(come_push_stackframe("05function4.c", 1543),__exception_result_var_b398=((char*)(right_value253=xsprintf("generics_type%d",i_209))), come_pop_stackframe(), __exception_result_var_b398),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b399));
                                    if(__dec_obj135) { come_call_finalizer(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value252;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value253);
                                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value253;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value254);
                                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value254;
                                    __freed_obj__ = 0;
                                }
                            }
                            # 1547 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1547))->mConstant=((struct sType*)come_null_check(type_159, "05function4.c", 1547))->mConstant||constant_110;
                            # 1548 "05function4.c"
                            __dec_obj136=((struct sType*)come_null_check(type_159, "05function4.c", 1548))->mAlignas;
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1548))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                            if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0); }
                            # 1549 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1549))->mComeMemCore=((struct sType*)come_null_check(type_159, "05function4.c", 1549))->mComeMemCore||come_mem_core__126;
                            # 1550 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1550))->mRegister=register__114;
                            # 1551 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1551))->mUnsigned=((struct sType*)come_null_check(type_159, "05function4.c", 1551))->mUnsigned||unsigned__115;
                            # 1552 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1552))->mVolatile=volatile__113;
                            # 1553 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1553))->mStatic=((struct sType*)come_null_check(type_159, "05function4.c", 1553))->mStatic||static__111;
                            # 1554 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1554))->mExtern=((struct sType*)come_null_check(type_159, "05function4.c", 1554))->mExtern||extern__124;
                            # 1555 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1555))->mInline=((struct sType*)come_null_check(type_159, "05function4.c", 1555))->mInline||inline__125;
                            # 1556 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1556))->mRestrict=((struct sType*)come_null_check(type_159, "05function4.c", 1556))->mRestrict||restrict__119;
                            # 1557 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1557))->mLongLong=((struct sType*)come_null_check(type_159, "05function4.c", 1557))->mLongLong||long_long_117;
                            # 1558 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1558))->mLong=((struct sType*)come_null_check(type_159, "05function4.c", 1558))->mLong||long__116;
                            # 1559 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1559))->mShort=((struct sType*)come_null_check(type_159, "05function4.c", 1559))->mShort||short__118;
                            # 1560 "05function4.c"
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1560))->mPointerNum+=pointer_num_155;
                        }
                        else {
                            # 1652 "05function4.c"
                            # 1562 "05function4.c"
                            if(_if_conditional318=*((struct sInfo*)come_null_check(info, "05function4.c", 1562))->p==60,                            _if_conditional318) {
                                # 1563 "05function4.c"
                                ((struct sInfo*)come_null_check(info, "05function4.c", 1563))->p++;
                                # 1564 "05function4.c"
                                (come_push_stackframe("05function4.c", 1564),skip_spaces_and_lf(info),come_pop_stackframe());
                                # 1571 "05function4.c"
                                # 1566 "05function4.c"
                                if(_if_conditional323=(come_push_stackframe("05function4.c", 1566),__exception_result_var_b403=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1566))->generics_classes,type_name_109), come_pop_stackframe(), __exception_result_var_b403)==((void*)0),                                _if_conditional323) {
                                    # 1568 "05function4.c"
                                    __result103__ = __result_obj__ = (come_push_stackframe("05function4.c", 1568),__exception_result_var_b404=((struct tuple3$3sTypephcharphbool*)(right_value259=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value258=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1568)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b404);
                                    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value258;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
                                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value259;
                                    __freed_obj__ = 0;
                                    return __result103__;
                                }
                                # 1571 "05function4.c"
                                __dec_obj137=type_159;
                                type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1571),__exception_result_var_b405=((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1571)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b405));
                                if(__dec_obj137) { come_call_finalizer(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value260;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
                                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value261;
                                __freed_obj__ = 0;
                                # 1598 "05function4.c"
                                while(_while_condtional37=(_Bool)1,                                _while_condtional37) {
                                    # 1576 "05function4.c"
                                    multiple_assgin_var4=(come_push_stackframe("05function4.c", 1576),__exception_result_var_b406=((struct tuple3$3sTypephcharphbool*)(right_value262=parse_type(info,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b406);
                                    generics_type_213=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                                    var_name_214=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                                    err_215=multiple_assgin_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                                    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value262;
                                    __freed_obj__ = 0;
                                    # 1580 "05function4.c"
                                    # 1576 "05function4.c"
                                    if(_if_conditional324=!err_215,                                    _if_conditional324) {
                                        # 1577 "05function4.c"
                                        __result104__ = __result_obj__ = (come_push_stackframe("05function4.c", 1577),__exception_result_var_b407=((struct tuple3$3sTypephcharphbool*)(right_value264=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value263=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1577)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b407);
                                        if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                                        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value263;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value264);
                                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value264;
                                        __freed_obj__ = 0;
                                        return __result104__;
                                    }
                                    # 1580 "05function4.c"
                                    (come_push_stackframe("05function4.c", 1580),__exception_result_var_b408=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1580))->mGenericsTypes, "05function4.c", 1580)),(struct sType*)come_increment_ref_count(generics_type_213)), come_pop_stackframe(), __exception_result_var_b408);
                                    # 1596 "05function4.c"
                                    # 1582 "05function4.c"
                                    if(_if_conditional325=*((struct sInfo*)come_null_check(info, "05function4.c", 1582))->p==44,                                    _if_conditional325) {
                                        # 1583 "05function4.c"
                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1583))->p++;
                                        # 1584 "05function4.c"
                                        (come_push_stackframe("05function4.c", 1584),skip_spaces_and_lf(info),come_pop_stackframe());
                                    }
                                    else {
                                        # 1596 "05function4.c"
                                        # 1586 "05function4.c"
                                        if(_if_conditional326=*((struct sInfo*)come_null_check(info, "05function4.c", 1586))->p==62,                                        _if_conditional326) {
                                            # 1587 "05function4.c"
                                            ((struct sInfo*)come_null_check(info, "05function4.c", 1587))->p++;
                                            # 1588 "05function4.c"
                                            (come_push_stackframe("05function4.c", 1588),skip_spaces_and_lf(info),come_pop_stackframe());
                                            # 1590 "05function4.c"
                                            if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                        }
                                        else {
                                            # 1593 "05function4.c"
                                            (come_push_stackframe("05function4.c", 1593),err_msg(info,"invalid generics type\n"),come_pop_stackframe());
                                            # 1594 "05function4.c"
                                            __result105__ = __result_obj__ = (come_push_stackframe("05function4.c", 1594),__exception_result_var_b409=((struct tuple3$3sTypephcharphbool*)(right_value266=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value265=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1594)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b409);
                                            if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                            if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                                            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value265;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
                                            if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value266;
                                            __freed_obj__ = 0;
                                            return __result105__;
                                        }
                                    }
                                    if(generics_type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_214 && !__freed_obj__) { var_name_214 = come_decrement_ref_count(var_name_214, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 1610 "05function4.c"
                                # 1598 "05function4.c"
                                if(_if_conditional327=(come_push_stackframe("05function4.c", 1598),__exception_result_var_b410=is_contained_generics_class(type_159,info), come_pop_stackframe(), __exception_result_var_b410),                                _if_conditional327) {
                                    # 1599 "05function4.c"
                                    __dec_obj138=type_159;
                                    type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1599),__exception_result_var_b411=((struct sType*)(right_value267=solve_generics(type_159,((struct sInfo*)come_null_check(info, "05function4.c", 1599))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b411));
                                    if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value267;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    # 1608 "05function4.c"
                                    # 1602 "05function4.c"
                                    if(_if_conditional328=!(come_push_stackframe("05function4.c", 1602),__exception_result_var_b412=output_generics_struct(type_159,type_159,info), come_pop_stackframe(), __exception_result_var_b412),                                    _if_conditional328) {
                                        # 1604 "05function4.c"
                                        new_name_216=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1604),__exception_result_var_b413=((char*)(right_value268=create_generics_name(type_159,info))), come_pop_stackframe(), __exception_result_var_b413));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value268;
                                        __freed_obj__ = 0;
                                        # 1605 "05function4.c"
                                        (come_push_stackframe("05function4.c", 1605),__exception_result_var_b414=printf("%s %d: output generics is failed(%s)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1605))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1605))->sline,new_name_216), come_pop_stackframe(), __exception_result_var_b414);
                                        # 1606 "05function4.c"
                                        (come_push_stackframe("05function4.c", 1606),exit(7),come_pop_stackframe());
                                        if(new_name_216 && !__freed_obj__) { new_name_216 = come_decrement_ref_count(new_name_216, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                }
                                # 1610 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1610))->mConstant=((struct sType*)come_null_check(type_159, "05function4.c", 1610))->mConstant||constant_110;
                                # 1611 "05function4.c"
                                __dec_obj139=((struct sType*)come_null_check(type_159, "05function4.c", 1611))->mAlignas;
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1611))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                                # 1612 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1612))->mComeMemCore=((struct sType*)come_null_check(type_159, "05function4.c", 1612))->mComeMemCore||come_mem_core__126;
                                # 1613 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1613))->mRegister=register__114;
                                # 1614 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1614))->mUnsigned=((struct sType*)come_null_check(type_159, "05function4.c", 1614))->mUnsigned||unsigned__115;
                                # 1615 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1615))->mVolatile=volatile__113;
                                # 1616 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1616))->mStatic=((struct sType*)come_null_check(type_159, "05function4.c", 1616))->mStatic||static__111;
                                # 1617 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1617))->mExtern=((struct sType*)come_null_check(type_159, "05function4.c", 1617))->mExtern||extern__124;
                                # 1618 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1618))->mInline=((struct sType*)come_null_check(type_159, "05function4.c", 1618))->mInline||inline__125;
                                # 1619 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1619))->mRestrict=((struct sType*)come_null_check(type_159, "05function4.c", 1619))->mRestrict||restrict__119;
                                # 1620 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1620))->mLongLong=((struct sType*)come_null_check(type_159, "05function4.c", 1620))->mLongLong||long_long_117;
                                # 1621 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1621))->mLong=((struct sType*)come_null_check(type_159, "05function4.c", 1621))->mLong||long__116;
                                # 1622 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1622))->mShort=((struct sType*)come_null_check(type_159, "05function4.c", 1622))->mShort||short__118;
                                # 1623 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1623))->mPointerNum+=pointer_num_155;
                            }
                            else {
                                # 1634 "05function4.c"
                                # 1626 "05function4.c"
                                if(_if_conditional329=struct__120,                                _if_conditional329) {
                                    # 1627 "05function4.c"
                                    klass_217=(come_push_stackframe("05function4.c", 1627),__exception_result_var_b415=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1627))->classes,type_name_109), come_pop_stackframe(), __exception_result_var_b415);
                                    # 1632 "05function4.c"
                                    # 1629 "05function4.c"
                                    if(_if_conditional330=klass_217==((void*)0)&&*((struct sInfo*)come_null_check(info, "05function4.c", 1629))->p!=60,                                    _if_conditional330) {
                                        # 1630 "05function4.c"
                                        (come_push_stackframe("05function4.c", 1630),__exception_result_var_b448=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1630))->classes, "05function4.c", 1630)),(char*)come_increment_ref_count(type_name_109),(struct sClass*)come_increment_ref_count((come_push_stackframe("05function4.c", 1630),__exception_result_var_b447=((struct sClass*)(right_value280=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value279=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1630)))),type_name_109,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b447))), come_pop_stackframe(), __exception_result_var_b448);
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value279;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
                                        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value280;
                                        __freed_obj__ = 0;
                                    }
                                }
                                # 1634 "05function4.c"
                                __dec_obj140=type_159;
                                type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1634),__exception_result_var_b449=((struct sType*)(right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1634)))),type_name_109,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b449));
                                if(__dec_obj140) { come_call_finalizer(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value281;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282);
                                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value282;
                                __freed_obj__ = 0;
                                # 1636 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1636))->mConstant=((struct sType*)come_null_check(type_159, "05function4.c", 1636))->mConstant||constant_110;
                                # 1637 "05function4.c"
                                __dec_obj141=((struct sType*)come_null_check(type_159, "05function4.c", 1637))->mAlignas;
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1637))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__127);
                                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                                # 1638 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1638))->mComeMemCore=((struct sType*)come_null_check(type_159, "05function4.c", 1638))->mComeMemCore||come_mem_core__126;
                                # 1639 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1639))->mRegister=register__114;
                                # 1640 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1640))->mUnsigned=((struct sType*)come_null_check(type_159, "05function4.c", 1640))->mUnsigned||unsigned__115;
                                # 1641 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1641))->mVolatile=volatile__113;
                                # 1642 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1642))->mStatic=((struct sType*)come_null_check(type_159, "05function4.c", 1642))->mStatic||static__111;
                                # 1643 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1643))->mExtern=((struct sType*)come_null_check(type_159, "05function4.c", 1643))->mExtern||extern__124;
                                # 1644 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1644))->mInline=((struct sType*)come_null_check(type_159, "05function4.c", 1644))->mInline||inline__125;
                                # 1645 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1645))->mRestrict=((struct sType*)come_null_check(type_159, "05function4.c", 1645))->mRestrict||restrict__119;
                                # 1646 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1646))->mLongLong=((struct sType*)come_null_check(type_159, "05function4.c", 1646))->mLongLong||long_long_117;
                                # 1647 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1647))->mLong=((struct sType*)come_null_check(type_159, "05function4.c", 1647))->mLong||long__116;
                                # 1648 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1648))->mShort=((struct sType*)come_null_check(type_159, "05function4.c", 1648))->mShort||short__118;
                                # 1649 "05function4.c"
                                ((struct sType*)come_null_check(type_159, "05function4.c", 1649))->mPointerNum+=pointer_num_155;
                            }
                        }
                    }
                    # 1652 "05function4.c"
                    (come_push_stackframe("05function4.c", 1652),skip_pointer_attribute(info),come_pop_stackframe());
                    # 1666 "05function4.c"
                    while(_while_condtional47=*((struct sInfo*)come_null_check(info, "05function4.c", 1654))->p==42,                    _while_condtional47) {
                        # 1655 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1655))->p++;
                        # 1656 "05function4.c"
                        (come_push_stackframe("05function4.c", 1656),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1658 "05function4.c"
                        (come_push_stackframe("05function4.c", 1658),skip_pointer_attribute(info),come_pop_stackframe());
                        # 1660 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1660))->mPointerNum++;
                        # 1664 "05function4.c"
                        # 1661 "05function4.c"
                        if(_if_conditional384=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1661))->mNoSolvedGenericsType, "05function4.c", 1661))->v1,                        _if_conditional384) {
                            # 1662 "05function4.c"
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1662))->mNoSolvedGenericsType, "05function4.c", 1662))->v1, "05function4.c", 1662))->mPointerNum++;
                        }
                    }
                    # 1676 "05function4.c"
                    # 1666 "05function4.c"
                    if(_if_conditional385=*((struct sInfo*)come_null_check(info, "05function4.c", 1666))->p==37,                    _if_conditional385) {
                        # 1667 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1667))->p++;
                        # 1668 "05function4.c"
                        (come_push_stackframe("05function4.c", 1668),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1670 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1670))->mHeap=(_Bool)1;
                        # 1674 "05function4.c"
                        # 1671 "05function4.c"
                        if(_if_conditional386=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1671))->mNoSolvedGenericsType, "05function4.c", 1671))->v1,                        _if_conditional386) {
                            # 1672 "05function4.c"
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1672))->mNoSolvedGenericsType, "05function4.c", 1672))->v1, "05function4.c", 1672))->mHeap=(_Bool)1;
                        }
                    }
                    # 1687 "05function4.c"
                    # 1676 "05function4.c"
                    if(_if_conditional387=*((struct sInfo*)come_null_check(info, "05function4.c", 1676))->p==38,                    _if_conditional387) {
                        # 1677 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1677))->p++;
                        # 1678 "05function4.c"
                        (come_push_stackframe("05function4.c", 1678),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1680 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1680))->mNoHeap=(_Bool)1;
                        # 1685 "05function4.c"
                        # 1682 "05function4.c"
                        if(_if_conditional388=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1682))->mNoSolvedGenericsType, "05function4.c", 1682))->v1,                        _if_conditional388) {
                            # 1683 "05function4.c"
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1683))->mNoSolvedGenericsType, "05function4.c", 1683))->v1, "05function4.c", 1683))->mHeap=(_Bool)0;
                        }
                    }
                    # 1693 "05function4.c"
                    # 1687 "05function4.c"
                    if(_if_conditional389=*((struct sInfo*)come_null_check(info, "05function4.c", 1687))->p==63,                    _if_conditional389) {
                        # 1688 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1688))->p++;
                        # 1689 "05function4.c"
                        (come_push_stackframe("05function4.c", 1689),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1691 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1691))->mNullValue=(_Bool)1;
                    }
                    # 1700 "05function4.c"
                    # 1693 "05function4.c"
                    if(_if_conditional390=*((struct sInfo*)come_null_check(info, "05function4.c", 1693))->p==124,                    _if_conditional390) {
                        # 1694 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1694))->p++;
                        # 1695 "05function4.c"
                        (come_push_stackframe("05function4.c", 1695),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1697 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1697))->mNoCallingDestructor=(_Bool)1;
                    }
                    # 1700 "05function4.c"
                    (come_push_stackframe("05function4.c", 1700),skip_pointer_attribute(info),come_pop_stackframe());
                    # 1715 "05function4.c"
                    while(_while_condtional48=*((struct sInfo*)come_null_check(info, "05function4.c", 1702))->p==42,                    _while_condtional48) {
                        # 1703 "05function4.c"
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1703))->p++;
                        # 1704 "05function4.c"
                        (come_push_stackframe("05function4.c", 1704),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1706 "05function4.c"
                        (come_push_stackframe("05function4.c", 1706),skip_pointer_attribute(info),come_pop_stackframe());
                        # 1708 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1708))->mPointerNum++;
                        # 1713 "05function4.c"
                        # 1710 "05function4.c"
                        if(_if_conditional391=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1710))->mNoSolvedGenericsType, "05function4.c", 1710))->v1,                        _if_conditional391) {
                            # 1711 "05function4.c"
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1711))->mNoSolvedGenericsType, "05function4.c", 1711))->v1, "05function4.c", 1711))->mPointerNum++;
                        }
                    }
                    # 1756 "05function4.c"
                    # 1715 "05function4.c"
                    if(_if_conditional392=parse_multiple_type&&*((struct sInfo*)come_null_check(info, "05function4.c", 1715))->p==44,                    _if_conditional392) {
                        # 1716 "05function4.c"
                        types_264=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("05function4.c", 1716),__exception_result_var_b450=((struct list$1sTypeph*)(right_value284=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value283=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1716))))))), come_pop_stackframe(), __exception_result_var_b450));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value283;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value284);
                        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value284;
                        __freed_obj__ = 0;
                        # 1718 "05function4.c"
                        (come_push_stackframe("05function4.c", 1718),__exception_result_var_b451=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_264, "05function4.c", 1718)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(type_159))))), come_pop_stackframe(), __exception_result_var_b451);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value285);
                        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value285;
                        __freed_obj__ = 0;
                        # 1733 "05function4.c"
                        while(_while_condtional49=*((struct sInfo*)come_null_check(info, "05function4.c", 1720))->p==44,                        _while_condtional49) {
                            # 1721 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1721))->p++;
                            # 1722 "05function4.c"
                            (come_push_stackframe("05function4.c", 1722),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 1724 "05function4.c"
                            multiple_assgin_var5=(come_push_stackframe("05function4.c", 1724),__exception_result_var_b452=((struct tuple3$3sTypephcharphbool*)(right_value286=parse_type(info,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b452);
                            type2_265=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            name_266=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_267=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value286;
                            __freed_obj__ = 0;
                            # 1730 "05function4.c"
                            # 1726 "05function4.c"
                            if(_if_conditional393=!err_267,                            _if_conditional393) {
                                # 1727 "05function4.c"
                                __result130__ = __result_obj__ = (come_push_stackframe("05function4.c", 1727),__exception_result_var_b453=((struct tuple3$3sTypephcharphbool*)(right_value288=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value287=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1727)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b453);
                                if(type2_265 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_266 && !__freed_obj__) { name_266 = come_decrement_ref_count(name_266, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_264 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value287;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
                                if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value288;
                                __freed_obj__ = 0;
                                return __result130__;
                            }
                            # 1730 "05function4.c"
                            (come_push_stackframe("05function4.c", 1730),__exception_result_var_b454=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_264, "05function4.c", 1730)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(type2_265))))), come_pop_stackframe(), __exception_result_var_b454);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
                            if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value289;
                            __freed_obj__ = 0;
                            if(type2_265 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_266 && !__freed_obj__) { name_266 = come_decrement_ref_count(name_266, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 1733 "05function4.c"
                        num_tuples_268=(come_push_stackframe("05function4.c", 1733),__exception_result_var_b455=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(types_264, "05function4.c", 1733))), come_pop_stackframe(), __exception_result_var_b455);
                        # 1735 "05function4.c"
                        __dec_obj142=type_159;
                        type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1735),__exception_result_var_b457=((struct sType*)(right_value292=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1735)))),(come_push_stackframe("05function4.c", 1735),__exception_result_var_b456=((char*)(right_value291=xsprintf("tuple%d",num_tuples_268))), come_pop_stackframe(), __exception_result_var_b456),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b457));
                        if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value290);
                        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value290;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value291);
                        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value291;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value292;
                        __freed_obj__ = 0;
                        # 1736 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1736))->mPointerNum++;
                        # 1737 "05function4.c"
                        ((struct sType*)come_null_check(type_159, "05function4.c", 1737))->mHeap=(_Bool)1;
                        # 1743 "05function4.c"
                        for(
                        o2_saved_269=(struct list$1sTypeph*)come_increment_ref_count((types_264)),it_270=(come_push_stackframe("05function4.c", 1739),__exception_result_var_b458=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_269), "05function4.c", 1739))), come_pop_stackframe(), __exception_result_var_b458) ,                        0;                        _for_condtionalA9=                        !(come_push_stackframe("05function4.c", 1739),__exception_result_var_b459=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_269), "05function4.c", 1739))), come_pop_stackframe(), __exception_result_var_b459) ,                        _for_condtionalA9;                        it_270=(come_push_stackframe("05function4.c", 1739),__exception_result_var_b460=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_269), "05function4.c", 1739))), come_pop_stackframe(), __exception_result_var_b460) ,                        0                        ){
                            # 1740 "05function4.c"
                            (come_push_stackframe("05function4.c", 1740),__exception_result_var_b461=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1740))->mGenericsTypes, "05function4.c", 1740)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(it_270))))), come_pop_stackframe(), __exception_result_var_b461);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
                            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value293;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_269 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 1754 "05function4.c"
                        # 1743 "05function4.c"
                        if(_if_conditional394=(come_push_stackframe("05function4.c", 1743),__exception_result_var_b462=is_contained_generics_class(type_159,info), come_pop_stackframe(), __exception_result_var_b462),                        _if_conditional394) {
                            # 1744 "05function4.c"
                            __dec_obj143=type_159;
                            type_159=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1744),__exception_result_var_b463=((struct sType*)(right_value294=solve_generics(type_159,((struct sInfo*)come_null_check(info, "05function4.c", 1744))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b463));
                            if(__dec_obj143) { come_call_finalizer(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
                            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value294;
                            __freed_obj__ = 0;
                        }
                        else {
                            # 1753 "05function4.c"
                            # 1747 "05function4.c"
                            if(_if_conditional395=!(come_push_stackframe("05function4.c", 1747),__exception_result_var_b464=output_generics_struct(type_159,type_159,info), come_pop_stackframe(), __exception_result_var_b464),                            _if_conditional395) {
                                # 1749 "05function4.c"
                                new_name_271=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1749),__exception_result_var_b465=((char*)(right_value295=create_generics_name(type_159,info))), come_pop_stackframe(), __exception_result_var_b465));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value295;
                                __freed_obj__ = 0;
                                # 1750 "05function4.c"
                                (come_push_stackframe("05function4.c", 1750),__exception_result_var_b466=printf("output generics is failed(%s)\n",new_name_271), come_pop_stackframe(), __exception_result_var_b466);
                                # 1751 "05function4.c"
                                (come_push_stackframe("05function4.c", 1751),exit(9),come_pop_stackframe());
                                if(new_name_271 && !__freed_obj__) { new_name_271 = come_decrement_ref_count(new_name_271, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                        if(types_264 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    # 1798 "05function4.c"
                    # 1756 "05function4.c"
                    if(_if_conditional396=parse_variable_name,                    _if_conditional396) {
                        # 1757 "05function4.c"
                        (come_push_stackframe("05function4.c", 1757),parse_sharp_v5(info),come_pop_stackframe());
                        # 1764 "05function4.c"
                        # 1759 "05function4.c"
                        if(_if_conditional397=var_name_between_brace_165&&*((struct sInfo*)come_null_check(info, "05function4.c", 1759))->p==40,                        _if_conditional397) {
                            # 1760 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1760))->p++;
                            # 1761 "05function4.c"
                            (come_push_stackframe("05function4.c", 1761),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        # 1781 "05function4.c"
                        # 1764 "05function4.c"
                        if(_if_conditional398=*((struct sInfo*)come_null_check(info, "05function4.c", 1764))->p==58,                        _if_conditional398) {
                            # 1765 "05function4.c"
                            __dec_obj144=var_name_160;
                            var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1765),__exception_result_var_b467=((char*)(right_value296=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b467));
                            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value296;
                            __freed_obj__ = 0;
                        }
                        else {
                            # 1781 "05function4.c"
                            # 1767 "05function4.c"
                            if(_if_conditional399=anonymous_name_129,                            _if_conditional399) {
                                # 1768 "05function4.c"
                                # 1769 "05function4.c"
                                num_anonymous_var_name_272++;
                                # 1770 "05function4.c"
                                __dec_obj145=var_name_160;
                                var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1770),__exception_result_var_b468=((char*)(right_value297=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_272))), come_pop_stackframe(), __exception_result_var_b468));
                                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value297;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 1781 "05function4.c"
                                # 1772 "05function4.c"
                                if(_if_conditional400=(come_push_stackframe("05function4.c", 1772),__exception_result_var_b469=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1772))->p), come_pop_stackframe(), __exception_result_var_b469)||*((struct sInfo*)come_null_check(info, "05function4.c", 1772))->p==95,                                _if_conditional400) {
                                    # 1773 "05function4.c"
                                    __dec_obj146=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1773),__exception_result_var_b470=((char*)(right_value298=parse_word(info))), come_pop_stackframe(), __exception_result_var_b470));
                                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                                    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value298;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    # 1776 "05function4.c"
                                    # 1777 "05function4.c"
                                    num_anonymous_var_name_273++;
                                    # 1778 "05function4.c"
                                    __dec_obj147=var_name_160;
                                    var_name_160=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1778),__exception_result_var_b471=((char*)(right_value299=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_273))), come_pop_stackframe(), __exception_result_var_b471));
                                    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                                    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value299;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        # 1786 "05function4.c"
                        # 1781 "05function4.c"
                        if(_if_conditional401=var_name_between_brace_165&&*((struct sInfo*)come_null_check(info, "05function4.c", 1781))->p==41,                        _if_conditional401) {
                            # 1782 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1782))->p++;
                            # 1783 "05function4.c"
                            (come_push_stackframe("05function4.c", 1783),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        # 1797 "05function4.c"
                        # 1786 "05function4.c"
                        if(_if_conditional402=*((struct sInfo*)come_null_check(info, "05function4.c", 1786))->p==58,                        _if_conditional402) {
                            # 1787 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1787))->p++;
                            # 1788 "05function4.c"
                            (come_push_stackframe("05function4.c", 1788),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 1790 "05function4.c"
                            no_comma_274=((struct sInfo*)come_null_check(info, "05function4.c", 1790))->no_comma;
                            # 1791 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1791))->no_comma=(_Bool)1;
                            # 1792 "05function4.c"
                            node_275=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1792),__exception_result_var_b472=((struct sNode*)(right_value300=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b472));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value300;
                            __freed_obj__ = 0;
                            # 1793 "05function4.c"
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1793))->no_comma=no_comma_274;
                            # 1795 "05function4.c"
                            __dec_obj148=((struct sType*)come_null_check(type_159, "05function4.c", 1795))->mSizeNum;
                            ((struct sType*)come_null_check(type_159, "05function4.c", 1795))->mSizeNum=(struct sNode*)come_increment_ref_count(node_275);
                            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
                            if(node_275 && !__freed_obj__) { node_275 = come_decrement_ref_count(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    # 1799 "05function4.c"
    (come_push_stackframe("05function4.c", 1799),parse_sharp_v5(info),come_pop_stackframe());
    # 1823 "05function4.c"
    while(_while_condtional50=*((struct sInfo*)come_null_check(info, "05function4.c", 1801))->p==91,    _while_condtional50) {
        # 1802 "05function4.c"
        ((struct sInfo*)come_null_check(info, "05function4.c", 1802))->p++;
        # 1803 "05function4.c"
        (come_push_stackframe("05function4.c", 1803),skip_spaces_and_lf(info),come_pop_stackframe());
        # 1804 "05function4.c"
        (come_push_stackframe("05function4.c", 1804),parse_sharp_v5(info),come_pop_stackframe());
        # 1806 "05function4.c"
        (come_push_stackframe("05function4.c", 1806),skip_pointer_attribute(info),come_pop_stackframe());
        # 1815 "05function4.c"
        # 1808 "05function4.c"
        if(_if_conditional403=*((struct sInfo*)come_null_check(info, "05function4.c", 1808))->p==93,        _if_conditional403) {
            # 1809 "05function4.c"
            ((struct sInfo*)come_null_check(info, "05function4.c", 1809))->p++;
            # 1810 "05function4.c"
            (come_push_stackframe("05function4.c", 1810),skip_spaces_and_lf(info),come_pop_stackframe());
            # 1812 "05function4.c"
            ((struct sType*)come_null_check(type_159, "05function4.c", 1812))->mPointerNum++;
            # 1813 "05function4.c"
            break;
        }
        # 1815 "05function4.c"
        (come_push_stackframe("05function4.c", 1815),parse_sharp_v5(info),come_pop_stackframe());
        # 1817 "05function4.c"
        node_276=(struct sNode*)come_increment_ref_count((come_push_stackframe("05function4.c", 1817),__exception_result_var_b473=((struct sNode*)(right_value301=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b473));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value301;
        __freed_obj__ = 0;
        # 1818 "05function4.c"
        (come_push_stackframe("05function4.c", 1818),__exception_result_var_b474=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_159, "05function4.c", 1818))->mArrayNum, "05function4.c", 1818)),(struct sNode*)come_increment_ref_count(node_276)), come_pop_stackframe(), __exception_result_var_b474);
        # 1819 "05function4.c"
        (come_push_stackframe("05function4.c", 1819),parse_sharp_v5(info),come_pop_stackframe());
        # 1821 "05function4.c"
        (come_push_stackframe("05function4.c", 1821),__exception_result_var_b475=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b475);
        if(node_276 && !__freed_obj__) { node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0); } 
    }
    # 1823 "05function4.c"
    asm_name_277=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1823),__exception_result_var_b476=((char*)(right_value302=parse_attribute(info))), come_pop_stackframe(), __exception_result_var_b476));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value302;
    __freed_obj__ = 0;
    # 1825 "05function4.c"
    __dec_obj149=((struct sType*)come_null_check(type_159, "05function4.c", 1825))->mAsmName;
    ((struct sType*)come_null_check(type_159, "05function4.c", 1825))->mAsmName=(char*)come_increment_ref_count(asm_name_277);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
    # 1827 "05function4.c"
    (come_push_stackframe("05function4.c", 1827),parse_sharp_v5(info),come_pop_stackframe());
    # 1849 "05function4.c"
    # 1829 "05function4.c"
    if(_if_conditional404=exception__112,    _if_conditional404) {
        # 1830 "05function4.c"
        type2_278=(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1830),__exception_result_var_b477=((struct sType*)(right_value304=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value303=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1830)))),"optional",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b477));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value303;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value304;
        __freed_obj__ = 0;
        # 1831 "05function4.c"
        (come_push_stackframe("05function4.c", 1831),__exception_result_var_b478=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_278, "05function4.c", 1831))->mGenericsTypes, "05function4.c", 1831)),(struct sType*)come_increment_ref_count(type_159)), come_pop_stackframe(), __exception_result_var_b478);
        # 1832 "05function4.c"
        (come_push_stackframe("05function4.c", 1832),__exception_result_var_b480=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_278, "05function4.c", 1832))->mGenericsTypes, "05function4.c", 1832)),(struct sType*)come_increment_ref_count((come_push_stackframe("05function4.c", 1832),__exception_result_var_b479=((struct sType*)(right_value306=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1832)))),"bool",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b479))), come_pop_stackframe(), __exception_result_var_b480);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value305;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value306;
        __freed_obj__ = 0;
        # 1834 "05function4.c"
        ((struct sType*)come_null_check(type2_278, "05function4.c", 1834))->mPointerNum++;
        # 1835 "05function4.c"
        ((struct sType*)come_null_check(type2_278, "05function4.c", 1835))->mHeap=(_Bool)1;
        # 1837 "05function4.c"
        ((struct sType*)come_null_check(type2_278, "05function4.c", 1837))->mException=(_Bool)1;
        # 1846 "05function4.c"
        # 1839 "05function4.c"
        if(_if_conditional405=!(come_push_stackframe("05function4.c", 1839),__exception_result_var_b481=is_contained_generics_class(type2_278,info), come_pop_stackframe(), __exception_result_var_b481),        _if_conditional405) {
            # 1844 "05function4.c"
            # 1840 "05function4.c"
            if(_if_conditional406=!(come_push_stackframe("05function4.c", 1840),__exception_result_var_b482=output_generics_struct(type2_278,type2_278,info), come_pop_stackframe(), __exception_result_var_b482),            _if_conditional406) {
                # 1841 "05function4.c"
                (come_push_stackframe("05function4.c", 1841),err_msg(info,"invalid exception definition"),come_pop_stackframe());
                # 1842 "05function4.c"
                __result131__ = __result_obj__ = (come_push_stackframe("05function4.c", 1842),__exception_result_var_b483=((struct tuple3$3sTypephcharphbool*)(right_value308=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value307=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1842)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))), come_pop_stackframe(), __exception_result_var_b483);
                if(type2_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value307;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value308);
                if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value308;
                __freed_obj__ = 0;
                return __result131__;
            }
        }
        # 1846 "05function4.c"
        __result132__ = __result_obj__ = (come_push_stackframe("05function4.c", 1846),__exception_result_var_b484=((struct tuple3$3sTypephcharphbool*)(right_value310=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value309=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1846)))),(struct sType*)come_increment_ref_count(type2_278),(char*)come_increment_ref_count(var_name_160),(_Bool)1))), come_pop_stackframe(), __exception_result_var_b484);
        if(type2_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value309;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value310;
        __freed_obj__ = 0;
        return __result132__;
        if(type2_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_278, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 1849 "05function4.c"
    __result133__ = __result_obj__ = (come_push_stackframe("05function4.c", 1849),__exception_result_var_b485=((struct tuple3$3sTypephcharphbool*)(right_value312=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value311=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1849)))),(struct sType*)come_increment_ref_count(type_159),(char*)come_increment_ref_count(var_name_160),(_Bool)1))), come_pop_stackframe(), __exception_result_var_b485);
    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value311;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value312;
    __freed_obj__ = 0;
    return __result133__;
    if(type_name_109 && !__freed_obj__) { type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__127 && !__freed_obj__) { alignas__127 = come_decrement_ref_count(alignas__127, ((struct sNode*)alignas__127)->finalize, ((struct sNode*)alignas__127)->_protocol_obj, 0, 0, 0); } 
    if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_160 && !__freed_obj__) { var_name_160 = come_decrement_ref_count(var_name_160, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_277 && !__freed_obj__) { asm_name_277 = come_decrement_ref_count(asm_name_277, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value129;
struct sType* __dec_obj57;
void* right_value130;
char* __dec_obj58;
struct tuple3$3sTypephcharphbool* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
                                # 1851 "./comelang2.h"
                                __dec_obj57=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1851))->v1;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1851))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(v1))));
                                if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value129;
                                __freed_obj__ = 0;
                                # 1852 "./comelang2.h"
                                __dec_obj58=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1852))->v2;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1852))->v2=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(v2))));
                                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value130;
                                __freed_obj__ = 0;
                                # 1853 "./comelang2.h"
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1853))->v3=v3;
                                # 1855 "./comelang2.h"
                                __result67__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                return __result67__;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_180;
void* __exception_result_var_b338;
unsigned int __exception_result_var_b339;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional34;
_Bool _if_conditional283;
void* right_value209;
struct optional$2boolbool* __exception_result_var_b340;
_Bool _if_conditional284;
struct sType* __result77__;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct sType* __result78__;
struct sType* __result79__;
void* right_value210;
void* right_value211;
struct sType* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_180, 0, sizeof(struct sType*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
                # 1591 "./comelang2.h"
                # 1592 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b338=memset(&default_value_180,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b338);
                # 1594 "./comelang2.h"
                hash_181=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b339=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b339)%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1594))->size;
                # 1595 "./comelang2.h"
                it_182=hash_181;
                # 1619 "./comelang2.h"
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    # 1617 "./comelang2.h"
                    # 1598 "./comelang2.h"
                    if(_if_conditional283=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_182],                    _if_conditional283) {
                        # 1605 "./comelang2.h"
                        # 1600 "./comelang2.h"
                        if(_if_conditional284=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b340=((struct optional$2boolbool*)(right_value209=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_182], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b340)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209),
                        (right_value209 && right_value209 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value209, 
                        __freed_obj__ = 0, 
                        _if_conditional284) {
                            # 1602 "./comelang2.h"
                            __result77__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1602))->items[it_182];
                            return __result77__;
                        }
                        # 1605 "./comelang2.h"
                        it_182++;
                        # 1613 "./comelang2.h"
                        # 1607 "./comelang2.h"
                        if(_if_conditional285=it_182>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1607))->size,                        _if_conditional285) {
                            # 1608 "./comelang2.h"
                            it_182=0;
                        }
                        else {
                            # 1613 "./comelang2.h"
                            # 1610 "./comelang2.h"
                            if(_if_conditional286=it_182==hash_181,                            _if_conditional286) {
                                # 1611 "./comelang2.h"
                                __result78__ = __result_obj__ = default_value_180;
                                return __result78__;
                            }
                        }
                    }
                    else {
                        # 1615 "./comelang2.h"
                        __result79__ = __result_obj__ = default_value_180;
                        return __result79__;
                    }
                }
                # 1619 "./comelang2.h"
                __result81__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sTypepbool*)(right_value211=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value210=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1619))),default_value_180,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value210;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
                if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value211;
                __freed_obj__ = 0;
                return __result81__;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 40 "./comelang2.h"
                    ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                    # 41 "./comelang2.h"
                    ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                    # 43 "./comelang2.h"
                    __result80__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result80__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __exception_result_var_b345;
char* it_185;
_Bool __exception_result_var_b346;
_Bool _for_condtionalA3;
char* __exception_result_var_b349;
_Bool __exception_result_var_b350;
_Bool _if_conditional292;
_Bool __result89__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_185, 0, sizeof(char*));
                    # 805 "./comelang2.h"
                    for(
                    it_185=(come_push_stackframe("./comelang2.h", 798),__exception_result_var_b345=list$1charph_begin(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))), come_pop_stackframe(), __exception_result_var_b345) ,                    0;                    _for_condtionalA3=                    !(come_push_stackframe("./comelang2.h", 798),__exception_result_var_b346=list$1charph_end(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))), come_pop_stackframe(), __exception_result_var_b346) ,                    _for_condtionalA3;                    it_185=(come_push_stackframe("./comelang2.h", 798),__exception_result_var_b349=list$1charph_next(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))), come_pop_stackframe(), __exception_result_var_b349) ,                    0                    ){
                        # 803 "./comelang2.h"
                        # 800 "./comelang2.h"
                        if(_if_conditional292=(come_push_stackframe("./comelang2.h", 800),__exception_result_var_b350=string_operator_equals(it_185,item), come_pop_stackframe(), __exception_result_var_b350),                        _if_conditional292) {
                            # 801 "./comelang2.h"
                            __result89__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result89__;
                        }
                    }
                    # 805 "./comelang2.h"
                    __result90__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    return __result90__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional288;
char* result_183;
void* __exception_result_var_b343;
char* __result82__;
_Bool _if_conditional289;
char* __result83__;
char* result_184;
void* __exception_result_var_b344;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                        # 343 "./comelang2.h"
                        # 338 "./comelang2.h"
                        if(_if_conditional288=self==((void*)0),                        _if_conditional288) {
                            # 339 "./comelang2.h"
                            # 340 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b343=memset(&result_183,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b343);
                            # 341 "./comelang2.h"
                            __result82__ = __result_obj__ = result_183;
                            return __result82__;
                        }
                        # 343 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 343))->head;
                        # 349 "./comelang2.h"
                        # 345 "./comelang2.h"
                        if(_if_conditional289=((struct list$1charph*)come_null_check(self, "./comelang2.h", 345))->it,                        _if_conditional289) {
                            # 346 "./comelang2.h"
                            __result83__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                            return __result83__;
                        }
                        # 349 "./comelang2.h"
                        # 350 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b344=memset(&result_184,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b344);
                        # 351 "./comelang2.h"
                        __result84__ = __result_obj__ = result_184;
                        return __result84__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 373 "./comelang2.h"
                        __result85__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
                        return __result85__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional290;
char* result_186;
void* __exception_result_var_b347;
char* __result86__;
_Bool _if_conditional291;
char* __result87__;
char* result_187;
void* __exception_result_var_b348;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
                        # 361 "./comelang2.h"
                        # 355 "./comelang2.h"
                        if(_if_conditional290=self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),                        _if_conditional290) {
                            # 356 "./comelang2.h"
                            # 357 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b347=memset(&result_186,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b347);
                            # 358 "./comelang2.h"
                            __result86__ = __result_obj__ = result_186;
                            return __result86__;
                        }
                        # 361 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
                        # 367 "./comelang2.h"
                        # 363 "./comelang2.h"
                        if(_if_conditional291=((struct list$1charph*)come_null_check(self, "./comelang2.h", 363))->it,                        _if_conditional291) {
                            # 364 "./comelang2.h"
                            __result87__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                            return __result87__;
                        }
                        # 367 "./comelang2.h"
                        # 368 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b348=memset(&result_187,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b348);
                        # 369 "./comelang2.h"
                        __result88__ = __result_obj__ = result_187;
                        return __result88__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 417 "./comelang2.h"
                        __result91__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 417))->len;
                        return __result91__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
struct list_item$1charph* it_189;
int i_190;
_Bool _while_condtional35;
_Bool _if_conditional295;
char* __result92__;
char* default_value_191;
void* __exception_result_var_b353;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_189, 0, sizeof(struct list_item$1charph*));
memset(&i_190, 0, sizeof(int));
memset(&default_value_191, 0, sizeof(char*));
                            # 745 "./comelang2.h"
                            # 741 "./comelang2.h"
                            if(_if_conditional294=position<0,                            _if_conditional294) {
                                # 742 "./comelang2.h"
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 742))->len;
                            }
                            # 745 "./comelang2.h"
                            it_189=((struct list$1charph*)come_null_check(self, "./comelang2.h", 745))->head;
                            # 746 "./comelang2.h"
                            i_190=0;
                            # 753 "./comelang2.h"
                            while(_while_condtional35=it_189!=((void*)0),                            _while_condtional35) {
                                # 751 "./comelang2.h"
                                # 748 "./comelang2.h"
                                if(_if_conditional295=position==i_190,                                _if_conditional295) {
                                    # 749 "./comelang2.h"
                                    __result92__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(it_189, "./comelang2.h", 749))->item;
                                    return __result92__;
                                }
                                # 751 "./comelang2.h"
                                it_189=((struct list_item$1charph*)come_null_check(it_189, "./comelang2.h", 751))->next;
                                # 752 "./comelang2.h"
                                i_190++;
                            }
                            # 755 "./comelang2.h"
                            # 756 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b353=memset(&default_value_191,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b353);
                            # 757 "./comelang2.h"
                            __result93__ = __result_obj__ = default_value_191;
                            if(default_value_191 && !__freed_obj__) { default_value_191 = come_decrement_ref_count(default_value_191, (void*)0, (void*)0, 0, 1, 0); }
                            return __result93__;
                            if(default_value_191 && !__freed_obj__) { default_value_191 = come_decrement_ref_count(default_value_191, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value223;
struct sType* __dec_obj112;
struct tuple1$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
                # 1782 "./comelang2.h"
                __dec_obj112=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1782))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1782))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(v1))));
                if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value223;
                __freed_obj__ = 0;
                # 1784 "./comelang2.h"
                __result94__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result94__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1851 "./comelang2.h"
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1851))->v1=v1;
                            # 1852 "./comelang2.h"
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1852))->v2=v2;
                            # 1853 "./comelang2.h"
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1853))->v3=v3;
                            # 1855 "./comelang2.h"
                            __result96__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result96__;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional306;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional306=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),                        _if_conditional306) {
                            # 0 "CVALUE_finalize"
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional307=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),                        _if_conditional307) {
                            # 1 "CVALUE_finalize"
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_210;
void* __exception_result_var_b400;
unsigned int __exception_result_var_b401;
unsigned int hash_211;
unsigned int it_212;
_Bool _while_condtional36;
_Bool _if_conditional319;
void* right_value255;
struct optional$2boolbool* __exception_result_var_b402;
_Bool _if_conditional320;
struct sClass* __result98__;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct sClass* __result99__;
struct sClass* __result100__;
void* right_value256;
void* right_value257;
struct sClass* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_210, 0, sizeof(struct sClass*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&it_212, 0, sizeof(unsigned int));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
                                    # 1591 "./comelang2.h"
                                    # 1592 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b400=memset(&default_value_210,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b400);
                                    # 1594 "./comelang2.h"
                                    hash_211=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b401=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b401)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1594))->size;
                                    # 1595 "./comelang2.h"
                                    it_212=hash_211;
                                    # 1619 "./comelang2.h"
                                    while(_while_condtional36=(_Bool)1,                                    _while_condtional36) {
                                        # 1617 "./comelang2.h"
                                        # 1598 "./comelang2.h"
                                        if(_if_conditional319=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_212],                                        _if_conditional319) {
                                            # 1605 "./comelang2.h"
                                            # 1600 "./comelang2.h"
                                            if(_if_conditional320=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b402=((struct optional$2boolbool*)(right_value255=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_212], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b402)),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255),
                                            (right_value255 && right_value255 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value255, 
                                            __freed_obj__ = 0, 
                                            _if_conditional320) {
                                                # 1602 "./comelang2.h"
                                                __result98__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1602))->items[it_212];
                                                return __result98__;
                                            }
                                            # 1605 "./comelang2.h"
                                            it_212++;
                                            # 1613 "./comelang2.h"
                                            # 1607 "./comelang2.h"
                                            if(_if_conditional321=it_212>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->size,                                            _if_conditional321) {
                                                # 1608 "./comelang2.h"
                                                it_212=0;
                                            }
                                            else {
                                                # 1613 "./comelang2.h"
                                                # 1610 "./comelang2.h"
                                                if(_if_conditional322=it_212==hash_211,                                                _if_conditional322) {
                                                    # 1611 "./comelang2.h"
                                                    __result99__ = __result_obj__ = default_value_210;
                                                    return __result99__;
                                                }
                                            }
                                        }
                                        else {
                                            # 1615 "./comelang2.h"
                                            __result100__ = __result_obj__ = default_value_210;
                                            return __result100__;
                                        }
                                    }
                                    # 1619 "./comelang2.h"
                                    __result102__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sClasspbool*)(right_value257=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value256=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_210,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
                                    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value256;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
                                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value257;
                                    __freed_obj__ = 0;
                                    return __result102__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        # 40 "./comelang2.h"
                                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                                        # 41 "./comelang2.h"
                                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                                        # 43 "./comelang2.h"
                                        __result101__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result101__;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional331;
unsigned int __exception_result_var_b430;
unsigned int hash_237;
unsigned int it_238;
_Bool _while_condtional41;
_Bool _if_conditional349;
void* right_value273;
struct optional$2boolbool* __exception_result_var_b431;
_Bool _if_conditional350;
_Bool _if_conditional351;
struct list$1charp* __exception_result_var_b435;
struct list$1charp* __exception_result_var_b436;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
int __exception_result_var_b437;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool same_key_exist_255;
char* __exception_result_var_b440;
char* it2_258;
_Bool __exception_result_var_b441;
_Bool _for_condtionalA8;
char* __exception_result_var_b444;
void* right_value275;
struct optional$2boolbool* __exception_result_var_b445;
_Bool _if_conditional380;
_Bool _if_conditional381;
struct list$1charp* __exception_result_var_b446;
struct map$2charphsClassph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&it_238, 0, sizeof(unsigned int));
memset(&right_value273, 0, sizeof(void*));
memset(&same_key_exist_255, 0, sizeof(_Bool));
memset(&it2_258, 0, sizeof(char*));
memset(&right_value275, 0, sizeof(void*));
                                            # 1432 "./comelang2.h"
                                            # 1429 "./comelang2.h"
                                            if(_if_conditional331=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->size,                                            _if_conditional331) {
                                                # 1430 "./comelang2.h"
                                                (come_push_stackframe("./comelang2.h", 1430),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
                                            }
                                            # 1432 "./comelang2.h"
                                            hash_237=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b430=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b430)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1432))->size;
                                            # 1433 "./comelang2.h"
                                            it_238=hash_237;
                                            # 1491 "./comelang2.h"
                                            while(_while_condtional41=(_Bool)1,                                            _while_condtional41) {
                                                # 1489 "./comelang2.h"
                                                # 1436 "./comelang2.h"
                                                if(_if_conditional349=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_238],                                                _if_conditional349) {
                                                    # 1459 "./comelang2.h"
                                                    # 1438 "./comelang2.h"
                                                    if(_if_conditional350=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b431=((struct optional$2boolbool*)(right_value273=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_238], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b431)),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273),
                                                    (right_value273 && right_value273 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value273, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional350) {
                                                        # 1449 "./comelang2.h"
                                                        # 1440 "./comelang2.h"
                                                        if(_if_conditional351=1,                                                        _if_conditional351) {
                                                            # 1441 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b435=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_238]), come_pop_stackframe(), __exception_result_var_b435);
                                                            # 1442 "./comelang2.h"
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_238] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_238] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_238], (void*)0, (void*)0, 0, 0, 0); }
                                                            # 1443 "./comelang2.h"
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_238]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1446 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b436=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_238]), come_pop_stackframe(), __exception_result_var_b436);
                                                            # 1447 "./comelang2.h"
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_238]=key;
                                                        }
                                                        # 1456 "./comelang2.h"
                                                        # 1449 "./comelang2.h"
                                                        if(_if_conditional371=1,                                                        _if_conditional371) {
                                                            # 1450 "./comelang2.h"
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1450))->items[it_238] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1450))->items[it_238], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            # 1451 "./comelang2.h"
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->items[it_238]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1454 "./comelang2.h"
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1454))->items[it_238]=item;
                                                        }
                                                        # 1456 "./comelang2.h"
                                                        break;
                                                    }
                                                    # 1459 "./comelang2.h"
                                                    it_238++;
                                                    # 1469 "./comelang2.h"
                                                    # 1461 "./comelang2.h"
                                                    if(_if_conditional372=it_238>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1461))->size,                                                    _if_conditional372) {
                                                        # 1462 "./comelang2.h"
                                                        it_238=0;
                                                    }
                                                    else {
                                                        # 1469 "./comelang2.h"
                                                        # 1464 "./comelang2.h"
                                                        if(_if_conditional373=it_238==hash_237,                                                        _if_conditional373) {
                                                            # 1465 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b437=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b437);
                                                            # 1466 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1466),stackframe(),come_pop_stackframe());
                                                            # 1467 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1467),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1471 "./comelang2.h"
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1471))->item_existance[it_238]=(_Bool)1;
                                                    # 1478 "./comelang2.h"
                                                    # 1472 "./comelang2.h"
                                                    if(_if_conditional374=1,                                                    _if_conditional374) {
                                                        # 1473 "./comelang2.h"
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_238]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        # 1476 "./comelang2.h"
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_238]=key;
                                                    }
                                                    # 1485 "./comelang2.h"
                                                    # 1478 "./comelang2.h"
                                                    if(_if_conditional375=1,                                                    _if_conditional375) {
                                                        # 1479 "./comelang2.h"
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1479))->items[it_238]=(struct sClass*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        # 1482 "./comelang2.h"
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1482))->items[it_238]=item;
                                                    }
                                                    # 1485 "./comelang2.h"
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1485))->len++;
                                                    # 1487 "./comelang2.h"
                                                    break;
                                                }
                                            }
                                            # 1491 "./comelang2.h"
                                            same_key_exist_255=(_Bool)0;
                                            # 1499 "./comelang2.h"
                                            for(
                                            it2_258=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b440=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b440) ,                                            0;                                            _for_condtionalA8=                                            !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b441=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b441) ,                                            _for_condtionalA8;                                            it2_258=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b444=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b444) ,                                            0                                            ){
                                                # 1497 "./comelang2.h"
                                                # 1494 "./comelang2.h"
                                                if(_if_conditional380=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b445=((struct optional$2boolbool*)(right_value275=string_equals(((char*)come_null_check(it2_258, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b445)),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275),
                                                (right_value275 && right_value275 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value275, 
                                                __freed_obj__ = 0, 
                                                _if_conditional380) {
                                                    # 1495 "./comelang2.h"
                                                    same_key_exist_255=(_Bool)1;
                                                }
                                            }
                                            # 1503 "./comelang2.h"
                                            # 1499 "./comelang2.h"
                                            if(_if_conditional381=!same_key_exist_255,                                            _if_conditional381) {
                                                # 1500 "./comelang2.h"
                                                (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b446=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b446);
                                            }
                                            # 1503 "./comelang2.h"
                                            __result129__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result129__;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_218;
void* right_value269;
char** keys_219;
void* right_value270;
struct sClass** items_220;
void* right_value271;
_Bool* item_existance_223;
int len_224;
char* __exception_result_var_b418;
char* it_227;
_Bool __exception_result_var_b419;
_Bool _for_condtionalA7;
char* __exception_result_var_b422;
struct sClass* default_value_230;
void* __exception_result_var_b423;
struct sClass* __exception_result_var_b426;
struct sClass* it2_233;
unsigned int __exception_result_var_b427;
unsigned int hash_234;
int n_235;
_Bool _while_condtional40;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
int __exception_result_var_b428;
struct sClass* default_value_236;
struct sClass* __exception_result_var_b429;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_218, 0, sizeof(int));
memset(&right_value269, 0, sizeof(void*));
memset(&keys_219, 0, sizeof(char**));
memset(&right_value270, 0, sizeof(void*));
memset(&items_220, 0, sizeof(struct sClass**));
memset(&right_value271, 0, sizeof(void*));
memset(&item_existance_223, 0, sizeof(_Bool*));
memset(&len_224, 0, sizeof(int));
memset(&it_227, 0, sizeof(char*));
memset(&default_value_230, 0, sizeof(struct sClass*));
memset(&it2_233, 0, sizeof(struct sClass*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&n_235, 0, sizeof(int));
memset(&default_value_236, 0, sizeof(struct sClass*));
                                                    # 1376 "./comelang2.h"
                                                    size_218=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                                                    # 1377 "./comelang2.h"
                                                    keys_219=(char**)come_increment_ref_count(((char**)(right_value269=(char**)come_calloc(1, sizeof(char*)*(1*(size_218)), "./comelang2.h", 1377))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                                                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value269;
                                                    __freed_obj__ = 0;
                                                    # 1378 "./comelang2.h"
                                                    items_220=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value270=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_218)), "./comelang2.h", 1378))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
                                                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value270;
                                                    __freed_obj__ = 0;
                                                    # 1379 "./comelang2.h"
                                                    item_existance_223=(_Bool*)come_increment_ref_count(((_Bool*)(right_value271=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_218)), "./comelang2.h", 1379))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value271);
                                                    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value271;
                                                    __freed_obj__ = 0;
                                                    # 1381 "./comelang2.h"
                                                    len_224=0;
                                                    # 1416 "./comelang2.h"
                                                    for(
                                                    it_227=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b418=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b418) ,                                                    0;                                                    _for_condtionalA7=                                                    !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b419=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b419) ,                                                    _for_condtionalA7;                                                    it_227=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b422=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b422) ,                                                    0                                                    ){
                                                        # 1384 "./comelang2.h"
                                                        # 1385 "./comelang2.h"
                                                        (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b423=memset(&default_value_230,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b423);
                                                        # 1386 "./comelang2.h"
                                                        it2_233=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b426=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386)),it_227,default_value_230), come_pop_stackframe(), __exception_result_var_b426);
                                                        # 1387 "./comelang2.h"
                                                        hash_234=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b427=string_get_hash_key(((char*)come_null_check(it_227, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b427)%size_218;
                                                        # 1388 "./comelang2.h"
                                                        n_235=hash_234;
                                                        # 1414 "./comelang2.h"
                                                        while(_while_condtional40=(_Bool)1,                                                        _while_condtional40) {
                                                            # 1413 "./comelang2.h"
                                                            # 1391 "./comelang2.h"
                                                            if(_if_conditional346=item_existance_223[n_235],                                                            _if_conditional346) {
                                                                # 1393 "./comelang2.h"
                                                                n_235++;
                                                                # 1403 "./comelang2.h"
                                                                # 1395 "./comelang2.h"
                                                                if(_if_conditional347=n_235>=size_218,                                                                _if_conditional347) {
                                                                    # 1396 "./comelang2.h"
                                                                    n_235=0;
                                                                }
                                                                else {
                                                                    # 1403 "./comelang2.h"
                                                                    # 1398 "./comelang2.h"
                                                                    if(_if_conditional348=n_235==hash_234,                                                                    _if_conditional348) {
                                                                        # 1399 "./comelang2.h"
                                                                        (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b428=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b428);
                                                                        # 1400 "./comelang2.h"
                                                                        (come_push_stackframe("./comelang2.h", 1400),stackframe(),come_pop_stackframe());
                                                                        # 1401 "./comelang2.h"
                                                                        (come_push_stackframe("./comelang2.h", 1401),exit(2),come_pop_stackframe());
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1405 "./comelang2.h"
                                                                item_existance_223[n_235]=(_Bool)1;
                                                                # 1406 "./comelang2.h"
                                                                keys_219[n_235]=it_227;
                                                                # 1407 "./comelang2.h"
                                                                # 1408 "./comelang2.h"
                                                                items_220[n_235]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b429=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408)),it_227,default_value_236), come_pop_stackframe(), __exception_result_var_b429);
                                                                # 1410 "./comelang2.h"
                                                                len_224++;
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
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1420))->keys=keys_219;
                                                    # 1421 "./comelang2.h"
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1421))->items=items_220;
                                                    # 1422 "./comelang2.h"
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422))->item_existance=item_existance_223;
                                                    # 1424 "./comelang2.h"
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size=size_218;
                                                    # 1425 "./comelang2.h"
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1425))->len=len_224;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 1 "sClass_finalize"
                                                        # 0 "sClass_finalize"
                                                        if(_if_conditional332=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName!=((void*)0),                                                        _if_conditional332) {
                                                            # 0 "sClass_finalize"
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        # 2 "sClass_finalize"
                                                        # 1 "sClass_finalize"
                                                        if(_if_conditional333=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields!=((void*)0),                                                        _if_conditional333) {
                                                            # 1 "sClass_finalize"
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        # 3 "sClass_finalize"
                                                        # 2 "sClass_finalize"
                                                        if(_if_conditional337=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName!=((void*)0),                                                        _if_conditional337) {
                                                            # 2 "sClass_finalize"
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_221;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_221, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_222, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                # 176 "./comelang2.h"
                                                                it_221=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 176))->head;
                                                                # 182 "./comelang2.h"
                                                                while(_while_condtional38=it_221!=((void*)0),                                                                _while_condtional38) {
                                                                    # 178 "./comelang2.h"
                                                                    prev_it_222=it_221;
                                                                    # 179 "./comelang2.h"
                                                                    it_221=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_221, "./comelang2.h", 179))->next;
                                                                    # 180 "./comelang2.h"
                                                                    if(prev_it_222 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                        if(_if_conditional334=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                                                                        _if_conditional334) {
                                                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                                                if(_if_conditional335=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                                                                                _if_conditional335) {
                                                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                                if(_if_conditional336=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                                                                                _if_conditional336) {
                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
char* result_225;
void* __exception_result_var_b416;
char* __result106__;
_Bool _if_conditional339;
char* __result107__;
char* result_226;
void* __exception_result_var_b417;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_225, 0, sizeof(char*));
memset(&result_226, 0, sizeof(char*));
                                                        # 1343 "./comelang2.h"
                                                        # 1338 "./comelang2.h"
                                                        if(_if_conditional338=self==((void*)0),                                                        _if_conditional338) {
                                                            # 1339 "./comelang2.h"
                                                            # 1340 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b416=memset(&result_225,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b416);
                                                            # 1341 "./comelang2.h"
                                                            __result106__ = __result_obj__ = result_225;
                                                            return __result106__;
                                                        }
                                                        # 1343 "./comelang2.h"
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                                                        # 1349 "./comelang2.h"
                                                        # 1345 "./comelang2.h"
                                                        if(_if_conditional339=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                                                        _if_conditional339) {
                                                            # 1346 "./comelang2.h"
                                                            __result107__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                                                            return __result107__;
                                                        }
                                                        # 1349 "./comelang2.h"
                                                        # 1350 "./comelang2.h"
                                                        (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b417=memset(&result_226,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b417);
                                                        # 1351 "./comelang2.h"
                                                        __result108__ = __result_obj__ = result_226;
                                                        return __result108__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 1372 "./comelang2.h"
                                                        __result109__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                                                        return __result109__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional340;
char* result_228;
void* __exception_result_var_b420;
char* __result110__;
_Bool _if_conditional341;
char* __result111__;
char* result_229;
void* __exception_result_var_b421;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_228, 0, sizeof(char*));
memset(&result_229, 0, sizeof(char*));
                                                        # 1360 "./comelang2.h"
                                                        # 1355 "./comelang2.h"
                                                        if(_if_conditional340=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                                                        _if_conditional340) {
                                                            # 1356 "./comelang2.h"
                                                            # 1357 "./comelang2.h"
                                                            (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b420=memset(&result_228,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b420);
                                                            # 1358 "./comelang2.h"
                                                            __result110__ = __result_obj__ = result_228;
                                                            return __result110__;
                                                        }
                                                        # 1360 "./comelang2.h"
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                                                        # 1366 "./comelang2.h"
                                                        # 1362 "./comelang2.h"
                                                        if(_if_conditional341=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                                                        _if_conditional341) {
                                                            # 1363 "./comelang2.h"
                                                            __result111__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                                                            return __result111__;
                                                        }
                                                        # 1366 "./comelang2.h"
                                                        # 1367 "./comelang2.h"
                                                        (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b421=memset(&result_229,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b421);
                                                        # 1368 "./comelang2.h"
                                                        __result112__ = __result_obj__ = result_229;
                                                        return __result112__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b424;
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional39;
_Bool _if_conditional342;
void* right_value272;
struct optional$2boolbool* __exception_result_var_b425;
_Bool _if_conditional343;
struct sClass* __result113__;
_Bool _if_conditional344;
_Bool _if_conditional345;
struct sClass* __result114__;
struct sClass* __result115__;
struct sClass* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
memset(&right_value272, 0, sizeof(void*));
                                                            # 1265 "./comelang2.h"
                                                            hash_231=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b424=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b424)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1265))->size;
                                                            # 1266 "./comelang2.h"
                                                            it_232=hash_231;
                                                            # 1290 "./comelang2.h"
                                                            while(_while_condtional39=(_Bool)1,                                                            _while_condtional39) {
                                                                # 1288 "./comelang2.h"
                                                                # 1269 "./comelang2.h"
                                                                if(_if_conditional342=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_232],                                                                _if_conditional342) {
                                                                    # 1276 "./comelang2.h"
                                                                    # 1271 "./comelang2.h"
                                                                    if(_if_conditional343=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b425=((struct optional$2boolbool*)(right_value272=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_232], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b425)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272),
                                                                    (right_value272 && right_value272 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value272, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional343) {
                                                                        # 1273 "./comelang2.h"
                                                                        __result113__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1273))->items[it_232];
                                                                        return __result113__;
                                                                    }
                                                                    # 1276 "./comelang2.h"
                                                                    it_232++;
                                                                    # 1284 "./comelang2.h"
                                                                    # 1278 "./comelang2.h"
                                                                    if(_if_conditional344=it_232>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1278))->size,                                                                    _if_conditional344) {
                                                                        # 1279 "./comelang2.h"
                                                                        it_232=0;
                                                                    }
                                                                    else {
                                                                        # 1284 "./comelang2.h"
                                                                        # 1281 "./comelang2.h"
                                                                        if(_if_conditional345=it_232==hash_231,                                                                        _if_conditional345) {
                                                                            # 1282 "./comelang2.h"
                                                                            __result114__ = __result_obj__ = default_value;
                                                                            return __result114__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1286 "./comelang2.h"
                                                                    __result115__ = __result_obj__ = default_value;
                                                                    return __result115__;
                                                                }
                                                            }
                                                            # 1290 "./comelang2.h"
                                                            __result116__ = __result_obj__ = default_value;
                                                            return __result116__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_239;
struct list_item$1charp* it_240;
_Bool _while_condtional42;
void* right_value274;
struct optional$2boolbool* __exception_result_var_b432;
_Bool _if_conditional352;
struct list$1charp* __exception_result_var_b434;
struct list$1charp* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_239, 0, sizeof(int));
memset(&it_240, 0, sizeof(struct list_item$1charp*));
memset(&right_value274, 0, sizeof(void*));
                                                                # 498 "./comelang2.h"
                                                                it2_239=0;
                                                                # 499 "./comelang2.h"
                                                                it_240=((struct list$1charp*)come_null_check(self, "./comelang2.h", 499))->head;
                                                                # 510 "./comelang2.h"
                                                                while(_while_condtional42=it_240!=((void*)0),                                                                _while_condtional42) {
                                                                    # 505 "./comelang2.h"
                                                                    # 501 "./comelang2.h"
                                                                    if(_if_conditional352=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 501),__exception_result_var_b432=((struct optional$2boolbool*)(right_value274=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_240, "./comelang2.h", 501))->item, "./comelang2.h", 501)),item))), come_pop_stackframe(), __exception_result_var_b432)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274),
                                                                    (right_value274 && right_value274 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value274, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional352) {
                                                                        # 502 "./comelang2.h"
                                                                        (come_push_stackframe("./comelang2.h", 502),__exception_result_var_b434=list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 502)),it2_239,it2_239+1), come_pop_stackframe(), __exception_result_var_b434);
                                                                        # 503 "./comelang2.h"
                                                                        break;
                                                                    }
                                                                    # 505 "./comelang2.h"
                                                                    it2_239++;
                                                                    # 507 "./comelang2.h"
                                                                    it_240=((struct list_item$1charp*)come_null_check(it_240, "./comelang2.h", 507))->next;
                                                                }
                                                                # 510 "./comelang2.h"
                                                                __result120__ = __result_obj__ = self;
                                                                return __result120__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
int tmp_241;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct list$1charp* __result117__;
_Bool _if_conditional359;
struct list$1charp* __exception_result_var_b433;
_Bool _if_conditional360;
struct list_item$1charp* it_244;
int i_245;
_Bool _while_condtional44;
_Bool _if_conditional361;
struct list_item$1charp* prev_it_246;
_Bool _if_conditional362;
_Bool _if_conditional363;
struct list_item$1charp* it_247;
int i_248;
_Bool _while_condtional45;
_Bool _if_conditional364;
_Bool _if_conditional365;
struct list_item$1charp* prev_it_249;
struct list_item$1charp* it_250;
struct list_item$1charp* head_prev_it_251;
struct list_item$1charp* tail_it_252;
int i_253;
_Bool _while_condtional46;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
struct list_item$1charp* prev_it_254;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct list$1charp* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_241, 0, sizeof(int));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&i_245, 0, sizeof(int));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&i_248, 0, sizeof(int));
memset(&prev_it_249, 0, sizeof(struct list_item$1charp*));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_251, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_252, 0, sizeof(struct list_item$1charp*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1charp*));
                                                                            # 517 "./comelang2.h"
                                                                            # 514 "./comelang2.h"
                                                                            if(_if_conditional353=head<0,                                                                            _if_conditional353) {
                                                                                # 515 "./comelang2.h"
                                                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 515))->len;
                                                                            }
                                                                            # 521 "./comelang2.h"
                                                                            # 517 "./comelang2.h"
                                                                            if(_if_conditional354=tail<0,                                                                            _if_conditional354) {
                                                                                # 518 "./comelang2.h"
                                                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 518))->len+1;
                                                                            }
                                                                            # 527 "./comelang2.h"
                                                                            # 521 "./comelang2.h"
                                                                            if(_if_conditional355=head>tail,                                                                            _if_conditional355) {
                                                                                # 522 "./comelang2.h"
                                                                                tmp_241=tail;
                                                                                # 523 "./comelang2.h"
                                                                                tail=head;
                                                                                # 524 "./comelang2.h"
                                                                                head=tmp_241;
                                                                            }
                                                                            # 531 "./comelang2.h"
                                                                            # 527 "./comelang2.h"
                                                                            if(_if_conditional356=head<0,                                                                            _if_conditional356) {
                                                                                # 528 "./comelang2.h"
                                                                                head=0;
                                                                            }
                                                                            # 535 "./comelang2.h"
                                                                            # 531 "./comelang2.h"
                                                                            if(_if_conditional357=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 531))->len,                                                                            _if_conditional357) {
                                                                                # 532 "./comelang2.h"
                                                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 532))->len;
                                                                            }
                                                                            # 539 "./comelang2.h"
                                                                            # 535 "./comelang2.h"
                                                                            if(_if_conditional358=head==tail,                                                                            _if_conditional358) {
                                                                                # 536 "./comelang2.h"
                                                                                __result117__ = __result_obj__ = self;
                                                                                return __result117__;
                                                                            }
                                                                            # 634 "./comelang2.h"
                                                                            # 539 "./comelang2.h"
                                                                            if(_if_conditional359=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 539))->len,                                                                            _if_conditional359) {
                                                                                # 541 "./comelang2.h"
                                                                                (come_push_stackframe("./comelang2.h", 541),__exception_result_var_b433=list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 541))), come_pop_stackframe(), __exception_result_var_b433);
                                                                            }
                                                                            else {
                                                                                # 634 "./comelang2.h"
                                                                                # 543 "./comelang2.h"
                                                                                if(_if_conditional360=head==0,                                                                                _if_conditional360) {
                                                                                    # 544 "./comelang2.h"
                                                                                    it_244=((struct list$1charp*)come_null_check(self, "./comelang2.h", 544))->head;
                                                                                    # 545 "./comelang2.h"
                                                                                    i_245=0;
                                                                                    # 567 "./comelang2.h"
                                                                                    while(_while_condtional44=it_244!=((void*)0),                                                                                    _while_condtional44) {
                                                                                        # 566 "./comelang2.h"
                                                                                        # 547 "./comelang2.h"
                                                                                        if(_if_conditional361=i_245<tail,                                                                                        _if_conditional361) {
                                                                                            # 548 "./comelang2.h"
                                                                                            prev_it_246=it_244;
                                                                                            # 550 "./comelang2.h"
                                                                                            it_244=((struct list_item$1charp*)come_null_check(it_244, "./comelang2.h", 550))->next;
                                                                                            # 551 "./comelang2.h"
                                                                                            i_245++;
                                                                                            # 553 "./comelang2.h"
                                                                                            if(prev_it_246 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            # 555 "./comelang2.h"
                                                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 555))->len--;
                                                                                        }
                                                                                        else {
                                                                                            # 566 "./comelang2.h"
                                                                                            # 557 "./comelang2.h"
                                                                                            if(_if_conditional362=i_245==tail,                                                                                            _if_conditional362) {
                                                                                                # 558 "./comelang2.h"
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 558))->head=it_244;
                                                                                                # 559 "./comelang2.h"
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 559))->head, "./comelang2.h", 559))->prev=((void*)0);
                                                                                                # 560 "./comelang2.h"
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                # 563 "./comelang2.h"
                                                                                                it_244=((struct list_item$1charp*)come_null_check(it_244, "./comelang2.h", 563))->next;
                                                                                                # 564 "./comelang2.h"
                                                                                                i_245++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 634 "./comelang2.h"
                                                                                    # 568 "./comelang2.h"
                                                                                    if(_if_conditional363=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 568))->len,                                                                                    _if_conditional363) {
                                                                                        # 569 "./comelang2.h"
                                                                                        it_247=((struct list$1charp*)come_null_check(self, "./comelang2.h", 569))->head;
                                                                                        # 570 "./comelang2.h"
                                                                                        i_248=0;
                                                                                        # 592 "./comelang2.h"
                                                                                        while(_while_condtional45=it_247!=((void*)0),                                                                                        _while_condtional45) {
                                                                                            # 577 "./comelang2.h"
                                                                                            # 572 "./comelang2.h"
                                                                                            if(_if_conditional364=i_248==head,                                                                                            _if_conditional364) {
                                                                                                # 573 "./comelang2.h"
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 573))->tail=((struct list_item$1charp*)come_null_check(it_247, "./comelang2.h", 573))->prev;
                                                                                                # 574 "./comelang2.h"
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 574))->tail, "./comelang2.h", 574))->next=((void*)0);
                                                                                            }
                                                                                            # 591 "./comelang2.h"
                                                                                            # 577 "./comelang2.h"
                                                                                            if(_if_conditional365=i_248>=head,                                                                                            _if_conditional365) {
                                                                                                # 578 "./comelang2.h"
                                                                                                prev_it_249=it_247;
                                                                                                # 580 "./comelang2.h"
                                                                                                it_247=((struct list_item$1charp*)come_null_check(it_247, "./comelang2.h", 580))->next;
                                                                                                # 581 "./comelang2.h"
                                                                                                i_248++;
                                                                                                # 583 "./comelang2.h"
                                                                                                if(prev_it_249 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                # 585 "./comelang2.h"
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 585))->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 588 "./comelang2.h"
                                                                                                it_247=((struct list_item$1charp*)come_null_check(it_247, "./comelang2.h", 588))->next;
                                                                                                # 589 "./comelang2.h"
                                                                                                i_248++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 594 "./comelang2.h"
                                                                                        it_250=((struct list$1charp*)come_null_check(self, "./comelang2.h", 594))->head;
                                                                                        # 596 "./comelang2.h"
                                                                                        head_prev_it_251=((void*)0);
                                                                                        # 597 "./comelang2.h"
                                                                                        tail_it_252=((void*)0);
                                                                                        # 600 "./comelang2.h"
                                                                                        i_253=0;
                                                                                        # 626 "./comelang2.h"
                                                                                        while(_while_condtional46=it_250!=((void*)0),                                                                                        _while_condtional46) {
                                                                                            # 605 "./comelang2.h"
                                                                                            # 602 "./comelang2.h"
                                                                                            if(_if_conditional366=i_253==head,                                                                                            _if_conditional366) {
                                                                                                # 603 "./comelang2.h"
                                                                                                head_prev_it_251=((struct list_item$1charp*)come_null_check(it_250, "./comelang2.h", 603))->prev;
                                                                                            }
                                                                                            # 609 "./comelang2.h"
                                                                                            # 605 "./comelang2.h"
                                                                                            if(_if_conditional367=i_253==tail,                                                                                            _if_conditional367) {
                                                                                                # 606 "./comelang2.h"
                                                                                                tail_it_252=it_250;
                                                                                            }
                                                                                            # 624 "./comelang2.h"
                                                                                            # 609 "./comelang2.h"
                                                                                            if(_if_conditional368=i_253>=head&&i_253<tail,                                                                                            _if_conditional368) {
                                                                                                # 611 "./comelang2.h"
                                                                                                prev_it_254=it_250;
                                                                                                # 613 "./comelang2.h"
                                                                                                it_250=((struct list_item$1charp*)come_null_check(it_250, "./comelang2.h", 613))->next;
                                                                                                # 614 "./comelang2.h"
                                                                                                i_253++;
                                                                                                # 616 "./comelang2.h"
                                                                                                if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                # 618 "./comelang2.h"
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 618))->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 621 "./comelang2.h"
                                                                                                it_250=((struct list_item$1charp*)come_null_check(it_250, "./comelang2.h", 621))->next;
                                                                                                # 622 "./comelang2.h"
                                                                                                i_253++;
                                                                                            }
                                                                                        }
                                                                                        # 629 "./comelang2.h"
                                                                                        # 626 "./comelang2.h"
                                                                                        if(_if_conditional369=head_prev_it_251!=((void*)0),                                                                                        _if_conditional369) {
                                                                                            # 627 "./comelang2.h"
                                                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_251, "./comelang2.h", 627))->next=tail_it_252;
                                                                                        }
                                                                                        # 632 "./comelang2.h"
                                                                                        # 629 "./comelang2.h"
                                                                                        if(_if_conditional370=tail_it_252!=((void*)0),                                                                                        _if_conditional370) {
                                                                                            # 630 "./comelang2.h"
                                                                                            ((struct list_item$1charp*)come_null_check(tail_it_252, "./comelang2.h", 630))->prev=head_prev_it_251;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            # 634 "./comelang2.h"
                                                                            __result119__ = __result_obj__ = self;
                                                                            return __result119__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_242;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_243;
struct list$1charp* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_243, 0, sizeof(struct list_item$1charp*));
                                                                                    # 483 "./comelang2.h"
                                                                                    it_242=((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head;
                                                                                    # 490 "./comelang2.h"
                                                                                    while(_while_condtional43=it_242!=((void*)0),                                                                                    _while_condtional43) {
                                                                                        # 485 "./comelang2.h"
                                                                                        prev_it_243=it_242;
                                                                                        # 486 "./comelang2.h"
                                                                                        it_242=((struct list_item$1charp*)come_null_check(it_242, "./comelang2.h", 486))->next;
                                                                                        # 487 "./comelang2.h"
                                                                                        if(prev_it_243 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    }
                                                                                    # 490 "./comelang2.h"
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
                                                                                    # 491 "./comelang2.h"
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
                                                                                    # 493 "./comelang2.h"
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 493))->len=0;
                                                                                    # 495 "./comelang2.h"
                                                                                    __result118__ = __result_obj__ = self;
                                                                                    return __result118__;
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
_Bool _if_conditional376;
char* result_256;
void* __exception_result_var_b438;
char* __result121__;
_Bool _if_conditional377;
char* __result122__;
char* result_257;
void* __exception_result_var_b439;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_256, 0, sizeof(char*));
memset(&result_257, 0, sizeof(char*));
                                                # 343 "./comelang2.h"
                                                # 338 "./comelang2.h"
                                                if(_if_conditional376=self==((void*)0),                                                _if_conditional376) {
                                                    # 339 "./comelang2.h"
                                                    # 340 "./comelang2.h"
                                                    (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b438=memset(&result_256,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b438);
                                                    # 341 "./comelang2.h"
                                                    __result121__ = __result_obj__ = result_256;
                                                    return __result121__;
                                                }
                                                # 343 "./comelang2.h"
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->head;
                                                # 349 "./comelang2.h"
                                                # 345 "./comelang2.h"
                                                if(_if_conditional377=((struct list$1charp*)come_null_check(self, "./comelang2.h", 345))->it,                                                _if_conditional377) {
                                                    # 346 "./comelang2.h"
                                                    __result122__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                                                    return __result122__;
                                                }
                                                # 349 "./comelang2.h"
                                                # 350 "./comelang2.h"
                                                (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b439=memset(&result_257,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b439);
                                                # 351 "./comelang2.h"
                                                __result123__ = __result_obj__ = result_257;
                                                return __result123__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 373 "./comelang2.h"
                                                __result124__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
                                                return __result124__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional378;
char* result_259;
void* __exception_result_var_b442;
char* __result125__;
_Bool _if_conditional379;
char* __result126__;
char* result_260;
void* __exception_result_var_b443;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_259, 0, sizeof(char*));
memset(&result_260, 0, sizeof(char*));
                                                # 361 "./comelang2.h"
                                                # 355 "./comelang2.h"
                                                if(_if_conditional378=self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),                                                _if_conditional378) {
                                                    # 356 "./comelang2.h"
                                                    # 357 "./comelang2.h"
                                                    (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b442=memset(&result_259,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b442);
                                                    # 358 "./comelang2.h"
                                                    __result125__ = __result_obj__ = result_259;
                                                    return __result125__;
                                                }
                                                # 361 "./comelang2.h"
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
                                                # 367 "./comelang2.h"
                                                # 363 "./comelang2.h"
                                                if(_if_conditional379=((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it,                                                _if_conditional379) {
                                                    # 364 "./comelang2.h"
                                                    __result126__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                                                    return __result126__;
                                                }
                                                # 367 "./comelang2.h"
                                                # 368 "./comelang2.h"
                                                (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b443=memset(&result_260,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b443);
                                                # 369 "./comelang2.h"
                                                __result127__ = __result_obj__ = result_260;
                                                return __result127__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
void* right_value276;
struct list_item$1charp* litem_261;
_Bool _if_conditional383;
void* right_value277;
struct list_item$1charp* litem_262;
void* right_value278;
struct list_item$1charp* litem_263;
struct list$1charp* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&litem_261, 0, sizeof(struct list_item$1charp*));
memset(&right_value277, 0, sizeof(void*));
memset(&litem_262, 0, sizeof(struct list_item$1charp*));
memset(&right_value278, 0, sizeof(void*));
memset(&litem_263, 0, sizeof(struct list_item$1charp*));
                                                    # 309 "./comelang2.h"
                                                    # 278 "./comelang2.h"
                                                    if(_if_conditional382=((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->len==0,                                                    _if_conditional382) {
                                                        # 279 "./comelang2.h"
                                                        litem_261=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value276=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                                                        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value276;
                                                        __freed_obj__ = 0;
                                                        # 281 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(litem_261, "./comelang2.h", 281))->prev=((void*)0);
                                                        # 282 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(litem_261, "./comelang2.h", 282))->next=((void*)0);
                                                        # 283 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(litem_261, "./comelang2.h", 283))->item=item;
                                                        # 285 "./comelang2.h"
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 285))->tail=litem_261;
                                                        # 286 "./comelang2.h"
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 286))->head=litem_261;
                                                    }
                                                    else {
                                                        # 309 "./comelang2.h"
                                                        # 288 "./comelang2.h"
                                                        if(_if_conditional383=((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->len==1,                                                        _if_conditional383) {
                                                            # 289 "./comelang2.h"
                                                            litem_262=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value277=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                                                            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value277;
                                                            __freed_obj__ = 0;
                                                            # 291 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(litem_262, "./comelang2.h", 291))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 291))->head;
                                                            # 292 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(litem_262, "./comelang2.h", 292))->next=((void*)0);
                                                            # 293 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(litem_262, "./comelang2.h", 293))->item=item;
                                                            # 295 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 295))->tail=litem_262;
                                                            # 296 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_262;
                                                        }
                                                        else {
                                                            # 299 "./comelang2.h"
                                                            litem_263=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value278=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                                                            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value278;
                                                            __freed_obj__ = 0;
                                                            # 301 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(litem_263, "./comelang2.h", 301))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 301))->tail;
                                                            # 302 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(litem_263, "./comelang2.h", 302))->next=((void*)0);
                                                            # 303 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(litem_263, "./comelang2.h", 303))->item=item;
                                                            # 305 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_263;
                                                            # 306 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 306))->tail=litem_263;
                                                        }
                                                    }
                                                    # 309 "./comelang2.h"
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 309))->len++;
                                                    # 311 "./comelang2.h"
                                                    __result128__ = __result_obj__ = self;
                                                    return __result128__;
}

