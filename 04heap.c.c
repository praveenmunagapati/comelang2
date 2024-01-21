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
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

static char* optional$2charphbool_expect(struct optional$2charphbool* self);
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
char* __dec_obj7;
_Bool _if_conditional9;
void* right_value11;
char* __dec_obj8;
void* right_value12;
char* __dec_obj9;
_Bool _if_conditional10;
void* right_value13;
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
    if(_if_conditional6=right_value->var,    _if_conditional6) {
        # 30 "04heap.c"
        # 18 "04heap.c"
        if(_if_conditional7=right_value->var->mType->mDelegate,        _if_conditional7) {
            # 19 "04heap.c"
            __dec_obj6=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
        }
        else {
            # 30 "04heap.c"
            # 21 "04heap.c"
            if(_if_conditional8=right_value->var->mType->mShare,            _if_conditional8) {
                # 22 "04heap.c"
                __dec_obj7=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value10=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = 0;
            }
            else {
                # 30 "04heap.c"
                # 24 "04heap.c"
                if(_if_conditional9=right_value->var->mType->mClone,                _if_conditional9) {
                    # 25 "04heap.c"
                    __dec_obj8=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value11=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value11;
                    __freed_obj__ = 0;
                }
                else {
                    # 28 "04heap.c"
                    __dec_obj9=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value12=increment_ref_count_object(right_value->type,right_value->c_value,info))));
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
        if(_if_conditional10=right_value->type->mDelegate,        _if_conditional10) {
        }
        else {
            # 35 "04heap.c"
            __dec_obj10=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value13=increment_ref_count_object(right_value->type,right_value->c_value,info))));
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
_Bool _if_conditional98;
struct sType* __result33__;
struct sClass* klass_30;
_Bool _if_conditional99;
void* right_value49;
struct sType* result_type_31;
void* right_value50;
void* right_value52;
struct tuple1$1sTypeph* __dec_obj34;
struct list$1sTypeph* o2_saved_34;
struct sType* it_37;
_Bool _for_condtionalA1;
void* right_value53;
struct sType* new_param_type_40;
void* right_value57;
_Bool _if_conditional106;
int generics_number_44;
_Bool _if_conditional107;
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
void* right_value59;
struct sType* __dec_obj38;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct list$1sNodeph* __dec_obj39;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list$1sTypeph* o2_saved_58;
struct sType* it_59;
_Bool _for_condtionalA2;
void* right_value60;
struct sType* type_60;
void* right_value61;
_Bool _if_conditional119;
void* right_value62;
char* new_name_61;
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
    if(_if_conditional98=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional98) {
        # 47 "04heap.c"
        __result33__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result33__;
    }
    # 50 "04heap.c"
    klass_30=type->mClass;
    # 136 "04heap.c"
    # 52 "04heap.c"
    if(_if_conditional99=string_operator_equals(klass_30->mName,"lambda"),    _if_conditional99) {
        # 53 "04heap.c"
        result_type_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=solve_generics(type->mResultType->v1,generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49;
        __freed_obj__ = 0;
        # 55 "04heap.c"
        __dec_obj34=result_29->mResultType;
        result_29->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value50=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55)))),(struct sType*)come_increment_ref_count(result_type_31)))));
        if(__dec_obj34) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value50;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value52;
        __freed_obj__ = 0;
        # 57 "04heap.c"
        list$1sTypeph_reset(result_29->mParamTypes);
        # 64 "04heap.c"
        for(
        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_37=list$1sTypeph_begin((o2_saved_34)) ,        0;        _for_condtionalA1=        !list$1sTypeph_end((o2_saved_34)) ,        _for_condtionalA1;        it_37=list$1sTypeph_next((o2_saved_34)) ,        0        ){
            # 60 "04heap.c"
            new_param_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(it_37,generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            # 62 "04heap.c"
            list$1sTypeph_push_back(result_29->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(new_param_type_40)))));
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
        if(_if_conditional106=klass_30->mGenerics,        _if_conditional106) {
            # 66 "04heap.c"
            generics_number_44=klass_30->mGenericsNum;
            # 74 "04heap.c"
            # 68 "04heap.c"
            if(_if_conditional107=generics_number_44>=list$1sTypeph_length(generics_type->mGenericsTypes),            _if_conditional107) {
                # 70 "04heap.c"
                err_msg(info,"invalid generics parametor number");
                # 71 "04heap.c"
                exit(2);
            }
            # 74 "04heap.c"
            klass2_48=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_44)->mClass;
            # 76 "04heap.c"
            generics_number2_49=klass2_48->mGenericsNum;
            # 120 "04heap.c"
            # 78 "04heap.c"
            if(_if_conditional110=generics_number_44!=generics_number2_49,            _if_conditional110) {
                # 80 "04heap.c"
                array_num_50=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value58=list$1sNodephp_clone(type->mArrayNum))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
                # 81 "04heap.c"
                immutable__51=type->mImmutable;
                # 82 "04heap.c"
                pointer_num_52=type->mPointerNum;
                # 83 "04heap.c"
                heap_53=type->mHeap;
                # 85 "04heap.c"
                no_heap_54=type->mNoHeap;
                # 86 "04heap.c"
                no_calling_destructor_55=type->mNoCallingDestructor;
                # 87 "04heap.c"
                exception__56=type->mException;
                # 88 "04heap.c"
                null_value_57=type->mNullValue;
                # 90 "04heap.c"
                __dec_obj38=result_29;
                result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_44)))));
                if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value59;
                __freed_obj__ = 0;
                # 95 "04heap.c"
                # 92 "04heap.c"
                if(_if_conditional111=heap_53,                _if_conditional111) {
                    # 93 "04heap.c"
                    result_29->mHeap=heap_53;
                }
                # 98 "04heap.c"
                # 95 "04heap.c"
                if(_if_conditional112=exception__56,                _if_conditional112) {
                    # 96 "04heap.c"
                    result_29->mException=exception__56;
                }
                # 102 "04heap.c"
                # 98 "04heap.c"
                if(_if_conditional113=no_heap_54,                _if_conditional113) {
                    # 99 "04heap.c"
                    result_29->mNoHeap=(_Bool)1;
                    # 100 "04heap.c"
                    result_29->mHeap=(_Bool)0;
                }
                # 105 "04heap.c"
                # 102 "04heap.c"
                if(_if_conditional114=no_calling_destructor_55,                _if_conditional114) {
                    # 103 "04heap.c"
                    result_29->mNoCallingDestructor=(_Bool)1;
                }
                # 108 "04heap.c"
                # 105 "04heap.c"
                if(_if_conditional115=immutable__51,                _if_conditional115) {
                    # 106 "04heap.c"
                    result_29->mImmutable=immutable__51;
                }
                # 112 "04heap.c"
                # 108 "04heap.c"
                if(_if_conditional116=list$1sNodeph_length(array_num_50)>0,                _if_conditional116) {
                    # 109 "04heap.c"
                    __dec_obj39=result_29->mArrayNum;
                    result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_50);
                    if(__dec_obj39) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 116 "04heap.c"
                # 112 "04heap.c"
                if(_if_conditional117=null_value_57,                _if_conditional117) {
                    # 113 "04heap.c"
                    result_29->mNullValue=null_value_57;
                }
                # 119 "04heap.c"
                # 116 "04heap.c"
                if(_if_conditional118=pointer_num_52>0,                _if_conditional118) {
                    # 117 "04heap.c"
                    result_29->mPointerNum+=pointer_num_52;
                }
                if(array_num_50 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_50, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        else {
            # 122 "04heap.c"
            list$1sTypeph_reset(result_29->mGenericsTypes);
            # 128 "04heap.c"
            for(
            o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_59=list$1sTypeph_begin((o2_saved_58)) ,            0;            _for_condtionalA2=            !list$1sTypeph_end((o2_saved_58)) ,            _for_condtionalA2;            it_59=list$1sTypeph_next((o2_saved_58)) ,            0            ){
                # 124 "04heap.c"
                type_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=solve_generics(it_59,generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value60;
                __freed_obj__ = 0;
                # 125 "04heap.c"
                list$1sTypeph_push_back(result_29->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type_60)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value61;
                __freed_obj__ = 0;
                if(type_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_58 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 134 "04heap.c"
            # 128 "04heap.c"
            if(_if_conditional119=!output_generics_struct(result_29,generics_type,info),            _if_conditional119) {
                # 130 "04heap.c"
                new_name_61=(char*)come_increment_ref_count(((char*)(right_value62=create_generics_name(type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                # 131 "04heap.c"
                printf("output generics is failed(%s)",new_name_61);
                # 132 "04heap.c"
                exit(1);
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
            result_5->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional29) {
            # 5 "sType_clone"
            __dec_obj12=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj12) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value17;
            __freed_obj__ = 0;
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional33=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional33) {
            # 6 "sType_clone"
            __dec_obj13=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value18;
            __freed_obj__ = 0;
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional34=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional34) {
            # 7 "sType_clone"
            __dec_obj14=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(self->mGenericsName))));
            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional35) {
            # 8 "sType_clone"
            __dec_obj18=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value26;
            __freed_obj__ = 0;
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional39=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional39) {
            # 9 "sType_clone"
            __dec_obj22=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(self->mArrayNum))));
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
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional53) {
            # 11 "sType_clone"
            __dec_obj23=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj23) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value35;
            __freed_obj__ = 0;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional54=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional54) {
            # 12 "sType_clone"
            __dec_obj27=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj27) { come_call_finalizer(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional58=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional58) {
            # 13 "sType_clone"
            __dec_obj28=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(self->mResultType))));
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
            result_5->mVarArgs=self->mVarArgs;
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional60=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional60) {
            # 15 "sType_clone"
            __dec_obj29=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mAlignas))));
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
            result_5->mUnsigned=self->mUnsigned;
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 17 "sType_clone"
            result_5->mShort=self->mShort;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 18 "sType_clone"
            result_5->mLong=self->mLong;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 19 "sType_clone"
            result_5->mLongLong=self->mLongLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 20 "sType_clone"
            result_5->mConstant=self->mConstant;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 21 "sType_clone"
            result_5->mRegister=self->mRegister;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 22 "sType_clone"
            result_5->mVolatile=self->mVolatile;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 23 "sType_clone"
            result_5->mStatic=self->mStatic;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 24 "sType_clone"
            result_5->mExtern=self->mExtern;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 25 "sType_clone"
            result_5->mRestrict=self->mRestrict;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 26 "sType_clone"
            result_5->mImmutable=self->mImmutable;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 27 "sType_clone"
            result_5->mHeap=self->mHeap;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 28 "sType_clone"
            result_5->mDummyHeap=self->mDummyHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 29 "sType_clone"
            result_5->mDelegate=self->mDelegate;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 30 "sType_clone"
            result_5->mShare=self->mShare;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 31 "sType_clone"
            result_5->mClone=self->mClone;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 32 "sType_clone"
            result_5->mNoHeap=self->mNoHeap;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 33 "sType_clone"
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 34 "sType_clone"
            result_5->mRefference=self->mRefference;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 35 "sType_clone"
            result_5->mException=self->mException;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 36 "sType_clone"
            result_5->mPointerNum=self->mPointerNum;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 37 "sType_clone"
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 38 "sType_clone"
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional84=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional84) {
            # 39 "sType_clone"
            __dec_obj30=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mSizeNum))));
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
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 41 "sType_clone"
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional87=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional87) {
            # 42 "sType_clone"
            __dec_obj31=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mOriginalTypeName))));
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
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 44 "sType_clone"
            result_5->mFunctionParam=self->mFunctionParam;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 45 "sType_clone"
            result_5->mAllocaValue=self->mAllocaValue;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 46 "sType_clone"
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 47 "sType_clone"
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 48 "sType_clone"
            result_5->mComeMemCore=self->mComeMemCore;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 49 "sType_clone"
            result_5->mInline=self->mInline;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 50 "sType_clone"
            result_5->mNullValue=self->mNullValue;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional96) {
            # 51 "sType_clone"
            __dec_obj32=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mAsmName))));
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
            if(_if_conditional12=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional12) {
                # 0 "sType_finalize"
                if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional14) {
                # 1 "sType_finalize"
                if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional15) {
                # 2 "sType_finalize"
                if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional16=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional16) {
                # 3 "sType_finalize"
                if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional18) {
                # 4 "sType_finalize"
                if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional20) {
                # 5 "sType_finalize"
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional21) {
                # 6 "sType_finalize"
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional23) {
                # 7 "sType_finalize"
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional24) {
                # 8 "sType_finalize"
                if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional25) {
                # 9 "sType_finalize"
                if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional26) {
                # 10 "sType_finalize"
                if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional27) {
                # 11 "sType_finalize"
                if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
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
                    if(_if_conditional13=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional13) {
                        # 0 "tuple1$1sTypephp_finalize"
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    it_6=self->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        # 178 "./comelang2.h"
                        prev_it_7=it_6;
                        # 179 "./comelang2.h"
                        it_6=it_6->next;
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
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                # 0 "list_item$1sTypephp_finalize"
                                if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    it_8=self->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        # 178 "./comelang2.h"
                        prev_it_9=it_8;
                        # 179 "./comelang2.h"
                        it_8=it_8->next;
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
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
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
                    it_10=self->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        # 178 "./comelang2.h"
                        prev_it_11=it_10;
                        # 179 "./comelang2.h"
                        it_10=it_10->next;
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
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
                                # 0 "list_item$1charphp_finalize"
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
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
                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional32) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj11=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_clone(self->v1))));
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
                    if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional31) {
                        # 0 "tuple1$1sTypeph_finalize"
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value25;
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
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value21;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_14=self->head;
                # 204 "./comelang2.h"
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    # 199 "./comelang2.h"
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_14=it_14->next;
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
                    self->head=((void*)0);
                    # 158 "./comelang2.h"
                    self->tail=((void*)0);
                    # 159 "./comelang2.h"
                    self->len=0;
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
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            # 209 "./comelang2.h"
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value22;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            litem_15->prev=((void*)0);
                            # 212 "./comelang2.h"
                            litem_15->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj15=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 215 "./comelang2.h"
                            self->tail=litem_15;
                            # 216 "./comelang2.h"
                            self->head=litem_15;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                # 219 "./comelang2.h"
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value23;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                litem_16->prev=self->head;
                                # 222 "./comelang2.h"
                                litem_16->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj16=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 225 "./comelang2.h"
                                self->tail=litem_16;
                                # 226 "./comelang2.h"
                                self->head->next=litem_16;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value24;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                litem_17->prev=self->tail;
                                # 232 "./comelang2.h"
                                litem_17->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj17=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 235 "./comelang2.h"
                                self->tail->next=litem_17;
                                # 236 "./comelang2.h"
                                self->tail=litem_17;
                            }
                        }
                        # 239 "./comelang2.h"
                        self->len++;
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
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value33;
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
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value28;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_19=self->head;
                # 204 "./comelang2.h"
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    # 199 "./comelang2.h"
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_19=it_19->next;
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
                    self->head=((void*)0);
                    # 158 "./comelang2.h"
                    self->tail=((void*)0);
                    # 159 "./comelang2.h"
                    self->len=0;
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
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            # 209 "./comelang2.h"
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value29;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            litem_20->prev=((void*)0);
                            # 212 "./comelang2.h"
                            litem_20->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj19=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                            # 215 "./comelang2.h"
                            self->tail=litem_20;
                            # 216 "./comelang2.h"
                            self->head=litem_20;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                # 219 "./comelang2.h"
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value30;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                litem_21->prev=self->head;
                                # 222 "./comelang2.h"
                                litem_21->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj20=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                # 225 "./comelang2.h"
                                self->tail=litem_21;
                                # 226 "./comelang2.h"
                                self->head->next=litem_21;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                litem_22->prev=self->tail;
                                # 232 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj21=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                # 235 "./comelang2.h"
                                self->tail->next=litem_22;
                                # 236 "./comelang2.h"
                                self->tail=litem_22;
                            }
                        }
                        # 239 "./comelang2.h"
                        self->len++;
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
                        if(_if_conditional44=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional44) {
                            # 4 "sNode_clone"
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            # 5 "sNode_clone"
                            result_23->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            # 6 "sNode_clone"
                            result_23->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            # 7 "sNode_clone"
                            result_23->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            # 8 "sNode_clone"
                            result_23->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 9 "sNode_clone"
                            result_23->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            # 10 "sNode_clone"
                            result_23->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            # 11 "sNode_clone"
                            result_23->kind=self->kind;
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
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value41;
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
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value36;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value37;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_25=self->head;
                # 204 "./comelang2.h"
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    # 199 "./comelang2.h"
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value41=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_25=it_25->next;
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
                    self->head=((void*)0);
                    # 158 "./comelang2.h"
                    self->tail=((void*)0);
                    # 159 "./comelang2.h"
                    self->len=0;
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
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            # 209 "./comelang2.h"
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value38;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            litem_26->prev=((void*)0);
                            # 212 "./comelang2.h"
                            litem_26->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj24=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                            # 215 "./comelang2.h"
                            self->tail=litem_26;
                            # 216 "./comelang2.h"
                            self->head=litem_26;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                # 219 "./comelang2.h"
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value39;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                litem_27->prev=self->head;
                                # 222 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj25=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                # 225 "./comelang2.h"
                                self->tail=litem_27;
                                # 226 "./comelang2.h"
                                self->head->next=litem_27;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value40;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                litem_28->prev=self->tail;
                                # 232 "./comelang2.h"
                                litem_28->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj26=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                # 235 "./comelang2.h"
                                self->tail->next=litem_28;
                                # 236 "./comelang2.h"
                                self->tail=litem_28;
                            }
                        }
                        # 239 "./comelang2.h"
                        self->len++;
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
        __result32__ = self->len;
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
            __dec_obj33=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(v1))));
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
            it_32=self->head;
            # 490 "./comelang2.h"
            while(_while_condtional7=it_32!=((void*)0),            _while_condtional7) {
                # 485 "./comelang2.h"
                prev_it_33=it_32;
                # 486 "./comelang2.h"
                it_32=it_32->next;
                # 487 "./comelang2.h"
                if(prev_it_33 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 490 "./comelang2.h"
            self->head=((void*)0);
            # 491 "./comelang2.h"
            self->tail=((void*)0);
            # 493 "./comelang2.h"
            self->len=0;
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
struct sType* __result36__;
_Bool _if_conditional101;
struct sType* __result37__;
struct sType* result_36;
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
                memset(&result_35,0,sizeof(struct sType*));
                # 341 "./comelang2.h"
                __result36__ = __result_obj__ = result_35;
                return __result36__;
            }
            # 343 "./comelang2.h"
            self->it=self->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional101=self->it,            _if_conditional101) {
                # 346 "./comelang2.h"
                __result37__ = __result_obj__ = self->it->item;
                return __result37__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            memset(&result_36,0,sizeof(struct sType*));
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
            __result39__ = self==((void*)0)||self->it==((void*)0);
            return __result39__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct sType* result_38;
struct sType* __result40__;
_Bool _if_conditional103;
struct sType* __result41__;
struct sType* result_39;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_38, 0, sizeof(struct sType*));
memset(&result_39, 0, sizeof(struct sType*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional102=self==((void*)0)||self->it==((void*)0),            _if_conditional102) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                memset(&result_38,0,sizeof(struct sType*));
                # 358 "./comelang2.h"
                __result40__ = __result_obj__ = result_38;
                return __result40__;
            }
            # 361 "./comelang2.h"
            self->it=self->it->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional103=self->it,            _if_conditional103) {
                # 364 "./comelang2.h"
                __result41__ = __result_obj__ = self->it->item;
                return __result41__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            memset(&result_39,0,sizeof(struct sType*));
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
                if(_if_conditional104=self->len==0,                _if_conditional104) {
                    # 279 "./comelang2.h"
                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value54;
                    __freed_obj__ = 0;
                    # 281 "./comelang2.h"
                    litem_41->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_41->next=((void*)0);
                    # 283 "./comelang2.h"
                    __dec_obj35=litem_41->item;
                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 285 "./comelang2.h"
                    self->tail=litem_41;
                    # 286 "./comelang2.h"
                    self->head=litem_41;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional105=self->len==1,                    _if_conditional105) {
                        # 289 "./comelang2.h"
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                        # 291 "./comelang2.h"
                        litem_42->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_42->next=((void*)0);
                        # 293 "./comelang2.h"
                        __dec_obj36=litem_42->item;
                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 295 "./comelang2.h"
                        self->tail=litem_42;
                        # 296 "./comelang2.h"
                        self->head->next=litem_42;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value56;
                        __freed_obj__ = 0;
                        # 301 "./comelang2.h"
                        litem_43->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_43->next=((void*)0);
                        # 303 "./comelang2.h"
                        __dec_obj37=litem_43->item;
                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 305 "./comelang2.h"
                        self->tail->next=litem_43;
                        # 306 "./comelang2.h"
                        self->tail=litem_43;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
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
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_45=self->head;
                # 746 "./comelang2.h"
                i_46=0;
                # 753 "./comelang2.h"
                while(_while_condtional8=it_45!=((void*)0),                _while_condtional8) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional109=position==i_46,                    _if_conditional109) {
                        # 749 "./comelang2.h"
                        __result44__ = __result_obj__ = it_45->item;
                        return __result44__;
                    }
                    # 751 "./comelang2.h"
                    it_45=it_45->next;
                    # 752 "./comelang2.h"
                    i_46++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_47,0,sizeof(struct sType*));
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
                    __result46__ = self->len;
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
        result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=solve_generics(result_62,generics_type,info))));
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
_Bool _if_conditional123;
_Bool _if_conditional124;
int n_64;
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
            if(_if_conditional123=strcmp(p_63,"right_value")==0,            _if_conditional123) {
                # 164 "04heap.c"
                p_63+=strlen("right_value");
                # 173 "04heap.c"
                # 165 "04heap.c"
                if(_if_conditional124=xisdigit(*p_63),                _if_conditional124) {
                    # 166 "04heap.c"
                    n_64=0;
                    # 171 "04heap.c"
                    while(_while_condtional10=xisdigit(*p_63),                    _while_condtional10) {
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
char* __result51__;
_Bool _if_conditional126;
void* right_value66;
char* __result52__;
void* right_value67;
struct sRightValueObject* new_value_65;
struct sType* __dec_obj41;
void* right_value68;
char* __dec_obj42;
void* right_value69;
char* __dec_obj43;
void* right_value73;
char* buf_69;
void* right_value74;
void* right_value75;
char* __result56__;
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
        __result51__ = __result_obj__ = ((char*)(right_value65=__builtin_string(obj)));
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = 0;
        return __result51__;
    }
    # 188 "04heap.c"
    # 185 "04heap.c"
    if(_if_conditional126=info->no_output_come_code,    _if_conditional126) {
        # 186 "04heap.c"
        __result52__ = __result_obj__ = ((char*)(right_value66=__builtin_string("")));
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
    __dec_obj41=new_value_65->mType;
    new_value_65->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 190 "04heap.c"
    new_value_65->mFreed=(_Bool)0;
    # 191 "04heap.c"
    new_value_65->mID=gRightValueNum;
    # 192 "04heap.c"
    __dec_obj42=new_value_65->mVarName;
    new_value_65->mVarName=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("right_value%d",gRightValueNum++))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value68;
    __freed_obj__ = 0;
    # 193 "04heap.c"
    __dec_obj43=new_value_65->mFunName;
    new_value_65->mFunName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(info->come_fun->mName))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value69;
    __freed_obj__ = 0;
    # 194 "04heap.c"
    new_value_65->mBlockLevel=info->block_level;
    # 196 "04heap.c"
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_65));
    # 198 "04heap.c"
    buf_69=(char*)come_increment_ref_count(((char*)(right_value73=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value73;
    __freed_obj__ = 0;
    # 199 "04heap.c"
    add_come_code_at_function_head(info,buf_69);
    # 200 "04heap.c"
    add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1);
    # 202 "04heap.c"
    __result56__ = __result_obj__ = ((char*)(right_value75=xsprintf("((%s)(%s=%s))",optional$2charphbool_value(((struct optional$2charphbool*)(right_value74=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info)))),new_value_65->mVarName,obj)));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_65 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_69 && !__freed_obj__) { buf_69 = come_decrement_ref_count(buf_69, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value75;
    __freed_obj__ = 0;
    return __result56__;
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
        if(_if_conditional127=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional127) {
            # 0 "sRightValueObject_finalize"
            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 2 "sRightValueObject_finalize"
        # 1 "sRightValueObject_finalize"
        if(_if_conditional128=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional128) {
            # 1 "sRightValueObject_finalize"
            if(self->mVarName && !__freed_obj__) { self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 3 "sRightValueObject_finalize"
        # 2 "sRightValueObject_finalize"
        if(_if_conditional129=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional129) {
            # 2 "sRightValueObject_finalize"
            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
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
        if(_if_conditional130=self->len==0,        _if_conditional130) {
            # 279 "./comelang2.h"
            litem_66=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value70=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            litem_66->prev=((void*)0);
            # 282 "./comelang2.h"
            litem_66->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj44=litem_66->item;
            litem_66->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj44) { come_call_finalizer(sRightValueObject_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            self->tail=litem_66;
            # 286 "./comelang2.h"
            self->head=litem_66;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional132=self->len==1,            _if_conditional132) {
                # 289 "./comelang2.h"
                litem_67=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value71=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value71;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                litem_67->prev=self->head;
                # 292 "./comelang2.h"
                litem_67->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj45=litem_67->item;
                litem_67->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj45) { come_call_finalizer(sRightValueObject_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                self->tail=litem_67;
                # 296 "./comelang2.h"
                self->head->next=litem_67;
            }
            else {
                # 299 "./comelang2.h"
                litem_68=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value72=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value72;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                litem_68->prev=self->tail;
                # 302 "./comelang2.h"
                litem_68->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj46=litem_68->item;
                litem_68->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj46) { come_call_finalizer(sRightValueObject_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                self->tail->next=litem_68;
                # 306 "./comelang2.h"
                self->tail=litem_68;
            }
        }
        # 309 "./comelang2.h"
        self->len++;
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
                if(_if_conditional131=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional131) {
                    # 0 "list_item$1sRightValueObjectphp_finalize"
                    if(self->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
char* default_value_70;
char* __result54__;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_70, 0, sizeof(char*));
        # 69 "./comelang2.h"
        # 61 "./comelang2.h"
        if(_if_conditional133=self==((void*)0),        _if_conditional133) {
            # 62 "./comelang2.h"
            # 63 "./comelang2.h"
            memset(&default_value_70,0,sizeof(char*));
            # 64 "./comelang2.h"
            __result54__ = __result_obj__ = default_value_70;
            return __result54__;
        }
        else {
            # 67 "./comelang2.h"
            __result55__ = __result_obj__ = self->v1;
            return __result55__;
        }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "optional$2charphboolp_finalize"
        # 0 "optional$2charphboolp_finalize"
        if(_if_conditional134=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional134) {
            # 0 "optional$2charphboolp_finalize"
            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
int i_71;
struct list$1sRightValueObjectph* o2_saved_72;
struct sRightValueObject* it_75;
_Bool _for_condtionalA3;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_71, 0, sizeof(int));
memset(&o2_saved_72, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_75, 0, sizeof(struct sRightValueObject*));
    # 210 "04heap.c"
    # 207 "04heap.c"
    if(_if_conditional135=gComeGC,    _if_conditional135) {
        # 208 "04heap.c"
        return;
    }
    # 210 "04heap.c"
    i_71=0;
    # 218 "04heap.c"
    for(
    o2_saved_72=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_75=list$1sRightValueObjectph_begin((o2_saved_72)) ,    0;    _for_condtionalA3=    !list$1sRightValueObjectph_end((o2_saved_72)) ,    _for_condtionalA3;    it_75=list$1sRightValueObjectph_next((o2_saved_72)) ,    0    ){
        # 215 "04heap.c"
        # 212 "04heap.c"
        if(_if_conditional140=it_75->mID==right_value_num,        _if_conditional140) {
            # 213 "04heap.c"
            break;
        }
        # 215 "04heap.c"
        i_71++;
    }
    if(o2_saved_72 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 218 "04heap.c"
    list$1sRightValueObjectph_delete(info->right_value_objects,i_71,i_71+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
struct sRightValueObject* result_73;
struct sRightValueObject* __result57__;
_Bool _if_conditional137;
struct sRightValueObject* __result58__;
struct sRightValueObject* result_74;
struct sRightValueObject* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(struct sRightValueObject*));
memset(&result_74, 0, sizeof(struct sRightValueObject*));
        # 343 "./comelang2.h"
        # 338 "./comelang2.h"
        if(_if_conditional136=self==((void*)0),        _if_conditional136) {
            # 339 "./comelang2.h"
            # 340 "./comelang2.h"
            memset(&result_73,0,sizeof(struct sRightValueObject*));
            # 341 "./comelang2.h"
            __result57__ = __result_obj__ = result_73;
            return __result57__;
        }
        # 343 "./comelang2.h"
        self->it=self->head;
        # 349 "./comelang2.h"
        # 345 "./comelang2.h"
        if(_if_conditional137=self->it,        _if_conditional137) {
            # 346 "./comelang2.h"
            __result58__ = __result_obj__ = self->it->item;
            return __result58__;
        }
        # 349 "./comelang2.h"
        # 350 "./comelang2.h"
        memset(&result_74,0,sizeof(struct sRightValueObject*));
        # 351 "./comelang2.h"
        __result59__ = __result_obj__ = result_74;
        return __result59__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 373 "./comelang2.h"
        __result60__ = self==((void*)0)||self->it==((void*)0);
        return __result60__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
struct sRightValueObject* result_76;
struct sRightValueObject* __result61__;
_Bool _if_conditional139;
struct sRightValueObject* __result62__;
struct sRightValueObject* result_77;
struct sRightValueObject* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(struct sRightValueObject*));
memset(&result_77, 0, sizeof(struct sRightValueObject*));
        # 361 "./comelang2.h"
        # 355 "./comelang2.h"
        if(_if_conditional138=self==((void*)0)||self->it==((void*)0),        _if_conditional138) {
            # 356 "./comelang2.h"
            # 357 "./comelang2.h"
            memset(&result_76,0,sizeof(struct sRightValueObject*));
            # 358 "./comelang2.h"
            __result61__ = __result_obj__ = result_76;
            return __result61__;
        }
        # 361 "./comelang2.h"
        self->it=self->it->next;
        # 367 "./comelang2.h"
        # 363 "./comelang2.h"
        if(_if_conditional139=self->it,        _if_conditional139) {
            # 364 "./comelang2.h"
            __result62__ = __result_obj__ = self->it->item;
            return __result62__;
        }
        # 367 "./comelang2.h"
        # 368 "./comelang2.h"
        memset(&result_77,0,sizeof(struct sRightValueObject*));
        # 369 "./comelang2.h"
        __result63__ = __result_obj__ = result_77;
        return __result63__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_78;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 176 "./comelang2.h"
        it_78=self->head;
        # 182 "./comelang2.h"
        while(_while_condtional11=it_78!=((void*)0),        _while_condtional11) {
            # 178 "./comelang2.h"
            prev_it_79=it_78;
            # 179 "./comelang2.h"
            it_78=it_78->next;
            # 180 "./comelang2.h"
            if(prev_it_79 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
int tmp_80;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list$1sRightValueObjectph* __result64__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1sRightValueObjectph* it_83;
int i_84;
_Bool _while_condtional13;
_Bool _if_conditional149;
struct list_item$1sRightValueObjectph* prev_it_85;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list_item$1sRightValueObjectph* it_86;
int i_87;
_Bool _while_condtional14;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list_item$1sRightValueObjectph* prev_it_88;
struct list_item$1sRightValueObjectph* it_89;
struct list_item$1sRightValueObjectph* head_prev_it_90;
struct list_item$1sRightValueObjectph* tail_it_91;
int i_92;
_Bool _while_condtional15;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1sRightValueObjectph* prev_it_93;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list$1sRightValueObjectph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_80, 0, sizeof(int));
memset(&it_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_84, 0, sizeof(int));
memset(&prev_it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_87, 0, sizeof(int));
memset(&prev_it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_91, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_92, 0, sizeof(int));
memset(&prev_it_93, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 517 "./comelang2.h"
        # 514 "./comelang2.h"
        if(_if_conditional141=head<0,        _if_conditional141) {
            # 515 "./comelang2.h"
            head+=self->len;
        }
        # 521 "./comelang2.h"
        # 517 "./comelang2.h"
        if(_if_conditional142=tail<0,        _if_conditional142) {
            # 518 "./comelang2.h"
            tail+=self->len+1;
        }
        # 527 "./comelang2.h"
        # 521 "./comelang2.h"
        if(_if_conditional143=head>tail,        _if_conditional143) {
            # 522 "./comelang2.h"
            tmp_80=tail;
            # 523 "./comelang2.h"
            tail=head;
            # 524 "./comelang2.h"
            head=tmp_80;
        }
        # 531 "./comelang2.h"
        # 527 "./comelang2.h"
        if(_if_conditional144=head<0,        _if_conditional144) {
            # 528 "./comelang2.h"
            head=0;
        }
        # 535 "./comelang2.h"
        # 531 "./comelang2.h"
        if(_if_conditional145=tail>self->len,        _if_conditional145) {
            # 532 "./comelang2.h"
            tail=self->len;
        }
        # 539 "./comelang2.h"
        # 535 "./comelang2.h"
        if(_if_conditional146=head==tail,        _if_conditional146) {
            # 536 "./comelang2.h"
            __result64__ = __result_obj__ = self;
            return __result64__;
        }
        # 634 "./comelang2.h"
        # 539 "./comelang2.h"
        if(_if_conditional147=head==0&&tail==self->len,        _if_conditional147) {
            # 541 "./comelang2.h"
            list$1sRightValueObjectph_reset(self);
        }
        else {
            # 634 "./comelang2.h"
            # 543 "./comelang2.h"
            if(_if_conditional148=head==0,            _if_conditional148) {
                # 544 "./comelang2.h"
                it_83=self->head;
                # 545 "./comelang2.h"
                i_84=0;
                # 567 "./comelang2.h"
                while(_while_condtional13=it_83!=((void*)0),                _while_condtional13) {
                    # 566 "./comelang2.h"
                    # 547 "./comelang2.h"
                    if(_if_conditional149=i_84<tail,                    _if_conditional149) {
                        # 548 "./comelang2.h"
                        prev_it_85=it_83;
                        # 550 "./comelang2.h"
                        it_83=it_83->next;
                        # 551 "./comelang2.h"
                        i_84++;
                        # 553 "./comelang2.h"
                        if(prev_it_85 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 555 "./comelang2.h"
                        self->len--;
                    }
                    else {
                        # 566 "./comelang2.h"
                        # 557 "./comelang2.h"
                        if(_if_conditional150=i_84==tail,                        _if_conditional150) {
                            # 558 "./comelang2.h"
                            self->head=it_83;
                            # 559 "./comelang2.h"
                            self->head->prev=((void*)0);
                            # 560 "./comelang2.h"
                            break;
                        }
                        else {
                            # 563 "./comelang2.h"
                            it_83=it_83->next;
                            # 564 "./comelang2.h"
                            i_84++;
                        }
                    }
                }
            }
            else {
                # 634 "./comelang2.h"
                # 568 "./comelang2.h"
                if(_if_conditional151=tail==self->len,                _if_conditional151) {
                    # 569 "./comelang2.h"
                    it_86=self->head;
                    # 570 "./comelang2.h"
                    i_87=0;
                    # 592 "./comelang2.h"
                    while(_while_condtional14=it_86!=((void*)0),                    _while_condtional14) {
                        # 577 "./comelang2.h"
                        # 572 "./comelang2.h"
                        if(_if_conditional152=i_87==head,                        _if_conditional152) {
                            # 573 "./comelang2.h"
                            self->tail=it_86->prev;
                            # 574 "./comelang2.h"
                            self->tail->next=((void*)0);
                        }
                        # 591 "./comelang2.h"
                        # 577 "./comelang2.h"
                        if(_if_conditional153=i_87>=head,                        _if_conditional153) {
                            # 578 "./comelang2.h"
                            prev_it_88=it_86;
                            # 580 "./comelang2.h"
                            it_86=it_86->next;
                            # 581 "./comelang2.h"
                            i_87++;
                            # 583 "./comelang2.h"
                            if(prev_it_88 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 585 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 588 "./comelang2.h"
                            it_86=it_86->next;
                            # 589 "./comelang2.h"
                            i_87++;
                        }
                    }
                }
                else {
                    # 594 "./comelang2.h"
                    it_89=self->head;
                    # 596 "./comelang2.h"
                    head_prev_it_90=((void*)0);
                    # 597 "./comelang2.h"
                    tail_it_91=((void*)0);
                    # 600 "./comelang2.h"
                    i_92=0;
                    # 626 "./comelang2.h"
                    while(_while_condtional15=it_89!=((void*)0),                    _while_condtional15) {
                        # 605 "./comelang2.h"
                        # 602 "./comelang2.h"
                        if(_if_conditional154=i_92==head,                        _if_conditional154) {
                            # 603 "./comelang2.h"
                            head_prev_it_90=it_89->prev;
                        }
                        # 609 "./comelang2.h"
                        # 605 "./comelang2.h"
                        if(_if_conditional155=i_92==tail,                        _if_conditional155) {
                            # 606 "./comelang2.h"
                            tail_it_91=it_89;
                        }
                        # 624 "./comelang2.h"
                        # 609 "./comelang2.h"
                        if(_if_conditional156=i_92>=head&&i_92<tail,                        _if_conditional156) {
                            # 611 "./comelang2.h"
                            prev_it_93=it_89;
                            # 613 "./comelang2.h"
                            it_89=it_89->next;
                            # 614 "./comelang2.h"
                            i_92++;
                            # 616 "./comelang2.h"
                            if(prev_it_93 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 618 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 621 "./comelang2.h"
                            it_89=it_89->next;
                            # 622 "./comelang2.h"
                            i_92++;
                        }
                    }
                    # 629 "./comelang2.h"
                    # 626 "./comelang2.h"
                    if(_if_conditional157=head_prev_it_90!=((void*)0),                    _if_conditional157) {
                        # 627 "./comelang2.h"
                        head_prev_it_90->next=tail_it_91;
                    }
                    # 632 "./comelang2.h"
                    # 629 "./comelang2.h"
                    if(_if_conditional158=tail_it_91!=((void*)0),                    _if_conditional158) {
                        # 630 "./comelang2.h"
                        tail_it_91->prev=head_prev_it_90;
                    }
                }
            }
        }
        # 634 "./comelang2.h"
        __result66__ = __result_obj__ = self;
        return __result66__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_81;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_82;
struct list$1sRightValueObjectph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_81, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 483 "./comelang2.h"
                it_81=self->head;
                # 490 "./comelang2.h"
                while(_while_condtional12=it_81!=((void*)0),                _while_condtional12) {
                    # 485 "./comelang2.h"
                    prev_it_82=it_81;
                    # 486 "./comelang2.h"
                    it_81=it_81->next;
                    # 487 "./comelang2.h"
                    if(prev_it_82 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 490 "./comelang2.h"
                self->head=((void*)0);
                # 491 "./comelang2.h"
                self->tail=((void*)0);
                # 493 "./comelang2.h"
                self->len=0;
                # 495 "./comelang2.h"
                __result65__ = __result_obj__ = self;
                return __result65__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
void* right_value76;
char* __result67__;
struct sClass* klass_94;
void* right_value77;
char* type_name_95;
void* right_value78;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&klass_94, 0, sizeof(struct sClass*));
memset(&right_value77, 0, sizeof(void*));
memset(&type_name_95, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
    # 226 "04heap.c"
    # 223 "04heap.c"
    if(_if_conditional159=gComeGC,    _if_conditional159) {
        # 224 "04heap.c"
        __result67__ = __result_obj__ = ((char*)(right_value76=__builtin_string(obj)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value76;
        __freed_obj__ = 0;
        return __result67__;
    }
    # 226 "04heap.c"
    klass_94=type->mClass;
    # 228 "04heap.c"
    type_name_95=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value77=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    # 230 "04heap.c"
    __result69__ = __result_obj__ = ((char*)(right_value78=xsprintf("(%s)come_increment_ref_count(%s)",type_name_95,obj)));
    if(type_name_95 && !__freed_obj__) { type_name_95 = come_decrement_ref_count(type_name_95, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value78;
    __freed_obj__ = 0;
    return __result69__;
    if(type_name_95 && !__freed_obj__) { type_name_95 = come_decrement_ref_count(type_name_95, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 78 "./comelang2.h"
        # 72 "./comelang2.h"
        if(_if_conditional160=!self->v2,        _if_conditional160) {
            # 73 "./comelang2.h"
            puts("Exception: at");
            # 74 "./comelang2.h"
            exception_stackframe();
            # 75 "./comelang2.h"
            puts("abort.");
            # 76 "./comelang2.h"
            exit(2);
        }
        # 78 "./comelang2.h"
        __result68__ = __result_obj__ = self->v1;
        return __result68__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
struct list$1CVALUEph* stack_saved_96;
struct list$1sRightValueObjectph* right_value_objects_97;
struct sClass* klass_98;
static int dec_num_99=0;
void* right_value79;
char* name_100;
void* right_value80;
_Bool no_decrement_101;
_Bool no_free_102;
_Bool _if_conditional162;
void* right_value81;
char* c_value_103;
struct sClass* klass_104;
char* class_name_105;
char* fun_name_106;
void* right_value82;
struct sType* type2_107;
void* right_value83;
char* fun_name2_108;
struct sFun* finalizer_109;
_Bool _if_conditional163;
_Bool _if_conditional169;
void* right_value87;
char* none_generics_name_114;
void* right_value88;
char* generics_fun_name_115;
struct sGenericsFun* generics_fun_119;
_Bool _if_conditional174;
_Bool _if_conditional175;
int i_120;
_Bool _for_condtionalA4;
void* right_value92;
char* new_fun_name_121;
_Bool _if_conditional176;
void* right_value93;
char* __dec_obj47;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value94;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_122;
char* new_fun_name_123;
char* __dec_obj48;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value95;
char* type_name_124;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value96;
_Bool _if_conditional184;
void* right_value97;
char* type_name_125;
void* right_value98;
void* right_value99;
struct list$1sRightValueObjectph* __dec_obj49;
struct list$1CVALUEph* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_96, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_97, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_98, 0, sizeof(struct sClass*));
memset(&right_value79, 0, sizeof(void*));
memset(&name_100, 0, sizeof(char*));
memset(&right_value80, 0, sizeof(void*));
memset(&no_decrement_101, 0, sizeof(_Bool));
memset(&no_free_102, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&c_value_103, 0, sizeof(char*));
memset(&klass_104, 0, sizeof(struct sClass*));
memset(&class_name_105, 0, sizeof(char*));
memset(&fun_name_106, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&type2_107, 0, sizeof(struct sType*));
memset(&right_value83, 0, sizeof(void*));
memset(&fun_name2_108, 0, sizeof(char*));
memset(&finalizer_109, 0, sizeof(struct sFun*));
memset(&right_value87, 0, sizeof(void*));
memset(&none_generics_name_114, 0, sizeof(char*));
memset(&right_value88, 0, sizeof(void*));
memset(&generics_fun_name_115, 0, sizeof(char*));
memset(&generics_fun_119, 0, sizeof(struct sGenericsFun*));
memset(&i_120, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&new_fun_name_121, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&fun_122, 0, sizeof(struct sFun*));
memset(&new_fun_name_123, 0, sizeof(char*));
memset(&fun_122, 0, sizeof(struct sFun*));
memset(&new_fun_name_123, 0, sizeof(char*));
memset(&right_value95, 0, sizeof(void*));
memset(&type_name_124, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&type_name_125, 0, sizeof(char*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
    # 238 "04heap.c"
    # 235 "04heap.c"
    if(_if_conditional161=gComeGC,    _if_conditional161) {
        # 236 "04heap.c"
        return;
    }
    # 238 "04heap.c"
    stack_saved_96=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 239 "04heap.c"
    right_value_objects_97=info->right_value_objects;
    # 241 "04heap.c"
    klass_98=type->mClass;
    # 243 "04heap.c"
    # 245 "04heap.c"
    name_100=(char*)come_increment_ref_count(((char*)(right_value79=xsprintf("__dec_obj%d",++dec_num_99))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value79;
    __freed_obj__ = 0;
    # 246 "04heap.c"
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value80=make_define_var(type,name_100,(_Bool)0,info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value80;
    __freed_obj__ = 0;
    # 248 "04heap.c"
    add_come_code(info,"%s=%s;\n",name_100,obj);
    # 250 "04heap.c"
    obj=name_100;
    # 251 "04heap.c"
    no_decrement_101=(_Bool)0;
    # 252 "04heap.c"
    no_free_102=(_Bool)0;
    # 338 "04heap.c"
    # 254 "04heap.c"
    if(_if_conditional162=type->mPointerNum>0,    _if_conditional162) {
        # 255 "04heap.c"
        c_value_103=(char*)come_increment_ref_count(((char*)(right_value81=__builtin_string(obj))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = 0;
        # 257 "04heap.c"
        klass_104=type->mClass;
        # 259 "04heap.c"
        class_name_105=klass_104->mName;
        # 261 "04heap.c"
        fun_name_106="finalize";
        # 263 "04heap.c"
        type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value82;
        __freed_obj__ = 0;
        # 264 "04heap.c"
        type2_107->mHeap=(_Bool)0;
        # 266 "04heap.c"
        fun_name2_108=(char*)come_increment_ref_count(((char*)(right_value83=create_method_name(type,(_Bool)0,fun_name_106,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value83;
        __freed_obj__ = 0;
        # 268 "04heap.c"
        finalizer_109=((void*)0);
        # 305 "04heap.c"
        # 269 "04heap.c"
        if(_if_conditional163=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional163) {
            # 270 "04heap.c"
            finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_108);
            # 287 "04heap.c"
            # 272 "04heap.c"
            if(_if_conditional169=finalizer_109==((void*)0),            _if_conditional169) {
                # 273 "04heap.c"
                none_generics_name_114=(char*)come_increment_ref_count(((char*)(right_value87=get_none_generics_name(type2_107->mClass->mName))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                # 275 "04heap.c"
                generics_fun_name_115=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_%s",none_generics_name_114,fun_name_106))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
                # 276 "04heap.c"
                generics_fun_119=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_115);
                # 286 "04heap.c"
                # 278 "04heap.c"
                if(_if_conditional174=generics_fun_119,                _if_conditional174) {
                    # 284 "04heap.c"
                    # 279 "04heap.c"
                    if(_if_conditional175=!create_generics_fun((char*)come_increment_ref_count(fun_name2_108),generics_fun_119,type,info),                    _if_conditional175) {
                        # 281 "04heap.c"
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        # 282 "04heap.c"
                        exit(2);
                    }
                    # 284 "04heap.c"
                    finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_108);
                }
                if(none_generics_name_114 && !__freed_obj__) { none_generics_name_114 = come_decrement_ref_count(none_generics_name_114, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_115 && !__freed_obj__) { generics_fun_name_115 = come_decrement_ref_count(generics_fun_name_115, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            # 289 "04heap.c"
            # 300 "04heap.c"
            for(
            i_120=128-1 ,            0;            _for_condtionalA4=            i_120>=1 ,            _for_condtionalA4;            i_120-- ,            0            ){
                # 291 "04heap.c"
                new_fun_name_121=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s_v%d",fun_name2_108,i_120))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value92;
                __freed_obj__ = 0;
                # 292 "04heap.c"
                finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_121);
                # 298 "04heap.c"
                # 294 "04heap.c"
                if(_if_conditional176=finalizer_109,                _if_conditional176) {
                    # 295 "04heap.c"
                    __dec_obj47=fun_name2_108;
                    fun_name2_108=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(new_fun_name_121))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value93;
                    __freed_obj__ = 0;
                    # 296 "04heap.c"
                    if(new_fun_name_121 && !__freed_obj__) { new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                }
                if(new_fun_name_121 && !__freed_obj__) { new_fun_name_121 = come_decrement_ref_count(new_fun_name_121, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 303 "04heap.c"
            # 300 "04heap.c"
            if(_if_conditional177=finalizer_109==((void*)0),            _if_conditional177) {
                # 301 "04heap.c"
                finalizer_109=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_108);
            }
        }
        # 314 "04heap.c"
        # 305 "04heap.c"
        if(_if_conditional178=finalizer_109==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional178) {
            # 307 "04heap.c"
            multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value94=create_finalizer_automatically(type,fun_name_106,info)));
            fun_122=multiple_assgin_var1->v1;
            new_fun_name_123=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value94;
            __freed_obj__ = 0;
            # 309 "04heap.c"
            __dec_obj48=fun_name2_108;
            fun_name2_108=(char*)come_increment_ref_count(new_fun_name_123);
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            # 310 "04heap.c"
            finalizer_109=fun_122;
            if(new_fun_name_123 && !__freed_obj__) { new_fun_name_123 = come_decrement_ref_count(new_fun_name_123, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 336 "04heap.c"
        # 314 "04heap.c"
        if(_if_conditional180=finalizer_109!=((void*)0),        _if_conditional180) {
            # 326 "04heap.c"
            # 315 "04heap.c"
            if(_if_conditional181=klass_104->mProtocol&&type->mPointerNum==1,            _if_conditional181) {
                # 316 "04heap.c"
                type_name_124=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value95=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value95;
                __freed_obj__ = 0;
                # 320 "04heap.c"
                # 317 "04heap.c"
                if(_if_conditional182=c_value_103,                _if_conditional182) {
                    # 318 "04heap.c"
                    add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_103,fun_name2_108,c_value_103,type_name_124,c_value_103,type_name_124,c_value_103,type->mAllocaValue,no_decrement_101,no_free_102,force_delete_);
                }
                if(type_name_124 && !__freed_obj__) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 325 "04heap.c"
                # 322 "04heap.c"
                if(_if_conditional183=c_value_103,                _if_conditional183) {
                    # 323 "04heap.c"
                    add_come_last_code2(info,((char*)(right_value96=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_103,fun_name2_108,c_value_103,type->mAllocaValue,no_decrement_101,no_free_102,force_delete_))));
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
            if(_if_conditional184=klass_104->mProtocol&&type->mPointerNum==1,            _if_conditional184) {
                # 329 "04heap.c"
                type_name_125=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value97=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97;
                __freed_obj__ = 0;
                # 330 "04heap.c"
                add_come_last_code2(info,((char*)(right_value98=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_100,name_100,name_100,type_name_125,name_100,type_name_125,name_100))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value98;
                __freed_obj__ = 0;
                if(type_name_125 && !__freed_obj__) { type_name_125 = come_decrement_ref_count(type_name_125, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                # 333 "04heap.c"
                add_come_last_code2(info,((char*)(right_value99=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_100,name_100,name_100))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value99;
                __freed_obj__ = 0;
            }
        }
        if(c_value_103 && !__freed_obj__) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_107 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_108 && !__freed_obj__) { fun_name2_108 = come_decrement_ref_count(fun_name2_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 338 "04heap.c"
    __dec_obj49=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_97);
    if(__dec_obj49) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 339 "04heap.c"
    __dec_obj50=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_96);
    if(__dec_obj50) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_96 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_100 && !__freed_obj__) { name_100 = come_decrement_ref_count(name_100, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_110;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional16;
_Bool _if_conditional164;
void* right_value84;
_Bool _if_conditional166;
struct sFun* __result72__;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct sFun* __result73__;
struct sFun* __result74__;
void* right_value85;
void* right_value86;
struct sFun* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_110, 0, sizeof(struct sFun*));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
                # 1591 "./comelang2.h"
                # 1592 "./comelang2.h"
                memset(&default_value_110,0,sizeof(struct sFun*));
                # 1594 "./comelang2.h"
                hash_111=string_get_hash_key(((char*)key))%self->size;
                # 1595 "./comelang2.h"
                it_112=hash_111;
                # 1619 "./comelang2.h"
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    # 1617 "./comelang2.h"
                    # 1598 "./comelang2.h"
                    if(_if_conditional164=self->item_existance[it_112],                    _if_conditional164) {
                        # 1605 "./comelang2.h"
                        # 1600 "./comelang2.h"
                        if(_if_conditional166=optional$2boolbool_value(((struct optional$2boolbool*)(right_value84=string_equals(self->keys[it_112],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84),
                        (right_value84 && right_value84 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value84, 
                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            # 1602 "./comelang2.h"
                            __result72__ = __result_obj__ = self->items[it_112];
                            return __result72__;
                        }
                        # 1605 "./comelang2.h"
                        it_112++;
                        # 1613 "./comelang2.h"
                        # 1607 "./comelang2.h"
                        if(_if_conditional167=it_112>=self->size,                        _if_conditional167) {
                            # 1608 "./comelang2.h"
                            it_112=0;
                        }
                        else {
                            # 1613 "./comelang2.h"
                            # 1610 "./comelang2.h"
                            if(_if_conditional168=it_112==hash_111,                            _if_conditional168) {
                                # 1611 "./comelang2.h"
                                __result73__ = __result_obj__ = default_value_110;
                                return __result73__;
                            }
                        }
                    }
                    else {
                        # 1615 "./comelang2.h"
                        __result74__ = __result_obj__ = default_value_110;
                        return __result74__;
                    }
                }
                # 1619 "./comelang2.h"
                __result76__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value86=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value85=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_110,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value86;
                __freed_obj__ = 0;
                return __result76__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
_Bool default_value_113;
_Bool __result70__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_113, 0, sizeof(_Bool));
                            # 69 "./comelang2.h"
                            # 61 "./comelang2.h"
                            if(_if_conditional165=self==((void*)0),                            _if_conditional165) {
                                # 62 "./comelang2.h"
                                # 63 "./comelang2.h"
                                memset(&default_value_113,0,sizeof(_Bool));
                                # 64 "./comelang2.h"
                                __result70__ = default_value_113;
                                return __result70__;
                            }
                            else {
                                # 67 "./comelang2.h"
                                __result71__ = self->v1;
                                return __result71__;
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
struct optional$2sFunpbool* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 40 "./comelang2.h"
                    self->v1=v1;
                    # 41 "./comelang2.h"
                    self->v2=v2;
                    # 43 "./comelang2.h"
                    __result75__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result75__;
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
struct sGenericsFun* default_value_116;
unsigned int hash_117;
unsigned int it_118;
_Bool _while_condtional17;
_Bool _if_conditional170;
void* right_value89;
_Bool _if_conditional171;
struct sGenericsFun* __result77__;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sGenericsFun* __result78__;
struct sGenericsFun* __result79__;
void* right_value90;
void* right_value91;
struct sGenericsFun* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_116, 0, sizeof(struct sGenericsFun*));
memset(&hash_117, 0, sizeof(unsigned int));
memset(&it_118, 0, sizeof(unsigned int));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
                    # 1591 "./comelang2.h"
                    # 1592 "./comelang2.h"
                    memset(&default_value_116,0,sizeof(struct sGenericsFun*));
                    # 1594 "./comelang2.h"
                    hash_117=string_get_hash_key(((char*)key))%self->size;
                    # 1595 "./comelang2.h"
                    it_118=hash_117;
                    # 1619 "./comelang2.h"
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        # 1617 "./comelang2.h"
                        # 1598 "./comelang2.h"
                        if(_if_conditional170=self->item_existance[it_118],                        _if_conditional170) {
                            # 1605 "./comelang2.h"
                            # 1600 "./comelang2.h"
                            if(_if_conditional171=optional$2boolbool_value(((struct optional$2boolbool*)(right_value89=string_equals(self->keys[it_118],key)))),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89),
                            (right_value89 && right_value89 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value89, 
                            __freed_obj__ = 0, 
                            _if_conditional171) {
                                # 1602 "./comelang2.h"
                                __result77__ = __result_obj__ = self->items[it_118];
                                return __result77__;
                            }
                            # 1605 "./comelang2.h"
                            it_118++;
                            # 1613 "./comelang2.h"
                            # 1607 "./comelang2.h"
                            if(_if_conditional172=it_118>=self->size,                            _if_conditional172) {
                                # 1608 "./comelang2.h"
                                it_118=0;
                            }
                            else {
                                # 1613 "./comelang2.h"
                                # 1610 "./comelang2.h"
                                if(_if_conditional173=it_118==hash_117,                                _if_conditional173) {
                                    # 1611 "./comelang2.h"
                                    __result78__ = __result_obj__ = default_value_116;
                                    return __result78__;
                                }
                            }
                        }
                        else {
                            # 1615 "./comelang2.h"
                            __result79__ = __result_obj__ = default_value_116;
                            return __result79__;
                        }
                    }
                    # 1619 "./comelang2.h"
                    __result81__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)(right_value91=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value90=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1619))),default_value_116,(_Bool)0)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value91;
                    __freed_obj__ = 0;
                    return __result81__;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sGenericsFunpbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 40 "./comelang2.h"
                        self->v1=v1;
                        # 41 "./comelang2.h"
                        self->v2=v2;
                        # 43 "./comelang2.h"
                        __result80__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result80__;
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
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "tuple2$2sFunpcharphp_finalize"
                # 0 "tuple2$2sFunpcharphp_finalize"
                if(_if_conditional179=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional179) {
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
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
struct list_item$1CVALUEph* it_126;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_127;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_127, 0, sizeof(struct list_item$1CVALUEph*));
        # 176 "./comelang2.h"
        it_126=self->head;
        # 182 "./comelang2.h"
        while(_while_condtional18=it_126!=((void*)0),        _while_condtional18) {
            # 178 "./comelang2.h"
            prev_it_127=it_126;
            # 179 "./comelang2.h"
            it_126=it_126->next;
            # 180 "./comelang2.h"
            if(prev_it_127 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_127, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional185=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional185) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional186=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional186) {
                            # 0 "CVALUE_finalize"
                            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional187=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional187) {
                            # 1 "CVALUE_finalize"
                            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
struct list$1CVALUEph* stack_saved_128;
struct list$1sRightValueObjectph* right_value_objects_129;
struct sType* type_before_130;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value100;
char* c_value_131;
struct sClass* klass_132;
char* class_name_133;
char* fun_name_134;
void* right_value101;
struct sType* type2_135;
void* right_value102;
char* fun_name2_136;
struct sFun* finalizer_137;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value103;
char* none_generics_name_138;
void* right_value104;
char* generics_fun_name_139;
struct sGenericsFun* generics_fun_140;
_Bool _if_conditional194;
_Bool _if_conditional195;
int i_141;
_Bool _for_condtionalA5;
void* right_value105;
char* new_fun_name_142;
_Bool _if_conditional196;
void* right_value106;
char* __dec_obj51;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value107;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_143;
char* new_fun_name_144;
char* __dec_obj52;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value108;
char* type_name_145;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value109;
void* right_value110;
_Bool _if_conditional208;
void* right_value111;
void* right_value112;
_Bool _if_conditional209;
struct list$1tuple2$2charphsTypephph* o2_saved_146;
struct tuple2$2charphsTypeph* it_149;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_152;
struct sType* field_type_153;
_Bool _if_conditional214;
void* right_value113;
void* right_value114;
char* obj_154;
_Bool _if_conditional218;
struct list$1tuple2$2charphsTypephph* o2_saved_157;
struct tuple2$2charphsTypeph* it_158;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_159;
struct sType* field_type_160;
_Bool _if_conditional219;
void* right_value115;
void* right_value116;
char* obj_161;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value117;
char* type_name_162;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value118;
char* c_value_163;
struct sClass* klass_164;
char* class_name_165;
char* fun_name_166;
void* right_value119;
struct sType* type2_167;
void* right_value120;
char* fun_name2_168;
struct sFun* finalizer_169;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value121;
char* none_generics_name_170;
void* right_value122;
char* generics_fun_name_171;
struct sGenericsFun* generics_fun_172;
_Bool _if_conditional232;
_Bool _if_conditional233;
int i_173;
_Bool _for_condtionalA8;
void* right_value123;
char* new_fun_name_174;
_Bool _if_conditional234;
void* right_value124;
char* __dec_obj53;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value125;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_175;
char* new_fun_name_176;
char* __dec_obj54;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value126;
char* type_name_177;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value127;
void* right_value128;
_Bool _if_conditional246;
void* right_value129;
void* right_value130;
_Bool _if_conditional247;
struct list$1tuple2$2charphsTypephph* o2_saved_178;
struct tuple2$2charphsTypeph* it_179;
_Bool _for_condtionalA9;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_180;
struct sType* field_type_181;
_Bool _if_conditional248;
void* right_value131;
void* right_value132;
char* obj_182;
_Bool _if_conditional249;
struct list$1tuple2$2charphsTypephph* o2_saved_183;
struct tuple2$2charphsTypeph* it_184;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_185;
struct sType* field_type_186;
_Bool _if_conditional250;
void* right_value133;
void* right_value134;
char* obj_187;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value135;
char* type_name_188;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list$1sRightValueObjectph* __dec_obj55;
struct list$1CVALUEph* __dec_obj56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_128, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_129, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_130, 0, sizeof(struct sType*));
memset(&right_value100, 0, sizeof(void*));
memset(&c_value_131, 0, sizeof(char*));
memset(&klass_132, 0, sizeof(struct sClass*));
memset(&class_name_133, 0, sizeof(char*));
memset(&fun_name_134, 0, sizeof(char*));
memset(&right_value101, 0, sizeof(void*));
memset(&type2_135, 0, sizeof(struct sType*));
memset(&right_value102, 0, sizeof(void*));
memset(&fun_name2_136, 0, sizeof(char*));
memset(&finalizer_137, 0, sizeof(struct sFun*));
memset(&right_value103, 0, sizeof(void*));
memset(&none_generics_name_138, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&generics_fun_name_139, 0, sizeof(char*));
memset(&generics_fun_140, 0, sizeof(struct sGenericsFun*));
memset(&i_141, 0, sizeof(int));
memset(&right_value105, 0, sizeof(void*));
memset(&new_fun_name_142, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&fun_143, 0, sizeof(struct sFun*));
memset(&new_fun_name_144, 0, sizeof(char*));
memset(&fun_143, 0, sizeof(struct sFun*));
memset(&new_fun_name_144, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&type_name_145, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&o2_saved_146, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_149, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_152, 0, sizeof(char*));
memset(&field_type_153, 0, sizeof(struct sType*));
memset(&name_152, 0, sizeof(char*));
memset(&field_type_153, 0, sizeof(struct sType*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&obj_154, 0, sizeof(char*));
memset(&o2_saved_157, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_158, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_159, 0, sizeof(char*));
memset(&field_type_160, 0, sizeof(struct sType*));
memset(&name_159, 0, sizeof(char*));
memset(&field_type_160, 0, sizeof(struct sType*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&obj_161, 0, sizeof(char*));
memset(&right_value117, 0, sizeof(void*));
memset(&type_name_162, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&c_value_163, 0, sizeof(char*));
memset(&klass_164, 0, sizeof(struct sClass*));
memset(&class_name_165, 0, sizeof(char*));
memset(&fun_name_166, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&type2_167, 0, sizeof(struct sType*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_name2_168, 0, sizeof(char*));
memset(&finalizer_169, 0, sizeof(struct sFun*));
memset(&right_value121, 0, sizeof(void*));
memset(&none_generics_name_170, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&generics_fun_name_171, 0, sizeof(char*));
memset(&generics_fun_172, 0, sizeof(struct sGenericsFun*));
memset(&i_173, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&new_fun_name_174, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&fun_175, 0, sizeof(struct sFun*));
memset(&new_fun_name_176, 0, sizeof(char*));
memset(&fun_175, 0, sizeof(struct sFun*));
memset(&new_fun_name_176, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&type_name_177, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&o2_saved_178, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_179, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_180, 0, sizeof(char*));
memset(&field_type_181, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&field_type_181, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&obj_182, 0, sizeof(char*));
memset(&o2_saved_183, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_184, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_185, 0, sizeof(char*));
memset(&field_type_186, 0, sizeof(struct sType*));
memset(&name_185, 0, sizeof(char*));
memset(&field_type_186, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&obj_187, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&type_name_188, 0, sizeof(char*));
    # 347 "04heap.c"
    # 344 "04heap.c"
    if(_if_conditional188=gComeGC,    _if_conditional188) {
        # 345 "04heap.c"
        return;
    }
    # 347 "04heap.c"
    stack_saved_128=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 348 "04heap.c"
    right_value_objects_129=info->right_value_objects;
    # 350 "04heap.c"
    type_before_130=type;
    # 357 "04heap.c"
    # 353 "04heap.c"
    if(_if_conditional189=type->mNoSolvedGenericsType->v1,    _if_conditional189) {
        # 354 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 706 "04heap.c"
    # 357 "04heap.c"
    if(_if_conditional190=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional190) {
        # 704 "04heap.c"
        # 358 "04heap.c"
        if(_if_conditional191=force_delete_,        _if_conditional191) {
            # 359 "04heap.c"
            c_value_131=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(obj))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            # 361 "04heap.c"
            klass_132=type->mClass;
            # 363 "04heap.c"
            class_name_133=klass_132->mName;
            # 365 "04heap.c"
            fun_name_134="force_finalize";
            # 367 "04heap.c"
            type2_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value101;
            __freed_obj__ = 0;
            # 368 "04heap.c"
            type2_135->mHeap=(_Bool)0;
            # 370 "04heap.c"
            fun_name2_136=(char*)come_increment_ref_count(((char*)(right_value102=create_method_name(type,(_Bool)0,fun_name_134,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value102;
            __freed_obj__ = 0;
            # 372 "04heap.c"
            finalizer_137=((void*)0);
            # 409 "04heap.c"
            # 373 "04heap.c"
            if(_if_conditional192=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional192) {
                # 374 "04heap.c"
                finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_136);
                # 391 "04heap.c"
                # 376 "04heap.c"
                if(_if_conditional193=finalizer_137==((void*)0),                _if_conditional193) {
                    # 377 "04heap.c"
                    none_generics_name_138=(char*)come_increment_ref_count(((char*)(right_value103=get_none_generics_name(type2_135->mClass->mName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value103;
                    __freed_obj__ = 0;
                    # 379 "04heap.c"
                    generics_fun_name_139=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s_%s",none_generics_name_138,fun_name_134))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value104;
                    __freed_obj__ = 0;
                    # 380 "04heap.c"
                    generics_fun_140=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_139);
                    # 390 "04heap.c"
                    # 382 "04heap.c"
                    if(_if_conditional194=generics_fun_140,                    _if_conditional194) {
                        # 388 "04heap.c"
                        # 383 "04heap.c"
                        if(_if_conditional195=!create_generics_fun((char*)come_increment_ref_count(fun_name2_136),generics_fun_140,type,info),                        _if_conditional195) {
                            # 385 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 386 "04heap.c"
                            exit(2);
                        }
                        # 388 "04heap.c"
                        finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_136);
                    }
                    if(none_generics_name_138 && !__freed_obj__) { none_generics_name_138 = come_decrement_ref_count(none_generics_name_138, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_139 && !__freed_obj__) { generics_fun_name_139 = come_decrement_ref_count(generics_fun_name_139, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                # 393 "04heap.c"
                # 404 "04heap.c"
                for(
                i_141=128-1 ,                0;                _for_condtionalA5=                i_141>=1 ,                _for_condtionalA5;                i_141-- ,                0                ){
                    # 395 "04heap.c"
                    new_fun_name_142=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("%s_v%d",fun_name2_136,i_141))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value105;
                    __freed_obj__ = 0;
                    # 396 "04heap.c"
                    finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_142);
                    # 402 "04heap.c"
                    # 398 "04heap.c"
                    if(_if_conditional196=finalizer_137,                    _if_conditional196) {
                        # 399 "04heap.c"
                        __dec_obj51=fun_name2_136;
                        fun_name2_136=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(new_fun_name_142))));
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106;
                        __freed_obj__ = 0;
                        # 400 "04heap.c"
                        if(new_fun_name_142 && !__freed_obj__) { new_fun_name_142 = come_decrement_ref_count(new_fun_name_142, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    if(new_fun_name_142 && !__freed_obj__) { new_fun_name_142 = come_decrement_ref_count(new_fun_name_142, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 407 "04heap.c"
                # 404 "04heap.c"
                if(_if_conditional197=finalizer_137==((void*)0),                _if_conditional197) {
                    # 405 "04heap.c"
                    finalizer_137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_136);
                }
            }
            # 418 "04heap.c"
            # 409 "04heap.c"
            if(_if_conditional198=finalizer_137==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional198) {
                # 411 "04heap.c"
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value107=create_force_finalizer_automatically(type,fun_name_134,info)));
                fun_143=multiple_assgin_var2->v1;
                new_fun_name_144=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = 0;
                # 413 "04heap.c"
                __dec_obj52=fun_name2_136;
                fun_name2_136=(char*)come_increment_ref_count(new_fun_name_144);
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                # 414 "04heap.c"
                finalizer_137=fun_143;
                if(new_fun_name_144 && !__freed_obj__) { new_fun_name_144 = come_decrement_ref_count(new_fun_name_144, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 530 "04heap.c"
            # 418 "04heap.c"
            if(_if_conditional199=finalizer_137!=((void*)0),            _if_conditional199) {
                # 460 "04heap.c"
                # 419 "04heap.c"
                if(_if_conditional200=klass_132->mProtocol&&type->mPointerNum==1,                _if_conditional200) {
                    # 420 "04heap.c"
                    type_name_145=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value108=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                    # 439 "04heap.c"
                    # 421 "04heap.c"
                    if(_if_conditional201=c_value_131,                    _if_conditional201) {
                        # 438 "04heap.c"
                        # 422 "04heap.c"
                        if(_if_conditional202=no_decrement,                        _if_conditional202) {
                            # 429 "04heap.c"
                            # 423 "04heap.c"
                            if(_if_conditional203=comma,                            _if_conditional203) {
                                # 424 "04heap.c"
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 427 "04heap.c"
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 437 "04heap.c"
                            # 431 "04heap.c"
                            if(_if_conditional204=comma,                            _if_conditional204) {
                                # 432 "04heap.c"
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 435 "04heap.c"
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_131,fun_name2_136,c_value_131,type_name_145,c_value_131,type_name_145,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    if(type_name_145 && !__freed_obj__) { type_name_145 = come_decrement_ref_count(type_name_145, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    # 459 "04heap.c"
                    # 441 "04heap.c"
                    if(_if_conditional205=c_value_131,                    _if_conditional205) {
                        # 458 "04heap.c"
                        # 442 "04heap.c"
                        if(_if_conditional206=no_decrement,                        _if_conditional206) {
                            # 449 "04heap.c"
                            # 443 "04heap.c"
                            if(_if_conditional207=comma,                            _if_conditional207) {
                                # 444 "04heap.c"
                                add_come_code(info,((char*)(right_value109=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value109;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 447 "04heap.c"
                                add_come_code(info,((char*)(right_value110=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_131,c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value110;
                                __freed_obj__ = 0;
                            }
                        }
                        else {
                            # 457 "04heap.c"
                            # 451 "04heap.c"
                            if(_if_conditional208=comma,                            _if_conditional208) {
                                # 452 "04heap.c"
                                add_come_code(info,((char*)(right_value111=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value111;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 455 "04heap.c"
                                add_come_code(info,((char*)(right_value112=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_131,fun_name2_136,c_value_131,type->mAllocaValue,no_decrement,no_free,force_delete_))));
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
                if(_if_conditional209=klass_132->mStruct&&type->mPointerNum==0,                _if_conditional209) {
                    # 472 "04heap.c"
                    for(
                    o2_saved_146=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_132->mFields)),it_149=list$1tuple2$2charphsTypephph_begin((o2_saved_146)) ,                    0;                    _for_condtionalA6=                    !list$1tuple2$2charphsTypephph_end((o2_saved_146)) ,                    _for_condtionalA6;                    it_149=list$1tuple2$2charphsTypephph_next((o2_saved_146)) ,                    0                    ){
                        # 465 "04heap.c"
                        multiple_assgin_var3=it_149;
                        name_152=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_153=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        # 471 "04heap.c"
                        # 467 "04heap.c"
                        if(_if_conditional214=field_type_153->mHeap&&field_type_153->mPointerNum>0,                        _if_conditional214) {
                            # 468 "04heap.c"
                            obj_154=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value113=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_131,name_152))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value113;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value114;
                            __freed_obj__ = 0;
                            # 469 "04heap.c"
                            free_object(field_type_153,obj_154,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            if(obj_154 && !__freed_obj__) { obj_154 = come_decrement_ref_count(obj_154, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(name_152 && !__freed_obj__) { name_152 = come_decrement_ref_count(name_152, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_153 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_146 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 486 "04heap.c"
                    # 473 "04heap.c"
                    if(_if_conditional218=klass_132->mStruct&&type->mPointerNum==1,                    _if_conditional218) {
                        # 483 "04heap.c"
                        for(
                        o2_saved_157=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_132->mFields)),it_158=list$1tuple2$2charphsTypephph_begin((o2_saved_157)) ,                        0;                        _for_condtionalA7=                        !list$1tuple2$2charphsTypephph_end((o2_saved_157)) ,                        _for_condtionalA7;                        it_158=list$1tuple2$2charphsTypephph_next((o2_saved_157)) ,                        0                        ){
                            # 476 "04heap.c"
                            multiple_assgin_var4=it_158;
                            name_159=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_160=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            # 482 "04heap.c"
                            # 478 "04heap.c"
                            if(_if_conditional219=field_type_160->mHeap&&field_type_160->mPointerNum>0,                            _if_conditional219) {
                                # 479 "04heap.c"
                                obj_161=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value115=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_131,name_159))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value115;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value116;
                                __freed_obj__ = 0;
                                # 480 "04heap.c"
                                free_object(field_type_160,obj_161,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                if(obj_161 && !__freed_obj__) { obj_161 = come_decrement_ref_count(obj_161, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(name_159 && !__freed_obj__) { name_159 = come_decrement_ref_count(name_159, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_157 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                # 529 "04heap.c"
                # 486 "04heap.c"
                if(_if_conditional220=!type->mAllocaValue,                _if_conditional220) {
                    # 528 "04heap.c"
                    # 487 "04heap.c"
                    if(_if_conditional221=klass_132->mProtocol&&type->mPointerNum==1,                    _if_conditional221) {
                        # 507 "04heap.c"
                        # 488 "04heap.c"
                        if(_if_conditional222=c_value_131,                        _if_conditional222) {
                            # 489 "04heap.c"
                            type_name_162=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value117=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value117;
                            __freed_obj__ = 0;
                            # 506 "04heap.c"
                            # 490 "04heap.c"
                            if(_if_conditional223=no_decrement,                            _if_conditional223) {
                                # 497 "04heap.c"
                                # 491 "04heap.c"
                                if(_if_conditional224=comma,                                _if_conditional224) {
                                    # 492 "04heap.c"
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_131,c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 495 "04heap.c"
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_131,c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 505 "04heap.c"
                                # 499 "04heap.c"
                                if(_if_conditional225=comma,                                _if_conditional225) {
                                    # 500 "04heap.c"
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 503 "04heap.c"
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_131,c_value_131,c_value_131,type_name_162,c_value_131,type_name_162,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                            if(type_name_162 && !__freed_obj__) { type_name_162 = come_decrement_ref_count(type_name_162, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        # 527 "04heap.c"
                        # 509 "04heap.c"
                        if(_if_conditional226=c_value_131,                        _if_conditional226) {
                            # 526 "04heap.c"
                            # 510 "04heap.c"
                            if(_if_conditional227=no_decrement,                            _if_conditional227) {
                                # 517 "04heap.c"
                                # 511 "04heap.c"
                                if(_if_conditional228=comma,                                _if_conditional228) {
                                    # 512 "04heap.c"
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_131,c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 515 "04heap.c"
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_131,c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 525 "04heap.c"
                                # 519 "04heap.c"
                                if(_if_conditional229=comma,                                _if_conditional229) {
                                    # 520 "04heap.c"
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 523 "04heap.c"
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_131,c_value_131,c_value_131,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            if(c_value_131 && !__freed_obj__) { c_value_131 = come_decrement_ref_count(c_value_131, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_136 && !__freed_obj__) { fun_name2_136 = come_decrement_ref_count(fun_name2_136, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            # 532 "04heap.c"
            c_value_163=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(obj))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
            # 534 "04heap.c"
            klass_164=type->mClass;
            # 536 "04heap.c"
            class_name_165=klass_164->mName;
            # 538 "04heap.c"
            fun_name_166="finalize";
            # 540 "04heap.c"
            type2_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value119;
            __freed_obj__ = 0;
            # 541 "04heap.c"
            type2_167->mHeap=(_Bool)0;
            # 543 "04heap.c"
            fun_name2_168=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name_166,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value120;
            __freed_obj__ = 0;
            # 545 "04heap.c"
            finalizer_169=((void*)0);
            # 582 "04heap.c"
            # 546 "04heap.c"
            if(_if_conditional230=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional230) {
                # 547 "04heap.c"
                finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_168);
                # 564 "04heap.c"
                # 549 "04heap.c"
                if(_if_conditional231=finalizer_169==((void*)0),                _if_conditional231) {
                    # 550 "04heap.c"
                    none_generics_name_170=(char*)come_increment_ref_count(((char*)(right_value121=get_none_generics_name(type2_167->mClass->mName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                    # 552 "04heap.c"
                    generics_fun_name_171=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s_%s",none_generics_name_170,fun_name_166))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value122;
                    __freed_obj__ = 0;
                    # 553 "04heap.c"
                    generics_fun_172=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_171);
                    # 563 "04heap.c"
                    # 555 "04heap.c"
                    if(_if_conditional232=generics_fun_172,                    _if_conditional232) {
                        # 561 "04heap.c"
                        # 556 "04heap.c"
                        if(_if_conditional233=!create_generics_fun((char*)come_increment_ref_count(fun_name2_168),generics_fun_172,type,info),                        _if_conditional233) {
                            # 558 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 559 "04heap.c"
                            exit(2);
                        }
                        # 561 "04heap.c"
                        finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_168);
                    }
                    if(none_generics_name_170 && !__freed_obj__) { none_generics_name_170 = come_decrement_ref_count(none_generics_name_170, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_171 && !__freed_obj__) { generics_fun_name_171 = come_decrement_ref_count(generics_fun_name_171, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                # 566 "04heap.c"
                # 577 "04heap.c"
                for(
                i_173=128-1 ,                0;                _for_condtionalA8=                i_173>=1 ,                _for_condtionalA8;                i_173-- ,                0                ){
                    # 568 "04heap.c"
                    new_fun_name_174=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s_v%d",fun_name2_168,i_173))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value123;
                    __freed_obj__ = 0;
                    # 569 "04heap.c"
                    finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_174);
                    # 575 "04heap.c"
                    # 571 "04heap.c"
                    if(_if_conditional234=finalizer_169,                    _if_conditional234) {
                        # 572 "04heap.c"
                        __dec_obj53=fun_name2_168;
                        fun_name2_168=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(new_fun_name_174))));
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value124;
                        __freed_obj__ = 0;
                        # 573 "04heap.c"
                        if(new_fun_name_174 && !__freed_obj__) { new_fun_name_174 = come_decrement_ref_count(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                    }
                    if(new_fun_name_174 && !__freed_obj__) { new_fun_name_174 = come_decrement_ref_count(new_fun_name_174, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 580 "04heap.c"
                # 577 "04heap.c"
                if(_if_conditional235=finalizer_169==((void*)0),                _if_conditional235) {
                    # 578 "04heap.c"
                    finalizer_169=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_168);
                }
            }
            # 591 "04heap.c"
            # 582 "04heap.c"
            if(_if_conditional236=finalizer_169==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional236) {
                # 584 "04heap.c"
                multiple_assgin_var5=((struct tuple2$2sFunpcharph*)(right_value125=create_finalizer_automatically(type,fun_name_166,info)));
                fun_175=multiple_assgin_var5->v1;
                new_fun_name_176=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                # 586 "04heap.c"
                __dec_obj54=fun_name2_168;
                fun_name2_168=(char*)come_increment_ref_count(new_fun_name_176);
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                # 587 "04heap.c"
                finalizer_169=fun_175;
                if(new_fun_name_176 && !__freed_obj__) { new_fun_name_176 = come_decrement_ref_count(new_fun_name_176, (void*)0, (void*)0, 0, 0, 0); }
            }
            # 703 "04heap.c"
            # 591 "04heap.c"
            if(_if_conditional237=finalizer_169!=((void*)0),            _if_conditional237) {
                # 633 "04heap.c"
                # 592 "04heap.c"
                if(_if_conditional238=klass_164->mProtocol&&type->mPointerNum==1,                _if_conditional238) {
                    # 593 "04heap.c"
                    type_name_177=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value126=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    # 612 "04heap.c"
                    # 594 "04heap.c"
                    if(_if_conditional239=c_value_163,                    _if_conditional239) {
                        # 611 "04heap.c"
                        # 595 "04heap.c"
                        if(_if_conditional240=no_decrement,                        _if_conditional240) {
                            # 602 "04heap.c"
                            # 596 "04heap.c"
                            if(_if_conditional241=comma,                            _if_conditional241) {
                                # 597 "04heap.c"
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 600 "04heap.c"
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 610 "04heap.c"
                            # 604 "04heap.c"
                            if(_if_conditional242=comma,                            _if_conditional242) {
                                # 605 "04heap.c"
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 608 "04heap.c"
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_163,fun_name2_168,c_value_163,type_name_177,c_value_163,type_name_177,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    if(type_name_177 && !__freed_obj__) { type_name_177 = come_decrement_ref_count(type_name_177, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    # 632 "04heap.c"
                    # 614 "04heap.c"
                    if(_if_conditional243=c_value_163,                    _if_conditional243) {
                        # 631 "04heap.c"
                        # 615 "04heap.c"
                        if(_if_conditional244=no_decrement,                        _if_conditional244) {
                            # 622 "04heap.c"
                            # 616 "04heap.c"
                            if(_if_conditional245=comma,                            _if_conditional245) {
                                # 617 "04heap.c"
                                add_come_code(info,((char*)(right_value127=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value127;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 620 "04heap.c"
                                add_come_code(info,((char*)(right_value128=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_163,c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128;
                                __freed_obj__ = 0;
                            }
                        }
                        else {
                            # 630 "04heap.c"
                            # 624 "04heap.c"
                            if(_if_conditional246=comma,                            _if_conditional246) {
                                # 625 "04heap.c"
                                add_come_code(info,((char*)(right_value129=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value129;
                                __freed_obj__ = 0;
                            }
                            else {
                                # 628 "04heap.c"
                                add_come_code(info,((char*)(right_value130=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_163,fun_name2_168,c_value_163,type->mAllocaValue,no_decrement,no_free,force_delete_))));
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
                if(_if_conditional247=klass_164->mStruct&&type->mPointerNum==0,                _if_conditional247) {
                    # 645 "04heap.c"
                    for(
                    o2_saved_178=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_164->mFields)),it_179=list$1tuple2$2charphsTypephph_begin((o2_saved_178)) ,                    0;                    _for_condtionalA9=                    !list$1tuple2$2charphsTypephph_end((o2_saved_178)) ,                    _for_condtionalA9;                    it_179=list$1tuple2$2charphsTypephph_next((o2_saved_178)) ,                    0                    ){
                        # 638 "04heap.c"
                        multiple_assgin_var6=it_179;
                        name_180=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_181=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        # 644 "04heap.c"
                        # 640 "04heap.c"
                        if(_if_conditional248=field_type_181->mHeap&&field_type_181->mPointerNum>0,                        _if_conditional248) {
                            # 641 "04heap.c"
                            obj_182=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value131=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_163,name_180))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value131;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
                            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value132;
                            __freed_obj__ = 0;
                            # 642 "04heap.c"
                            free_object(field_type_181,obj_182,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            if(obj_182 && !__freed_obj__) { obj_182 = come_decrement_ref_count(obj_182, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(name_180 && !__freed_obj__) { name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_178 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 659 "04heap.c"
                    # 646 "04heap.c"
                    if(_if_conditional249=klass_164->mStruct&&type->mPointerNum==1,                    _if_conditional249) {
                        # 656 "04heap.c"
                        for(
                        o2_saved_183=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_164->mFields)),it_184=list$1tuple2$2charphsTypephph_begin((o2_saved_183)) ,                        0;                        _for_condtionalA10=                        !list$1tuple2$2charphsTypephph_end((o2_saved_183)) ,                        _for_condtionalA10;                        it_184=list$1tuple2$2charphsTypephph_next((o2_saved_183)) ,                        0                        ){
                            # 649 "04heap.c"
                            multiple_assgin_var7=it_184;
                            name_185=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_186=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            # 655 "04heap.c"
                            # 651 "04heap.c"
                            if(_if_conditional250=field_type_186->mHeap&&field_type_186->mPointerNum>0,                            _if_conditional250) {
                                # 652 "04heap.c"
                                obj_187=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value133=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),c_value_163,name_185))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value133;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
                                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value134;
                                __freed_obj__ = 0;
                                # 653 "04heap.c"
                                free_object(field_type_186,obj_187,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                if(obj_187 && !__freed_obj__) { obj_187 = come_decrement_ref_count(obj_187, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(name_185 && !__freed_obj__) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_183 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
                # 702 "04heap.c"
                # 659 "04heap.c"
                if(_if_conditional251=!type->mAllocaValue,                _if_conditional251) {
                    # 701 "04heap.c"
                    # 660 "04heap.c"
                    if(_if_conditional252=klass_164->mProtocol&&type->mPointerNum==1,                    _if_conditional252) {
                        # 680 "04heap.c"
                        # 661 "04heap.c"
                        if(_if_conditional253=c_value_163,                        _if_conditional253) {
                            # 662 "04heap.c"
                            type_name_188=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value135=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value135;
                            __freed_obj__ = 0;
                            # 679 "04heap.c"
                            # 663 "04heap.c"
                            if(_if_conditional254=no_decrement,                            _if_conditional254) {
                                # 670 "04heap.c"
                                # 664 "04heap.c"
                                if(_if_conditional255=comma,                                _if_conditional255) {
                                    # 665 "04heap.c"
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_163,c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 668 "04heap.c"
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_163,c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 678 "04heap.c"
                                # 672 "04heap.c"
                                if(_if_conditional256=comma,                                _if_conditional256) {
                                    # 673 "04heap.c"
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 676 "04heap.c"
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_163,c_value_163,c_value_163,type_name_188,c_value_163,type_name_188,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                            if(type_name_188 && !__freed_obj__) { type_name_188 = come_decrement_ref_count(type_name_188, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        # 700 "04heap.c"
                        # 682 "04heap.c"
                        if(_if_conditional257=c_value_163,                        _if_conditional257) {
                            # 699 "04heap.c"
                            # 683 "04heap.c"
                            if(_if_conditional258=no_decrement,                            _if_conditional258) {
                                # 690 "04heap.c"
                                # 684 "04heap.c"
                                if(_if_conditional259=comma,                                _if_conditional259) {
                                    # 685 "04heap.c"
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_163,c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 688 "04heap.c"
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_163,c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 698 "04heap.c"
                                # 692 "04heap.c"
                                if(_if_conditional260=comma,                                _if_conditional260) {
                                    # 693 "04heap.c"
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 696 "04heap.c"
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_163,c_value_163,c_value_163,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            if(c_value_163 && !__freed_obj__) { c_value_163 = come_decrement_ref_count(c_value_163, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_167, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_168 && !__freed_obj__) { fun_name2_168 = come_decrement_ref_count(fun_name2_168, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 706 "04heap.c"
    __dec_obj55=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_129);
    if(__dec_obj55) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 707 "04heap.c"
    __dec_obj56=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_128);
    if(__dec_obj56) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_128 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_128, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
struct tuple2$2charphsTypeph* result_147;
struct tuple2$2charphsTypeph* __result82__;
_Bool _if_conditional211;
struct tuple2$2charphsTypeph* __result83__;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 343 "./comelang2.h"
                        # 338 "./comelang2.h"
                        if(_if_conditional210=self==((void*)0),                        _if_conditional210) {
                            # 339 "./comelang2.h"
                            # 340 "./comelang2.h"
                            memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 341 "./comelang2.h"
                            __result82__ = __result_obj__ = result_147;
                            return __result82__;
                        }
                        # 343 "./comelang2.h"
                        self->it=self->head;
                        # 349 "./comelang2.h"
                        # 345 "./comelang2.h"
                        if(_if_conditional211=self->it,                        _if_conditional211) {
                            # 346 "./comelang2.h"
                            __result83__ = __result_obj__ = self->it->item;
                            return __result83__;
                        }
                        # 349 "./comelang2.h"
                        # 350 "./comelang2.h"
                        memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 351 "./comelang2.h"
                        __result84__ = __result_obj__ = result_148;
                        return __result84__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 373 "./comelang2.h"
                        __result85__ = self==((void*)0)||self->it==((void*)0);
                        return __result85__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct tuple2$2charphsTypeph* result_150;
struct tuple2$2charphsTypeph* __result86__;
_Bool _if_conditional213;
struct tuple2$2charphsTypeph* __result87__;
struct tuple2$2charphsTypeph* result_151;
struct tuple2$2charphsTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_150, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_151, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 361 "./comelang2.h"
                        # 355 "./comelang2.h"
                        if(_if_conditional212=self==((void*)0)||self->it==((void*)0),                        _if_conditional212) {
                            # 356 "./comelang2.h"
                            # 357 "./comelang2.h"
                            memset(&result_150,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 358 "./comelang2.h"
                            __result86__ = __result_obj__ = result_150;
                            return __result86__;
                        }
                        # 361 "./comelang2.h"
                        self->it=self->it->next;
                        # 367 "./comelang2.h"
                        # 363 "./comelang2.h"
                        if(_if_conditional213=self->it,                        _if_conditional213) {
                            # 364 "./comelang2.h"
                            __result87__ = __result_obj__ = self->it->item;
                            return __result87__;
                        }
                        # 367 "./comelang2.h"
                        # 368 "./comelang2.h"
                        memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 369 "./comelang2.h"
                        __result88__ = __result_obj__ = result_151;
                        return __result88__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_155;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_156;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_155, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_156, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 176 "./comelang2.h"
                        it_155=self->head;
                        # 182 "./comelang2.h"
                        while(_while_condtional19=it_155!=((void*)0),                        _while_condtional19) {
                            # 178 "./comelang2.h"
                            prev_it_156=it_155;
                            # 179 "./comelang2.h"
                            it_155=it_155->next;
                            # 180 "./comelang2.h"
                            if(prev_it_156 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                if(_if_conditional215=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional215) {
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
_Bool _if_conditional217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional216=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional216) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional217=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional217) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
struct sType* type2_189;
_Bool _if_conditional261;
char* result_190;
struct sType* result_type_191;
struct list$1CVALUEph* stack_saved_192;
struct list$1sRightValueObjectph* right_value_objects_193;
void* right_value137;
char* c_value_194;
struct sClass* klass_195;
char* class_name_196;
char* fun_name_197;
struct sFun* cloner_198;
char* fun_name2_199;
_Bool _if_conditional262;
void* right_value138;
char* none_generics_name_200;
void* right_value139;
struct sType* obj_type_201;
void* right_value140;
char* __dec_obj57;
void* right_value141;
char* fun_name3_202;
struct sGenericsFun* generics_fun_205;
_Bool _if_conditional267;
void* right_value143;
_Bool _if_conditional268;
void* right_value144;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value150;
struct tuple2$2sTypephcharph* __result94__;
void* right_value151;
char* __dec_obj60;
int i_206;
_Bool _for_condtionalA11;
void* right_value152;
char* new_fun_name_207;
_Bool _if_conditional271;
void* right_value153;
char* __dec_obj61;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value154;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_208;
char* new_fun_name_209;
char* __dec_obj62;
_Bool _if_conditional274;
void* right_value155;
char* __dec_obj63;
struct sType* __dec_obj64;
void* right_value156;
struct sType* __dec_obj65;
void* right_value157;
char* type_name_210;
void* right_value158;
char* __dec_obj66;
void* right_value159;
struct sType* __dec_obj67;
struct list$1sRightValueObjectph* __dec_obj68;
struct list$1CVALUEph* __dec_obj69;
void* right_value160;
void* right_value161;
struct tuple2$2sTypephcharph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&type2_189, 0, sizeof(struct sType*));
memset(&result_190, 0, sizeof(char*));
memset(&result_type_191, 0, sizeof(struct sType*));
memset(&stack_saved_192, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_193, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value137, 0, sizeof(void*));
memset(&c_value_194, 0, sizeof(char*));
memset(&klass_195, 0, sizeof(struct sClass*));
memset(&class_name_196, 0, sizeof(char*));
memset(&fun_name_197, 0, sizeof(char*));
memset(&cloner_198, 0, sizeof(struct sFun*));
memset(&fun_name2_199, 0, sizeof(char*));
memset(&right_value138, 0, sizeof(void*));
memset(&none_generics_name_200, 0, sizeof(char*));
memset(&right_value139, 0, sizeof(void*));
memset(&obj_type_201, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&fun_name3_202, 0, sizeof(char*));
memset(&generics_fun_205, 0, sizeof(struct sGenericsFun*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&i_206, 0, sizeof(int));
memset(&right_value152, 0, sizeof(void*));
memset(&new_fun_name_207, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&fun_208, 0, sizeof(struct sFun*));
memset(&new_fun_name_209, 0, sizeof(char*));
memset(&fun_208, 0, sizeof(struct sFun*));
memset(&new_fun_name_209, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&type_name_210, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    # 712 "04heap.c"
    type2_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    # 717 "04heap.c"
    # 713 "04heap.c"
    if(_if_conditional261=type->mNoSolvedGenericsType->v1,    _if_conditional261) {
        # 714 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 718 "04heap.c"
    result_190=((void*)0);
    # 718 "04heap.c"
    result_type_191=((void*)0);
    # 719 "04heap.c"
    stack_saved_192=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 720 "04heap.c"
    right_value_objects_193=info->right_value_objects;
    # 722 "04heap.c"
    c_value_194=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(obj))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = 0;
    # 724 "04heap.c"
    klass_195=type->mClass;
    # 726 "04heap.c"
    class_name_196=klass_195->mName;
    # 728 "04heap.c"
    fun_name_197="clone";
    # 730 "04heap.c"
    cloner_198=((void*)0);
    # 731 "04heap.c"
    # 769 "04heap.c"
    # 732 "04heap.c"
    if(_if_conditional262=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional262) {
        # 733 "04heap.c"
        none_generics_name_200=(char*)come_increment_ref_count(((char*)(right_value138=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
        # 735 "04heap.c"
        obj_type_201=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value139;
        __freed_obj__ = 0;
        # 737 "04heap.c"
        __dec_obj57=fun_name2_199;
        fun_name2_199=(char*)come_increment_ref_count(((char*)(right_value140=create_method_name(obj_type_201,(_Bool)0,fun_name_197,info))));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value140;
        __freed_obj__ = 0;
        # 738 "04heap.c"
        fun_name3_202=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s_%s",none_generics_name_200,fun_name_197))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value141;
        __freed_obj__ = 0;
        # 740 "04heap.c"
        generics_fun_205=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_202,((void*)0));
        # 748 "04heap.c"
        # 742 "04heap.c"
        if(_if_conditional267=generics_fun_205,        _if_conditional267) {
            # 746 "04heap.c"
            # 743 "04heap.c"
            if(_if_conditional268=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(fun_name2_199)))),generics_fun_205,obj_type_201,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143),
            (right_value143 && right_value143 != __result_obj__ && !__freed_obj__) ? right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value143, 
            __freed_obj__ = 0, 
            _if_conditional268) {
                # 744 "04heap.c"
                __result94__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value150=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value147=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 744)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 744)))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("")))))));
                if(none_generics_name_200 && !__freed_obj__) { none_generics_name_200 = come_decrement_ref_count(none_generics_name_200, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_202 && !__freed_obj__) { fun_name3_202 = come_decrement_ref_count(fun_name3_202, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_192 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_194 && !__freed_obj__) { c_value_194 = come_decrement_ref_count(c_value_194, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_199 && !__freed_obj__) { fun_name2_199 = come_decrement_ref_count(fun_name2_199, (void*)0, (void*)0, 0, 0, 0); }
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
                return __result94__;
            }
        }
        # 748 "04heap.c"
        cloner_198=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_199);
        if(none_generics_name_200 && !__freed_obj__) { none_generics_name_200 = come_decrement_ref_count(none_generics_name_200, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_202 && !__freed_obj__) { fun_name3_202 = come_decrement_ref_count(fun_name3_202, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 751 "04heap.c"
        __dec_obj60=fun_name2_199;
        fun_name2_199=(char*)come_increment_ref_count(((char*)(right_value151=create_method_name(type,(_Bool)0,fun_name_197,info))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = 0;
        # 753 "04heap.c"
        # 764 "04heap.c"
        for(
        i_206=128-1 ,        0;        _for_condtionalA11=        i_206>=1 ,        _for_condtionalA11;        i_206-- ,        0        ){
            # 755 "04heap.c"
            new_fun_name_207=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s_v%d",fun_name2_199,i_206))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value152;
            __freed_obj__ = 0;
            # 756 "04heap.c"
            cloner_198=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_207);
            # 762 "04heap.c"
            # 758 "04heap.c"
            if(_if_conditional271=cloner_198,            _if_conditional271) {
                # 759 "04heap.c"
                __dec_obj61=fun_name2_199;
                fun_name2_199=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(new_fun_name_207))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153;
                __freed_obj__ = 0;
                # 760 "04heap.c"
                if(new_fun_name_207 && !__freed_obj__) { new_fun_name_207 = come_decrement_ref_count(new_fun_name_207, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_207 && !__freed_obj__) { new_fun_name_207 = come_decrement_ref_count(new_fun_name_207, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 767 "04heap.c"
        # 764 "04heap.c"
        if(_if_conditional272=cloner_198==((void*)0),        _if_conditional272) {
            # 765 "04heap.c"
            cloner_198=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_199);
        }
    }
    # 778 "04heap.c"
    # 769 "04heap.c"
    if(_if_conditional273=cloner_198==((void*)0)&&!type->mClass->mNumber,    _if_conditional273) {
        # 771 "04heap.c"
        multiple_assgin_var8=((struct tuple2$2sFunpcharph*)(right_value154=create_cloner_automatically(type,fun_name_197,info)));
        fun_208=multiple_assgin_var8->v1;
        new_fun_name_209=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = 0;
        # 773 "04heap.c"
        __dec_obj62=fun_name2_199;
        fun_name2_199=(char*)come_increment_ref_count(new_fun_name_209);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        # 774 "04heap.c"
        cloner_198=fun_208;
        if(new_fun_name_209 && !__freed_obj__) { new_fun_name_209 = come_decrement_ref_count(new_fun_name_209, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 790 "04heap.c"
    # 778 "04heap.c"
    if(_if_conditional274=cloner_198!=((void*)0),    _if_conditional274) {
        # 779 "04heap.c"
        __dec_obj63=result_190;
        result_190=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s(%s)",fun_name2_199,c_value_194))));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        # 780 "04heap.c"
        __dec_obj64=result_type_191;
        result_type_191=(struct sType*)come_increment_ref_count(cloner_198->mResultType);
        if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 781 "04heap.c"
        __dec_obj65=result_type_191;
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=solve_generics(result_type_191,type,info))));
        if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value156;
        __freed_obj__ = 0;
    }
    else {
        # 784 "04heap.c"
        type2_189->mHeap=(_Bool)1;
        # 785 "04heap.c"
        type_name_210=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value157=make_type_name_string(type2_189,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157;
        __freed_obj__ = 0;
        # 786 "04heap.c"
        __dec_obj66=result_190;
        result_190=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_210,c_value_194,info->sname,info->sline))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value158;
        __freed_obj__ = 0;
        # 787 "04heap.c"
        __dec_obj67=result_type_191;
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type))));
        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value159;
        __freed_obj__ = 0;
        if(type_name_210 && !__freed_obj__) { type_name_210 = come_decrement_ref_count(type_name_210, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 790 "04heap.c"
    __dec_obj68=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_193);
    if(__dec_obj68) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 791 "04heap.c"
    __dec_obj69=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_192);
    if(__dec_obj69) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 793 "04heap.c"
    __result95__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value161=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value160=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 793)))),(struct sType*)come_increment_ref_count(result_type_191),(char*)come_increment_ref_count(result_190))));
    if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_192 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_194 && !__freed_obj__) { c_value_194 = come_decrement_ref_count(c_value_194, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_199 && !__freed_obj__) { fun_name2_199 = come_decrement_ref_count(fun_name2_199, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value160;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value161;
    __freed_obj__ = 0;
    return __result95__;
    if(type2_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_190 && !__freed_obj__) { result_190 = come_decrement_ref_count(result_190, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_192 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_194 && !__freed_obj__) { c_value_194 = come_decrement_ref_count(c_value_194, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_199 && !__freed_obj__) { fun_name2_199 = come_decrement_ref_count(fun_name2_199, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_203;
unsigned int it_204;
_Bool _while_condtional20;
_Bool _if_conditional263;
void* right_value142;
_Bool _if_conditional264;
struct sGenericsFun* __result89__;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sGenericsFun* __result90__;
struct sGenericsFun* __result91__;
struct sGenericsFun* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_203, 0, sizeof(unsigned int));
memset(&it_204, 0, sizeof(unsigned int));
memset(&right_value142, 0, sizeof(void*));
            # 1265 "./comelang2.h"
            hash_203=string_get_hash_key(((char*)key))%self->size;
            # 1266 "./comelang2.h"
            it_204=hash_203;
            # 1290 "./comelang2.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1288 "./comelang2.h"
                # 1269 "./comelang2.h"
                if(_if_conditional263=self->item_existance[it_204],                _if_conditional263) {
                    # 1276 "./comelang2.h"
                    # 1271 "./comelang2.h"
                    if(_if_conditional264=optional$2boolbool_value(((struct optional$2boolbool*)(right_value142=string_equals(self->keys[it_204],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142),
                    (right_value142 && right_value142 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value142, 
                    __freed_obj__ = 0, 
                    _if_conditional264) {
                        # 1273 "./comelang2.h"
                        __result89__ = __result_obj__ = self->items[it_204];
                        return __result89__;
                    }
                    # 1276 "./comelang2.h"
                    it_204++;
                    # 1284 "./comelang2.h"
                    # 1278 "./comelang2.h"
                    if(_if_conditional265=it_204>=self->size,                    _if_conditional265) {
                        # 1279 "./comelang2.h"
                        it_204=0;
                    }
                    else {
                        # 1284 "./comelang2.h"
                        # 1281 "./comelang2.h"
                        if(_if_conditional266=it_204==hash_203,                        _if_conditional266) {
                            # 1282 "./comelang2.h"
                            __result90__ = __result_obj__ = default_value;
                            return __result90__;
                        }
                    }
                }
                else {
                    # 1286 "./comelang2.h"
                    __result91__ = __result_obj__ = default_value;
                    return __result91__;
                }
            }
            # 1290 "./comelang2.h"
            __result92__ = __result_obj__ = default_value;
            return __result92__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
struct sType* __dec_obj58;
void* right_value149;
char* __dec_obj59;
struct tuple2$2sTypephcharph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
                    # 1814 "./comelang2.h"
                    __dec_obj58=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(v1))));
                    if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value148;
                    __freed_obj__ = 0;
                    # 1815 "./comelang2.h"
                    __dec_obj59=self->v2;
                    self->v2=(char*)come_increment_ref_count(((char*)(right_value149=string_clone(v2))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value149;
                    __freed_obj__ = 0;
                    # 1817 "./comelang2.h"
                    __result93__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    return __result93__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional269=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional269) {
                            # 0 "tuple2$2sTypephcharphp_finalize"
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        # 2 "tuple2$2sTypephcharphp_finalize"
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional270=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional270) {
                            # 1 "tuple2$2sTypephcharphp_finalize"
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional275;
char* result_211;
struct list$1CVALUEph* stack_saved_212;
struct list$1sRightValueObjectph* right_value_objects_213;
struct sClass* klass_214;
char* class_name_215;
char* fun_name_216;
void* right_value162;
struct sType* type2_217;
struct sFun* cloner_218;
char* fun_name2_219;
_Bool _if_conditional276;
void* right_value163;
char* none_generics_name_220;
void* right_value164;
struct sType* obj_type_221;
void* right_value165;
char* __dec_obj70;
void* right_value166;
char* fun_name3_222;
struct sGenericsFun* generics_fun_223;
_Bool _if_conditional277;
void* right_value167;
_Bool _if_conditional278;
_Bool __result96__;
void* right_value168;
char* __dec_obj71;
int i_224;
_Bool _for_condtionalA12;
void* right_value169;
char* new_fun_name_225;
_Bool _if_conditional279;
void* right_value170;
char* __dec_obj72;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value171;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_226;
char* new_fun_name_227;
char* __dec_obj73;
struct list$1sRightValueObjectph* __dec_obj74;
struct list$1CVALUEph* __dec_obj75;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_211, 0, sizeof(char*));
memset(&stack_saved_212, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_213, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_214, 0, sizeof(struct sClass*));
memset(&class_name_215, 0, sizeof(char*));
memset(&fun_name_216, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&type2_217, 0, sizeof(struct sType*));
memset(&cloner_218, 0, sizeof(struct sFun*));
memset(&fun_name2_219, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&none_generics_name_220, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&obj_type_221, 0, sizeof(struct sType*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&fun_name3_222, 0, sizeof(char*));
memset(&generics_fun_223, 0, sizeof(struct sGenericsFun*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&i_224, 0, sizeof(int));
memset(&right_value169, 0, sizeof(void*));
memset(&new_fun_name_225, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&fun_226, 0, sizeof(struct sFun*));
memset(&new_fun_name_227, 0, sizeof(char*));
memset(&fun_226, 0, sizeof(struct sFun*));
memset(&new_fun_name_227, 0, sizeof(char*));
    # 801 "04heap.c"
    # 798 "04heap.c"
    if(_if_conditional275=type->mNoSolvedGenericsType->v1,    _if_conditional275) {
        # 799 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 802 "04heap.c"
    result_211=((void*)0);
    # 802 "04heap.c"
    stack_saved_212=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 803 "04heap.c"
    right_value_objects_213=info->right_value_objects;
    # 805 "04heap.c"
    klass_214=type->mClass;
    # 807 "04heap.c"
    class_name_215=klass_214->mName;
    # 809 "04heap.c"
    fun_name_216="equals";
    # 811 "04heap.c"
    type2_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    # 812 "04heap.c"
    type2_217->mHeap=(_Bool)0;
    # 814 "04heap.c"
    cloner_218=((void*)0);
    # 815 "04heap.c"
    # 853 "04heap.c"
    # 816 "04heap.c"
    if(_if_conditional276=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional276) {
        # 817 "04heap.c"
        none_generics_name_220=(char*)come_increment_ref_count(((char*)(right_value163=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = 0;
        # 819 "04heap.c"
        obj_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value164;
        __freed_obj__ = 0;
        # 821 "04heap.c"
        __dec_obj70=fun_name2_219;
        fun_name2_219=(char*)come_increment_ref_count(((char*)(right_value165=create_method_name(obj_type_221,(_Bool)0,fun_name_216,info))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value165;
        __freed_obj__ = 0;
        # 822 "04heap.c"
        fun_name3_222=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s_%s",none_generics_name_220,fun_name_216))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value166;
        __freed_obj__ = 0;
        # 824 "04heap.c"
        generics_fun_223=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_222,((void*)0));
        # 832 "04heap.c"
        # 826 "04heap.c"
        if(_if_conditional277=generics_fun_223,        _if_conditional277) {
            # 830 "04heap.c"
            # 827 "04heap.c"
            if(_if_conditional278=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(fun_name2_219)))),generics_fun_223,obj_type_221,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167),
            (right_value167 && right_value167 != __result_obj__ && !__freed_obj__) ? right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value167, 
            __freed_obj__ = 0, 
            _if_conditional278) {
                # 828 "04heap.c"
                __result96__ = (_Bool)0;
                if(none_generics_name_220 && !__freed_obj__) { none_generics_name_220 = come_decrement_ref_count(none_generics_name_220, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_221, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_222 && !__freed_obj__) { fun_name3_222 = come_decrement_ref_count(fun_name3_222, (void*)0, (void*)0, 0, 0, 0); }
                if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_219 && !__freed_obj__) { fun_name2_219 = come_decrement_ref_count(fun_name2_219, (void*)0, (void*)0, 0, 0, 0); }
                return __result96__;
            }
        }
        # 832 "04heap.c"
        cloner_218=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_219);
        if(none_generics_name_220 && !__freed_obj__) { none_generics_name_220 = come_decrement_ref_count(none_generics_name_220, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_222 && !__freed_obj__) { fun_name3_222 = come_decrement_ref_count(fun_name3_222, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 835 "04heap.c"
        __dec_obj71=fun_name2_219;
        fun_name2_219=(char*)come_increment_ref_count(((char*)(right_value168=create_method_name(type,(_Bool)0,fun_name_216,info))));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        # 837 "04heap.c"
        # 848 "04heap.c"
        for(
        i_224=128-1 ,        0;        _for_condtionalA12=        i_224>=1 ,        _for_condtionalA12;        i_224-- ,        0        ){
            # 839 "04heap.c"
            new_fun_name_225=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s_v%d",fun_name2_219,i_224))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value169;
            __freed_obj__ = 0;
            # 840 "04heap.c"
            cloner_218=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_225);
            # 846 "04heap.c"
            # 842 "04heap.c"
            if(_if_conditional279=cloner_218,            _if_conditional279) {
                # 843 "04heap.c"
                __dec_obj72=fun_name2_219;
                fun_name2_219=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(new_fun_name_225))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170;
                __freed_obj__ = 0;
                # 844 "04heap.c"
                if(new_fun_name_225 && !__freed_obj__) { new_fun_name_225 = come_decrement_ref_count(new_fun_name_225, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_225 && !__freed_obj__) { new_fun_name_225 = come_decrement_ref_count(new_fun_name_225, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 851 "04heap.c"
        # 848 "04heap.c"
        if(_if_conditional280=cloner_218==((void*)0),        _if_conditional280) {
            # 849 "04heap.c"
            cloner_218=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_219);
        }
    }
    # 861 "04heap.c"
    # 853 "04heap.c"
    if(_if_conditional281=cloner_218==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional281) {
        # 855 "04heap.c"
        multiple_assgin_var9=((struct tuple2$2sFunpcharph*)(right_value171=create_equals_automatically(type,fun_name_216,info)));
        fun_226=multiple_assgin_var9->v1;
        new_fun_name_227=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
        # 857 "04heap.c"
        __dec_obj73=fun_name2_219;
        fun_name2_219=(char*)come_increment_ref_count(new_fun_name_227);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
        # 858 "04heap.c"
        cloner_218=fun_226;
        if(new_fun_name_227 && !__freed_obj__) { new_fun_name_227 = come_decrement_ref_count(new_fun_name_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 861 "04heap.c"
    __dec_obj74=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_213);
    if(__dec_obj74) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 862 "04heap.c"
    __dec_obj75=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_212);
    if(__dec_obj75) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 864 "04heap.c"
    __result97__ = (_Bool)1;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_219 && !__freed_obj__) { fun_name2_219 = come_decrement_ref_count(fun_name2_219, (void*)0, (void*)0, 0, 0, 0); }
    return __result97__;
    if(result_211 && !__freed_obj__) { result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_219 && !__freed_obj__) { fun_name2_219 = come_decrement_ref_count(fun_name2_219, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
char* result_228;
struct list$1CVALUEph* stack_saved_229;
struct list$1sRightValueObjectph* right_value_objects_230;
struct sClass* klass_231;
char* class_name_232;
char* fun_name_233;
void* right_value172;
struct sType* type2_234;
struct sFun* cloner_235;
char* fun_name2_236;
_Bool _if_conditional283;
void* right_value173;
char* none_generics_name_237;
void* right_value174;
struct sType* obj_type_238;
void* right_value175;
char* __dec_obj76;
void* right_value176;
char* fun_name3_239;
struct sGenericsFun* generics_fun_240;
_Bool _if_conditional284;
void* right_value177;
_Bool _if_conditional285;
_Bool __result98__;
void* right_value178;
char* __dec_obj77;
int i_241;
_Bool _for_condtionalA13;
void* right_value179;
char* new_fun_name_242;
_Bool _if_conditional286;
void* right_value180;
char* __dec_obj78;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value181;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_243;
char* new_fun_name_244;
char* __dec_obj79;
struct list$1sRightValueObjectph* __dec_obj80;
struct list$1CVALUEph* __dec_obj81;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_228, 0, sizeof(char*));
memset(&stack_saved_229, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_230, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_231, 0, sizeof(struct sClass*));
memset(&class_name_232, 0, sizeof(char*));
memset(&fun_name_233, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&type2_234, 0, sizeof(struct sType*));
memset(&cloner_235, 0, sizeof(struct sFun*));
memset(&fun_name2_236, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&none_generics_name_237, 0, sizeof(char*));
memset(&right_value174, 0, sizeof(void*));
memset(&obj_type_238, 0, sizeof(struct sType*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&fun_name3_239, 0, sizeof(char*));
memset(&generics_fun_240, 0, sizeof(struct sGenericsFun*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&i_241, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&new_fun_name_242, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&fun_243, 0, sizeof(struct sFun*));
memset(&new_fun_name_244, 0, sizeof(char*));
memset(&fun_243, 0, sizeof(struct sFun*));
memset(&new_fun_name_244, 0, sizeof(char*));
    # 872 "04heap.c"
    # 869 "04heap.c"
    if(_if_conditional282=type->mNoSolvedGenericsType->v1,    _if_conditional282) {
        # 870 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 873 "04heap.c"
    result_228=((void*)0);
    # 873 "04heap.c"
    stack_saved_229=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 874 "04heap.c"
    right_value_objects_230=info->right_value_objects;
    # 876 "04heap.c"
    klass_231=type->mClass;
    # 878 "04heap.c"
    class_name_232=klass_231->mName;
    # 880 "04heap.c"
    fun_name_233="operator_equals";
    # 882 "04heap.c"
    type2_234=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    # 883 "04heap.c"
    type2_234->mHeap=(_Bool)0;
    # 885 "04heap.c"
    cloner_235=((void*)0);
    # 886 "04heap.c"
    # 924 "04heap.c"
    # 887 "04heap.c"
    if(_if_conditional283=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional283) {
        # 888 "04heap.c"
        none_generics_name_237=(char*)come_increment_ref_count(((char*)(right_value173=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173;
        __freed_obj__ = 0;
        # 890 "04heap.c"
        obj_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value174;
        __freed_obj__ = 0;
        # 892 "04heap.c"
        __dec_obj76=fun_name2_236;
        fun_name2_236=(char*)come_increment_ref_count(((char*)(right_value175=create_method_name(obj_type_238,(_Bool)0,fun_name_233,info))));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value175;
        __freed_obj__ = 0;
        # 893 "04heap.c"
        fun_name3_239=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s_%s",none_generics_name_237,fun_name_233))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value176;
        __freed_obj__ = 0;
        # 895 "04heap.c"
        generics_fun_240=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_239,((void*)0));
        # 903 "04heap.c"
        # 897 "04heap.c"
        if(_if_conditional284=generics_fun_240,        _if_conditional284) {
            # 901 "04heap.c"
            # 898 "04heap.c"
            if(_if_conditional285=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(fun_name2_236)))),generics_fun_240,obj_type_238,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177),
            (right_value177 && right_value177 != __result_obj__ && !__freed_obj__) ? right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value177, 
            __freed_obj__ = 0, 
            _if_conditional285) {
                # 899 "04heap.c"
                __result98__ = (_Bool)0;
                if(none_generics_name_237 && !__freed_obj__) { none_generics_name_237 = come_decrement_ref_count(none_generics_name_237, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_239 && !__freed_obj__) { fun_name3_239 = come_decrement_ref_count(fun_name3_239, (void*)0, (void*)0, 0, 0, 0); }
                if(result_228 && !__freed_obj__) { result_228 = come_decrement_ref_count(result_228, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_229 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_229, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_234 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_236 && !__freed_obj__) { fun_name2_236 = come_decrement_ref_count(fun_name2_236, (void*)0, (void*)0, 0, 0, 0); }
                return __result98__;
            }
        }
        # 903 "04heap.c"
        cloner_235=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_236);
        if(none_generics_name_237 && !__freed_obj__) { none_generics_name_237 = come_decrement_ref_count(none_generics_name_237, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_239 && !__freed_obj__) { fun_name3_239 = come_decrement_ref_count(fun_name3_239, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 906 "04heap.c"
        __dec_obj77=fun_name2_236;
        fun_name2_236=(char*)come_increment_ref_count(((char*)(right_value178=create_method_name(type,(_Bool)0,fun_name_233,info))));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = 0;
        # 908 "04heap.c"
        # 919 "04heap.c"
        for(
        i_241=128-1 ,        0;        _for_condtionalA13=        i_241>=1 ,        _for_condtionalA13;        i_241-- ,        0        ){
            # 910 "04heap.c"
            new_fun_name_242=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s_v%d",fun_name2_236,i_241))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value179;
            __freed_obj__ = 0;
            # 911 "04heap.c"
            cloner_235=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_242);
            # 917 "04heap.c"
            # 913 "04heap.c"
            if(_if_conditional286=cloner_235,            _if_conditional286) {
                # 914 "04heap.c"
                __dec_obj78=fun_name2_236;
                fun_name2_236=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(new_fun_name_242))));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = 0;
                # 915 "04heap.c"
                if(new_fun_name_242 && !__freed_obj__) { new_fun_name_242 = come_decrement_ref_count(new_fun_name_242, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_242 && !__freed_obj__) { new_fun_name_242 = come_decrement_ref_count(new_fun_name_242, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 922 "04heap.c"
        # 919 "04heap.c"
        if(_if_conditional287=cloner_235==((void*)0),        _if_conditional287) {
            # 920 "04heap.c"
            cloner_235=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_236);
        }
    }
    # 932 "04heap.c"
    # 924 "04heap.c"
    if(_if_conditional288=cloner_235==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional288) {
        # 926 "04heap.c"
        multiple_assgin_var10=((struct tuple2$2sFunpcharph*)(right_value181=create_operator_equals_automatically(type,fun_name_233,info)));
        fun_243=multiple_assgin_var10->v1;
        new_fun_name_244=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        # 928 "04heap.c"
        __dec_obj79=fun_name2_236;
        fun_name2_236=(char*)come_increment_ref_count(new_fun_name_244);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        # 929 "04heap.c"
        cloner_235=fun_243;
        if(new_fun_name_244 && !__freed_obj__) { new_fun_name_244 = come_decrement_ref_count(new_fun_name_244, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 932 "04heap.c"
    __dec_obj80=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_230);
    if(__dec_obj80) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 933 "04heap.c"
    __dec_obj81=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_229);
    if(__dec_obj81) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 935 "04heap.c"
    __result99__ = (_Bool)1;
    if(result_228 && !__freed_obj__) { result_228 = come_decrement_ref_count(result_228, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_229 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_234 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_236 && !__freed_obj__) { fun_name2_236 = come_decrement_ref_count(fun_name2_236, (void*)0, (void*)0, 0, 0, 0); }
    return __result99__;
    if(result_228 && !__freed_obj__) { result_228 = come_decrement_ref_count(result_228, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_229 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_234 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_236 && !__freed_obj__) { fun_name2_236 = come_decrement_ref_count(fun_name2_236, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
char* result_245;
struct list$1CVALUEph* stack_saved_246;
struct list$1sRightValueObjectph* right_value_objects_247;
struct sClass* klass_248;
char* class_name_249;
char* fun_name_250;
void* right_value182;
struct sType* type2_251;
struct sFun* cloner_252;
char* fun_name2_253;
_Bool _if_conditional290;
void* right_value183;
char* none_generics_name_254;
void* right_value184;
struct sType* obj_type_255;
void* right_value185;
char* __dec_obj82;
void* right_value186;
char* fun_name3_256;
struct sGenericsFun* generics_fun_257;
_Bool _if_conditional291;
void* right_value187;
_Bool _if_conditional292;
_Bool __result100__;
void* right_value188;
char* __dec_obj83;
int i_258;
_Bool _for_condtionalA14;
void* right_value189;
char* new_fun_name_259;
_Bool _if_conditional293;
void* right_value190;
char* __dec_obj84;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value191;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_260;
char* new_fun_name_261;
char* __dec_obj85;
struct list$1sRightValueObjectph* __dec_obj86;
struct list$1CVALUEph* __dec_obj87;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_245, 0, sizeof(char*));
memset(&stack_saved_246, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_247, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_248, 0, sizeof(struct sClass*));
memset(&class_name_249, 0, sizeof(char*));
memset(&fun_name_250, 0, sizeof(char*));
memset(&right_value182, 0, sizeof(void*));
memset(&type2_251, 0, sizeof(struct sType*));
memset(&cloner_252, 0, sizeof(struct sFun*));
memset(&fun_name2_253, 0, sizeof(char*));
memset(&right_value183, 0, sizeof(void*));
memset(&none_generics_name_254, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&obj_type_255, 0, sizeof(struct sType*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&fun_name3_256, 0, sizeof(char*));
memset(&generics_fun_257, 0, sizeof(struct sGenericsFun*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&i_258, 0, sizeof(int));
memset(&right_value189, 0, sizeof(void*));
memset(&new_fun_name_259, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&fun_260, 0, sizeof(struct sFun*));
memset(&new_fun_name_261, 0, sizeof(char*));
memset(&fun_260, 0, sizeof(struct sFun*));
memset(&new_fun_name_261, 0, sizeof(char*));
    # 943 "04heap.c"
    # 940 "04heap.c"
    if(_if_conditional289=type->mNoSolvedGenericsType->v1,    _if_conditional289) {
        # 941 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 944 "04heap.c"
    result_245=((void*)0);
    # 944 "04heap.c"
    stack_saved_246=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 945 "04heap.c"
    right_value_objects_247=info->right_value_objects;
    # 947 "04heap.c"
    klass_248=type->mClass;
    # 949 "04heap.c"
    class_name_249=klass_248->mName;
    # 951 "04heap.c"
    fun_name_250="operator_not_equals";
    # 953 "04heap.c"
    type2_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value182;
    __freed_obj__ = 0;
    # 954 "04heap.c"
    type2_251->mHeap=(_Bool)0;
    # 956 "04heap.c"
    cloner_252=((void*)0);
    # 957 "04heap.c"
    # 995 "04heap.c"
    # 958 "04heap.c"
    if(_if_conditional290=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional290) {
        # 959 "04heap.c"
        none_generics_name_254=(char*)come_increment_ref_count(((char*)(right_value183=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183;
        __freed_obj__ = 0;
        # 961 "04heap.c"
        obj_type_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value184;
        __freed_obj__ = 0;
        # 963 "04heap.c"
        __dec_obj82=fun_name2_253;
        fun_name2_253=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(obj_type_255,(_Bool)0,fun_name_250,info))));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value185;
        __freed_obj__ = 0;
        # 964 "04heap.c"
        fun_name3_256=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s_%s",none_generics_name_254,fun_name_250))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value186;
        __freed_obj__ = 0;
        # 966 "04heap.c"
        generics_fun_257=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_256,((void*)0));
        # 974 "04heap.c"
        # 968 "04heap.c"
        if(_if_conditional291=generics_fun_257,        _if_conditional291) {
            # 972 "04heap.c"
            # 969 "04heap.c"
            if(_if_conditional292=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(fun_name2_253)))),generics_fun_257,obj_type_255,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187),
            (right_value187 && right_value187 != __result_obj__ && !__freed_obj__) ? right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value187, 
            __freed_obj__ = 0, 
            _if_conditional292) {
                # 970 "04heap.c"
                __result100__ = (_Bool)0;
                if(none_generics_name_254 && !__freed_obj__) { none_generics_name_254 = come_decrement_ref_count(none_generics_name_254, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_256 && !__freed_obj__) { fun_name3_256 = come_decrement_ref_count(fun_name3_256, (void*)0, (void*)0, 0, 0, 0); }
                if(result_245 && !__freed_obj__) { result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_246 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_251 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_253 && !__freed_obj__) { fun_name2_253 = come_decrement_ref_count(fun_name2_253, (void*)0, (void*)0, 0, 0, 0); }
                return __result100__;
            }
        }
        # 974 "04heap.c"
        cloner_252=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_253);
        if(none_generics_name_254 && !__freed_obj__) { none_generics_name_254 = come_decrement_ref_count(none_generics_name_254, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_256 && !__freed_obj__) { fun_name3_256 = come_decrement_ref_count(fun_name3_256, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        # 977 "04heap.c"
        __dec_obj83=fun_name2_253;
        fun_name2_253=(char*)come_increment_ref_count(((char*)(right_value188=create_method_name(type,(_Bool)0,fun_name_250,info))));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
        # 979 "04heap.c"
        # 990 "04heap.c"
        for(
        i_258=128-1 ,        0;        _for_condtionalA14=        i_258>=1 ,        _for_condtionalA14;        i_258-- ,        0        ){
            # 981 "04heap.c"
            new_fun_name_259=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s_v%d",fun_name2_253,i_258))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value189;
            __freed_obj__ = 0;
            # 982 "04heap.c"
            cloner_252=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_259);
            # 988 "04heap.c"
            # 984 "04heap.c"
            if(_if_conditional293=cloner_252,            _if_conditional293) {
                # 985 "04heap.c"
                __dec_obj84=fun_name2_253;
                fun_name2_253=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(new_fun_name_259))));
                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value190;
                __freed_obj__ = 0;
                # 986 "04heap.c"
                if(new_fun_name_259 && !__freed_obj__) { new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_259 && !__freed_obj__) { new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 993 "04heap.c"
        # 990 "04heap.c"
        if(_if_conditional294=cloner_252==((void*)0),        _if_conditional294) {
            # 991 "04heap.c"
            cloner_252=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_253);
        }
    }
    # 1003 "04heap.c"
    # 995 "04heap.c"
    if(_if_conditional295=cloner_252==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional295) {
        # 997 "04heap.c"
        multiple_assgin_var11=((struct tuple2$2sFunpcharph*)(right_value191=create_operator_not_equals_automatically(type,fun_name_250,info)));
        fun_260=multiple_assgin_var11->v1;
        new_fun_name_261=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191;
        __freed_obj__ = 0;
        # 999 "04heap.c"
        __dec_obj85=fun_name2_253;
        fun_name2_253=(char*)come_increment_ref_count(new_fun_name_261);
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        # 1000 "04heap.c"
        cloner_252=fun_260;
        if(new_fun_name_261 && !__freed_obj__) { new_fun_name_261 = come_decrement_ref_count(new_fun_name_261, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 1003 "04heap.c"
    __dec_obj86=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_247);
    if(__dec_obj86) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1004 "04heap.c"
    __dec_obj87=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_246);
    if(__dec_obj87) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1006 "04heap.c"
    __result101__ = (_Bool)1;
    if(result_245 && !__freed_obj__) { result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_246 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_251 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_253 && !__freed_obj__) { fun_name2_253 = come_decrement_ref_count(fun_name2_253, (void*)0, (void*)0, 0, 0, 0); }
    return __result101__;
    if(result_245 && !__freed_obj__) { result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_246 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_251 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_253 && !__freed_obj__) { fun_name2_253 = come_decrement_ref_count(fun_name2_253, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
_Bool free_right_value_262;
struct list$1sRightValueObjectph* right_value_objects_263;
int n_264;
_Bool change_freed_object_265;
struct list$1sRightValueObjectph* o2_saved_266;
struct sRightValueObject* it_267;
_Bool _for_condtionalA15;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value192;
struct sType* type_268;
void* right_value193;
struct sType* __dec_obj88;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_262, 0, sizeof(_Bool));
memset(&right_value_objects_263, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_264, 0, sizeof(int));
memset(&change_freed_object_265, 0, sizeof(_Bool));
memset(&o2_saved_266, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_267, 0, sizeof(struct sRightValueObject*));
memset(&right_value192, 0, sizeof(void*));
memset(&type_268, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
    # 1014 "04heap.c"
    # 1011 "04heap.c"
    if(_if_conditional296=gComeGC,    _if_conditional296) {
        # 1012 "04heap.c"
        return;
    }
    # 1014 "04heap.c"
    free_right_value_262=(_Bool)0;
    # 1015 "04heap.c"
    right_value_objects_263=info->right_value_objects;
    # 1017 "04heap.c"
    n_264=0;
    # 1018 "04heap.c"
    change_freed_object_265=(_Bool)0;
    # 1056 "04heap.c"
    for(
    o2_saved_266=(right_value_objects_263),it_267=list$1sRightValueObjectph_begin((o2_saved_266)) ,    0;    _for_condtionalA15=    !list$1sRightValueObjectph_end((o2_saved_266)) ,    _for_condtionalA15;    it_267=list$1sRightValueObjectph_next((o2_saved_266)) ,    0    ){
        # 1052 "04heap.c"
        # 1020 "04heap.c"
        if(_if_conditional297=it_267&&!it_267->mFreed,        _if_conditional297) {
            # 1050 "04heap.c"
            # 1021 "04heap.c"
            if(_if_conditional298=string_operator_equals(it_267->mFunName,info->come_fun->mName)&&it_267->mBlockLevel==info->block_level,            _if_conditional298) {
                # 1022 "04heap.c"
                change_freed_object_265=(_Bool)1;
                # 1023 "04heap.c"
                type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(it_267->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value192;
                __freed_obj__ = 0;
                # 1025 "04heap.c"
                __dec_obj88=type_268;
                type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=solve_type(type_268,info->generics_type,info->method_generics_types,info))));
                if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value193;
                __freed_obj__ = 0;
                # 1036 "04heap.c"
                # 1028 "04heap.c"
                if(_if_conditional299=comma,                _if_conditional299) {
                    # 1029 "04heap.c"
                    add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_264,it_267->mVarName);
                }
                else {
                    # 1032 "04heap.c"
                    add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_264,it_267->mVarName);
                }
                # 1036 "04heap.c"
                free_object(type_268,it_267->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                # 1047 "04heap.c"
                # 1039 "04heap.c"
                if(_if_conditional300=comma,                _if_conditional300) {
                    # 1040 "04heap.c"
                    add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_264,it_267->mVarName);
                }
                else {
                    # 1043 "04heap.c"
                    add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_264,it_267->mVarName);
                }
                # 1047 "04heap.c"
                it_267->mFreed=(_Bool)1;
                # 1048 "04heap.c"
                free_right_value_262=(_Bool)1;
                if(type_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_268, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        # 1052 "04heap.c"
        n_264++;
    }
    # 1065 "04heap.c"
    # 1056 "04heap.c"
    if(_if_conditional301=change_freed_object_265,    _if_conditional301) {
        # 1063 "04heap.c"
        # 1057 "04heap.c"
        if(_if_conditional302=comma,        _if_conditional302) {
            # 1058 "04heap.c"
            add_come_code(info,"__freed_obj__ = 0, \n");
        }
        else {
            # 1061 "04heap.c"
            add_come_code(info,"__freed_obj__ = 0;\n");
        }
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
_Bool __result102__;
struct list$1sRightValueObjectph* o2_saved_269;
struct sRightValueObject* it_270;
_Bool _for_condtionalA16;
_Bool _if_conditional304;
_Bool __result103__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_269, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_270, 0, sizeof(struct sRightValueObject*));
    # 1072 "04heap.c"
    # 1069 "04heap.c"
    if(_if_conditional303=gComeGC,    _if_conditional303) {
        # 1070 "04heap.c"
        __result102__ = (_Bool)0;
        return __result102__;
    }
    # 1078 "04heap.c"
    for(
    o2_saved_269=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_270=list$1sRightValueObjectph_begin((o2_saved_269)) ,    0;    _for_condtionalA16=    !list$1sRightValueObjectph_end((o2_saved_269)) ,    _for_condtionalA16;    it_270=list$1sRightValueObjectph_next((o2_saved_269)) ,    0    ){
        # 1076 "04heap.c"
        # 1073 "04heap.c"
        if(_if_conditional304=it_270->mID==right_value_num,        _if_conditional304) {
            # 1074 "04heap.c"
            __result103__ = (_Bool)1;
            if(o2_saved_269 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result103__;
        }
    }
    if(o2_saved_269 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1078 "04heap.c"
    __result104__ = (_Bool)0;
    return __result104__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_271;
_Bool _while_condtional21;
struct sVar* var__275;
_Bool _if_conditional309;
struct sVar* __result110__;
struct sVar* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_271, 0, sizeof(struct sVarTable*));
memset(&var__275, 0, sizeof(struct sVar*));
    # 1084 "04heap.c"
    it_271=table;
    # 1096 "04heap.c"
    while(_while_condtional21=it_271,    _while_condtional21) {
        # 1087 "04heap.c"
        var__275=map$2charphsVarphp_operator_load_element(it_271->mVars,name);
        # 1093 "04heap.c"
        # 1089 "04heap.c"
        if(_if_conditional309=var__275,        _if_conditional309) {
            # 1090 "04heap.c"
            __result110__ = __result_obj__ = var__275;
            return __result110__;
        }
        # 1093 "04heap.c"
        it_271=it_271->mParent;
    }
    # 1096 "04heap.c"
    __result111__ = __result_obj__ = ((void*)0);
    return __result111__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_272;
unsigned int hash_273;
unsigned int it_274;
_Bool _while_condtional22;
_Bool _if_conditional305;
void* right_value194;
_Bool _if_conditional306;
struct sVar* __result105__;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct sVar* __result106__;
struct sVar* __result107__;
void* right_value195;
void* right_value196;
struct sVar* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_272, 0, sizeof(struct sVar*));
memset(&hash_273, 0, sizeof(unsigned int));
memset(&it_274, 0, sizeof(unsigned int));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
            # 1591 "./comelang2.h"
            # 1592 "./comelang2.h"
            memset(&default_value_272,0,sizeof(struct sVar*));
            # 1594 "./comelang2.h"
            hash_273=string_get_hash_key(((char*)key))%self->size;
            # 1595 "./comelang2.h"
            it_274=hash_273;
            # 1619 "./comelang2.h"
            while(_while_condtional22=(_Bool)1,            _while_condtional22) {
                # 1617 "./comelang2.h"
                # 1598 "./comelang2.h"
                if(_if_conditional305=self->item_existance[it_274],                _if_conditional305) {
                    # 1605 "./comelang2.h"
                    # 1600 "./comelang2.h"
                    if(_if_conditional306=optional$2boolbool_value(((struct optional$2boolbool*)(right_value194=string_equals(self->keys[it_274],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194),
                    (right_value194 && right_value194 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value194, 
                    __freed_obj__ = 0, 
                    _if_conditional306) {
                        # 1602 "./comelang2.h"
                        __result105__ = __result_obj__ = self->items[it_274];
                        return __result105__;
                    }
                    # 1605 "./comelang2.h"
                    it_274++;
                    # 1613 "./comelang2.h"
                    # 1607 "./comelang2.h"
                    if(_if_conditional307=it_274>=self->size,                    _if_conditional307) {
                        # 1608 "./comelang2.h"
                        it_274=0;
                    }
                    else {
                        # 1613 "./comelang2.h"
                        # 1610 "./comelang2.h"
                        if(_if_conditional308=it_274==hash_273,                        _if_conditional308) {
                            # 1611 "./comelang2.h"
                            __result106__ = __result_obj__ = default_value_272;
                            return __result106__;
                        }
                    }
                }
                else {
                    # 1615 "./comelang2.h"
                    __result107__ = __result_obj__ = default_value_272;
                    return __result107__;
                }
            }
            # 1619 "./comelang2.h"
            __result109__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value196=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value195=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1619))),default_value_272,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value195;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value196;
            __freed_obj__ = 0;
            return __result109__;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 40 "./comelang2.h"
                self->v1=v1;
                # 41 "./comelang2.h"
                self->v2=v2;
                # 43 "./comelang2.h"
                __result108__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result108__;
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
_Bool _if_conditional310;
struct map$2charphsVarph* o2_saved_276;
char* it_279;
_Bool _for_condtionalA17;
struct sVar* p_282;
struct sType* type_283;
struct sClass* klass_284;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value197;
char* c_value_285;
void* right_value198;
struct sType* type2_286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_276, 0, sizeof(struct map$2charphsVarph*));
memset(&it_279, 0, sizeof(char*));
memset(&p_282, 0, sizeof(struct sVar*));
memset(&type_283, 0, sizeof(struct sType*));
memset(&klass_284, 0, sizeof(struct sClass*));
memset(&right_value197, 0, sizeof(void*));
memset(&c_value_285, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&type2_286, 0, sizeof(struct sType*));
    # 1104 "04heap.c"
    # 1101 "04heap.c"
    if(_if_conditional310=gComeGC,    _if_conditional310) {
        # 1102 "04heap.c"
        return;
    }
    # 1128 "04heap.c"
    for(
    o2_saved_276=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_279=map$2charphsVarph_begin((o2_saved_276)) ,    0;    _for_condtionalA17=    !map$2charphsVarph_end((o2_saved_276)) ,    _for_condtionalA17;    it_279=map$2charphsVarph_next((o2_saved_276)) ,    0    ){
        # 1105 "04heap.c"
        p_282=map$2charphsVarphp_operator_load_element(table->mVars,it_279);
        # 1106 "04heap.c"
        type_283=p_282->mType;
        # 1107 "04heap.c"
        klass_284=type_283->mClass;
        # 1127 "04heap.c"
        # 1109 "04heap.c"
        if(_if_conditional315=ret_value!=((void*)0)&&p_282->mCValueName!=((void*)0)&&string_operator_equals(p_282->mCValueName,ret_value->mCValueName)&&type_283->mHeap,        _if_conditional315) {
            # 1111 "04heap.c"
            free_object(p_282->mType,p_282->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            # 1127 "04heap.c"
            # 1113 "04heap.c"
            if(_if_conditional316=type_283->mHeap&&p_282->mCValueName,            _if_conditional316) {
                # 1120 "04heap.c"
                # 1114 "04heap.c"
                if(_if_conditional317=type_283->mFunctionParam,                _if_conditional317) {
                    # 1115 "04heap.c"
                    free_object(p_282->mType,p_282->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    # 1118 "04heap.c"
                    free_object(p_282->mType,p_282->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                # 1127 "04heap.c"
                # 1121 "04heap.c"
                if(_if_conditional318=klass_284->mStruct&&p_282->mCValueName&&type_283->mAllocaValue&&!type_283->mNoCallingDestructor,                _if_conditional318) {
                    # 1122 "04heap.c"
                    c_value_285=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("(&%s)",p_282->mCValueName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    # 1123 "04heap.c"
                    type2_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type_283))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value198;
                    __freed_obj__ = 0;
                    # 1124 "04heap.c"
                    type2_286->mPointerNum++;
                    # 1125 "04heap.c"
                    free_object(type2_286,c_value_285,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    if(c_value_285 && !__freed_obj__) { c_value_285 = come_decrement_ref_count(c_value_285, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_286 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_286, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
    }
    if(o2_saved_276 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional311;
char* result_277;
char* __result112__;
_Bool _if_conditional312;
char* __result113__;
char* result_278;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_277, 0, sizeof(char*));
memset(&result_278, 0, sizeof(char*));
        # 1343 "./comelang2.h"
        # 1338 "./comelang2.h"
        if(_if_conditional311=self==((void*)0),        _if_conditional311) {
            # 1339 "./comelang2.h"
            # 1340 "./comelang2.h"
            memset(&result_277,0,sizeof(char*));
            # 1341 "./comelang2.h"
            __result112__ = __result_obj__ = result_277;
            return __result112__;
        }
        # 1343 "./comelang2.h"
        self->key_list->it=self->key_list->head;
        # 1349 "./comelang2.h"
        # 1345 "./comelang2.h"
        if(_if_conditional312=self->key_list->it,        _if_conditional312) {
            # 1346 "./comelang2.h"
            __result113__ = __result_obj__ = self->key_list->it->item;
            return __result113__;
        }
        # 1349 "./comelang2.h"
        # 1350 "./comelang2.h"
        memset(&result_278,0,sizeof(char*));
        # 1351 "./comelang2.h"
        __result114__ = __result_obj__ = result_278;
        return __result114__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1372 "./comelang2.h"
        __result115__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result115__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
char* result_280;
char* __result116__;
_Bool _if_conditional314;
char* __result117__;
char* result_281;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_280, 0, sizeof(char*));
memset(&result_281, 0, sizeof(char*));
        # 1360 "./comelang2.h"
        # 1355 "./comelang2.h"
        if(_if_conditional313=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional313) {
            # 1356 "./comelang2.h"
            # 1357 "./comelang2.h"
            memset(&result_280,0,sizeof(char*));
            # 1358 "./comelang2.h"
            __result116__ = __result_obj__ = result_280;
            return __result116__;
        }
        # 1360 "./comelang2.h"
        self->key_list->it=self->key_list->it->next;
        # 1366 "./comelang2.h"
        # 1362 "./comelang2.h"
        if(_if_conditional314=self->key_list->it,        _if_conditional314) {
            # 1363 "./comelang2.h"
            __result117__ = __result_obj__ = self->key_list->it->item;
            return __result117__;
        }
        # 1366 "./comelang2.h"
        # 1367 "./comelang2.h"
        memset(&result_281,0,sizeof(char*));
        # 1368 "./comelang2.h"
        __result118__ = __result_obj__ = result_281;
        return __result118__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_287;
_Bool _for_condtionalA18;
_Bool _if_conditional319;
_Bool _if_conditional320;
int i_288;
_Bool _for_condtionalA19;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_287, 0, sizeof(int));
memset(&i_288, 0, sizeof(int));
        # 1179 "./comelang2.h"
        for(
        i_287=0 ,        0;        _for_condtionalA18=        i_287<self->size ,        _for_condtionalA18;        i_287++ ,        0        ){
            # 1178 "./comelang2.h"
            # 1173 "./comelang2.h"
            if(_if_conditional319=self->item_existance[i_287],            _if_conditional319) {
                # 1177 "./comelang2.h"
                # 1174 "./comelang2.h"
                if(_if_conditional320=1,                _if_conditional320) {
                    # 1175 "./comelang2.h"
                    if(self->items[i_287] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_287], (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
        }
        # 1179 "./comelang2.h"
        come_free_object((char*)self->items);
        # 1188 "./comelang2.h"
        for(
        i_288=0 ,        0;        _for_condtionalA19=        i_288<self->size ,        _for_condtionalA19;        i_288++ ,        0        ){
            # 1187 "./comelang2.h"
            # 1182 "./comelang2.h"
            if(_if_conditional325=self->item_existance[i_288],            _if_conditional325) {
                # 1186 "./comelang2.h"
                # 1183 "./comelang2.h"
                if(_if_conditional326=1,                _if_conditional326) {
                    # 1184 "./comelang2.h"
                    if(self->keys[i_288] && !__freed_obj__) { self->keys[i_288] = come_decrement_ref_count(self->keys[i_288], (void*)0, (void*)0, 0, 0, 0); }
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

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "sVar_finalize"
                        # 0 "sVar_finalize"
                        if(_if_conditional321=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional321) {
                            # 0 "sVar_finalize"
                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "sVar_finalize"
                        # 1 "sVar_finalize"
                        if(_if_conditional322=self!=((void*)0)&&self->mCValueName!=((void*)0),                        _if_conditional322) {
                            # 1 "sVar_finalize"
                            if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 3 "sVar_finalize"
                        # 2 "sVar_finalize"
                        if(_if_conditional323=self!=((void*)0)&&self->mType!=((void*)0),                        _if_conditional323) {
                            # 2 "sVar_finalize"
                            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        # 4 "sVar_finalize"
                        # 3 "sVar_finalize"
                        if(_if_conditional324=self!=((void*)0)&&self->mFunName!=((void*)0),                        _if_conditional324) {
                            # 3 "sVar_finalize"
                            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_289;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_289, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_290, 0, sizeof(struct list_item$1charp*));
            # 176 "./comelang2.h"
            it_289=self->head;
            # 182 "./comelang2.h"
            while(_while_condtional23=it_289!=((void*)0),            _while_condtional23) {
                # 178 "./comelang2.h"
                prev_it_290=it_289;
                # 179 "./comelang2.h"
                it_289=it_289->next;
                # 180 "./comelang2.h"
                if(prev_it_290 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_290, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional327;
struct sVarTable* it_291;
_Bool _if_conditional328;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_291, 0, sizeof(struct sVarTable*));
    # 1135 "04heap.c"
    # 1132 "04heap.c"
    if(_if_conditional327=gComeGC,    _if_conditional327) {
        # 1133 "04heap.c"
        return;
    }
    # 1135 "04heap.c"
    it_291=info->lv_table;
    # 1148 "04heap.c"
    # 1137 "04heap.c"
    if(_if_conditional328=it_291==info->come_fun->mBlock->mVarTable,    _if_conditional328) {
        # 1138 "04heap.c"
        free_objects(it_291,ret_value,info);
    }
    else {
        # 1146 "04heap.c"
        while(_while_condtional24=it_291!=info->come_fun->mBlock->mVarTable,        _while_condtional24) {
            # 1142 "04heap.c"
            free_objects(it_291,ret_value,info);
            # 1144 "04heap.c"
            it_291=it_291->mParent;
        }
        # 1146 "04heap.c"
        free_objects(it_291,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
struct sVar* ret_value_292;
struct sVarTable* current_loop_vtable_293;
_Bool _if_conditional330;
struct sVarTable* it_294;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_292, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_293, 0, sizeof(struct sVarTable*));
memset(&it_294, 0, sizeof(struct sVarTable*));
    # 1155 "04heap.c"
    # 1152 "04heap.c"
    if(_if_conditional329=gComeGC,    _if_conditional329) {
        # 1153 "04heap.c"
        return;
    }
    # 1155 "04heap.c"
    ret_value_292=((void*)0);
    # 1157 "04heap.c"
    current_loop_vtable_293=info->current_loop_vtable;
    # 1168 "04heap.c"
    # 1159 "04heap.c"
    if(_if_conditional330=current_loop_vtable_293!=((void*)0),    _if_conditional330) {
        # 1160 "04heap.c"
        it_294=info->lv_table;
        # 1166 "04heap.c"
        while(_while_condtional25=it_294!=current_loop_vtable_293,        _while_condtional25) {
            # 1162 "04heap.c"
            free_objects(it_294,ret_value_292,info);
            # 1164 "04heap.c"
            it_294=it_294->mParent;
        }
        # 1166 "04heap.c"
        free_objects(it_294,ret_value_292,info);
    }
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
char* __result119__;
_Bool _if_conditional333;
static int n_295=0;
void* right_value203;
char* var_name_296;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
char* __result120__;
void* right_value211;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&var_name_296, 0, sizeof(char*));
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
    if(_if_conditional331=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional331) {
        # 1176 "04heap.c"
        # 1173 "04heap.c"
        if(_if_conditional332=gComeDebug,        _if_conditional332) {
            # 1174 "04heap.c"
            __result119__ = __result_obj__ = ((char*)(right_value202=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value199=string_to_string(info->sname))),((char*)(right_value200=int_to_string(info->sline))),((char*)(right_value201=charp_to_string(c_value))))));
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
            return __result119__;
        }
    }
    else {
        # 1186 "04heap.c"
        # 1177 "04heap.c"
        if(_if_conditional333=gComeDebug,        _if_conditional333) {
            # 1178 "04heap.c"
            # 1179 "04heap.c"
            ++n_295;
            # 1181 "04heap.c"
            var_name_296=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("__exception_result_var_b%d",n_295))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value203;
            __freed_obj__ = 0;
            # 1182 "04heap.c"
            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value204=make_define_var(type,var_name_296,(_Bool)0,info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value204;
            __freed_obj__ = 0;
            # 1183 "04heap.c"
            __result120__ = __result_obj__ = ((char*)(right_value210=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value205=string_to_string(info->sname))),((char*)(right_value206=int_to_string(info->sline))),((char*)(right_value207=string_to_string(var_name_296))),((char*)(right_value208=charp_to_string(c_value))),((char*)(right_value209=string_to_string(var_name_296))))));
            if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
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
            return __result120__;
            if(var_name_296 && !__freed_obj__) { var_name_296 = come_decrement_ref_count(var_name_296, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    # 1186 "04heap.c"
    __result121__ = __result_obj__ = ((char*)(right_value211=__builtin_string(c_value)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value211;
    __freed_obj__ = 0;
    return __result121__;
}

