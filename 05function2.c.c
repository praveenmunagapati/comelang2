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
struct sLambdaNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
};
struct sFunNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct optional$2sTypepbool
{
    struct sType* v1;
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

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

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

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info);

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info);

_Bool sLambdaNode_terminated();

char* sLambdaNode_kind();

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

char* sFunNode_kind();

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
char* skip_block(struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

char* parse_attribute(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
struct sNode* parse_function(struct sInfo* info);

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj6;
struct sLambdaNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __result13__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result13__;
    if(self && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = self->sline;
    return __result14__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((char*)(right_value10=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    return __result15__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = (_Bool)0;
    return __result16__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sLambdaNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11;
    __freed_obj__ = 0;
    return __result17__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* come_fun_5;
void* right_value12;
void* right_value13;
struct sType* result_type_6;
void* right_value14;
void* right_value15;
_Bool _if_conditional25;
void* right_value16;
void* right_value17;
struct sType* result_type2_14;
void* right_value18;
void* right_value19;
_Bool _if_conditional26;
_Bool _if_conditional27;
void* right_value20;
struct CVALUE* come_value_15;
void* right_value21;
char* __dec_obj7;
void* right_value56;
struct sType* __dec_obj30;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&come_fun_5, 0, sizeof(struct sFun*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&result_type_6, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_type2_14, 0, sizeof(struct sType*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&come_value_15, 0, sizeof(struct CVALUE*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
    come_fun_5=info->come_fun;
    info->come_fun=self->mFun;
    result_type_6=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value12=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43)))),"void*",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value14=make_define_var(result_type_6,"__result_obj__",(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value14;
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value15=make_type_name_string(result_type_6,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value15;
    __freed_obj__ = 0;
    if(_if_conditional25=!gComeGC,    _if_conditional25) {
        result_type2_14=(struct sType*)come_increment_ref_count(((struct sType*)(right_value17=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value16=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 49)))),"bool",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value16;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value17;
        __freed_obj__ = 0;
        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value18=make_define_var(result_type2_14,"__freed_obj__",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value18;
        __freed_obj__ = 0;
        add_come_code_at_function_head2(info,"memset(&__freed_obj__, 0, sizeof(%s));\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value19=make_type_name_string(result_type2_14,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value19;
        __freed_obj__ = 0;
        if(result_type2_14 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_14, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional26=!gComeGC,    _if_conditional26) {
        add_come_code_at_function_head(info,"void* __right_value_freed_obj[%d];\n",1024);
    }
    if(_if_conditional27=self->mFun->mBlock,    _if_conditional27) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_15=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value20=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 62))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value20;
    __freed_obj__ = 0;
    __dec_obj7=come_value_15->c_value;
    come_value_15->c_value=(char*)come_increment_ref_count(((char*)(right_value21=xsprintf("%s",self->mFun->mName))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value21);
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value21;
    __freed_obj__ = 0;
    __dec_obj30=come_value_15->type;
    come_value_15->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(self->mFun->mLambdaType))));
    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value56;
    __freed_obj__ = 0;
    come_value_15->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_15->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_15));
    info->come_fun=come_fun_5;
    __result40__ = (_Bool)1;
    if(result_type_6 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_15 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result40__;
    if(result_type_6 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_15 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional6) {
            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional8) {
            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional9) {
            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional10) {
            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional12) {
            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional14) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional15) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional17) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional18) {
            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional19) {
            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional20) {
            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional21) {
            if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional7) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_7;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sTypeph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional11) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_9;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sNodeph*));
                it_9=self->head;
                while(_while_condtional2=it_9!=((void*)0),                _while_condtional2) {
                    prev_it_10=it_9;
                    it_9=it_9->next;
                    if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional13) {
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_11;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                it_11=self->head;
                while(_while_condtional3=it_11!=((void*)0),                _while_condtional3) {
                    prev_it_12=it_11;
                    it_11=it_11->next;
                    if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional16) {
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
char* default_value_13;
char* __result18__;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_13, 0, sizeof(char*));
        if(_if_conditional22=self==((void*)0),        _if_conditional22) {
            memset(&default_value_13,0,sizeof(char*));
            __result18__ = __result_obj__ = default_value_13;
            return __result18__;
        }
        else {
            __result19__ = __result_obj__ = self->v1;
            return __result19__;
        }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional23) {
            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional24=!self->v2,        _if_conditional24) {
            puts("Exception: at");
            exception_stackframe();
            puts("abort.");
            exit(2);
        }
        __result20__ = __result_obj__ = self->v1;
        return __result20__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional28=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional28) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional29=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional29) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct sType* __result21__;
void* right_value22;
struct sType* result_16;
_Bool _if_conditional31;
_Bool _if_conditional32;
void* right_value25;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional36;
void* right_value26;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional37;
void* right_value27;
char* __dec_obj11;
_Bool _if_conditional38;
void* right_value34;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional42;
void* right_value42;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value43;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional57;
void* right_value50;
struct list$1charph* __dec_obj24;
_Bool _if_conditional61;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value52;
struct sNode* __dec_obj26;
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
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value53;
struct sNode* __dec_obj27;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value54;
char* __dec_obj28;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value55;
char* __dec_obj29;
struct sType* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&result_16, 0, sizeof(struct sType*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
        if(_if_conditional30=self==(void*)0,        _if_conditional30) {
            __result21__ = __result_obj__ = (void*)0;
            return __result21__;
        }
        result_16=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value22;
        __freed_obj__ = 0;
        if(_if_conditional31=self!=((void*)0),        _if_conditional31) {
            result_16->mClass=self->mClass;
        }
        if(_if_conditional32=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional32) {
            __dec_obj9=result_16->mNoSolvedGenericsType;
            result_16->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value25=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value25;
            __freed_obj__ = 0;
        }
        if(_if_conditional36=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional36) {
            __dec_obj10=result_16->mOriginalLoadVarType;
            result_16->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj10) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value26;
            __freed_obj__ = 0;
        }
        if(_if_conditional37=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional37) {
            __dec_obj11=result_16->mGenericsName;
            result_16->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value27=string_clone(self->mGenericsName))));
            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value27;
            __freed_obj__ = 0;
        }
        if(_if_conditional38=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional38) {
            __dec_obj15=result_16->mGenericsTypes;
            result_16->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj15) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value34;
            __freed_obj__ = 0;
        }
        if(_if_conditional42=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional42) {
            __dec_obj19=result_16->mArrayNum;
            result_16->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj19) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_16->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional56=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional56) {
            __dec_obj20=result_16->mParamTypes;
            result_16->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj20) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        if(_if_conditional57=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional57) {
            __dec_obj24=result_16->mParamNames;
            result_16->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value50=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj24) { come_call_finalizer(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value50;
            __freed_obj__ = 0;
        }
        if(_if_conditional61=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional61) {
            __dec_obj25=result_16->mResultType;
            result_16->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj25) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = 0;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_16->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional63=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional63) {
            __dec_obj26=result_16->mAlignas;
            result_16->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value52=sNode_clone(self->mAlignas))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, ((struct sNode*)right_value52)->finalize, ((struct sNode*)right_value52)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value52;
            __freed_obj__ = 0;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_16->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_16->mShort=self->mShort;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_16->mLong=self->mLong;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_16->mLongLong=self->mLongLong;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_16->mConstant=self->mConstant;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_16->mRegister=self->mRegister;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_16->mVolatile=self->mVolatile;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_16->mStatic=self->mStatic;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_16->mExtern=self->mExtern;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_16->mRestrict=self->mRestrict;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_16->mImmutable=self->mImmutable;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_16->mHeap=self->mHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_16->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_16->mDelegate=self->mDelegate;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_16->mShare=self->mShare;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_16->mClone=self->mClone;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_16->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_16->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_16->mRefference=self->mRefference;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_16->mException=self->mException;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_16->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_16->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_16->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional87=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional87) {
            __dec_obj27=result_16->mSizeNum;
            result_16->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value53=sNode_clone(self->mSizeNum))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, ((struct sNode*)right_value53)->finalize, ((struct sNode*)right_value53)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_16->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_16->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional90) {
            __dec_obj28=result_16->mOriginalTypeName;
            result_16->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->mOriginalTypeName))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value54;
            __freed_obj__ = 0;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_16->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_16->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_16->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_16->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_16->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_16->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_16->mInline=self->mInline;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_16->mNullValue=self->mNullValue;
        }
        if(_if_conditional99=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional99) {
            __dec_obj29=result_16->mAsmName;
            result_16->mAsmName=(char*)come_increment_ref_count(((char*)(right_value55=string_clone(self->mAsmName))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value55;
            __freed_obj__ = 0;
        }
        __result38__ = __result_obj__ = result_16;
        if(result_16 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result38__;
        if(result_16 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional33;
struct tuple1$1sTypeph* __result22__;
void* right_value23;
struct tuple1$1sTypeph* result_17;
_Bool _if_conditional35;
void* right_value24;
struct sType* __dec_obj8;
struct tuple1$1sTypeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
                if(_if_conditional33=self==(void*)0,                _if_conditional33) {
                    __result22__ = __result_obj__ = (void*)0;
                    return __result22__;
                }
                result_17=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = 0;
                if(_if_conditional35=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional35) {
                    __dec_obj8=result_17->v1;
                    result_17->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_clone(self->v1))));
                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value24;
                    __freed_obj__ = 0;
                }
                __result23__ = __result_obj__ = result_17;
                if(result_17 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result23__;
                if(result_17 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional34) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
struct list$1sTypeph* __result24__;
void* right_value28;
void* right_value29;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value33;
struct list$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    __result24__ = __result_obj__ = ((void*)0);
                    return __result24__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value28=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value29;
                __freed_obj__ = 0;
                it_19=self->head;
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                    it_19=it_19->next;
                }
                __result27__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result27__;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result25__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result25__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
void* right_value30;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj12;
_Bool _if_conditional41;
void* right_value31;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj13;
void* right_value32;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj14;
struct list$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj13=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value32;
                                __freed_obj__ = 0;
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj14=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result26__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result26__;
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
_Bool _if_conditional43;
struct list$1sNodeph* __result28__;
void* right_value35;
void* right_value36;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional5;
void* right_value41;
struct list$1sNodeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value41, 0, sizeof(void*));
                if(_if_conditional43=self==((void*)0),                _if_conditional43) {
                    __result28__ = __result_obj__ = ((void*)0);
                    return __result28__;
                }
                result_23=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value35;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value36;
                __freed_obj__ = 0;
                it_24=self->head;
                while(_while_condtional5=it_24!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_23,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(it_24->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                    it_24=it_24->next;
                }
                __result33__ = __result_obj__ = result_23;
                if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result33__;
                if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result29__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result29__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
void* right_value37;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj16;
_Bool _if_conditional45;
void* right_value38;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj17;
void* right_value39;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional44=self->len==0,                        _if_conditional44) {
                            litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value37;
                            __freed_obj__ = 0;
                            litem_25->prev=((void*)0);
                            litem_25->next=((void*)0);
                            __dec_obj16=litem_25->item;
                            litem_25->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                            self->tail=litem_25;
                            self->head=litem_25;
                        }
                        else {
                            if(_if_conditional45=self->len==1,                            _if_conditional45) {
                                litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value38;
                                __freed_obj__ = 0;
                                litem_26->prev=self->head;
                                litem_26->next=((void*)0);
                                __dec_obj17=litem_26->item;
                                litem_26->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                self->tail=litem_26;
                                self->head->next=litem_26;
                            }
                            else {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value39;
                                __freed_obj__ = 0;
                                litem_27->prev=self->tail;
                                litem_27->next=((void*)0);
                                __dec_obj18=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_27;
                                self->tail=litem_27;
                            }
                        }
                        self->len++;
                        __result30__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result30__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct sNode* __result31__;
void* right_value40;
struct sNode* result_28;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
memset(&result_28, 0, sizeof(struct sNode*));
                        if(_if_conditional46=self==(void*)0,                        _if_conditional46) {
                            __result31__ = __result_obj__ = (void*)0;
                            return __result31__;
                        }
                        result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value40;
                        __freed_obj__ = 0;
                        if(_if_conditional47=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional47) {
                            result_28->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_28->finalize=self->finalize;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_28->clone=self->clone;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_28->compile=self->compile;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_28->sline=self->sline;
                        }
                        if(_if_conditional52=self!=((void*)0),                        _if_conditional52) {
                            result_28->sname=self->sname;
                        }
                        if(_if_conditional53=self!=((void*)0),                        _if_conditional53) {
                            result_28->terminated=self->terminated;
                        }
                        if(_if_conditional54=self!=((void*)0),                        _if_conditional54) {
                            result_28->kind=self->kind;
                        }
                        __result32__ = __result_obj__ = result_28;
                        if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 1, 0); } 
                        return __result32__;
                        if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional58;
struct list$1charph* __result34__;
void* right_value44;
void* right_value45;
struct list$1charph* result_29;
struct list_item$1charph* it_30;
_Bool _while_condtional6;
void* right_value49;
struct list$1charph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct list$1charph*));
memset(&it_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
                if(_if_conditional58=self==((void*)0),                _if_conditional58) {
                    __result34__ = __result_obj__ = ((void*)0);
                    return __result34__;
                }
                result_29=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value45;
                __freed_obj__ = 0;
                it_30=self->head;
                while(_while_condtional6=it_30!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_29,(char*)come_increment_ref_count(((char*)(right_value49=string_clone(it_30->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value49;
                    __freed_obj__ = 0;
                    it_30=it_30->next;
                }
                __result37__ = __result_obj__ = result_29;
                if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result37__;
                if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result35__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result35__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
void* right_value46;
struct list_item$1charph* litem_31;
char* __dec_obj21;
_Bool _if_conditional60;
void* right_value47;
struct list_item$1charph* litem_32;
char* __dec_obj22;
void* right_value48;
struct list_item$1charph* litem_33;
char* __dec_obj23;
struct list$1charph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional59=self->len==0,                        _if_conditional59) {
                            litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value46=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value46;
                            __freed_obj__ = 0;
                            litem_31->prev=((void*)0);
                            litem_31->next=((void*)0);
                            __dec_obj21=litem_31->item;
                            litem_31->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_31;
                            self->head=litem_31;
                        }
                        else {
                            if(_if_conditional60=self->len==1,                            _if_conditional60) {
                                litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value47;
                                __freed_obj__ = 0;
                                litem_32->prev=self->head;
                                litem_32->next=((void*)0);
                                __dec_obj22=litem_32->item;
                                litem_32->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_32;
                                self->head->next=litem_32;
                            }
                            else {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value48;
                                __freed_obj__ = 0;
                                litem_33->prev=self->tail;
                                litem_33->next=((void*)0);
                                __dec_obj23=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_33;
                                self->tail=litem_33;
                            }
                        }
                        self->len++;
                        __result36__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result36__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
void* right_value57;
struct list_item$1CVALUEph* litem_34;
struct CVALUE* __dec_obj31;
_Bool _if_conditional102;
void* right_value58;
struct list_item$1CVALUEph* litem_35;
struct CVALUE* __dec_obj32;
void* right_value59;
struct list_item$1CVALUEph* litem_36;
struct CVALUE* __dec_obj33;
struct list$1CVALUEph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value58, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value59, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional100=self->len==0,        _if_conditional100) {
            litem_34=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value57=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value57;
            __freed_obj__ = 0;
            litem_34->prev=((void*)0);
            litem_34->next=((void*)0);
            __dec_obj31=litem_34->item;
            litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj31) { come_call_finalizer(CVALUE_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_34;
            self->head=litem_34;
        }
        else {
            if(_if_conditional102=self->len==1,            _if_conditional102) {
                litem_35=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value58=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
                litem_35->prev=self->head;
                litem_35->next=((void*)0);
                __dec_obj32=litem_35->item;
                litem_35->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj32) { come_call_finalizer(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_35;
                self->head->next=litem_35;
            }
            else {
                litem_36=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value59=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value59;
                __freed_obj__ = 0;
                litem_36->prev=self->tail;
                litem_36->next=((void*)0);
                __dec_obj33=litem_36->item;
                litem_36->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj33) { come_call_finalizer(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_36;
                self->tail=litem_36;
            }
        }
        self->len++;
        __result39__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result39__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional101=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional101) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj34;
char* __dec_obj35;
struct sFunNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __dec_obj34=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    if(__dec_obj34) { come_call_finalizer(sFun_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    __result41__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(fun && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result41__;
    if(self && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(fun && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional103=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional103) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional104=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional104) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional105=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional105) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional106=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional106) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional107=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional107) {
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional108=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional108) {
            if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional109=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional109) {
            if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional112=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional112) {
            if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional113=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional113) {
            if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional114=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional114) {
            if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional115=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional115) {
            if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional116=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional116) {
            if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional117=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional117) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
_Bool _if_conditional111;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional110=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional110) {
                    if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional111=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional111) {
                    if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result42__ = self->sline;
    return __result42__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value60;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((char*)(right_value60=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60;
    __freed_obj__ = 0;
    return __result43__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result44__ = (_Bool)0;
    return __result44__;
}

char* sFunNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value61;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
    __result45__ = __result_obj__ = ((char*)(right_value61=__builtin_string("sFunNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value61;
    __freed_obj__ = 0;
    return __result45__;
}

void caller_begin(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void caller_end(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* come_fun_37;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value62;
void* right_value63;
struct sType* result_type_38;
void* right_value64;
void* right_value65;
void* right_value66;
void* right_value67;
struct sType* result_type2_39;
void* right_value68;
void* right_value69;
_Bool _if_conditional122;
void* right_value70;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&come_fun_37, 0, sizeof(struct sFun*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&result_type_38, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&result_type2_39, 0, sizeof(struct sType*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    come_fun_37=info->come_fun;
    info->come_fun=self->mFun;
    caller_begin(info);
    if(_if_conditional120=self->mFun->mBlock,    _if_conditional120) {
        if(_if_conditional121=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional121) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value62=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 140)))),"void*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value62;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value63;
        __freed_obj__ = 0;
        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value64=make_define_var(result_type_38,"__result_obj__",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value64;
        __freed_obj__ = 0;
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value65=make_type_name_string(result_type_38,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value65;
        __freed_obj__ = 0;
        result_type2_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value66=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 145)))),"bool",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value66;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value67;
        __freed_obj__ = 0;
        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value68=make_define_var(result_type2_39,"__freed_obj__",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value68;
        __freed_obj__ = 0;
        add_come_code_at_function_head2(info,"memset(&__freed_obj__, 0, sizeof(%s));\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value69=make_type_name_string(result_type2_39,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value69;
        __freed_obj__ = 0;
        add_come_code_at_function_head(info,"void* __right_value_freed_obj[%d];\n",1024);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional122=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional122) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value70=xsprintf("come_heap_final();\n"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70;
            __freed_obj__ = 0;
        }
        if(result_type_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_38, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    caller_end(info);
    info->come_fun=come_fun_37;
    __result46__ = (_Bool)1;
    return __result46__;
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value71;
void* right_value72;
struct list$1sNodeph* __dec_obj36;
struct sBlock* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
    __dec_obj36=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value72=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value71=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 168))))))));
    if(__dec_obj36) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value72;
    __freed_obj__ = 0;
    __result47__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result47__;
    if(self && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value73;
struct sType* __dec_obj37;
void* right_value74;
struct list$1charph* __dec_obj38;
char* __dec_obj39;
struct sType* __dec_obj40;
struct list$1sTypeph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct list$1charph* __dec_obj43;
char* __dec_obj44;
void* right_value75;
char* __dec_obj45;
struct sGenericsFun* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    __dec_obj37=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(impl_type))));
    if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value73;
    __freed_obj__ = 0;
    __dec_obj38=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charphp_clone(generics_type_names))));
    if(__dec_obj38) { come_call_finalizer(list$1charph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value74;
    __freed_obj__ = 0;
    __dec_obj39=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    __dec_obj40=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj41=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj41) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj42=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj42) { come_call_finalizer(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj43=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj43) { come_call_finalizer(list$1charph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->mVarArgs=var_args;
    __dec_obj44=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    self->mSLine=info->sline;
    __dec_obj45=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value75=__builtin_string(generics_sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value75;
    __freed_obj__ = 0;
    self->mGenericsSLine=generics_sline;
    __result48__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 1, 0); }
    if(generics_sname && !__freed_obj__) { generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 1, 0); }
    return __result48__;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 1, 0); }
    if(generics_sname && !__freed_obj__) { generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional123=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional123) {
            if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional124=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional124) {
            if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional125=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional125) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional126=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional126) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional127=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional127) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional128=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional128) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional129=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional129) {
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional130=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional130) {
            if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional131=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional131) {
            if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
void* right_value77;
struct sBlock* result_40;
int block_level_41;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _while_condtional7;
_Bool _if_conditional134;
int sline_42;
char* sname_43;
void* right_value78;
struct sNode* node_44;
void* right_value79;
char* __dec_obj46;
_Bool _if_conditional135;
_Bool _if_conditional138;
_Bool _while_condtional8;
_Bool _if_conditional139;
void* right_value83;
struct sNode* node_48;
_Bool _if_conditional140;
struct sBlock* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct sBlock*));
memset(&block_level_41, 0, sizeof(int));
memset(&sline_42, 0, sizeof(int));
memset(&sname_43, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&node_44, 0, sizeof(struct sNode*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&node_48, 0, sizeof(struct sNode*));
    result_40=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value77=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value76=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 197)))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value76;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value77;
    __freed_obj__ = 0;
    block_level_41=info->block_level;
    if(_if_conditional132=!no_block_level,    _if_conditional132) {
        info->block_level++;
    }
    if(_if_conditional133=*info->p==123,    _if_conditional133) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            parse_sharp_v5(info);
            if(_if_conditional134=*info->p==125,            _if_conditional134) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_42=info->sline;
            sname_43=info->sname;
            node_44=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value78=statment(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, ((struct sNode*)right_value78)->finalize, ((struct sNode*)right_value78)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
            __dec_obj46=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value79=node_44->sname(node_44->_protocol_obj))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value79;
            __freed_obj__ = 0;
            info->sline=node_44->sline(node_44->_protocol_obj);
            if(_if_conditional135=node_44==((void*)0),            _if_conditional135) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_40->mNodes,(struct sNode*)come_increment_ref_count(node_44));
            parse_sharp_v5(info);
            if(_if_conditional138=node_44->terminated(node_44->_protocol_obj),            _if_conditional138) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional8=*info->p==59,            _while_condtional8) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional139=*info->p==125,            _if_conditional139) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_44 && !__freed_obj__) { node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0, 0); } 
                break;
            }
            if(node_44 && !__freed_obj__) { node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0, 0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value83=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, ((struct sNode*)right_value83)->finalize, ((struct sNode*)right_value83)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value83;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        if(_if_conditional140=node_48==((void*)0),        _if_conditional140) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_40->mNodes,(struct sNode*)come_increment_ref_count(node_48));
        if(node_48 && !__freed_obj__) { node_48 = come_decrement_ref_count(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0, 0); } 
    }
    info->block_level=block_level_41;
    __result50__ = __result_obj__ = result_40;
    if(result_40 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result50__;
    if(result_40 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
void* right_value80;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj47;
_Bool _if_conditional137;
void* right_value81;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj48;
void* right_value82;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj49;
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional136=self->len==0,                _if_conditional136) {
                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value80=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value80;
                    __freed_obj__ = 0;
                    litem_45->prev=((void*)0);
                    litem_45->next=((void*)0);
                    __dec_obj47=litem_45->item;
                    litem_45->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
                    self->tail=litem_45;
                    self->head=litem_45;
                }
                else {
                    if(_if_conditional137=self->len==1,                    _if_conditional137) {
                        litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value81=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value81;
                        __freed_obj__ = 0;
                        litem_46->prev=self->head;
                        litem_46->next=((void*)0);
                        __dec_obj48=litem_46->item;
                        litem_46->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                        self->tail=litem_46;
                        self->head->next=litem_46;
                    }
                    else {
                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value82=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value82;
                        __freed_obj__ = 0;
                        litem_47->prev=self->tail;
                        litem_47->next=((void*)0);
                        __dec_obj49=litem_47->item;
                        litem_47->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                        self->tail->next=litem_47;
                        self->tail=litem_47;
                    }
                }
                self->len++;
                __result49__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result49__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
int __result51__;
struct sVarTable* old_table_49;
_Bool _if_conditional142;
void* right_value84;
void* right_value85;
struct sVarTable* __dec_obj50;
struct sVarTable* current_loop_vtable_50;
_Bool _if_conditional143;
struct list$1sTypeph* param_types__51;
struct list$1charph* param_names__52;
_Bool _if_conditional144;
int i_53;
struct list$1charph* o2_saved_54;
char* name_57;
_Bool _for_condtionalA1;
void* right_value86;
struct sType* type_63;
void* right_value87;
struct list$1sRightValueObjectph* right_value_objects_64;
void* right_value88;
void* right_value89;
struct list$1sRightValueObjectph* __dec_obj51;
int block_level_67;
_Bool _if_conditional155;
_Bool _if_conditional156;
int i_68;
struct list$1sNodeph* o2_saved_69;
struct sNode* node_72;
_Bool _for_condtionalA2;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
int stack_num_before_75;
int sline_76;
void* right_value90;
char* sname_77;
void* right_value91;
char* __dec_obj55;
_Bool _if_conditional161;
void* right_value92;
char* __dec_obj56;
_Bool _if_conditional162;
struct list$1sRightValueObjectph* __dec_obj57;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_table_49, 0, sizeof(struct sVarTable*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&current_loop_vtable_50, 0, sizeof(struct sVarTable*));
memset(&param_types__51, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__52, 0, sizeof(struct list$1charph*));
memset(&i_53, 0, sizeof(int));
memset(&o2_saved_54, 0, sizeof(struct list$1charph*));
memset(&name_57, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&type_63, 0, sizeof(struct sType*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value_objects_64, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&block_level_67, 0, sizeof(int));
memset(&i_68, 0, sizeof(int));
memset(&o2_saved_69, 0, sizeof(struct list$1sNodeph*));
memset(&node_72, 0, sizeof(struct sNode*));
memset(&stack_num_before_75, 0, sizeof(int));
memset(&sline_76, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&sname_77, 0, sizeof(char*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    if(_if_conditional141=info->output_header_file,    _if_conditional141) {
        __result51__ = 0;
        return __result51__;
    }
    old_table_49=info->lv_table;
    if(_if_conditional142=!no_var_table,    _if_conditional142) {
        __dec_obj50=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value85=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value84=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 281)))),(_Bool)0,old_table_49))));
        if(__dec_obj50) { come_call_finalizer(sVarTable_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value85;
        __freed_obj__ = 0;
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_50=info->current_loop_vtable;
    if(_if_conditional143=loop_block,    _if_conditional143) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__51=info->param_types;
    param_names__52=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional144=param_types&&param_names,    _if_conditional144) {
        for(
        o2_saved_54=(param_names),name_57=list$1charph_begin((o2_saved_54)) ,        0;        _for_condtionalA1=        !list$1charph_end((o2_saved_54)) ,        _for_condtionalA1;        name_57=list$1charph_next((o2_saved_54)) ,        0        ){
            type_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(list$1sTypephp_operator_load_element(param_types,i_53)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value86;
            __freed_obj__ = 0;
            type_63->mFunctionParam=(_Bool)1;
            type_63->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(type_63)))),info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value87;
            __freed_obj__ = 0;
            i_53++;
            if(type_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_63, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    right_value_objects_64=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    __dec_obj51=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value89=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value88=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 308))))))));
    if(__dec_obj51) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value89;
    __freed_obj__ = 0;
    block_level_67=info->block_level;
    if(_if_conditional155=!no_var_table,    _if_conditional155) {
        info->block_level++;
    }
    if(_if_conditional156=list$1sNodeph_length(block->mNodes)==0,    _if_conditional156) {
    }
    else {
        for(
        o2_saved_69=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_72=list$1sNodeph_begin((o2_saved_69)) ,        0;        _for_condtionalA2=        !list$1sNodeph_end((o2_saved_69)) ,        _for_condtionalA2;        node_72=list$1sNodeph_next((o2_saved_69)) ,        0        ){
            __dec_obj52=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            __dec_obj53=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
            __dec_obj54=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
            stack_num_before_75=list$1CVALUEph_length(info->stack);
            sline_76=info->sline;
            sname_77=(char*)come_increment_ref_count(((char*)(right_value90=__builtin_string(info->sname))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90;
            __freed_obj__ = 0;
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_72->sline(node_72->_protocol_obj);
            __dec_obj55=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value91=node_72->sname(node_72->_protocol_obj))));
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value91;
            __freed_obj__ = 0;
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional161=!node_compile(node_72,info),            _if_conditional161) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_76;
            __dec_obj56=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(sname_77))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value92;
            __freed_obj__ = 0;
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_75);
            free_right_value_objects(info,(_Bool)0);
            if(sname_77 && !__freed_obj__) { sname_77 = come_decrement_ref_count(sname_77, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_69 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional162=!no_var_table,    _if_conditional162) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_49;
    info->block_level=block_level_67;
    info->param_types=param_types__51;
    info->param_names=param_names__52;
    list$1sRightValueObjectph_reset(info->right_value_objects);
    __dec_obj57=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_64);
    if(__dec_obj57) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    info->current_loop_vtable=current_loop_vtable_50;
    __result72__ = 0;
    if(right_value_objects_64 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result72__;
    if(right_value_objects_64 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
char* result_55;
char* __result52__;
_Bool _if_conditional146;
char* __result53__;
char* result_56;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_55, 0, sizeof(char*));
memset(&result_56, 0, sizeof(char*));
            if(_if_conditional145=self==((void*)0),            _if_conditional145) {
                memset(&result_55,0,sizeof(char*));
                __result52__ = __result_obj__ = result_55;
                return __result52__;
            }
            self->it=self->head;
            if(_if_conditional146=self->it,            _if_conditional146) {
                __result53__ = __result_obj__ = self->it->item;
                return __result53__;
            }
            memset(&result_56,0,sizeof(char*));
            __result54__ = __result_obj__ = result_56;
            return __result54__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result55__ = self==((void*)0)||self->it==((void*)0);
            return __result55__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional147;
char* result_58;
char* __result56__;
_Bool _if_conditional148;
char* __result57__;
char* result_59;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_58, 0, sizeof(char*));
memset(&result_59, 0, sizeof(char*));
            if(_if_conditional147=self==((void*)0)||self->it==((void*)0),            _if_conditional147) {
                memset(&result_58,0,sizeof(char*));
                __result56__ = __result_obj__ = result_58;
                return __result56__;
            }
            self->it=self->it->next;
            if(_if_conditional148=self->it,            _if_conditional148) {
                __result57__ = __result_obj__ = self->it->item;
                return __result57__;
            }
            memset(&result_59,0,sizeof(char*));
            __result58__ = __result_obj__ = result_59;
            return __result58__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
struct list_item$1sTypeph* it_60;
int i_61;
_Bool _while_condtional9;
_Bool _if_conditional150;
struct sType* __result59__;
struct sType* default_value_62;
struct sType* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_61, 0, sizeof(int));
memset(&default_value_62, 0, sizeof(struct sType*));
                if(_if_conditional149=position<0,                _if_conditional149) {
                    position+=self->len;
                }
                it_60=self->head;
                i_61=0;
                while(_while_condtional9=it_60!=((void*)0),                _while_condtional9) {
                    if(_if_conditional150=position==i_61,                    _if_conditional150) {
                        __result59__ = __result_obj__ = it_60->item;
                        return __result59__;
                    }
                    it_60=it_60->next;
                    i_61++;
                }
                memset(&default_value_62,0,sizeof(struct sType*));
                __result60__ = __result_obj__ = default_value_62;
                if(default_value_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_62, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result60__;
                if(default_value_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sRightValueObjectph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result61__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result61__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_65;
_Bool _while_condtional10;
struct list_item$1sRightValueObjectph* prev_it_66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_65, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_66, 0, sizeof(struct list_item$1sRightValueObjectph*));
            it_65=self->head;
            while(_while_condtional10=it_65!=((void*)0),            _while_condtional10) {
                prev_it_66=it_65;
                it_65=it_65->next;
                if(prev_it_66 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_66, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional151=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional151) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional152=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional152) {
                                if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional153=self!=((void*)0)&&self->mVarName!=((void*)0),                            _if_conditional153) {
                                if(self->mVarName && !__freed_obj__) { self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional154=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional154) {
                                if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
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
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result62__ = self->len;
        return __result62__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
struct sNode* result_70;
struct sNode* __result63__;
_Bool _if_conditional158;
struct sNode* __result64__;
struct sNode* result_71;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_70, 0, sizeof(struct sNode*));
memset(&result_71, 0, sizeof(struct sNode*));
            if(_if_conditional157=self==((void*)0),            _if_conditional157) {
                memset(&result_70,0,sizeof(struct sNode*));
                __result63__ = __result_obj__ = result_70;
                return __result63__;
            }
            self->it=self->head;
            if(_if_conditional158=self->it,            _if_conditional158) {
                __result64__ = __result_obj__ = self->it->item;
                return __result64__;
            }
            memset(&result_71,0,sizeof(struct sNode*));
            __result65__ = __result_obj__ = result_71;
            return __result65__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result66__ = self==((void*)0)||self->it==((void*)0);
            return __result66__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
struct sNode* result_73;
struct sNode* __result67__;
_Bool _if_conditional160;
struct sNode* __result68__;
struct sNode* result_74;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(struct sNode*));
memset(&result_74, 0, sizeof(struct sNode*));
            if(_if_conditional159=self==((void*)0)||self->it==((void*)0),            _if_conditional159) {
                memset(&result_73,0,sizeof(struct sNode*));
                __result67__ = __result_obj__ = result_73;
                return __result67__;
            }
            self->it=self->it->next;
            if(_if_conditional160=self->it,            _if_conditional160) {
                __result68__ = __result_obj__ = self->it->item;
                return __result68__;
            }
            memset(&result_74,0,sizeof(struct sNode*));
            __result69__ = __result_obj__ = result_74;
            return __result69__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result70__ = self->len;
                return __result70__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_78;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_79;
struct list$1sRightValueObjectph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_78=self->head;
        while(_while_condtional11=it_78!=((void*)0),        _while_condtional11) {
            prev_it_79=it_78;
            it_78=it_78->next;
            if(prev_it_79 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result71__ = __result_obj__ = self;
        return __result71__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional163=list$1CVALUEph_length(info->stack)>top,    _if_conditional163) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional164=list$1CVALUEph_length(info->stack)<top,    _if_conditional164) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

struct optional$2intbool* expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value93;
void* right_value94;
struct optional$2intbool* __result74__;
void* right_value95;
void* right_value96;
struct optional$2intbool* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional165=*info->p!=c,    _if_conditional165) {
        if(_if_conditional166=!info->no_output_err,        _if_conditional166) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            __result74__ = __result_obj__ = ((struct optional$2intbool*)(right_value94=optional$2intbool_initialize(((struct optional$2intbool*)(right_value93=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "05function2.c", 389))),2,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value93;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value94;
            __freed_obj__ = 0;
            return __result74__;
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result75__ = __result_obj__ = ((struct optional$2intbool*)(right_value96=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value95=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "05function2.c", 396)))),0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value96;
    __freed_obj__ = 0;
    return __result75__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result73__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result73__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_80;
_Bool _if_conditional167;
_Bool dquort_81;
_Bool squort_82;
int sline_83;
int nest_84;
_Bool _while_condtional12;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
char* tail_85;
void* right_value97;
char* buf_86;
void* right_value98;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_80, 0, sizeof(char*));
memset(&dquort_81, 0, sizeof(_Bool));
memset(&squort_82, 0, sizeof(_Bool));
memset(&sline_83, 0, sizeof(int));
memset(&nest_84, 0, sizeof(int));
memset(&tail_85, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&buf_86, 0, sizeof(char*));
memset(&right_value98, 0, sizeof(void*));
    head_80=info->p;
    if(_if_conditional167=*info->p==123,    _if_conditional167) {
        info->p++;
        dquort_81=(_Bool)0;
        squort_82=(_Bool)0;
        sline_83=0;
        nest_84=0;
        while(_while_condtional12=1,        _while_condtional12) {
            if(_if_conditional168=dquort_81,            _if_conditional168) {
                if(_if_conditional169=*info->p==92,                _if_conditional169) {
                    info->p++;
                    if(_if_conditional170=*info->p==0,                    _if_conditional170) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional171=*info->p==34,                    _if_conditional171) {
                        info->p++;
                        dquort_81=!dquort_81;
                    }
                    else {
                        info->p++;
                        if(_if_conditional172=*info->p==0,                        _if_conditional172) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(_if_conditional173=squort_82,                _if_conditional173) {
                    if(_if_conditional174=*info->p==92,                    _if_conditional174) {
                        info->p++;
                        if(_if_conditional175=*info->p==0,                        _if_conditional175) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional176=*info->p==39,                        _if_conditional176) {
                            info->p++;
                            squort_82=!squort_82;
                        }
                        else {
                            info->p++;
                            if(_if_conditional177=*info->p==0,                            _if_conditional177) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional178=*info->p==39,                    _if_conditional178) {
                        sline_83=info->sline;
                        info->p++;
                        squort_82=!squort_82;
                    }
                    else {
                        if(_if_conditional179=*info->p==34,                        _if_conditional179) {
                            sline_83=info->sline;
                            info->p++;
                            dquort_81=!dquort_81;
                        }
                        else {
                            if(_if_conditional180=*info->p==35,                            _if_conditional180) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional181=*info->p==123,                                _if_conditional181) {
                                    info->p++;
                                    nest_84++;
                                }
                                else {
                                    if(_if_conditional182=*info->p==125,                                    _if_conditional182) {
                                        info->p++;
                                        if(_if_conditional183=nest_84==0,                                        _if_conditional183) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_84--;
                                    }
                                    else {
                                        if(_if_conditional184=*info->p==0,                                        _if_conditional184) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional185=*info->p==10,                                            _if_conditional185) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_85=info->p;
    buf_86=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(tail_85-head_80+1)), "05function2.c", 501))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    memcpy(buf_86,head_80,tail_85-head_80);
    buf_86[tail_85-head_80]=0;
    __result76__ = __result_obj__ = ((char*)(right_value98=__builtin_string(buf_86)));
    if(buf_86 && !__freed_obj__) { buf_86 = come_decrement_ref_count(buf_86, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value98;
    __freed_obj__ = 0;
    return __result76__;
    if(buf_86 && !__freed_obj__) { buf_86 = come_decrement_ref_count(buf_86, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool terminated_87;
char* p3_88;
int i_89;
_Bool _for_condtionalA3;
_Bool _if_conditional186;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&terminated_87, 0, sizeof(_Bool));
memset(&p3_88, 0, sizeof(char*));
memset(&i_89, 0, sizeof(int));
    terminated_87=(_Bool)0;
    p3_88=p;
    for(
    i_89=0 ,    0;    _for_condtionalA3=    i_89<strlen(p2) ,    _for_condtionalA3;    i_89++ ,    0    ){
        if(_if_conditional186=*p3_88==0,        _if_conditional186) {
            terminated_87=(_Bool)1;
            break;
        }
        p3_88++;
    }
    __result77__ = !terminated_87&&memcmp(p,p2,strlen(p2))==0;
    return __result77__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value99;
void* right_value100;
struct buffer* asm_fun_name_90;
_Bool _while_condtional13;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
int brace_num_91;
_Bool _while_condtional14;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
int len_92;
_Bool in_dquort_93;
int brace_num_94;
_Bool _while_condtional15;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
int brace_num_95;
_Bool _while_condtional16;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value101;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&asm_fun_name_90, 0, sizeof(struct buffer*));
memset(&brace_num_91, 0, sizeof(int));
memset(&len_92, 0, sizeof(int));
memset(&in_dquort_93, 0, sizeof(_Bool));
memset(&brace_num_94, 0, sizeof(int));
memset(&brace_num_95, 0, sizeof(int));
memset(&right_value101, 0, sizeof(void*));
    asm_fun_name_90=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 524))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value100;
    __freed_obj__ = 0;
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        if(_if_conditional187=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional187) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional188=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional188) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional189=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional189) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional190=strmemcmp(info->p,"__wur"),                    _if_conditional190) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional191=strmemcmp(info->p,"__noreturn"),                        _if_conditional191) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional192=strmemcmp(info->p,"__attribute__"),                            _if_conditional192) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_91=0;
                                while(_while_condtional14=*info->p,                                _while_condtional14) {
                                    if(_if_conditional193=*info->p==40,                                    _if_conditional193) {
                                        info->p++;
                                        brace_num_91++;
                                    }
                                    else {
                                        if(_if_conditional194=*info->p==41,                                        _if_conditional194) {
                                            info->p++;
                                            brace_num_91--;
                                            if(_if_conditional195=brace_num_91==0,                                            _if_conditional195) {
                                                break;
                                            }
                                        }
                                        else {
                                            info->p++;
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(_if_conditional196=strmemcmp(info->p,"__asm__"),                                _if_conditional196) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_92=0;
                                    in_dquort_93=(_Bool)0;
                                    brace_num_94=0;
                                    while(_while_condtional15=*info->p,                                    _while_condtional15) {
                                        if(_if_conditional197=*info->p==34,                                        _if_conditional197) {
                                            info->p++;
                                            in_dquort_93=!in_dquort_93;
                                        }
                                        else {
                                            if(_if_conditional198=in_dquort_93,                                            _if_conditional198) {
                                                buffer_append_char(asm_fun_name_90,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional199=*info->p==40,                                                _if_conditional199) {
                                                    info->p++;
                                                    brace_num_94++;
                                                }
                                                else {
                                                    if(_if_conditional200=*info->p==41,                                                    _if_conditional200) {
                                                        info->p++;
                                                        brace_num_94--;
                                                        if(_if_conditional201=brace_num_94==0,                                                        _if_conditional201) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional202=strmemcmp(info->p,"__asm"),                                    _if_conditional202) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_95=0;
                                        while(_while_condtional16=*info->p,                                        _while_condtional16) {
                                            if(_if_conditional203=*info->p==40,                                            _if_conditional203) {
                                                info->p++;
                                                brace_num_95++;
                                            }
                                            else {
                                                if(_if_conditional204=*info->p==41,                                                _if_conditional204) {
                                                    info->p++;
                                                    brace_num_95--;
                                                    if(_if_conditional205=brace_num_95==0,                                                    _if_conditional205) {
                                                        break;
                                                    }
                                                }
                                                else {
                                                    info->p++;
                                                }
                                            }
                                        }
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
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
    __result78__ = __result_obj__ = ((char*)(right_value101=buffer_to_string(asm_fun_name_90)));
    if(asm_fun_name_90 && !__freed_obj__) { come_call_finalizer(buffer_finalize,asm_fun_name_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value101;
    __freed_obj__ = 0;
    return __result78__;
    if(asm_fun_name_90 && !__freed_obj__) { come_call_finalizer(buffer_finalize,asm_fun_name_90, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional17;
char* head_96;
int head_sline_97;
void* right_value102;
char* buf_98;
_Bool _if_conditional206;
void* right_value103;
struct sNode* node_99;
_Bool _while_condtional18;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_96, 0, sizeof(char*));
memset(&head_sline_97, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&buf_98, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&node_99, 0, sizeof(struct sNode*));
    while(_while_condtional17=*info->p,    _while_condtional17) {
        parse_sharp_v5(info);
        head_96=info->p;
        head_sline_97=info->sline;
        buf_98=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value102=parse_word(info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        if(_if_conditional206=block&&*info->p==125,        _if_conditional206) {
            info->p++;
            skip_spaces_and_lf(info);
            if(buf_98 && !__freed_obj__) { buf_98 = come_decrement_ref_count(buf_98, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=top_level_v99((char*)come_increment_ref_count(buf_98),head_96,head_sline_97,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value103;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        while(_while_condtional18=*info->p==59,        _while_condtional18) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional207=node_99!=((void*)0),        _if_conditional207) {
            if(_if_conditional208=!node_compile(node_99,info),            _if_conditional208) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional209=block&&*info->p==125,        _if_conditional209) {
            info->p++;
            skip_spaces_and_lf(info);
            if(buf_98 && !__freed_obj__) { buf_98 = come_decrement_ref_count(buf_98, (void*)0, (void*)0, 0, 0, 0); }
            if(node_99 && !__freed_obj__) { node_99 = come_decrement_ref_count(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0, 0); } 
            break;
        }
        if(buf_98 && !__freed_obj__) { buf_98 = come_decrement_ref_count(buf_98, (void*)0, (void*)0, 0, 0, 0); }
        if(node_99 && !__freed_obj__) { node_99 = come_decrement_ref_count(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0, 0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value104;
char* name_100;
void* right_value105;
void* right_value106;
struct sType* result_type_101;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
struct sType* __list_values1___102[4];
void* right_value118;
void* right_value119;
struct list$1sTypeph* param_types_107;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
char* __list_values2___108[4];
void* right_value127;
void* right_value128;
struct list$1charph* param_names_113;
void* right_value129;
void* right_value130;
struct list$1charph* param_default_parametors_114;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
struct sFun* main_fun_115;
void* right_value147;
void* right_value148;
char* name_161;
void* right_value149;
void* right_value150;
struct sType* result_type_162;
void* right_value151;
void* right_value152;
struct sType* __list_values3___163[1];
void* right_value153;
void* right_value154;
struct list$1sTypeph* param_types_164;
void* right_value155;
char* __list_values4___165[1];
void* right_value156;
void* right_value157;
struct list$1charph* param_names_166;
void* right_value158;
void* right_value159;
struct list$1charph* param_default_parametors_167;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
struct sFun* main_fun_168;
void* right_value164;
void* right_value165;
char* name_169;
void* right_value166;
void* right_value167;
struct sType* result_type_170;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
struct sType* __list_values5___171[7];
void* right_value182;
void* right_value183;
struct list$1sTypeph* param_types_172;
void* right_value184;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
char* __list_values6___173[7];
void* right_value191;
void* right_value192;
struct list$1charph* param_names_174;
void* right_value193;
void* right_value194;
struct list$1charph* param_default_parametors_175;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
struct sFun* main_fun_176;
void* right_value199;
void* right_value200;
char* name_177;
void* right_value201;
void* right_value202;
struct sType* result_type_178;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
struct sType* __list_values7___179[5];
void* right_value213;
void* right_value214;
struct list$1sTypeph* param_types_180;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
char* __list_values8___181[5];
void* right_value220;
void* right_value221;
struct list$1charph* param_names_182;
void* right_value222;
void* right_value223;
struct list$1charph* param_default_parametors_183;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
struct sFun* main_fun_184;
void* right_value228;
void* right_value229;
char* name_185;
void* right_value230;
void* right_value231;
struct sType* result_type_186;
void* right_value232;
void* right_value233;
struct sType* __list_values9___187[1];
void* right_value234;
void* right_value235;
struct list$1sTypeph* param_types_188;
void* right_value236;
char* __list_values10___189[1];
void* right_value237;
void* right_value238;
struct list$1charph* param_names_190;
void* right_value239;
void* right_value240;
struct list$1charph* param_default_parametors_191;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
struct sFun* main_fun_192;
void* right_value245;
void* right_value246;
char* name_193;
void* right_value247;
void* right_value248;
struct sType* result_type_194;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
struct sType* __list_values11___195[3];
void* right_value255;
void* right_value256;
struct list$1sTypeph* param_types_196;
void* right_value257;
void* right_value258;
void* right_value259;
char* __list_values12___197[3];
void* right_value260;
void* right_value261;
struct list$1charph* param_names_198;
void* right_value262;
void* right_value263;
struct list$1charph* param_default_parametors_199;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
struct sFun* main_fun_200;
void* right_value270;
void* right_value271;
char* name_201;
void* right_value272;
void* right_value273;
struct sType* result_type_202;
void* right_value274;
void* right_value275;
struct sType* __list_values13___203[1];
void* right_value276;
void* right_value277;
struct list$1sTypeph* param_types_204;
void* right_value278;
char* __list_values14___205[1];
void* right_value279;
void* right_value280;
struct list$1charph* param_names_206;
void* right_value281;
void* right_value282;
struct list$1charph* param_default_parametors_207;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
struct sFun* main_fun_208;
void* right_value287;
void* right_value288;
char* name_209;
void* right_value289;
void* right_value290;
struct sType* result_type_210;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
struct sType* __list_values15___211[3];
void* right_value297;
void* right_value298;
struct list$1sTypeph* param_types_212;
void* right_value299;
void* right_value300;
void* right_value301;
char* __list_values16___213[3];
void* right_value302;
void* right_value303;
struct list$1charph* param_names_214;
void* right_value304;
void* right_value305;
struct list$1charph* param_default_parametors_215;
void* right_value306;
void* right_value307;
void* right_value308;
void* right_value309;
struct sFun* main_fun_216;
void* right_value310;
void* right_value311;
char* name_217;
void* right_value312;
void* right_value313;
struct sType* result_type_218;
void* right_value314;
void* right_value315;
struct list$1sTypeph* param_types_219;
void* right_value316;
void* right_value317;
struct list$1charph* param_names_220;
void* right_value318;
void* right_value319;
struct list$1charph* param_default_parametors_221;
void* right_value320;
void* right_value321;
void* right_value322;
void* right_value323;
struct sFun* main_fun_222;
void* right_value324;
void* right_value325;
char* name_223;
void* right_value326;
void* right_value327;
struct sType* result_type_224;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
struct sType* __list_values17___225[3];
void* right_value334;
void* right_value335;
struct list$1sTypeph* param_types_226;
void* right_value336;
void* right_value337;
void* right_value338;
char* __list_values18___227[3];
void* right_value339;
void* right_value340;
struct list$1charph* param_names_228;
void* right_value341;
void* right_value342;
struct list$1charph* param_default_parametors_229;
void* right_value343;
void* right_value344;
void* right_value345;
void* right_value346;
struct sFun* main_fun_230;
void* right_value347;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&name_100, 0, sizeof(char*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_type_101, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&param_types_107, 0, sizeof(struct list$1sTypeph*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&param_names_113, 0, sizeof(struct list$1charph*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&param_default_parametors_114, 0, sizeof(struct list$1charph*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&main_fun_115, 0, sizeof(struct sFun*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&name_161, 0, sizeof(char*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&result_type_162, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&param_types_164, 0, sizeof(struct list$1sTypeph*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&param_names_166, 0, sizeof(struct list$1charph*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&param_default_parametors_167, 0, sizeof(struct list$1charph*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&main_fun_168, 0, sizeof(struct sFun*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&name_169, 0, sizeof(char*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&result_type_170, 0, sizeof(struct sType*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&param_types_172, 0, sizeof(struct list$1sTypeph*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&param_names_174, 0, sizeof(struct list$1charph*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&param_default_parametors_175, 0, sizeof(struct list$1charph*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&main_fun_176, 0, sizeof(struct sFun*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&name_177, 0, sizeof(char*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&result_type_178, 0, sizeof(struct sType*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&param_types_180, 0, sizeof(struct list$1sTypeph*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&param_names_182, 0, sizeof(struct list$1charph*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&param_default_parametors_183, 0, sizeof(struct list$1charph*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&main_fun_184, 0, sizeof(struct sFun*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&name_185, 0, sizeof(char*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&result_type_186, 0, sizeof(struct sType*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&param_types_188, 0, sizeof(struct list$1sTypeph*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&param_names_190, 0, sizeof(struct list$1charph*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&main_fun_192, 0, sizeof(struct sFun*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&name_193, 0, sizeof(char*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&result_type_194, 0, sizeof(struct sType*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&param_types_196, 0, sizeof(struct list$1sTypeph*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&param_names_198, 0, sizeof(struct list$1charph*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&param_default_parametors_199, 0, sizeof(struct list$1charph*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&main_fun_200, 0, sizeof(struct sFun*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&name_201, 0, sizeof(char*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&result_type_202, 0, sizeof(struct sType*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&param_types_204, 0, sizeof(struct list$1sTypeph*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&param_names_206, 0, sizeof(struct list$1charph*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&param_default_parametors_207, 0, sizeof(struct list$1charph*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&main_fun_208, 0, sizeof(struct sFun*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&name_209, 0, sizeof(char*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&result_type_210, 0, sizeof(struct sType*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&param_types_212, 0, sizeof(struct list$1sTypeph*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&param_names_214, 0, sizeof(struct list$1charph*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&param_default_parametors_215, 0, sizeof(struct list$1charph*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&main_fun_216, 0, sizeof(struct sFun*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&name_217, 0, sizeof(char*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&result_type_218, 0, sizeof(struct sType*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&param_types_219, 0, sizeof(struct list$1sTypeph*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&param_names_220, 0, sizeof(struct list$1charph*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&param_default_parametors_221, 0, sizeof(struct list$1charph*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&main_fun_222, 0, sizeof(struct sFun*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&name_223, 0, sizeof(char*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&result_type_224, 0, sizeof(struct sType*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&param_types_226, 0, sizeof(struct list$1sTypeph*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&param_names_228, 0, sizeof(struct list$1charph*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&param_default_parametors_229, 0, sizeof(struct list$1charph*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&main_fun_230, 0, sizeof(struct sFun*));
memset(&right_value347, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_100=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string("come_calloc"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value104;
        __freed_obj__ = 0;
        result_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 693)))),"void*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value105;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value106;
        __freed_obj__ = 0;
        {__list_values1___102[0]=come_increment_ref_count(((struct sType*)(right_value108=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value107=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 694)))),"int",(_Bool)0,info))));
__list_values1___102[1]=come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 694)))),"int",(_Bool)0,info))));
__list_values1___102[2]=come_increment_ref_count(((struct sType*)(right_value112=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value111=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 694)))),"char*",(_Bool)0,info))));
__list_values1___102[3]=come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 694)))),"int",(_Bool)0,info))));
}        param_types_107=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value118=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 694)))),4,__list_values1___102))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value107;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value108;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value109;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value110;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value111;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value112;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value113;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value114);
        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value114;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value118;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value119;
        __freed_obj__ = 0;
        {__list_values2___108[0]=come_increment_ref_count(((char*)(right_value120=__builtin_string("count"))));
__list_values2___108[1]=come_increment_ref_count(((char*)(right_value121=__builtin_string("size"))));
__list_values2___108[2]=come_increment_ref_count(((char*)(right_value122=__builtin_string("sname"))));
__list_values2___108[3]=come_increment_ref_count(((char*)(right_value123=__builtin_string("sline"))));
}        param_names_113=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 695)))),4,__list_values2___108))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value120;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value121;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value122;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value123;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value127;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value128);
        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value128;
        __freed_obj__ = 0;
        param_default_parametors_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value130=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value129=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 696))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value129;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value130;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_114,((void*)0));
        list$1charph_push_back(param_default_parametors_114,((void*)0));
        list$1charph_push_back(param_default_parametors_114,(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string("null")))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value131;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_114,(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string("0")))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value132;
        __freed_obj__ = 0;
        main_fun_115=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value136=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value133=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 701)))),(char*)come_increment_ref_count(name_100),(struct sType*)come_increment_ref_count(result_type_101),(struct list$1sTypeph*)come_increment_ref_count(param_types_107),(struct list$1charph*)come_increment_ref_count(param_names_113),(struct list$1charph*)come_increment_ref_count(param_default_parametors_114),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline)")))),(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value133;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value134;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value135);
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value135;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value136);
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value136;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(name_100)))),(struct sFun*)come_increment_ref_count(main_fun_115));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value147;
        __freed_obj__ = 0;
        if(name_100 && !__freed_obj__) { name_100 = come_decrement_ref_count(name_100, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_107 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_113 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_113, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_115 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_161=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("come_increment_ref_count"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148;
        __freed_obj__ = 0;
        result_type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value149=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 712)))),"void*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value149;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value150;
        __freed_obj__ = 0;
        {__list_values3___163[0]=come_increment_ref_count(((struct sType*)(right_value152=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value151=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 713)))),"void*",(_Bool)0,info))));
}        param_types_164=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value154=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value153=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 713)))),1,__list_values3___163))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value151;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value152;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value153;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value154;
        __freed_obj__ = 0;
        {__list_values4___165[0]=come_increment_ref_count(((char*)(right_value155=__builtin_string("mem"))));
}        param_names_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value157=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 714)))),1,__list_values4___165))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value155;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value156;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value157;
        __freed_obj__ = 0;
        param_default_parametors_167=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value159=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value158=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 715))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value158;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value159;
        __freed_obj__ = 0;
        main_fun_168=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value163=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value160=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 716)))),(char*)come_increment_ref_count(name_161),(struct sType*)come_increment_ref_count(result_type_162),(struct list$1sTypeph*)come_increment_ref_count(param_types_164),(struct list$1charph*)come_increment_ref_count(param_names_166),(struct list$1charph*)come_increment_ref_count(param_default_parametors_167),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value160;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value161;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value162);
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value162;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value163;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(name_161)))),(struct sFun*)come_increment_ref_count(main_fun_168));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value164;
        __freed_obj__ = 0;
        if(name_161 && !__freed_obj__) { name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_162 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_164 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_166 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_167 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_168 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_169=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("come_call_finalizer"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165;
        __freed_obj__ = 0;
        result_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value166=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 727)))),"void",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value166;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value167;
        __freed_obj__ = 0;
        {__list_values5___171[0]=come_increment_ref_count(((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"void*",(_Bool)0,info))));
__list_values5___171[1]=come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"void*",(_Bool)0,info))));
__list_values5___171[2]=come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"void*",(_Bool)0,info))));
__list_values5___171[3]=come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"void*",(_Bool)0,info))));
__list_values5___171[4]=come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"int",(_Bool)0,info))));
__list_values5___171[5]=come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"int",(_Bool)0,info))));
__list_values5___171[6]=come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 728)))),"int",(_Bool)0,info))));
}        param_types_172=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 728)))),7,__list_values5___171))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value168;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value169;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value171;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value172;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value173;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value174;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value175;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value176;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value177);
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value177;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value178;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value179;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value180;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value181;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value182;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value183;
        __freed_obj__ = 0;
        {__list_values6___173[0]=come_increment_ref_count(((char*)(right_value184=__builtin_string("fun"))));
__list_values6___173[1]=come_increment_ref_count(((char*)(right_value185=__builtin_string("mem"))));
__list_values6___173[2]=come_increment_ref_count(((char*)(right_value186=__builtin_string("protocol_fun"))));
__list_values6___173[3]=come_increment_ref_count(((char*)(right_value187=__builtin_string("protocol_obj"))));
__list_values6___173[4]=come_increment_ref_count(((char*)(right_value188=__builtin_string("call_finalizer_only"))));
__list_values6___173[5]=come_increment_ref_count(((char*)(right_value189=__builtin_string("no_decrement"))));
__list_values6___173[6]=come_increment_ref_count(((char*)(right_value190=__builtin_string("no_free"))));
}        param_names_174=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 729)))),7,__list_values6___173))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value184;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value185;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value186;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value187;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value188;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value189;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value190;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value191;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value192;
        __freed_obj__ = 0;
        param_default_parametors_175=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value194=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value193=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 730))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value193;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value194;
        __freed_obj__ = 0;
        main_fun_176=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value198=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value195=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 731)))),(char*)come_increment_ref_count(name_169),(struct sType*)come_increment_ref_count(result_type_170),(struct list$1sTypeph*)come_increment_ref_count(param_types_172),(struct list$1charph*)come_increment_ref_count(param_names_174),(struct list$1charph*)come_increment_ref_count(param_default_parametors_175),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value195;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[31] = right_value196;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[32] = right_value197;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[33] = right_value198;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string(name_169)))),(struct sFun*)come_increment_ref_count(main_fun_176));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[34] = right_value199;
        __freed_obj__ = 0;
        if(name_169 && !__freed_obj__) { name_169 = come_decrement_ref_count(name_169, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_170 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_172 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_174 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_174, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_175 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_175, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_176 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_177=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("come_decrement_ref_count"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = 0;
        result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 742)))),"void*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value201;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value202;
        __freed_obj__ = 0;
        {__list_values7___179[0]=come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 743)))),"void*",(_Bool)0,info))));
__list_values7___179[1]=come_increment_ref_count(((struct sType*)(right_value206=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value205=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 743)))),"void*",(_Bool)0,info))));
__list_values7___179[2]=come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value207=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 743)))),"void*",(_Bool)0,info))));
__list_values7___179[3]=come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 743)))),"bool",(_Bool)0,info))));
__list_values7___179[4]=come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 743)))),"bool",(_Bool)0,info))));
}        param_types_180=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value214=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 743)))),5,__list_values7___179))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value203;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value204;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value205;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value206;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value207;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value208;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value209;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value210;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value211;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value212;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value213;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value214;
        __freed_obj__ = 0;
        {__list_values8___181[0]=come_increment_ref_count(((char*)(right_value215=__builtin_string("mem"))));
__list_values8___181[1]=come_increment_ref_count(((char*)(right_value216=__builtin_string("protocol_fun"))));
__list_values8___181[2]=come_increment_ref_count(((char*)(right_value217=__builtin_string("protocol_obj"))));
__list_values8___181[3]=come_increment_ref_count(((char*)(right_value218=__builtin_string("no_decrement"))));
__list_values8___181[4]=come_increment_ref_count(((char*)(right_value219=__builtin_string("no_free"))));
}        param_names_182=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value220=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 744)))),5,__list_values8___181))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value215;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value216;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value217;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value218;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value219;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value220;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value221;
        __freed_obj__ = 0;
        param_default_parametors_183=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value223=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value222=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 745))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value222;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value223;
        __freed_obj__ = 0;
        main_fun_184=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value227=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value224=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 746)))),(char*)come_increment_ref_count(name_177),(struct sType*)come_increment_ref_count(result_type_178),(struct list$1sTypeph*)come_increment_ref_count(param_types_180),(struct list$1charph*)come_increment_ref_count(param_names_182),(struct list$1charph*)come_increment_ref_count(param_default_parametors_183),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value224;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value225;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value226;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value227;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(name_177)))),(struct sFun*)come_increment_ref_count(main_fun_184));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value228;
        __freed_obj__ = 0;
        if(name_177 && !__freed_obj__) { name_177 = come_decrement_ref_count(name_177, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_178 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_178, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_180 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_182 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_182, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_183 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_183, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_184 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_185=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string("come_free_object"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = 0;
        result_type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 757)))),"void",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value230;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value231;
        __freed_obj__ = 0;
        {__list_values9___187[0]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 758)))),"void*",(_Bool)0,info))));
}        param_types_188=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value235=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value234=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 758)))),1,__list_values9___187))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value232;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value233;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value234);
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value234;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value235;
        __freed_obj__ = 0;
        {__list_values10___189[0]=come_increment_ref_count(((char*)(right_value236=__builtin_string("mem"))));
}        param_names_190=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value238=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value237=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 759)))),1,__list_values10___189))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value236);
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value236;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value237;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value238;
        __freed_obj__ = 0;
        param_default_parametors_191=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value240=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value239=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 760))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value239;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value240;
        __freed_obj__ = 0;
        main_fun_192=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value244=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value241=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 761)))),(char*)come_increment_ref_count(name_185),(struct sType*)come_increment_ref_count(result_type_186),(struct list$1sTypeph*)come_increment_ref_count(param_types_188),(struct list$1charph*)come_increment_ref_count(param_names_190),(struct list$1charph*)come_increment_ref_count(param_default_parametors_191),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value241;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value242;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value243;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value244;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(name_185)))),(struct sFun*)come_increment_ref_count(main_fun_192));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value245;
        __freed_obj__ = 0;
        if(name_185 && !__freed_obj__) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_188 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_190 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_191 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_192 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_193=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string("come_memdup"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = 0;
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 772)))),"void*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value247;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value248;
        __freed_obj__ = 0;
        {__list_values11___195[0]=come_increment_ref_count(((struct sType*)(right_value250=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value249=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 773)))),"void*",(_Bool)0,info))));
__list_values11___195[1]=come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 773)))),"char*",(_Bool)0,info))));
__list_values11___195[2]=come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 773)))),"int",(_Bool)0,info))));
}        param_types_196=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value256=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value255=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 773)))),3,__list_values11___195))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value250;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value251;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value252;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value254;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value255;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value256;
        __freed_obj__ = 0;
        {__list_values12___197[0]=come_increment_ref_count(((char*)(right_value257=__builtin_string("block"))));
__list_values12___197[1]=come_increment_ref_count(((char*)(right_value258=__builtin_string("sname"))));
__list_values12___197[2]=come_increment_ref_count(((char*)(right_value259=__builtin_string("sline"))));
}        param_names_198=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value261=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value260=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 774)))),3,__list_values12___197))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value258;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value259;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value260;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value261;
        __freed_obj__ = 0;
        param_default_parametors_199=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value263=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value262=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 775))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value263;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_199,((void*)0));
        list$1charph_push_back(param_default_parametors_199,(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("null")))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value264;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_199,(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("0")))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value265;
        __freed_obj__ = 0;
        main_fun_200=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value269=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value266=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 779)))),(char*)come_increment_ref_count(name_193),(struct sType*)come_increment_ref_count(result_type_194),(struct list$1sTypeph*)come_increment_ref_count(param_types_196),(struct list$1charph*)come_increment_ref_count(param_names_198),(struct list$1charph*)come_increment_ref_count(param_default_parametors_199),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("void* come_memdup(void* block, char* sname, int sline)")))),(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value268;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value269;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(name_193)))),(struct sFun*)come_increment_ref_count(main_fun_200));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value270;
        __freed_obj__ = 0;
        if(name_193 && !__freed_obj__) { name_193 = come_decrement_ref_count(name_193, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_196 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_198 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_199 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_200 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_200, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_201=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("__builtin_string"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271;
        __freed_obj__ = 0;
        result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 790)))),"char*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value272;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value273;
        __freed_obj__ = 0;
        {__list_values13___203[0]=come_increment_ref_count(((struct sType*)(right_value275=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value274=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 791)))),"char*",(_Bool)0,info))));
}        param_types_204=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value276=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 791)))),1,__list_values13___203))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value275;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value276;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value277;
        __freed_obj__ = 0;
        {__list_values14___205[0]=come_increment_ref_count(((char*)(right_value278=__builtin_string("str"))));
}        param_names_206=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value280=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value279=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 792)))),1,__list_values14___205))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value278;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value279;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value280;
        __freed_obj__ = 0;
        param_default_parametors_207=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value281=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 793))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value281;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value282;
        __freed_obj__ = 0;
        main_fun_208=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value286=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value283=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 794)))),(char*)come_increment_ref_count(name_201),(struct sType*)come_increment_ref_count(result_type_202),(struct list$1sTypeph*)come_increment_ref_count(param_types_204),(struct list$1charph*)come_increment_ref_count(param_names_206),(struct list$1charph*)come_increment_ref_count(param_default_parametors_207),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value283;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value284;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value285;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value286);
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value286;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(name_201)))),(struct sFun*)come_increment_ref_count(main_fun_208));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value287;
        __freed_obj__ = 0;
        if(name_201 && !__freed_obj__) { name_201 = come_decrement_ref_count(name_201, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_204 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_206 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_207 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_207, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_208 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_209=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("come_heap_init"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value288;
        __freed_obj__ = 0;
        result_type_210=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value289=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 805)))),"void",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value289;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value290;
        __freed_obj__ = 0;
        {__list_values15___211[0]=come_increment_ref_count(((struct sType*)(right_value292=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value291=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 806)))),"int",(_Bool)0,info))));
__list_values15___211[1]=come_increment_ref_count(((struct sType*)(right_value294=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value293=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 806)))),"int",(_Bool)0,info))));
__list_values15___211[2]=come_increment_ref_count(((struct sType*)(right_value296=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value295=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 806)))),"int",(_Bool)0,info))));
}        param_types_212=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value298=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 806)))),3,__list_values15___211))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value291);
        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value291;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value292;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value293;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value294;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value295;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value296);
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value296;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value297);
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value297;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value298);
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value298;
        __freed_obj__ = 0;
        {__list_values16___213[0]=come_increment_ref_count(((char*)(right_value299=xsprintf("come_malloc"))));
__list_values16___213[1]=come_increment_ref_count(((char*)(right_value300=xsprintf("come_debug"))));
__list_values16___213[2]=come_increment_ref_count(((char*)(right_value301=xsprintf("come_gc"))));
}        param_names_214=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value303=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 807)))),3,__list_values16___213))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value299);
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value299;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value300);
        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value300;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value301;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value302);
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value302;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value303;
        __freed_obj__ = 0;
        param_default_parametors_215=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value305=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value304=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 808))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value304;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value305;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_215,((void*)0));
        main_fun_216=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value309=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value306=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 810)))),(char*)come_increment_ref_count(name_209),(struct sType*)come_increment_ref_count(result_type_210),(struct list$1sTypeph*)come_increment_ref_count(param_types_212),(struct list$1charph*)come_increment_ref_count(param_names_214),(struct list$1charph*)come_increment_ref_count(param_default_parametors_215),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value306;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value307;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value308);
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value308;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value309;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value310=__builtin_string(name_209)))),(struct sFun*)come_increment_ref_count(main_fun_216));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value310;
        __freed_obj__ = 0;
        if(name_209 && !__freed_obj__) { name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_212 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_212, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_214 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_214, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_215 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_215, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_216 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_217=(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string("come_heap_final"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value311;
        __freed_obj__ = 0;
        result_type_218=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value312=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 821)))),"void",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value312;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value313);
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value313;
        __freed_obj__ = 0;
        param_types_219=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value315=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value314=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 822))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value314;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value315;
        __freed_obj__ = 0;
        param_names_220=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value317=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value316=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 823))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value316;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value317);
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value317;
        __freed_obj__ = 0;
        param_default_parametors_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value319=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value318=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 824))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value318;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value319;
        __freed_obj__ = 0;
        main_fun_222=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value323=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value320=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 825)))),(char*)come_increment_ref_count(name_217),(struct sType*)come_increment_ref_count(result_type_218),(struct list$1sTypeph*)come_increment_ref_count(param_types_219),(struct list$1charph*)come_increment_ref_count(param_names_220),(struct list$1charph*)come_increment_ref_count(param_default_parametors_221),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value320;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value321;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value322;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value323;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(name_217)))),(struct sFun*)come_increment_ref_count(main_fun_222));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value324;
        __freed_obj__ = 0;
        if(name_217 && !__freed_obj__) { name_217 = come_decrement_ref_count(name_217, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_218 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_218, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_219 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_220 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_221 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_222 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    {
        name_223=(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string("come_null_check"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value325;
        __freed_obj__ = 0;
        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value326=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 836)))),"void*",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value326;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value327;
        __freed_obj__ = 0;
        {__list_values17___225[0]=come_increment_ref_count(((struct sType*)(right_value329=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value328=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 837)))),"void*",(_Bool)0,info))));
__list_values17___225[1]=come_increment_ref_count(((struct sType*)(right_value331=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value330=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 837)))),"char*",(_Bool)0,info))));
__list_values17___225[2]=come_increment_ref_count(((struct sType*)(right_value333=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value332=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 837)))),"int",(_Bool)0,info))));
}        param_types_226=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value334=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 837)))),3,__list_values17___225))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value328;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value329);
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value329;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value330);
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value330;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value331);
        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value331;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value332);
        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value332;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value333;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value334);
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value334;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value335);
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value335;
        __freed_obj__ = 0;
        {__list_values18___227[0]=come_increment_ref_count(((char*)(right_value336=__builtin_string("mem"))));
__list_values18___227[1]=come_increment_ref_count(((char*)(right_value337=__builtin_string("sname"))));
__list_values18___227[2]=come_increment_ref_count(((char*)(right_value338=__builtin_string("sline"))));
}        param_names_228=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value340=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 838)))),3,__list_values18___227))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value336;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value337);
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value337;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value338);
        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value338;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value339);
        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value339;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value340);
        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value340;
        __freed_obj__ = 0;
        param_default_parametors_229=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value342=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value341=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 839))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value341);
        if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value341;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value342);
        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value342;
        __freed_obj__ = 0;
        main_fun_230=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value346=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value343=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 840)))),(char*)come_increment_ref_count(name_223),(struct sType*)come_increment_ref_count(result_type_224),(struct list$1sTypeph*)come_increment_ref_count(param_types_226),(struct list$1charph*)come_increment_ref_count(param_names_228),(struct list$1charph*)come_increment_ref_count(param_default_parametors_229),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string("void* come_null_check(void* mem, char* sname, int sline)")))),(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value343);
        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value343;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value344);
        if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value344;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value345);
        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value345;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value346);
        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value346;
        __freed_obj__ = 0;
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value347=__builtin_string(name_223)))),(struct sFun*)come_increment_ref_count(main_fun_230));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value347);
        if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value347;
        __freed_obj__ = 0;
        if(name_223 && !__freed_obj__) { name_223 = come_decrement_ref_count(name_223, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_224 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_224, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_226 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_226, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_228 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_228, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_229 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_229, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(main_fun_230 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    transpile_toplevel((_Bool)0,info);
    __result109__ = 0;
    return __result109__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_103;
_Bool _for_condtionalA4;
struct list$1sTypeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_103, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_103=0 ,            0;            _for_condtionalA4=            i_103<num_value ,            _for_condtionalA4;            i_103++ ,            0            ){
                list$1sTypeph_push_back(self,values[i_103]);
            }
            __result80__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result80__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
void* right_value115;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj58;
_Bool _if_conditional211;
void* right_value116;
struct list_item$1sTypeph* litem_105;
struct sType* __dec_obj59;
void* right_value117;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj60;
struct list$1sTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value117, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional210=self->len==0,                    _if_conditional210) {
                        litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value115=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value115;
                        __freed_obj__ = 0;
                        litem_104->prev=((void*)0);
                        litem_104->next=((void*)0);
                        __dec_obj58=litem_104->item;
                        litem_104->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_104;
                        self->head=litem_104;
                    }
                    else {
                        if(_if_conditional211=self->len==1,                        _if_conditional211) {
                            litem_105=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value116=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value116;
                            __freed_obj__ = 0;
                            litem_105->prev=self->head;
                            litem_105->next=((void*)0);
                            __dec_obj59=litem_105->item;
                            litem_105->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_105;
                            self->head->next=litem_105;
                        }
                        else {
                            litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value117=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value117;
                            __freed_obj__ = 0;
                            litem_106->prev=self->tail;
                            litem_106->next=((void*)0);
                            __dec_obj60=litem_106->item;
                            litem_106->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_106;
                            self->tail=litem_106;
                        }
                    }
                    self->len++;
                    __result79__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result79__;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_109;
_Bool _for_condtionalA5;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_109, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_109=0 ,            0;            _for_condtionalA5=            i_109<num_value ,            _for_condtionalA5;            i_109++ ,            0            ){
                list$1charph_push_back(self,values[i_109]);
            }
            __result82__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result82__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
void* right_value124;
struct list_item$1charph* litem_110;
char* __dec_obj61;
_Bool _if_conditional213;
void* right_value125;
struct list_item$1charph* litem_111;
char* __dec_obj62;
void* right_value126;
struct list_item$1charph* litem_112;
char* __dec_obj63;
struct list$1charph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional212=self->len==0,                    _if_conditional212) {
                        litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value124;
                        __freed_obj__ = 0;
                        litem_110->prev=((void*)0);
                        litem_110->next=((void*)0);
                        __dec_obj61=litem_110->item;
                        litem_110->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_110;
                        self->head=litem_110;
                    }
                    else {
                        if(_if_conditional213=self->len==1,                        _if_conditional213) {
                            litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value125;
                            __freed_obj__ = 0;
                            litem_111->prev=self->head;
                            litem_111->next=((void*)0);
                            __dec_obj62=litem_111->item;
                            litem_111->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_111;
                            self->head->next=litem_111;
                        }
                        else {
                            litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value126;
                            __freed_obj__ = 0;
                            litem_112->prev=self->tail;
                            litem_112->next=((void*)0);
                            __dec_obj63=litem_112->item;
                            litem_112->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                            self->tail->next=litem_112;
                            self->tail=litem_112;
                        }
                    }
                    self->len++;
                    __result81__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    return __result81__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
unsigned int hash_134;
unsigned int it_135;
_Bool _while_condtional21;
_Bool _if_conditional227;
void* right_value141;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool same_key_exist_152;
char* it2_155;
_Bool _for_condtionalA7;
void* right_value143;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct map$2charphsFunph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_134, 0, sizeof(unsigned int));
memset(&it_135, 0, sizeof(unsigned int));
memset(&right_value141, 0, sizeof(void*));
memset(&same_key_exist_152, 0, sizeof(_Bool));
memset(&it2_155, 0, sizeof(char*));
memset(&right_value143, 0, sizeof(void*));
            if(_if_conditional214=self->len*10>=self->size,            _if_conditional214) {
                map$2charphsFunph_rehash(self);
            }
            hash_134=string_get_hash_key(key)%self->size;
            it_135=hash_134;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional227=self->item_existance[it_135],                _if_conditional227) {
                    if(_if_conditional228=optional$2boolbool_value(((struct optional$2boolbool*)(right_value141=string_equals(self->keys[it_135],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141),
                    (right_value141 && right_value141 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value141, 
                    __freed_obj__ = 0, 
                    _if_conditional228) {
                        if(_if_conditional229=1,                        _if_conditional229) {
                            list$1charp_remove(self->key_list,self->keys[it_135]);
                            if(self->keys[it_135] && !__freed_obj__) { self->keys[it_135] = come_decrement_ref_count(self->keys[it_135], (void*)0, (void*)0, 0, 0, 0); }
                            self->keys[it_135]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_135]);
                            self->keys[it_135]=key;
                        }
                        if(_if_conditional249=1,                        _if_conditional249) {
                            if(self->items[it_135] && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->items[it_135], (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->items[it_135]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_135]=item;
                        }
                        break;
                    }
                    it_135++;
                    if(_if_conditional250=it_135>=self->size,                    _if_conditional250) {
                        it_135=0;
                    }
                    else {
                        if(_if_conditional251=it_135==hash_134,                        _if_conditional251) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_135]=(_Bool)1;
                    if(_if_conditional252=1,                    _if_conditional252) {
                        self->keys[it_135]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_135]=key;
                    }
                    if(_if_conditional253=1,                    _if_conditional253) {
                        self->items[it_135]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_135]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_152=(_Bool)0;
            for(
            it2_155=list$1charp_begin(self->key_list) ,            0;            _for_condtionalA7=            !list$1charp_end(self->key_list) ,            _for_condtionalA7;            it2_155=list$1charp_next(self->key_list) ,            0            ){
                if(_if_conditional258=optional$2boolbool_value(((struct optional$2boolbool*)(right_value143=string_equals(it2_155,key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143),
                (right_value143 && right_value143 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value143, 
                __freed_obj__ = 0, 
                _if_conditional258) {
                    same_key_exist_152=(_Bool)1;
                }
            }
            if(_if_conditional259=!same_key_exist_152,            _if_conditional259) {
                list$1charp_push_back(self->key_list,key);
            }
            __result108__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result108__;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_116;
void* right_value137;
char** keys_117;
void* right_value138;
struct sFun** items_118;
void* right_value139;
_Bool* item_existance_119;
int len_120;
char* it_123;
_Bool _for_condtionalA6;
struct sFun* default_value_126;
struct sFun* it2_130;
unsigned int hash_131;
int n_132;
_Bool _while_condtional20;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct sFun* default_value_133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_116, 0, sizeof(int));
memset(&right_value137, 0, sizeof(void*));
memset(&keys_117, 0, sizeof(char**));
memset(&right_value138, 0, sizeof(void*));
memset(&items_118, 0, sizeof(struct sFun**));
memset(&right_value139, 0, sizeof(void*));
memset(&item_existance_119, 0, sizeof(_Bool*));
memset(&len_120, 0, sizeof(int));
memset(&it_123, 0, sizeof(char*));
memset(&default_value_126, 0, sizeof(struct sFun*));
memset(&it2_130, 0, sizeof(struct sFun*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&n_132, 0, sizeof(int));
memset(&default_value_133, 0, sizeof(struct sFun*));
                    size_116=self->size*10;
                    keys_117=(char**)come_increment_ref_count(((char**)(right_value137=(char**)come_calloc(1, sizeof(char*)*(1*(size_116)), "./comelang2.h", 1377))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value137;
                    __freed_obj__ = 0;
                    items_118=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value138=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_116)), "./comelang2.h", 1378))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
                    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value138;
                    __freed_obj__ = 0;
                    item_existance_119=(_Bool*)come_increment_ref_count(((_Bool*)(right_value139=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_116)), "./comelang2.h", 1379))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value139;
                    __freed_obj__ = 0;
                    len_120=0;
                    for(
                    it_123=map$2charphsFunph_begin(self) ,                    0;                    _for_condtionalA6=                    !map$2charphsFunph_end(self) ,                    _for_condtionalA6;                    it_123=map$2charphsFunph_next(self) ,                    0                    ){
                        memset(&default_value_126,0,sizeof(struct sFun*));
                        it2_130=map$2charphsFunph_at(self,it_123,default_value_126);
                        hash_131=string_get_hash_key(it_123)%size_116;
                        n_132=hash_131;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional224=item_existance_119[n_132],                            _if_conditional224) {
                                n_132++;
                                if(_if_conditional225=n_132>=size_116,                                _if_conditional225) {
                                    n_132=0;
                                }
                                else {
                                    if(_if_conditional226=n_132==hash_131,                                    _if_conditional226) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_119[n_132]=(_Bool)1;
                                keys_117[n_132]=it_123;
                                items_118[n_132]=map$2charphsFunph_at(self,it_123,default_value_133);
                                len_120++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_117;
                    self->items=items_118;
                    self->item_existance=item_existance_119;
                    self->size=size_116;
                    self->len=len_120;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
char* result_121;
char* __result83__;
_Bool _if_conditional216;
char* __result84__;
char* result_122;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                        if(_if_conditional215=self==((void*)0),                        _if_conditional215) {
                            memset(&result_121,0,sizeof(char*));
                            __result83__ = __result_obj__ = result_121;
                            return __result83__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(_if_conditional216=self->key_list->it,                        _if_conditional216) {
                            __result84__ = __result_obj__ = self->key_list->it->item;
                            return __result84__;
                        }
                        memset(&result_122,0,sizeof(char*));
                        __result85__ = __result_obj__ = result_122;
                        return __result85__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result86__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result86__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
char* result_124;
char* __result87__;
_Bool _if_conditional218;
char* __result88__;
char* result_125;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                        if(_if_conditional217=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional217) {
                            memset(&result_124,0,sizeof(char*));
                            __result87__ = __result_obj__ = result_124;
                            return __result87__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(_if_conditional218=self->key_list->it,                        _if_conditional218) {
                            __result88__ = __result_obj__ = self->key_list->it->item;
                            return __result88__;
                        }
                        memset(&result_125,0,sizeof(char*));
                        __result89__ = __result_obj__ = result_125;
                        return __result89__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_127;
unsigned int it_128;
_Bool _while_condtional19;
_Bool _if_conditional219;
void* right_value140;
_Bool _if_conditional221;
struct sFun* __result92__;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sFun* __result93__;
struct sFun* __result94__;
struct sFun* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&it_128, 0, sizeof(unsigned int));
memset(&right_value140, 0, sizeof(void*));
                            hash_127=string_get_hash_key(((char*)key))%self->size;
                            it_128=hash_127;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional219=self->item_existance[it_128],                                _if_conditional219) {
                                    if(_if_conditional221=optional$2boolbool_value(((struct optional$2boolbool*)(right_value140=string_equals(self->keys[it_128],key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140),
                                    (right_value140 && right_value140 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value140, 
                                    __freed_obj__ = 0, 
                                    _if_conditional221) {
                                        __result92__ = __result_obj__ = self->items[it_128];
                                        return __result92__;
                                    }
                                    it_128++;
                                    if(_if_conditional222=it_128>=self->size,                                    _if_conditional222) {
                                        it_128=0;
                                    }
                                    else {
                                        if(_if_conditional223=it_128==hash_127,                                        _if_conditional223) {
                                            __result93__ = __result_obj__ = default_value;
                                            return __result93__;
                                        }
                                    }
                                }
                                else {
                                    __result94__ = __result_obj__ = default_value;
                                    return __result94__;
                                }
                            }
                            __result95__ = __result_obj__ = default_value;
                            return __result95__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
_Bool default_value_129;
_Bool __result90__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_129, 0, sizeof(_Bool));
                                        if(_if_conditional220=self==((void*)0),                                        _if_conditional220) {
                                            memset(&default_value_129,0,sizeof(_Bool));
                                            __result90__ = default_value_129;
                                            return __result90__;
                                        }
                                        else {
                                            __result91__ = self->v1;
                                            return __result91__;
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
int it2_136;
struct list_item$1charp* it_137;
_Bool _while_condtional22;
void* right_value142;
_Bool _if_conditional230;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_136, 0, sizeof(int));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&right_value142, 0, sizeof(void*));
                                it2_136=0;
                                it_137=self->head;
                                while(_while_condtional22=it_137!=((void*)0),                                _while_condtional22) {
                                    if(_if_conditional230=optional$2boolbool_value(((struct optional$2boolbool*)(right_value142=string_equals(it_137->item,item)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142),
                                    (right_value142 && right_value142 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value142, 
                                    __freed_obj__ = 0, 
                                    _if_conditional230) {
                                        list$1charp_delete(self,it2_136,it2_136+1);
                                        break;
                                    }
                                    it2_136++;
                                    it_137=it_137->next;
                                }
                                __result99__ = __result_obj__ = self;
                                return __result99__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
int tmp_138;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list$1charp* __result96__;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* it_141;
int i_142;
_Bool _while_condtional24;
_Bool _if_conditional239;
struct list_item$1charp* prev_it_143;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* it_144;
int i_145;
_Bool _while_condtional25;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list_item$1charp* prev_it_146;
struct list_item$1charp* it_147;
struct list_item$1charp* head_prev_it_148;
struct list_item$1charp* tail_it_149;
int i_150;
_Bool _while_condtional26;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct list_item$1charp* prev_it_151;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_138, 0, sizeof(int));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
memset(&i_142, 0, sizeof(int));
memset(&prev_it_143, 0, sizeof(struct list_item$1charp*));
memset(&it_144, 0, sizeof(struct list_item$1charp*));
memset(&i_145, 0, sizeof(int));
memset(&prev_it_146, 0, sizeof(struct list_item$1charp*));
memset(&it_147, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_148, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_149, 0, sizeof(struct list_item$1charp*));
memset(&i_150, 0, sizeof(int));
memset(&prev_it_151, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional231=head<0,                                            _if_conditional231) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional232=tail<0,                                            _if_conditional232) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional233=head>tail,                                            _if_conditional233) {
                                                tmp_138=tail;
                                                tail=head;
                                                head=tmp_138;
                                            }
                                            if(_if_conditional234=head<0,                                            _if_conditional234) {
                                                head=0;
                                            }
                                            if(_if_conditional235=tail>self->len,                                            _if_conditional235) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional236=head==tail,                                            _if_conditional236) {
                                                __result96__ = __result_obj__ = self;
                                                return __result96__;
                                            }
                                            if(_if_conditional237=head==0&&tail==self->len,                                            _if_conditional237) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional238=head==0,                                                _if_conditional238) {
                                                    it_141=self->head;
                                                    i_142=0;
                                                    while(_while_condtional24=it_141!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional239=i_142<tail,                                                        _if_conditional239) {
                                                            prev_it_143=it_141;
                                                            it_141=it_141->next;
                                                            i_142++;
                                                            if(prev_it_143 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional240=i_142==tail,                                                            _if_conditional240) {
                                                                self->head=it_141;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_141=it_141->next;
                                                                i_142++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional241=tail==self->len,                                                    _if_conditional241) {
                                                        it_144=self->head;
                                                        i_145=0;
                                                        while(_while_condtional25=it_144!=((void*)0),                                                        _while_condtional25) {
                                                            if(_if_conditional242=i_145==head,                                                            _if_conditional242) {
                                                                self->tail=it_144->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional243=i_145>=head,                                                            _if_conditional243) {
                                                                prev_it_146=it_144;
                                                                it_144=it_144->next;
                                                                i_145++;
                                                                if(prev_it_146 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_144=it_144->next;
                                                                i_145++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_147=self->head;
                                                        head_prev_it_148=((void*)0);
                                                        tail_it_149=((void*)0);
                                                        i_150=0;
                                                        while(_while_condtional26=it_147!=((void*)0),                                                        _while_condtional26) {
                                                            if(_if_conditional244=i_150==head,                                                            _if_conditional244) {
                                                                head_prev_it_148=it_147->prev;
                                                            }
                                                            if(_if_conditional245=i_150==tail,                                                            _if_conditional245) {
                                                                tail_it_149=it_147;
                                                            }
                                                            if(_if_conditional246=i_150>=head&&i_150<tail,                                                            _if_conditional246) {
                                                                prev_it_151=it_147;
                                                                it_147=it_147->next;
                                                                i_150++;
                                                                if(prev_it_151 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_147=it_147->next;
                                                                i_150++;
                                                            }
                                                        }
                                                        if(_if_conditional247=head_prev_it_148!=((void*)0),                                                        _if_conditional247) {
                                                            head_prev_it_148->next=tail_it_149;
                                                        }
                                                        if(_if_conditional248=tail_it_149!=((void*)0),                                                        _if_conditional248) {
                                                            tail_it_149->prev=head_prev_it_148;
                                                        }
                                                    }
                                                }
                                            }
                                            __result98__ = __result_obj__ = self;
                                            return __result98__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_139;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_140;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_140, 0, sizeof(struct list_item$1charp*));
                                                    it_139=self->head;
                                                    while(_while_condtional23=it_139!=((void*)0),                                                    _while_condtional23) {
                                                        prev_it_140=it_139;
                                                        it_139=it_139->next;
                                                        if(prev_it_140 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result97__ = __result_obj__ = self;
                                                    return __result97__;
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
_Bool _if_conditional254;
char* result_153;
char* __result100__;
_Bool _if_conditional255;
char* __result101__;
char* result_154;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_153, 0, sizeof(char*));
memset(&result_154, 0, sizeof(char*));
                if(_if_conditional254=self==((void*)0),                _if_conditional254) {
                    memset(&result_153,0,sizeof(char*));
                    __result100__ = __result_obj__ = result_153;
                    return __result100__;
                }
                self->it=self->head;
                if(_if_conditional255=self->it,                _if_conditional255) {
                    __result101__ = __result_obj__ = self->it->item;
                    return __result101__;
                }
                memset(&result_154,0,sizeof(char*));
                __result102__ = __result_obj__ = result_154;
                return __result102__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result103__ = self==((void*)0)||self->it==((void*)0);
                return __result103__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
char* result_156;
char* __result104__;
_Bool _if_conditional257;
char* __result105__;
char* result_157;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                if(_if_conditional256=self==((void*)0)||self->it==((void*)0),                _if_conditional256) {
                    memset(&result_156,0,sizeof(char*));
                    __result104__ = __result_obj__ = result_156;
                    return __result104__;
                }
                self->it=self->it->next;
                if(_if_conditional257=self->it,                _if_conditional257) {
                    __result105__ = __result_obj__ = self->it->item;
                    return __result105__;
                }
                memset(&result_157,0,sizeof(char*));
                __result106__ = __result_obj__ = result_157;
                return __result106__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
void* right_value144;
struct list_item$1charp* litem_158;
_Bool _if_conditional261;
void* right_value145;
struct list_item$1charp* litem_159;
void* right_value146;
struct list_item$1charp* litem_160;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
memset(&litem_158, 0, sizeof(struct list_item$1charp*));
memset(&right_value145, 0, sizeof(void*));
memset(&litem_159, 0, sizeof(struct list_item$1charp*));
memset(&right_value146, 0, sizeof(void*));
memset(&litem_160, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional260=self->len==0,                    _if_conditional260) {
                        litem_158=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value144=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value144;
                        __freed_obj__ = 0;
                        litem_158->prev=((void*)0);
                        litem_158->next=((void*)0);
                        litem_158->item=item;
                        self->tail=litem_158;
                        self->head=litem_158;
                    }
                    else {
                        if(_if_conditional261=self->len==1,                        _if_conditional261) {
                            litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value145=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value145;
                            __freed_obj__ = 0;
                            litem_159->prev=self->head;
                            litem_159->next=((void*)0);
                            litem_159->item=item;
                            self->tail=litem_159;
                            self->head->next=litem_159;
                        }
                        else {
                            litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value146=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value146;
                            __freed_obj__ = 0;
                            litem_160->prev=self->tail;
                            litem_160->next=((void*)0);
                            litem_160->item=item;
                            self->tail->next=litem_160;
                            self->tail=litem_160;
                        }
                    }
                    self->len++;
                    __result107__ = __result_obj__ = self;
                    return __result107__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool is_type_name_flag_231;
int sline_232;
_Bool define_struct_nobody_233;
char* p_234;
int sline_235;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value348;
char* word_236;
_Bool _if_conditional264;
_Bool define_function_pointer_result_function_237;
_Bool define_variable_between_brace_238;
_Bool _if_conditional265;
char* p_239;
_Bool _if_conditional266;
void* right_value349;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* result_type_240;
char* fun_name_241;
_Bool err_242;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value350;
char* word_243;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool define_function_flag_244;
_Bool _if_conditional274;
char* p_245;
_Bool invalid_type_246;
_Bool _if_conditional275;
void* right_value351;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* result_type_247;
char* fun_name_248;
_Bool err_249;
_Bool _if_conditional276;
char* word_250;
_Bool _if_conditional277;
void* right_value352;
char* __dec_obj64;
_Bool _if_conditional278;
void* right_value353;
char* __dec_obj65;
char* __dec_obj66;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _while_condtional27;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value354;
char* __dec_obj67;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool define_variable_251;
_Bool _if_conditional286;
char* p_252;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value355;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* result_type_253;
char* fun_name_254;
_Bool err_255;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value356;
char* word_256;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value357;
char* word_257;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _while_condtional28;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value358;
struct sNode* __result110__;
_Bool _if_conditional303;
char* header_head_258;
void* right_value359;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* result_type_259;
char* fun_name_260;
_Bool err_261;
_Bool _if_conditional304;
void* right_value360;
void* right_value361;
struct list$1sTypeph* param_types_262;
void* right_value362;
void* right_value363;
struct list$1charph* param_names_263;
_Bool _if_conditional305;
_Bool _while_condtional29;
void* right_value364;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* param_type_264;
char* param_name_265;
_Bool err_266;
_Bool _if_conditional306;
static int num_function_pointer_result_var_name_a_267=0;
void* right_value365;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value366;
_Bool _if_conditional310;
void* right_value367;
void* right_value368;
struct list$1sTypeph* param_types2_269;
void* right_value369;
void* right_value370;
struct list$1charph* param_names2_270;
_Bool _if_conditional311;
_Bool _while_condtional30;
void* right_value371;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* param_type_271;
char* param_name_272;
_Bool err_273;
_Bool _if_conditional312;
static int num_function_pointer_result_var_name_b_274=0;
void* right_value372;
_Bool _if_conditional313;
_Bool _if_conditional314;
char* header_tail_275;
void* right_value373;
void* right_value374;
struct sType* result_type2_276;
void* right_value375;
void* right_value377;
struct tuple1$1sTypeph* __dec_obj69;
void* right_value378;
struct list$1sTypeph* __dec_obj70;
void* right_value379;
struct list$1charph* __dec_obj71;
_Bool var_args_277;
void* right_value380;
void* right_value381;
struct buffer* header_buf_278;
void* right_value382;
void* right_value383;
struct list$1charph* param_default_parametors_279;
void* right_value384;
void* right_value385;
void* right_value386;
void* right_value387;
void* right_value388;
struct sFun* fun_280;
void* right_value389;
struct sFun* fun2_284;
_Bool _if_conditional319;
void* right_value393;
void* right_value394;
void* right_value395;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value431;
struct sNode* __result143__;
_Bool _if_conditional384;
void* right_value432;
struct sNode* __result144__;
_Bool _if_conditional385;
void* right_value433;
struct sNode* __result145__;
void* right_value434;
char* buf2_319;
void* right_value435;
struct sNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_231, 0, sizeof(_Bool));
memset(&sline_232, 0, sizeof(int));
memset(&define_struct_nobody_233, 0, sizeof(_Bool));
memset(&p_234, 0, sizeof(char*));
memset(&sline_235, 0, sizeof(int));
memset(&right_value348, 0, sizeof(void*));
memset(&word_236, 0, sizeof(char*));
memset(&define_function_pointer_result_function_237, 0, sizeof(_Bool));
memset(&define_variable_between_brace_238, 0, sizeof(_Bool));
memset(&p_239, 0, sizeof(char*));
memset(&right_value349, 0, sizeof(void*));
memset(&result_type_240, 0, sizeof(struct sType*));
memset(&fun_name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&result_type_240, 0, sizeof(struct sType*));
memset(&fun_name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&right_value350, 0, sizeof(void*));
memset(&word_243, 0, sizeof(char*));
memset(&define_function_flag_244, 0, sizeof(_Bool));
memset(&p_245, 0, sizeof(char*));
memset(&invalid_type_246, 0, sizeof(_Bool));
memset(&right_value351, 0, sizeof(void*));
memset(&result_type_247, 0, sizeof(struct sType*));
memset(&fun_name_248, 0, sizeof(char*));
memset(&err_249, 0, sizeof(_Bool));
memset(&result_type_247, 0, sizeof(struct sType*));
memset(&fun_name_248, 0, sizeof(char*));
memset(&err_249, 0, sizeof(_Bool));
memset(&word_250, 0, sizeof(char*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&define_variable_251, 0, sizeof(_Bool));
memset(&p_252, 0, sizeof(char*));
memset(&right_value355, 0, sizeof(void*));
memset(&result_type_253, 0, sizeof(struct sType*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&result_type_253, 0, sizeof(struct sType*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&right_value356, 0, sizeof(void*));
memset(&word_256, 0, sizeof(char*));
memset(&right_value357, 0, sizeof(void*));
memset(&word_257, 0, sizeof(char*));
memset(&right_value358, 0, sizeof(void*));
memset(&header_head_258, 0, sizeof(char*));
memset(&right_value359, 0, sizeof(void*));
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&param_types_262, 0, sizeof(struct list$1sTypeph*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&param_names_263, 0, sizeof(struct list$1charph*));
memset(&right_value364, 0, sizeof(void*));
memset(&param_type_264, 0, sizeof(struct sType*));
memset(&param_name_265, 0, sizeof(char*));
memset(&err_266, 0, sizeof(_Bool));
memset(&param_type_264, 0, sizeof(struct sType*));
memset(&param_name_265, 0, sizeof(char*));
memset(&err_266, 0, sizeof(_Bool));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&param_types2_269, 0, sizeof(struct list$1sTypeph*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&param_names2_270, 0, sizeof(struct list$1charph*));
memset(&right_value371, 0, sizeof(void*));
memset(&param_type_271, 0, sizeof(struct sType*));
memset(&param_name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
memset(&param_type_271, 0, sizeof(struct sType*));
memset(&param_name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
memset(&right_value372, 0, sizeof(void*));
memset(&header_tail_275, 0, sizeof(char*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&result_type2_276, 0, sizeof(struct sType*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&var_args_277, 0, sizeof(_Bool));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&header_buf_278, 0, sizeof(struct buffer*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&param_default_parametors_279, 0, sizeof(struct list$1charph*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&fun_280, 0, sizeof(struct sFun*));
memset(&right_value389, 0, sizeof(void*));
memset(&fun2_284, 0, sizeof(struct sFun*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&buf2_319, 0, sizeof(char*));
memset(&right_value435, 0, sizeof(void*));
    is_type_name_flag_231=is_type_name(buf,info);
    sline_232=info->sline;
    define_struct_nobody_233=(_Bool)0;
    {
        p_234=info->p;
        sline_235=info->sline;
        if(_if_conditional262=string_operator_equals(buf,"struct"),        _if_conditional262) {
            if(_if_conditional263=xisalpha(*info->p)||*info->p==95,            _if_conditional263) {
                word_236=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value348=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value348;
                __freed_obj__ = 0;
                if(_if_conditional264=*info->p==59,                _if_conditional264) {
                    define_struct_nobody_233=(_Bool)1;
                }
                if(word_236 && !__freed_obj__) { word_236 = come_decrement_ref_count(word_236, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=head;
        info->sline=sline_235;
    }
    define_function_pointer_result_function_237=(_Bool)0;
    define_variable_between_brace_238=(_Bool)0;
    if(_if_conditional265=is_type_name_flag_231,    _if_conditional265) {
        p_239=info->p;
        info->p=head;
        if(_if_conditional266=xisalpha(*info->p)||*info->p==95,        _if_conditional266) {
            info->no_output_err=(_Bool)1;
            multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value349=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_240=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            fun_name_241=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_242=multiple_assgin_var1->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value349;
            __freed_obj__ = 0;
            info->no_output_err=(_Bool)0;
            if(_if_conditional269=*info->p==40,            _if_conditional269) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional270=*info->p!=42,                _if_conditional270) {
                    define_function_pointer_result_function_237=(_Bool)1;
                    if(_if_conditional271=xisalpha(*info->p)||*info->p==95,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_243=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value350=parse_word(info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
                        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value350;
                        __freed_obj__ = 0;
                        if(_if_conditional272=!is_type_name(word_243,info)&&*info->p==41,                        _if_conditional272) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional273=*info->p==40,                            _if_conditional273) {
                            }
                            else {
                                define_variable_between_brace_238=(_Bool)1;
                            }
                        }
                        if(word_243 && !__freed_obj__) { word_243 = come_decrement_ref_count(word_243, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            if(result_type_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name_241 && !__freed_obj__) { fun_name_241 = come_decrement_ref_count(fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
        }
        info->p=head;
        info->sline=sline_232;
    }
    define_function_flag_244=(_Bool)0;
    if(_if_conditional274=is_type_name_flag_231&&!define_function_pointer_result_function_237&&string_operator_not_equals(buf,"__typeof__"),    _if_conditional274) {
        p_245=info->p;
        info->p=head;
        invalid_type_246=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(_if_conditional275=xisalpha(*info->p)||*info->p==95,        _if_conditional275) {
            multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value351=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_247=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
            fun_name_248=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
            err_249=multiple_assgin_var2->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value351;
            __freed_obj__ = 0;
            if(result_type_247 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_247, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name_248 && !__freed_obj__) { fun_name_248 = come_decrement_ref_count(fun_name_248, (void*)0, (void*)0, 0, 0, 0); }
        }
        info->no_output_err=(_Bool)0;
        if(_if_conditional276=!info->define_struct,        _if_conditional276) {
            info->define_struct=(_Bool)0;
            word_250=((void*)0);
            if(_if_conditional277=xisalnum(*info->p)||*info->p==95,            _if_conditional277) {
                __dec_obj64=word_250;
                word_250=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value352=parse_word(info)))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value352;
                __freed_obj__ = 0;
                if(_if_conditional278=string_operator_equals(word_250,"extern"),                _if_conditional278) {
                    __dec_obj65=word_250;
                    word_250=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value353=parse_word(info)))));
                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value353;
                    __freed_obj__ = 0;
                }
            }
            else {
                __dec_obj66=word_250;
                word_250=((void*)0);
                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
            }
            info->no_output_err=(_Bool)0;
            if(_if_conditional279=word_250,            _if_conditional279) {
                if(_if_conditional280=is_type_name(word_250,info),                _if_conditional280) {
                    while(_while_condtional27=*info->p==42,                    _while_condtional27) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional281=*info->p==58,                    _if_conditional281) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional282=*info->p==58,                    _if_conditional282) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional283=xisalnum(*info->p)||*info->p==95,                    _if_conditional283) {
                        __dec_obj67=word_250;
                        word_250=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value354=parse_word(info)))));
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value354;
                        __freed_obj__ = 0;
                    }
                }
                if(_if_conditional284=strlen(word_250)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional284) {
                    if(_if_conditional285=is_type_name_flag_231,                    _if_conditional285) {
                        define_function_flag_244=(_Bool)1;
                    }
                }
            }
            if(word_250 && !__freed_obj__) { word_250 = come_decrement_ref_count(word_250, (void*)0, (void*)0, 0, 0, 0); }
        }
        info->p=p_245;
        info->sline=sline_232;
    }
    define_variable_251=(_Bool)1;
    if(_if_conditional286=is_type_name_flag_231&&!define_function_pointer_result_function_237,    _if_conditional286) {
        p_252=info->p;
        info->p=head;
        if(_if_conditional287=!is_type_name_flag_231,        _if_conditional287) {
            define_variable_251=(_Bool)0;
        }
        if(_if_conditional288=xisalpha(*info->p)||*info->p==95,        _if_conditional288) {
            info->no_output_err=(_Bool)1;
            multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value355=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_253=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
            fun_name_254=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
            err_255=multiple_assgin_var3->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value355;
            __freed_obj__ = 0;
            info->no_output_err=(_Bool)0;
            if(_if_conditional289=*info->p==40,            _if_conditional289) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional290=*info->p==42,                _if_conditional290) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional291=xisalpha(*info->p)||*info->p==95,                    _if_conditional291) {
                        word_256=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value356=parse_word(info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value356;
                        __freed_obj__ = 0;
                        if(_if_conditional292=*info->p==41,                        _if_conditional292) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional293=*info->p==40,                            _if_conditional293) {
                                define_variable_251=(_Bool)1;
                            }
                        }
                        if(word_256 && !__freed_obj__) { word_256 = come_decrement_ref_count(word_256, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
                else {
                    if(_if_conditional294=xisalpha(*info->p)||*info->p==95,                    _if_conditional294) {
                        word_257=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value357=parse_word(info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                        if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value357;
                        __freed_obj__ = 0;
                        if(_if_conditional295=*info->p==41,                        _if_conditional295) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional296=!is_type_name(word_257,info)&&*info->p!=40,                            _if_conditional296) {
                                define_variable_251=(_Bool)1;
                            }
                        }
                        if(word_257 && !__freed_obj__) { word_257 = come_decrement_ref_count(word_257, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            if(result_type_253 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_253, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name_254 && !__freed_obj__) { fun_name_254 = come_decrement_ref_count(fun_name_254, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional297=info->define_struct,        _if_conditional297) {
            info->define_struct=(_Bool)0;
            define_variable_251=(_Bool)0;
        }
        else {
            if(_if_conditional298=define_variable_251,            _if_conditional298) {
            }
            else {
                if(_if_conditional299=!(xisalpha(*info->p)||*info->p==95),                _if_conditional299) {
                    define_variable_251=(_Bool)0;
                }
                while(_while_condtional28=xisalpha(*info->p)||*info->p==95,                _while_condtional28) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional300=*info->p==40||*info->p==58,                _if_conditional300) {
                    define_variable_251=(_Bool)0;
                }
            }
        }
        info->p=p_252;
        info->sline=sline_232;
    }
    else {
        define_variable_251=(_Bool)0;
    }
    if(_if_conditional301=define_struct_nobody_233,    _if_conditional301) {
    }
    else {
        if(_if_conditional302=define_variable_between_brace_238,        _if_conditional302) {
            info->p=head;
            info->sline=sline_232;
            __result110__ = __result_obj__ = ((struct sNode*)(right_value358=parse_global_variable(info)));
            if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value358;
            __freed_obj__ = 0;
            return __result110__;
        }
        else {
            if(_if_conditional303=define_function_pointer_result_function_237,            _if_conditional303) {
                header_head_258=info->p;
                multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value359=parse_type(info,(_Bool)0,(_Bool)1)));
                result_type_259=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                fun_name_260=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                err_261=multiple_assgin_var4->v3;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value359;
                __freed_obj__ = 0;
                if(_if_conditional304=*info->p==40,                _if_conditional304) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    param_types_262=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value361=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value360=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1084))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value360;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value361);
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value361;
                    __freed_obj__ = 0;
                    param_names_263=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value363=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1085))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value362);
                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value362;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value363);
                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value363;
                    __freed_obj__ = 0;
                    if(_if_conditional305=*info->p==41,                    _if_conditional305) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        while(_while_condtional29=(_Bool)1,                        _while_condtional29) {
                            multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value364=parse_type(info,(_Bool)0,(_Bool)0)));
                            param_type_264=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            param_name_265=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_266=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value364;
                            __freed_obj__ = 0;
                            if(_if_conditional306=!err_266,                            _if_conditional306) {
                                err_msg(info,"parse_type is failed");
                                exit(2);
                            }
                            list$1sTypeph_push_back(param_types_262,(struct sType*)come_increment_ref_count(param_type_264));
                            list$1charph_push_back(param_names_263,(char*)come_increment_ref_count(((char*)(right_value365=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_267)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value365);
                            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value365;
                            __freed_obj__ = 0;
                            if(_if_conditional307=*info->p==44,                            _if_conditional307) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(_if_conditional308=*info->p==41,                                _if_conditional308) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(param_type_264 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(param_name_265 && !__freed_obj__) { param_name_265 = come_decrement_ref_count(param_name_265, (void*)0, (void*)0, 0, 0, 0); }
                                    break;
                                }
                                else {
                                    err_msg(info,"require , or )");
                                    exit(2);
                                }
                            }
                            if(param_type_264 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_264, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(param_name_265 && !__freed_obj__) { param_name_265 = come_decrement_ref_count(param_name_265, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    optional$2intbool_value(((struct optional$2intbool*)(right_value366=expected_next_character(41,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value366);
                    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value366;
                    __freed_obj__ = 0;
                    if(_if_conditional310=*info->p==40,                    _if_conditional310) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types2_269=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value368=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value367=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1127))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value367;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value368);
                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value368;
                        __freed_obj__ = 0;
                        param_names2_270=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value370=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value369=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1128))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value369);
                        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value369;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value370);
                        if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value370;
                        __freed_obj__ = 0;
                        if(_if_conditional311=*info->p==41,                        _if_conditional311) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional30=(_Bool)1,                            _while_condtional30) {
                                multiple_assgin_var6=((struct tuple3$3sTypephcharphbool*)(right_value371=parse_type(info,(_Bool)0,(_Bool)0)));
                                param_type_271=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                                param_name_272=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                                err_273=multiple_assgin_var6->v3;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value371;
                                __freed_obj__ = 0;
                                if(_if_conditional312=!err_273,                                _if_conditional312) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types2_269,(struct sType*)come_increment_ref_count(param_type_271));
                                list$1charph_push_back(param_names2_270,(char*)come_increment_ref_count(((char*)(right_value372=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_274)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value372);
                                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value372;
                                __freed_obj__ = 0;
                                if(_if_conditional313=*info->p==44,                                _if_conditional313) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional314=*info->p==41,                                    _if_conditional314) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        if(param_type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(param_name_272 && !__freed_obj__) { param_name_272 = come_decrement_ref_count(param_name_272, (void*)0, (void*)0, 0, 0, 0); }
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                if(param_type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(param_name_272 && !__freed_obj__) { param_name_272 = come_decrement_ref_count(param_name_272, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                        header_tail_275=info->p;
                        result_type2_276=(struct sType*)come_increment_ref_count(((struct sType*)(right_value374=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value373=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1166)))),"lambda",(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value373);
                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value373;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value374);
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value374;
                        __freed_obj__ = 0;
                        __dec_obj69=result_type2_276->mResultType;
                        result_type2_276->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value377=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value375=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1168)))),(struct sType*)come_increment_ref_count(result_type_259)))));
                        if(__dec_obj69) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value375);
                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value375;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value377);
                        if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value377;
                        __freed_obj__ = 0;
                        __dec_obj70=result_type2_276->mParamTypes;
                        result_type2_276->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value378=list$1sTypephp_clone(param_types2_269))));
                        if(__dec_obj70) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value378);
                        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[8] = right_value378;
                        __freed_obj__ = 0;
                        __dec_obj71=result_type2_276->mParamNames;
                        result_type2_276->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value379=list$1charphp_clone(param_names2_270))));
                        if(__dec_obj71) { come_call_finalizer(list$1charph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value379);
                        if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[9] = right_value379;
                        __freed_obj__ = 0;
                        result_type2_276->mVarArgs=(_Bool)0;
                        result_type2_276->mStatic=(_Bool)0;
                        var_args_277=(_Bool)0;
                        header_buf_278=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1176))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value380);
                        if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[10] = right_value380;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value381);
                        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[11] = right_value381;
                        __freed_obj__ = 0;
                        buffer_append(header_buf_278,header_head_258,header_tail_275-header_head_258);
                        buffer_append_char(header_buf_278,0);
                        param_default_parametors_279=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value383=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value382=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1180))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value382);
                        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[12] = right_value382;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value383);
                        if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[13] = right_value383;
                        __freed_obj__ = 0;
                        fun_280=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value388=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value384=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1182)))),(char*)come_increment_ref_count(((char*)(right_value385=__builtin_string(fun_name_260)))),(struct sType*)come_increment_ref_count(result_type2_276),(struct list$1sTypeph*)come_increment_ref_count(param_types_262),(struct list$1charph*)come_increment_ref_count(param_names_263),(struct list$1charph*)come_increment_ref_count(param_default_parametors_279),(_Bool)1,var_args_277,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value386=buffer_to_string(header_buf_278)))),(char*)come_increment_ref_count(((char*)(right_value387=__builtin_string(info->sname)))),info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value384);
                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[14] = right_value384;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value385);
                        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[15] = right_value385;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value386);
                        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[16] = right_value386;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value387);
                        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[17] = right_value387;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value388);
                        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[18] = right_value388;
                        __freed_obj__ = 0;
                        fun2_284=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value389=__builtin_string(fun_name_260))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value389);
                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[19] = right_value389;
                        __freed_obj__ = 0;
                        if(_if_conditional319=fun2_284==((void*)0)||fun2_284->mExternal,                        _if_conditional319) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value393=string_clone(fun_name_260)))),(struct sFun*)come_increment_ref_count(fun_280));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value393);
                            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value393;
                            __freed_obj__ = 0;
                        }
                        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1194);
                        _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value395=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value394=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1194)))),(struct sFun*)come_increment_ref_count(fun_280),info))));
                        _inf_value1->_protocol_obj=_inf_obj_value1;
                        _inf_value1->finalize=(void*)sFunNode_finalize;
                        _inf_value1->clone=(void*)sFunNode_clone;
                        _inf_value1->compile=(void*)sFunNode_compile;
                        _inf_value1->sline=(void*)sFunNode_sline;
                        _inf_value1->sname=(void*)sFunNode_sname;
                        _inf_value1->terminated=(void*)sFunNode_terminated;
                        _inf_value1->kind=(void*)sFunNode_kind;
                        __result143__ = __result_obj__ = ((struct sNode*)(right_value431=_inf_value1));
                        if(param_types2_269 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types2_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_names2_270 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names2_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_276 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_276, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(header_buf_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_default_parametors_279 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_279, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(fun_280 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_280, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_262 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_names_263 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type_259 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(fun_name_260 && !__freed_obj__) { fun_name_260 = come_decrement_ref_count(fun_name_260, (void*)0, (void*)0, 0, 0, 0); }
                        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value394);
                        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[20] = right_value394;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value395);
                        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[21] = right_value395;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value431);
                        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[22] = right_value431;
                        __freed_obj__ = 0;
                        return __result143__;
                        if(param_types2_269 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types2_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_names2_270 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names2_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_276 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_276, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(header_buf_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_default_parametors_279 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_279, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(fun_280 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_280, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        err_msg(info,"require (");
                        exit(2);
                    }
                    if(param_types_262 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_names_263 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(result_type_259 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name_260 && !__freed_obj__) { fun_name_260 = come_decrement_ref_count(fun_name_260, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional384=define_function_flag_244,                _if_conditional384) {
                    info->p=head;
                    info->sline=sline_232;
                    __result144__ = __result_obj__ = ((struct sNode*)(right_value432=parse_function(info)));
                    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value432);
                    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value432;
                    __freed_obj__ = 0;
                    return __result144__;
                }
                else {
                    if(_if_conditional385=define_variable_251,                    _if_conditional385) {
                        info->p=head;
                        info->sline=sline_232;
                        __result145__ = __result_obj__ = ((struct sNode*)(right_value433=parse_global_variable(info)));
                        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                        if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value433;
                        __freed_obj__ = 0;
                        return __result145__;
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_232;
    buf2_319=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value434=parse_word(info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value434);
    if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value434;
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = ((struct sNode*)(right_value435=top_level_v98((char*)come_increment_ref_count(buf2_319),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(buf2_319 && !__freed_obj__) { buf2_319 = come_decrement_ref_count(buf2_319, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value435);
    if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value435;
    __freed_obj__ = 0;
    return __result146__;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(buf2_319 && !__freed_obj__) { buf2_319 = come_decrement_ref_count(buf2_319, (void*)0, (void*)0, 0, 0, 0); }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional267=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional267) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional268=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional268) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional309;
int default_value_268;
int __result111__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_268, 0, sizeof(int));
                        if(_if_conditional309=self==((void*)0),                        _if_conditional309) {
                            memset(&default_value_268,0,sizeof(int));
                            __result111__ = default_value_268;
                            return __result111__;
                        }
                        else {
                            __result112__ = self->v1;
                            return __result112__;
                        }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value376;
struct sType* __dec_obj68;
struct tuple1$1sTypeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value376, 0, sizeof(void*));
                            __dec_obj68=self->v1;
                            self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=sType_clone(v1))));
                            if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value376;
                            __freed_obj__ = 0;
                            __result113__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result113__;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_281;
unsigned int hash_282;
unsigned int it_283;
_Bool _while_condtional31;
_Bool _if_conditional315;
void* right_value390;
_Bool _if_conditional316;
struct sFun* __result114__;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct sFun* __result115__;
struct sFun* __result116__;
void* right_value391;
void* right_value392;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_281, 0, sizeof(struct sFun*));
memset(&hash_282, 0, sizeof(unsigned int));
memset(&it_283, 0, sizeof(unsigned int));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
                            memset(&default_value_281,0,sizeof(struct sFun*));
                            hash_282=string_get_hash_key(((char*)key))%self->size;
                            it_283=hash_282;
                            while(_while_condtional31=(_Bool)1,                            _while_condtional31) {
                                if(_if_conditional315=self->item_existance[it_283],                                _if_conditional315) {
                                    if(_if_conditional316=optional$2boolbool_value(((struct optional$2boolbool*)(right_value390=string_equals(self->keys[it_283],key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390),
                                    (right_value390 && right_value390 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value390, 
                                    __freed_obj__ = 0, 
                                    _if_conditional316) {
                                        __result114__ = __result_obj__ = self->items[it_283];
                                        return __result114__;
                                    }
                                    it_283++;
                                    if(_if_conditional317=it_283>=self->size,                                    _if_conditional317) {
                                        it_283=0;
                                    }
                                    else {
                                        if(_if_conditional318=it_283==hash_282,                                        _if_conditional318) {
                                            __result115__ = __result_obj__ = default_value_281;
                                            return __result115__;
                                        }
                                    }
                                }
                                else {
                                    __result116__ = __result_obj__ = default_value_281;
                                    return __result116__;
                                }
                            }
                            __result118__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value392=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value391=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_281,(_Bool)0)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
                            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value391;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value392);
                            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value392;
                            __freed_obj__ = 0;
                            return __result118__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->v1=v1;
                                self->v2=v2;
                                __result117__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result117__;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
struct sFun* __result120__;
void* right_value397;
struct sFun* result_286;
_Bool _if_conditional325;
void* right_value398;
char* __dec_obj72;
_Bool _if_conditional326;
void* right_value399;
struct sType* __dec_obj73;
_Bool _if_conditional327;
void* right_value400;
struct list$1sTypeph* __dec_obj74;
_Bool _if_conditional328;
void* right_value401;
struct list$1charph* __dec_obj75;
_Bool _if_conditional329;
void* right_value402;
struct list$1charph* __dec_obj76;
_Bool _if_conditional330;
void* right_value403;
struct sType* __dec_obj77;
_Bool _if_conditional331;
void* right_value422;
struct sBlock* __dec_obj82;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value423;
struct buffer* __dec_obj83;
_Bool _if_conditional375;
void* right_value424;
struct buffer* __dec_obj84;
_Bool _if_conditional376;
void* right_value425;
struct buffer* __dec_obj85;
_Bool _if_conditional377;
void* right_value426;
struct buffer* __dec_obj86;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value427;
char* __dec_obj87;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value428;
char* __dec_obj88;
struct sFun* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value397, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sFun*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
                                    if(_if_conditional324=self==(void*)0,                                    _if_conditional324) {
                                        __result120__ = __result_obj__ = (void*)0;
                                        return __result120__;
                                    }
                                    result_286=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value397=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value397;
                                    __freed_obj__ = 0;
                                    if(_if_conditional325=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional325) {
                                        __dec_obj72=result_286->mName;
                                        result_286->mName=(char*)come_increment_ref_count(((char*)(right_value398=string_clone(self->mName))));
                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                                        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value398;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional326=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional326) {
                                        __dec_obj73=result_286->mResultType;
                                        result_286->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value399=sType_clone(self->mResultType))));
                                        if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                                        if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value399;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional327=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional327) {
                                        __dec_obj74=result_286->mParamTypes;
                                        result_286->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value400=list$1sTypephp_clone(self->mParamTypes))));
                                        if(__dec_obj74) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value400);
                                        if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value400;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional328=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional328) {
                                        __dec_obj75=result_286->mParamNames;
                                        result_286->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=list$1charphp_clone(self->mParamNames))));
                                        if(__dec_obj75) { come_call_finalizer(list$1charph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
                                        if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value401;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional329=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional329) {
                                        __dec_obj76=result_286->mParamDefaultParametors;
                                        result_286->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value402=list$1charphp_clone(self->mParamDefaultParametors))));
                                        if(__dec_obj76) { come_call_finalizer(list$1charph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
                                        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value402;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional330=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                    _if_conditional330) {
                                        __dec_obj77=result_286->mLambdaType;
                                        result_286->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value403=sType_clone(self->mLambdaType))));
                                        if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                                        if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value403;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional331=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional331) {
                                        __dec_obj82=result_286->mBlock;
                                        result_286->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value422=sBlock_clone(self->mBlock))));
                                        if(__dec_obj82) { come_call_finalizer(sBlock_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value422);
                                        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value422;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional372=self!=((void*)0),                                    _if_conditional372) {
                                        result_286->mExternal=self->mExternal;
                                    }
                                    if(_if_conditional373=self!=((void*)0),                                    _if_conditional373) {
                                        result_286->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional374=self!=((void*)0)&&self->mSource!=((void*)0),                                    _if_conditional374) {
                                        __dec_obj83=result_286->mSource;
                                        result_286->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=buffer_clone(self->mSource))));
                                        if(__dec_obj83) { come_call_finalizer(buffer_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
                                        if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value423;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional375=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                    _if_conditional375) {
                                        __dec_obj84=result_286->mSourceHead;
                                        result_286->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=buffer_clone(self->mSourceHead))));
                                        if(__dec_obj84) { come_call_finalizer(buffer_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value424);
                                        if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value424;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional376=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                    _if_conditional376) {
                                        __dec_obj85=result_286->mSourceHead2;
                                        result_286->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value425=buffer_clone(self->mSourceHead2))));
                                        if(__dec_obj85) { come_call_finalizer(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
                                        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value425;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional377=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                    _if_conditional377) {
                                        __dec_obj86=result_286->mSourceDefer;
                                        result_286->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value426=buffer_clone(self->mSourceDefer))));
                                        if(__dec_obj86) { come_call_finalizer(buffer_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
                                        if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value426;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional378=self!=((void*)0),                                    _if_conditional378) {
                                        result_286->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional379=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                    _if_conditional379) {
                                        __dec_obj87=result_286->mComeHeader;
                                        result_286->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value427=string_clone(self->mComeHeader))));
                                        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value427);
                                        if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value427;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional380=self!=((void*)0),                                    _if_conditional380) {
                                        result_286->mCloner=self->mCloner;
                                    }
                                    if(_if_conditional381=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                    _if_conditional381) {
                                        __dec_obj88=result_286->mDeclareSName;
                                        result_286->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(self->mDeclareSName))));
                                        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                                        if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value428;
                                        __freed_obj__ = 0;
                                    }
                                    __result141__ = __result_obj__ = result_286;
                                    if(result_286 && !__freed_obj__) { come_call_finalizer(sFun_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result141__;
                                    if(result_286 && !__freed_obj__) { come_call_finalizer(sFun_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
struct sBlock* __result121__;
void* right_value404;
struct sBlock* result_287;
_Bool _if_conditional333;
void* right_value405;
struct list$1sNodeph* __dec_obj78;
_Bool _if_conditional334;
void* right_value421;
struct sVarTable* __dec_obj81;
struct sBlock* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value404, 0, sizeof(void*));
memset(&result_287, 0, sizeof(struct sBlock*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
                                            if(_if_conditional332=self==(void*)0,                                            _if_conditional332) {
                                                __result121__ = __result_obj__ = (void*)0;
                                                return __result121__;
                                            }
                                            result_287=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value404=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value404);
                                            if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value404;
                                            __freed_obj__ = 0;
                                            if(_if_conditional333=self!=((void*)0)&&self->mNodes!=((void*)0),                                            _if_conditional333) {
                                                __dec_obj78=result_287->mNodes;
                                                result_287->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value405=list$1sNodephp_clone(self->mNodes))));
                                                if(__dec_obj78) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                                                if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value405;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional334=self!=((void*)0)&&self->mVarTable!=((void*)0),                                            _if_conditional334) {
                                                __dec_obj81=result_287->mVarTable;
                                                result_287->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value421=sVarTable_clone(self->mVarTable))));
                                                if(__dec_obj81) { come_call_finalizer(sVarTable_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
                                                if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value421;
                                                __freed_obj__ = 0;
                                            }
                                            __result140__ = __result_obj__ = result_287;
                                            if(result_287 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_287, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result140__;
                                            if(result_287 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_287, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional335;
struct sVarTable* __result122__;
void* right_value406;
struct sVarTable* result_288;
_Bool _if_conditional336;
void* right_value420;
struct map$2charphsVarph* __dec_obj80;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
struct sVarTable* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value406, 0, sizeof(void*));
memset(&result_288, 0, sizeof(struct sVarTable*));
memset(&right_value420, 0, sizeof(void*));
                                                    if(_if_conditional335=self==(void*)0,                                                    _if_conditional335) {
                                                        __result122__ = __result_obj__ = (void*)0;
                                                        return __result122__;
                                                    }
                                                    result_288=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value406=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value406);
                                                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value406;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional336=self!=((void*)0)&&self->mVars!=((void*)0),                                                    _if_conditional336) {
                                                        __dec_obj80=result_288->mVars;
                                                        result_288->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value420=map$2charphsVarphp_clone(self->mVars))));
                                                        if(__dec_obj80) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
                                                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value420;
                                                        __freed_obj__ = 0;
                                                    }
                                                    if(_if_conditional369=self!=((void*)0),                                                    _if_conditional369) {
                                                        result_288->mGlobal=self->mGlobal;
                                                    }
                                                    if(_if_conditional370=self!=((void*)0),                                                    _if_conditional370) {
                                                        result_288->mParent=self->mParent;
                                                    }
                                                    if(_if_conditional371=self!=((void*)0),                                                    _if_conditional371) {
                                                        result_288->mID=self->mID;
                                                    }
                                                    __result139__ = __result_obj__ = result_288;
                                                    if(result_288 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_288, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result139__;
                                                    if(result_288 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_288, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional337;
struct map$2charphsVarph* __result123__;
void* right_value407;
void* right_value413;
struct map$2charphsVarph* result_294;
char* it_297;
_Bool _for_condtionalA11;
struct sVar* default_value_300;
struct sVar* it2_303;
struct map$2charphsVarph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&result_294, 0, sizeof(struct map$2charphsVarph*));
memset(&it_297, 0, sizeof(char*));
memset(&default_value_300, 0, sizeof(struct sVar*));
memset(&it2_303, 0, sizeof(struct sVar*));
                                                            if(_if_conditional337=self==((void*)0),                                                            _if_conditional337) {
                                                                __result123__ = __result_obj__ = ((void*)0);
                                                                return __result123__;
                                                            }
                                                            result_294=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value413=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value407=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1222))))))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                                                            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value407;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value413);
                                                            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[1] = right_value413;
                                                            __freed_obj__ = 0;
                                                            for(
                                                            it_297=map$2charphsVarph_begin(self) ,                                                            0;                                                            _for_condtionalA11=                                                            !map$2charphsVarph_end(self) ,                                                            _for_condtionalA11;                                                            it_297=map$2charphsVarph_next(self) ,                                                            0                                                            ){
                                                                memset(&default_value_300,0,sizeof(struct sVar*));
                                                                it2_303=map$2charphsVarph_at(self,it_297,default_value_300);
                                                                map$2charphsVarph_insert2(result_294,it_297,it2_303);
                                                            }
                                                            __result138__ = __result_obj__ = result_294;
                                                            if(result_294 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_294, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            return __result138__;
                                                            if(result_294 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_294, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value408;
void* right_value409;
void* right_value410;
int i_289;
_Bool _for_condtionalA8;
void* right_value411;
void* right_value412;
struct list$1charp* __dec_obj79;
struct map$2charphsVarph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&i_289, 0, sizeof(int));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
                                                                self->keys=(char**)come_increment_ref_count(((char**)(right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1129))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408);
                                                                if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value408;
                                                                __freed_obj__ = 0;
                                                                self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value409=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1130))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value409);
                                                                if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[1] = right_value409;
                                                                __freed_obj__ = 0;
                                                                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value410=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1131))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value410);
                                                                if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[2] = right_value410;
                                                                __freed_obj__ = 0;
                                                                for(
                                                                i_289=0 ,                                                                0;                                                                _for_condtionalA8=                                                                i_289<1024 ,                                                                _for_condtionalA8;                                                                i_289++ ,                                                                0                                                                ){
                                                                    self->item_existance[i_289]=(_Bool)0;
                                                                }
                                                                self->size=1024;
                                                                self->len=0;
                                                                __dec_obj79=self->key_list;
                                                                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value412=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value411=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1141))))))));
                                                                if(__dec_obj79) { come_call_finalizer(list$1charp_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value411);
                                                                if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[3] = right_value411;
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value412);
                                                                if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[4] = right_value412;
                                                                __freed_obj__ = 0;
                                                                self->it=0;
                                                                __result125__ = __result_obj__ = self;
                                                                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                return __result125__;
                                                                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                    if(_if_conditional338=self!=((void*)0)&&self->mName!=((void*)0),                                                                    _if_conditional338) {
                                                                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                    if(_if_conditional339=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                    _if_conditional339) {
                                                                        if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                    if(_if_conditional340=self!=((void*)0)&&self->mType!=((void*)0),                                                                    _if_conditional340) {
                                                                        if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    }
                                                                    if(_if_conditional341=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                    _if_conditional341) {
                                                                        if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                    self->head=((void*)0);
                                                                    self->tail=((void*)0);
                                                                    self->len=0;
                                                                    __result124__ = __result_obj__ = self;
                                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                    return __result124__;
                                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_290;
_Bool _while_condtional32;
struct list_item$1charp* prev_it_291;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_290, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_291, 0, sizeof(struct list_item$1charp*));
                                                                        it_290=self->head;
                                                                        while(_while_condtional32=it_290!=((void*)0),                                                                        _while_condtional32) {
                                                                            prev_it_291=it_290;
                                                                            it_290=it_290->next;
                                                                            if(prev_it_291 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_291, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_292;
_Bool _for_condtionalA9;
_Bool _if_conditional342;
_Bool _if_conditional343;
int i_293;
_Bool _for_condtionalA10;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_292, 0, sizeof(int));
memset(&i_293, 0, sizeof(int));
                                                                    for(
                                                                    i_292=0 ,                                                                    0;                                                                    _for_condtionalA9=                                                                    i_292<self->size ,                                                                    _for_condtionalA9;                                                                    i_292++ ,                                                                    0                                                                    ){
                                                                        if(_if_conditional342=self->item_existance[i_292],                                                                        _if_conditional342) {
                                                                            if(_if_conditional343=1,                                                                            _if_conditional343) {
                                                                                if(self->items[i_292] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_292], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            }
                                                                        }
                                                                    }
                                                                    come_free_object((char*)self->items);
                                                                    for(
                                                                    i_293=0 ,                                                                    0;                                                                    _for_condtionalA10=                                                                    i_293<self->size ,                                                                    _for_condtionalA10;                                                                    i_293++ ,                                                                    0                                                                    ){
                                                                        if(_if_conditional344=self->item_existance[i_293],                                                                        _if_conditional344) {
                                                                            if(_if_conditional345=1,                                                                            _if_conditional345) {
                                                                                if(self->keys[i_293] && !__freed_obj__) { self->keys[i_293] = come_decrement_ref_count(self->keys[i_293], (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                        }
                                                                    }
                                                                    come_free_object((char*)self->keys);
                                                                    if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional346;
char* result_295;
char* __result126__;
_Bool _if_conditional347;
char* __result127__;
char* result_296;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_295, 0, sizeof(char*));
memset(&result_296, 0, sizeof(char*));
                                                                if(_if_conditional346=self==((void*)0),                                                                _if_conditional346) {
                                                                    memset(&result_295,0,sizeof(char*));
                                                                    __result126__ = __result_obj__ = result_295;
                                                                    return __result126__;
                                                                }
                                                                self->key_list->it=self->key_list->head;
                                                                if(_if_conditional347=self->key_list->it,                                                                _if_conditional347) {
                                                                    __result127__ = __result_obj__ = self->key_list->it->item;
                                                                    return __result127__;
                                                                }
                                                                memset(&result_296,0,sizeof(char*));
                                                                __result128__ = __result_obj__ = result_296;
                                                                return __result128__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                __result129__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                return __result129__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional348;
char* result_298;
char* __result130__;
_Bool _if_conditional349;
char* __result131__;
char* result_299;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_298, 0, sizeof(char*));
memset(&result_299, 0, sizeof(char*));
                                                                if(_if_conditional348=self==((void*)0)||self->key_list->it==((void*)0),                                                                _if_conditional348) {
                                                                    memset(&result_298,0,sizeof(char*));
                                                                    __result130__ = __result_obj__ = result_298;
                                                                    return __result130__;
                                                                }
                                                                self->key_list->it=self->key_list->it->next;
                                                                if(_if_conditional349=self->key_list->it,                                                                _if_conditional349) {
                                                                    __result131__ = __result_obj__ = self->key_list->it->item;
                                                                    return __result131__;
                                                                }
                                                                memset(&result_299,0,sizeof(char*));
                                                                __result132__ = __result_obj__ = result_299;
                                                                return __result132__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_301;
unsigned int it_302;
_Bool _while_condtional33;
_Bool _if_conditional350;
void* right_value414;
_Bool _if_conditional351;
struct sVar* __result133__;
_Bool _if_conditional352;
_Bool _if_conditional353;
struct sVar* __result134__;
struct sVar* __result135__;
struct sVar* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_301, 0, sizeof(unsigned int));
memset(&it_302, 0, sizeof(unsigned int));
memset(&right_value414, 0, sizeof(void*));
                                                                    hash_301=string_get_hash_key(((char*)key))%self->size;
                                                                    it_302=hash_301;
                                                                    while(_while_condtional33=(_Bool)1,                                                                    _while_condtional33) {
                                                                        if(_if_conditional350=self->item_existance[it_302],                                                                        _if_conditional350) {
                                                                            if(_if_conditional351=optional$2boolbool_value(((struct optional$2boolbool*)(right_value414=string_equals(self->keys[it_302],key)))),                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414),
                                                                            (right_value414 && right_value414 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                            __right_value_freed_obj[0] = right_value414, 
                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional351) {
                                                                                __result133__ = __result_obj__ = self->items[it_302];
                                                                                return __result133__;
                                                                            }
                                                                            it_302++;
                                                                            if(_if_conditional352=it_302>=self->size,                                                                            _if_conditional352) {
                                                                                it_302=0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional353=it_302==hash_301,                                                                                _if_conditional353) {
                                                                                    __result134__ = __result_obj__ = default_value;
                                                                                    return __result134__;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            __result135__ = __result_obj__ = default_value;
                                                                            return __result135__;
                                                                        }
                                                                    }
                                                                    __result136__ = __result_obj__ = default_value;
                                                                    return __result136__;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional354;
unsigned int hash_315;
int it_316;
_Bool _while_condtional35;
_Bool _if_conditional358;
void* right_value418;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool same_key_exist_317;
char* it2_318;
_Bool _for_condtionalA13;
void* right_value419;
_Bool _if_conditional366;
_Bool _if_conditional367;
struct map$2charphsVarph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_315, 0, sizeof(unsigned int));
memset(&it_316, 0, sizeof(int));
memset(&right_value418, 0, sizeof(void*));
memset(&same_key_exist_317, 0, sizeof(_Bool));
memset(&it2_318, 0, sizeof(char*));
memset(&right_value419, 0, sizeof(void*));
                                                                    if(_if_conditional354=self->len*2>=self->size,                                                                    _if_conditional354) {
                                                                        map$2charphsVarph_rehash(self);
                                                                    }
                                                                    hash_315=string_get_hash_key(key)%self->size;
                                                                    it_316=hash_315;
                                                                    while(_while_condtional35=(_Bool)1,                                                                    _while_condtional35) {
                                                                        if(_if_conditional358=self->item_existance[it_316],                                                                        _if_conditional358) {
                                                                            if(_if_conditional359=optional$2boolbool_value(((struct optional$2boolbool*)(right_value418=string_equals(self->keys[it_316],key)))),                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418),
                                                                            (right_value418 && right_value418 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                            __right_value_freed_obj[0] = right_value418, 
                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional359) {
                                                                                if(_if_conditional360=1,                                                                                _if_conditional360) {
                                                                                    if(self->keys[it_316] && !__freed_obj__) { self->keys[it_316] = come_decrement_ref_count(self->keys[it_316], (void*)0, (void*)0, 0, 0, 0); }
                                                                                    list$1charp_remove(self->key_list,self->keys[it_316]);
                                                                                    self->keys[it_316]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    list$1charp_remove(self->key_list,self->keys[it_316]);
                                                                                    self->keys[it_316]=key;
                                                                                }
                                                                                if(_if_conditional361=1,                                                                                _if_conditional361) {
                                                                                    if(self->items[it_316] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_316], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    self->items[it_316]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_316]=item;
                                                                                }
                                                                                break;
                                                                            }
                                                                            it_316++;
                                                                            if(_if_conditional362=it_316>=self->size,                                                                            _if_conditional362) {
                                                                                it_316=0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional363=it_316==hash_315,                                                                                _if_conditional363) {
                                                                                    printf("unexpected error in map.insert\n");
                                                                                    stackframe();
                                                                                    exit(2);
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            self->item_existance[it_316]=(_Bool)1;
                                                                            if(_if_conditional364=1,                                                                            _if_conditional364) {
                                                                                self->keys[it_316]=(char*)come_increment_ref_count(key);
                                                                            }
                                                                            else {
                                                                                self->keys[it_316]=key;
                                                                            }
                                                                            if(_if_conditional365=1,                                                                            _if_conditional365) {
                                                                                self->items[it_316]=(struct sVar*)come_increment_ref_count(item);
                                                                            }
                                                                            else {
                                                                                self->items[it_316]=item;
                                                                            }
                                                                            self->len++;
                                                                            break;
                                                                        }
                                                                    }
                                                                    same_key_exist_317=(_Bool)0;
                                                                    for(
                                                                    it2_318=list$1charp_begin(self->key_list) ,                                                                    0;                                                                    _for_condtionalA13=                                                                    !list$1charp_end(self->key_list) ,                                                                    _for_condtionalA13;                                                                    it2_318=list$1charp_next(self->key_list) ,                                                                    0                                                                    ){
                                                                        if(_if_conditional366=optional$2boolbool_value(((struct optional$2boolbool*)(right_value419=string_equals(it2_318,key)))),                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419),
                                                                        (right_value419 && right_value419 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                        __right_value_freed_obj[0] = right_value419, 
                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional366) {
                                                                            same_key_exist_317=(_Bool)1;
                                                                        }
                                                                    }
                                                                    if(_if_conditional367=!same_key_exist_317,                                                                    _if_conditional367) {
                                                                        list$1charp_push_back(self->key_list,key);
                                                                    }
                                                                    __result137__ = __result_obj__ = self;
                                                                    if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                                                    if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                    return __result137__;
                                                                    if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                                                    if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_304;
void* right_value415;
char** keys_305;
void* right_value416;
struct sVar** items_306;
void* right_value417;
_Bool* item_existance_307;
int len_308;
char* it_309;
_Bool _for_condtionalA12;
struct sVar* default_value_310;
struct sVar* it2_311;
unsigned int hash_312;
int n_313;
_Bool _while_condtional34;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
struct sVar* default_value_314;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_304, 0, sizeof(int));
memset(&right_value415, 0, sizeof(void*));
memset(&keys_305, 0, sizeof(char**));
memset(&right_value416, 0, sizeof(void*));
memset(&items_306, 0, sizeof(struct sVar**));
memset(&right_value417, 0, sizeof(void*));
memset(&item_existance_307, 0, sizeof(_Bool*));
memset(&len_308, 0, sizeof(int));
memset(&it_309, 0, sizeof(char*));
memset(&default_value_310, 0, sizeof(struct sVar*));
memset(&it2_311, 0, sizeof(struct sVar*));
memset(&hash_312, 0, sizeof(unsigned int));
memset(&n_313, 0, sizeof(int));
memset(&default_value_314, 0, sizeof(struct sVar*));
                                                                            size_304=self->size*10;
                                                                            keys_305=(char**)come_increment_ref_count(((char**)(right_value415=(char**)come_calloc(1, sizeof(char*)*(1*(size_304)), "./comelang2.h", 1377))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value415);
                                                                            if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value415;
                                                                            __freed_obj__ = 0;
                                                                            items_306=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value416=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_304)), "./comelang2.h", 1378))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value416);
                                                                            if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value416;
                                                                            __freed_obj__ = 0;
                                                                            item_existance_307=(_Bool*)come_increment_ref_count(((_Bool*)(right_value417=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_304)), "./comelang2.h", 1379))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value417);
                                                                            if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[2] = right_value417;
                                                                            __freed_obj__ = 0;
                                                                            len_308=0;
                                                                            for(
                                                                            it_309=map$2charphsVarph_begin(self) ,                                                                            0;                                                                            _for_condtionalA12=                                                                            !map$2charphsVarph_end(self) ,                                                                            _for_condtionalA12;                                                                            it_309=map$2charphsVarph_next(self) ,                                                                            0                                                                            ){
                                                                                memset(&default_value_310,0,sizeof(struct sVar*));
                                                                                it2_311=map$2charphsVarph_at(self,it_309,default_value_310);
                                                                                hash_312=string_get_hash_key(it_309)%size_304;
                                                                                n_313=hash_312;
                                                                                while(_while_condtional34=(_Bool)1,                                                                                _while_condtional34) {
                                                                                    if(_if_conditional355=item_existance_307[n_313],                                                                                    _if_conditional355) {
                                                                                        n_313++;
                                                                                        if(_if_conditional356=n_313>=size_304,                                                                                        _if_conditional356) {
                                                                                            n_313=0;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional357=n_313==hash_312,                                                                                            _if_conditional357) {
                                                                                                printf("unexpected error in map.rehash(1)\n");
                                                                                                stackframe();
                                                                                                exit(2);
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        item_existance_307[n_313]=(_Bool)1;
                                                                                        keys_305[n_313]=it_309;
                                                                                        items_306[n_313]=map$2charphsVarph_at(self,it_309,default_value_314);
                                                                                        len_308++;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                            come_free_object((char*)self->items);
                                                                            if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                                                            come_free_object((char*)self->keys);
                                                                            self->keys=keys_305;
                                                                            self->items=items_306;
                                                                            self->item_existance=item_existance_307;
                                                                            self->size=size_304;
                                                                            self->len=len_308;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional368=self!=((void*)0)&&self->key_list!=((void*)0),                                                            _if_conditional368) {
                                                                if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_323;
struct sType* type_327;
struct sClass* generics_class_328;
void* right_value442;
_Bool generics_type_name_330;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_323, 0, sizeof(struct sClass*));
memset(&type_327, 0, sizeof(struct sType*));
memset(&generics_class_328, 0, sizeof(struct sClass*));
memset(&right_value442, 0, sizeof(void*));
memset(&generics_type_name_330, 0, sizeof(_Bool));
    klass_323=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_327=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_328=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_330=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value442=__builtin_string(buf)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value442;
    __freed_obj__ = 0;
    __result159__ = generics_class_328||generics_type_name_330||klass_323||type_327||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"exception");
    return __result159__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_320;
unsigned int hash_321;
unsigned int it_322;
_Bool _while_condtional36;
_Bool _if_conditional386;
void* right_value436;
_Bool _if_conditional387;
struct sClass* __result147__;
_Bool _if_conditional388;
_Bool _if_conditional389;
struct sClass* __result148__;
struct sClass* __result149__;
void* right_value437;
void* right_value438;
struct sClass* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_320, 0, sizeof(struct sClass*));
memset(&hash_321, 0, sizeof(unsigned int));
memset(&it_322, 0, sizeof(unsigned int));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
        memset(&default_value_320,0,sizeof(struct sClass*));
        hash_321=string_get_hash_key(((char*)key))%self->size;
        it_322=hash_321;
        while(_while_condtional36=(_Bool)1,        _while_condtional36) {
            if(_if_conditional386=self->item_existance[it_322],            _if_conditional386) {
                if(_if_conditional387=optional$2boolbool_value(((struct optional$2boolbool*)(right_value436=string_equals(self->keys[it_322],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value436),
                (right_value436 && right_value436 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value436, 
                __freed_obj__ = 0, 
                _if_conditional387) {
                    __result147__ = __result_obj__ = self->items[it_322];
                    return __result147__;
                }
                it_322++;
                if(_if_conditional388=it_322>=self->size,                _if_conditional388) {
                    it_322=0;
                }
                else {
                    if(_if_conditional389=it_322==hash_321,                    _if_conditional389) {
                        __result148__ = __result_obj__ = default_value_320;
                        return __result148__;
                    }
                }
            }
            else {
                __result149__ = __result_obj__ = default_value_320;
                return __result149__;
            }
        }
        __result151__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value438=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value437=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_320,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value437);
        if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value437;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value438);
        if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value438;
        __freed_obj__ = 0;
        return __result151__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result150__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result150__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_324;
unsigned int hash_325;
unsigned int it_326;
_Bool _while_condtional37;
_Bool _if_conditional390;
void* right_value439;
_Bool _if_conditional391;
struct sType* __result152__;
_Bool _if_conditional392;
_Bool _if_conditional393;
struct sType* __result153__;
struct sType* __result154__;
void* right_value440;
void* right_value441;
struct sType* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_324, 0, sizeof(struct sType*));
memset(&hash_325, 0, sizeof(unsigned int));
memset(&it_326, 0, sizeof(unsigned int));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
        memset(&default_value_324,0,sizeof(struct sType*));
        hash_325=string_get_hash_key(((char*)key))%self->size;
        it_326=hash_325;
        while(_while_condtional37=(_Bool)1,        _while_condtional37) {
            if(_if_conditional390=self->item_existance[it_326],            _if_conditional390) {
                if(_if_conditional391=optional$2boolbool_value(((struct optional$2boolbool*)(right_value439=string_equals(self->keys[it_326],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439),
                (right_value439 && right_value439 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value439, 
                __freed_obj__ = 0, 
                _if_conditional391) {
                    __result152__ = __result_obj__ = self->items[it_326];
                    return __result152__;
                }
                it_326++;
                if(_if_conditional392=it_326>=self->size,                _if_conditional392) {
                    it_326=0;
                }
                else {
                    if(_if_conditional393=it_326==hash_325,                    _if_conditional393) {
                        __result153__ = __result_obj__ = default_value_324;
                        return __result153__;
                    }
                }
            }
            else {
                __result154__ = __result_obj__ = default_value_324;
                return __result154__;
            }
        }
        __result156__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value441=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value440=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1619))),default_value_324,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
        if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value440;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value441);
        if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value441;
        __freed_obj__ = 0;
        return __result156__;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result155__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result155__;
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
char* it_329;
_Bool _for_condtionalA14;
_Bool _if_conditional394;
_Bool __result157__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_329, 0, sizeof(char*));
        for(
        it_329=list$1charph_begin(self) ,        0;        _for_condtionalA14=        !list$1charph_end(self) ,        _for_condtionalA14;        it_329=list$1charph_next(self) ,        0        ){
            if(_if_conditional394=string_operator_equals(it_329,item),            _if_conditional394) {
                __result157__ = (_Bool)1;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result157__;
            }
        }
        __result158__ = (_Bool)0;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
        return __result158__;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* caller_fun_331;
int caller_line_332;
char* caller_sname_333;
char* last_code_334;
char* __dec_obj91;
char* last_code2_335;
char* __dec_obj92;
char* last_code3_336;
char* __dec_obj93;
void* right_value443;
char* sname_top_337;
int sline_top_338;
_Bool _if_conditional395;
struct sFun* funX_339;
_Bool _if_conditional396;
_Bool __result160__;
void* right_value444;
struct sType* result_type_340;
void* right_value445;
void* right_value446;
struct list$1sTypeph* param_types_341;
struct list$1sTypeph* o2_saved_342;
struct sType* it_345;
_Bool _for_condtionalA15;
void* right_value447;
void* right_value448;
struct sType* param_type_348;
void* right_value449;
void* right_value450;
struct list$1charph* param_names_349;
void* right_value451;
struct list$1charph* param_default_parametors_350;
char* p_351;
int sline_352;
char* sname_353;
char* head_354;
struct buffer* source_355;
void* right_value452;
struct buffer* __dec_obj94;
struct sType* generics_type_saved_356;
void* right_value453;
struct sType* __dec_obj95;
void* right_value454;
struct list$1charph* __dec_obj96;
char* __dec_obj97;
void* right_value455;
struct sBlock* block_359;
struct buffer* __dec_obj98;
char* __dec_obj99;
_Bool var_args_360;
void* right_value456;
void* right_value457;
void* right_value458;
void* right_value459;
void* right_value460;
struct sFun* fun_361;
void* right_value461;
void* right_value462;
void* right_value463;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value467;
struct sNode* node_363;
_Bool _if_conditional407;
_Bool __result171__;
struct sType* __dec_obj102;
void* right_value468;
char* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&caller_fun_331, 0, sizeof(struct sFun*));
memset(&caller_line_332, 0, sizeof(int));
memset(&caller_sname_333, 0, sizeof(char*));
memset(&last_code_334, 0, sizeof(char*));
memset(&last_code2_335, 0, sizeof(char*));
memset(&last_code3_336, 0, sizeof(char*));
memset(&right_value443, 0, sizeof(void*));
memset(&sname_top_337, 0, sizeof(char*));
memset(&sline_top_338, 0, sizeof(int));
memset(&funX_339, 0, sizeof(struct sFun*));
memset(&right_value444, 0, sizeof(void*));
memset(&result_type_340, 0, sizeof(struct sType*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&param_types_341, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_342, 0, sizeof(struct list$1sTypeph*));
memset(&it_345, 0, sizeof(struct sType*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&param_type_348, 0, sizeof(struct sType*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&param_names_349, 0, sizeof(struct list$1charph*));
memset(&right_value451, 0, sizeof(void*));
memset(&param_default_parametors_350, 0, sizeof(struct list$1charph*));
memset(&p_351, 0, sizeof(char*));
memset(&sline_352, 0, sizeof(int));
memset(&sname_353, 0, sizeof(char*));
memset(&head_354, 0, sizeof(char*));
memset(&source_355, 0, sizeof(struct buffer*));
memset(&right_value452, 0, sizeof(void*));
memset(&generics_type_saved_356, 0, sizeof(struct sType*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&block_359, 0, sizeof(struct sBlock*));
memset(&var_args_360, 0, sizeof(_Bool));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&right_value458, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&fun_361, 0, sizeof(struct sFun*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&right_value463, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&node_363, 0, sizeof(struct sNode*));
memset(&right_value468, 0, sizeof(void*));
    caller_fun_331=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_332=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_333=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_334=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj91=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
    last_code2_335=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj92=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    last_code3_336=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj93=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    sname_top_337=(char*)come_increment_ref_count(((char*)(right_value443=__builtin_string(info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value443);
    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value443;
    __freed_obj__ = 0;
    sline_top_338=info->sline;
    if(_if_conditional395=generics_type->mNoSolvedGenericsType->v1,    _if_conditional395) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_339=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(_if_conditional396=funX_339,    _if_conditional396) {
        __result160__ = (_Bool)1;
        if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
        if(last_code_334 && !__freed_obj__) { last_code_334 = come_decrement_ref_count(last_code_334, (void*)0, (void*)0, 0, 0, 0); }
        if(last_code2_335 && !__freed_obj__) { last_code2_335 = come_decrement_ref_count(last_code2_335, (void*)0, (void*)0, 0, 0, 0); }
        if(last_code3_336 && !__freed_obj__) { last_code3_336 = come_decrement_ref_count(last_code3_336, (void*)0, (void*)0, 0, 0, 0); }
        if(sname_top_337 && !__freed_obj__) { sname_top_337 = come_decrement_ref_count(sname_top_337, (void*)0, (void*)0, 0, 0, 0); }
        return __result160__;
    }
    result_type_340=(struct sType*)come_increment_ref_count(((struct sType*)(right_value444=solve_generics(generics_fun->mResultType,generics_type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value444);
    if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value444;
    __freed_obj__ = 0;
    param_types_341=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value446=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value445=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1263))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value445);
    if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value445;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value446);
    if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value446;
    __freed_obj__ = 0;
    for(
    o2_saved_342=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_345=list$1sTypeph_begin((o2_saved_342)) ,    0;    _for_condtionalA15=    !list$1sTypeph_end((o2_saved_342)) ,    _for_condtionalA15;    it_345=list$1sTypeph_next((o2_saved_342)) ,    0    ){
        param_type_348=(struct sType*)come_increment_ref_count(((struct sType*)(right_value448=solve_generics(((struct sType*)(right_value447=sType_clone(it_345))),generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
        if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value447;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value448);
        if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value448;
        __freed_obj__ = 0;
        param_type_348->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_341,(struct sType*)come_increment_ref_count(((struct sType*)(right_value449=sType_clone(param_type_348)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value449);
        if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value449;
        __freed_obj__ = 0;
        if(param_type_348 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_348, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_342 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_342, (void*)0, (void*)0, 0, 0, 0, 0); }
    param_names_349=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value450=list$1charphp_clone(generics_fun->mParamNames))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value450);
    if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value450;
    __freed_obj__ = 0;
    param_default_parametors_350=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value451=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value451);
    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value451;
    __freed_obj__ = 0;
    p_351=info->p;
    sline_352=info->sline;
    sname_353=(char*)come_increment_ref_count(info->sname);
    head_354=info->head;
    source_355=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj94=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value452=string_to_buffer(generics_fun->mBlock))));
    if(__dec_obj94) { come_call_finalizer(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value452);
    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value452;
    __freed_obj__ = 0;
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_356=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj95=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value453=sType_clone(generics_type))));
    if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value453);
    if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value453;
    __freed_obj__ = 0;
    list$1charph_reset(info->generics_type_names);
    __dec_obj96=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value454=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    if(__dec_obj96) { come_call_finalizer(list$1charph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value454);
    if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value454;
    __freed_obj__ = 0;
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj97=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    block_359=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value455=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value455);
    if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value455;
    __freed_obj__ = 0;
    info->head=head_354;
    __dec_obj98=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_355);
    if(__dec_obj98) { come_call_finalizer(buffer_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
    info->p=p_351;
    info->sline=sline_352;
    __dec_obj99=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_353);
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    result_type_340->mInline=(_Bool)0;
    var_args_360=generics_fun->mVarArgs;
    fun_361=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value460=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value456=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1305)))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_340),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value457=list$1sTypephp_clone(param_types_341)))),(struct list$1charph*)come_increment_ref_count(param_names_349),(struct list$1charph*)come_increment_ref_count(param_default_parametors_350),(_Bool)0,var_args_360,(struct sBlock*)come_increment_ref_count(block_359),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value458=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value459=__builtin_string("")))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value456);
    if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value456;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value457);
    if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value457;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value458);
    if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value458;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value459);
    if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { right_value459 = come_decrement_ref_count(right_value459, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value459;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value460);
    if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value460;
    __freed_obj__ = 0;
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value461=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_361));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value461);
    if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { right_value461 = come_decrement_ref_count(right_value461, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value461;
    __freed_obj__ = 0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1312);
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value463=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value462=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1312)))),(struct sFun*)come_increment_ref_count(fun_361),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value467=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value462);
    if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value462;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value463);
    if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value463;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value467);
    if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { right_value467 = come_decrement_ref_count(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[18] = right_value467;
    __freed_obj__ = 0;
    if(_if_conditional407=!node_compile(node_363,info),    _if_conditional407) {
        __result171__ = (_Bool)0;
        if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
        if(last_code_334 && !__freed_obj__) { last_code_334 = come_decrement_ref_count(last_code_334, (void*)0, (void*)0, 0, 0, 0); }
        if(last_code2_335 && !__freed_obj__) { last_code2_335 = come_decrement_ref_count(last_code2_335, (void*)0, (void*)0, 0, 0, 0); }
        if(last_code3_336 && !__freed_obj__) { last_code3_336 = come_decrement_ref_count(last_code3_336, (void*)0, (void*)0, 0, 0, 0); }
        if(sname_top_337 && !__freed_obj__) { sname_top_337 = come_decrement_ref_count(sname_top_337, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_340 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_340, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_341 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_341, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_349 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_349, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_350 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_350, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_353 && !__freed_obj__) { sname_353 = come_decrement_ref_count(sname_353, (void*)0, (void*)0, 0, 0, 0); }
        if(source_355 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_355, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_type_saved_356 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_saved_356, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_359 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_359, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_361 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_361, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_363 && !__freed_obj__) { node_363 = come_decrement_ref_count(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0); } 
        return __result171__;
    }
    __dec_obj102=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_356);
    if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
    list$1charph_reset(info->generics_type_names);
    __dec_obj103=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value468=__builtin_string(sname_top_337))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value468);
    if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { right_value468 = come_decrement_ref_count(right_value468, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value468;
    __freed_obj__ = 0;
    info->sline=sline_top_338;
    __dec_obj104=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_334);
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __dec_obj105=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_335);
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    __dec_obj106=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_336);
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    info->caller_fun=caller_fun_331;
    info->caller_line=caller_line_332;
    info->caller_sname=caller_sname_333;
    __result172__ = (_Bool)1;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(last_code_334 && !__freed_obj__) { last_code_334 = come_decrement_ref_count(last_code_334, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_335 && !__freed_obj__) { last_code2_335 = come_decrement_ref_count(last_code2_335, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_336 && !__freed_obj__) { last_code3_336 = come_decrement_ref_count(last_code3_336, (void*)0, (void*)0, 0, 0, 0); }
    if(sname_top_337 && !__freed_obj__) { sname_top_337 = come_decrement_ref_count(sname_top_337, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_340 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_340, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_341 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_341, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_349 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_349, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_350 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_350, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(sname_353 && !__freed_obj__) { sname_353 = come_decrement_ref_count(sname_353, (void*)0, (void*)0, 0, 0, 0); }
    if(source_355 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_355, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_type_saved_356 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_saved_356, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(block_359 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_359, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_361 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_361, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_363 && !__freed_obj__) { node_363 = come_decrement_ref_count(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0); } 
    return __result172__;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(last_code_334 && !__freed_obj__) { last_code_334 = come_decrement_ref_count(last_code_334, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_335 && !__freed_obj__) { last_code2_335 = come_decrement_ref_count(last_code2_335, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_336 && !__freed_obj__) { last_code3_336 = come_decrement_ref_count(last_code3_336, (void*)0, (void*)0, 0, 0, 0); }
    if(sname_top_337 && !__freed_obj__) { sname_top_337 = come_decrement_ref_count(sname_top_337, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_340 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_340, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_341 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_341, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_349 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_349, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_350 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_350, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(sname_353 && !__freed_obj__) { sname_353 = come_decrement_ref_count(sname_353, (void*)0, (void*)0, 0, 0, 0); }
    if(source_355 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_355, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_type_saved_356 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_saved_356, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(block_359 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_359, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_361 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_361, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_363 && !__freed_obj__) { node_363 = come_decrement_ref_count(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional397;
struct sType* result_343;
struct sType* __result161__;
_Bool _if_conditional398;
struct sType* __result162__;
struct sType* result_344;
struct sType* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_343, 0, sizeof(struct sType*));
memset(&result_344, 0, sizeof(struct sType*));
        if(_if_conditional397=self==((void*)0),        _if_conditional397) {
            memset(&result_343,0,sizeof(struct sType*));
            __result161__ = __result_obj__ = result_343;
            return __result161__;
        }
        self->it=self->head;
        if(_if_conditional398=self->it,        _if_conditional398) {
            __result162__ = __result_obj__ = self->it->item;
            return __result162__;
        }
        memset(&result_344,0,sizeof(struct sType*));
        __result163__ = __result_obj__ = result_344;
        return __result163__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result164__ = self==((void*)0)||self->it==((void*)0);
        return __result164__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional399;
struct sType* result_346;
struct sType* __result165__;
_Bool _if_conditional400;
struct sType* __result166__;
struct sType* result_347;
struct sType* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_346, 0, sizeof(struct sType*));
memset(&result_347, 0, sizeof(struct sType*));
        if(_if_conditional399=self==((void*)0)||self->it==((void*)0),        _if_conditional399) {
            memset(&result_346,0,sizeof(struct sType*));
            __result165__ = __result_obj__ = result_346;
            return __result165__;
        }
        self->it=self->it->next;
        if(_if_conditional400=self->it,        _if_conditional400) {
            __result166__ = __result_obj__ = self->it->item;
            return __result166__;
        }
        memset(&result_347,0,sizeof(struct sType*));
        __result167__ = __result_obj__ = result_347;
        return __result167__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_357;
_Bool _while_condtional38;
struct list_item$1charph* prev_it_358;
struct list$1charph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_357, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_358, 0, sizeof(struct list_item$1charph*));
        it_357=self->head;
        while(_while_condtional38=it_357!=((void*)0),        _while_condtional38) {
            prev_it_358=it_357;
            it_357=it_357->next;
            if(prev_it_358 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_358, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result168__ = __result_obj__ = self;
        return __result168__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* header_head_364;
void* right_value469;
struct tuple3$3sTypephcharphbool* multiple_assgin_var7;
struct sType* result_type_365;
char* var_name_366;
_Bool err_367;
_Bool _if_conditional408;
_Bool method_definition_368;
char* p_369;
int sline_370;
void* right_value470;
void* right_value471;
struct buffer* buf2_371;
_Bool _while_condtional39;
_Bool _while_condtional40;
_Bool _while_condtional41;
_Bool _if_conditional409;
char* fun_name_372;
char* base_fun_name_373;
_Bool _if_conditional410;
void* right_value472;
struct tuple3$3sTypephcharphbool* multiple_assgin_var8;
struct sType* obj_type_374;
char* name_375;
_Bool err_376;
_Bool _if_conditional411;
void* right_value473;
void* right_value474;
void* right_value475;
void* right_value476;
char* __dec_obj107;
void* right_value477;
void* right_value478;
void* right_value479;
char* __dec_obj108;
_Bool _if_conditional412;
void* right_value480;
void* right_value481;
char* __dec_obj109;
void* right_value482;
void* right_value483;
void* right_value484;
char* __dec_obj110;
void* right_value485;
void* right_value486;
char* __dec_obj111;
void* right_value487;
void* right_value488;
char* __dec_obj112;
void* right_value489;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var9;
struct list$1sTypeph* param_types_378;
struct list$1charph* param_names_379;
struct list$1charph* param_default_parametors_380;
_Bool var_args_381;
char* header_tail_382;
void* right_value490;
void* right_value491;
struct buffer* header_buf_383;
int version_384;
_Bool _if_conditional418;
int n_385;
_Bool _while_condtional42;
_Bool _if_conditional419;
void* right_value492;
struct sBlock* block_386;
static int lambda_num_387=0;
void* right_value493;
char* __dec_obj113;
void* right_value494;
void* right_value495;
void* right_value496;
void* right_value497;
void* right_value498;
struct sFun* fun_388;
void* right_value499;
struct sFun* fun2_389;
_Bool _if_conditional420;
void* right_value500;
void* right_value501;
void* right_value502;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value505;
struct sNode* __result177__;
_Bool _if_conditional426;
void* right_value506;
char* none_generics_name_391;
void* right_value507;
char* generics_sname_392;
int generics_sline_393;
void* right_value508;
char* block_394;
void* right_value509;
void* right_value510;
void* right_value511;
void* right_value512;
void* right_value513;
struct sGenericsFun* fun_395;
void* right_value514;
char* fun_name3_396;
void* right_value521;
struct sNode* __result191__;
_Bool _if_conditional449;
void* right_value522;
struct sBlock* block_418;
_Bool static__419;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value523;
void* right_value524;
char* new_fun_name_420;
void* right_value525;
char* __dec_obj115;
void* right_value526;
void* right_value527;
void* right_value528;
void* right_value529;
void* right_value530;
void* right_value531;
struct sFun* fun_421;
void* right_value532;
struct sFun* fun2_422;
_Bool _if_conditional452;
void* right_value533;
void* right_value534;
void* right_value535;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value539;
struct sNode* __result194__;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value540;
char* new_fun_name_424;
void* right_value541;
char* __dec_obj118;
_Bool _if_conditional461;
void* right_value542;
void* right_value543;
void* right_value544;
void* right_value545;
void* right_value546;
struct sFun* fun_425;
void* right_value547;
struct sFun* fun2_426;
_Bool _if_conditional462;
void* right_value548;
void* right_value549;
void* right_value550;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value554;
struct sNode* __result197__;
void* right_value555;
char* asm_fun_428;
_Bool _if_conditional469;
void* right_value556;
char* __dec_obj121;
void* right_value557;
void* right_value558;
void* right_value559;
void* right_value560;
void* right_value561;
void* right_value562;
struct sFun* fun_429;
void* right_value563;
struct sFun* fun2_430;
_Bool _if_conditional470;
void* right_value564;
void* right_value565;
void* right_value566;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value570;
struct sNode* __result200__;
struct sNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_head_364, 0, sizeof(char*));
memset(&right_value469, 0, sizeof(void*));
memset(&result_type_365, 0, sizeof(struct sType*));
memset(&var_name_366, 0, sizeof(char*));
memset(&err_367, 0, sizeof(_Bool));
memset(&result_type_365, 0, sizeof(struct sType*));
memset(&var_name_366, 0, sizeof(char*));
memset(&err_367, 0, sizeof(_Bool));
memset(&method_definition_368, 0, sizeof(_Bool));
memset(&p_369, 0, sizeof(char*));
memset(&sline_370, 0, sizeof(int));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&buf2_371, 0, sizeof(struct buffer*));
memset(&fun_name_372, 0, sizeof(char*));
memset(&base_fun_name_373, 0, sizeof(char*));
memset(&right_value472, 0, sizeof(void*));
memset(&obj_type_374, 0, sizeof(struct sType*));
memset(&name_375, 0, sizeof(char*));
memset(&err_376, 0, sizeof(_Bool));
memset(&obj_type_374, 0, sizeof(struct sType*));
memset(&name_375, 0, sizeof(char*));
memset(&err_376, 0, sizeof(_Bool));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&param_types_378, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_379, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_380, 0, sizeof(struct list$1charph*));
memset(&var_args_381, 0, sizeof(_Bool));
memset(&param_types_378, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_379, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_380, 0, sizeof(struct list$1charph*));
memset(&var_args_381, 0, sizeof(_Bool));
memset(&header_tail_382, 0, sizeof(char*));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&header_buf_383, 0, sizeof(struct buffer*));
memset(&version_384, 0, sizeof(int));
memset(&n_385, 0, sizeof(int));
memset(&right_value492, 0, sizeof(void*));
memset(&block_386, 0, sizeof(struct sBlock*));
memset(&right_value493, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&right_value498, 0, sizeof(void*));
memset(&fun_388, 0, sizeof(struct sFun*));
memset(&right_value499, 0, sizeof(void*));
memset(&fun2_389, 0, sizeof(struct sFun*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value506, 0, sizeof(void*));
memset(&none_generics_name_391, 0, sizeof(char*));
memset(&right_value507, 0, sizeof(void*));
memset(&generics_sname_392, 0, sizeof(char*));
memset(&generics_sline_393, 0, sizeof(int));
memset(&right_value508, 0, sizeof(void*));
memset(&block_394, 0, sizeof(char*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&fun_395, 0, sizeof(struct sGenericsFun*));
memset(&right_value514, 0, sizeof(void*));
memset(&fun_name3_396, 0, sizeof(char*));
memset(&right_value521, 0, sizeof(void*));
memset(&right_value522, 0, sizeof(void*));
memset(&block_418, 0, sizeof(struct sBlock*));
memset(&static__419, 0, sizeof(_Bool));
memset(&right_value523, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&new_fun_name_420, 0, sizeof(char*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_value528, 0, sizeof(void*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&right_value531, 0, sizeof(void*));
memset(&fun_421, 0, sizeof(struct sFun*));
memset(&right_value532, 0, sizeof(void*));
memset(&fun2_422, 0, sizeof(struct sFun*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_value539, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&new_fun_name_424, 0, sizeof(char*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_value542, 0, sizeof(void*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_value544, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&fun_425, 0, sizeof(struct sFun*));
memset(&right_value547, 0, sizeof(void*));
memset(&fun2_426, 0, sizeof(struct sFun*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value549, 0, sizeof(void*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
memset(&asm_fun_428, 0, sizeof(char*));
memset(&right_value556, 0, sizeof(void*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
memset(&fun_429, 0, sizeof(struct sFun*));
memset(&right_value563, 0, sizeof(void*));
memset(&fun2_430, 0, sizeof(struct sFun*));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
memset(&right_value566, 0, sizeof(void*));
memset(&right_value570, 0, sizeof(void*));
    header_head_364=info->p;
    multiple_assgin_var7=((struct tuple3$3sTypephcharphbool*)(right_value469=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_365=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v1);
    var_name_366=(char*)come_increment_ref_count(multiple_assgin_var7->v2);
    err_367=multiple_assgin_var7->v3;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value469);
    if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value469;
    __freed_obj__ = 0;
    if(_if_conditional408=!err_367,    _if_conditional408) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_368=(_Bool)0;
    {
        p_369=info->p;
        sline_370=info->sline;
        buf2_371=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value471=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value470=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1352))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value470);
        if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value470;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value471);
        if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value471;
        __freed_obj__ = 0;
        while(_while_condtional39=xisalnum(*info->p)||*info->p==95,        _while_condtional39) {
            buffer_append_char(buf2_371,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional40=*info->p==42,        _while_condtional40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional41=*info->p==37,        _while_condtional41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional409=buffer_length(buf2_371)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional409) {
            method_definition_368=(_Bool)1;
        }
        info->p=p_369;
        info->sline=sline_370;
        if(buf2_371 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_371, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional410=method_definition_368,    _if_conditional410) {
        multiple_assgin_var8=((struct tuple3$3sTypephcharphbool*)(right_value472=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_374=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v1);
        name_375=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        err_376=multiple_assgin_var8->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value472);
        if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value472;
        __freed_obj__ = 0;
        if(_if_conditional411=!err_376,        _if_conditional411) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        optional$2intbool_value(((struct optional$2intbool*)(right_value473=expected_next_character(58,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value473);
        if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value473;
        __freed_obj__ = 0;
        optional$2intbool_value(((struct optional$2intbool*)(right_value474=expected_next_character(58,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value474);
        if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value474;
        __freed_obj__ = 0;
        __dec_obj107=base_fun_name_373;
        base_fun_name_373=(char*)come_increment_ref_count(((char*)(right_value476=string_clone(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value475=parse_word(info))))))));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value475);
        if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value475;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value476);
        if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value476;
        __freed_obj__ = 0;
        __dec_obj108=fun_name_372;
        fun_name_372=(char*)come_increment_ref_count(((char*)(right_value479=string_clone(((char*)(right_value478=create_method_name(obj_type_374,(_Bool)0,((char*)(right_value477=__builtin_string(base_fun_name_373))),info)))))));
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value477);
        if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { right_value477 = come_decrement_ref_count(right_value477, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value477;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value478);
        if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { right_value478 = come_decrement_ref_count(right_value478, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value478;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value479);
        if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { right_value479 = come_decrement_ref_count(right_value479, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value479;
        __freed_obj__ = 0;
        if(obj_type_374 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_374, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_375 && !__freed_obj__) { name_375 = come_decrement_ref_count(name_375, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional412=info->impl_type,        _if_conditional412) {
            __dec_obj109=base_fun_name_373;
            base_fun_name_373=(char*)come_increment_ref_count(((char*)(right_value481=string_clone(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value480=parse_word(info))))))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value480);
            if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value480;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value481);
            if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { right_value481 = come_decrement_ref_count(right_value481, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value481;
            __freed_obj__ = 0;
            __dec_obj110=fun_name_372;
            fun_name_372=(char*)come_increment_ref_count(((char*)(right_value484=string_clone(((char*)(right_value483=create_method_name(info->impl_type,(_Bool)0,((char*)(right_value482=__builtin_string(base_fun_name_373))),info)))))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value482);
            if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value482;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value483);
            if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value483;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value484);
            if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value484;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj111=fun_name_372;
            fun_name_372=(char*)come_increment_ref_count(((char*)(right_value486=string_clone(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value485=parse_word(info))))))));
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value485);
            if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value485;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value486);
            if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { right_value486 = come_decrement_ref_count(right_value486, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value486;
            __freed_obj__ = 0;
            __dec_obj112=base_fun_name_373;
            base_fun_name_373=(char*)come_increment_ref_count(((char*)(right_value488=string_clone(((char*)(right_value487=__builtin_string(fun_name_372)))))));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value487);
            if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { right_value487 = come_decrement_ref_count(right_value487, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value487;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value488);
            if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { right_value488 = come_decrement_ref_count(right_value488, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value488;
            __freed_obj__ = 0;
        }
    }
    multiple_assgin_var9=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value489=parse_params(info))));
    param_types_378=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var9->v1);
    param_names_379=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var9->v2);
    param_default_parametors_380=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var9->v3);
    var_args_381=multiple_assgin_var9->v4;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value489);
    if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value489;
    __freed_obj__ = 0;
    header_tail_382=info->p;
    header_buf_383=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value491=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value490=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1405))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value490);
    if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value490;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value491);
    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value491;
    __freed_obj__ = 0;
    buffer_append(header_buf_383,header_head_364,header_tail_382-header_head_364);
    buffer_append_char(header_buf_383,0);
    version_384=0;
    if(_if_conditional418=strmemcmp(info->p,"version"),    _if_conditional418) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_385=0;
        while(_while_condtional42=xisdigit(*info->p),        _while_condtional42) {
            n_385=n_385*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_384=n_385;
    }
    if(_if_conditional419=string_operator_equals(base_fun_name_373,"lambda"),    _if_conditional419) {
        block_386=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value492=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
        if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value492;
        __freed_obj__ = 0;
        lambda_num_387++;
        __dec_obj113=fun_name_372;
        fun_name_372=(char*)come_increment_ref_count(((char*)(right_value493=xsprintf("lambda%d",lambda_num_387))));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value493);
        if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value493;
        __freed_obj__ = 0;
        result_type_365->mStatic=(_Bool)0;
        fun_388=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value498=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value494=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1435)))),(char*)come_increment_ref_count(((char*)(right_value495=__builtin_string(fun_name_372)))),(struct sType*)come_increment_ref_count(result_type_365),(struct list$1sTypeph*)come_increment_ref_count(param_types_378),(struct list$1charph*)come_increment_ref_count(param_names_379),(struct list$1charph*)come_increment_ref_count(param_default_parametors_380),(_Bool)0,var_args_381,(struct sBlock*)come_increment_ref_count(block_386),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value496=buffer_to_string(header_buf_383)))),(char*)come_increment_ref_count(((char*)(right_value497=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value494);
        if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value494;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value495);
        if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { right_value495 = come_decrement_ref_count(right_value495, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value495;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value496);
        if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { right_value496 = come_decrement_ref_count(right_value496, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value496;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value497);
        if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value497;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value498);
        if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value498;
        __freed_obj__ = 0;
        fun2_389=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value499=__builtin_string(fun_name_372))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value499);
        if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value499;
        __freed_obj__ = 0;
        if(_if_conditional420=fun2_389==((void*)0)||fun2_389->mExternal,        _if_conditional420) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value500=string_clone(fun_name_372)))),(struct sFun*)come_increment_ref_count(fun_388));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value500);
            if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value500;
            __freed_obj__ = 0;
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1446);
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value502=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value501=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1446)))),fun_388,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sLambdaNode_finalize;
        _inf_value3->clone=(void*)sLambdaNode_clone;
        _inf_value3->compile=(void*)sLambdaNode_compile;
        _inf_value3->sline=(void*)sLambdaNode_sline;
        _inf_value3->sname=(void*)sLambdaNode_sname;
        _inf_value3->terminated=(void*)sLambdaNode_terminated;
        _inf_value3->kind=(void*)sLambdaNode_kind;
        __result177__ = __result_obj__ = ((struct sNode*)(right_value505=_inf_value3));
        if(block_386 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_386, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_388 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_388, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
        if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value501);
        if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value501;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value502);
        if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value502;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value505);
        if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { right_value505 = come_decrement_ref_count(right_value505, ((struct sNode*)right_value505)->finalize, ((struct sNode*)right_value505)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[10] = right_value505;
        __freed_obj__ = 0;
        return __result177__;
        if(block_386 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_386, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_388 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_388, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional426=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional426) {
            none_generics_name_391=(char*)come_increment_ref_count(((char*)(right_value506=get_none_generics_name(info->impl_type->mClass->mName))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value506);
            if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { right_value506 = come_decrement_ref_count(right_value506, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value506;
            __freed_obj__ = 0;
            generics_sname_392=(char*)come_increment_ref_count(((char*)(right_value507=__builtin_string(info->sname))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value507);
            if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value507;
            __freed_obj__ = 0;
            generics_sline_393=info->sline;
            block_394=(char*)come_increment_ref_count(((char*)(right_value508=skip_block(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value508);
            if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value508;
            __freed_obj__ = 0;
            fun_395=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value513=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value509=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1456)))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value510=list$1charphp_clone(info->generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value511=__builtin_string(fun_name_372)))),(struct sType*)come_increment_ref_count(result_type_365),(struct list$1sTypeph*)come_increment_ref_count(param_types_378),(struct list$1charph*)come_increment_ref_count(param_names_379),(struct list$1charph*)come_increment_ref_count(param_default_parametors_380),var_args_381,(char*)come_increment_ref_count(block_394),info,(char*)come_increment_ref_count(((char*)(right_value512=__builtin_string(generics_sname_392)))),generics_sline_393))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value509);
            if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value509;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value510);
            if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value510;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value511);
            if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value511;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value512);
            if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { right_value512 = come_decrement_ref_count(right_value512, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value512;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value513);
            if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value513;
            __freed_obj__ = 0;
            fun_name3_396=(char*)come_increment_ref_count(((char*)(right_value514=xsprintf("%s_%s",none_generics_name_391,base_fun_name_373))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value514);
            if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { right_value514 = come_decrement_ref_count(right_value514, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value514;
            __freed_obj__ = 0;
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value521=__builtin_string(fun_name3_396)))),(struct sGenericsFun*)come_increment_ref_count(fun_395));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value521);
            if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { right_value521 = come_decrement_ref_count(right_value521, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value521;
            __freed_obj__ = 0;
            __result191__ = __result_obj__ = (struct sNode*)((void*)0);
            if(none_generics_name_391 && !__freed_obj__) { none_generics_name_391 = come_decrement_ref_count(none_generics_name_391, (void*)0, (void*)0, 0, 0, 0); }
            if(generics_sname_392 && !__freed_obj__) { generics_sname_392 = come_decrement_ref_count(generics_sname_392, (void*)0, (void*)0, 0, 0, 0); }
            if(block_394 && !__freed_obj__) { block_394 = come_decrement_ref_count(block_394, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_395 && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,fun_395, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name3_396 && !__freed_obj__) { fun_name3_396 = come_decrement_ref_count(fun_name3_396, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
            if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
            if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result191__;
            if(none_generics_name_391 && !__freed_obj__) { none_generics_name_391 = come_decrement_ref_count(none_generics_name_391, (void*)0, (void*)0, 0, 0, 0); }
            if(generics_sname_392 && !__freed_obj__) { generics_sname_392 = come_decrement_ref_count(generics_sname_392, (void*)0, (void*)0, 0, 0, 0); }
            if(block_394 && !__freed_obj__) { block_394 = come_decrement_ref_count(block_394, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_395 && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,fun_395, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name3_396 && !__freed_obj__) { fun_name3_396 = come_decrement_ref_count(fun_name3_396, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional449=*info->p==123,            _if_conditional449) {
                block_418=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value522=parse_block(info,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value522);
                if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value522;
                __freed_obj__ = 0;
                static__419=(_Bool)0;
                if(_if_conditional450=result_type_365->mStatic,                _if_conditional450) {
                    result_type_365->mStatic=(_Bool)0;
                    static__419=(_Bool)1;
                }
                if(_if_conditional451=version_384>0,                _if_conditional451) {
                    new_fun_name_420=(char*)come_increment_ref_count(((char*)(right_value524=xsprintf("%s_v%d",((char*)(right_value523=__builtin_string(fun_name_372))),version_384))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value523);
                    if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { right_value523 = come_decrement_ref_count(right_value523, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value523;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value524);
                    if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { right_value524 = come_decrement_ref_count(right_value524, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value524;
                    __freed_obj__ = 0;
                    __dec_obj115=fun_name_372;
                    fun_name_372=(char*)come_increment_ref_count(((char*)(right_value525=__builtin_string(new_fun_name_420))));
                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value525);
                    if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { right_value525 = come_decrement_ref_count(right_value525, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value525;
                    __freed_obj__ = 0;
                    if(new_fun_name_420 && !__freed_obj__) { new_fun_name_420 = come_decrement_ref_count(new_fun_name_420, (void*)0, (void*)0, 0, 0, 0); }
                }
                fun_421=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value531=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value526=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1479)))),(char*)come_increment_ref_count(((char*)(right_value527=__builtin_string(fun_name_372)))),(struct sType*)come_increment_ref_count(result_type_365),(struct list$1sTypeph*)come_increment_ref_count(param_types_378),(struct list$1charph*)come_increment_ref_count(param_names_379),(struct list$1charph*)come_increment_ref_count(param_default_parametors_380),(_Bool)0,var_args_381,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value528=sBlock_clone(block_418)))),static__419,(char*)come_increment_ref_count(((char*)(right_value529=buffer_to_string(header_buf_383)))),(char*)come_increment_ref_count(((char*)(right_value530=__builtin_string(info->sname)))),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value526);
                if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value526;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value527);
                if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { right_value527 = come_decrement_ref_count(right_value527, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value527;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value528);
                if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value528;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value529);
                if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { right_value529 = come_decrement_ref_count(right_value529, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value529;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value530);
                if(right_value530 && right_value530 != __result_obj__ && !__freed_obj__) { right_value530 = come_decrement_ref_count(right_value530, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value530;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value531);
                if(right_value531 && right_value531 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value531;
                __freed_obj__ = 0;
                fun2_422=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value532=__builtin_string(fun_name_372))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value532);
                if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { right_value532 = come_decrement_ref_count(right_value532, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[7] = right_value532;
                __freed_obj__ = 0;
                if(_if_conditional452=fun2_422==((void*)0)||fun2_422->mExternal,                _if_conditional452) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value533=string_clone(fun_name_372)))),(struct sFun*)come_increment_ref_count(fun_421));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value533);
                    if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { right_value533 = come_decrement_ref_count(right_value533, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value533;
                    __freed_obj__ = 0;
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1495);
                _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value535=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value534=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1495)))),(struct sFun*)come_increment_ref_count(fun_421),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sFunNode_finalize;
                _inf_value4->clone=(void*)sFunNode_clone;
                _inf_value4->compile=(void*)sFunNode_compile;
                _inf_value4->sline=(void*)sFunNode_sline;
                _inf_value4->sname=(void*)sFunNode_sname;
                _inf_value4->terminated=(void*)sFunNode_terminated;
                _inf_value4->kind=(void*)sFunNode_kind;
                __result194__ = __result_obj__ = ((struct sNode*)(right_value539=_inf_value4));
                if(block_418 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_418, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_421 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_421, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
                if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value534);
                if(right_value534 && right_value534 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[8] = right_value534;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value535);
                if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[9] = right_value535;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value539);
                if(right_value539 && right_value539 != __result_obj__ && !__freed_obj__) { right_value539 = come_decrement_ref_count(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[10] = right_value539;
                __freed_obj__ = 0;
                return __result194__;
                if(block_418 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_418, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_421 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_421, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional459=xisalpha(*info->p)||*info->p==95||*info->p==59,                _if_conditional459) {
                    if(_if_conditional460=version_384>0,                    _if_conditional460) {
                        new_fun_name_424=(char*)come_increment_ref_count(((char*)(right_value540=xsprintf("%s_v%d",fun_name_372,version_384))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value540);
                        if(right_value540 && right_value540 != __result_obj__ && !__freed_obj__) { right_value540 = come_decrement_ref_count(right_value540, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value540;
                        __freed_obj__ = 0;
                        __dec_obj118=fun_name_372;
                        fun_name_372=(char*)come_increment_ref_count(((char*)(right_value541=__builtin_string(new_fun_name_424))));
                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value541);
                        if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { right_value541 = come_decrement_ref_count(right_value541, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value541;
                        __freed_obj__ = 0;
                        if(new_fun_name_424 && !__freed_obj__) { new_fun_name_424 = come_decrement_ref_count(new_fun_name_424, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional461=*info->p==59,                    _if_conditional461) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_365->mStatic=(_Bool)0;
                        fun_425=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value546=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value542=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1509)))),(char*)come_increment_ref_count(((char*)(right_value543=__builtin_string(fun_name_372)))),(struct sType*)come_increment_ref_count(result_type_365),(struct list$1sTypeph*)come_increment_ref_count(param_types_378),(struct list$1charph*)come_increment_ref_count(param_names_379),(struct list$1charph*)come_increment_ref_count(param_default_parametors_380),(_Bool)1,var_args_381,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value544=buffer_to_string(header_buf_383)))),(char*)come_increment_ref_count(((char*)(right_value545=__builtin_string(info->sname)))),info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value542);
                        if(right_value542 && right_value542 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value542;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value543);
                        if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { right_value543 = come_decrement_ref_count(right_value543, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value543;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value544);
                        if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { right_value544 = come_decrement_ref_count(right_value544, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value544;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value545);
                        if(right_value545 && right_value545 != __result_obj__ && !__freed_obj__) { right_value545 = come_decrement_ref_count(right_value545, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value545;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value546);
                        if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value546;
                        __freed_obj__ = 0;
                        fun2_426=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value547=__builtin_string(fun_name_372))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value547);
                        if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { right_value547 = come_decrement_ref_count(right_value547, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value547;
                        __freed_obj__ = 0;
                        if(_if_conditional462=fun2_426==((void*)0)||fun2_426->mExternal,                        _if_conditional462) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value548=string_clone(fun_name_372)))),(struct sFun*)come_increment_ref_count(fun_425));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value548);
                            if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { right_value548 = come_decrement_ref_count(right_value548, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value548;
                            __freed_obj__ = 0;
                        }
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1521);
                        _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value550=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value549=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1521)))),(struct sFun*)come_increment_ref_count(fun_425),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sFunNode_finalize;
                        _inf_value5->clone=(void*)sFunNode_clone;
                        _inf_value5->compile=(void*)sFunNode_compile;
                        _inf_value5->sline=(void*)sFunNode_sline;
                        _inf_value5->sname=(void*)sFunNode_sname;
                        _inf_value5->terminated=(void*)sFunNode_terminated;
                        _inf_value5->kind=(void*)sFunNode_kind;
                        __result197__ = __result_obj__ = ((struct sNode*)(right_value554=_inf_value5));
                        if(fun_425 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_425, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
                        if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
                        if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value549);
                        if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value549;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value550);
                        if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value550;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value554);
                        if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { right_value554 = come_decrement_ref_count(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[8] = right_value554;
                        __freed_obj__ = 0;
                        return __result197__;
                        if(fun_425 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_425, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        asm_fun_428=(char*)come_increment_ref_count(((char*)(right_value555=parse_attribute(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value555);
                        if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { right_value555 = come_decrement_ref_count(right_value555, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value555;
                        __freed_obj__ = 0;
                        if(_if_conditional469=string_operator_not_equals(asm_fun_428,""),                        _if_conditional469) {
                            __dec_obj121=fun_name_372;
                            fun_name_372=(char*)come_increment_ref_count(((char*)(right_value556=__builtin_string(asm_fun_428))));
                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value556);
                            if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value556;
                            __freed_obj__ = 0;
                        }
                        optional$2intbool_value(((struct optional$2intbool*)(right_value557=expected_next_character(59,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value557);
                        if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value557;
                        __freed_obj__ = 0;
                        result_type_365->mStatic=(_Bool)0;
                        fun_429=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value562=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value558=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1534)))),(char*)come_increment_ref_count(((char*)(right_value559=__builtin_string(fun_name_372)))),(struct sType*)come_increment_ref_count(result_type_365),(struct list$1sTypeph*)come_increment_ref_count(param_types_378),(struct list$1charph*)come_increment_ref_count(param_names_379),(struct list$1charph*)come_increment_ref_count(param_default_parametors_380),(_Bool)1,var_args_381,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value560=buffer_to_string(header_buf_383)))),(char*)come_increment_ref_count(((char*)(right_value561=__builtin_string(info->sname)))),info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value558);
                        if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value558;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value559);
                        if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { right_value559 = come_decrement_ref_count(right_value559, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value559;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value560);
                        if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { right_value560 = come_decrement_ref_count(right_value560, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value560;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value561);
                        if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { right_value561 = come_decrement_ref_count(right_value561, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value561;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value562);
                        if(right_value562 && right_value562 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value562;
                        __freed_obj__ = 0;
                        fun2_430=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value563=__builtin_string(fun_name_372))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value563);
                        if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value563;
                        __freed_obj__ = 0;
                        if(_if_conditional470=fun2_430==((void*)0)||fun2_430->mExternal,                        _if_conditional470) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value564=string_clone(fun_name_372)))),(struct sFun*)come_increment_ref_count(fun_429));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value564);
                            if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { right_value564 = come_decrement_ref_count(right_value564, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value564;
                            __freed_obj__ = 0;
                        }
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1546);
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value566=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value565=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1546)))),(struct sFun*)come_increment_ref_count(fun_429),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result200__ = __result_obj__ = ((struct sNode*)(right_value570=_inf_value6));
                        if(asm_fun_428 && !__freed_obj__) { asm_fun_428 = come_decrement_ref_count(asm_fun_428, (void*)0, (void*)0, 0, 0, 0); }
                        if(fun_429 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_429, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
                        if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
                        if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value565);
                        if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[8] = right_value565;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value566);
                        if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[9] = right_value566;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value570);
                        if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { right_value570 = come_decrement_ref_count(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[10] = right_value570;
                        __freed_obj__ = 0;
                        return __result200__;
                        if(asm_fun_428 && !__freed_obj__) { asm_fun_428 = come_decrement_ref_count(asm_fun_428, (void*)0, (void*)0, 0, 0, 0); }
                        if(fun_429 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_429, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    __result201__ = __result_obj__ = (struct sNode*)((void*)0);
    if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
    if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result201__;
    if(result_type_365 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_365, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_366 && !__freed_obj__) { var_name_366 = come_decrement_ref_count(var_name_366, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_372 && !__freed_obj__) { fun_name_372 = come_decrement_ref_count(fun_name_372, (void*)0, (void*)0, 0, 0, 0); }
    if(base_fun_name_373 && !__freed_obj__) { base_fun_name_373 = come_decrement_ref_count(base_fun_name_373, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_378 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_378, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_379 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_379, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_380 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_380, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(header_buf_383 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_383, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional413;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_377;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result173__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_377, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
        if(_if_conditional413=self==((void*)0),        _if_conditional413) {
            memset(&default_value_377,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
            __result173__ = __result_obj__ = default_value_377;
            return __result173__;
        }
        else {
            __result174__ = __result_obj__ = self->v1;
            return __result174__;
        }
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional414=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional414) {
            if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional415=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional415) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional416=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional416) {
                    if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional417=self!=((void*)0)&&self->v3!=((void*)0),                _if_conditional417) {
                    if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional421) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional422;
struct sLambdaNode* __result175__;
void* right_value503;
struct sLambdaNode* result_390;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
void* right_value504;
char* __dec_obj114;
struct sLambdaNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value503, 0, sizeof(void*));
memset(&result_390, 0, sizeof(struct sLambdaNode*));
memset(&right_value504, 0, sizeof(void*));
            if(_if_conditional422=self==(void*)0,            _if_conditional422) {
                __result175__ = __result_obj__ = (void*)0;
                return __result175__;
            }
            result_390=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value503=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value503);
            if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value503;
            __freed_obj__ = 0;
            if(_if_conditional423=self!=((void*)0),            _if_conditional423) {
                result_390->mFun=self->mFun;
            }
            if(_if_conditional424=self!=((void*)0),            _if_conditional424) {
                result_390->sline=self->sline;
            }
            if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional425) {
                __dec_obj114=result_390->sname;
                result_390->sname=(char*)come_increment_ref_count(((char*)(right_value504=string_clone(self->sname))));
                if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value504);
                if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { right_value504 = come_decrement_ref_count(right_value504, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value504;
                __freed_obj__ = 0;
            }
            __result176__ = __result_obj__ = result_390;
            if(result_390 && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,result_390, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result176__;
            if(result_390 && !__freed_obj__) { come_call_finalizer(sLambdaNode_finalize,result_390, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result178__ = self->len;
            return __result178__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional427;
unsigned int hash_414;
unsigned int it_415;
_Bool _while_condtional45;
_Bool _if_conditional439;
void* right_value519;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool same_key_exist_416;
char* it2_417;
_Bool _for_condtionalA17;
void* right_value520;
_Bool _if_conditional447;
_Bool _if_conditional448;
struct map$2charphsGenericsFunph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_414, 0, sizeof(unsigned int));
memset(&it_415, 0, sizeof(unsigned int));
memset(&right_value519, 0, sizeof(void*));
memset(&same_key_exist_416, 0, sizeof(_Bool));
memset(&it2_417, 0, sizeof(char*));
memset(&right_value520, 0, sizeof(void*));
                if(_if_conditional427=self->len*10>=self->size,                _if_conditional427) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_414=string_get_hash_key(key)%self->size;
                it_415=hash_414;
                while(_while_condtional45=(_Bool)1,                _while_condtional45) {
                    if(_if_conditional439=self->item_existance[it_415],                    _if_conditional439) {
                        if(_if_conditional440=optional$2boolbool_value(((struct optional$2boolbool*)(right_value519=string_equals(self->keys[it_415],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value519),
                        (right_value519 && right_value519 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value519, 
                        __freed_obj__ = 0, 
                        _if_conditional440) {
                            if(_if_conditional441=1,                            _if_conditional441) {
                                list$1charp_remove(self->key_list,self->keys[it_415]);
                                if(self->keys[it_415] && !__freed_obj__) { self->keys[it_415] = come_decrement_ref_count(self->keys[it_415], (void*)0, (void*)0, 0, 0, 0); }
                                self->keys[it_415]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_415]);
                                self->keys[it_415]=key;
                            }
                            if(_if_conditional442=1,                            _if_conditional442) {
                                if(self->items[it_415] && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,self->items[it_415], (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->items[it_415]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_415]=item;
                            }
                            break;
                        }
                        it_415++;
                        if(_if_conditional443=it_415>=self->size,                        _if_conditional443) {
                            it_415=0;
                        }
                        else {
                            if(_if_conditional444=it_415==hash_414,                            _if_conditional444) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_415]=(_Bool)1;
                        if(_if_conditional445=1,                        _if_conditional445) {
                            self->keys[it_415]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_415]=key;
                        }
                        if(_if_conditional446=1,                        _if_conditional446) {
                            self->items[it_415]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_415]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_416=(_Bool)0;
                for(
                it2_417=list$1charp_begin(self->key_list) ,                0;                _for_condtionalA17=                !list$1charp_end(self->key_list) ,                _for_condtionalA17;                it2_417=list$1charp_next(self->key_list) ,                0                ){
                    if(_if_conditional447=optional$2boolbool_value(((struct optional$2boolbool*)(right_value520=string_equals(it2_417,key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value520),
                    (right_value520 && right_value520 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value520, 
                    __freed_obj__ = 0, 
                    _if_conditional447) {
                        same_key_exist_416=(_Bool)1;
                    }
                }
                if(_if_conditional448=!same_key_exist_416,                _if_conditional448) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result190__ = __result_obj__ = self;
                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                if(item && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result190__;
                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                if(item && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_397;
void* right_value515;
char** keys_398;
void* right_value516;
struct sGenericsFun** items_399;
void* right_value517;
_Bool* item_existance_400;
int len_401;
char* it_404;
_Bool _for_condtionalA16;
struct sGenericsFun* default_value_407;
struct sGenericsFun* it2_410;
unsigned int hash_411;
int n_412;
_Bool _while_condtional44;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
struct sGenericsFun* default_value_413;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_397, 0, sizeof(int));
memset(&right_value515, 0, sizeof(void*));
memset(&keys_398, 0, sizeof(char**));
memset(&right_value516, 0, sizeof(void*));
memset(&items_399, 0, sizeof(struct sGenericsFun**));
memset(&right_value517, 0, sizeof(void*));
memset(&item_existance_400, 0, sizeof(_Bool*));
memset(&len_401, 0, sizeof(int));
memset(&it_404, 0, sizeof(char*));
memset(&default_value_407, 0, sizeof(struct sGenericsFun*));
memset(&it2_410, 0, sizeof(struct sGenericsFun*));
memset(&hash_411, 0, sizeof(unsigned int));
memset(&n_412, 0, sizeof(int));
memset(&default_value_413, 0, sizeof(struct sGenericsFun*));
                        size_397=self->size*10;
                        keys_398=(char**)come_increment_ref_count(((char**)(right_value515=(char**)come_calloc(1, sizeof(char*)*(1*(size_397)), "./comelang2.h", 1377))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value515);
                        if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { right_value515 = come_decrement_ref_count(right_value515, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value515;
                        __freed_obj__ = 0;
                        items_399=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value516=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_397)), "./comelang2.h", 1378))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value516);
                        if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value516;
                        __freed_obj__ = 0;
                        item_existance_400=(_Bool*)come_increment_ref_count(((_Bool*)(right_value517=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_397)), "./comelang2.h", 1379))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value517);
                        if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { right_value517 = come_decrement_ref_count(right_value517, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value517;
                        __freed_obj__ = 0;
                        len_401=0;
                        for(
                        it_404=map$2charphsGenericsFunph_begin(self) ,                        0;                        _for_condtionalA16=                        !map$2charphsGenericsFunph_end(self) ,                        _for_condtionalA16;                        it_404=map$2charphsGenericsFunph_next(self) ,                        0                        ){
                            memset(&default_value_407,0,sizeof(struct sGenericsFun*));
                            it2_410=map$2charphsGenericsFunph_at(self,it_404,default_value_407);
                            hash_411=string_get_hash_key(it_404)%size_397;
                            n_412=hash_411;
                            while(_while_condtional44=(_Bool)1,                            _while_condtional44) {
                                if(_if_conditional436=item_existance_400[n_412],                                _if_conditional436) {
                                    n_412++;
                                    if(_if_conditional437=n_412>=size_397,                                    _if_conditional437) {
                                        n_412=0;
                                    }
                                    else {
                                        if(_if_conditional438=n_412==hash_411,                                        _if_conditional438) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_400[n_412]=(_Bool)1;
                                    keys_398[n_412]=it_404;
                                    items_399[n_412]=map$2charphsGenericsFunph_at(self,it_404,default_value_413);
                                    len_401++;
                                    break;
                                }
                            }
                        }
                        come_free_object((char*)self->items);
                        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                        come_free_object((char*)self->keys);
                        self->keys=keys_398;
                        self->items=items_399;
                        self->item_existance=item_existance_400;
                        self->size=size_397;
                        self->len=len_401;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional428;
char* result_402;
char* __result179__;
_Bool _if_conditional429;
char* __result180__;
char* result_403;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_402, 0, sizeof(char*));
memset(&result_403, 0, sizeof(char*));
                            if(_if_conditional428=self==((void*)0),                            _if_conditional428) {
                                memset(&result_402,0,sizeof(char*));
                                __result179__ = __result_obj__ = result_402;
                                return __result179__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(_if_conditional429=self->key_list->it,                            _if_conditional429) {
                                __result180__ = __result_obj__ = self->key_list->it->item;
                                return __result180__;
                            }
                            memset(&result_403,0,sizeof(char*));
                            __result181__ = __result_obj__ = result_403;
                            return __result181__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result182__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result182__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional430;
char* result_405;
char* __result183__;
_Bool _if_conditional431;
char* __result184__;
char* result_406;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_405, 0, sizeof(char*));
memset(&result_406, 0, sizeof(char*));
                            if(_if_conditional430=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional430) {
                                memset(&result_405,0,sizeof(char*));
                                __result183__ = __result_obj__ = result_405;
                                return __result183__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(_if_conditional431=self->key_list->it,                            _if_conditional431) {
                                __result184__ = __result_obj__ = self->key_list->it->item;
                                return __result184__;
                            }
                            memset(&result_406,0,sizeof(char*));
                            __result185__ = __result_obj__ = result_406;
                            return __result185__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_408;
unsigned int it_409;
_Bool _while_condtional43;
_Bool _if_conditional432;
void* right_value518;
_Bool _if_conditional433;
struct sGenericsFun* __result186__;
_Bool _if_conditional434;
_Bool _if_conditional435;
struct sGenericsFun* __result187__;
struct sGenericsFun* __result188__;
struct sGenericsFun* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_408, 0, sizeof(unsigned int));
memset(&it_409, 0, sizeof(unsigned int));
memset(&right_value518, 0, sizeof(void*));
                                hash_408=string_get_hash_key(((char*)key))%self->size;
                                it_409=hash_408;
                                while(_while_condtional43=(_Bool)1,                                _while_condtional43) {
                                    if(_if_conditional432=self->item_existance[it_409],                                    _if_conditional432) {
                                        if(_if_conditional433=optional$2boolbool_value(((struct optional$2boolbool*)(right_value518=string_equals(self->keys[it_409],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value518),
                                        (right_value518 && right_value518 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value518, 
                                        __freed_obj__ = 0, 
                                        _if_conditional433) {
                                            __result186__ = __result_obj__ = self->items[it_409];
                                            return __result186__;
                                        }
                                        it_409++;
                                        if(_if_conditional434=it_409>=self->size,                                        _if_conditional434) {
                                            it_409=0;
                                        }
                                        else {
                                            if(_if_conditional435=it_409==hash_408,                                            _if_conditional435) {
                                                __result187__ = __result_obj__ = default_value;
                                                return __result187__;
                                            }
                                        }
                                    }
                                    else {
                                        __result188__ = __result_obj__ = default_value;
                                        return __result188__;
                                    }
                                }
                                __result189__ = __result_obj__ = default_value;
                                return __result189__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* last_code_432;
char* __dec_obj124;
char* last_code2_433;
char* __dec_obj125;
char* last_code3_434;
char* __dec_obj126;
struct sClass* current_stack_frame_struct_435;
struct sFun* finalizer_436;
void* right_value571;
char* real_fun_name_437;
void* right_value572;
struct sType* type2_438;
struct sClass* klass_439;
_Bool _if_conditional477;
void* right_value573;
void* right_value574;
struct buffer* source_440;
struct list$1tuple2$2charphsTypephph* o2_saved_441;
struct tuple2$2charphsTypeph* it_444;
_Bool _for_condtionalA18;
struct tuple2$2charphsTypeph* multiple_assgin_var10;
char* name_447;
struct sType* field_type_448;
_Bool _if_conditional482;
_Bool _if_conditional483;
char* p_452;
int sline_453;
char* sname_454;
char* head_455;
struct buffer* source3_456;
struct buffer* __dec_obj127;
void* right_value575;
char* __dec_obj128;
void* right_value576;
struct sBlock* block_457;
void* right_value577;
void* right_value578;
struct sType* result_type_458;
void* right_value579;
char* name_459;
void* right_value580;
struct sType* self_type_460;
_Bool _if_conditional487;
struct sType* __list_values19___461[1];
void* right_value581;
void* right_value582;
struct list$1sTypeph* param_types_462;
void* right_value583;
char* __list_values20___463[1];
void* right_value584;
void* right_value585;
struct list$1charph* param_names_464;
void* right_value586;
void* right_value587;
struct list$1charph* param_default_parametors_465;
void* right_value588;
void* right_value589;
struct buffer* header_buf_466;
void* right_value590;
int i_467;
_Bool _for_condtionalA19;
struct sType* param_type_468;
char* param_name_472;
void* right_value591;
_Bool _if_conditional490;
void* right_value592;
void* right_value593;
void* right_value594;
void* right_value595;
struct sFun* fun_473;
void* right_value596;
struct sFun* fun2_474;
_Bool _if_conditional491;
void* right_value597;
void* right_value598;
void* right_value599;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value603;
struct sNode* node_476;
_Bool _if_conditional498;
struct buffer* __dec_obj131;
char* __dec_obj132;
char* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
void* right_value604;
void* right_value606;
struct tuple2$2sFunpcharph* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&last_code_432, 0, sizeof(char*));
memset(&last_code2_433, 0, sizeof(char*));
memset(&last_code3_434, 0, sizeof(char*));
memset(&current_stack_frame_struct_435, 0, sizeof(struct sClass*));
memset(&finalizer_436, 0, sizeof(struct sFun*));
memset(&right_value571, 0, sizeof(void*));
memset(&real_fun_name_437, 0, sizeof(char*));
memset(&right_value572, 0, sizeof(void*));
memset(&type2_438, 0, sizeof(struct sType*));
memset(&klass_439, 0, sizeof(struct sClass*));
memset(&right_value573, 0, sizeof(void*));
memset(&right_value574, 0, sizeof(void*));
memset(&source_440, 0, sizeof(struct buffer*));
memset(&o2_saved_441, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_444, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_447, 0, sizeof(char*));
memset(&field_type_448, 0, sizeof(struct sType*));
memset(&name_447, 0, sizeof(char*));
memset(&field_type_448, 0, sizeof(struct sType*));
memset(&p_452, 0, sizeof(char*));
memset(&sline_453, 0, sizeof(int));
memset(&sname_454, 0, sizeof(char*));
memset(&head_455, 0, sizeof(char*));
memset(&source3_456, 0, sizeof(struct buffer*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_value576, 0, sizeof(void*));
memset(&block_457, 0, sizeof(struct sBlock*));
memset(&right_value577, 0, sizeof(void*));
memset(&right_value578, 0, sizeof(void*));
memset(&result_type_458, 0, sizeof(struct sType*));
memset(&right_value579, 0, sizeof(void*));
memset(&name_459, 0, sizeof(char*));
memset(&right_value580, 0, sizeof(void*));
memset(&self_type_460, 0, sizeof(struct sType*));
memset(&right_value581, 0, sizeof(void*));
memset(&right_value582, 0, sizeof(void*));
memset(&param_types_462, 0, sizeof(struct list$1sTypeph*));
memset(&right_value583, 0, sizeof(void*));
memset(&right_value584, 0, sizeof(void*));
memset(&right_value585, 0, sizeof(void*));
memset(&param_names_464, 0, sizeof(struct list$1charph*));
memset(&right_value586, 0, sizeof(void*));
memset(&right_value587, 0, sizeof(void*));
memset(&param_default_parametors_465, 0, sizeof(struct list$1charph*));
memset(&right_value588, 0, sizeof(void*));
memset(&right_value589, 0, sizeof(void*));
memset(&header_buf_466, 0, sizeof(struct buffer*));
memset(&right_value590, 0, sizeof(void*));
memset(&i_467, 0, sizeof(int));
memset(&param_type_468, 0, sizeof(struct sType*));
memset(&param_name_472, 0, sizeof(char*));
memset(&right_value591, 0, sizeof(void*));
memset(&right_value592, 0, sizeof(void*));
memset(&right_value593, 0, sizeof(void*));
memset(&right_value594, 0, sizeof(void*));
memset(&right_value595, 0, sizeof(void*));
memset(&fun_473, 0, sizeof(struct sFun*));
memset(&right_value596, 0, sizeof(void*));
memset(&fun2_474, 0, sizeof(struct sFun*));
memset(&right_value597, 0, sizeof(void*));
memset(&right_value598, 0, sizeof(void*));
memset(&right_value599, 0, sizeof(void*));
memset(&right_value603, 0, sizeof(void*));
memset(&node_476, 0, sizeof(struct sNode*));
memset(&right_value604, 0, sizeof(void*));
memset(&right_value606, 0, sizeof(void*));
    last_code_432=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj124=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
    last_code2_433=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj125=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
    last_code3_434=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj126=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
    current_stack_frame_struct_435=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_436=((void*)0);
    real_fun_name_437=(char*)come_increment_ref_count(((char*)(right_value571=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value571);
    if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { right_value571 = come_decrement_ref_count(right_value571, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value571;
    __freed_obj__ = 0;
    type2_438=(struct sType*)come_increment_ref_count(((struct sType*)(right_value572=solve_generics(type,type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value572);
    if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value572;
    __freed_obj__ = 0;
    type=type2_438;
    klass_439=type->mClass;
    if(_if_conditional477=type->mPointerNum>0&&klass_439->mStruct,    _if_conditional477) {
        source_440=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value574=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value573=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1581))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value573);
        if(right_value573 && right_value573 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value573;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value574);
        if(right_value574 && right_value574 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value574;
        __freed_obj__ = 0;
        buffer_append_char(source_440,123);
        klass_439=map$2charphsClassphp_operator_load_element(info->classes,klass_439->mName);
        for(
        o2_saved_441=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_439->mFields)),it_444=list$1tuple2$2charphsTypephph_begin((o2_saved_441)) ,        0;        _for_condtionalA18=        !list$1tuple2$2charphsTypephph_end((o2_saved_441)) ,        _for_condtionalA18;        it_444=list$1tuple2$2charphsTypephph_next((o2_saved_441)) ,        0        ){
            multiple_assgin_var10=it_444;
            name_447=(char*)come_increment_ref_count(multiple_assgin_var10->v1);
            field_type_448=(struct sType*)come_increment_ref_count(multiple_assgin_var10->v2);
            if(_if_conditional482=string_operator_equals(type->mClass->mName,field_type_448->mClass->mName)&&type->mPointerNum==field_type_448->mPointerNum&&field_type_448->mHeap,            _if_conditional482) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(_if_conditional483=field_type_448->mHeap,            _if_conditional483) {
                char source2_449[1024];
                memset(&source2_449, 0, sizeof(char)                *(1024)                );
                snprintf(source2_449,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_447,name_447);
                buffer_append_str(source_440,source2_449);
            }
            if(name_447 && !__freed_obj__) { name_447 = come_decrement_ref_count(name_447, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_448 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_448, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_441 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_441, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_char(source_440,125);
        p_452=info->p;
        sline_453=info->sline;
        sname_454=(char*)come_increment_ref_count(info->sname);
        head_455=info->head;
        source3_456=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj127=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_440);
        if(__dec_obj127) { come_call_finalizer(buffer_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=source_440->buf;
        info->head=source_440->buf;
        __dec_obj128=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value575=__builtin_string(real_fun_name_437))));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value575);
        if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { right_value575 = come_decrement_ref_count(right_value575, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value575;
        __freed_obj__ = 0;
        info->sline=0;
        block_457=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value576=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value576);
        if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value576;
        __freed_obj__ = 0;
        result_type_458=(struct sType*)come_increment_ref_count(((struct sType*)(right_value578=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value577=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1620)))),"void",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value577);
        if(right_value577 && right_value577 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value577;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value578);
        if(right_value578 && right_value578 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value578;
        __freed_obj__ = 0;
        name_459=(char*)come_increment_ref_count(((char*)(right_value579=string_clone(real_fun_name_437))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value579);
        if(right_value579 && right_value579 != __result_obj__ && !__freed_obj__) { right_value579 = come_decrement_ref_count(right_value579, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value579;
        __freed_obj__ = 0;
        self_type_460=(struct sType*)come_increment_ref_count(((struct sType*)(right_value580=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value580);
        if(right_value580 && right_value580 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value580;
        __freed_obj__ = 0;
        self_type_460->mHeap=(_Bool)0;
        if(_if_conditional487=self_type_460->mPointerNum>1,        _if_conditional487) {
            self_type_460->mPointerNum=1;
        }
        {__list_values19___461[0]=come_increment_ref_count(self_type_460);
}        param_types_462=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value582=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value581=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1627)))),1,__list_values19___461))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value581);
        if(right_value581 && right_value581 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value581;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value582);
        if(right_value582 && right_value582 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value582;
        __freed_obj__ = 0;
        {__list_values20___463[0]=come_increment_ref_count(((char*)(right_value583=__builtin_string("self"))));
}        param_names_464=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value585=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value584=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1628)))),1,__list_values20___463))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value583);
        if(right_value583 && right_value583 != __result_obj__ && !__freed_obj__) { right_value583 = come_decrement_ref_count(right_value583, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value583;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value584);
        if(right_value584 && right_value584 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value584;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value585);
        if(right_value585 && right_value585 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value585;
        __freed_obj__ = 0;
        param_default_parametors_465=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value587=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value586=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1629))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value586);
        if(right_value586 && right_value586 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value586;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value587);
        if(right_value587 && right_value587 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value587;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_465,((void*)0));
        header_buf_466=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value589=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value588=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1632))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value588);
        if(right_value588 && right_value588 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value588;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value589);
        if(right_value589 && right_value589 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value589;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_466,((char*)(right_value590=make_come_type_name_string(result_type_458,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value590);
        if(right_value590 && right_value590 != __result_obj__ && !__freed_obj__) { right_value590 = come_decrement_ref_count(right_value590, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value590;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_466," ");
        buffer_append_str(header_buf_466,real_fun_name_437);
        buffer_append_str(header_buf_466,"(");
        for(
        i_467=0 ,        0;        _for_condtionalA19=        i_467<list$1sTypeph_length(param_types_462) ,        _for_condtionalA19;        i_467++ ,        0        ){
            param_type_468=list$1sTypephp_operator_load_element(param_types_462,i_467);
            param_name_472=list$1charphp_operator_load_element(param_names_464,i_467);
            buffer_append_str(header_buf_466,((char*)(right_value591=make_come_type_name_string(param_type_468,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value591);
            if(right_value591 && right_value591 != __result_obj__ && !__freed_obj__) { right_value591 = come_decrement_ref_count(right_value591, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value591;
            __freed_obj__ = 0;
            buffer_append_str(header_buf_466," ");
            buffer_append_str(header_buf_466,param_name_472);
            if(_if_conditional490=i_467!=list$1sTypeph_length(param_types_462)-1,            _if_conditional490) {
                buffer_append_str(header_buf_466,",");
            }
        }
        buffer_append_str(header_buf_466,")");
        result_type_458->mStatic=(_Bool)0;
        fun_473=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value595=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value592=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1655)))),(char*)come_increment_ref_count(name_459),(struct sType*)come_increment_ref_count(result_type_458),(struct list$1sTypeph*)come_increment_ref_count(param_types_462),(struct list$1charph*)come_increment_ref_count(param_names_464),(struct list$1charph*)come_increment_ref_count(param_default_parametors_465),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_457),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value593=buffer_to_string(header_buf_466)))),(char*)come_increment_ref_count(((char*)(right_value594=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value592);
        if(right_value592 && right_value592 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value592;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value593);
        if(right_value593 && right_value593 != __result_obj__ && !__freed_obj__) { right_value593 = come_decrement_ref_count(right_value593, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value593;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value594);
        if(right_value594 && right_value594 != __result_obj__ && !__freed_obj__) { right_value594 = come_decrement_ref_count(right_value594, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value594;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value595);
        if(right_value595 && right_value595 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value595;
        __freed_obj__ = 0;
        fun2_474=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value596=__builtin_string(fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value596);
        if(right_value596 && right_value596 != __result_obj__ && !__freed_obj__) { right_value596 = come_decrement_ref_count(right_value596, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value596;
        __freed_obj__ = 0;
        if(_if_conditional491=fun2_474==((void*)0)||fun2_474->mExternal,        _if_conditional491) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value597=string_clone(name_459)))),(struct sFun*)come_increment_ref_count(fun_473));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value597);
            if(right_value597 && right_value597 != __result_obj__ && !__freed_obj__) { right_value597 = come_decrement_ref_count(right_value597, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value597;
            __freed_obj__ = 0;
        }
        finalizer_436=fun_473;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1671);
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value599=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value598=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1671)))),(struct sFun*)come_increment_ref_count(fun_473),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunNode_finalize;
        _inf_value7->clone=(void*)sFunNode_clone;
        _inf_value7->compile=(void*)sFunNode_compile;
        _inf_value7->sline=(void*)sFunNode_sline;
        _inf_value7->sname=(void*)sFunNode_sname;
        _inf_value7->terminated=(void*)sFunNode_terminated;
        _inf_value7->kind=(void*)sFunNode_kind;
        node_476=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=_inf_value7)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value598);
        if(right_value598 && right_value598 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value598;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value599);
        if(right_value599 && right_value599 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value599;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value603);
        if(right_value603 && right_value603 != __result_obj__ && !__freed_obj__) { right_value603 = come_decrement_ref_count(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[25] = right_value603;
        __freed_obj__ = 0;
        if(_if_conditional498=!node_compile(node_476,info),        _if_conditional498) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj131=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_456);
        if(__dec_obj131) { come_call_finalizer(buffer_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=p_452;
        info->head=head_455;
        info->sline=sline_453;
        __dec_obj132=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_454);
        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
        if(source_440 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_440, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_454 && !__freed_obj__) { sname_454 = come_decrement_ref_count(sname_454, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_456 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_456, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_457 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_457, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_458 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_458, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_459 && !__freed_obj__) { name_459 = come_decrement_ref_count(name_459, (void*)0, (void*)0, 0, 0, 0); }
        if(self_type_460 && !__freed_obj__) { come_call_finalizer(sType_finalize,self_type_460, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_462 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_462, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_464 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_464, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_465 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_465, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_466 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_466, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_473 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_473, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_476 && !__freed_obj__) { node_476 = come_decrement_ref_count(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0, 0, 0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_435;
    __dec_obj133=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_432);
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
    __dec_obj134=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_433);
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
    __dec_obj135=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_434);
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
    __result215__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value606=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value604=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1691)))),finalizer_436,(char*)come_increment_ref_count(real_fun_name_437))));
    if(last_code_432 && !__freed_obj__) { last_code_432 = come_decrement_ref_count(last_code_432, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_433 && !__freed_obj__) { last_code2_433 = come_decrement_ref_count(last_code2_433, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_434 && !__freed_obj__) { last_code3_434 = come_decrement_ref_count(last_code3_434, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_437 && !__freed_obj__) { real_fun_name_437 = come_decrement_ref_count(real_fun_name_437, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_438 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_438, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value604);
    if(right_value604 && right_value604 != __result_obj__ && !__freed_obj__) { right_value604 = come_decrement_ref_count(right_value604, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value604;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value606);
    if(right_value606 && right_value606 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value606;
    __freed_obj__ = 0;
    return __result215__;
    if(last_code_432 && !__freed_obj__) { last_code_432 = come_decrement_ref_count(last_code_432, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_433 && !__freed_obj__) { last_code2_433 = come_decrement_ref_count(last_code2_433, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_434 && !__freed_obj__) { last_code3_434 = come_decrement_ref_count(last_code3_434, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_437 && !__freed_obj__) { real_fun_name_437 = come_decrement_ref_count(real_fun_name_437, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_438 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_438, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional478;
struct tuple2$2charphsTypeph* result_442;
struct tuple2$2charphsTypeph* __result202__;
_Bool _if_conditional479;
struct tuple2$2charphsTypeph* __result203__;
struct tuple2$2charphsTypeph* result_443;
struct tuple2$2charphsTypeph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_442, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_443, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional478=self==((void*)0),            _if_conditional478) {
                memset(&result_442,0,sizeof(struct tuple2$2charphsTypeph*));
                __result202__ = __result_obj__ = result_442;
                return __result202__;
            }
            self->it=self->head;
            if(_if_conditional479=self->it,            _if_conditional479) {
                __result203__ = __result_obj__ = self->it->item;
                return __result203__;
            }
            memset(&result_443,0,sizeof(struct tuple2$2charphsTypeph*));
            __result204__ = __result_obj__ = result_443;
            return __result204__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result205__ = self==((void*)0)||self->it==((void*)0);
            return __result205__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional480;
struct tuple2$2charphsTypeph* result_445;
struct tuple2$2charphsTypeph* __result206__;
_Bool _if_conditional481;
struct tuple2$2charphsTypeph* __result207__;
struct tuple2$2charphsTypeph* result_446;
struct tuple2$2charphsTypeph* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_445, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_446, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional480=self==((void*)0)||self->it==((void*)0),            _if_conditional480) {
                memset(&result_445,0,sizeof(struct tuple2$2charphsTypeph*));
                __result206__ = __result_obj__ = result_445;
                return __result206__;
            }
            self->it=self->it->next;
            if(_if_conditional481=self->it,            _if_conditional481) {
                __result207__ = __result_obj__ = self->it->item;
                return __result207__;
            }
            memset(&result_446,0,sizeof(struct tuple2$2charphsTypeph*));
            __result208__ = __result_obj__ = result_446;
            return __result208__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_450;
_Bool _while_condtional46;
struct list_item$1tuple2$2charphsTypephph* prev_it_451;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_450, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_451, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_450=self->head;
            while(_while_condtional46=it_450!=((void*)0),            _while_condtional46) {
                prev_it_451=it_450;
                it_450=it_450->next;
                if(prev_it_451 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_451, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional484;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional484=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional484) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional485;
_Bool _if_conditional486;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional485=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional485) {
                                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional486=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional486) {
                                if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result209__ = self->len;
            return __result209__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional488;
struct list_item$1charph* it_469;
int i_470;
_Bool _while_condtional47;
_Bool _if_conditional489;
char* __result210__;
char* default_value_471;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_469, 0, sizeof(struct list_item$1charph*));
memset(&i_470, 0, sizeof(int));
memset(&default_value_471, 0, sizeof(char*));
                if(_if_conditional488=position<0,                _if_conditional488) {
                    position+=self->len;
                }
                it_469=self->head;
                i_470=0;
                while(_while_condtional47=it_469!=((void*)0),                _while_condtional47) {
                    if(_if_conditional489=position==i_470,                    _if_conditional489) {
                        __result210__ = __result_obj__ = it_469->item;
                        return __result210__;
                    }
                    it_469=it_469->next;
                    i_470++;
                }
                memset(&default_value_471,0,sizeof(char*));
                __result211__ = __result_obj__ = default_value_471;
                if(default_value_471 && !__freed_obj__) { default_value_471 = come_decrement_ref_count(default_value_471, (void*)0, (void*)0, 0, 1, 0); }
                return __result211__;
                if(default_value_471 && !__freed_obj__) { default_value_471 = come_decrement_ref_count(default_value_471, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value605;
char* __dec_obj136;
struct tuple2$2sFunpcharph* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value605, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj136=self->v2;
        self->v2=(char*)come_increment_ref_count(((char*)(right_value605=string_clone(v2))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value605);
        if(right_value605 && right_value605 != __result_obj__ && !__freed_obj__) { right_value605 = come_decrement_ref_count(right_value605, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value605;
        __freed_obj__ = 0;
        __result214__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result214__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional499;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional499=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional499) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* last_code_477;
char* __dec_obj137;
char* last_code2_478;
char* __dec_obj138;
char* last_code3_479;
char* __dec_obj139;
struct sClass* current_stack_frame_struct_480;
struct sFun* finalizer_481;
void* right_value607;
char* real_fun_name_482;
void* right_value608;
struct sType* type2_483;
struct sClass* klass_484;
_Bool _if_conditional500;
void* right_value609;
void* right_value610;
struct buffer* source_485;
struct list$1tuple2$2charphsTypephph* o2_saved_486;
struct tuple2$2charphsTypeph* it_487;
_Bool _for_condtionalA20;
struct tuple2$2charphsTypeph* multiple_assgin_var11;
char* name_488;
struct sType* field_type_489;
_Bool _if_conditional501;
_Bool _if_conditional502;
char* p_491;
int sline_492;
char* sname_493;
char* head_494;
struct buffer* source3_495;
struct buffer* __dec_obj140;
void* right_value611;
char* __dec_obj141;
void* right_value612;
struct sBlock* block_496;
void* right_value613;
void* right_value614;
struct sType* result_type_497;
void* right_value615;
char* name_498;
void* right_value616;
struct sType* self_type_499;
_Bool _if_conditional503;
struct sType* __list_values21___500[1];
void* right_value617;
void* right_value618;
struct list$1sTypeph* param_types_501;
void* right_value619;
char* __list_values22___502[1];
void* right_value620;
void* right_value621;
struct list$1charph* param_names_503;
void* right_value622;
void* right_value623;
struct list$1charph* param_default_parametors_504;
void* right_value624;
void* right_value625;
struct buffer* header_buf_505;
void* right_value626;
int i_506;
_Bool _for_condtionalA21;
struct sType* param_type_507;
char* param_name_508;
void* right_value627;
_Bool _if_conditional504;
void* right_value628;
void* right_value629;
void* right_value630;
void* right_value631;
struct sFun* fun_509;
void* right_value632;
struct sFun* fun2_510;
_Bool _if_conditional505;
void* right_value633;
void* right_value634;
void* right_value635;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value639;
struct sNode* node_512;
_Bool _if_conditional512;
struct buffer* __dec_obj144;
char* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
char* __dec_obj148;
void* right_value640;
void* right_value641;
struct tuple2$2sFunpcharph* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&last_code_477, 0, sizeof(char*));
memset(&last_code2_478, 0, sizeof(char*));
memset(&last_code3_479, 0, sizeof(char*));
memset(&current_stack_frame_struct_480, 0, sizeof(struct sClass*));
memset(&finalizer_481, 0, sizeof(struct sFun*));
memset(&right_value607, 0, sizeof(void*));
memset(&real_fun_name_482, 0, sizeof(char*));
memset(&right_value608, 0, sizeof(void*));
memset(&type2_483, 0, sizeof(struct sType*));
memset(&klass_484, 0, sizeof(struct sClass*));
memset(&right_value609, 0, sizeof(void*));
memset(&right_value610, 0, sizeof(void*));
memset(&source_485, 0, sizeof(struct buffer*));
memset(&o2_saved_486, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_487, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_488, 0, sizeof(char*));
memset(&field_type_489, 0, sizeof(struct sType*));
memset(&name_488, 0, sizeof(char*));
memset(&field_type_489, 0, sizeof(struct sType*));
memset(&p_491, 0, sizeof(char*));
memset(&sline_492, 0, sizeof(int));
memset(&sname_493, 0, sizeof(char*));
memset(&head_494, 0, sizeof(char*));
memset(&source3_495, 0, sizeof(struct buffer*));
memset(&right_value611, 0, sizeof(void*));
memset(&right_value612, 0, sizeof(void*));
memset(&block_496, 0, sizeof(struct sBlock*));
memset(&right_value613, 0, sizeof(void*));
memset(&right_value614, 0, sizeof(void*));
memset(&result_type_497, 0, sizeof(struct sType*));
memset(&right_value615, 0, sizeof(void*));
memset(&name_498, 0, sizeof(char*));
memset(&right_value616, 0, sizeof(void*));
memset(&self_type_499, 0, sizeof(struct sType*));
memset(&right_value617, 0, sizeof(void*));
memset(&right_value618, 0, sizeof(void*));
memset(&param_types_501, 0, sizeof(struct list$1sTypeph*));
memset(&right_value619, 0, sizeof(void*));
memset(&right_value620, 0, sizeof(void*));
memset(&right_value621, 0, sizeof(void*));
memset(&param_names_503, 0, sizeof(struct list$1charph*));
memset(&right_value622, 0, sizeof(void*));
memset(&right_value623, 0, sizeof(void*));
memset(&param_default_parametors_504, 0, sizeof(struct list$1charph*));
memset(&right_value624, 0, sizeof(void*));
memset(&right_value625, 0, sizeof(void*));
memset(&header_buf_505, 0, sizeof(struct buffer*));
memset(&right_value626, 0, sizeof(void*));
memset(&i_506, 0, sizeof(int));
memset(&param_type_507, 0, sizeof(struct sType*));
memset(&param_name_508, 0, sizeof(char*));
memset(&right_value627, 0, sizeof(void*));
memset(&right_value628, 0, sizeof(void*));
memset(&right_value629, 0, sizeof(void*));
memset(&right_value630, 0, sizeof(void*));
memset(&right_value631, 0, sizeof(void*));
memset(&fun_509, 0, sizeof(struct sFun*));
memset(&right_value632, 0, sizeof(void*));
memset(&fun2_510, 0, sizeof(struct sFun*));
memset(&right_value633, 0, sizeof(void*));
memset(&right_value634, 0, sizeof(void*));
memset(&right_value635, 0, sizeof(void*));
memset(&right_value639, 0, sizeof(void*));
memset(&node_512, 0, sizeof(struct sNode*));
memset(&right_value640, 0, sizeof(void*));
memset(&right_value641, 0, sizeof(void*));
    last_code_477=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj137=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
    last_code2_478=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj138=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
    last_code3_479=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj139=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
    current_stack_frame_struct_480=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_481=((void*)0);
    real_fun_name_482=(char*)come_increment_ref_count(((char*)(right_value607=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value607);
    if(right_value607 && right_value607 != __result_obj__ && !__freed_obj__) { right_value607 = come_decrement_ref_count(right_value607, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value607;
    __freed_obj__ = 0;
    type2_483=(struct sType*)come_increment_ref_count(((struct sType*)(right_value608=solve_generics(type,type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value608);
    if(right_value608 && right_value608 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value608;
    __freed_obj__ = 0;
    type=type2_483;
    klass_484=type->mClass;
    if(_if_conditional500=type->mPointerNum>0&&klass_484->mStruct,    _if_conditional500) {
        source_485=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value610=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value609=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1718))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value609);
        if(right_value609 && right_value609 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value609;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value610);
        if(right_value610 && right_value610 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value610;
        __freed_obj__ = 0;
        buffer_append_char(source_485,123);
        klass_484=map$2charphsClassphp_operator_load_element(info->classes,klass_484->mName);
        for(
        o2_saved_486=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_484->mFields)),it_487=list$1tuple2$2charphsTypephph_begin((o2_saved_486)) ,        0;        _for_condtionalA20=        !list$1tuple2$2charphsTypephph_end((o2_saved_486)) ,        _for_condtionalA20;        it_487=list$1tuple2$2charphsTypephph_next((o2_saved_486)) ,        0        ){
            multiple_assgin_var11=it_487;
            name_488=(char*)come_increment_ref_count(multiple_assgin_var11->v1);
            field_type_489=(struct sType*)come_increment_ref_count(multiple_assgin_var11->v2);
            if(_if_conditional501=string_operator_equals(type->mClass->mName,field_type_489->mClass->mName)&&type->mPointerNum==field_type_489->mPointerNum&&field_type_489->mHeap,            _if_conditional501) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(_if_conditional502=field_type_489->mHeap,            _if_conditional502) {
                char source2_490[1024];
                memset(&source2_490, 0, sizeof(char)                *(1024)                );
                snprintf(source2_490,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_488,name_488);
                buffer_append_str(source_485,source2_490);
            }
            if(name_488 && !__freed_obj__) { name_488 = come_decrement_ref_count(name_488, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_489 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_489, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_486 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_486, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_char(source_485,125);
        p_491=info->p;
        sline_492=info->sline;
        sname_493=(char*)come_increment_ref_count(info->sname);
        head_494=info->head;
        source3_495=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj140=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_485);
        if(__dec_obj140) { come_call_finalizer(buffer_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=source_485->buf;
        info->head=source_485->buf;
        __dec_obj141=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value611=__builtin_string(real_fun_name_482))));
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value611);
        if(right_value611 && right_value611 != __result_obj__ && !__freed_obj__) { right_value611 = come_decrement_ref_count(right_value611, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value611;
        __freed_obj__ = 0;
        info->sline=0;
        block_496=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value612=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value612);
        if(right_value612 && right_value612 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value612;
        __freed_obj__ = 0;
        result_type_497=(struct sType*)come_increment_ref_count(((struct sType*)(right_value614=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value613=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1757)))),"void",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value613);
        if(right_value613 && right_value613 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value613;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value614);
        if(right_value614 && right_value614 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value614;
        __freed_obj__ = 0;
        name_498=(char*)come_increment_ref_count(((char*)(right_value615=string_clone(real_fun_name_482))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value615);
        if(right_value615 && right_value615 != __result_obj__ && !__freed_obj__) { right_value615 = come_decrement_ref_count(right_value615, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value615;
        __freed_obj__ = 0;
        self_type_499=(struct sType*)come_increment_ref_count(((struct sType*)(right_value616=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value616);
        if(right_value616 && right_value616 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value616;
        __freed_obj__ = 0;
        self_type_499->mHeap=(_Bool)0;
        if(_if_conditional503=self_type_499->mPointerNum>1,        _if_conditional503) {
            self_type_499->mPointerNum=1;
        }
        {__list_values21___500[0]=come_increment_ref_count(self_type_499);
}        param_types_501=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value618=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value617=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1764)))),1,__list_values21___500))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value617);
        if(right_value617 && right_value617 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value617;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value618);
        if(right_value618 && right_value618 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value618;
        __freed_obj__ = 0;
        {__list_values22___502[0]=come_increment_ref_count(((char*)(right_value619=__builtin_string("self"))));
}        param_names_503=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value621=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value620=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1765)))),1,__list_values22___502))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value619);
        if(right_value619 && right_value619 != __result_obj__ && !__freed_obj__) { right_value619 = come_decrement_ref_count(right_value619, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value619;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value620);
        if(right_value620 && right_value620 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value620;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value621);
        if(right_value621 && right_value621 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value621;
        __freed_obj__ = 0;
        param_default_parametors_504=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value623=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value622=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1766))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value622);
        if(right_value622 && right_value622 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value622;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value623);
        if(right_value623 && right_value623 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value623;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_504,((void*)0));
        header_buf_505=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value625=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value624=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1769))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value624);
        if(right_value624 && right_value624 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value624;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value625);
        if(right_value625 && right_value625 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value625;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_505,((char*)(right_value626=make_come_type_name_string(result_type_497,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value626);
        if(right_value626 && right_value626 != __result_obj__ && !__freed_obj__) { right_value626 = come_decrement_ref_count(right_value626, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value626;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_505," ");
        buffer_append_str(header_buf_505,real_fun_name_482);
        buffer_append_str(header_buf_505,"(");
        for(
        i_506=0 ,        0;        _for_condtionalA21=        i_506<list$1sTypeph_length(param_types_501) ,        _for_condtionalA21;        i_506++ ,        0        ){
            param_type_507=list$1sTypephp_operator_load_element(param_types_501,i_506);
            param_name_508=list$1charphp_operator_load_element(param_names_503,i_506);
            buffer_append_str(header_buf_505,((char*)(right_value627=make_come_type_name_string(param_type_507,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value627);
            if(right_value627 && right_value627 != __result_obj__ && !__freed_obj__) { right_value627 = come_decrement_ref_count(right_value627, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value627;
            __freed_obj__ = 0;
            buffer_append_str(header_buf_505," ");
            buffer_append_str(header_buf_505,param_name_508);
            if(_if_conditional504=i_506!=list$1sTypeph_length(param_types_501)-1,            _if_conditional504) {
                buffer_append_str(header_buf_505,",");
            }
        }
        buffer_append_str(header_buf_505,")");
        result_type_497->mStatic=(_Bool)0;
        fun_509=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value631=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value628=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1792)))),(char*)come_increment_ref_count(name_498),(struct sType*)come_increment_ref_count(result_type_497),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_503),(struct list$1charph*)come_increment_ref_count(param_default_parametors_504),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_496),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value629=buffer_to_string(header_buf_505)))),(char*)come_increment_ref_count(((char*)(right_value630=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value628);
        if(right_value628 && right_value628 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value628;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value629);
        if(right_value629 && right_value629 != __result_obj__ && !__freed_obj__) { right_value629 = come_decrement_ref_count(right_value629, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value629;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value630);
        if(right_value630 && right_value630 != __result_obj__ && !__freed_obj__) { right_value630 = come_decrement_ref_count(right_value630, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value630;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value631);
        if(right_value631 && right_value631 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value631;
        __freed_obj__ = 0;
        fun2_510=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value632=__builtin_string(fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value632);
        if(right_value632 && right_value632 != __result_obj__ && !__freed_obj__) { right_value632 = come_decrement_ref_count(right_value632, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value632;
        __freed_obj__ = 0;
        if(_if_conditional505=fun2_510==((void*)0)||fun2_510->mExternal,        _if_conditional505) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value633=string_clone(name_498)))),(struct sFun*)come_increment_ref_count(fun_509));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value633);
            if(right_value633 && right_value633 != __result_obj__ && !__freed_obj__) { right_value633 = come_decrement_ref_count(right_value633, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value633;
            __freed_obj__ = 0;
        }
        finalizer_481=fun_509;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1808);
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value635=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value634=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1808)))),(struct sFun*)come_increment_ref_count(fun_509),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_512=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=_inf_value8)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value634);
        if(right_value634 && right_value634 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value634;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value635);
        if(right_value635 && right_value635 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value635;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value639);
        if(right_value639 && right_value639 != __result_obj__ && !__freed_obj__) { right_value639 = come_decrement_ref_count(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[25] = right_value639;
        __freed_obj__ = 0;
        if(_if_conditional512=!node_compile(node_512,info),        _if_conditional512) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj144=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_495);
        if(__dec_obj144) { come_call_finalizer(buffer_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=p_491;
        info->head=head_494;
        info->sline=sline_492;
        __dec_obj145=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_493);
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
        if(source_485 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_485, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_493 && !__freed_obj__) { sname_493 = come_decrement_ref_count(sname_493, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_495 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_495, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_496 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_496, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_497 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_497, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_498 && !__freed_obj__) { name_498 = come_decrement_ref_count(name_498, (void*)0, (void*)0, 0, 0, 0); }
        if(self_type_499 && !__freed_obj__) { come_call_finalizer(sType_finalize,self_type_499, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_501 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_501, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_503 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_503, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_504 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_504, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_505 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_505, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_509 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_509, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_512 && !__freed_obj__) { node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0, 0, 0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_480;
    __dec_obj146=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_477);
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
    __dec_obj147=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_478);
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
    __dec_obj148=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_479);
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
    __result218__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value641=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value640=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1828)))),finalizer_481,(char*)come_increment_ref_count(real_fun_name_482))));
    if(last_code_477 && !__freed_obj__) { last_code_477 = come_decrement_ref_count(last_code_477, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_478 && !__freed_obj__) { last_code2_478 = come_decrement_ref_count(last_code2_478, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_479 && !__freed_obj__) { last_code3_479 = come_decrement_ref_count(last_code3_479, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_482 && !__freed_obj__) { real_fun_name_482 = come_decrement_ref_count(real_fun_name_482, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_483 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_483, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value640);
    if(right_value640 && right_value640 != __result_obj__ && !__freed_obj__) { right_value640 = come_decrement_ref_count(right_value640, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value640;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value641);
    if(right_value641 && right_value641 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value641;
    __freed_obj__ = 0;
    return __result218__;
    if(last_code_477 && !__freed_obj__) { last_code_477 = come_decrement_ref_count(last_code_477, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_478 && !__freed_obj__) { last_code2_478 = come_decrement_ref_count(last_code2_478, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_479 && !__freed_obj__) { last_code3_479 = come_decrement_ref_count(last_code3_479, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_482 && !__freed_obj__) { real_fun_name_482 = come_decrement_ref_count(real_fun_name_482, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_483 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_483, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* last_code_513;
char* __dec_obj149;
char* last_code2_514;
char* __dec_obj150;
char* last_code3_515;
char* __dec_obj151;
struct sClass* current_stack_frame_struct_516;
struct sFun* equaler_517;
void* right_value642;
char* real_fun_name_518;
void* right_value643;
struct sType* type2_519;
struct sClass* klass_520;
_Bool _if_conditional513;
void* right_value644;
void* right_value645;
struct buffer* source_521;
_Bool _if_conditional514;
char* name_522;
struct list$1tuple2$2charphsTypephph* o2_saved_524;
struct tuple2$2charphsTypeph* it_525;
_Bool _for_condtionalA22;
struct tuple2$2charphsTypeph* multiple_assgin_var12;
char* name_526;
struct sType* field_type_527;
_Bool _if_conditional515;
char* p_529;
int sline_530;
char* sname_531;
char* head_532;
struct buffer* source3_533;
struct buffer* __dec_obj152;
void* right_value646;
char* __dec_obj153;
void* right_value647;
struct sBlock* block_534;
void* right_value648;
void* right_value649;
struct sType* result_type_535;
void* right_value650;
char* name_536;
void* right_value651;
struct sType* left_type_537;
void* right_value652;
struct sType* right_type_538;
struct sType* __list_values23___539[2];
void* right_value653;
void* right_value654;
struct list$1sTypeph* param_types_540;
void* right_value655;
void* right_value656;
char* __list_values24___541[2];
void* right_value657;
void* right_value658;
struct list$1charph* param_names_542;
void* right_value659;
void* right_value660;
struct list$1charph* param_default_parametors_543;
void* right_value661;
void* right_value662;
struct buffer* header_buf_544;
void* right_value663;
int i_545;
_Bool _for_condtionalA23;
struct sType* param_type_546;
char* param_name_547;
void* right_value664;
_Bool _if_conditional516;
void* right_value665;
void* right_value666;
void* right_value667;
void* right_value668;
struct sFun* fun_548;
void* right_value669;
struct sFun* fun2_549;
_Bool _if_conditional517;
void* right_value670;
void* right_value671;
void* right_value672;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value676;
struct sNode* node_551;
_Bool _if_conditional524;
struct buffer* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
void* right_value677;
void* right_value678;
struct tuple2$2sFunpcharph* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&last_code_513, 0, sizeof(char*));
memset(&last_code2_514, 0, sizeof(char*));
memset(&last_code3_515, 0, sizeof(char*));
memset(&current_stack_frame_struct_516, 0, sizeof(struct sClass*));
memset(&equaler_517, 0, sizeof(struct sFun*));
memset(&right_value642, 0, sizeof(void*));
memset(&real_fun_name_518, 0, sizeof(char*));
memset(&right_value643, 0, sizeof(void*));
memset(&type2_519, 0, sizeof(struct sType*));
memset(&klass_520, 0, sizeof(struct sClass*));
memset(&right_value644, 0, sizeof(void*));
memset(&right_value645, 0, sizeof(void*));
memset(&source_521, 0, sizeof(struct buffer*));
memset(&name_522, 0, sizeof(char*));
memset(&o2_saved_524, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_525, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_526, 0, sizeof(char*));
memset(&field_type_527, 0, sizeof(struct sType*));
memset(&name_526, 0, sizeof(char*));
memset(&field_type_527, 0, sizeof(struct sType*));
memset(&p_529, 0, sizeof(char*));
memset(&sline_530, 0, sizeof(int));
memset(&sname_531, 0, sizeof(char*));
memset(&head_532, 0, sizeof(char*));
memset(&source3_533, 0, sizeof(struct buffer*));
memset(&right_value646, 0, sizeof(void*));
memset(&right_value647, 0, sizeof(void*));
memset(&block_534, 0, sizeof(struct sBlock*));
memset(&right_value648, 0, sizeof(void*));
memset(&right_value649, 0, sizeof(void*));
memset(&result_type_535, 0, sizeof(struct sType*));
memset(&right_value650, 0, sizeof(void*));
memset(&name_536, 0, sizeof(char*));
memset(&right_value651, 0, sizeof(void*));
memset(&left_type_537, 0, sizeof(struct sType*));
memset(&right_value652, 0, sizeof(void*));
memset(&right_type_538, 0, sizeof(struct sType*));
memset(&right_value653, 0, sizeof(void*));
memset(&right_value654, 0, sizeof(void*));
memset(&param_types_540, 0, sizeof(struct list$1sTypeph*));
memset(&right_value655, 0, sizeof(void*));
memset(&right_value656, 0, sizeof(void*));
memset(&right_value657, 0, sizeof(void*));
memset(&right_value658, 0, sizeof(void*));
memset(&param_names_542, 0, sizeof(struct list$1charph*));
memset(&right_value659, 0, sizeof(void*));
memset(&right_value660, 0, sizeof(void*));
memset(&param_default_parametors_543, 0, sizeof(struct list$1charph*));
memset(&right_value661, 0, sizeof(void*));
memset(&right_value662, 0, sizeof(void*));
memset(&header_buf_544, 0, sizeof(struct buffer*));
memset(&right_value663, 0, sizeof(void*));
memset(&i_545, 0, sizeof(int));
memset(&param_type_546, 0, sizeof(struct sType*));
memset(&param_name_547, 0, sizeof(char*));
memset(&right_value664, 0, sizeof(void*));
memset(&right_value665, 0, sizeof(void*));
memset(&right_value666, 0, sizeof(void*));
memset(&right_value667, 0, sizeof(void*));
memset(&right_value668, 0, sizeof(void*));
memset(&fun_548, 0, sizeof(struct sFun*));
memset(&right_value669, 0, sizeof(void*));
memset(&fun2_549, 0, sizeof(struct sFun*));
memset(&right_value670, 0, sizeof(void*));
memset(&right_value671, 0, sizeof(void*));
memset(&right_value672, 0, sizeof(void*));
memset(&right_value676, 0, sizeof(void*));
memset(&node_551, 0, sizeof(struct sNode*));
memset(&right_value677, 0, sizeof(void*));
memset(&right_value678, 0, sizeof(void*));
    last_code_513=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj149=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
    last_code2_514=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj150=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
    last_code3_515=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj151=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
    current_stack_frame_struct_516=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_517=((void*)0);
    real_fun_name_518=(char*)come_increment_ref_count(((char*)(right_value642=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value642);
    if(right_value642 && right_value642 != __result_obj__ && !__freed_obj__) { right_value642 = come_decrement_ref_count(right_value642, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value642;
    __freed_obj__ = 0;
    type2_519=(struct sType*)come_increment_ref_count(((struct sType*)(right_value643=solve_generics(type,type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value643);
    if(right_value643 && right_value643 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value643;
    __freed_obj__ = 0;
    type=type2_519;
    klass_520=type->mClass;
    if(_if_conditional513=type->mPointerNum>0&&!klass_520->mNumber,    _if_conditional513) {
        source_521=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value645=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value644=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1853))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value644);
        if(right_value644 && right_value644 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value644;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value645);
        if(right_value645 && right_value645 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value645;
        __freed_obj__ = 0;
        buffer_append_char(source_521,123);
        if(_if_conditional514=klass_520->mProtocol,        _if_conditional514) {
            name_522="_protocol_obj";
            char source2_523[1024];
            memset(&source2_523, 0, sizeof(char)            *(1024)            );
            snprintf(source2_523,1024,"return left.%s.equals(right.%s);\n",name_522,name_522);
            buffer_append_str(source_521,source2_523);
        }
        else {
            klass_520=map$2charphsClassphp_operator_load_element(info->classes,klass_520->mName);
            for(
            o2_saved_524=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_520->mFields)),it_525=list$1tuple2$2charphsTypephph_begin((o2_saved_524)) ,            0;            _for_condtionalA22=            !list$1tuple2$2charphsTypephph_end((o2_saved_524)) ,            _for_condtionalA22;            it_525=list$1tuple2$2charphsTypephph_next((o2_saved_524)) ,            0            ){
                multiple_assgin_var12=it_525;
                name_526=(char*)come_increment_ref_count(multiple_assgin_var12->v1);
                field_type_527=(struct sType*)come_increment_ref_count(multiple_assgin_var12->v2);
                if(_if_conditional515=string_operator_equals(type->mClass->mName,field_type_527->mClass->mName)&&type->mPointerNum==field_type_527->mPointerNum&&field_type_527->mHeap,                _if_conditional515) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_528[1024];
                memset(&source2_528, 0, sizeof(char)                *(1024)                );
                snprintf(source2_528,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_526,name_526);
                buffer_append_str(source_521,source2_528);
                if(name_526 && !__freed_obj__) { name_526 = come_decrement_ref_count(name_526, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type_527 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_527, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_524 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_524, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        buffer_append_str(source_521,"return true;");
        buffer_append_char(source_521,125);
        p_529=info->p;
        sline_530=info->sline;
        sname_531=(char*)come_increment_ref_count(info->sname);
        head_532=info->head;
        source3_533=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj152=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_521);
        if(__dec_obj152) { come_call_finalizer(buffer_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=source_521->buf;
        info->head=source_521->buf;
        __dec_obj153=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value646=__builtin_string(real_fun_name_518))));
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value646);
        if(right_value646 && right_value646 != __result_obj__ && !__freed_obj__) { right_value646 = come_decrement_ref_count(right_value646, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value646;
        __freed_obj__ = 0;
        info->sline=0;
        block_534=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value647=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value647);
        if(right_value647 && right_value647 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value647;
        __freed_obj__ = 0;
        result_type_535=(struct sType*)come_increment_ref_count(((struct sType*)(right_value649=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value648=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1899)))),"bool",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value648);
        if(right_value648 && right_value648 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value648;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value649);
        if(right_value649 && right_value649 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value649;
        __freed_obj__ = 0;
        name_536=(char*)come_increment_ref_count(((char*)(right_value650=string_clone(real_fun_name_518))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value650);
        if(right_value650 && right_value650 != __result_obj__ && !__freed_obj__) { right_value650 = come_decrement_ref_count(right_value650, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value650;
        __freed_obj__ = 0;
        left_type_537=(struct sType*)come_increment_ref_count(((struct sType*)(right_value651=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value651);
        if(right_value651 && right_value651 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value651;
        __freed_obj__ = 0;
        left_type_537->mHeap=(_Bool)0;
        right_type_538=(struct sType*)come_increment_ref_count(((struct sType*)(right_value652=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value652);
        if(right_value652 && right_value652 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value652;
        __freed_obj__ = 0;
        right_type_538->mHeap=(_Bool)0;
        {__list_values23___539[0]=come_increment_ref_count(left_type_537);
__list_values23___539[1]=come_increment_ref_count(right_type_538);
}        param_types_540=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value654=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value653=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1905)))),2,__list_values23___539))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value653);
        if(right_value653 && right_value653 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value653;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value654);
        if(right_value654 && right_value654 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value654;
        __freed_obj__ = 0;
        {__list_values24___541[0]=come_increment_ref_count(((char*)(right_value655=__builtin_string("left"))));
__list_values24___541[1]=come_increment_ref_count(((char*)(right_value656=__builtin_string("right"))));
}        param_names_542=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value658=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value657=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1906)))),2,__list_values24___541))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value655);
        if(right_value655 && right_value655 != __result_obj__ && !__freed_obj__) { right_value655 = come_decrement_ref_count(right_value655, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value655;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value656);
        if(right_value656 && right_value656 != __result_obj__ && !__freed_obj__) { right_value656 = come_decrement_ref_count(right_value656, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value656;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value657);
        if(right_value657 && right_value657 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value657;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value658);
        if(right_value658 && right_value658 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value658;
        __freed_obj__ = 0;
        param_default_parametors_543=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value660=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value659=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1907))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value659);
        if(right_value659 && right_value659 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value659;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value660);
        if(right_value660 && right_value660 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value660;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_543,((void*)0));
        list$1charph_push_back(param_default_parametors_543,((void*)0));
        header_buf_544=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value662=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value661=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1911))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value661);
        if(right_value661 && right_value661 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value661;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value662);
        if(right_value662 && right_value662 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value662;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_544,((char*)(right_value663=make_come_type_name_string(result_type_535,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value663);
        if(right_value663 && right_value663 != __result_obj__ && !__freed_obj__) { right_value663 = come_decrement_ref_count(right_value663, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value663;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_544," ");
        buffer_append_str(header_buf_544,real_fun_name_518);
        buffer_append_str(header_buf_544,"(");
        for(
        i_545=0 ,        0;        _for_condtionalA23=        i_545<list$1sTypeph_length(param_types_540) ,        _for_condtionalA23;        i_545++ ,        0        ){
            param_type_546=list$1sTypephp_operator_load_element(param_types_540,i_545);
            param_name_547=list$1charphp_operator_load_element(param_names_542,i_545);
            buffer_append_str(header_buf_544,((char*)(right_value664=make_come_type_name_string(param_type_546,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value664);
            if(right_value664 && right_value664 != __result_obj__ && !__freed_obj__) { right_value664 = come_decrement_ref_count(right_value664, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value664;
            __freed_obj__ = 0;
            buffer_append_str(header_buf_544," ");
            buffer_append_str(header_buf_544,param_name_547);
            if(_if_conditional516=i_545!=list$1sTypeph_length(param_types_540)-1,            _if_conditional516) {
                buffer_append_str(header_buf_544,",");
            }
        }
        buffer_append_str(header_buf_544,")");
        result_type_535->mStatic=(_Bool)0;
        fun_548=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value668=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value665=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1934)))),(char*)come_increment_ref_count(name_536),(struct sType*)come_increment_ref_count(result_type_535),(struct list$1sTypeph*)come_increment_ref_count(param_types_540),(struct list$1charph*)come_increment_ref_count(param_names_542),(struct list$1charph*)come_increment_ref_count(param_default_parametors_543),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_534),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value666=buffer_to_string(header_buf_544)))),(char*)come_increment_ref_count(((char*)(right_value667=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value665);
        if(right_value665 && right_value665 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value665;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value666);
        if(right_value666 && right_value666 != __result_obj__ && !__freed_obj__) { right_value666 = come_decrement_ref_count(right_value666, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value666;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value667);
        if(right_value667 && right_value667 != __result_obj__ && !__freed_obj__) { right_value667 = come_decrement_ref_count(right_value667, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value667;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value668);
        if(right_value668 && right_value668 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value668;
        __freed_obj__ = 0;
        fun2_549=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value669=__builtin_string(fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value669);
        if(right_value669 && right_value669 != __result_obj__ && !__freed_obj__) { right_value669 = come_decrement_ref_count(right_value669, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value669;
        __freed_obj__ = 0;
        if(_if_conditional517=fun2_549==((void*)0)||fun2_549->mExternal,        _if_conditional517) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value670=string_clone(name_536)))),(struct sFun*)come_increment_ref_count(fun_548));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value670);
            if(right_value670 && right_value670 != __result_obj__ && !__freed_obj__) { right_value670 = come_decrement_ref_count(right_value670, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value670;
            __freed_obj__ = 0;
        }
        equaler_517=fun_548;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1950);
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value672=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value671=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1950)))),(struct sFun*)come_increment_ref_count(fun_548),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_551=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value676=_inf_value9)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value671);
        if(right_value671 && right_value671 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value671;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value672);
        if(right_value672 && right_value672 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value672;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value676);
        if(right_value676 && right_value676 != __result_obj__ && !__freed_obj__) { right_value676 = come_decrement_ref_count(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[27] = right_value676;
        __freed_obj__ = 0;
        if(_if_conditional524=!node_compile(node_551,info),        _if_conditional524) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj156=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_533);
        if(__dec_obj156) { come_call_finalizer(buffer_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=p_529;
        info->head=head_532;
        info->sline=sline_530;
        __dec_obj157=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_531);
        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
        if(source_521 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_521, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_531 && !__freed_obj__) { sname_531 = come_decrement_ref_count(sname_531, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_533 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_533, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_534 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_534, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_535 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_535, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_536 && !__freed_obj__) { name_536 = come_decrement_ref_count(name_536, (void*)0, (void*)0, 0, 0, 0); }
        if(left_type_537 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_537, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_type_538 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type_538, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_540 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_540, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_542 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_542, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_543 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_543, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_544 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_544, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_548 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_548, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_551 && !__freed_obj__) { node_551 = come_decrement_ref_count(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_516;
    __dec_obj158=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_513);
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
    __dec_obj159=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_514);
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0,0); }
    __dec_obj160=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_515);
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
    __result221__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value678=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value677=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1970)))),equaler_517,(char*)come_increment_ref_count(real_fun_name_518))));
    if(last_code_513 && !__freed_obj__) { last_code_513 = come_decrement_ref_count(last_code_513, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_514 && !__freed_obj__) { last_code2_514 = come_decrement_ref_count(last_code2_514, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_515 && !__freed_obj__) { last_code3_515 = come_decrement_ref_count(last_code3_515, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_518 && !__freed_obj__) { real_fun_name_518 = come_decrement_ref_count(real_fun_name_518, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_519 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_519, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value677);
    if(right_value677 && right_value677 != __result_obj__ && !__freed_obj__) { right_value677 = come_decrement_ref_count(right_value677, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value677;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value678);
    if(right_value678 && right_value678 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value678;
    __freed_obj__ = 0;
    return __result221__;
    if(last_code_513 && !__freed_obj__) { last_code_513 = come_decrement_ref_count(last_code_513, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_514 && !__freed_obj__) { last_code2_514 = come_decrement_ref_count(last_code2_514, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_515 && !__freed_obj__) { last_code3_515 = come_decrement_ref_count(last_code3_515, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_518 && !__freed_obj__) { real_fun_name_518 = come_decrement_ref_count(real_fun_name_518, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_519 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_519, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* last_code_552;
char* __dec_obj161;
char* last_code2_553;
char* __dec_obj162;
char* last_code3_554;
char* __dec_obj163;
struct sClass* current_stack_frame_struct_555;
struct sFun* equaler_556;
void* right_value679;
char* real_fun_name_557;
void* right_value680;
struct sType* type2_558;
struct sClass* klass_559;
_Bool _if_conditional525;
void* right_value681;
void* right_value682;
struct buffer* source_560;
_Bool _if_conditional526;
char* name_561;
int i_564;
struct list$1tuple2$2charphsTypephph* o2_saved_565;
struct tuple2$2charphsTypeph* it_566;
_Bool _for_condtionalA24;
struct tuple2$2charphsTypeph* multiple_assgin_var13;
char* name_567;
struct sType* field_type_568;
_Bool _if_conditional527;
_Bool _if_conditional528;
char* p_572;
int sline_573;
char* sname_574;
char* head_575;
struct buffer* source3_576;
struct buffer* __dec_obj164;
void* right_value683;
char* __dec_obj165;
void* right_value684;
struct sBlock* block_577;
void* right_value685;
void* right_value686;
struct sType* result_type_578;
void* right_value687;
char* name_579;
void* right_value688;
struct sType* left_type_580;
void* right_value689;
struct sType* right_type_581;
struct sType* __list_values25___582[2];
void* right_value690;
void* right_value691;
struct list$1sTypeph* param_types_583;
void* right_value692;
void* right_value693;
char* __list_values26___584[2];
void* right_value694;
void* right_value695;
struct list$1charph* param_names_585;
void* right_value696;
void* right_value697;
struct list$1charph* param_default_parametors_586;
void* right_value698;
void* right_value699;
struct buffer* header_buf_587;
void* right_value700;
int i_588;
_Bool _for_condtionalA25;
struct sType* param_type_589;
char* param_name_590;
void* right_value701;
_Bool _if_conditional529;
void* right_value702;
void* right_value703;
void* right_value704;
void* right_value705;
struct sFun* fun_591;
void* right_value706;
struct sFun* fun2_592;
_Bool _if_conditional530;
void* right_value707;
void* right_value708;
void* right_value709;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value713;
struct sNode* node_594;
_Bool _if_conditional537;
struct buffer* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
char* __dec_obj171;
char* __dec_obj172;
void* right_value714;
void* right_value715;
struct tuple2$2sFunpcharph* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&last_code_552, 0, sizeof(char*));
memset(&last_code2_553, 0, sizeof(char*));
memset(&last_code3_554, 0, sizeof(char*));
memset(&current_stack_frame_struct_555, 0, sizeof(struct sClass*));
memset(&equaler_556, 0, sizeof(struct sFun*));
memset(&right_value679, 0, sizeof(void*));
memset(&real_fun_name_557, 0, sizeof(char*));
memset(&right_value680, 0, sizeof(void*));
memset(&type2_558, 0, sizeof(struct sType*));
memset(&klass_559, 0, sizeof(struct sClass*));
memset(&right_value681, 0, sizeof(void*));
memset(&right_value682, 0, sizeof(void*));
memset(&source_560, 0, sizeof(struct buffer*));
memset(&name_561, 0, sizeof(char*));
memset(&i_564, 0, sizeof(int));
memset(&o2_saved_565, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_566, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_567, 0, sizeof(char*));
memset(&field_type_568, 0, sizeof(struct sType*));
memset(&name_567, 0, sizeof(char*));
memset(&field_type_568, 0, sizeof(struct sType*));
memset(&p_572, 0, sizeof(char*));
memset(&sline_573, 0, sizeof(int));
memset(&sname_574, 0, sizeof(char*));
memset(&head_575, 0, sizeof(char*));
memset(&source3_576, 0, sizeof(struct buffer*));
memset(&right_value683, 0, sizeof(void*));
memset(&right_value684, 0, sizeof(void*));
memset(&block_577, 0, sizeof(struct sBlock*));
memset(&right_value685, 0, sizeof(void*));
memset(&right_value686, 0, sizeof(void*));
memset(&result_type_578, 0, sizeof(struct sType*));
memset(&right_value687, 0, sizeof(void*));
memset(&name_579, 0, sizeof(char*));
memset(&right_value688, 0, sizeof(void*));
memset(&left_type_580, 0, sizeof(struct sType*));
memset(&right_value689, 0, sizeof(void*));
memset(&right_type_581, 0, sizeof(struct sType*));
memset(&right_value690, 0, sizeof(void*));
memset(&right_value691, 0, sizeof(void*));
memset(&param_types_583, 0, sizeof(struct list$1sTypeph*));
memset(&right_value692, 0, sizeof(void*));
memset(&right_value693, 0, sizeof(void*));
memset(&right_value694, 0, sizeof(void*));
memset(&right_value695, 0, sizeof(void*));
memset(&param_names_585, 0, sizeof(struct list$1charph*));
memset(&right_value696, 0, sizeof(void*));
memset(&right_value697, 0, sizeof(void*));
memset(&param_default_parametors_586, 0, sizeof(struct list$1charph*));
memset(&right_value698, 0, sizeof(void*));
memset(&right_value699, 0, sizeof(void*));
memset(&header_buf_587, 0, sizeof(struct buffer*));
memset(&right_value700, 0, sizeof(void*));
memset(&i_588, 0, sizeof(int));
memset(&param_type_589, 0, sizeof(struct sType*));
memset(&param_name_590, 0, sizeof(char*));
memset(&right_value701, 0, sizeof(void*));
memset(&right_value702, 0, sizeof(void*));
memset(&right_value703, 0, sizeof(void*));
memset(&right_value704, 0, sizeof(void*));
memset(&right_value705, 0, sizeof(void*));
memset(&fun_591, 0, sizeof(struct sFun*));
memset(&right_value706, 0, sizeof(void*));
memset(&fun2_592, 0, sizeof(struct sFun*));
memset(&right_value707, 0, sizeof(void*));
memset(&right_value708, 0, sizeof(void*));
memset(&right_value709, 0, sizeof(void*));
memset(&right_value713, 0, sizeof(void*));
memset(&node_594, 0, sizeof(struct sNode*));
memset(&right_value714, 0, sizeof(void*));
memset(&right_value715, 0, sizeof(void*));
    last_code_552=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj161=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
    last_code2_553=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj162=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0,0); }
    last_code3_554=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj163=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
    current_stack_frame_struct_555=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_556=((void*)0);
    real_fun_name_557=(char*)come_increment_ref_count(((char*)(right_value679=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value679);
    if(right_value679 && right_value679 != __result_obj__ && !__freed_obj__) { right_value679 = come_decrement_ref_count(right_value679, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value679;
    __freed_obj__ = 0;
    type2_558=(struct sType*)come_increment_ref_count(((struct sType*)(right_value680=solve_generics(type,type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value680);
    if(right_value680 && right_value680 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value680;
    __freed_obj__ = 0;
    type=type2_558;
    klass_559=type->mClass;
    if(_if_conditional525=type->mPointerNum>0&&!klass_559->mNumber,    _if_conditional525) {
        source_560=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value682=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value681=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1995))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value681);
        if(right_value681 && right_value681 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value681;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value682);
        if(right_value682 && right_value682 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value682;
        __freed_obj__ = 0;
        buffer_append_char(source_560,123);
        if(_if_conditional526=klass_559->mProtocol,        _if_conditional526) {
            name_561="_protocol_obj";
            char source2_562[1024];
            memset(&source2_562, 0, sizeof(char)            *(1024)            );
            snprintf(source2_562,1024,"return !left.%s.equals(right.%s);\n",name_561,name_561);
            buffer_append_str(source_560,source2_562);
        }
        else {
            char source2_563[1024];
            memset(&source2_563, 0, sizeof(char)            *(1024)            );
            snprintf(source2_563,1024,"return !(");
            buffer_append_str(source_560,source2_563);
            i_564=0;
            klass_559=map$2charphsClassphp_operator_load_element(info->classes,klass_559->mName);
            for(
            o2_saved_565=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_559->mFields)),it_566=list$1tuple2$2charphsTypephph_begin((o2_saved_565)) ,            0;            _for_condtionalA24=            !list$1tuple2$2charphsTypephph_end((o2_saved_565)) ,            _for_condtionalA24;            it_566=list$1tuple2$2charphsTypephph_next((o2_saved_565)) ,            0            ){
                multiple_assgin_var13=it_566;
                name_567=(char*)come_increment_ref_count(multiple_assgin_var13->v1);
                field_type_568=(struct sType*)come_increment_ref_count(multiple_assgin_var13->v2);
                if(_if_conditional527=string_operator_equals(type->mClass->mName,field_type_568->mClass->mName)&&type->mPointerNum==field_type_568->mPointerNum&&field_type_568->mHeap,                _if_conditional527) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_569[1024];
                memset(&source2_569, 0, sizeof(char)                *(1024)                );
                snprintf(source2_569,1024,"left.%s.equals(right.%s)",name_567,name_567);
                buffer_append_str(source_560,source2_569);
                if(_if_conditional528=i_564==list$1tuple2$2charphsTypephph_length(klass_559->mFields)-1,                _if_conditional528) {
                    char source2_570[1024];
                    memset(&source2_570, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_570,1024,");");
                    buffer_append_str(source_560,source2_570);
                }
                else {
                    char source2_571[1024];
                    memset(&source2_571, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_571,1024," && ");
                    buffer_append_str(source_560,source2_571);
                }
                i_564++;
                if(name_567 && !__freed_obj__) { name_567 = come_decrement_ref_count(name_567, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type_568 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_568, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_565 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_565, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        buffer_append_char(source_560,125);
        p_572=info->p;
        sline_573=info->sline;
        sname_574=(char*)come_increment_ref_count(info->sname);
        head_575=info->head;
        source3_576=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj164=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_560);
        if(__dec_obj164) { come_call_finalizer(buffer_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=source_560->buf;
        info->head=source_560->buf;
        __dec_obj165=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value683=__builtin_string(real_fun_name_557))));
        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value683);
        if(right_value683 && right_value683 != __result_obj__ && !__freed_obj__) { right_value683 = come_decrement_ref_count(right_value683, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value683;
        __freed_obj__ = 0;
        info->sline=0;
        block_577=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value684=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value684);
        if(right_value684 && right_value684 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value684;
        __freed_obj__ = 0;
        result_type_578=(struct sType*)come_increment_ref_count(((struct sType*)(right_value686=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value685=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2058)))),"bool",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value685);
        if(right_value685 && right_value685 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value685;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value686);
        if(right_value686 && right_value686 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value686;
        __freed_obj__ = 0;
        name_579=(char*)come_increment_ref_count(((char*)(right_value687=string_clone(real_fun_name_557))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value687);
        if(right_value687 && right_value687 != __result_obj__ && !__freed_obj__) { right_value687 = come_decrement_ref_count(right_value687, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value687;
        __freed_obj__ = 0;
        left_type_580=(struct sType*)come_increment_ref_count(((struct sType*)(right_value688=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value688);
        if(right_value688 && right_value688 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value688;
        __freed_obj__ = 0;
        left_type_580->mHeap=(_Bool)0;
        right_type_581=(struct sType*)come_increment_ref_count(((struct sType*)(right_value689=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value689);
        if(right_value689 && right_value689 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value689;
        __freed_obj__ = 0;
        right_type_581->mHeap=(_Bool)0;
        {__list_values25___582[0]=come_increment_ref_count(left_type_580);
__list_values25___582[1]=come_increment_ref_count(right_type_581);
}        param_types_583=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value691=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value690=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2064)))),2,__list_values25___582))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value690);
        if(right_value690 && right_value690 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value690;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value691);
        if(right_value691 && right_value691 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value691;
        __freed_obj__ = 0;
        {__list_values26___584[0]=come_increment_ref_count(((char*)(right_value692=__builtin_string("left"))));
__list_values26___584[1]=come_increment_ref_count(((char*)(right_value693=__builtin_string("right"))));
}        param_names_585=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value695=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value694=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2065)))),2,__list_values26___584))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value692);
        if(right_value692 && right_value692 != __result_obj__ && !__freed_obj__) { right_value692 = come_decrement_ref_count(right_value692, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value692;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value693);
        if(right_value693 && right_value693 != __result_obj__ && !__freed_obj__) { right_value693 = come_decrement_ref_count(right_value693, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value693;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value694);
        if(right_value694 && right_value694 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value694;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value695);
        if(right_value695 && right_value695 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value695;
        __freed_obj__ = 0;
        param_default_parametors_586=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value697=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value696=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2066))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value696);
        if(right_value696 && right_value696 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value696;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value697);
        if(right_value697 && right_value697 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value697;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_586,((void*)0));
        list$1charph_push_back(param_default_parametors_586,((void*)0));
        header_buf_587=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value699=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value698=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2070))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value698);
        if(right_value698 && right_value698 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value698;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value699);
        if(right_value699 && right_value699 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value699;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_587,((char*)(right_value700=make_come_type_name_string(result_type_578,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value700);
        if(right_value700 && right_value700 != __result_obj__ && !__freed_obj__) { right_value700 = come_decrement_ref_count(right_value700, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value700;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_587," ");
        buffer_append_str(header_buf_587,real_fun_name_557);
        buffer_append_str(header_buf_587,"(");
        for(
        i_588=0 ,        0;        _for_condtionalA25=        i_588<list$1sTypeph_length(param_types_583) ,        _for_condtionalA25;        i_588++ ,        0        ){
            param_type_589=list$1sTypephp_operator_load_element(param_types_583,i_588);
            param_name_590=list$1charphp_operator_load_element(param_names_585,i_588);
            buffer_append_str(header_buf_587,((char*)(right_value701=make_come_type_name_string(param_type_589,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value701);
            if(right_value701 && right_value701 != __result_obj__ && !__freed_obj__) { right_value701 = come_decrement_ref_count(right_value701, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value701;
            __freed_obj__ = 0;
            buffer_append_str(header_buf_587," ");
            buffer_append_str(header_buf_587,param_name_590);
            if(_if_conditional529=i_588!=list$1sTypeph_length(param_types_583)-1,            _if_conditional529) {
                buffer_append_str(header_buf_587,",");
            }
        }
        buffer_append_str(header_buf_587,")");
        result_type_578->mStatic=(_Bool)0;
        fun_591=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value705=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value702=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2093)))),(char*)come_increment_ref_count(name_579),(struct sType*)come_increment_ref_count(result_type_578),(struct list$1sTypeph*)come_increment_ref_count(param_types_583),(struct list$1charph*)come_increment_ref_count(param_names_585),(struct list$1charph*)come_increment_ref_count(param_default_parametors_586),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_577),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value703=buffer_to_string(header_buf_587)))),(char*)come_increment_ref_count(((char*)(right_value704=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value702);
        if(right_value702 && right_value702 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value702;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value703);
        if(right_value703 && right_value703 != __result_obj__ && !__freed_obj__) { right_value703 = come_decrement_ref_count(right_value703, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value703;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value704);
        if(right_value704 && right_value704 != __result_obj__ && !__freed_obj__) { right_value704 = come_decrement_ref_count(right_value704, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value704;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value705);
        if(right_value705 && right_value705 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value705;
        __freed_obj__ = 0;
        fun2_592=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value706=__builtin_string(fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value706);
        if(right_value706 && right_value706 != __result_obj__ && !__freed_obj__) { right_value706 = come_decrement_ref_count(right_value706, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value706;
        __freed_obj__ = 0;
        if(_if_conditional530=fun2_592==((void*)0)||fun2_592->mExternal,        _if_conditional530) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value707=string_clone(name_579)))),(struct sFun*)come_increment_ref_count(fun_591));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value707);
            if(right_value707 && right_value707 != __result_obj__ && !__freed_obj__) { right_value707 = come_decrement_ref_count(right_value707, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value707;
            __freed_obj__ = 0;
        }
        equaler_556=fun_591;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2109);
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value709=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value708=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2109)))),(struct sFun*)come_increment_ref_count(fun_591),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_594=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value713=_inf_value10)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value708);
        if(right_value708 && right_value708 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value708;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value709);
        if(right_value709 && right_value709 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value709;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value713);
        if(right_value713 && right_value713 != __result_obj__ && !__freed_obj__) { right_value713 = come_decrement_ref_count(right_value713, ((struct sNode*)right_value713)->finalize, ((struct sNode*)right_value713)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[27] = right_value713;
        __freed_obj__ = 0;
        if(_if_conditional537=!node_compile(node_594,info),        _if_conditional537) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj168=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_576);
        if(__dec_obj168) { come_call_finalizer(buffer_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=p_572;
        info->head=head_575;
        info->sline=sline_573;
        __dec_obj169=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_574);
        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0,0); }
        if(source_560 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_560, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_574 && !__freed_obj__) { sname_574 = come_decrement_ref_count(sname_574, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_576 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_576, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_577 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_577, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_578 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_578, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_579 && !__freed_obj__) { name_579 = come_decrement_ref_count(name_579, (void*)0, (void*)0, 0, 0, 0); }
        if(left_type_580 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_580, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_type_581 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type_581, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_583 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_583, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_585 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_585, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_586 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_586, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_587 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_587, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_591 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_591, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_594 && !__freed_obj__) { node_594 = come_decrement_ref_count(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 0, 0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_555;
    __dec_obj170=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_552);
    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0,0); }
    __dec_obj171=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_553);
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
    __dec_obj172=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_554);
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
    __result225__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value715=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value714=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2129)))),equaler_556,(char*)come_increment_ref_count(real_fun_name_557))));
    if(last_code_552 && !__freed_obj__) { last_code_552 = come_decrement_ref_count(last_code_552, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_553 && !__freed_obj__) { last_code2_553 = come_decrement_ref_count(last_code2_553, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_554 && !__freed_obj__) { last_code3_554 = come_decrement_ref_count(last_code3_554, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_557 && !__freed_obj__) { real_fun_name_557 = come_decrement_ref_count(real_fun_name_557, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_558 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_558, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value714);
    if(right_value714 && right_value714 != __result_obj__ && !__freed_obj__) { right_value714 = come_decrement_ref_count(right_value714, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value714;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value715);
    if(right_value715 && right_value715 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value715;
    __freed_obj__ = 0;
    return __result225__;
    if(last_code_552 && !__freed_obj__) { last_code_552 = come_decrement_ref_count(last_code_552, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_553 && !__freed_obj__) { last_code2_553 = come_decrement_ref_count(last_code2_553, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_554 && !__freed_obj__) { last_code3_554 = come_decrement_ref_count(last_code3_554, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_557 && !__freed_obj__) { real_fun_name_557 = come_decrement_ref_count(real_fun_name_557, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_558 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_558, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result222__ = self->len;
                    return __result222__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* last_code_595;
char* __dec_obj173;
char* last_code2_596;
char* __dec_obj174;
char* last_code3_597;
char* __dec_obj175;
struct sClass* current_stack_frame_struct_598;
struct sFun* equaler_599;
void* right_value716;
char* real_fun_name_600;
void* right_value717;
struct sType* type2_601;
struct sClass* klass_602;
_Bool _if_conditional538;
void* right_value718;
void* right_value719;
struct buffer* source_603;
_Bool _if_conditional539;
char* name_604;
struct list$1tuple2$2charphsTypephph* o2_saved_606;
struct tuple2$2charphsTypeph* it_607;
_Bool _for_condtionalA26;
struct tuple2$2charphsTypeph* multiple_assgin_var14;
char* name_608;
struct sType* field_type_609;
_Bool _if_conditional540;
char* p_611;
int sline_612;
char* sname_613;
char* head_614;
struct buffer* source3_615;
struct buffer* __dec_obj176;
void* right_value720;
char* __dec_obj177;
void* right_value721;
struct sBlock* block_616;
void* right_value722;
void* right_value723;
struct sType* result_type_617;
void* right_value724;
char* name_618;
void* right_value725;
struct sType* left_type_619;
void* right_value726;
struct sType* right_type_620;
struct sType* __list_values27___621[2];
void* right_value727;
void* right_value728;
struct list$1sTypeph* param_types_622;
void* right_value729;
void* right_value730;
char* __list_values28___623[2];
void* right_value731;
void* right_value732;
struct list$1charph* param_names_624;
void* right_value733;
void* right_value734;
struct list$1charph* param_default_parametors_625;
void* right_value735;
void* right_value736;
struct buffer* header_buf_626;
void* right_value737;
int i_627;
_Bool _for_condtionalA27;
struct sType* param_type_628;
char* param_name_629;
void* right_value738;
_Bool _if_conditional541;
void* right_value739;
void* right_value740;
void* right_value741;
void* right_value742;
struct sFun* fun_630;
void* right_value743;
struct sFun* fun2_631;
_Bool _if_conditional542;
void* right_value744;
void* right_value745;
void* right_value746;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value750;
struct sNode* node_633;
_Bool _if_conditional549;
struct buffer* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
void* right_value751;
void* right_value752;
struct tuple2$2sFunpcharph* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&last_code_595, 0, sizeof(char*));
memset(&last_code2_596, 0, sizeof(char*));
memset(&last_code3_597, 0, sizeof(char*));
memset(&current_stack_frame_struct_598, 0, sizeof(struct sClass*));
memset(&equaler_599, 0, sizeof(struct sFun*));
memset(&right_value716, 0, sizeof(void*));
memset(&real_fun_name_600, 0, sizeof(char*));
memset(&right_value717, 0, sizeof(void*));
memset(&type2_601, 0, sizeof(struct sType*));
memset(&klass_602, 0, sizeof(struct sClass*));
memset(&right_value718, 0, sizeof(void*));
memset(&right_value719, 0, sizeof(void*));
memset(&source_603, 0, sizeof(struct buffer*));
memset(&name_604, 0, sizeof(char*));
memset(&o2_saved_606, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_607, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_608, 0, sizeof(char*));
memset(&field_type_609, 0, sizeof(struct sType*));
memset(&name_608, 0, sizeof(char*));
memset(&field_type_609, 0, sizeof(struct sType*));
memset(&p_611, 0, sizeof(char*));
memset(&sline_612, 0, sizeof(int));
memset(&sname_613, 0, sizeof(char*));
memset(&head_614, 0, sizeof(char*));
memset(&source3_615, 0, sizeof(struct buffer*));
memset(&right_value720, 0, sizeof(void*));
memset(&right_value721, 0, sizeof(void*));
memset(&block_616, 0, sizeof(struct sBlock*));
memset(&right_value722, 0, sizeof(void*));
memset(&right_value723, 0, sizeof(void*));
memset(&result_type_617, 0, sizeof(struct sType*));
memset(&right_value724, 0, sizeof(void*));
memset(&name_618, 0, sizeof(char*));
memset(&right_value725, 0, sizeof(void*));
memset(&left_type_619, 0, sizeof(struct sType*));
memset(&right_value726, 0, sizeof(void*));
memset(&right_type_620, 0, sizeof(struct sType*));
memset(&right_value727, 0, sizeof(void*));
memset(&right_value728, 0, sizeof(void*));
memset(&param_types_622, 0, sizeof(struct list$1sTypeph*));
memset(&right_value729, 0, sizeof(void*));
memset(&right_value730, 0, sizeof(void*));
memset(&right_value731, 0, sizeof(void*));
memset(&right_value732, 0, sizeof(void*));
memset(&param_names_624, 0, sizeof(struct list$1charph*));
memset(&right_value733, 0, sizeof(void*));
memset(&right_value734, 0, sizeof(void*));
memset(&param_default_parametors_625, 0, sizeof(struct list$1charph*));
memset(&right_value735, 0, sizeof(void*));
memset(&right_value736, 0, sizeof(void*));
memset(&header_buf_626, 0, sizeof(struct buffer*));
memset(&right_value737, 0, sizeof(void*));
memset(&i_627, 0, sizeof(int));
memset(&param_type_628, 0, sizeof(struct sType*));
memset(&param_name_629, 0, sizeof(char*));
memset(&right_value738, 0, sizeof(void*));
memset(&right_value739, 0, sizeof(void*));
memset(&right_value740, 0, sizeof(void*));
memset(&right_value741, 0, sizeof(void*));
memset(&right_value742, 0, sizeof(void*));
memset(&fun_630, 0, sizeof(struct sFun*));
memset(&right_value743, 0, sizeof(void*));
memset(&fun2_631, 0, sizeof(struct sFun*));
memset(&right_value744, 0, sizeof(void*));
memset(&right_value745, 0, sizeof(void*));
memset(&right_value746, 0, sizeof(void*));
memset(&right_value750, 0, sizeof(void*));
memset(&node_633, 0, sizeof(struct sNode*));
memset(&right_value751, 0, sizeof(void*));
memset(&right_value752, 0, sizeof(void*));
    last_code_595=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj173=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
    last_code2_596=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj174=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
    last_code3_597=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj175=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0,0); }
    current_stack_frame_struct_598=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_599=((void*)0);
    real_fun_name_600=(char*)come_increment_ref_count(((char*)(right_value716=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value716);
    if(right_value716 && right_value716 != __result_obj__ && !__freed_obj__) { right_value716 = come_decrement_ref_count(right_value716, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value716;
    __freed_obj__ = 0;
    type2_601=(struct sType*)come_increment_ref_count(((struct sType*)(right_value717=solve_generics(type,type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value717);
    if(right_value717 && right_value717 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value717;
    __freed_obj__ = 0;
    type=type2_601;
    klass_602=type->mClass;
    if(_if_conditional538=type->mPointerNum>0&&!klass_602->mNumber,    _if_conditional538) {
        source_603=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value719=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value718=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2154))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value718);
        if(right_value718 && right_value718 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value718;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value719);
        if(right_value719 && right_value719 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value719, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value719;
        __freed_obj__ = 0;
        buffer_append_char(source_603,123);
        if(_if_conditional539=klass_602->mProtocol,        _if_conditional539) {
            name_604="_protocol_obj";
            char source2_605[1024];
            memset(&source2_605, 0, sizeof(char)            *(1024)            );
            snprintf(source2_605,1024,"return left.%s.equals(right.%s);\n",name_604,name_604);
            buffer_append_str(source_603,source2_605);
        }
        else {
            klass_602=map$2charphsClassphp_operator_load_element(info->classes,klass_602->mName);
            for(
            o2_saved_606=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_602->mFields)),it_607=list$1tuple2$2charphsTypephph_begin((o2_saved_606)) ,            0;            _for_condtionalA26=            !list$1tuple2$2charphsTypephph_end((o2_saved_606)) ,            _for_condtionalA26;            it_607=list$1tuple2$2charphsTypephph_next((o2_saved_606)) ,            0            ){
                multiple_assgin_var14=it_607;
                name_608=(char*)come_increment_ref_count(multiple_assgin_var14->v1);
                field_type_609=(struct sType*)come_increment_ref_count(multiple_assgin_var14->v2);
                if(_if_conditional540=string_operator_equals(type->mClass->mName,field_type_609->mClass->mName)&&type->mPointerNum==field_type_609->mPointerNum&&field_type_609->mHeap,                _if_conditional540) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_610[1024];
                memset(&source2_610, 0, sizeof(char)                *(1024)                );
                snprintf(source2_610,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_608,name_608);
                buffer_append_str(source_603,source2_610);
                if(name_608 && !__freed_obj__) { name_608 = come_decrement_ref_count(name_608, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type_609 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_609, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_606 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_606, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        buffer_append_str(source_603,"return true;\n");
        buffer_append_char(source_603,125);
        p_611=info->p;
        sline_612=info->sline;
        sname_613=(char*)come_increment_ref_count(info->sname);
        head_614=info->head;
        source3_615=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj176=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_603);
        if(__dec_obj176) { come_call_finalizer(buffer_finalize,__dec_obj176, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=source_603->buf;
        info->head=source_603->buf;
        __dec_obj177=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value720=__builtin_string(real_fun_name_600))));
        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value720);
        if(right_value720 && right_value720 != __result_obj__ && !__freed_obj__) { right_value720 = come_decrement_ref_count(right_value720, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value720;
        __freed_obj__ = 0;
        info->sline=0;
        block_616=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value721=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value721);
        if(right_value721 && right_value721 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value721;
        __freed_obj__ = 0;
        result_type_617=(struct sType*)come_increment_ref_count(((struct sType*)(right_value723=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value722=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2200)))),"bool",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value722);
        if(right_value722 && right_value722 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value722;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value723);
        if(right_value723 && right_value723 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value723;
        __freed_obj__ = 0;
        name_618=(char*)come_increment_ref_count(((char*)(right_value724=string_clone(real_fun_name_600))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value724);
        if(right_value724 && right_value724 != __result_obj__ && !__freed_obj__) { right_value724 = come_decrement_ref_count(right_value724, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value724;
        __freed_obj__ = 0;
        left_type_619=(struct sType*)come_increment_ref_count(((struct sType*)(right_value725=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value725);
        if(right_value725 && right_value725 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value725, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value725;
        __freed_obj__ = 0;
        left_type_619->mHeap=(_Bool)0;
        right_type_620=(struct sType*)come_increment_ref_count(((struct sType*)(right_value726=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value726);
        if(right_value726 && right_value726 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value726;
        __freed_obj__ = 0;
        right_type_620->mHeap=(_Bool)0;
        {__list_values27___621[0]=come_increment_ref_count(left_type_619);
__list_values27___621[1]=come_increment_ref_count(right_type_620);
}        param_types_622=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value728=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value727=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2206)))),2,__list_values27___621))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value727);
        if(right_value727 && right_value727 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value727;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value728);
        if(right_value728 && right_value728 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value728;
        __freed_obj__ = 0;
        {__list_values28___623[0]=come_increment_ref_count(((char*)(right_value729=__builtin_string("left"))));
__list_values28___623[1]=come_increment_ref_count(((char*)(right_value730=__builtin_string("right"))));
}        param_names_624=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value732=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value731=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2207)))),2,__list_values28___623))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value729);
        if(right_value729 && right_value729 != __result_obj__ && !__freed_obj__) { right_value729 = come_decrement_ref_count(right_value729, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value729;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value730);
        if(right_value730 && right_value730 != __result_obj__ && !__freed_obj__) { right_value730 = come_decrement_ref_count(right_value730, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value730;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value731);
        if(right_value731 && right_value731 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value731, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value731;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value732);
        if(right_value732 && right_value732 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value732, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value732;
        __freed_obj__ = 0;
        param_default_parametors_625=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value734=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value733=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2208))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value733);
        if(right_value733 && right_value733 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value733, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value733;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value734);
        if(right_value734 && right_value734 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value734, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value734;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_625,((void*)0));
        list$1charph_push_back(param_default_parametors_625,((void*)0));
        header_buf_626=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value736=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value735=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2212))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value735);
        if(right_value735 && right_value735 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value735, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value735;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value736);
        if(right_value736 && right_value736 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value736;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_626,((char*)(right_value737=make_come_type_name_string(result_type_617,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value737);
        if(right_value737 && right_value737 != __result_obj__ && !__freed_obj__) { right_value737 = come_decrement_ref_count(right_value737, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value737;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_626," ");
        buffer_append_str(header_buf_626,real_fun_name_600);
        buffer_append_str(header_buf_626,"(");
        for(
        i_627=0 ,        0;        _for_condtionalA27=        i_627<list$1sTypeph_length(param_types_622) ,        _for_condtionalA27;        i_627++ ,        0        ){
            param_type_628=list$1sTypephp_operator_load_element(param_types_622,i_627);
            param_name_629=list$1charphp_operator_load_element(param_names_624,i_627);
            buffer_append_str(header_buf_626,((char*)(right_value738=make_come_type_name_string(param_type_628,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value738);
            if(right_value738 && right_value738 != __result_obj__ && !__freed_obj__) { right_value738 = come_decrement_ref_count(right_value738, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value738;
            __freed_obj__ = 0;
            buffer_append_str(header_buf_626," ");
            buffer_append_str(header_buf_626,param_name_629);
            if(_if_conditional541=i_627!=list$1sTypeph_length(param_types_622)-1,            _if_conditional541) {
                buffer_append_str(header_buf_626,",");
            }
        }
        buffer_append_str(header_buf_626,")");
        result_type_617->mStatic=(_Bool)0;
        fun_630=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value742=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value739=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2235)))),(char*)come_increment_ref_count(name_618),(struct sType*)come_increment_ref_count(result_type_617),(struct list$1sTypeph*)come_increment_ref_count(param_types_622),(struct list$1charph*)come_increment_ref_count(param_names_624),(struct list$1charph*)come_increment_ref_count(param_default_parametors_625),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_616),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value740=buffer_to_string(header_buf_626)))),(char*)come_increment_ref_count(((char*)(right_value741=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value739);
        if(right_value739 && right_value739 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value739;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value740);
        if(right_value740 && right_value740 != __result_obj__ && !__freed_obj__) { right_value740 = come_decrement_ref_count(right_value740, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value740;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value741);
        if(right_value741 && right_value741 != __result_obj__ && !__freed_obj__) { right_value741 = come_decrement_ref_count(right_value741, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value741;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value742);
        if(right_value742 && right_value742 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value742;
        __freed_obj__ = 0;
        fun2_631=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value743=__builtin_string(fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value743);
        if(right_value743 && right_value743 != __result_obj__ && !__freed_obj__) { right_value743 = come_decrement_ref_count(right_value743, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value743;
        __freed_obj__ = 0;
        if(_if_conditional542=fun2_631==((void*)0)||fun2_631->mExternal,        _if_conditional542) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value744=string_clone(name_618)))),(struct sFun*)come_increment_ref_count(fun_630));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value744);
            if(right_value744 && right_value744 != __result_obj__ && !__freed_obj__) { right_value744 = come_decrement_ref_count(right_value744, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value744;
            __freed_obj__ = 0;
        }
        equaler_599=fun_630;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2251);
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value746=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value745=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2251)))),(struct sFun*)come_increment_ref_count(fun_630),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_633=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value750=_inf_value11)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value745);
        if(right_value745 && right_value745 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value745;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value746);
        if(right_value746 && right_value746 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value746;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value750);
        if(right_value750 && right_value750 != __result_obj__ && !__freed_obj__) { right_value750 = come_decrement_ref_count(right_value750, ((struct sNode*)right_value750)->finalize, ((struct sNode*)right_value750)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[27] = right_value750;
        __freed_obj__ = 0;
        if(_if_conditional549=!node_compile(node_633,info),        _if_conditional549) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj180=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_615);
        if(__dec_obj180) { come_call_finalizer(buffer_finalize,__dec_obj180, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=p_611;
        info->head=head_614;
        info->sline=sline_612;
        __dec_obj181=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_613);
        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0,0); }
        if(source_603 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_603, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_613 && !__freed_obj__) { sname_613 = come_decrement_ref_count(sname_613, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_615 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_615, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_616 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_616, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_617 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_617, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_618 && !__freed_obj__) { name_618 = come_decrement_ref_count(name_618, (void*)0, (void*)0, 0, 0, 0); }
        if(left_type_619 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_619, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_type_620 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type_620, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_622 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_622, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_624 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_624, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_625 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_625, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_626 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_626, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_630 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_630, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_633 && !__freed_obj__) { node_633 = come_decrement_ref_count(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_598;
    __dec_obj182=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_595);
    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0,0); }
    __dec_obj183=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_596);
    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
    __dec_obj184=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_597);
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0,0); }
    __result228__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value752=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value751=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2271)))),equaler_599,(char*)come_increment_ref_count(real_fun_name_600))));
    if(last_code_595 && !__freed_obj__) { last_code_595 = come_decrement_ref_count(last_code_595, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_596 && !__freed_obj__) { last_code2_596 = come_decrement_ref_count(last_code2_596, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_597 && !__freed_obj__) { last_code3_597 = come_decrement_ref_count(last_code3_597, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_600 && !__freed_obj__) { real_fun_name_600 = come_decrement_ref_count(real_fun_name_600, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_601 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_601, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value751);
    if(right_value751 && right_value751 != __result_obj__ && !__freed_obj__) { right_value751 = come_decrement_ref_count(right_value751, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value751;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value752);
    if(right_value752 && right_value752 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value752, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value752;
    __freed_obj__ = 0;
    return __result228__;
    if(last_code_595 && !__freed_obj__) { last_code_595 = come_decrement_ref_count(last_code_595, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_596 && !__freed_obj__) { last_code2_596 = come_decrement_ref_count(last_code2_596, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_597 && !__freed_obj__) { last_code3_597 = come_decrement_ref_count(last_code3_597, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_600 && !__freed_obj__) { real_fun_name_600 = come_decrement_ref_count(real_fun_name_600, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_601 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_601, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* last_code_634;
char* __dec_obj185;
char* last_code2_635;
char* __dec_obj186;
char* last_code3_636;
char* __dec_obj187;
struct sClass* current_stack_frame_struct_637;
struct sFun* cloner_638;
void* right_value753;
char* real_fun_name_639;
void* right_value754;
struct sType* type2_640;
struct sClass* klass_641;
_Bool _if_conditional550;
void* right_value755;
void* right_value756;
struct buffer* source_642;
void* right_value757;
void* right_value758;
_Bool _if_conditional551;
char* name_643;
struct list$1tuple2$2charphsTypephph* o2_saved_645;
struct tuple2$2charphsTypeph* it_646;
_Bool _for_condtionalA28;
struct tuple2$2charphsTypeph* multiple_assgin_var15;
char* name_647;
struct sType* field_type_648;
_Bool _if_conditional552;
_Bool _if_conditional553;
_Bool _if_conditional554;
struct list$1tuple2$2charphsTypephph* o2_saved_651;
struct tuple2$2charphsTypeph* it_652;
_Bool _for_condtionalA29;
struct tuple2$2charphsTypeph* multiple_assgin_var16;
char* name_653;
struct sType* field_type_654;
_Bool _if_conditional555;
_Bool _if_conditional556;
_Bool _if_conditional557;
void* right_value759;
char* p_658;
int sline_659;
char* sname_660;
struct buffer* source3_661;
char* head_662;
struct buffer* __dec_obj188;
void* right_value760;
char* __dec_obj189;
void* right_value761;
struct sBlock* block_663;
void* right_value762;
struct sType* result_type_664;
void* right_value763;
char* name_665;
void* right_value764;
struct sType* self_type_666;
struct sType* __list_values29___667[1];
void* right_value765;
void* right_value766;
struct list$1sTypeph* param_types_668;
void* right_value767;
char* __list_values30___669[1];
void* right_value768;
void* right_value769;
struct list$1charph* param_names_670;
void* right_value770;
void* right_value771;
struct list$1charph* param_default_parametors_671;
void* right_value772;
void* right_value773;
struct buffer* header_buf_672;
void* right_value774;
int i_673;
_Bool _for_condtionalA30;
struct sType* param_type_674;
char* param_name_675;
void* right_value775;
_Bool _if_conditional558;
void* right_value776;
void* right_value777;
void* right_value778;
void* right_value779;
struct sFun* fun_676;
void* right_value780;
struct sFun* fun2_677;
_Bool _if_conditional559;
void* right_value781;
void* right_value782;
void* right_value783;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value787;
struct sNode* node_679;
_Bool _if_conditional566;
char* __dec_obj192;
struct buffer* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
void* right_value788;
void* right_value789;
struct tuple2$2sFunpcharph* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&last_code_634, 0, sizeof(char*));
memset(&last_code2_635, 0, sizeof(char*));
memset(&last_code3_636, 0, sizeof(char*));
memset(&current_stack_frame_struct_637, 0, sizeof(struct sClass*));
memset(&cloner_638, 0, sizeof(struct sFun*));
memset(&right_value753, 0, sizeof(void*));
memset(&real_fun_name_639, 0, sizeof(char*));
memset(&right_value754, 0, sizeof(void*));
memset(&type2_640, 0, sizeof(struct sType*));
memset(&klass_641, 0, sizeof(struct sClass*));
memset(&right_value755, 0, sizeof(void*));
memset(&right_value756, 0, sizeof(void*));
memset(&source_642, 0, sizeof(struct buffer*));
memset(&right_value757, 0, sizeof(void*));
memset(&right_value758, 0, sizeof(void*));
memset(&name_643, 0, sizeof(char*));
memset(&o2_saved_645, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_646, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_647, 0, sizeof(char*));
memset(&field_type_648, 0, sizeof(struct sType*));
memset(&name_647, 0, sizeof(char*));
memset(&field_type_648, 0, sizeof(struct sType*));
memset(&o2_saved_651, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_652, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_653, 0, sizeof(char*));
memset(&field_type_654, 0, sizeof(struct sType*));
memset(&name_653, 0, sizeof(char*));
memset(&field_type_654, 0, sizeof(struct sType*));
memset(&right_value759, 0, sizeof(void*));
memset(&p_658, 0, sizeof(char*));
memset(&sline_659, 0, sizeof(int));
memset(&sname_660, 0, sizeof(char*));
memset(&source3_661, 0, sizeof(struct buffer*));
memset(&head_662, 0, sizeof(char*));
memset(&right_value760, 0, sizeof(void*));
memset(&right_value761, 0, sizeof(void*));
memset(&block_663, 0, sizeof(struct sBlock*));
memset(&right_value762, 0, sizeof(void*));
memset(&result_type_664, 0, sizeof(struct sType*));
memset(&right_value763, 0, sizeof(void*));
memset(&name_665, 0, sizeof(char*));
memset(&right_value764, 0, sizeof(void*));
memset(&self_type_666, 0, sizeof(struct sType*));
memset(&right_value765, 0, sizeof(void*));
memset(&right_value766, 0, sizeof(void*));
memset(&param_types_668, 0, sizeof(struct list$1sTypeph*));
memset(&right_value767, 0, sizeof(void*));
memset(&right_value768, 0, sizeof(void*));
memset(&right_value769, 0, sizeof(void*));
memset(&param_names_670, 0, sizeof(struct list$1charph*));
memset(&right_value770, 0, sizeof(void*));
memset(&right_value771, 0, sizeof(void*));
memset(&param_default_parametors_671, 0, sizeof(struct list$1charph*));
memset(&right_value772, 0, sizeof(void*));
memset(&right_value773, 0, sizeof(void*));
memset(&header_buf_672, 0, sizeof(struct buffer*));
memset(&right_value774, 0, sizeof(void*));
memset(&i_673, 0, sizeof(int));
memset(&param_type_674, 0, sizeof(struct sType*));
memset(&param_name_675, 0, sizeof(char*));
memset(&right_value775, 0, sizeof(void*));
memset(&right_value776, 0, sizeof(void*));
memset(&right_value777, 0, sizeof(void*));
memset(&right_value778, 0, sizeof(void*));
memset(&right_value779, 0, sizeof(void*));
memset(&fun_676, 0, sizeof(struct sFun*));
memset(&right_value780, 0, sizeof(void*));
memset(&fun2_677, 0, sizeof(struct sFun*));
memset(&right_value781, 0, sizeof(void*));
memset(&right_value782, 0, sizeof(void*));
memset(&right_value783, 0, sizeof(void*));
memset(&right_value787, 0, sizeof(void*));
memset(&node_679, 0, sizeof(struct sNode*));
memset(&right_value788, 0, sizeof(void*));
memset(&right_value789, 0, sizeof(void*));
    last_code_634=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj185=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0,0); }
    last_code2_635=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj186=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0,0); }
    last_code3_636=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj187=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0,0); }
    current_stack_frame_struct_637=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_638=((void*)0);
    real_fun_name_639=(char*)come_increment_ref_count(((char*)(right_value753=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value753);
    if(right_value753 && right_value753 != __result_obj__ && !__freed_obj__) { right_value753 = come_decrement_ref_count(right_value753, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value753;
    __freed_obj__ = 0;
    type2_640=(struct sType*)come_increment_ref_count(((struct sType*)(right_value754=solve_generics(type,type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value754);
    if(right_value754 && right_value754 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value754;
    __freed_obj__ = 0;
    type=type2_640;
    klass_641=type->mClass;
    if(_if_conditional550=type->mPointerNum>0&&!klass_641->mNumber,    _if_conditional550) {
        source_642=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value756=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value755=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2296))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value755);
        if(right_value755 && right_value755 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value755, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value755;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value756);
        if(right_value756 && right_value756 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value756;
        __freed_obj__ = 0;
        buffer_append_str(source_642,"{\n");
        buffer_append_str(source_642,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_642,((char*)(right_value758=xsprintf("var result = new %s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value757=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value757);
        if(right_value757 && right_value757 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value757;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value758);
        if(right_value758 && right_value758 != __result_obj__ && !__freed_obj__) { right_value758 = come_decrement_ref_count(right_value758, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value758;
        __freed_obj__ = 0;
        if(_if_conditional551=klass_641->mProtocol,        _if_conditional551) {
            name_643="_protocol_obj";
            char source2_644[1024];
            memset(&source2_644, 0, sizeof(char)            *(1024)            );
            snprintf(source2_644,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_642,source2_644);
            klass_641=map$2charphsClassphp_operator_load_element(info->classes,klass_641->mName);
            for(
            o2_saved_645=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_641->mFields)),it_646=list$1tuple2$2charphsTypephph_begin((o2_saved_645)) ,            0;            _for_condtionalA28=            !list$1tuple2$2charphsTypephph_end((o2_saved_645)) ,            _for_condtionalA28;            it_646=list$1tuple2$2charphsTypephph_next((o2_saved_645)) ,            0            ){
                multiple_assgin_var15=it_646;
                name_647=(char*)come_increment_ref_count(multiple_assgin_var15->v1);
                field_type_648=(struct sType*)come_increment_ref_count(multiple_assgin_var15->v2);
                if(_if_conditional552=string_operator_equals(type->mClass->mName,field_type_648->mClass->mName)&&type->mPointerNum==field_type_648->mPointerNum&&field_type_648->mHeap,                _if_conditional552) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional553=string_operator_equals(name_647,"_protocol_obj"),                _if_conditional553) {
                }
                else {
                    if(_if_conditional554=list$1sNodeph_length(field_type_648->mArrayNum)>0,                    _if_conditional554) {
                        char source2_649[1024];
                        memset(&source2_649, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_649,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_647,name_647,name_647);
                        buffer_append_str(source_642,source2_649);
                    }
                    else {
                        char source2_650[1024];
                        memset(&source2_650, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_650,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_647,name_647);
                        buffer_append_str(source_642,source2_650);
                    }
                }
                if(name_647 && !__freed_obj__) { name_647 = come_decrement_ref_count(name_647, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type_648 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_648, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_645 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_645, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            klass_641=map$2charphsClassphp_operator_load_element(info->classes,klass_641->mName);
            for(
            o2_saved_651=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_641->mFields)),it_652=list$1tuple2$2charphsTypephph_begin((o2_saved_651)) ,            0;            _for_condtionalA29=            !list$1tuple2$2charphsTypephph_end((o2_saved_651)) ,            _for_condtionalA29;            it_652=list$1tuple2$2charphsTypephph_next((o2_saved_651)) ,            0            ){
                multiple_assgin_var16=it_652;
                name_653=(char*)come_increment_ref_count(multiple_assgin_var16->v1);
                field_type_654=(struct sType*)come_increment_ref_count(multiple_assgin_var16->v2);
                if(_if_conditional555=string_operator_equals(type->mClass->mName,field_type_654->mClass->mName)&&type->mPointerNum==field_type_654->mPointerNum&&field_type_654->mHeap,                _if_conditional555) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional556=field_type_654->mHeap,                _if_conditional556) {
                    char source2_655[1024];
                    memset(&source2_655, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_655,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_653,name_653,name_653);
                    buffer_append_str(source_642,source2_655);
                }
                else {
                    if(_if_conditional557=list$1sNodeph_length(field_type_654->mArrayNum)>0,                    _if_conditional557) {
                        char source2_656[1024];
                        memset(&source2_656, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_656,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_653,name_653,name_653);
                        buffer_append_str(source_642,source2_656);
                    }
                    else {
                        char source2_657[1024];
                        memset(&source2_657, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_657,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_653,name_653);
                        buffer_append_str(source_642,source2_657);
                    }
                }
                if(name_653 && !__freed_obj__) { name_653 = come_decrement_ref_count(name_653, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type_654 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_654, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_651 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_651, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        buffer_append_str(source_642,((char*)(right_value759=xsprintf("return result;"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value759);
        if(right_value759 && right_value759 != __result_obj__ && !__freed_obj__) { right_value759 = come_decrement_ref_count(right_value759, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value759;
        __freed_obj__ = 0;
        buffer_append_char(source_642,125);
        p_658=info->p;
        sline_659=info->sline;
        sname_660=(char*)come_increment_ref_count(info->sname);
        source3_661=(struct buffer*)come_increment_ref_count(info->source);
        head_662=info->head;
        __dec_obj188=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_642);
        if(__dec_obj188) { come_call_finalizer(buffer_finalize,__dec_obj188, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj189=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value760=__builtin_string(real_fun_name_639))));
        if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value760);
        if(right_value760 && right_value760 != __result_obj__ && !__freed_obj__) { right_value760 = come_decrement_ref_count(right_value760, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value760;
        __freed_obj__ = 0;
        info->sline=1;
        block_663=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value761=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value761);
        if(right_value761 && right_value761 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value761, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value761;
        __freed_obj__ = 0;
        result_type_664=(struct sType*)come_increment_ref_count(((struct sType*)(right_value762=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value762);
        if(right_value762 && right_value762 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value762, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value762;
        __freed_obj__ = 0;
        name_665=(char*)come_increment_ref_count(((char*)(right_value763=string_clone(real_fun_name_639))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value763);
        if(right_value763 && right_value763 != __result_obj__ && !__freed_obj__) { right_value763 = come_decrement_ref_count(right_value763, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value763;
        __freed_obj__ = 0;
        self_type_666=(struct sType*)come_increment_ref_count(((struct sType*)(right_value764=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value764);
        if(right_value764 && right_value764 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value764, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value764;
        __freed_obj__ = 0;
        self_type_666->mHeap=(_Bool)0;
        {__list_values29___667[0]=come_increment_ref_count(self_type_666);
}        param_types_668=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value766=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value765=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2390)))),1,__list_values29___667))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value765);
        if(right_value765 && right_value765 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value765, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value765;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value766);
        if(right_value766 && right_value766 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value766, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value766;
        __freed_obj__ = 0;
        {__list_values30___669[0]=come_increment_ref_count(((char*)(right_value767=__builtin_string("self"))));
}        param_names_670=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value769=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value768=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2391)))),1,__list_values30___669))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value767);
        if(right_value767 && right_value767 != __result_obj__ && !__freed_obj__) { right_value767 = come_decrement_ref_count(right_value767, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value767;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value768);
        if(right_value768 && right_value768 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value768, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value768;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value769);
        if(right_value769 && right_value769 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value769;
        __freed_obj__ = 0;
        param_default_parametors_671=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value771=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value770=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2392))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value770);
        if(right_value770 && right_value770 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value770, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value770;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value771);
        if(right_value771 && right_value771 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value771;
        __freed_obj__ = 0;
        list$1charph_push_back(param_default_parametors_671,((void*)0));
        header_buf_672=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value773=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value772=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2395))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value772);
        if(right_value772 && right_value772 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value772;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value773);
        if(right_value773 && right_value773 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value773;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_672,((char*)(right_value774=make_come_type_name_string(result_type_664,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value774);
        if(right_value774 && right_value774 != __result_obj__ && !__freed_obj__) { right_value774 = come_decrement_ref_count(right_value774, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value774;
        __freed_obj__ = 0;
        buffer_append_str(header_buf_672," ");
        buffer_append_str(header_buf_672,real_fun_name_639);
        buffer_append_str(header_buf_672,"(");
        for(
        i_673=0 ,        0;        _for_condtionalA30=        i_673<list$1sTypeph_length(param_types_668) ,        _for_condtionalA30;        i_673++ ,        0        ){
            param_type_674=list$1sTypephp_operator_load_element(param_types_668,i_673);
            param_name_675=list$1charphp_operator_load_element(param_names_670,i_673);
            buffer_append_str(header_buf_672,((char*)(right_value775=make_come_type_name_string(param_type_674,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value775);
            if(right_value775 && right_value775 != __result_obj__ && !__freed_obj__) { right_value775 = come_decrement_ref_count(right_value775, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value775;
            __freed_obj__ = 0;
            buffer_append_str(header_buf_672," ");
            buffer_append_str(header_buf_672,param_name_675);
            if(_if_conditional558=i_673!=list$1sTypeph_length(param_types_668)-1,            _if_conditional558) {
                buffer_append_str(header_buf_672,",");
            }
        }
        buffer_append_str(header_buf_672,")");
        result_type_664->mStatic=(_Bool)0;
        fun_676=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value779=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value776=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2418)))),(char*)come_increment_ref_count(name_665),(struct sType*)come_increment_ref_count(result_type_664),(struct list$1sTypeph*)come_increment_ref_count(param_types_668),(struct list$1charph*)come_increment_ref_count(param_names_670),(struct list$1charph*)come_increment_ref_count(param_default_parametors_671),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_663),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value777=buffer_to_string(header_buf_672)))),(char*)come_increment_ref_count(((char*)(right_value778=__builtin_string("")))),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value776);
        if(right_value776 && right_value776 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value776, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value776;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value777);
        if(right_value777 && right_value777 != __result_obj__ && !__freed_obj__) { right_value777 = come_decrement_ref_count(right_value777, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value777;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value778);
        if(right_value778 && right_value778 != __result_obj__ && !__freed_obj__) { right_value778 = come_decrement_ref_count(right_value778, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value778;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value779);
        if(right_value779 && right_value779 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value779;
        __freed_obj__ = 0;
        fun_676->mCloner=(_Bool)1;
        fun2_677=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value780=__builtin_string(fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value780);
        if(right_value780 && right_value780 != __result_obj__ && !__freed_obj__) { right_value780 = come_decrement_ref_count(right_value780, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value780;
        __freed_obj__ = 0;
        if(_if_conditional559=fun2_677==((void*)0)||fun2_677->mExternal,        _if_conditional559) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value781=string_clone(name_665)))),(struct sFun*)come_increment_ref_count(fun_676));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value781);
            if(right_value781 && right_value781 != __result_obj__ && !__freed_obj__) { right_value781 = come_decrement_ref_count(right_value781, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value781;
            __freed_obj__ = 0;
        }
        cloner_638=fun_676;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2435);
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value783=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value782=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2435)))),(struct sFun*)come_increment_ref_count(fun_676),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_679=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value787=_inf_value12)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value782);
        if(right_value782 && right_value782 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value782;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value783);
        if(right_value783 && right_value783 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value783, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value783;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value787);
        if(right_value787 && right_value787 != __result_obj__ && !__freed_obj__) { right_value787 = come_decrement_ref_count(right_value787, ((struct sNode*)right_value787)->finalize, ((struct sNode*)right_value787)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[27] = right_value787;
        __freed_obj__ = 0;
        if(_if_conditional566=!node_compile(node_679,info),        _if_conditional566) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj192=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_660);
        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0,0); }
        info->sline=sline_659;
        __dec_obj193=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_661);
        if(__dec_obj193) { come_call_finalizer(buffer_finalize,__dec_obj193, (void*)0, (void*)0, 0, 0, 0, 0); }
        info->p=p_658;
        info->head=head_662;
        info->sline=sline_659;
        if(source_642 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_642, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(sname_660 && !__freed_obj__) { sname_660 = come_decrement_ref_count(sname_660, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_661 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_661, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(block_663 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_663, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type_664 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_664, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_665 && !__freed_obj__) { name_665 = come_decrement_ref_count(name_665, (void*)0, (void*)0, 0, 0, 0); }
        if(self_type_666 && !__freed_obj__) { come_call_finalizer(sType_finalize,self_type_666, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_668 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_668, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_names_670 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_670, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_default_parametors_671 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_671, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(header_buf_672 && !__freed_obj__) { come_call_finalizer(buffer_finalize,header_buf_672, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_676 && !__freed_obj__) { come_call_finalizer(sFun_finalize,fun_676, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node_679 && !__freed_obj__) { node_679 = come_decrement_ref_count(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_637;
    __dec_obj194=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_634);
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
    __dec_obj195=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_635);
    if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0,0); }
    __dec_obj196=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_636);
    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0,0); }
    __result231__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value789=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value788=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2457)))),cloner_638,(char*)come_increment_ref_count(real_fun_name_639))));
    if(last_code_634 && !__freed_obj__) { last_code_634 = come_decrement_ref_count(last_code_634, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_635 && !__freed_obj__) { last_code2_635 = come_decrement_ref_count(last_code2_635, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_636 && !__freed_obj__) { last_code3_636 = come_decrement_ref_count(last_code3_636, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_639 && !__freed_obj__) { real_fun_name_639 = come_decrement_ref_count(real_fun_name_639, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_640 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_640, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value788);
    if(right_value788 && right_value788 != __result_obj__ && !__freed_obj__) { right_value788 = come_decrement_ref_count(right_value788, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value788;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value789);
    if(right_value789 && right_value789 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value789, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value789;
    __freed_obj__ = 0;
    return __result231__;
    if(last_code_634 && !__freed_obj__) { last_code_634 = come_decrement_ref_count(last_code_634, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code2_635 && !__freed_obj__) { last_code2_635 = come_decrement_ref_count(last_code2_635, (void*)0, (void*)0, 0, 0, 0); }
    if(last_code3_636 && !__freed_obj__) { last_code3_636 = come_decrement_ref_count(last_code3_636, (void*)0, (void*)0, 0, 0, 0); }
    if(real_fun_name_639 && !__freed_obj__) { real_fun_name_639 = come_decrement_ref_count(real_fun_name_639, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_640 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_640, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional560;
_Bool _if_conditional561;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional560=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional560) {
                if(self->mFun && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional561=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional561) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional562;
struct sFunNode* __result229__;
void* right_value784;
struct sFunNode* result_678;
_Bool _if_conditional563;
void* right_value785;
struct sFun* __dec_obj190;
_Bool _if_conditional564;
_Bool _if_conditional565;
void* right_value786;
char* __dec_obj191;
struct sFunNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value784, 0, sizeof(void*));
memset(&result_678, 0, sizeof(struct sFunNode*));
memset(&right_value785, 0, sizeof(void*));
memset(&right_value786, 0, sizeof(void*));
            if(_if_conditional562=self==(void*)0,            _if_conditional562) {
                __result229__ = __result_obj__ = (void*)0;
                return __result229__;
            }
            result_678=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value784=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value784);
            if(right_value784 && right_value784 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,right_value784, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value784;
            __freed_obj__ = 0;
            if(_if_conditional563=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional563) {
                __dec_obj190=result_678->mFun;
                result_678->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value785=sFun_clone(self->mFun))));
                if(__dec_obj190) { come_call_finalizer(sFun_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value785);
                if(right_value785 && right_value785 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value785, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value785;
                __freed_obj__ = 0;
            }
            if(_if_conditional564=self!=((void*)0),            _if_conditional564) {
                result_678->sline=self->sline;
            }
            if(_if_conditional565=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional565) {
                __dec_obj191=result_678->sname;
                result_678->sname=(char*)come_increment_ref_count(((char*)(right_value786=string_clone(self->sname))));
                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value786);
                if(right_value786 && right_value786 != __result_obj__ && !__freed_obj__) { right_value786 = come_decrement_ref_count(right_value786, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value786;
                __freed_obj__ = 0;
            }
            __result230__ = __result_obj__ = result_678;
            if(result_678 && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,result_678, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result230__;
            if(result_678 && !__freed_obj__) { come_call_finalizer(sFunNode_finalize,result_678, (void*)0, (void*)0, 0, 0, 0, 0); }
}

