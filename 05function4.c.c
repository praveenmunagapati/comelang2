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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2tuple4$4voidpvoidpvoidpboolphbool
{
    struct tuple4$4voidpvoidpvoidpbool* v1;
    _Bool v2;
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

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
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
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2);
static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self);
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
static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
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
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
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
    nest_5=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        if(_if_conditional5=*info->p==40,        _if_conditional5) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_5++;
        }
        else {
            if(_if_conditional6=*info->p==41,            _if_conditional6) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_5--;
                if(_if_conditional7=nest_5==0,                _if_conditional7) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value10;
void* right_value11;
struct buffer* fname_7;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value12;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&line_6, 0, sizeof(int));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&fname_7, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
    while(_while_condtional2=strmemcmp(info->p,"__attribute__"),    _while_condtional2) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional3=strmemcmp(info->p,"__extension__"),    _while_condtional3) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(_while_condtional4=*info->p==35,    _while_condtional4) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional8=strmemcmp(info->p,"pragma"),        _if_conditional8) {
            while(_while_condtional5=*info->p,            _while_condtional5) {
                if(_if_conditional9=*info->p==10,                _if_conditional9) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(_if_conditional10=xisdigit(*info->p),            _if_conditional10) {
                line_6=0;
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value10;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value11;
                __freed_obj__ = 0;
                while(_while_condtional6=xisdigit(*info->p),                _while_condtional6) {
                    line_6=line_6*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional11=*info->p==34,                _if_conditional11) {
                    info->p++;
                    while(_while_condtional7=*info->p!=34,                    _while_condtional7) {
                        buffer_append_char(fname_7,*info->p);
                        info->p++;
                    }
                    while(_while_condtional8=*info->p!=10,                    _while_condtional8) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_6;
                __dec_obj6=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(fname_7))));
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value12);
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value12;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                if(fname_7 && !__freed_obj__) { come_call_finalizer(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional12=*info->p==34,                _if_conditional12) {
                    info->p++;
                    while(_while_condtional9=*info->p!=34,                    _while_condtional9) {
                        info->p++;
                    }
                    while(_while_condtional10=*info->p!=10,                    _while_condtional10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(_while_condtional11=strmemcmp(info->p,"__attribute__"),    _while_condtional11) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional12=strmemcmp(info->p,"__extension__"),    _while_condtional12) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char c_8;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result13__ = strmemcmp(info->p,str)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result13__;
}

struct optional$2charphbool* parse_word(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
void* right_value14;
struct buffer* buf_9;
_Bool _while_condtional13;
void* right_value15;
_Bool _if_conditional13;
void* right_value16;
void* right_value17;
void* right_value18;
struct optional$2charphbool* __result15__;
void* right_value19;
void* right_value20;
void* right_value21;
struct optional$2charphbool* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_9, 0, sizeof(struct buffer*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value15=buffer_to_string(buf_9))))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15),
    (right_value15 && right_value15 != __result_obj__ && !__freed_obj__) ? right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value15, 
    __freed_obj__ = 0, 
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result15__ = __result_obj__ = ((struct optional$2charphbool*)(right_value18=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value17=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 157)))),(char*)come_increment_ref_count(((char*)(right_value16=__builtin_string("")))),(_Bool)1)));
        if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value16;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value17;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value18;
        __freed_obj__ = 0;
        return __result15__;
    }
    __result16__ = __result_obj__ = ((struct optional$2charphbool*)(right_value21=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value20=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 160)))),(char*)come_increment_ref_count(((char*)(right_value19=buffer_to_string(buf_9)))),(_Bool)1)));
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value20;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value21);
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value21;
    __freed_obj__ = 0;
    return __result16__;
    if(buf_9 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj7;
struct optional$2charphbool* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj7=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
            self->v2=v2;
            __result14__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            return __result14__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional14=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional14) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        if(_if_conditional15=*info->p==32||*info->p==9,        _if_conditional15) {
            info->p++;
        }
        else {
            if(_if_conditional16=*info->p==10,            _if_conditional16) {
                info->p++;
                info->sline++;
            }
            else {
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
struct sType* it_13;
_Bool _for_condtionalA1;
_Bool _if_conditional21;
_Bool __result24__;
_Bool _if_conditional38;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct sType*));
    for(
    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_13=list$1sTypeph_begin((o2_saved_10)) ,    0;    _for_condtionalA1=    !list$1sTypeph_end((o2_saved_10)) ,    _for_condtionalA1;    it_13=list$1sTypeph_next((o2_saved_10)) ,    0    ){
        if(_if_conditional21=is_contained_generics_class(it_13,info),        _if_conditional21) {
            __result24__ = (_Bool)1;
            if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result24__;
        }
    }
    if(o2_saved_10 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional38=type->mClass->mGenerics,    _if_conditional38) {
        __result25__ = (_Bool)1;
        return __result25__;
    }
    __result26__ = (_Bool)0;
    return __result26__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
struct sType* result_11;
struct sType* __result17__;
_Bool _if_conditional18;
struct sType* __result18__;
struct sType* result_12;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_11, 0, sizeof(struct sType*));
memset(&result_12, 0, sizeof(struct sType*));
        if(_if_conditional17=self==((void*)0),        _if_conditional17) {
            memset(&result_11,0,sizeof(struct sType*));
            __result17__ = __result_obj__ = result_11;
            return __result17__;
        }
        self->it=self->head;
        if(_if_conditional18=self->it,        _if_conditional18) {
            __result18__ = __result_obj__ = self->it->item;
            return __result18__;
        }
        memset(&result_12,0,sizeof(struct sType*));
        __result19__ = __result_obj__ = result_12;
        return __result19__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result20__ = self==((void*)0)||self->it==((void*)0);
        return __result20__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
struct sType* result_14;
struct sType* __result21__;
_Bool _if_conditional20;
struct sType* __result22__;
struct sType* result_15;
struct sType* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(_if_conditional19=self==((void*)0)||self->it==((void*)0),        _if_conditional19) {
            memset(&result_14,0,sizeof(struct sType*));
            __result21__ = __result_obj__ = result_14;
            return __result21__;
        }
        self->it=self->it->next;
        if(_if_conditional20=self->it,        _if_conditional20) {
            __result22__ = __result_obj__ = self->it->item;
            return __result22__;
        }
        memset(&result_15,0,sizeof(struct sType*));
        __result23__ = __result_obj__ = result_15;
        return __result23__;
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
                it_16=self->head;
                while(_while_condtional15=it_16!=((void*)0),                _while_condtional15) {
                    prev_it_17=it_16;
                    it_16=it_16->next;
                    if(prev_it_17 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional22) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional23) {
                                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional25) {
                                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional26) {
                                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional27) {
                                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional28) {
                                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional30) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional31) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional33) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional34) {
                                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional35) {
                                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional36) {
                                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional37) {
                                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional24) {
                                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                        it_18=self->head;
                                        while(_while_condtional16=it_18!=((void*)0),                                        _while_condtional16) {
                                            prev_it_19=it_18;
                                            it_18=it_18->next;
                                            if(prev_it_19 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional29) {
                                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
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
                                        it_20=self->head;
                                        while(_while_condtional17=it_20!=((void*)0),                                        _while_condtional17) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional32) {
                                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value22;
void* right_value23;
struct list$1sTypeph* param_types_22;
void* right_value24;
void* right_value25;
struct list$1charph* param_names_23;
void* right_value26;
void* right_value27;
struct list$1charph* param_default_parametors_24;
_Bool var_args_25;
void* right_value28;
_Bool void_param_27;
char* p_28;
int sline_29;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _while_condtional18;
_Bool _if_conditional45;
void* right_value29;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_30;
char* param_name_31;
_Bool err_32;
_Bool _if_conditional48;
void* right_value30;
void* right_value31;
void* right_value32;
void* right_value33;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result33__;
void* right_value34;
struct sType* param_type2_33;
void* right_value72;
void* right_value76;
_Bool _if_conditional124;
char* p_58;
_Bool no_comma_59;
void* right_value77;
struct sNode* node_60;
char* p2_61;
void* right_value78;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value79;
_Bool _if_conditional127;
void* right_value80;
void* right_value90;
void* right_value91;
void* right_value92;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&param_types_22, 0, sizeof(struct list$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&param_names_23, 0, sizeof(struct list$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&param_default_parametors_24, 0, sizeof(struct list$1charph*));
memset(&var_args_25, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&void_param_27, 0, sizeof(_Bool));
memset(&p_28, 0, sizeof(char*));
memset(&sline_29, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
memset(&param_type_30, 0, sizeof(struct sType*));
memset(&param_name_31, 0, sizeof(char*));
memset(&err_32, 0, sizeof(_Bool));
memset(&param_type_30, 0, sizeof(struct sType*));
memset(&param_name_31, 0, sizeof(char*));
memset(&err_32, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&param_type2_33, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&p_58, 0, sizeof(char*));
memset(&no_comma_59, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
memset(&node_60, 0, sizeof(struct sNode*));
memset(&p2_61, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    param_types_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value23;
    __freed_obj__ = 0;
    param_names_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value24;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value25;
    __freed_obj__ = 0;
    param_default_parametors_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value26;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value27);
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value27;
    __freed_obj__ = 0;
    var_args_25=(_Bool)0;
    optional$2intbool_value(((struct optional$2intbool*)(right_value28=expected_next_character(40,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value28);
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value28;
    __freed_obj__ = 0;
    void_param_27=(_Bool)0;
    {
        p_28=info->p;
        sline_29=info->sline;
        if(_if_conditional40=strmemcmp(info->p,"void"),        _if_conditional40) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional41=*info->p==41,            _if_conditional41) {
                void_param_27=(_Bool)1;
            }
        }
        info->p=p_28;
        info->sline=sline_29;
    }
    if(_if_conditional42=void_param_27,    _if_conditional42) {
        if(_if_conditional43=strmemcmp(info->p,"void"),        _if_conditional43) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional44=*info->p==41,            _if_conditional44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional45=*info->p==41,            _if_conditional45) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value29=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_30=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_31=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_32=multiple_assgin_var1->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value29;
            __freed_obj__ = 0;
            if(_if_conditional48=!err_32,            _if_conditional48) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result33__ = __result_obj__ = ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value33=optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value32=(struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4voidpvoidpvoidpboolphbool)*(1), "05function4.c", 247))),(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value31=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value30=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247)))),((void*)0),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0)));
                if(param_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_name_31 && !__freed_obj__) { param_name_31 = come_decrement_ref_count(param_name_31, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value31;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value33;
                __freed_obj__ = 0;
                return __result33__;
            }
            param_type2_33=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=solve_generics(param_type_30,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value34;
            __freed_obj__ = 0;
            param_type2_33->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(param_type2_33)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value72;
            __freed_obj__ = 0;
            list$1charph_push_back(param_names_23,(char*)come_increment_ref_count(((char*)(right_value76=string_clone(param_name_31)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value76;
            __freed_obj__ = 0;
            if(_if_conditional124=*info->p==61,            _if_conditional124) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_58=info->p;
                no_comma_59=info->no_comma;
                info->no_comma=(_Bool)1;
                node_60=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
                info->no_comma=no_comma_59;
                p2_61=info->p;
                char buf_62[p2_61-p_58+1];
                memset(&buf_62, 0, sizeof(char)                *(p2_61-p_58+1)                );
                memcpy(buf_62,p_58,p2_61-p_58);
                buf_62[p2_61-p_58]=0;
                list$1charph_push_back(param_default_parametors_24,(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(buf_62)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value78;
                __freed_obj__ = 0;
                if(node_60 && !__freed_obj__) { node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_24,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional125=*info->p==44,            _if_conditional125) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional126=strmemcmp(info->p,"..."),                _if_conditional126) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_25=(_Bool)1;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value79=expected_next_character(41,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value79;
                    __freed_obj__ = 0;
                    if(param_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_31 && !__freed_obj__) { param_name_31 = come_decrement_ref_count(param_name_31, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_33 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_33, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            else {
                if(_if_conditional127=*info->p==41,                _if_conditional127) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(param_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_31 && !__freed_obj__) { param_name_31 = come_decrement_ref_count(param_name_31, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_33 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_33, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
            }
            if(param_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_name_31 && !__freed_obj__) { param_name_31 = come_decrement_ref_count(param_name_31, (void*)0, (void*)0, 0, 0, 0); }
            if(param_type2_33 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_33, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result58__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value92=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_increment_ref_count(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value91=(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool)*(1), "05function4.c", 307)))),(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value90=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value80=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_22),(struct list$1charph*)come_increment_ref_count(param_names_23),(struct list$1charph*)come_increment_ref_count(param_default_parametors_24),var_args_25)))),(_Bool)1)));
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value80;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value90;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value91;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value92;
    __freed_obj__ = 0;
    return __result58__;
    if(param_types_22 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result27__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result27__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result28__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result28__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
int default_value_26;
int __result29__;
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_26, 0, sizeof(int));
        if(_if_conditional39=self==((void*)0),        _if_conditional39) {
            memset(&default_value_26,0,sizeof(int));
            __result29__ = default_value_26;
            return __result29__;
        }
        else {
            __result30__ = self->v1;
            return __result30__;
        }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional46) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional47=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional47) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result31__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result31__;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __dec_obj8;
struct optional$2tuple4$4voidpvoidpvoidpboolphbool* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj8=self->v1;
                    self->v1=(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(v1);
                    if(__dec_obj8) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result32__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result32__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional49) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
void* right_value35;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj9;
_Bool _if_conditional51;
void* right_value36;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj10;
void* right_value37;
struct list_item$1sTypeph* litem_36;
struct sType* __dec_obj11;
struct list$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional50=self->len==0,                _if_conditional50) {
                    litem_34=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value35;
                    __freed_obj__ = 0;
                    litem_34->prev=((void*)0);
                    litem_34->next=((void*)0);
                    __dec_obj9=litem_34->item;
                    litem_34->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_34;
                    self->head=litem_34;
                }
                else {
                    if(_if_conditional51=self->len==1,                    _if_conditional51) {
                        litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value36;
                        __freed_obj__ = 0;
                        litem_35->prev=self->head;
                        litem_35->next=((void*)0);
                        __dec_obj10=litem_35->item;
                        litem_35->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_35;
                        self->head->next=litem_35;
                    }
                    else {
                        litem_36=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value37=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value37;
                        __freed_obj__ = 0;
                        litem_36->prev=self->tail;
                        litem_36->next=((void*)0);
                        __dec_obj11=litem_36->item;
                        litem_36->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_36;
                        self->tail=litem_36;
                    }
                }
                self->len++;
                __result34__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result34__;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct sType* __result35__;
void* right_value38;
struct sType* result_37;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value41;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional58;
void* right_value42;
struct tuple1$1sTypeph* __dec_obj14;
_Bool _if_conditional59;
void* right_value43;
char* __dec_obj15;
_Bool _if_conditional60;
void* right_value50;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional64;
void* right_value58;
struct list$1sNodeph* __dec_obj23;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value59;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional79;
void* right_value66;
struct list$1charph* __dec_obj28;
_Bool _if_conditional83;
void* right_value67;
struct tuple1$1sTypeph* __dec_obj29;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value68;
struct sNode* __dec_obj30;
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
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value69;
struct sNode* __dec_obj31;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value70;
char* __dec_obj32;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value71;
char* __dec_obj33;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
                if(_if_conditional52=self==(void*)0,                _if_conditional52) {
                    __result35__ = __result_obj__ = (void*)0;
                    return __result35__;
                }
                result_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value38=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value38;
                __freed_obj__ = 0;
                if(_if_conditional53=self!=((void*)0),                _if_conditional53) {
                    result_37->mClass=self->mClass;
                }
                if(_if_conditional54=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional54) {
                    __dec_obj13=result_37->mNoSolvedGenericsType;
                    result_37->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value41=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = 0;
                }
                if(_if_conditional58=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional58) {
                    __dec_obj14=result_37->mOriginalLoadVarType;
                    result_37->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    if(__dec_obj14) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = 0;
                }
                if(_if_conditional59=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional59) {
                    __dec_obj15=result_37->mGenericsName;
                    result_37->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mGenericsName))));
                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value43;
                    __freed_obj__ = 0;
                }
                if(_if_conditional60=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional60) {
                    __dec_obj19=result_37->mGenericsTypes;
                    result_37->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value50;
                    __freed_obj__ = 0;
                }
                if(_if_conditional64=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional64) {
                    __dec_obj23=result_37->mArrayNum;
                    result_37->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value58=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj23) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value58;
                    __freed_obj__ = 0;
                }
                if(_if_conditional77=self!=((void*)0),                _if_conditional77) {
                    result_37->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional78=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional78) {
                    __dec_obj24=result_37->mParamTypes;
                    result_37->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj24) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                }
                if(_if_conditional79=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional79) {
                    __dec_obj28=result_37->mParamNames;
                    result_37->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value66=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj28) { come_call_finalizer(list$1charph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                }
                if(_if_conditional83=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional83) {
                    __dec_obj29=result_37->mResultType;
                    result_37->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj29) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value67;
                    __freed_obj__ = 0;
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_37->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional85=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional85) {
                    __dec_obj30=result_37->mAlignas;
                    result_37->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=sNode_clone(self->mAlignas))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value68;
                    __freed_obj__ = 0;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_37->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_37->mShort=self->mShort;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_37->mLong=self->mLong;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_37->mLongLong=self->mLongLong;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_37->mConstant=self->mConstant;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_37->mRegister=self->mRegister;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_37->mVolatile=self->mVolatile;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_37->mStatic=self->mStatic;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_37->mExtern=self->mExtern;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_37->mRestrict=self->mRestrict;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_37->mImmutable=self->mImmutable;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_37->mHeap=self->mHeap;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_37->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_37->mDelegate=self->mDelegate;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_37->mShare=self->mShare;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_37->mClone=self->mClone;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_37->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_37->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_37->mRefference=self->mRefference;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_37->mException=self->mException;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_37->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_37->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    result_37->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional109=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional109) {
                    __dec_obj31=result_37->mSizeNum;
                    result_37->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNode_clone(self->mSizeNum))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                }
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    result_37->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    result_37->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional112=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional112) {
                    __dec_obj32=result_37->mOriginalTypeName;
                    result_37->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value70=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    result_37->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    result_37->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    result_37->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_37->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_37->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_37->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    result_37->mInline=self->mInline;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    result_37->mNullValue=self->mNullValue;
                }
                if(_if_conditional121=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional121) {
                    __dec_obj33=result_37->mAsmName;
                    result_37->mAsmName=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(self->mAsmName))));
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value71;
                    __freed_obj__ = 0;
                }
                __result50__ = __result_obj__ = result_37;
                if(result_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result50__;
                if(result_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
struct tuple1$1sTypeph* __result36__;
void* right_value39;
struct tuple1$1sTypeph* result_38;
_Bool _if_conditional57;
void* right_value40;
struct sType* __dec_obj12;
struct tuple1$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value40, 0, sizeof(void*));
                        if(_if_conditional55=self==(void*)0,                        _if_conditional55) {
                            __result36__ = __result_obj__ = (void*)0;
                            return __result36__;
                        }
                        result_38=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value39;
                        __freed_obj__ = 0;
                        if(_if_conditional57=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional57) {
                            __dec_obj12=result_38->v1;
                            result_38->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=sType_clone(self->v1))));
                            if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value40;
                            __freed_obj__ = 0;
                        }
                        __result37__ = __result_obj__ = result_38;
                        if(result_38 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result37__;
                        if(result_38 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional56=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional56) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
struct list$1sTypeph* __result38__;
void* right_value44;
void* right_value45;
struct list$1sTypeph* result_39;
struct list_item$1sTypeph* it_40;
_Bool _while_condtional19;
void* right_value49;
struct list$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct list$1sTypeph*));
memset(&it_40, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value49, 0, sizeof(void*));
                        if(_if_conditional61=self==((void*)0),                        _if_conditional61) {
                            __result38__ = __result_obj__ = ((void*)0);
                            return __result38__;
                        }
                        result_39=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value45=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value44;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value45;
                        __freed_obj__ = 0;
                        it_40=self->head;
                        while(_while_condtional19=it_40!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_39,(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=sType_clone(it_40->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value49;
                            __freed_obj__ = 0;
                            it_40=it_40->next;
                        }
                        __result40__ = __result_obj__ = result_39;
                        if(result_39 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result40__;
                        if(result_39 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
void* right_value46;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj16;
_Bool _if_conditional63;
void* right_value47;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj17;
void* right_value48;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj18;
struct list$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional62=self->len==0,                                _if_conditional62) {
                                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value46=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value46;
                                    __freed_obj__ = 0;
                                    litem_41->prev=((void*)0);
                                    litem_41->next=((void*)0);
                                    __dec_obj16=litem_41->item;
                                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_41;
                                    self->head=litem_41;
                                }
                                else {
                                    if(_if_conditional63=self->len==1,                                    _if_conditional63) {
                                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value47=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value47;
                                        __freed_obj__ = 0;
                                        litem_42->prev=self->head;
                                        litem_42->next=((void*)0);
                                        __dec_obj17=litem_42->item;
                                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail=litem_42;
                                        self->head->next=litem_42;
                                    }
                                    else {
                                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value48=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value48;
                                        __freed_obj__ = 0;
                                        litem_43->prev=self->tail;
                                        litem_43->next=((void*)0);
                                        __dec_obj18=litem_43->item;
                                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->tail->next=litem_43;
                                        self->tail=litem_43;
                                    }
                                }
                                self->len++;
                                __result39__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result39__;
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
_Bool _if_conditional65;
struct list$1sNodeph* __result41__;
void* right_value51;
void* right_value52;
struct list$1sNodeph* result_44;
struct list_item$1sNodeph* it_45;
_Bool _while_condtional20;
void* right_value57;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct list$1sNodeph*));
memset(&it_45, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value57, 0, sizeof(void*));
                        if(_if_conditional65=self==((void*)0),                        _if_conditional65) {
                            __result41__ = __result_obj__ = ((void*)0);
                            return __result41__;
                        }
                        result_44=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value52=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value51;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
                        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value52;
                        __freed_obj__ = 0;
                        it_45=self->head;
                        while(_while_condtional20=it_45!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_44,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=sNode_clone(it_45->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value57;
                            __freed_obj__ = 0;
                            it_45=it_45->next;
                        }
                        __result46__ = __result_obj__ = result_44;
                        if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result46__;
                        if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result42__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result42__;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
void* right_value53;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj20;
_Bool _if_conditional67;
void* right_value54;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj21;
void* right_value55;
struct list_item$1sNodeph* litem_48;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional66=self->len==0,                                _if_conditional66) {
                                    litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value53=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value53;
                                    __freed_obj__ = 0;
                                    litem_46->prev=((void*)0);
                                    litem_46->next=((void*)0);
                                    __dec_obj20=litem_46->item;
                                    litem_46->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_46;
                                    self->head=litem_46;
                                }
                                else {
                                    if(_if_conditional67=self->len==1,                                    _if_conditional67) {
                                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value54=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value54;
                                        __freed_obj__ = 0;
                                        litem_47->prev=self->head;
                                        litem_47->next=((void*)0);
                                        __dec_obj21=litem_47->item;
                                        litem_47->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                        self->tail=litem_47;
                                        self->head->next=litem_47;
                                    }
                                    else {
                                        litem_48=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value55=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value55;
                                        __freed_obj__ = 0;
                                        litem_48->prev=self->tail;
                                        litem_48->next=((void*)0);
                                        __dec_obj22=litem_48->item;
                                        litem_48->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                                        self->tail->next=litem_48;
                                        self->tail=litem_48;
                                    }
                                }
                                self->len++;
                                __result43__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                return __result43__;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
struct sNode* __result44__;
void* right_value56;
struct sNode* result_49;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct sNode*));
                                if(_if_conditional68=self==(void*)0,                                _if_conditional68) {
                                    __result44__ = __result_obj__ = (void*)0;
                                    return __result44__;
                                }
                                result_49=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value56;
                                __freed_obj__ = 0;
                                if(_if_conditional69=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional69) {
                                    result_49->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional70=self!=((void*)0),                                _if_conditional70) {
                                    result_49->finalize=self->finalize;
                                }
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    result_49->clone=self->clone;
                                }
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    result_49->compile=self->compile;
                                }
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    result_49->sline=self->sline;
                                }
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    result_49->sname=self->sname;
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_49->terminated=self->terminated;
                                }
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    result_49->kind=self->kind;
                                }
                                __result45__ = __result_obj__ = result_49;
                                if(result_49 && !__freed_obj__) { result_49 = come_decrement_ref_count(result_49, ((struct sNode*)result_49)->finalize, ((struct sNode*)result_49)->_protocol_obj, 0, 1, 0); } 
                                return __result45__;
                                if(result_49 && !__freed_obj__) { result_49 = come_decrement_ref_count(result_49, ((struct sNode*)result_49)->finalize, ((struct sNode*)result_49)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional80;
struct list$1charph* __result47__;
void* right_value60;
void* right_value61;
struct list$1charph* result_50;
struct list_item$1charph* it_51;
_Bool _while_condtional21;
void* right_value65;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_50, 0, sizeof(struct list$1charph*));
memset(&it_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value65, 0, sizeof(void*));
                        if(_if_conditional80=self==((void*)0),                        _if_conditional80) {
                            __result47__ = __result_obj__ = ((void*)0);
                            return __result47__;
                        }
                        result_50=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value60=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value60;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value61;
                        __freed_obj__ = 0;
                        it_51=self->head;
                        while(_while_condtional21=it_51!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_50,(char*)come_increment_ref_count(((char*)(right_value65=string_clone(it_51->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value65;
                            __freed_obj__ = 0;
                            it_51=it_51->next;
                        }
                        __result49__ = __result_obj__ = result_50;
                        if(result_50 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_50, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result49__;
                        if(result_50 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_50, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
void* right_value62;
struct list_item$1charph* litem_52;
char* __dec_obj25;
_Bool _if_conditional82;
void* right_value63;
struct list_item$1charph* litem_53;
char* __dec_obj26;
void* right_value64;
struct list_item$1charph* litem_54;
char* __dec_obj27;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional81=self->len==0,                                _if_conditional81) {
                                    litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value62=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value62;
                                    __freed_obj__ = 0;
                                    litem_52->prev=((void*)0);
                                    litem_52->next=((void*)0);
                                    __dec_obj25=litem_52->item;
                                    litem_52->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_52;
                                    self->head=litem_52;
                                }
                                else {
                                    if(_if_conditional82=self->len==1,                                    _if_conditional82) {
                                        litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value63;
                                        __freed_obj__ = 0;
                                        litem_53->prev=self->head;
                                        litem_53->next=((void*)0);
                                        __dec_obj26=litem_53->item;
                                        litem_53->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                        self->tail=litem_53;
                                        self->head->next=litem_53;
                                    }
                                    else {
                                        litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value64;
                                        __freed_obj__ = 0;
                                        litem_54->prev=self->tail;
                                        litem_54->next=((void*)0);
                                        __dec_obj27=litem_54->item;
                                        litem_54->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                        self->tail->next=litem_54;
                                        self->tail=litem_54;
                                    }
                                }
                                self->len++;
                                __result48__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                return __result48__;
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
_Bool _if_conditional122;
void* right_value73;
struct list_item$1charph* litem_55;
char* __dec_obj34;
_Bool _if_conditional123;
void* right_value74;
struct list_item$1charph* litem_56;
char* __dec_obj35;
void* right_value75;
struct list_item$1charph* litem_57;
char* __dec_obj36;
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value74, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
memset(&right_value75, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional122=self->len==0,                _if_conditional122) {
                    litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value73=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73;
                    __freed_obj__ = 0;
                    litem_55->prev=((void*)0);
                    litem_55->next=((void*)0);
                    __dec_obj34=litem_55->item;
                    litem_55->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_55;
                    self->head=litem_55;
                }
                else {
                    if(_if_conditional123=self->len==1,                    _if_conditional123) {
                        litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value74;
                        __freed_obj__ = 0;
                        litem_56->prev=self->head;
                        litem_56->next=((void*)0);
                        __dec_obj35=litem_56->item;
                        litem_56->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_56;
                        self->head->next=litem_56;
                    }
                    else {
                        litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value75;
                        __freed_obj__ = 0;
                        litem_57->prev=self->tail;
                        litem_57->next=((void*)0);
                        __dec_obj36=litem_57->item;
                        litem_57->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_57;
                        self->tail=litem_57;
                    }
                }
                self->len++;
                __result51__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result51__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct list$1sTypeph* __dec_obj37;
void* right_value88;
struct list$1charph* __dec_obj38;
void* right_value89;
struct list$1charph* __dec_obj39;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
        __dec_obj37=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_clone(v1))));
        if(__dec_obj37) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = 0;
        __dec_obj38=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=list$1charph_clone(v2))));
        if(__dec_obj38) { come_call_finalizer(list$1charph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value88;
        __freed_obj__ = 0;
        __dec_obj39=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_clone(v3))));
        if(__dec_obj39) { come_call_finalizer(list$1charph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value89;
        __freed_obj__ = 0;
        self->v4=v4;
        __result56__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result56__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
struct list$1sTypeph* __result52__;
void* right_value81;
void* right_value82;
struct list$1sTypeph* result_63;
struct list_item$1sTypeph* it_64;
_Bool _while_condtional22;
void* right_value83;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct list$1sTypeph*));
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value83, 0, sizeof(void*));
            if(_if_conditional128=self==((void*)0),            _if_conditional128) {
                __result52__ = __result_obj__ = ((void*)0);
                return __result52__;
            }
            result_63=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value81;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value82;
            __freed_obj__ = 0;
            it_64=self->head;
            while(_while_condtional22=it_64!=((void*)0),            _while_condtional22) {
                list$1sTypeph_add(result_63,(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(it_64->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value83;
                __freed_obj__ = 0;
                it_64=it_64->next;
            }
            __result53__ = __result_obj__ = result_63;
            if(result_63 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result53__;
            if(result_63 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
struct list$1charph* __result54__;
void* right_value85;
void* right_value86;
struct list$1charph* result_65;
struct list_item$1charph* it_66;
_Bool _while_condtional23;
void* right_value87;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct list$1charph*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
memset(&right_value87, 0, sizeof(void*));
            if(_if_conditional129=self==((void*)0),            _if_conditional129) {
                __result54__ = __result_obj__ = ((void*)0);
                return __result54__;
            }
            result_65=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value85;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value86;
            __freed_obj__ = 0;
            it_66=self->head;
            while(_while_condtional23=it_66!=((void*)0),            _while_condtional23) {
                list$1charph_add(result_65,(char*)come_increment_ref_count(((char*)(right_value87=string_clone(it_66->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                it_66=it_66->next;
            }
            __result55__ = __result_obj__ = result_65;
            if(result_65 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_65, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result55__;
            if(result_65 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional130=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional130) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional131=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional131) {
                if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional132=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional132) {
                if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __dec_obj40;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj40=self->v1;
        self->v1=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(v1);
        if(__dec_obj40) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        self->v2=v2;
        __result57__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result57__;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional133=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional133) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional134=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional134) {
                if(self->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional135=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional135) {
                if(self->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional136=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional136) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
struct sType* right_type2_67;
struct sType* left_no_solved_generics_type_68;
struct sType* right_no_solved_generics_type_69;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
int i_70;
_Bool _for_condtionalA2;
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
_Bool _if_conditional153;
void* right_value94;
void* right_value95;
struct buffer* buf2_74;
void* right_value96;
void* right_value97;
void* right_value98;
void* right_value99;
void* right_value100;
char* __dec_obj41;
void* right_value101;
struct sType* __dec_obj42;
void* right_value102;
struct sType* __dec_obj43;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value103;
char* method_name_75;
_Bool _if_conditional166;
struct sType* obj_type_79;
_Bool _if_conditional167;
struct sType* obj_type2_80;
void* right_value105;
void* right_value106;
char* __dec_obj44;
void* right_value107;
void* right_value108;
struct buffer* buf2_81;
void* right_value109;
void* right_value110;
struct sType* type_82;
void* right_value111;
void* right_value112;
char* __dec_obj45;
void* right_value113;
struct sType* __dec_obj46;
void* right_value114;
struct sType* __dec_obj47;
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
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&right_type2_67, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_68, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_69, 0, sizeof(struct sType*));
memset(&i_70, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&buf2_74, 0, sizeof(struct buffer*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&method_name_75, 0, sizeof(char*));
memset(&obj_type_79, 0, sizeof(struct sType*));
memset(&obj_type2_80, 0, sizeof(struct sType*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&buf2_81, 0, sizeof(struct buffer*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&type_82, 0, sizeof(struct sType*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    right_type2_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    left_no_solved_generics_type_68=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_69=right_type2_67->mNoSolvedGenericsType->v1;
    if(_if_conditional137=left_no_solved_generics_type_68&&right_no_solved_generics_type_69,    _if_conditional137) {
        if(_if_conditional138=list$1sTypeph_length(left_no_solved_generics_type_68->mGenericsTypes)>0,        _if_conditional138) {
            if(_if_conditional139=list$1sTypeph_length(left_no_solved_generics_type_68->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_69->mGenericsTypes),            _if_conditional139) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_68->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_69->mGenericsTypes));
                exit(2);
            }
            for(
            i_70=0 ,            0;            _for_condtionalA2=            i_70<list$1sTypeph_length(left_no_solved_generics_type_68->mGenericsTypes) ,            _for_condtionalA2;            i_70++ ,            0            ){
                check_assign_type(msg,list$1sTypephp_operator_load_element(left_no_solved_generics_type_68->mGenericsTypes,i_70),list$1sTypephp_operator_load_element(right_no_solved_generics_type_69->mGenericsTypes,i_70),come_value,(_Bool)1,info);
            }
            check_assign_type(msg,left_no_solved_generics_type_68,right_no_solved_generics_type_69,come_value,(_Bool)0,info);
        }
    }
    else {
        if(_if_conditional142=check_no_pointer,        _if_conditional142) {
            if(_if_conditional143=left_type->mPointerNum>0,            _if_conditional143) {
                if(_if_conditional144=right_type2_67->mPointerNum>0,                _if_conditional144) {
                    if(_if_conditional145=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_67->mClass->mName,"void"),                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_67->mClass->mName,"va_list"),                        _if_conditional146) {
                        }
                        else {
                            if(_if_conditional147=string_operator_not_equals(left_type->mClass->mName,right_type2_67->mClass->mName),                            _if_conditional147) {
                                err_msg(info,"type error1");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                    exit(2);
                }
            }
            else {
                if(_if_conditional148=left_type->mPointerNum==0&&right_type2_67->mPointerNum>0,                _if_conditional148) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                    exit(2);
                }
                else {
                    if(_if_conditional149=string_operator_not_equals(left_type->mClass->mName,right_type2_67->mClass->mName),                    _if_conditional149) {
                        err_msg(info,"type error4");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                        exit(2);
                    }
                }
            }
        }
        else {
            if(_if_conditional150=!left_type->mNullValue&&right_type2_67->mNullValue,            _if_conditional150) {
                if(_if_conditional151=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_67->mClass->mName,"__builtin_va_list"),                _if_conditional151) {
                }
                else {
                    if(_if_conditional152=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_67->mClass->mName,"va_list"),                    _if_conditional152) {
                    }
                    else {
                        if(_if_conditional153=string_operator_equals(right_type2_67->mClass->mName,"void")&&right_type2_67->mPointerNum==0,                        _if_conditional153) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_74=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value94;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value95;
                            __freed_obj__ = 0;
                            buffer_append_str(buf2_74,((char*)(right_value99=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value96=string_to_string(come_value->c_value))),((char*)(right_value97=string_to_string(info->sname))),((char*)(right_value98=int_to_string(info->sline)))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value96);
                            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value96;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value97);
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value97;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value98);
                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value98;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[5] = right_value99;
                            __freed_obj__ = 0;
                            __dec_obj41=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value100=buffer_to_string(buf2_74))));
                            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[6] = right_value100;
                            __freed_obj__ = 0;
                            __dec_obj42=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(left_type))));
                            if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value101);
                            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[7] = right_value101;
                            __freed_obj__ = 0;
                            come_value->var=((void*)0);
                            __dec_obj43=right_type2_67;
                            right_type2_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(left_type))));
                            if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value102);
                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[8] = right_value102;
                            __freed_obj__ = 0;
                            if(buf2_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
            }
            else {
                if(_if_conditional154=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                _if_conditional154) {
                    if(_if_conditional155=string_operator_equals(right_type2_67->mClass->mName,"char")&&right_type2_67->mPointerNum==1,                    _if_conditional155) {
                    }
                    else {
                        if(_if_conditional156=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_67->mClass->mName,"__builtin_va_list"),                        _if_conditional156) {
                        }
                        else {
                            if(_if_conditional157=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_67->mClass->mName,"va_list"),                            _if_conditional157) {
                            }
                            else {
                                if(_if_conditional158=string_operator_equals(right_type2_67->mClass->mName,"lambda"),                                _if_conditional158) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(_if_conditional159=string_operator_equals(right_type2_67->mClass->mName,"void")&&right_type2_67->mPointerNum>0,                                    _if_conditional159) {
                                    }
                                    else {
                                        if(_if_conditional160=string_operator_equals(right_type2_67->mClass->mName,"void"),                                        _if_conditional160) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            method_name_75=(char*)come_increment_ref_count(((char*)(right_value103=create_method_name(right_type2_67,(_Bool)0,"to_string",info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value103;
                                            __freed_obj__ = 0;
                                            if(_if_conditional166=map$2charphsFunph_at(info->funcs,method_name_75,((void*)0))==((void*)0),                                            _if_conditional166) {
                                                obj_type_79=right_type2_67->mNoSolvedGenericsType->v1;
                                                if(_if_conditional167=obj_type_79&&list$1sTypeph_length(obj_type_79->mGenericsTypes)>0,                                                _if_conditional167) {
                                                    obj_type2_80=right_type2_67;
                                                    __dec_obj44=method_name_75;
                                                    method_name_75=(char*)come_increment_ref_count(((char*)(right_value106=make_generics_function(obj_type2_80,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string("to_string")))),info))));
                                                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                                                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value105;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value106);
                                                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value106;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",right_type2_67->mClass->mName);
                                                    exit(1);
                                                }
                                            }
                                            buf2_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434))))))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
                                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value107;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
                                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value108;
                                            __freed_obj__ = 0;
                                            buffer_append_str(buf2_81,method_name_75);
                                            buffer_append_str(buf2_81,"(");
                                            buffer_append_str(buf2_81,come_value->c_value);
                                            buffer_append_str(buf2_81,")");
                                            type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441)))),"char*",(_Bool)0,info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value109);
                                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value109;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value110);
                                            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[4] = right_value110;
                                            __freed_obj__ = 0;
                                            type_82->mHeap=(_Bool)1;
                                            __dec_obj45=come_value->c_value;
                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value112=append_object_to_right_values(((char*)(right_value111=buffer_to_string(buf2_81))),(struct sType*)come_increment_ref_count(type_82),info))));
                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value111);
                                            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[5] = right_value111;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value112);
                                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[6] = right_value112;
                                            __freed_obj__ = 0;
                                            __dec_obj46=come_value->type;
                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(type_82))));
                                            if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value113);
                                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[7] = right_value113;
                                            __freed_obj__ = 0;
                                            come_value->var=((void*)0);
                                            __dec_obj47=right_type2_67;
                                            right_type2_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type_82))));
                                            if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value114);
                                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[8] = right_value114;
                                            __freed_obj__ = 0;
                                            if(method_name_75 && !__freed_obj__) { method_name_75 = come_decrement_ref_count(method_name_75, (void*)0, (void*)0, 0, 0, 0); }
                                            if(buf2_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional168=left_type->mPointerNum>0,                    _if_conditional168) {
                        if(_if_conditional169=right_type2_67->mPointerNum>0,                        _if_conditional169) {
                            if(_if_conditional170=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_67->mClass->mName,"void"),                            _if_conditional170) {
                            }
                            else {
                                if(_if_conditional171=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_67->mClass->mName,"va_list"),                                _if_conditional171) {
                                }
                                else {
                                    if(_if_conditional172=string_operator_not_equals(left_type->mClass->mName,right_type2_67->mClass->mName),                                    _if_conditional172) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional173=left_type->mPointerNum!=right_type2_67->mPointerNum,                                        _if_conditional173) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                                        }
                                        else {
                                            if(_if_conditional174=list$1sNodeph_length(right_type2_67->mArrayNum)>0,                                            _if_conditional174) {
                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum,list$1sNodeph_length(right_type2_67->mArrayNum));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional175=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_67->mClass->mName,"void"),                            _if_conditional175) {
                            }
                            else {
                                if(_if_conditional176=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_67->mClass->mName,"va_list"),                                _if_conditional176) {
                                }
                                else {
                                    if(_if_conditional177=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_67->mClass->mName,"__builtin_va_list"),                                    _if_conditional177) {
                                    }
                                    else {
                                        if(_if_conditional178=!(string_operator_equals(right_type2_67->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_67->mPointerNum==0,                                        _if_conditional178) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_67->mClass->mName,right_type2_67->mPointerNum);
                                            exit(2);
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
    if(right_type2_67 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result59__ = self->len;
            return __result59__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
struct list_item$1sTypeph* it_71;
int i_72;
_Bool _while_condtional24;
_Bool _if_conditional141;
struct sType* __result60__;
struct sType* default_value_73;
struct sType* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_71, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_72, 0, sizeof(int));
memset(&default_value_73, 0, sizeof(struct sType*));
                    if(_if_conditional140=position<0,                    _if_conditional140) {
                        position+=self->len;
                    }
                    it_71=self->head;
                    i_72=0;
                    while(_while_condtional24=it_71!=((void*)0),                    _while_condtional24) {
                        if(_if_conditional141=position==i_72,                        _if_conditional141) {
                            __result60__ = __result_obj__ = it_71->item;
                            return __result60__;
                        }
                        it_71=it_71->next;
                        i_72++;
                    }
                    memset(&default_value_73,0,sizeof(struct sType*));
                    __result61__ = __result_obj__ = default_value_73;
                    if(default_value_73 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result61__;
                    if(default_value_73 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_76;
unsigned int it_77;
_Bool _while_condtional25;
_Bool _if_conditional161;
void* right_value104;
_Bool _if_conditional163;
struct sFun* __result64__;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sFun* __result65__;
struct sFun* __result66__;
struct sFun* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_76, 0, sizeof(unsigned int));
memset(&it_77, 0, sizeof(unsigned int));
memset(&right_value104, 0, sizeof(void*));
                                                hash_76=string_get_hash_key(((char*)key))%self->size;
                                                it_77=hash_76;
                                                while(_while_condtional25=(_Bool)1,                                                _while_condtional25) {
                                                    if(_if_conditional161=self->item_existance[it_77],                                                    _if_conditional161) {
                                                        if(_if_conditional163=optional$2boolbool_value(((struct optional$2boolbool*)(right_value104=string_equals(self->keys[it_77],key)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104),
                                                        (right_value104 && right_value104 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value104, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional163) {
                                                            __result64__ = __result_obj__ = self->items[it_77];
                                                            return __result64__;
                                                        }
                                                        it_77++;
                                                        if(_if_conditional164=it_77>=self->size,                                                        _if_conditional164) {
                                                            it_77=0;
                                                        }
                                                        else {
                                                            if(_if_conditional165=it_77==hash_76,                                                            _if_conditional165) {
                                                                __result65__ = __result_obj__ = default_value;
                                                                return __result65__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        __result66__ = __result_obj__ = default_value;
                                                        return __result66__;
                                                    }
                                                }
                                                __result67__ = __result_obj__ = default_value;
                                                return __result67__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
_Bool default_value_78;
_Bool __result62__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_78, 0, sizeof(_Bool));
                                                            if(_if_conditional162=self==((void*)0),                                                            _if_conditional162) {
                                                                memset(&default_value_78,0,sizeof(_Bool));
                                                                __result62__ = default_value_78;
                                                                return __result62__;
                                                            }
                                                            else {
                                                                __result63__ = self->v1;
                                                                return __result63__;
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
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result68__ = self->len;
                                                return __result68__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
struct sType* result_type_83;
_Bool _if_conditional179;
char* var_name_84;
char* p_85;
int sline_86;
_Bool _if_conditional180;
void* right_value116;
char* word_88;
_Bool _if_conditional182;
_Bool between_brace_89;
char* p_90;
int sline_91;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value117;
char* word_92;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _while_condtional26;
char* p_93;
int sline_94;
_Bool _if_conditional188;
void* right_value118;
char* word_95;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value119;
char* __dec_obj48;
static int num_anonymous_var_name_96=0;
void* right_value120;
char* __dec_obj49;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool no_comma_97;
void* right_value121;
struct sNode* node_98;
struct sNode* __dec_obj50;
_Bool _while_condtional27;
char* p_99;
int sline_100;
_Bool _if_conditional194;
void* right_value122;
char* word_101;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value123;
struct sNode* node_102;
void* right_value127;
void* right_value128;
void* right_value131;
struct tuple2$2sTypephcharph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&result_type_83, 0, sizeof(struct sType*));
memset(&var_name_84, 0, sizeof(char*));
memset(&p_85, 0, sizeof(char*));
memset(&sline_86, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&word_88, 0, sizeof(char*));
memset(&between_brace_89, 0, sizeof(_Bool));
memset(&p_90, 0, sizeof(char*));
memset(&sline_91, 0, sizeof(int));
memset(&right_value117, 0, sizeof(void*));
memset(&word_92, 0, sizeof(char*));
memset(&p_93, 0, sizeof(char*));
memset(&sline_94, 0, sizeof(int));
memset(&right_value118, 0, sizeof(void*));
memset(&word_95, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&no_comma_97, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&node_98, 0, sizeof(struct sNode*));
memset(&p_99, 0, sizeof(char*));
memset(&sline_100, 0, sizeof(int));
memset(&right_value122, 0, sizeof(void*));
memset(&word_101, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&node_102, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    result_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    if(_if_conditional179=!first,    _if_conditional179) {
        result_type_83->mPointerNum=0;
    }
    var_name_84=((void*)0);
    {
        p_85=info->p;
        sline_86=info->sline;
        if(_if_conditional180=xisalpha(*info->p)||*info->p==95,        _if_conditional180) {
            word_88=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value116=parse_word(info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value116;
            __freed_obj__ = 0;
            if(_if_conditional182=string_operator_equals(word_88,"const")||string_operator_equals(word_88,"__restrict")||string_operator_equals(word_88,"restrict")||string_operator_equals(word_88,"__user")||string_operator_equals(word_88,"volatile")||string_operator_equals(word_88,"_Nonnull")||string_operator_equals(word_88,"_Nullable")||string_operator_equals(word_88,"_Null_unspecified")||string_operator_equals(word_88,"__user"),            _if_conditional182) {
            }
            else {
                info->p=p_85;
                info->sline=sline_86;
            }
            if(word_88 && !__freed_obj__) { word_88 = come_decrement_ref_count(word_88, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_85;
            info->sline=sline_86;
        }
    }
    between_brace_89=(_Bool)0;
    {
        p_90=info->p;
        sline_91=info->sline;
        if(_if_conditional183=*info->p==40,        _if_conditional183) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional184=xisalpha(*info->p)||*info->p==95,            _if_conditional184) {
                word_92=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value117=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value117;
                __freed_obj__ = 0;
                if(_if_conditional185=is_type_name(word_92,info),                _if_conditional185) {
                }
                else {
                    if(_if_conditional186=*info->p==41,                    _if_conditional186) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional187=*info->p!=40,                        _if_conditional187) {
                            between_brace_89=(_Bool)1;
                        }
                    }
                }
                if(word_92 && !__freed_obj__) { word_92 = come_decrement_ref_count(word_92, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_90;
        info->sline=sline_91;
    }
    parse_sharp_v5(info);
    while(_while_condtional26=*info->p==42,    _while_condtional26) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_93=info->p;
            sline_94=info->sline;
            if(_if_conditional188=xisalpha(*info->p)||*info->p==95,            _if_conditional188) {
                word_95=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value118=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value118;
                __freed_obj__ = 0;
                if(_if_conditional189=string_operator_equals(word_95,"const")||string_operator_equals(word_95,"__restrict")||string_operator_equals(word_95,"restrict")||string_operator_equals(word_95,"__user")||string_operator_equals(word_95,"volatile")||string_operator_equals(word_95,"_Nonnull")||string_operator_equals(word_95,"_Nullable")||string_operator_equals(word_95,"_Null_unspecified")||string_operator_equals(word_95,"__user"),                _if_conditional189) {
                }
                else {
                    info->p=p_93;
                    info->sline=sline_94;
                }
                if(word_95 && !__freed_obj__) { word_95 = come_decrement_ref_count(word_95, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_93;
                info->sline=sline_94;
            }
        }
        result_type_83->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional190=between_brace_89&&*info->p==40,    _if_conditional190) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional191=xisalnum(*info->p)||*info->p==95,    _if_conditional191) {
        __dec_obj48=var_name_84;
        var_name_84=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value119=parse_word(info)))));
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value119;
        __freed_obj__ = 0;
    }
    else {
        num_anonymous_var_name_96++;
        __dec_obj49=var_name_84;
        var_name_84=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_96))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
    }
    if(_if_conditional192=between_brace_89&&*info->p==41,    _if_conditional192) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional193=*info->p==58,    _if_conditional193) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_97=info->no_comma;
        info->no_comma=(_Bool)1;
        node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value121;
        __freed_obj__ = 0;
        info->no_comma=no_comma_97;
        __dec_obj50=result_type_83->mSizeNum;
        result_type_83->mSizeNum=(struct sNode*)come_increment_ref_count(node_98);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
        if(node_98 && !__freed_obj__) { node_98 = come_decrement_ref_count(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0, 0); } 
    }
    while(_while_condtional27=*info->p==91,    _while_condtional27) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_99=info->p;
            sline_100=info->sline;
            if(_if_conditional194=xisalpha(*info->p)||*info->p==95,            _if_conditional194) {
                word_101=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value122=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value122;
                __freed_obj__ = 0;
                if(_if_conditional195=string_operator_equals(word_101,"const")||string_operator_equals(word_101,"__restrict")||string_operator_equals(word_101,"restrict")||string_operator_equals(word_101,"__user")||string_operator_equals(word_101,"volatile")||string_operator_equals(word_101,"_Nonnull")||string_operator_equals(word_101,"_Nullable")||string_operator_equals(word_101,"_Null_unspecified")||string_operator_equals(word_101,"__user"),                _if_conditional195) {
                }
                else {
                    info->p=p_99;
                    info->sline=sline_100;
                }
                if(word_101 && !__freed_obj__) { word_101 = come_decrement_ref_count(word_101, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                info->p=p_99;
                info->sline=sline_100;
            }
        }
        if(_if_conditional196=*info->p==93,        _if_conditional196) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_83->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_102=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value123=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value123;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(result_type_83->mArrayNum,(struct sNode*)come_increment_ref_count(node_102));
        parse_sharp_v5(info);
        optional$2intbool_value(((struct optional$2intbool*)(right_value127=expected_next_character(93,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value127;
        __freed_obj__ = 0;
        if(node_102 && !__freed_obj__) { node_102 = come_decrement_ref_count(node_102, ((struct sNode*)node_102)->finalize, ((struct sNode*)node_102)->_protocol_obj, 0, 0, 0); } 
    }
    __result73__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value131=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value128=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647)))),(struct sType*)come_increment_ref_count(result_type_83),(char*)come_increment_ref_count(var_name_84))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_84 && !__freed_obj__) { var_name_84 = come_decrement_ref_count(var_name_84, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value131;
    __freed_obj__ = 0;
    return __result73__;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_84 && !__freed_obj__) { var_name_84 = come_decrement_ref_count(var_name_84, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
char* default_value_87;
char* __result69__;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_87, 0, sizeof(char*));
                if(_if_conditional181=self==((void*)0),                _if_conditional181) {
                    memset(&default_value_87,0,sizeof(char*));
                    __result69__ = __result_obj__ = default_value_87;
                    return __result69__;
                }
                else {
                    __result70__ = __result_obj__ = self->v1;
                    return __result70__;
                }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
void* right_value124;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj51;
_Bool _if_conditional198;
void* right_value125;
struct list_item$1sNodeph* litem_104;
struct sNode* __dec_obj52;
void* right_value126;
struct list_item$1sNodeph* litem_105;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_104, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional197=self->len==0,            _if_conditional197) {
                litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 279))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                litem_103->prev=((void*)0);
                litem_103->next=((void*)0);
                __dec_obj51=litem_103->item;
                litem_103->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
                self->tail=litem_103;
                self->head=litem_103;
            }
            else {
                if(_if_conditional198=self->len==1,                _if_conditional198) {
                    litem_104=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 289))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = 0;
                    litem_104->prev=self->head;
                    litem_104->next=((void*)0);
                    __dec_obj52=litem_104->item;
                    litem_104->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0); }
                    self->tail=litem_104;
                    self->head->next=litem_104;
                }
                else {
                    litem_105=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value126=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 299))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    litem_105->prev=self->tail;
                    litem_105->next=((void*)0);
                    __dec_obj53=litem_105->item;
                    litem_105->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
                    self->tail->next=litem_105;
                    self->tail=litem_105;
                }
            }
            self->len++;
            __result71__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            return __result71__;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value129;
struct sType* __dec_obj54;
void* right_value130;
char* __dec_obj55;
struct tuple2$2sTypephcharph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
        __dec_obj54=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(v1))));
        if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value129;
        __freed_obj__ = 0;
        __dec_obj55=self->v2;
        self->v2=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(v2))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value130;
        __freed_obj__ = 0;
        __result72__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        return __result72__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
_Bool _if_conditional200;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional199=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional199) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional200=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional200) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_106;
int sline_107;
_Bool _if_conditional201;
void* right_value132;
char* word_108;
_Bool _if_conditional202;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_106, 0, sizeof(char*));
memset(&sline_107, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&word_108, 0, sizeof(char*));
    p_106=info->p;
    sline_107=info->sline;
    if(_if_conditional201=xisalpha(*info->p)||*info->p==95,    _if_conditional201) {
        word_108=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value132=parse_word(info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132;
        __freed_obj__ = 0;
        if(_if_conditional202=string_operator_equals(word_108,"const")||string_operator_equals(word_108,"__restrict")||string_operator_equals(word_108,"restrict")||string_operator_equals(word_108,"__user")||string_operator_equals(word_108,"volatile")||string_operator_equals(word_108,"_Nonnull")||string_operator_equals(word_108,"_Nullable")||string_operator_equals(word_108,"_Null_unspecified")||string_operator_equals(word_108,"__user"),        _if_conditional202) {
        }
        else {
            info->p=p_106;
            info->sline=sline_107;
        }
        if(word_108 && !__freed_obj__) { word_108 = come_decrement_ref_count(word_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        info->p=p_106;
        info->sline=sline_107;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_109;
int head_sline_110;
void* right_value133;
char* type_name_111;
_Bool _while_condtional28;
void* right_value134;
char* __dec_obj56;
_Bool constant_112;
_Bool static__113;
_Bool exception__114;
_Bool volatile__115;
_Bool register__116;
_Bool unsigned__117;
_Bool long__118;
_Bool long_long_119;
_Bool short__120;
_Bool restrict__121;
_Bool struct__122;
_Bool union__123;
_Bool enum__124;
_Bool no_heap_125;
_Bool extern__126;
_Bool inline__127;
_Bool come_mem_core__128;
struct sNode* alignas__129;
_Bool anonymous_type_130;
_Bool anonymous_name_131;
_Bool _while_condtional29;
_Bool _if_conditional203;
_Bool _if_conditional204;
char* p_132;
int sline_133;
void* right_value135;
_Bool _if_conditional205;
void* right_value136;
char* __dec_obj57;
void* right_value137;
char* __dec_obj58;
void* right_value138;
char* __dec_obj59;
_Bool _if_conditional206;
char* p_134;
int sline_135;
_Bool _while_condtional30;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value139;
void* right_value142;
struct tuple3$3sTypephcharphbool* __result75__;
_Bool _if_conditional210;
char* p_136;
int sline_137;
void* right_value143;
_Bool _if_conditional211;
void* right_value144;
void* right_value145;
struct tuple3$3sTypephcharphbool* __result76__;
_Bool _if_conditional212;
_Bool _if_conditional213;
char* p_138;
int sline_139;
void* right_value146;
_Bool _if_conditional214;
void* right_value147;
char* __dec_obj62;
void* right_value148;
char* __dec_obj63;
void* right_value149;
char* __dec_obj64;
_Bool _if_conditional215;
char* p_140;
int sline_141;
void* right_value150;
_Bool _if_conditional216;
void* right_value151;
void* right_value152;
struct tuple3$3sTypephcharphbool* __result77__;
_Bool _if_conditional217;
_Bool _if_conditional218;
char* p_142;
int sline_143;
void* right_value153;
_Bool _if_conditional219;
void* right_value154;
void* right_value155;
struct tuple3$3sTypephcharphbool* __result78__;
void* right_value156;
char* __dec_obj65;
void* right_value157;
char* __dec_obj66;
_Bool _if_conditional220;
char* p_144;
int sline_145;
void* right_value158;
_Bool _if_conditional221;
void* right_value159;
void* right_value160;
struct tuple3$3sTypephcharphbool* __result79__;
_Bool _if_conditional222;
void* right_value161;
void* right_value162;
struct sNode* exp_146;
struct sNode* __dec_obj67;
void* right_value163;
void* right_value164;
char* __dec_obj68;
_Bool _if_conditional223;
void* right_value165;
char* __dec_obj69;
_Bool _if_conditional224;
void* right_value166;
char* __dec_obj70;
_Bool _if_conditional225;
void* right_value167;
char* __dec_obj71;
_Bool _if_conditional226;
void* right_value168;
char* __dec_obj72;
_Bool _if_conditional227;
void* right_value169;
char* __dec_obj73;
_Bool _if_conditional228;
void* right_value170;
char* __dec_obj74;
_Bool _if_conditional229;
void* right_value171;
char* __dec_obj75;
_Bool _if_conditional230;
void* right_value172;
char* __dec_obj76;
_Bool _if_conditional231;
char* p_147;
int sline_148;
_Bool _if_conditional232;
void* right_value173;
char* __dec_obj77;
void* right_value174;
char* __dec_obj78;
_Bool _if_conditional233;
void* right_value175;
char* __dec_obj79;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value176;
char* __dec_obj80;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value177;
char* __dec_obj81;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value178;
char* __dec_obj82;
_Bool _if_conditional241;
_Bool _if_conditional242;
char* p_149;
int sline_150;
void* right_value179;
char* __dec_obj83;
_Bool _if_conditional243;
_Bool _if_conditional244;
char* p_151;
int sline_152;
void* right_value180;
char* __dec_obj84;
_Bool _if_conditional245;
void* right_value181;
char* __dec_obj85;
void* right_value182;
char* __dec_obj86;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* p_153;
int sline_154;
void* right_value183;
char* __dec_obj87;
_Bool _if_conditional248;
void* right_value184;
char* __dec_obj88;
void* right_value185;
char* __dec_obj89;
_Bool _if_conditional249;
void* right_value186;
char* __dec_obj90;
void* right_value187;
char* __dec_obj91;
_Bool _if_conditional250;
void* right_value188;
char* __dec_obj92;
_Bool _if_conditional251;
void* right_value189;
char* __dec_obj93;
_Bool _if_conditional252;
void* right_value190;
char* __dec_obj94;
_Bool _if_conditional253;
void* right_value191;
char* __dec_obj95;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
char* p_155;
int sline_156;
void* right_value192;
char* __dec_obj96;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value193;
char* __dec_obj97;
int pointer_num_157;
_Bool _while_condtional31;
_Bool lambda_flag_158;
char* pX_159;
int slineX_160;
_Bool _if_conditional260;
void* right_value194;
_Bool _if_conditional261;
struct sType* type_161;
char* var_name_162;
_Bool function_pointer_flag_163;
char* p_164;
int sline_165;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value195;
char* word_166;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool var_name_between_brace_167;
char* p_168;
int sline_169;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value196;
char* word_170;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
static int anonymous_num_171=0;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value197;
char* __dec_obj98;
void* right_value198;
struct sNode* node_172;
_Bool _if_conditional275;
void* right_value199;
void* right_value200;
struct tuple3$3sTypephcharphbool* __result80__;
int pointer_num_173;
_Bool _while_condtional32;
void* right_value201;
void* right_value202;
struct sType* __dec_obj99;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value203;
char* __dec_obj100;
void* right_value204;
struct sNode* node_174;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value205;
void* right_value206;
struct tuple3$3sTypephcharphbool* __result81__;
void* right_value207;
void* right_value208;
struct sType* __dec_obj101;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value209;
char* __dec_obj102;
void* right_value210;
struct sNode* node_175;
_Bool _if_conditional282;
void* right_value211;
void* right_value212;
struct tuple3$3sTypephcharphbool* __result82__;
int pointer_num_176;
_Bool _while_condtional33;
void* right_value213;
void* right_value214;
struct sType* __dec_obj103;
void* right_value215;
void* right_value216;
struct tuple3$3sTypephcharphbool* __result83__;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value217;
char* __dec_obj104;
_Bool _if_conditional286;
static int num_anonymous_var_name_177=0;
void* right_value218;
char* __dec_obj105;
_Bool _if_conditional287;
void* right_value219;
char* __dec_obj106;
static int num_anonymous_var_name_178=0;
void* right_value220;
char* __dec_obj107;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool no_comma_179;
void* right_value221;
struct sNode* node_180;
struct sNode* __dec_obj108;
_Bool _if_conditional290;
struct sType* result_type_181;
_Bool _if_conditional295;
void* right_value225;
struct sType* __dec_obj109;
_Bool _if_conditional301;
int i_190;
_Bool _for_condtionalA4;
_Bool _if_conditional304;
void* right_value226;
void* right_value227;
void* right_value228;
struct sType* __dec_obj110;
void* right_value229;
void* right_value230;
struct sType* __dec_obj111;
struct sNode* __dec_obj112;
void* right_value231;
char* __dec_obj113;
void* right_value232;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_195;
struct list$1charph* param_names_196;
struct list$1charph* param_default_parametors_197;
_Bool var_args_198;
void* right_value233;
void* right_value234;
struct sType* __dec_obj114;
void* right_value235;
void* right_value237;
struct tuple1$1sTypeph* __dec_obj116;
struct list$1sTypeph* __dec_obj117;
struct list$1charph* __dec_obj118;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct sType* result_type_199;
_Bool _if_conditional308;
void* right_value238;
struct sType* __dec_obj119;
_Bool _if_conditional309;
int i_200;
_Bool _for_condtionalA5;
_Bool _if_conditional310;
void* right_value239;
void* right_value240;
void* right_value241;
struct sType* __dec_obj120;
void* right_value242;
void* right_value243;
struct sType* __dec_obj121;
struct sNode* __dec_obj122;
_Bool _if_conditional311;
void* right_value244;
char* __dec_obj123;
_Bool _if_conditional312;
void* right_value245;
void* right_value246;
struct tuple3$3sTypephcharphbool* __result104__;
static int num_anonymous_var_name_201=0;
void* right_value247;
char* __dec_obj124;
void* right_value248;
void* right_value249;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_202;
struct list$1charph* param_names_203;
struct list$1charph* param_default_parametors_204;
_Bool var_args_205;
void* right_value250;
void* right_value251;
struct sType* __dec_obj125;
void* right_value252;
void* right_value253;
struct tuple1$1sTypeph* __dec_obj126;
struct list$1sTypeph* __dec_obj127;
struct list$1charph* __dec_obj128;
_Bool _if_conditional313;
void* right_value254;
struct sNode* exp_206;
void* right_value255;
_Bool _if_conditional314;
void* right_value256;
void* right_value257;
struct tuple3$3sTypephcharphbool* __result106__;
void* right_value258;
struct CVALUE* come_value_207;
void* right_value259;
struct sType* __dec_obj129;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value260;
char* __dec_obj130;
_Bool _if_conditional320;
static int num_anonymous_var_name_208=0;
void* right_value261;
char* __dec_obj131;
_Bool _if_conditional321;
void* right_value262;
char* __dec_obj132;
static int num_anonymous_var_name_209=0;
void* right_value263;
char* __dec_obj133;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool no_comma_210;
void* right_value264;
struct sNode* node_211;
struct sNode* __dec_obj134;
_Bool _if_conditional324;
void* right_value265;
struct sType* __dec_obj135;
void* right_value266;
char* __dec_obj136;
struct sNode* __dec_obj137;
_Bool _if_conditional325;
int i_212;
_Bool _for_condtionalA6;
_Bool _if_conditional326;
void* right_value267;
void* right_value268;
void* right_value269;
struct sType* __dec_obj138;
struct sNode* __dec_obj139;
_Bool _if_conditional327;
_Bool _if_conditional332;
void* right_value273;
void* right_value274;
struct tuple3$3sTypephcharphbool* __result112__;
void* right_value275;
void* right_value276;
struct sType* __dec_obj140;
_Bool _while_condtional37;
void* right_value277;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_216;
char* var_name_217;
_Bool err_218;
_Bool _if_conditional333;
void* right_value278;
void* right_value279;
struct tuple3$3sTypephcharphbool* __result113__;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value280;
void* right_value281;
struct tuple3$3sTypephcharphbool* __result114__;
_Bool _if_conditional336;
void* right_value282;
struct sType* __dec_obj141;
_Bool _if_conditional337;
void* right_value283;
char* new_name_219;
struct sNode* __dec_obj142;
_Bool _if_conditional338;
struct sClass* klass_220;
_Bool _if_conditional339;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
struct sType* __dec_obj143;
struct sNode* __dec_obj144;
_Bool _while_condtional47;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _while_condtional48;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value298;
void* right_value299;
struct list$1sTypeph* types_267;
void* right_value300;
_Bool _while_condtional49;
void* right_value301;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_268;
char* name_269;
_Bool err_270;
_Bool _if_conditional402;
void* right_value302;
void* right_value303;
struct tuple3$3sTypephcharphbool* __result139__;
void* right_value304;
int num_tuples_271;
void* right_value305;
void* right_value306;
void* right_value307;
struct sType* __dec_obj145;
struct list$1sTypeph* o2_saved_272;
struct sType* it_273;
_Bool _for_condtionalA9;
void* right_value308;
_Bool _if_conditional403;
void* right_value309;
struct sType* __dec_obj146;
_Bool _if_conditional404;
void* right_value310;
char* new_name_274;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value311;
char* __dec_obj147;
_Bool _if_conditional408;
static int num_anonymous_var_name_275=0;
void* right_value312;
char* __dec_obj148;
_Bool _if_conditional409;
void* right_value313;
char* __dec_obj149;
static int num_anonymous_var_name_276=0;
void* right_value314;
char* __dec_obj150;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool no_comma_277;
void* right_value315;
struct sNode* node_278;
struct sNode* __dec_obj151;
_Bool _while_condtional50;
_Bool _if_conditional412;
void* right_value316;
struct sNode* node_279;
void* right_value317;
void* right_value318;
char* asm_name_280;
char* __dec_obj152;
_Bool _if_conditional413;
void* right_value319;
void* right_value320;
struct sType* type2_281;
void* right_value321;
void* right_value322;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value323;
void* right_value324;
struct tuple3$3sTypephcharphbool* __result140__;
void* right_value325;
void* right_value326;
struct tuple3$3sTypephcharphbool* __result141__;
void* right_value327;
void* right_value328;
struct tuple3$3sTypephcharphbool* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_109, 0, sizeof(char*));
memset(&head_sline_110, 0, sizeof(int));
memset(&right_value133, 0, sizeof(void*));
memset(&type_name_111, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
memset(&constant_112, 0, sizeof(_Bool));
memset(&static__113, 0, sizeof(_Bool));
memset(&exception__114, 0, sizeof(_Bool));
memset(&volatile__115, 0, sizeof(_Bool));
memset(&register__116, 0, sizeof(_Bool));
memset(&unsigned__117, 0, sizeof(_Bool));
memset(&long__118, 0, sizeof(_Bool));
memset(&long_long_119, 0, sizeof(_Bool));
memset(&short__120, 0, sizeof(_Bool));
memset(&restrict__121, 0, sizeof(_Bool));
memset(&struct__122, 0, sizeof(_Bool));
memset(&union__123, 0, sizeof(_Bool));
memset(&enum__124, 0, sizeof(_Bool));
memset(&no_heap_125, 0, sizeof(_Bool));
memset(&extern__126, 0, sizeof(_Bool));
memset(&inline__127, 0, sizeof(_Bool));
memset(&come_mem_core__128, 0, sizeof(_Bool));
memset(&alignas__129, 0, sizeof(struct sNode*));
memset(&anonymous_type_130, 0, sizeof(_Bool));
memset(&anonymous_name_131, 0, sizeof(_Bool));
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&p_142, 0, sizeof(char*));
memset(&sline_143, 0, sizeof(int));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&p_144, 0, sizeof(char*));
memset(&sline_145, 0, sizeof(int));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&exp_146, 0, sizeof(struct sNode*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&p_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&pointer_num_157, 0, sizeof(int));
memset(&lambda_flag_158, 0, sizeof(_Bool));
memset(&pX_159, 0, sizeof(char*));
memset(&slineX_160, 0, sizeof(int));
memset(&right_value194, 0, sizeof(void*));
memset(&type_161, 0, sizeof(struct sType*));
memset(&var_name_162, 0, sizeof(char*));
memset(&function_pointer_flag_163, 0, sizeof(_Bool));
memset(&p_164, 0, sizeof(char*));
memset(&sline_165, 0, sizeof(int));
memset(&right_value195, 0, sizeof(void*));
memset(&word_166, 0, sizeof(char*));
memset(&var_name_between_brace_167, 0, sizeof(_Bool));
memset(&p_168, 0, sizeof(char*));
memset(&sline_169, 0, sizeof(int));
memset(&right_value196, 0, sizeof(void*));
memset(&word_170, 0, sizeof(char*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&pointer_num_173, 0, sizeof(int));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&node_174, 0, sizeof(struct sNode*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&node_175, 0, sizeof(struct sNode*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&pointer_num_176, 0, sizeof(int));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&no_comma_179, 0, sizeof(_Bool));
memset(&right_value221, 0, sizeof(void*));
memset(&node_180, 0, sizeof(struct sNode*));
memset(&result_type_181, 0, sizeof(struct sType*));
memset(&right_value225, 0, sizeof(void*));
memset(&i_190, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&param_types_195, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_196, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_197, 0, sizeof(struct list$1charph*));
memset(&var_args_198, 0, sizeof(_Bool));
memset(&param_types_195, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_196, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_197, 0, sizeof(struct list$1charph*));
memset(&var_args_198, 0, sizeof(_Bool));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&result_type_199, 0, sizeof(struct sType*));
memset(&right_value238, 0, sizeof(void*));
memset(&i_200, 0, sizeof(int));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&param_types_202, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_203, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*));
memset(&var_args_205, 0, sizeof(_Bool));
memset(&param_types_202, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_203, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*));
memset(&var_args_205, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&exp_206, 0, sizeof(struct sNode*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&come_value_207, 0, sizeof(struct CVALUE*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&no_comma_210, 0, sizeof(_Bool));
memset(&right_value264, 0, sizeof(void*));
memset(&node_211, 0, sizeof(struct sNode*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&i_212, 0, sizeof(int));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&generics_type_216, 0, sizeof(struct sType*));
memset(&var_name_217, 0, sizeof(char*));
memset(&err_218, 0, sizeof(_Bool));
memset(&generics_type_216, 0, sizeof(struct sType*));
memset(&var_name_217, 0, sizeof(char*));
memset(&err_218, 0, sizeof(_Bool));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&new_name_219, 0, sizeof(char*));
memset(&klass_220, 0, sizeof(struct sClass*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&types_267, 0, sizeof(struct list$1sTypeph*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&type2_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
memset(&type2_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&num_tuples_271, 0, sizeof(int));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&o2_saved_272, 0, sizeof(struct list$1sTypeph*));
memset(&it_273, 0, sizeof(struct sType*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&new_name_274, 0, sizeof(char*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&no_comma_277, 0, sizeof(_Bool));
memset(&right_value315, 0, sizeof(void*));
memset(&node_278, 0, sizeof(struct sNode*));
memset(&right_value316, 0, sizeof(void*));
memset(&node_279, 0, sizeof(struct sNode*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&asm_name_280, 0, sizeof(char*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&type2_281, 0, sizeof(struct sType*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
    head_109=info->p;
    head_sline_110=info->sline;
    info->define_struct=(_Bool)0;
    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value133=parse_word(info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = 0;
    while(_while_condtional28=string_operator_equals(type_name_111,"__extension__"),    _while_condtional28) {
        __dec_obj56=type_name_111;
        type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value134=parse_word(info)))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value134;
        __freed_obj__ = 0;
    }
    constant_112=(_Bool)0;
    static__113=(_Bool)0;
    exception__114=(_Bool)0;
    volatile__115=(_Bool)0;
    register__116=(_Bool)0;
    unsigned__117=(_Bool)0;
    long__118=(_Bool)0;
    long_long_119=(_Bool)0;
    short__120=(_Bool)0;
    restrict__121=(_Bool)0;
    struct__122=(_Bool)0;
    union__123=(_Bool)0;
    enum__124=(_Bool)0;
    no_heap_125=(_Bool)0;
    extern__126=(_Bool)0;
    inline__127=(_Bool)0;
    come_mem_core__128=(_Bool)0;
    alignas__129=((void*)0);
    anonymous_type_130=(_Bool)0;
    anonymous_name_131=(_Bool)0;
    while(_while_condtional29=(_Bool)1,    _while_condtional29) {
        if(_if_conditional203=string_operator_equals(type_name_111,"struct"),        _if_conditional203) {
            struct__122=(_Bool)1;
            if(_if_conditional204=*info->p==123,            _if_conditional204) {
                p_132=info->p;
                sline_133=info->sline;
                ((char*)(right_value135=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = 0;
                if(_if_conditional205=*info->p==59,                _if_conditional205) {
                    anonymous_name_131=(_Bool)1;
                    anonymous_type_130=(_Bool)1;
                    __dec_obj57=type_name_111;
                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(""))));
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value136;
                    __freed_obj__ = 0;
                    info->p=p_132;
                    info->sline=sline_133;
                    break;
                }
                else {
                    anonymous_type_130=(_Bool)1;
                    __dec_obj58=type_name_111;
                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(""))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value137;
                    __freed_obj__ = 0;
                    info->p=p_132;
                    info->sline=sline_133;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj59=type_name_111;
            type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value138=parse_word(info)))));
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value138;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            if(_if_conditional206=*info->p==60,            _if_conditional206) {
                p_134=info->p;
                sline_135=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    if(_if_conditional207=*info->p==62,                    _if_conditional207) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional208=*info->p==123,                        _if_conditional208) {
                        }
                        else {
                            info->p=p_134;
                            info->sline=sline_135;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional209=*info->p==0,                        _if_conditional209) {
                            err_msg(info,"invalid struct definition");
                            __result75__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value142=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value139=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value139;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
                            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value142;
                            __freed_obj__ = 0;
                            return __result75__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional210=*info->p==123,            _if_conditional210) {
                p_136=info->p;
                sline_137=info->sline;
                ((char*)(right_value143=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value143;
                __freed_obj__ = 0;
                if(_if_conditional211=*info->p==59,                _if_conditional211) {
                    info->p=head_109;
                    info->sline=head_sline_110;
                    info->define_struct=(_Bool)1;
                    __result76__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value145=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value144=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 778)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value144;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value145;
                    __freed_obj__ = 0;
                    return __result76__;
                }
                else {
                    anonymous_type_130=(_Bool)1;
                    info->p=p_136;
                    info->sline=sline_137;
                    break;
                }
            }
        }
        else {
            if(_if_conditional212=string_operator_equals(type_name_111,"union"),            _if_conditional212) {
                union__123=(_Bool)1;
                if(_if_conditional213=*info->p==123,                _if_conditional213) {
                    p_138=info->p;
                    sline_139=info->sline;
                    ((char*)(right_value146=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value146;
                    __freed_obj__ = 0;
                    if(_if_conditional214=*info->p==59,                    _if_conditional214) {
                        info->p=head_109;
                        info->sline=head_sline_110;
                        info->define_struct=(_Bool)0;
                        anonymous_type_130=(_Bool)1;
                        __dec_obj62=type_name_111;
                        type_name_111=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(""))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value147;
                        __freed_obj__ = 0;
                        info->p=p_138;
                        info->sline=sline_139;
                        break;
                    }
                    else {
                        anonymous_type_130=(_Bool)1;
                        __dec_obj63=type_name_111;
                        type_name_111=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(""))));
                        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value148;
                        __freed_obj__ = 0;
                        info->p=p_138;
                        info->sline=sline_139;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj64=type_name_111;
                type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value149=parse_word(info)))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value149;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional215=*info->p==123,                _if_conditional215) {
                    p_140=info->p;
                    sline_141=info->sline;
                    ((char*)(right_value150=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value150;
                    __freed_obj__ = 0;
                    if(_if_conditional216=*info->p==59,                    _if_conditional216) {
                        info->p=head_109;
                        info->sline=head_sline_110;
                        info->define_struct=(_Bool)1;
                        __result77__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value152=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value151=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 833)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value151;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value152;
                        __freed_obj__ = 0;
                        return __result77__;
                    }
                    else {
                        anonymous_type_130=(_Bool)1;
                        info->p=p_140;
                        info->sline=sline_141;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional217=string_operator_equals(type_name_111,"enum"),                _if_conditional217) {
                    enum__124=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional218=*info->p==123,                    _if_conditional218) {
                        p_142=info->p;
                        sline_143=info->sline;
                        ((char*)(right_value153=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value153;
                        __freed_obj__ = 0;
                        if(_if_conditional219=*info->p==59,                        _if_conditional219) {
                            info->p=head_109;
                            info->sline=head_sline_110;
                            info->define_struct=(_Bool)1;
                            __result78__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value155=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value154=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 858)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                            if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value154;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value155);
                            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value155;
                            __freed_obj__ = 0;
                            return __result78__;
                        }
                        else {
                            anonymous_type_130=(_Bool)1;
                            __dec_obj65=type_name_111;
                            type_name_111=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(""))));
                            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value156;
                            __freed_obj__ = 0;
                            info->p=p_142;
                            info->sline=sline_143;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj66=type_name_111;
                    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value157=parse_word(info)))));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value157;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional220=*info->p==123,                    _if_conditional220) {
                        p_144=info->p;
                        sline_145=info->sline;
                        ((char*)(right_value158=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value158;
                        __freed_obj__ = 0;
                        if(_if_conditional221=*info->p==59,                        _if_conditional221) {
                            info->p=head_109;
                            info->sline=head_sline_110;
                            info->define_struct=(_Bool)1;
                            __result79__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value160=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value159=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 885)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value159;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
                            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value160;
                            __freed_obj__ = 0;
                            return __result79__;
                        }
                        else {
                            anonymous_type_130=(_Bool)1;
                            info->p=p_144;
                            info->sline=sline_145;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional222=string_operator_equals(type_name_111,"_Alignas"),                    _if_conditional222) {
                        optional$2intbool_value(((struct optional$2intbool*)(right_value161=expected_next_character(40,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value161;
                        __freed_obj__ = 0;
                        exp_146=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value162=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
                        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[1] = right_value162;
                        __freed_obj__ = 0;
                        __dec_obj67=alignas__129;
                        alignas__129=(struct sNode*)come_increment_ref_count(exp_146);
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0); }
                        optional$2intbool_value(((struct optional$2intbool*)(right_value163=expected_next_character(41,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value163);
                        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value163;
                        __freed_obj__ = 0;
                        __dec_obj68=type_name_111;
                        type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value164=parse_word(info)))));
                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value164);
                        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value164;
                        __freed_obj__ = 0;
                        if(exp_146 && !__freed_obj__) { exp_146 = come_decrement_ref_count(exp_146, ((struct sNode*)exp_146)->finalize, ((struct sNode*)exp_146)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional223=string_operator_equals(type_name_111,"const"),                        _if_conditional223) {
                            constant_112=(_Bool)1;
                            __dec_obj69=type_name_111;
                            type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value165=parse_word(info)))));
                            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value165;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional224=string_operator_equals(type_name_111,"exception"),                            _if_conditional224) {
                                exception__114=(_Bool)1;
                                __dec_obj70=type_name_111;
                                type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value166=parse_word(info)))));
                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value166;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional225=string_operator_equals(type_name_111,"static"),                                _if_conditional225) {
                                    static__113=(_Bool)1;
                                    __dec_obj71=type_name_111;
                                    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value167=parse_word(info)))));
                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value167;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional226=string_operator_equals(type_name_111,"come_mem_core"),                                    _if_conditional226) {
                                        come_mem_core__128=(_Bool)1;
                                        __dec_obj72=type_name_111;
                                        type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value168=parse_word(info)))));
                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value168;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional227=string_operator_equals(type_name_111,"extern"),                                        _if_conditional227) {
                                            extern__126=(_Bool)1;
                                            __dec_obj73=type_name_111;
                                            type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value169=parse_word(info)))));
                                            if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                                            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value169;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional228=string_operator_equals(type_name_111,"_Noreturn"),                                            _if_conditional228) {
                                                __dec_obj74=type_name_111;
                                                type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value170=parse_word(info)))));
                                                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                                                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value170;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional229=string_operator_equals(type_name_111,"inline")||string_operator_equals(type_name_111,"__inline")||string_operator_equals(type_name_111,"__inline__")||string_operator_equals(type_name_111,"__always_inline"),                                                _if_conditional229) {
                                                    inline__127=(_Bool)1;
                                                    __dec_obj75=type_name_111;
                                                    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value171=parse_word(info)))));
                                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                                                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value171;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional230=string_operator_equals(type_name_111,"volatile"),                                                    _if_conditional230) {
                                                        volatile__115=(_Bool)1;
                                                        __dec_obj76=type_name_111;
                                                        type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value172=parse_word(info)))));
                                                        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                                                        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value172;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional231=string_operator_equals(type_name_111,"long"),                                                        _if_conditional231) {
                                                            {
                                                                p_147=info->p;
                                                                sline_148=info->sline;
                                                                if(_if_conditional232=!xisalpha(*info->p),                                                                _if_conditional232) {
                                                                    info->p=p_147;
                                                                    info->sline=sline_148;
                                                                    __dec_obj77=type_name_111;
                                                                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string("long"))));
                                                                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                                                    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value173;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                                else {
                                                                    __dec_obj78=type_name_111;
                                                                    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value174=parse_word(info)))));
                                                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                                                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value174;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional233=string_operator_equals(type_name_111,"unsigned"),                                                                    _if_conditional233) {
                                                                        __dec_obj79=type_name_111;
                                                                        type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value175=parse_word(info)))));
                                                                        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                                                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value175;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional234=string_operator_equals(type_name_111,"int"),                                                                        _if_conditional234) {
                                                                            long__118=(_Bool)1;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional235=string_operator_equals(type_name_111,"long"),                                                                        _if_conditional235) {
                                                                            p_147=info->p;
                                                                            sline_148=info->sline;
                                                                            if(_if_conditional236=xisalpha(*info->p),                                                                            _if_conditional236) {
                                                                                long_long_119=(_Bool)1;
                                                                                __dec_obj80=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value176=parse_word(info)))));
                                                                                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                                                                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value176;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__118=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            if(_if_conditional237=string_operator_equals(type_name_111,"int"),                                                                            _if_conditional237) {
                                                                                long_long_119=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional238=!is_type_name(type_name_111,info),                                                                                _if_conditional238) {
                                                                                    __dec_obj81=type_name_111;
                                                                                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string("long"))));
                                                                                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                                                    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value177;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_119=(_Bool)1;
                                                                                    info->p=p_147;
                                                                                    info->sline=sline_148;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional239=is_type_name(type_name_111,info),                                                                            _if_conditional239) {
                                                                                if(_if_conditional240=long__118,                                                                                _if_conditional240) {
                                                                                    long_long_119=(_Bool)1;
                                                                                    long__118=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    long__118=(_Bool)1;
                                                                                }
                                                                                break;
                                                                            }
                                                                            else {
                                                                                info->p=p_147;
                                                                                info->sline=sline_148;
                                                                                __dec_obj82=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string("long"))));
                                                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                                                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value178;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional241=string_operator_equals(type_name_111,"unsigned"),                                                            _if_conditional241) {
                                                                unsigned__117=(_Bool)1;
                                                                if(_if_conditional242=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional242) {
                                                                    p_149=info->p;
                                                                    sline_150=info->sline;
                                                                    __dec_obj83=type_name_111;
                                                                    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value179=parse_word(info)))));
                                                                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                                                    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value179;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional243=string_operator_equals(type_name_111,"short"),                                                                    _if_conditional243) {
                                                                        if(_if_conditional244=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional244) {
                                                                            p_151=info->p;
                                                                            sline_152=info->sline;
                                                                            __dec_obj84=type_name_111;
                                                                            type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value180=parse_word(info)))));
                                                                            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                                                                            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value180;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional245=is_type_name(type_name_111,info),                                                                            _if_conditional245) {
                                                                                short__120=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                short__120=(_Bool)1;
                                                                                __dec_obj85=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string("int"))));
                                                                                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                                                                                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value181;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_151;
                                                                                info->sline=sline_152;
                                                                            }
                                                                        }
                                                                        else {
                                                                            short__120=(_Bool)1;
                                                                            __dec_obj86=type_name_111;
                                                                            type_name_111=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string("int"))));
                                                                            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                                                                            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value182;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional246=string_operator_equals(type_name_111,"long"),                                                                        _if_conditional246) {
                                                                            if(_if_conditional247=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional247) {
                                                                                p_153=info->p;
                                                                                sline_154=info->sline;
                                                                                __dec_obj87=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value183=parse_word(info)))));
                                                                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                                                                                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value183;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional248=is_type_name(type_name_111,info),                                                                                _if_conditional248) {
                                                                                    long__118=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    long__118=(_Bool)1;
                                                                                    __dec_obj88=type_name_111;
                                                                                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string("int"))));
                                                                                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                                                                                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value184;
                                                                                    __freed_obj__ = 0;
                                                                                    info->p=p_153;
                                                                                    info->sline=sline_154;
                                                                                }
                                                                            }
                                                                            else {
                                                                                long__118=(_Bool)1;
                                                                                __dec_obj89=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string("int"))));
                                                                                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                                                                                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value185;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional249=!is_type_name(type_name_111,info),                                                                            _if_conditional249) {
                                                                                __dec_obj90=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string("int"))));
                                                                                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                                                                                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value186;
                                                                                __freed_obj__ = 0;
                                                                                info->p=p_149;
                                                                                info->sline=sline_150;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __dec_obj91=type_name_111;
                                                                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("int"))));
                                                                    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                                                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value187;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional250=string_operator_equals(type_name_111,"signed")||string_operator_equals(type_name_111,"__signed__"),                                                                _if_conditional250) {
                                                                    unsigned__117=(_Bool)0;
                                                                    __dec_obj92=type_name_111;
                                                                    type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value188=parse_word(info)))));
                                                                    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                                                                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value188;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional251=string_operator_equals(type_name_111,"register"),                                                                    _if_conditional251) {
                                                                        register__116=(_Bool)1;
                                                                        __dec_obj93=type_name_111;
                                                                        type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value189=parse_word(info)))));
                                                                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                                                                        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value189;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional252=string_operator_equals(type_name_111,"restrict"),                                                                        _if_conditional252) {
                                                                            restrict__121=(_Bool)1;
                                                                            __dec_obj94=type_name_111;
                                                                            type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value190=parse_word(info)))));
                                                                            if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                                                                            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value190;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional253=string_operator_equals(type_name_111,"__restrict"),                                                                            _if_conditional253) {
                                                                                restrict__121=(_Bool)1;
                                                                                __dec_obj95=type_name_111;
                                                                                type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value191=parse_word(info)))));
                                                                                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                                                                                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value191;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional254=string_operator_equals(type_name_111,"short"),                                                                                _if_conditional254) {
                                                                                    short__120=(_Bool)1;
                                                                                    if(_if_conditional255=*info->p==58,                                                                                    _if_conditional255) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional256=xisalnum(*info->p),                                                                                        _if_conditional256) {
                                                                                            p_155=info->p;
                                                                                            sline_156=info->sline;
                                                                                            __dec_obj96=type_name_111;
                                                                                            type_name_111=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value192=parse_word(info)))));
                                                                                            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                                                                                            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value192;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional257=string_operator_equals(type_name_111,"int"),                                                                                            _if_conditional257) {
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional258=string_operator_equals(type_name_111,"short"),                                                                                                _if_conditional258) {
                                                                                                    short__120=(_Bool)0;
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional259=is_type_name(type_name_111,info),                                                                                                    _if_conditional259) {
                                                                                                        info->p=p_155;
                                                                                                        info->sline=sline_156;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj97=type_name_111;
                                                                                                        type_name_111=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string("short"))));
                                                                                                        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                                                                                                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value193;
                                                                                                        __freed_obj__ = 0;
                                                                                                        info->p=p_155;
                                                                                                        info->sline=sline_156;
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            break;
                                                                                        }
                                                                                    }
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
    skip_pointer_attribute(info);
    pointer_num_157=0;
    while(_while_condtional31=*info->p==42,    _while_condtional31) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_157++;
    }
    lambda_flag_158=(_Bool)0;
    {
        pX_159=info->p;
        slineX_160=info->sline;
        if(_if_conditional260=xisalpha(*info->p)||*info->p==95,        _if_conditional260) {
            (void)optional$2charphbool_value(((struct optional$2charphbool*)(right_value194=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value194;
            __freed_obj__ = 0;
            if(_if_conditional261=*info->p==40&&info->in_typedef,            _if_conditional261) {
                lambda_flag_158=(_Bool)1;
            }
        }
        info->p=pX_159;
        info->sline=slineX_160;
    }
    function_pointer_flag_163=(_Bool)0;
    {
        p_164=info->p;
        sline_165=info->sline;
        if(_if_conditional262=*info->p==40,        _if_conditional262) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional263=*info->p==42||*info->p==94,            _if_conditional263) {
                function_pointer_flag_163=(_Bool)1;
            }
            else {
                if(_if_conditional264=xisalpha(*info->p)||*info->p==95,                _if_conditional264) {
                    word_166=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value195=parse_word(info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value195;
                    __freed_obj__ = 0;
                    if(_if_conditional265=*info->p==41,                    _if_conditional265) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional266=*info->p==40,                        _if_conditional266) {
                            function_pointer_flag_163=(_Bool)1;
                        }
                    }
                    if(word_166 && !__freed_obj__) { word_166 = come_decrement_ref_count(word_166, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
        }
        info->p=p_164;
        info->sline=sline_165;
    }
    var_name_between_brace_167=(_Bool)0;
    {
        p_168=info->p;
        sline_169=info->sline;
        if(_if_conditional267=*info->p==40,        _if_conditional267) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional268=xisalpha(*info->p)||*info->p==95,            _if_conditional268) {
                word_170=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value196=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value196;
                __freed_obj__ = 0;
                if(_if_conditional269=is_type_name(word_170,info),                _if_conditional269) {
                }
                else {
                    if(_if_conditional270=*info->p==41,                    _if_conditional270) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional271=*info->p!=40,                        _if_conditional271) {
                            var_name_between_brace_167=(_Bool)1;
                        }
                    }
                }
                if(word_170 && !__freed_obj__) { word_170 = come_decrement_ref_count(word_170, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        info->p=p_168;
        info->sline=sline_169;
    }
    if(_if_conditional272=anonymous_type_130&&*info->p==123,    _if_conditional272) {
        if(_if_conditional273=struct__122,        _if_conditional273) {
            if(_if_conditional274=string_operator_equals(type_name_111,""),            _if_conditional274) {
                __dec_obj98=type_name_111;
                type_name_111=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("anonymous_typeX%d",++anonymous_num_171))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value197;
                __freed_obj__ = 0;
            }
            node_172=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=parse_struct((char*)come_increment_ref_count(type_name_111),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
            if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value198;
            __freed_obj__ = 0;
            if(_if_conditional275=!node_compile(node_172,info),            _if_conditional275) {
                err_msg(info,"parse_struct is failed");
                __result80__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value200=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value199=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1245)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
                if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value199;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value200;
                __freed_obj__ = 0;
                return __result80__;
            }
            pointer_num_173=0;
            while(_while_condtional32=*info->p==42,            _while_condtional32) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_173++;
            }
            __dec_obj99=type_161;
            type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1255)))),type_name_111,(_Bool)0,info))));
            if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value201;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value202);
            if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value202;
            __freed_obj__ = 0;
            type_161->mPointerNum=pointer_num_173;
            if(node_172 && !__freed_obj__) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional276=enum__124,            _if_conditional276) {
                if(_if_conditional277=string_operator_equals(type_name_111,""),                _if_conditional277) {
                    __dec_obj100=type_name_111;
                    type_name_111=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("anonymous_typeY%d",++anonymous_num_171))));
                    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value203;
                    __freed_obj__ = 0;
                }
                node_174=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=parse_enum((char*)come_increment_ref_count(type_name_111),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value204;
                __freed_obj__ = 0;
                if(_if_conditional278=!info->no_output_err,                _if_conditional278) {
                    if(_if_conditional279=!node_compile(node_174,info),                    _if_conditional279) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result81__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value206=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value205=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1269)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_174 && !__freed_obj__) { node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                        if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value205;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value206;
                        __freed_obj__ = 0;
                        return __result81__;
                    }
                }
                __dec_obj101=type_161;
                type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value207=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1273)))),type_name_111,(_Bool)0,info))));
                if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value207;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value208;
                __freed_obj__ = 0;
                if(node_174 && !__freed_obj__) { node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional280=union__123,                _if_conditional280) {
                    if(_if_conditional281=string_operator_equals(type_name_111,""),                    _if_conditional281) {
                        __dec_obj102=type_name_111;
                        type_name_111=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("anonymous_typeZ%d",++anonymous_num_171))));
                        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value209;
                        __freed_obj__ = 0;
                    }
                    node_175=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=parse_union((char*)come_increment_ref_count(type_name_111),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value210;
                    __freed_obj__ = 0;
                    if(_if_conditional282=!node_compile(node_175,info),                    _if_conditional282) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result82__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value212=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value211=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1285)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_175 && !__freed_obj__) { node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                        if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value211;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value212);
                        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value212;
                        __freed_obj__ = 0;
                        return __result82__;
                    }
                    pointer_num_176=0;
                    while(_while_condtional33=*info->p==42,                    _while_condtional33) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_176++;
                    }
                    __dec_obj103=type_161;
                    type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1296)))),type_name_111,(_Bool)0,info))));
                    if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
                    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value213;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value214);
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value214;
                    __freed_obj__ = 0;
                    type_161->mPointerNum=pointer_num_176;
                    if(node_175 && !__freed_obj__) { node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result83__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value216=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value215=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1302)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value215;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value216;
                    __freed_obj__ = 0;
                    return __result83__;
                }
            }
        }
        if(_if_conditional283=parse_variable_name,        _if_conditional283) {
            parse_sharp_v5(info);
            if(_if_conditional284=var_name_between_brace_167&&*info->p==40,            _if_conditional284) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional285=*info->p==58,            _if_conditional285) {
                __dec_obj104=var_name_162;
                var_name_162=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(""))));
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value217;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional286=anonymous_name_131,                _if_conditional286) {
                    num_anonymous_var_name_177++;
                    __dec_obj105=var_name_162;
                    var_name_162=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_177))));
                    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value218;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional287=xisalnum(*info->p)||*info->p==95,                    _if_conditional287) {
                        __dec_obj106=var_name_162;
                        var_name_162=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value219=parse_word(info)))));
                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value219;
                        __freed_obj__ = 0;
                    }
                    else {
                        num_anonymous_var_name_178++;
                        __dec_obj107=var_name_162;
                        var_name_162=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_178))));
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value220;
                        __freed_obj__ = 0;
                    }
                }
            }
            if(_if_conditional288=var_name_between_brace_167&&*info->p==41,            _if_conditional288) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional289=*info->p==58,            _if_conditional289) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_179=info->no_comma;
                info->no_comma=(_Bool)1;
                node_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value221;
                __freed_obj__ = 0;
                info->no_comma=no_comma_179;
                __dec_obj108=type_161->mSizeNum;
                type_161->mSizeNum=(struct sNode*)come_increment_ref_count(node_180);
                if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
                if(node_180 && !__freed_obj__) { node_180 = come_decrement_ref_count(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0); } 
            }
        }
    }
    else {
        if(_if_conditional290=lambda_flag_158,        _if_conditional290) {
            if(_if_conditional295=map$2charphsTypephp_operator_load_element(info->types,type_name_111),            _if_conditional295) {
                __dec_obj109=result_type_181;
                result_type_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_111)))));
                if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value225;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional301=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_111)),                _if_conditional301) {
                    for(
                    i_190=0 ,                    0;                    _for_condtionalA4=                    i_190<list$1charph_length(info->generics_type_names) ,                    _for_condtionalA4;                    i_190++ ,                    0                    ){
                        if(_if_conditional304=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_190),type_name_111),                        _if_conditional304) {
                            __dec_obj110=result_type_181;
                            result_type_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1355)))),((char*)(right_value227=xsprintf("generics_type%d",i_190))),(_Bool)0,info))));
                            if(__dec_obj110) { come_call_finalizer(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    __dec_obj111=result_type_181;
                    result_type_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1360)))),type_name_111,(_Bool)0,info))));
                    if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value229;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
                    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value230;
                    __freed_obj__ = 0;
                }
            }
            result_type_181->mConstant=result_type_181->mConstant||constant_112;
            __dec_obj112=result_type_181->mAlignas;
            result_type_181->mAlignas=(struct sNode*)come_increment_ref_count(alignas__129);
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0); }
            result_type_181->mComeMemCore=result_type_181->mComeMemCore||come_mem_core__128;
            result_type_181->mRegister=register__116;
            result_type_181->mUnsigned=result_type_181->mUnsigned||unsigned__117;
            result_type_181->mVolatile=volatile__115;
            result_type_181->mStatic=result_type_181->mStatic||static__113;
            result_type_181->mExtern=result_type_181->mExtern||extern__126;
            result_type_181->mInline=result_type_181->mInline||inline__127;
            result_type_181->mRestrict=result_type_181->mRestrict||restrict__121;
            result_type_181->mLongLong=result_type_181->mLongLong||long_long_119;
            result_type_181->mLong=result_type_181->mLong||long__118;
            result_type_181->mShort=result_type_181->mShort||short__120;
            result_type_181->mPointerNum=pointer_num_157;
            __dec_obj113=var_name_162;
            var_name_162=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value231=parse_word(info)))));
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value231;
            __freed_obj__ = 0;
            multiple_assgin_var2=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value232=parse_params(info))));
            param_types_195=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
            param_names_196=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
            param_default_parametors_197=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
            var_args_198=multiple_assgin_var2->v4;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value232;
            __freed_obj__ = 0;
            __dec_obj114=type_161;
            type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value233=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1382)))),"lambda",(_Bool)0,info))));
            if(__dec_obj114) { come_call_finalizer(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value233;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value234);
            if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value234;
            __freed_obj__ = 0;
            __dec_obj116=type_161->mResultType;
            type_161->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value237=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value235=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1384)))),(struct sType*)come_increment_ref_count(result_type_181)))));
            if(__dec_obj116) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value235);
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value235;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value237;
            __freed_obj__ = 0;
            __dec_obj117=type_161->mParamTypes;
            type_161->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_195);
            if(__dec_obj117) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
            __dec_obj118=type_161->mParamNames;
            type_161->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_196);
            if(__dec_obj118) { come_call_finalizer(list$1charph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
            type_161->mVarArgs=var_args_198;
            type_161->mExtern=extern__126;
            if(result_type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_196 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_196, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_197 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional306=function_pointer_flag_163,            _if_conditional306) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional307=*info->p==42||*info->p==94,                _if_conditional307) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional308=map$2charphsTypephp_operator_load_element(info->types,type_name_111),                _if_conditional308) {
                    __dec_obj119=result_type_199;
                    result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_111)))));
                    if(__dec_obj119) { come_call_finalizer(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value238;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional309=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_111)),                    _if_conditional309) {
                        for(
                        i_200=0 ,                        0;                        _for_condtionalA5=                        i_200<list$1charph_length(info->generics_type_names) ,                        _for_condtionalA5;                        i_200++ ,                        0                        ){
                            if(_if_conditional310=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_200),type_name_111),                            _if_conditional310) {
                                __dec_obj120=result_type_199;
                                result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1411)))),((char*)(right_value240=xsprintf("generics_type%d",i_200))),(_Bool)0,info))));
                                if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value239;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
                                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value240;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value241);
                                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value241;
                                __freed_obj__ = 0;
                            }
                        }
                    }
                    else {
                        __dec_obj121=result_type_199;
                        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1416)))),type_name_111,(_Bool)0,info))));
                        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value242;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
                        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value243;
                        __freed_obj__ = 0;
                    }
                }
                result_type_199->mConstant=result_type_199->mConstant||constant_112;
                __dec_obj122=result_type_199->mAlignas;
                result_type_199->mAlignas=(struct sNode*)come_increment_ref_count(alignas__129);
                if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0); }
                result_type_199->mComeMemCore=result_type_199->mComeMemCore||come_mem_core__128;
                result_type_199->mRegister=register__116;
                result_type_199->mUnsigned=result_type_199->mUnsigned||unsigned__117;
                result_type_199->mVolatile=volatile__115;
                result_type_199->mStatic=result_type_199->mStatic||static__113;
                result_type_199->mExtern=result_type_199->mExtern||extern__126;
                result_type_199->mInline=result_type_199->mInline||inline__127;
                result_type_199->mRestrict=result_type_199->mRestrict||restrict__121;
                result_type_199->mLongLong=result_type_199->mLongLong||long_long_119;
                result_type_199->mLong=result_type_199->mLong||long__118;
                result_type_199->mShort=result_type_199->mShort||short__120;
                result_type_199->mPointerNum+=pointer_num_157;
                if(_if_conditional311=xisalnum(*info->p)||*info->p==95,                _if_conditional311) {
                    __dec_obj123=var_name_162;
                    var_name_162=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value244=parse_word(info)))));
                    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value244;
                    __freed_obj__ = 0;
                    if(_if_conditional312=*info->p==40,                    _if_conditional312) {
                        __result104__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value246=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value245=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1437)))),(struct sType*)come_increment_ref_count(result_type_199),(char*)come_increment_ref_count(var_name_162),(_Bool)0)));
                        if(result_type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                        if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value245;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
                        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value246;
                        __freed_obj__ = 0;
                        return __result104__;
                    }
                }
                else {
                    num_anonymous_var_name_201++;
                    __dec_obj124=var_name_162;
                    var_name_162=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_201))));
                    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value247;
                    __freed_obj__ = 0;
                }
                optional$2intbool_value(((struct optional$2intbool*)(right_value248=expected_next_character(41,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value248;
                __freed_obj__ = 0;
                multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value249=parse_params(info))));
                param_types_202=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
                param_names_203=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
                param_default_parametors_204=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
                var_args_205=multiple_assgin_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value249);
                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value249;
                __freed_obj__ = 0;
                __dec_obj125=type_161;
                type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1449)))),"lambda",(_Bool)0,info))));
                if(__dec_obj125) { come_call_finalizer(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value250);
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value250;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value251);
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value251;
                __freed_obj__ = 0;
                __dec_obj126=type_161->mResultType;
                type_161->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value253=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value252=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1451)))),(struct sType*)come_increment_ref_count(result_type_199)))));
                if(__dec_obj126) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value252);
                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value252;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value253);
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value253;
                __freed_obj__ = 0;
                __dec_obj127=type_161->mParamTypes;
                type_161->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_202);
                if(__dec_obj127) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                __dec_obj128=type_161->mParamNames;
                type_161->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_203);
                if(__dec_obj128) { come_call_finalizer(list$1charph_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
                type_161->mVarArgs=var_args_205;
                type_161->mExtern=extern__126;
                if(result_type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_202 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_203 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_204 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_204, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional313=string_operator_equals(type_name_111,"__typeof__")&&*info->p==40,                _if_conditional313) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_206=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value254;
                    __freed_obj__ = 0;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value255=expected_next_character(41,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value255;
                    __freed_obj__ = 0;
                    if(_if_conditional314=!node_compile(exp_206,info),                    _if_conditional314) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result106__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value257=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value256=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1467)))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_206 && !__freed_obj__) { exp_206 = come_decrement_ref_count(exp_206, ((struct sNode*)exp_206)->finalize, ((struct sNode*)exp_206)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                        if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
                        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value256;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
                        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value257;
                        __freed_obj__ = 0;
                        return __result106__;
                    }
                    come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value258);
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value258;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __dec_obj129=type_161;
                    type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(come_value_207->type))));
                    if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value259);
                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value259;
                    __freed_obj__ = 0;
                    if(_if_conditional317=parse_variable_name,                    _if_conditional317) {
                        parse_sharp_v5(info);
                        if(_if_conditional318=var_name_between_brace_167&&*info->p==40,                        _if_conditional318) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional319=*info->p==58,                        _if_conditional319) {
                            __dec_obj130=var_name_162;
                            var_name_162=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(""))));
                            if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value260;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional320=anonymous_name_131,                            _if_conditional320) {
                                num_anonymous_var_name_208++;
                                __dec_obj131=var_name_162;
                                var_name_162=(char*)come_increment_ref_count(((char*)(right_value261=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_208))));
                                if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value261;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional321=xisalnum(*info->p)||*info->p==95,                                _if_conditional321) {
                                    __dec_obj132=var_name_162;
                                    var_name_162=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value262=parse_word(info)))));
                                    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                                    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value262;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_209++;
                                    __dec_obj133=var_name_162;
                                    var_name_162=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_209))));
                                    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                                    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value263;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional322=var_name_between_brace_167&&*info->p==41,                        _if_conditional322) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional323=*info->p==58,                        _if_conditional323) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_210=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_211=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value264;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_210;
                            __dec_obj134=type_161->mSizeNum;
                            type_161->mSizeNum=(struct sNode*)come_increment_ref_count(node_211);
                            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                            if(node_211 && !__freed_obj__) { node_211 = come_decrement_ref_count(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                    if(exp_206 && !__freed_obj__) { exp_206 = come_decrement_ref_count(exp_206, ((struct sNode*)exp_206)->finalize, ((struct sNode*)exp_206)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_207 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional324=map$2charphsTypephp_operator_load_element(info->types,type_name_111),                    _if_conditional324) {
                        __dec_obj135=type_161;
                        type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_111)))));
                        if(__dec_obj135) { come_call_finalizer(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value265;
                        __freed_obj__ = 0;
                        __dec_obj136=type_161->mOriginalTypeName;
                        type_161->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(type_name_111))));
                        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
                        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value266;
                        __freed_obj__ = 0;
                        type_161->mOriginalTypeNamePointerNum=pointer_num_157;
                        type_161->mConstant=type_161->mConstant||constant_112;
                        __dec_obj137=type_161->mAlignas;
                        type_161->mAlignas=(struct sNode*)come_increment_ref_count(alignas__129);
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                        type_161->mComeMemCore=type_161->mComeMemCore||come_mem_core__128;
                        type_161->mRegister=register__116;
                        type_161->mUnsigned=type_161->mUnsigned||unsigned__117;
                        type_161->mVolatile=volatile__115;
                        type_161->mStatic=type_161->mStatic||static__113;
                        type_161->mExtern=type_161->mExtern||extern__126;
                        type_161->mInline=type_161->mInline||inline__127;
                        type_161->mRestrict=type_161->mRestrict||restrict__121;
                        type_161->mLongLong=type_161->mLongLong||long_long_119;
                        type_161->mLong=type_161->mLong||long__118;
                        type_161->mShort=type_161->mShort||short__120;
                        type_161->mPointerNum+=pointer_num_157;
                    }
                    else {
                        if(_if_conditional325=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_111)),                        _if_conditional325) {
                            for(
                            i_212=0 ,                            0;                            _for_condtionalA6=                            i_212<list$1charph_length(info->generics_type_names) ,                            _for_condtionalA6;                            i_212++ ,                            0                            ){
                                if(_if_conditional326=string_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_212),type_name_111),                                _if_conditional326) {
                                    __dec_obj138=type_161;
                                    type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1543)))),((char*)(right_value268=xsprintf("generics_type%d",i_212))),(_Bool)0,info))));
                                    if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value267;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
                                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value268;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value269);
                                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value269;
                                    __freed_obj__ = 0;
                                }
                            }
                            type_161->mConstant=type_161->mConstant||constant_112;
                            __dec_obj139=type_161->mAlignas;
                            type_161->mAlignas=(struct sNode*)come_increment_ref_count(alignas__129);
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                            type_161->mComeMemCore=type_161->mComeMemCore||come_mem_core__128;
                            type_161->mRegister=register__116;
                            type_161->mUnsigned=type_161->mUnsigned||unsigned__117;
                            type_161->mVolatile=volatile__115;
                            type_161->mStatic=type_161->mStatic||static__113;
                            type_161->mExtern=type_161->mExtern||extern__126;
                            type_161->mInline=type_161->mInline||inline__127;
                            type_161->mRestrict=type_161->mRestrict||restrict__121;
                            type_161->mLongLong=type_161->mLongLong||long_long_119;
                            type_161->mLong=type_161->mLong||long__118;
                            type_161->mShort=type_161->mShort||short__120;
                            type_161->mPointerNum+=pointer_num_157;
                        }
                        else {
                            if(_if_conditional327=*info->p==60,                            _if_conditional327) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                if(_if_conditional332=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_111)==((void*)0),                                _if_conditional332) {
                                    __result112__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value274=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value273=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1568)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                    if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                                    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                                    if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value273;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
                                    if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value274;
                                    __freed_obj__ = 0;
                                    return __result112__;
                                }
                                __dec_obj140=type_161;
                                type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1571)))),type_name_111,(_Bool)0,info))));
                                if(__dec_obj140) { come_call_finalizer(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value275;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value276);
                                if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value276;
                                __freed_obj__ = 0;
                                while(_while_condtional37=(_Bool)1,                                _while_condtional37) {
                                    multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value277=parse_type(info,(_Bool)0,(_Bool)0)));
                                    generics_type_216=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                                    var_name_217=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                                    err_218=multiple_assgin_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                                    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value277;
                                    __freed_obj__ = 0;
                                    if(_if_conditional333=!err_218,                                    _if_conditional333) {
                                        __result113__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value279=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value278=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1577)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        if(generics_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_217 && !__freed_obj__) { var_name_217 = come_decrement_ref_count(var_name_217, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                                        if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                                        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value278;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
                                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value279;
                                        __freed_obj__ = 0;
                                        return __result113__;
                                    }
                                    list$1sTypeph_push_back(type_161->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_216));
                                    if(_if_conditional334=*info->p==44,                                    _if_conditional334) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional335=*info->p==62,                                        _if_conditional335) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            if(generics_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_217 && !__freed_obj__) { var_name_217 = come_decrement_ref_count(var_name_217, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __result114__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value281=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value280=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1594)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            if(generics_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_217 && !__freed_obj__) { var_name_217 = come_decrement_ref_count(var_name_217, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                                            if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                                            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value280;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
                                            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value281;
                                            __freed_obj__ = 0;
                                            return __result114__;
                                        }
                                    }
                                    if(generics_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_217 && !__freed_obj__) { var_name_217 = come_decrement_ref_count(var_name_217, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional336=is_contained_generics_class(type_161,info),                                _if_conditional336) {
                                    __dec_obj141=type_161;
                                    type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=solve_generics(type_161,info->generics_type,info))));
                                    if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                                    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value282;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional337=!output_generics_struct(type_161,type_161,info),                                    _if_conditional337) {
                                        new_name_219=(char*)come_increment_ref_count(((char*)(right_value283=create_generics_name(type_161,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                                        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value283;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_219);
                                        exit(7);
                                        if(new_name_219 && !__freed_obj__) { new_name_219 = come_decrement_ref_count(new_name_219, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                }
                                type_161->mConstant=type_161->mConstant||constant_112;
                                __dec_obj142=type_161->mAlignas;
                                type_161->mAlignas=(struct sNode*)come_increment_ref_count(alignas__129);
                                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                                type_161->mComeMemCore=type_161->mComeMemCore||come_mem_core__128;
                                type_161->mRegister=register__116;
                                type_161->mUnsigned=type_161->mUnsigned||unsigned__117;
                                type_161->mVolatile=volatile__115;
                                type_161->mStatic=type_161->mStatic||static__113;
                                type_161->mExtern=type_161->mExtern||extern__126;
                                type_161->mInline=type_161->mInline||inline__127;
                                type_161->mRestrict=type_161->mRestrict||restrict__121;
                                type_161->mLongLong=type_161->mLongLong||long_long_119;
                                type_161->mLong=type_161->mLong||long__118;
                                type_161->mShort=type_161->mShort||short__120;
                                type_161->mPointerNum+=pointer_num_157;
                            }
                            else {
                                if(_if_conditional338=struct__122,                                _if_conditional338) {
                                    klass_220=map$2charphsClassphp_operator_load_element(info->classes,type_name_111);
                                    if(_if_conditional339=klass_220==((void*)0)&&*info->p!=60,                                    _if_conditional339) {
                                        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_111),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value295=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value294=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1630)))),type_name_111,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
                                        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value294;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value295);
                                        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value295;
                                        __freed_obj__ = 0;
                                    }
                                }
                                __dec_obj143=type_161;
                                type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value296=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1634)))),type_name_111,(_Bool)0,info))));
                                if(__dec_obj143) { come_call_finalizer(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                                if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value296;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value297);
                                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value297;
                                __freed_obj__ = 0;
                                type_161->mConstant=type_161->mConstant||constant_112;
                                __dec_obj144=type_161->mAlignas;
                                type_161->mAlignas=(struct sNode*)come_increment_ref_count(alignas__129);
                                if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
                                type_161->mComeMemCore=type_161->mComeMemCore||come_mem_core__128;
                                type_161->mRegister=register__116;
                                type_161->mUnsigned=type_161->mUnsigned||unsigned__117;
                                type_161->mVolatile=volatile__115;
                                type_161->mStatic=type_161->mStatic||static__113;
                                type_161->mExtern=type_161->mExtern||extern__126;
                                type_161->mInline=type_161->mInline||inline__127;
                                type_161->mRestrict=type_161->mRestrict||restrict__121;
                                type_161->mLongLong=type_161->mLongLong||long_long_119;
                                type_161->mLong=type_161->mLong||long__118;
                                type_161->mShort=type_161->mShort||short__120;
                                type_161->mPointerNum+=pointer_num_157;
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional47=*info->p==42,                    _while_condtional47) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_161->mPointerNum++;
                        if(_if_conditional393=type_161->mNoSolvedGenericsType->v1,                        _if_conditional393) {
                            type_161->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional394=*info->p==37,                    _if_conditional394) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_161->mHeap=(_Bool)1;
                        if(_if_conditional395=type_161->mNoSolvedGenericsType->v1,                        _if_conditional395) {
                            type_161->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional396=*info->p==38,                    _if_conditional396) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_161->mNoHeap=(_Bool)1;
                        if(_if_conditional397=type_161->mNoSolvedGenericsType->v1,                        _if_conditional397) {
                            type_161->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional398=*info->p==63,                    _if_conditional398) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_161->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional399=*info->p==124,                    _if_conditional399) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_161->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional48=*info->p==42,                    _while_condtional48) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_161->mPointerNum++;
                        if(_if_conditional400=type_161->mNoSolvedGenericsType->v1,                        _if_conditional400) {
                            type_161->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional401=parse_multiple_type&&*info->p==44,                    _if_conditional401) {
                        types_267=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value299=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value298=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1716))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value298;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value299);
                        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value299;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(types_267,(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(type_161)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value300);
                        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value300;
                        __freed_obj__ = 0;
                        while(_while_condtional49=*info->p==44,                        _while_condtional49) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value301=parse_type(info,(_Bool)0,(_Bool)0)));
                            type2_268=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            name_269=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_270=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value301;
                            __freed_obj__ = 0;
                            if(_if_conditional402=!err_270,                            _if_conditional402) {
                                __result139__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value303=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value302=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1727)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                if(type2_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_269 && !__freed_obj__) { name_269 = come_decrement_ref_count(name_269, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_267 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                                if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                                if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value302;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value303);
                                if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value303;
                                __freed_obj__ = 0;
                                return __result139__;
                            }
                            list$1sTypeph_push_back(types_267,(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(type2_268)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value304);
                            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value304;
                            __freed_obj__ = 0;
                            if(type2_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_269 && !__freed_obj__) { name_269 = come_decrement_ref_count(name_269, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        num_tuples_271=list$1sTypeph_length(types_267);
                        __dec_obj145=type_161;
                        type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1735)))),((char*)(right_value306=xsprintf("tuple%d",num_tuples_271))),(_Bool)0,info))));
                        if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value305);
                        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value305;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value306);
                        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value306;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value307);
                        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value307;
                        __freed_obj__ = 0;
                        type_161->mPointerNum++;
                        type_161->mHeap=(_Bool)1;
                        for(
                        o2_saved_272=(struct list$1sTypeph*)come_increment_ref_count((types_267)),it_273=list$1sTypeph_begin((o2_saved_272)) ,                        0;                        _for_condtionalA9=                        !list$1sTypeph_end((o2_saved_272)) ,                        _for_condtionalA9;                        it_273=list$1sTypeph_next((o2_saved_272)) ,                        0                        ){
                            list$1sTypeph_push_back(type_161->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(it_273)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
                            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value308;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_272 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(_if_conditional403=is_contained_generics_class(type_161,info),                        _if_conditional403) {
                            __dec_obj146=type_161;
                            type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=solve_generics(type_161,info->generics_type,info))));
                            if(__dec_obj146) { come_call_finalizer(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                            if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value309;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional404=!output_generics_struct(type_161,type_161,info),                            _if_conditional404) {
                                new_name_274=(char*)come_increment_ref_count(((char*)(right_value310=create_generics_name(type_161,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                                if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value310;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_274);
                                exit(9);
                                if(new_name_274 && !__freed_obj__) { new_name_274 = come_decrement_ref_count(new_name_274, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        }
                        if(types_267 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional405=parse_variable_name,                    _if_conditional405) {
                        parse_sharp_v5(info);
                        if(_if_conditional406=var_name_between_brace_167&&*info->p==40,                        _if_conditional406) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional407=*info->p==58,                        _if_conditional407) {
                            __dec_obj147=var_name_162;
                            var_name_162=(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string(""))));
                            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
                            if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value311;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional408=anonymous_name_131,                            _if_conditional408) {
                                num_anonymous_var_name_275++;
                                __dec_obj148=var_name_162;
                                var_name_162=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_275))));
                                if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                                if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value312;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional409=xisalnum(*info->p)||*info->p==95,                                _if_conditional409) {
                                    __dec_obj149=var_name_162;
                                    var_name_162=(char*)come_increment_ref_count(optional$2charphbool_value(((struct optional$2charphbool*)(right_value313=parse_word(info)))));
                                    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value313;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    num_anonymous_var_name_276++;
                                    __dec_obj150=var_name_162;
                                    var_name_162=(char*)come_increment_ref_count(((char*)(right_value314=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_276))));
                                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                                    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value314;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                        if(_if_conditional410=var_name_between_brace_167&&*info->p==41,                        _if_conditional410) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional411=*info->p==58,                        _if_conditional411) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_277=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value315;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_277;
                            __dec_obj151=type_161->mSizeNum;
                            type_161->mSizeNum=(struct sNode*)come_increment_ref_count(node_278);
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0); }
                            if(node_278 && !__freed_obj__) { node_278 = come_decrement_ref_count(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional50=*info->p==91,    _while_condtional50) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional412=*info->p==93,        _if_conditional412) {
            info->p++;
            skip_spaces_and_lf(info);
            type_161->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value316;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(type_161->mArrayNum,(struct sNode*)come_increment_ref_count(node_279));
        parse_sharp_v5(info);
        optional$2intbool_value(((struct optional$2intbool*)(right_value317=expected_next_character(93,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value317);
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value317;
        __freed_obj__ = 0;
        if(node_279 && !__freed_obj__) { node_279 = come_decrement_ref_count(node_279, ((struct sNode*)node_279)->finalize, ((struct sNode*)node_279)->_protocol_obj, 0, 0, 0); } 
    }
    asm_name_280=(char*)come_increment_ref_count(((char*)(right_value318=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value318;
    __freed_obj__ = 0;
    __dec_obj152=type_161->mAsmName;
    type_161->mAsmName=(char*)come_increment_ref_count(asm_name_280);
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
    parse_sharp_v5(info);
    if(_if_conditional413=exception__114,    _if_conditional413) {
        type2_281=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value319=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1830)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value319;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value320;
        __freed_obj__ = 0;
        list$1sTypeph_add(type2_281->mGenericsTypes,(struct sType*)come_increment_ref_count(type_161));
        list$1sTypeph_add(type2_281->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value321=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1832)))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value321;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value322;
        __freed_obj__ = 0;
        type2_281->mPointerNum++;
        type2_281->mHeap=(_Bool)1;
        type2_281->mException=(_Bool)1;
        if(_if_conditional414=!is_contained_generics_class(type2_281,info),        _if_conditional414) {
            if(_if_conditional415=!output_generics_struct(type2_281,type2_281,info),            _if_conditional415) {
                err_msg(info,"invalid exception definition");
                __result140__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value324=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value323=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1842)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(type2_281 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_281, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
                if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_280 && !__freed_obj__) { asm_name_280 = come_decrement_ref_count(asm_name_280, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
                if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value323;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value324);
                if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value324;
                __freed_obj__ = 0;
                return __result140__;
            }
        }
        __result141__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value326=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value325=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1846)))),(struct sType*)come_increment_ref_count(type2_281),(char*)come_increment_ref_count(var_name_162),(_Bool)1)));
        if(type2_281 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_281, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
        if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_280 && !__freed_obj__) { asm_name_280 = come_decrement_ref_count(asm_name_280, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value325;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value326;
        __freed_obj__ = 0;
        return __result141__;
        if(type2_281 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_281, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value328=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value327=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1849)))),(struct sType*)come_increment_ref_count(type_161),(char*)come_increment_ref_count(var_name_162),(_Bool)1)));
    if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_280 && !__freed_obj__) { asm_name_280 = come_decrement_ref_count(asm_name_280, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value327);
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value327;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value328;
    __freed_obj__ = 0;
    return __result142__;
    if(type_name_111 && !__freed_obj__) { type_name_111 = come_decrement_ref_count(type_name_111, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__129 && !__freed_obj__) { alignas__129 = come_decrement_ref_count(alignas__129, ((struct sNode*)alignas__129)->finalize, ((struct sNode*)alignas__129)->_protocol_obj, 0, 0, 0); } 
    if(type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_162 && !__freed_obj__) { var_name_162 = come_decrement_ref_count(var_name_162, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_280 && !__freed_obj__) { asm_name_280 = come_decrement_ref_count(asm_name_280, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
struct sType* __dec_obj60;
void* right_value141;
char* __dec_obj61;
struct tuple3$3sTypephcharphbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
                                __dec_obj60=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(v1))));
                                if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value140;
                                __freed_obj__ = 0;
                                __dec_obj61=self->v2;
                                self->v2=(char*)come_increment_ref_count(((char*)(right_value141=string_clone(v2))));
                                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
                                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value141;
                                __freed_obj__ = 0;
                                self->v3=v3;
                                __result74__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                return __result74__;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_182;
unsigned int hash_183;
unsigned int it_184;
_Bool _while_condtional34;
_Bool _if_conditional291;
void* right_value222;
_Bool _if_conditional292;
struct sType* __result84__;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct sType* __result85__;
struct sType* __result86__;
void* right_value223;
void* right_value224;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_182, 0, sizeof(struct sType*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
                memset(&default_value_182,0,sizeof(struct sType*));
                hash_183=string_get_hash_key(((char*)key))%self->size;
                it_184=hash_183;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional291=self->item_existance[it_184],                    _if_conditional291) {
                        if(_if_conditional292=optional$2boolbool_value(((struct optional$2boolbool*)(right_value222=string_equals(self->keys[it_184],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222),
                        (right_value222 && right_value222 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value222, 
                        __freed_obj__ = 0, 
                        _if_conditional292) {
                            __result84__ = __result_obj__ = self->items[it_184];
                            return __result84__;
                        }
                        it_184++;
                        if(_if_conditional293=it_184>=self->size,                        _if_conditional293) {
                            it_184=0;
                        }
                        else {
                            if(_if_conditional294=it_184==hash_183,                            _if_conditional294) {
                                __result85__ = __result_obj__ = default_value_182;
                                return __result85__;
                            }
                        }
                    }
                    else {
                        __result86__ = __result_obj__ = default_value_182;
                        return __result86__;
                    }
                }
                __result88__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value224=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value223=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1619))),default_value_182,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value223;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
                if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value224;
                __freed_obj__ = 0;
                return __result88__;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result87__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result87__;
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
char* it_187;
_Bool _for_condtionalA3;
_Bool _if_conditional300;
_Bool __result96__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_187, 0, sizeof(char*));
                    for(
                    it_187=list$1charph_begin(self) ,                    0;                    _for_condtionalA3=                    !list$1charph_end(self) ,                    _for_condtionalA3;                    it_187=list$1charph_next(self) ,                    0                    ){
                        if(_if_conditional300=string_operator_equals(it_187,item),                        _if_conditional300) {
                            __result96__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result96__;
                        }
                    }
                    __result97__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    return __result97__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
char* result_185;
char* __result89__;
_Bool _if_conditional297;
char* __result90__;
char* result_186;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_185, 0, sizeof(char*));
memset(&result_186, 0, sizeof(char*));
                        if(_if_conditional296=self==((void*)0),                        _if_conditional296) {
                            memset(&result_185,0,sizeof(char*));
                            __result89__ = __result_obj__ = result_185;
                            return __result89__;
                        }
                        self->it=self->head;
                        if(_if_conditional297=self->it,                        _if_conditional297) {
                            __result90__ = __result_obj__ = self->it->item;
                            return __result90__;
                        }
                        memset(&result_186,0,sizeof(char*));
                        __result91__ = __result_obj__ = result_186;
                        return __result91__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result92__ = self==((void*)0)||self->it==((void*)0);
                        return __result92__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
char* result_188;
char* __result93__;
_Bool _if_conditional299;
char* __result94__;
char* result_189;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_188, 0, sizeof(char*));
memset(&result_189, 0, sizeof(char*));
                        if(_if_conditional298=self==((void*)0)||self->it==((void*)0),                        _if_conditional298) {
                            memset(&result_188,0,sizeof(char*));
                            __result93__ = __result_obj__ = result_188;
                            return __result93__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional299=self->it,                        _if_conditional299) {
                            __result94__ = __result_obj__ = self->it->item;
                            return __result94__;
                        }
                        memset(&result_189,0,sizeof(char*));
                        __result95__ = __result_obj__ = result_189;
                        return __result95__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result98__ = self->len;
                        return __result98__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional302;
struct list_item$1charph* it_191;
int i_192;
_Bool _while_condtional35;
_Bool _if_conditional303;
char* __result99__;
char* default_value_193;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_191, 0, sizeof(struct list_item$1charph*));
memset(&i_192, 0, sizeof(int));
memset(&default_value_193, 0, sizeof(char*));
                            if(_if_conditional302=position<0,                            _if_conditional302) {
                                position+=self->len;
                            }
                            it_191=self->head;
                            i_192=0;
                            while(_while_condtional35=it_191!=((void*)0),                            _while_condtional35) {
                                if(_if_conditional303=position==i_192,                                _if_conditional303) {
                                    __result99__ = __result_obj__ = it_191->item;
                                    return __result99__;
                                }
                                it_191=it_191->next;
                                i_192++;
                            }
                            memset(&default_value_193,0,sizeof(char*));
                            __result100__ = __result_obj__ = default_value_193;
                            if(default_value_193 && !__freed_obj__) { default_value_193 = come_decrement_ref_count(default_value_193, (void*)0, (void*)0, 0, 1, 0); }
                            return __result100__;
                            if(default_value_193 && !__freed_obj__) { default_value_193 = come_decrement_ref_count(default_value_193, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_194;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result101__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_194, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                if(_if_conditional305=self==((void*)0),                _if_conditional305) {
                    memset(&default_value_194,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                    __result101__ = __result_obj__ = default_value_194;
                    return __result101__;
                }
                else {
                    __result102__ = __result_obj__ = self->v1;
                    return __result102__;
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value236;
struct sType* __dec_obj115;
struct tuple1$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
                __dec_obj115=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(v1))));
                if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value236;
                __freed_obj__ = 0;
                __result103__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result103__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result105__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result105__;
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
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional315=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional315) {
                            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional316=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional316) {
                            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_213;
unsigned int hash_214;
unsigned int it_215;
_Bool _while_condtional36;
_Bool _if_conditional328;
void* right_value270;
_Bool _if_conditional329;
struct sClass* __result107__;
_Bool _if_conditional330;
_Bool _if_conditional331;
struct sClass* __result108__;
struct sClass* __result109__;
void* right_value271;
void* right_value272;
struct sClass* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_213, 0, sizeof(struct sClass*));
memset(&hash_214, 0, sizeof(unsigned int));
memset(&it_215, 0, sizeof(unsigned int));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
                                    memset(&default_value_213,0,sizeof(struct sClass*));
                                    hash_214=string_get_hash_key(((char*)key))%self->size;
                                    it_215=hash_214;
                                    while(_while_condtional36=(_Bool)1,                                    _while_condtional36) {
                                        if(_if_conditional328=self->item_existance[it_215],                                        _if_conditional328) {
                                            if(_if_conditional329=optional$2boolbool_value(((struct optional$2boolbool*)(right_value270=string_equals(self->keys[it_215],key)))),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270),
                                            (right_value270 && right_value270 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value270, 
                                            __freed_obj__ = 0, 
                                            _if_conditional329) {
                                                __result107__ = __result_obj__ = self->items[it_215];
                                                return __result107__;
                                            }
                                            it_215++;
                                            if(_if_conditional330=it_215>=self->size,                                            _if_conditional330) {
                                                it_215=0;
                                            }
                                            else {
                                                if(_if_conditional331=it_215==hash_214,                                                _if_conditional331) {
                                                    __result108__ = __result_obj__ = default_value_213;
                                                    return __result108__;
                                                }
                                            }
                                        }
                                        else {
                                            __result109__ = __result_obj__ = default_value_213;
                                            return __result109__;
                                        }
                                    }
                                    __result111__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value272=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value271=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_213,(_Bool)0)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                                    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value271;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
                                    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value272;
                                    __freed_obj__ = 0;
                                    return __result111__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        self->v1=v1;
                                        self->v2=v2;
                                        __result110__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result110__;
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
_Bool _if_conditional340;
unsigned int hash_240;
unsigned int it_241;
_Bool _while_condtional41;
_Bool _if_conditional358;
void* right_value288;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool same_key_exist_258;
char* it2_261;
_Bool _for_condtionalA8;
void* right_value290;
_Bool _if_conditional389;
_Bool _if_conditional390;
struct map$2charphsClassph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_240, 0, sizeof(unsigned int));
memset(&it_241, 0, sizeof(unsigned int));
memset(&right_value288, 0, sizeof(void*));
memset(&same_key_exist_258, 0, sizeof(_Bool));
memset(&it2_261, 0, sizeof(char*));
memset(&right_value290, 0, sizeof(void*));
                                            if(_if_conditional340=self->len*10>=self->size,                                            _if_conditional340) {
                                                map$2charphsClassph_rehash(self);
                                            }
                                            hash_240=string_get_hash_key(key)%self->size;
                                            it_241=hash_240;
                                            while(_while_condtional41=(_Bool)1,                                            _while_condtional41) {
                                                if(_if_conditional358=self->item_existance[it_241],                                                _if_conditional358) {
                                                    if(_if_conditional359=optional$2boolbool_value(((struct optional$2boolbool*)(right_value288=string_equals(self->keys[it_241],key)))),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288),
                                                    (right_value288 && right_value288 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value288, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional359) {
                                                        if(_if_conditional360=1,                                                        _if_conditional360) {
                                                            list$1charp_remove(self->key_list,self->keys[it_241]);
                                                            if(self->keys[it_241] && !__freed_obj__) { self->keys[it_241] = come_decrement_ref_count(self->keys[it_241], (void*)0, (void*)0, 0, 0, 0); }
                                                            self->keys[it_241]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            list$1charp_remove(self->key_list,self->keys[it_241]);
                                                            self->keys[it_241]=key;
                                                        }
                                                        if(_if_conditional380=1,                                                        _if_conditional380) {
                                                            if(self->items[it_241] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_241], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->items[it_241]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_241]=item;
                                                        }
                                                        break;
                                                    }
                                                    it_241++;
                                                    if(_if_conditional381=it_241>=self->size,                                                    _if_conditional381) {
                                                        it_241=0;
                                                    }
                                                    else {
                                                        if(_if_conditional382=it_241==hash_240,                                                        _if_conditional382) {
                                                            printf("unexpected error in map.insert\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    self->item_existance[it_241]=(_Bool)1;
                                                    if(_if_conditional383=1,                                                    _if_conditional383) {
                                                        self->keys[it_241]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        self->keys[it_241]=key;
                                                    }
                                                    if(_if_conditional384=1,                                                    _if_conditional384) {
                                                        self->items[it_241]=(struct sClass*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        self->items[it_241]=item;
                                                    }
                                                    self->len++;
                                                    break;
                                                }
                                            }
                                            same_key_exist_258=(_Bool)0;
                                            for(
                                            it2_261=list$1charp_begin(self->key_list) ,                                            0;                                            _for_condtionalA8=                                            !list$1charp_end(self->key_list) ,                                            _for_condtionalA8;                                            it2_261=list$1charp_next(self->key_list) ,                                            0                                            ){
                                                if(_if_conditional389=optional$2boolbool_value(((struct optional$2boolbool*)(right_value290=string_equals(it2_261,key)))),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290),
                                                (right_value290 && right_value290 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value290, 
                                                __freed_obj__ = 0, 
                                                _if_conditional389) {
                                                    same_key_exist_258=(_Bool)1;
                                                }
                                            }
                                            if(_if_conditional390=!same_key_exist_258,                                            _if_conditional390) {
                                                list$1charp_push_back(self->key_list,key);
                                            }
                                            __result138__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result138__;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_221;
void* right_value284;
char** keys_222;
void* right_value285;
struct sClass** items_223;
void* right_value286;
_Bool* item_existance_226;
int len_227;
char* it_230;
_Bool _for_condtionalA7;
struct sClass* default_value_233;
struct sClass* it2_236;
unsigned int hash_237;
int n_238;
_Bool _while_condtional40;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
struct sClass* default_value_239;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_221, 0, sizeof(int));
memset(&right_value284, 0, sizeof(void*));
memset(&keys_222, 0, sizeof(char**));
memset(&right_value285, 0, sizeof(void*));
memset(&items_223, 0, sizeof(struct sClass**));
memset(&right_value286, 0, sizeof(void*));
memset(&item_existance_226, 0, sizeof(_Bool*));
memset(&len_227, 0, sizeof(int));
memset(&it_230, 0, sizeof(char*));
memset(&default_value_233, 0, sizeof(struct sClass*));
memset(&it2_236, 0, sizeof(struct sClass*));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&n_238, 0, sizeof(int));
memset(&default_value_239, 0, sizeof(struct sClass*));
                                                    size_221=self->size*10;
                                                    keys_222=(char**)come_increment_ref_count(((char**)(right_value284=(char**)come_calloc(1, sizeof(char*)*(1*(size_221)), "./comelang2.h", 1377))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
                                                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value284;
                                                    __freed_obj__ = 0;
                                                    items_223=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value285=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_221)), "./comelang2.h", 1378))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
                                                    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value285;
                                                    __freed_obj__ = 0;
                                                    item_existance_226=(_Bool*)come_increment_ref_count(((_Bool*)(right_value286=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_221)), "./comelang2.h", 1379))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value286);
                                                    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value286;
                                                    __freed_obj__ = 0;
                                                    len_227=0;
                                                    for(
                                                    it_230=map$2charphsClassph_begin(self) ,                                                    0;                                                    _for_condtionalA7=                                                    !map$2charphsClassph_end(self) ,                                                    _for_condtionalA7;                                                    it_230=map$2charphsClassph_next(self) ,                                                    0                                                    ){
                                                        memset(&default_value_233,0,sizeof(struct sClass*));
                                                        it2_236=map$2charphsClassph_at(self,it_230,default_value_233);
                                                        hash_237=string_get_hash_key(it_230)%size_221;
                                                        n_238=hash_237;
                                                        while(_while_condtional40=(_Bool)1,                                                        _while_condtional40) {
                                                            if(_if_conditional355=item_existance_226[n_238],                                                            _if_conditional355) {
                                                                n_238++;
                                                                if(_if_conditional356=n_238>=size_221,                                                                _if_conditional356) {
                                                                    n_238=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional357=n_238==hash_237,                                                                    _if_conditional357) {
                                                                        printf("unexpected error in map.rehash(1)\n");
                                                                        stackframe();
                                                                        exit(2);
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                item_existance_226[n_238]=(_Bool)1;
                                                                keys_222[n_238]=it_230;
                                                                items_223[n_238]=map$2charphsClassph_at(self,it_230,default_value_239);
                                                                len_227++;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    come_free_object((char*)self->items);
                                                    if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                                    come_free_object((char*)self->keys);
                                                    self->keys=keys_222;
                                                    self->items=items_223;
                                                    self->item_existance=item_existance_226;
                                                    self->size=size_221;
                                                    self->len=len_227;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional341=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional341) {
                                                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(_if_conditional342=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional342) {
                                                            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        if(_if_conditional346=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional346) {
                                                            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_224;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_225;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_225, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_224=self->head;
                                                                while(_while_condtional38=it_224!=((void*)0),                                                                _while_condtional38) {
                                                                    prev_it_225=it_224;
                                                                    it_224=it_224->next;
                                                                    if(prev_it_225 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_225, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional343=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional343) {
                                                                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional344=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional344) {
                                                                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                if(_if_conditional345=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional345) {
                                                                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional347;
char* result_228;
char* __result115__;
_Bool _if_conditional348;
char* __result116__;
char* result_229;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_228, 0, sizeof(char*));
memset(&result_229, 0, sizeof(char*));
                                                        if(_if_conditional347=self==((void*)0),                                                        _if_conditional347) {
                                                            memset(&result_228,0,sizeof(char*));
                                                            __result115__ = __result_obj__ = result_228;
                                                            return __result115__;
                                                        }
                                                        self->key_list->it=self->key_list->head;
                                                        if(_if_conditional348=self->key_list->it,                                                        _if_conditional348) {
                                                            __result116__ = __result_obj__ = self->key_list->it->item;
                                                            return __result116__;
                                                        }
                                                        memset(&result_229,0,sizeof(char*));
                                                        __result117__ = __result_obj__ = result_229;
                                                        return __result117__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result118__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                        return __result118__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional349;
char* result_231;
char* __result119__;
_Bool _if_conditional350;
char* __result120__;
char* result_232;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_231, 0, sizeof(char*));
memset(&result_232, 0, sizeof(char*));
                                                        if(_if_conditional349=self==((void*)0)||self->key_list->it==((void*)0),                                                        _if_conditional349) {
                                                            memset(&result_231,0,sizeof(char*));
                                                            __result119__ = __result_obj__ = result_231;
                                                            return __result119__;
                                                        }
                                                        self->key_list->it=self->key_list->it->next;
                                                        if(_if_conditional350=self->key_list->it,                                                        _if_conditional350) {
                                                            __result120__ = __result_obj__ = self->key_list->it->item;
                                                            return __result120__;
                                                        }
                                                        memset(&result_232,0,sizeof(char*));
                                                        __result121__ = __result_obj__ = result_232;
                                                        return __result121__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_234;
unsigned int it_235;
_Bool _while_condtional39;
_Bool _if_conditional351;
void* right_value287;
_Bool _if_conditional352;
struct sClass* __result122__;
_Bool _if_conditional353;
_Bool _if_conditional354;
struct sClass* __result123__;
struct sClass* __result124__;
struct sClass* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&it_235, 0, sizeof(unsigned int));
memset(&right_value287, 0, sizeof(void*));
                                                            hash_234=string_get_hash_key(((char*)key))%self->size;
                                                            it_235=hash_234;
                                                            while(_while_condtional39=(_Bool)1,                                                            _while_condtional39) {
                                                                if(_if_conditional351=self->item_existance[it_235],                                                                _if_conditional351) {
                                                                    if(_if_conditional352=optional$2boolbool_value(((struct optional$2boolbool*)(right_value287=string_equals(self->keys[it_235],key)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287),
                                                                    (right_value287 && right_value287 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value287, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional352) {
                                                                        __result122__ = __result_obj__ = self->items[it_235];
                                                                        return __result122__;
                                                                    }
                                                                    it_235++;
                                                                    if(_if_conditional353=it_235>=self->size,                                                                    _if_conditional353) {
                                                                        it_235=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional354=it_235==hash_234,                                                                        _if_conditional354) {
                                                                            __result123__ = __result_obj__ = default_value;
                                                                            return __result123__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result124__ = __result_obj__ = default_value;
                                                                    return __result124__;
                                                                }
                                                            }
                                                            __result125__ = __result_obj__ = default_value;
                                                            return __result125__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_242;
struct list_item$1charp* it_243;
_Bool _while_condtional42;
void* right_value289;
_Bool _if_conditional361;
struct list$1charp* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_242, 0, sizeof(int));
memset(&it_243, 0, sizeof(struct list_item$1charp*));
memset(&right_value289, 0, sizeof(void*));
                                                                it2_242=0;
                                                                it_243=self->head;
                                                                while(_while_condtional42=it_243!=((void*)0),                                                                _while_condtional42) {
                                                                    if(_if_conditional361=optional$2boolbool_value(((struct optional$2boolbool*)(right_value289=string_equals(it_243->item,item)))),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289),
                                                                    (right_value289 && right_value289 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value289, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional361) {
                                                                        list$1charp_delete(self,it2_242,it2_242+1);
                                                                        break;
                                                                    }
                                                                    it2_242++;
                                                                    it_243=it_243->next;
                                                                }
                                                                __result129__ = __result_obj__ = self;
                                                                return __result129__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
int tmp_244;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
struct list$1charp* __result126__;
_Bool _if_conditional368;
_Bool _if_conditional369;
struct list_item$1charp* it_247;
int i_248;
_Bool _while_condtional44;
_Bool _if_conditional370;
struct list_item$1charp* prev_it_249;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct list_item$1charp* it_250;
int i_251;
_Bool _while_condtional45;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct list_item$1charp* prev_it_252;
struct list_item$1charp* it_253;
struct list_item$1charp* head_prev_it_254;
struct list_item$1charp* tail_it_255;
int i_256;
_Bool _while_condtional46;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
struct list_item$1charp* prev_it_257;
_Bool _if_conditional378;
_Bool _if_conditional379;
struct list$1charp* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_244, 0, sizeof(int));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&i_248, 0, sizeof(int));
memset(&prev_it_249, 0, sizeof(struct list_item$1charp*));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
memset(&i_251, 0, sizeof(int));
memset(&prev_it_252, 0, sizeof(struct list_item$1charp*));
memset(&it_253, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_254, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_255, 0, sizeof(struct list_item$1charp*));
memset(&i_256, 0, sizeof(int));
memset(&prev_it_257, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional362=head<0,                                                                            _if_conditional362) {
                                                                                head+=self->len;
                                                                            }
                                                                            if(_if_conditional363=tail<0,                                                                            _if_conditional363) {
                                                                                tail+=self->len+1;
                                                                            }
                                                                            if(_if_conditional364=head>tail,                                                                            _if_conditional364) {
                                                                                tmp_244=tail;
                                                                                tail=head;
                                                                                head=tmp_244;
                                                                            }
                                                                            if(_if_conditional365=head<0,                                                                            _if_conditional365) {
                                                                                head=0;
                                                                            }
                                                                            if(_if_conditional366=tail>self->len,                                                                            _if_conditional366) {
                                                                                tail=self->len;
                                                                            }
                                                                            if(_if_conditional367=head==tail,                                                                            _if_conditional367) {
                                                                                __result126__ = __result_obj__ = self;
                                                                                return __result126__;
                                                                            }
                                                                            if(_if_conditional368=head==0&&tail==self->len,                                                                            _if_conditional368) {
                                                                                list$1charp_reset(self);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional369=head==0,                                                                                _if_conditional369) {
                                                                                    it_247=self->head;
                                                                                    i_248=0;
                                                                                    while(_while_condtional44=it_247!=((void*)0),                                                                                    _while_condtional44) {
                                                                                        if(_if_conditional370=i_248<tail,                                                                                        _if_conditional370) {
                                                                                            prev_it_249=it_247;
                                                                                            it_247=it_247->next;
                                                                                            i_248++;
                                                                                            if(prev_it_249 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            self->len--;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional371=i_248==tail,                                                                                            _if_conditional371) {
                                                                                                self->head=it_247;
                                                                                                self->head->prev=((void*)0);
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                it_247=it_247->next;
                                                                                                i_248++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional372=tail==self->len,                                                                                    _if_conditional372) {
                                                                                        it_250=self->head;
                                                                                        i_251=0;
                                                                                        while(_while_condtional45=it_250!=((void*)0),                                                                                        _while_condtional45) {
                                                                                            if(_if_conditional373=i_251==head,                                                                                            _if_conditional373) {
                                                                                                self->tail=it_250->prev;
                                                                                                self->tail->next=((void*)0);
                                                                                            }
                                                                                            if(_if_conditional374=i_251>=head,                                                                                            _if_conditional374) {
                                                                                                prev_it_252=it_250;
                                                                                                it_250=it_250->next;
                                                                                                i_251++;
                                                                                                if(prev_it_252 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_250=it_250->next;
                                                                                                i_251++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        it_253=self->head;
                                                                                        head_prev_it_254=((void*)0);
                                                                                        tail_it_255=((void*)0);
                                                                                        i_256=0;
                                                                                        while(_while_condtional46=it_253!=((void*)0),                                                                                        _while_condtional46) {
                                                                                            if(_if_conditional375=i_256==head,                                                                                            _if_conditional375) {
                                                                                                head_prev_it_254=it_253->prev;
                                                                                            }
                                                                                            if(_if_conditional376=i_256==tail,                                                                                            _if_conditional376) {
                                                                                                tail_it_255=it_253;
                                                                                            }
                                                                                            if(_if_conditional377=i_256>=head&&i_256<tail,                                                                                            _if_conditional377) {
                                                                                                prev_it_257=it_253;
                                                                                                it_253=it_253->next;
                                                                                                i_256++;
                                                                                                if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                it_253=it_253->next;
                                                                                                i_256++;
                                                                                            }
                                                                                        }
                                                                                        if(_if_conditional378=head_prev_it_254!=((void*)0),                                                                                        _if_conditional378) {
                                                                                            head_prev_it_254->next=tail_it_255;
                                                                                        }
                                                                                        if(_if_conditional379=tail_it_255!=((void*)0),                                                                                        _if_conditional379) {
                                                                                            tail_it_255->prev=head_prev_it_254;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            __result128__ = __result_obj__ = self;
                                                                            return __result128__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_245;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_246;
struct list$1charp* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_245, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
                                                                                    it_245=self->head;
                                                                                    while(_while_condtional43=it_245!=((void*)0),                                                                                    _while_condtional43) {
                                                                                        prev_it_246=it_245;
                                                                                        it_245=it_245->next;
                                                                                        if(prev_it_246 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    }
                                                                                    self->head=((void*)0);
                                                                                    self->tail=((void*)0);
                                                                                    self->len=0;
                                                                                    __result127__ = __result_obj__ = self;
                                                                                    return __result127__;
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
_Bool _if_conditional385;
char* result_259;
char* __result130__;
_Bool _if_conditional386;
char* __result131__;
char* result_260;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_259, 0, sizeof(char*));
memset(&result_260, 0, sizeof(char*));
                                                if(_if_conditional385=self==((void*)0),                                                _if_conditional385) {
                                                    memset(&result_259,0,sizeof(char*));
                                                    __result130__ = __result_obj__ = result_259;
                                                    return __result130__;
                                                }
                                                self->it=self->head;
                                                if(_if_conditional386=self->it,                                                _if_conditional386) {
                                                    __result131__ = __result_obj__ = self->it->item;
                                                    return __result131__;
                                                }
                                                memset(&result_260,0,sizeof(char*));
                                                __result132__ = __result_obj__ = result_260;
                                                return __result132__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result133__ = self==((void*)0)||self->it==((void*)0);
                                                return __result133__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional387;
char* result_262;
char* __result134__;
_Bool _if_conditional388;
char* __result135__;
char* result_263;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_262, 0, sizeof(char*));
memset(&result_263, 0, sizeof(char*));
                                                if(_if_conditional387=self==((void*)0)||self->it==((void*)0),                                                _if_conditional387) {
                                                    memset(&result_262,0,sizeof(char*));
                                                    __result134__ = __result_obj__ = result_262;
                                                    return __result134__;
                                                }
                                                self->it=self->it->next;
                                                if(_if_conditional388=self->it,                                                _if_conditional388) {
                                                    __result135__ = __result_obj__ = self->it->item;
                                                    return __result135__;
                                                }
                                                memset(&result_263,0,sizeof(char*));
                                                __result136__ = __result_obj__ = result_263;
                                                return __result136__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional391;
void* right_value291;
struct list_item$1charp* litem_264;
_Bool _if_conditional392;
void* right_value292;
struct list_item$1charp* litem_265;
void* right_value293;
struct list_item$1charp* litem_266;
struct list$1charp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value291, 0, sizeof(void*));
memset(&litem_264, 0, sizeof(struct list_item$1charp*));
memset(&right_value292, 0, sizeof(void*));
memset(&litem_265, 0, sizeof(struct list_item$1charp*));
memset(&right_value293, 0, sizeof(void*));
memset(&litem_266, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional391=self->len==0,                                                    _if_conditional391) {
                                                        litem_264=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value291=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
                                                        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value291;
                                                        __freed_obj__ = 0;
                                                        litem_264->prev=((void*)0);
                                                        litem_264->next=((void*)0);
                                                        litem_264->item=item;
                                                        self->tail=litem_264;
                                                        self->head=litem_264;
                                                    }
                                                    else {
                                                        if(_if_conditional392=self->len==1,                                                        _if_conditional392) {
                                                            litem_265=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value292=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                                                            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value292;
                                                            __freed_obj__ = 0;
                                                            litem_265->prev=self->head;
                                                            litem_265->next=((void*)0);
                                                            litem_265->item=item;
                                                            self->tail=litem_265;
                                                            self->head->next=litem_265;
                                                        }
                                                        else {
                                                            litem_266=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value293=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
                                                            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value293;
                                                            __freed_obj__ = 0;
                                                            litem_266->prev=self->tail;
                                                            litem_266->next=((void*)0);
                                                            litem_266->item=item;
                                                            self->tail->next=litem_266;
                                                            self->tail=litem_266;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result137__ = __result_obj__ = self;
                                                    return __result137__;
}

