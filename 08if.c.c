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
struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};
struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};
struct sIfNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    struct sBlock* mElseBlock;
    int sline;
    char* sname;
};
struct sOrStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    int sline;
    char* sname;
};
struct sAndStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
_Bool sIfNode_terminated();

char* sIfNode_kind();

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
int sIfNode_sline(struct sIfNode* self, struct sInfo* info);

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info);

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sOrStatmentNode_terminated();

char* sOrStatmentNode_kind();

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info);

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info);

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sAndStatmentNode_terminated();

char* sAndStatmentNode_kind();

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info);

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

static void sIfNode_finalize(struct sIfNode* self);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value41;
struct sBlock* __dec_obj15;
void* right_value42;
struct list$1sNodeph* __dec_obj16;
void* right_value49;
struct list$1sBlockph* __dec_obj20;
_Bool _if_conditional105;
void* right_value50;
struct sBlock* __dec_obj21;
struct sBlock* __dec_obj22;
struct sIfNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
    # 19 "08if.c"
    self->sline=info->sline;
    # 20 "08if.c"
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    # 22 "08if.c"
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value12;
    __freed_obj__ = 0;
    # 23 "08if.c"
    __dec_obj15=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value41=sBlock_clone(if_block))));
    if(__dec_obj15) { come_call_finalizer(sBlock_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value41;
    __freed_obj__ = 0;
    # 24 "08if.c"
    __dec_obj16=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodephp_clone(elif_expression_nodes))));
    if(__dec_obj16) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value42;
    __freed_obj__ = 0;
    # 25 "08if.c"
    __dec_obj20=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value49=list$1sBlockphp_clone(elif_blocks))));
    if(__dec_obj20) { come_call_finalizer(list$1sBlockph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value49;
    __freed_obj__ = 0;
    # 26 "08if.c"
    self->mElifNum=elif_num;
    # 35 "08if.c"
    # 28 "08if.c"
    if(_if_conditional105=else_block,    _if_conditional105) {
        # 29 "08if.c"
        __dec_obj21=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value50=sBlock_clone(else_block))));
        if(__dec_obj21) { come_call_finalizer(sBlock_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50;
        __freed_obj__ = 0;
    }
    else {
        # 32 "08if.c"
        __dec_obj22=self->mElseBlock;
        self->mElseBlock=((void*)0);
        if(__dec_obj22) { come_call_finalizer(sBlock_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 35 "08if.c"
    __result57__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result57__;
    if(self && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sNode* __result13__;
void* right_value11;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sNode*));
        # 3 "sNode_clone"
        # 2 "sNode_clone"
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            # 2 "sNode_clone"
            __result13__ = __result_obj__ = (void*)0;
            return __result13__;
        }
        # 3 "sNode_clone"
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value11;
        __freed_obj__ = 0;
        # 5 "sNode_clone"
        # 4 "sNode_clone"
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional6) {
            # 4 "sNode_clone"
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        # 6 "sNode_clone"
        # 5 "sNode_clone"
        if(_if_conditional7=self!=((void*)0),        _if_conditional7) {
            # 5 "sNode_clone"
            result_5->finalize=self->finalize;
        }
        # 7 "sNode_clone"
        # 6 "sNode_clone"
        if(_if_conditional8=self!=((void*)0),        _if_conditional8) {
            # 6 "sNode_clone"
            result_5->clone=self->clone;
        }
        # 8 "sNode_clone"
        # 7 "sNode_clone"
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            # 7 "sNode_clone"
            result_5->compile=self->compile;
        }
        # 9 "sNode_clone"
        # 8 "sNode_clone"
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            # 8 "sNode_clone"
            result_5->sline=self->sline;
        }
        # 10 "sNode_clone"
        # 9 "sNode_clone"
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            # 9 "sNode_clone"
            result_5->sname=self->sname;
        }
        # 11 "sNode_clone"
        # 10 "sNode_clone"
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            # 10 "sNode_clone"
            result_5->terminated=self->terminated;
        }
        # 12 "sNode_clone"
        # 11 "sNode_clone"
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            # 11 "sNode_clone"
            result_5->kind=self->kind;
        }
        # 12 "sNode_clone"
        __result14__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0); } 
        return __result14__;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
struct sBlock* __result15__;
void* right_value13;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value20;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value40;
struct sVarTable* __dec_obj14;
struct sBlock* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct sBlock*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            # 2 "sBlock_clone"
            __result15__ = __result_obj__ = (void*)0;
            return __result15__;
        }
        # 3 "sBlock_clone"
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            # 4 "sBlock_clone"
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            # 5 "sBlock_clone"
            __dec_obj14=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value40=sVarTable_clone(self->mVarTable))));
            if(__dec_obj14) { come_call_finalizer(sVarTable_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
        }
        # 6 "sBlock_clone"
        __result52__ = __result_obj__ = result_6;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result52__;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                # 0 "sBlock_finalize"
                if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                # 1 "sBlock_finalize"
                if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_7;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    # 176 "./comelang2.h"
                    it_7=self->head;
                    # 182 "./comelang2.h"
                    while(_while_condtional1=it_7!=((void*)0),                    _while_condtional1) {
                        # 178 "./comelang2.h"
                        prev_it_8=it_7;
                        # 179 "./comelang2.h"
                        it_7=it_7->next;
                        # 180 "./comelang2.h"
                        if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
struct list$1sNodeph* __result16__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value19;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    # 193 "./comelang2.h"
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                # 195 "./comelang2.h"
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value15;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_10=self->head;
                # 204 "./comelang2.h"
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    # 199 "./comelang2.h"
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(it_10->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value19;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_10=it_10->next;
                }
                # 204 "./comelang2.h"
                __result19__ = __result_obj__ = result_9;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result19__;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result17__;
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
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result17__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
void* right_value16;
struct list_item$1sNodeph* litem_11;
struct sNode* __dec_obj8;
_Bool _if_conditional21;
void* right_value17;
struct list_item$1sNodeph* litem_12;
struct sNode* __dec_obj9;
void* right_value18;
struct list_item$1sNodeph* litem_13;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            # 209 "./comelang2.h"
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value16;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            litem_11->prev=((void*)0);
                            # 212 "./comelang2.h"
                            litem_11->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            # 215 "./comelang2.h"
                            self->tail=litem_11;
                            # 216 "./comelang2.h"
                            self->head=litem_11;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional21=self->len==1,                            _if_conditional21) {
                                # 219 "./comelang2.h"
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                litem_12->prev=self->head;
                                # 222 "./comelang2.h"
                                litem_12->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                # 225 "./comelang2.h"
                                self->tail=litem_12;
                                # 226 "./comelang2.h"
                                self->head->next=litem_12;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value18;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                litem_13->prev=self->tail;
                                # 232 "./comelang2.h"
                                litem_13->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj10=litem_13->item;
                                litem_13->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                # 235 "./comelang2.h"
                                self->tail->next=litem_13;
                                # 236 "./comelang2.h"
                                self->tail=litem_13;
                            }
                        }
                        # 239 "./comelang2.h"
                        self->len++;
                        # 241 "./comelang2.h"
                        __result18__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result18__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
struct sVarTable* __result20__;
void* right_value21;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value39;
struct map$2charphsVarph* __dec_obj13;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sVarTable* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sVarTable*));
memset(&right_value39, 0, sizeof(void*));
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    # 2 "sVarTable_clone"
                    __result20__ = __result_obj__ = (void*)0;
                    return __result20__;
                }
                # 3 "sVarTable_clone"
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    # 4 "sVarTable_clone"
                    __dec_obj13=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value39=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj13) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value39;
                    __freed_obj__ = 0;
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 5 "sVarTable_clone"
                    result_14->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 6 "sVarTable_clone"
                    result_14->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 7 "sVarTable_clone"
                    result_14->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result51__ = __result_obj__ = result_14;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result51__;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct map$2charphsVarph* __result21__;
void* right_value22;
void* right_value28;
struct map$2charphsVarph* result_24;
char* it_27;
_Bool _for_condtionalA4;
struct sVar* default_value_30;
struct sVar* it2_34;
struct map$2charphsVarph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&it2_34, 0, sizeof(struct sVar*));
                        # 1222 "./comelang2.h"
                        # 1219 "./comelang2.h"
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            # 1220 "./comelang2.h"
                            __result21__ = __result_obj__ = ((void*)0);
                            return __result21__;
                        }
                        # 1222 "./comelang2.h"
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1222))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value28;
                        __freed_obj__ = 0;
                        # 1233 "./comelang2.h"
                        for(
                        it_27=map$2charphsVarph_begin(self) ,                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(self) ,                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(self) ,                        0                        ){
                            # 1225 "./comelang2.h"
                            # 1226 "./comelang2.h"
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            # 1228 "./comelang2.h"
                            it2_34=map$2charphsVarph_at(self,it_27,default_value_30);
                            # 1230 "./comelang2.h"
                            map$2charphsVarph_insert2(result_24,it_27,it2_34);
                        }
                        # 1233 "./comelang2.h"
                        __result50__ = __result_obj__ = result_24;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result50__;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
void* right_value24;
void* right_value25;
int i_19;
_Bool _for_condtionalA1;
void* right_value26;
void* right_value27;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
                            # 1129 "./comelang2.h"
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1129))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value23;
                            __freed_obj__ = 0;
                            # 1130 "./comelang2.h"
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1130))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value24;
                            __freed_obj__ = 0;
                            # 1131 "./comelang2.h"
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1131))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value25;
                            __freed_obj__ = 0;
                            # 1138 "./comelang2.h"
                            for(
                            i_19=0 ,                            0;                            _for_condtionalA1=                            i_19<1024 ,                            _for_condtionalA1;                            i_19++ ,                            0                            ){
                                # 1135 "./comelang2.h"
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            # 1138 "./comelang2.h"
                            self->size=1024;
                            # 1139 "./comelang2.h"
                            self->len=0;
                            # 1141 "./comelang2.h"
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1141))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value26);
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value26;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value27;
                            __freed_obj__ = 0;
                            # 1143 "./comelang2.h"
                            self->it=0;
                            # 1145 "./comelang2.h"
                            __result23__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result23__;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    # 0 "sVar_finalize"
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    # 1 "sVar_finalize"
                                    if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    # 2 "sVar_finalize"
                                    if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional44=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional44) {
                                    # 3 "sVar_finalize"
                                    if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional29) {
                                            # 0 "sType_finalize"
                                            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional31) {
                                            # 1 "sType_finalize"
                                            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional32) {
                                            # 2 "sType_finalize"
                                            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional33) {
                                            # 3 "sType_finalize"
                                            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional35) {
                                            # 4 "sType_finalize"
                                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional36=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional36) {
                                            # 5 "sType_finalize"
                                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional37) {
                                            # 6 "sType_finalize"
                                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional39=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional39) {
                                            # 7 "sType_finalize"
                                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional40=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional40) {
                                            # 8 "sType_finalize"
                                            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional41=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional41) {
                                            # 9 "sType_finalize"
                                            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional42=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional42) {
                                            # 10 "sType_finalize"
                                            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional43=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional43) {
                                            # 11 "sType_finalize"
                                            if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional30) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_15;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                # 176 "./comelang2.h"
                                                it_15=self->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional3=it_15!=((void*)0),                                                _while_condtional3) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_16=it_15;
                                                    # 179 "./comelang2.h"
                                                    it_15=it_15->next;
                                                    # 180 "./comelang2.h"
                                                    if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional34) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_17;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                # 176 "./comelang2.h"
                                                it_17=self->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional4=it_17!=((void*)0),                                                _while_condtional4) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_18=it_17;
                                                    # 179 "./comelang2.h"
                                                    it_17=it_17->next;
                                                    # 180 "./comelang2.h"
                                                    if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional38=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional38) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 157 "./comelang2.h"
                                self->head=((void*)0);
                                # 158 "./comelang2.h"
                                self->tail=((void*)0);
                                # 159 "./comelang2.h"
                                self->len=0;
                                # 161 "./comelang2.h"
                                __result22__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result22__;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_20;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    # 176 "./comelang2.h"
                                    it_20=self->head;
                                    # 182 "./comelang2.h"
                                    while(_while_condtional5=it_20!=((void*)0),                                    _while_condtional5) {
                                        # 178 "./comelang2.h"
                                        prev_it_21=it_20;
                                        # 179 "./comelang2.h"
                                        it_20=it_20->next;
                                        # 180 "./comelang2.h"
                                        if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
int i_22;
_Bool _for_condtionalA2;
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_23;
_Bool _for_condtionalA3;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                # 1179 "./comelang2.h"
                                for(
                                i_22=0 ,                                0;                                _for_condtionalA2=                                i_22<self->size ,                                _for_condtionalA2;                                i_22++ ,                                0                                ){
                                    # 1178 "./comelang2.h"
                                    # 1173 "./comelang2.h"
                                    if(_if_conditional45=self->item_existance[i_22],                                    _if_conditional45) {
                                        # 1177 "./comelang2.h"
                                        # 1174 "./comelang2.h"
                                        if(_if_conditional46=1,                                        _if_conditional46) {
                                            # 1175 "./comelang2.h"
                                            if(self->items[i_22] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                    }
                                }
                                # 1179 "./comelang2.h"
                                come_free_object((char*)self->items);
                                # 1188 "./comelang2.h"
                                for(
                                i_23=0 ,                                0;                                _for_condtionalA3=                                i_23<self->size ,                                _for_condtionalA3;                                i_23++ ,                                0                                ){
                                    # 1187 "./comelang2.h"
                                    # 1182 "./comelang2.h"
                                    if(_if_conditional47=self->item_existance[i_23],                                    _if_conditional47) {
                                        # 1186 "./comelang2.h"
                                        # 1183 "./comelang2.h"
                                        if(_if_conditional48=1,                                        _if_conditional48) {
                                            # 1184 "./comelang2.h"
                                            if(self->keys[i_23] && !__freed_obj__) { self->keys[i_23] = come_decrement_ref_count(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0); }
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
char* result_25;
char* __result24__;
_Bool _if_conditional50;
char* __result25__;
char* result_26;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            # 1343 "./comelang2.h"
                            # 1338 "./comelang2.h"
                            if(_if_conditional49=self==((void*)0),                            _if_conditional49) {
                                # 1339 "./comelang2.h"
                                # 1340 "./comelang2.h"
                                memset(&result_25,0,sizeof(char*));
                                # 1341 "./comelang2.h"
                                __result24__ = __result_obj__ = result_25;
                                return __result24__;
                            }
                            # 1343 "./comelang2.h"
                            self->key_list->it=self->key_list->head;
                            # 1349 "./comelang2.h"
                            # 1345 "./comelang2.h"
                            if(_if_conditional50=self->key_list->it,                            _if_conditional50) {
                                # 1346 "./comelang2.h"
                                __result25__ = __result_obj__ = self->key_list->it->item;
                                return __result25__;
                            }
                            # 1349 "./comelang2.h"
                            # 1350 "./comelang2.h"
                            memset(&result_26,0,sizeof(char*));
                            # 1351 "./comelang2.h"
                            __result26__ = __result_obj__ = result_26;
                            return __result26__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1372 "./comelang2.h"
                            __result27__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result27__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
char* result_28;
char* __result28__;
_Bool _if_conditional52;
char* __result29__;
char* result_29;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            # 1360 "./comelang2.h"
                            # 1355 "./comelang2.h"
                            if(_if_conditional51=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional51) {
                                # 1356 "./comelang2.h"
                                # 1357 "./comelang2.h"
                                memset(&result_28,0,sizeof(char*));
                                # 1358 "./comelang2.h"
                                __result28__ = __result_obj__ = result_28;
                                return __result28__;
                            }
                            # 1360 "./comelang2.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1366 "./comelang2.h"
                            # 1362 "./comelang2.h"
                            if(_if_conditional52=self->key_list->it,                            _if_conditional52) {
                                # 1363 "./comelang2.h"
                                __result29__ = __result_obj__ = self->key_list->it->item;
                                return __result29__;
                            }
                            # 1366 "./comelang2.h"
                            # 1367 "./comelang2.h"
                            memset(&result_29,0,sizeof(char*));
                            # 1368 "./comelang2.h"
                            __result30__ = __result_obj__ = result_29;
                            return __result30__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional53;
void* right_value29;
_Bool _if_conditional55;
struct sVar* __result33__;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result34__;
struct sVar* __result35__;
struct sVar* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
memset(&right_value29, 0, sizeof(void*));
                                # 1265 "./comelang2.h"
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                # 1266 "./comelang2.h"
                                it_32=hash_31;
                                # 1290 "./comelang2.h"
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    # 1288 "./comelang2.h"
                                    # 1269 "./comelang2.h"
                                    if(_if_conditional53=self->item_existance[it_32],                                    _if_conditional53) {
                                        # 1276 "./comelang2.h"
                                        # 1271 "./comelang2.h"
                                        if(_if_conditional55=optional$2boolbool_value(((struct optional$2boolbool*)(right_value29=string_equals(self->keys[it_32],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29),
                                        (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value29, 
                                        __freed_obj__ = 0, 
                                        _if_conditional55) {
                                            # 1273 "./comelang2.h"
                                            __result33__ = __result_obj__ = self->items[it_32];
                                            return __result33__;
                                        }
                                        # 1276 "./comelang2.h"
                                        it_32++;
                                        # 1284 "./comelang2.h"
                                        # 1278 "./comelang2.h"
                                        if(_if_conditional56=it_32>=self->size,                                        _if_conditional56) {
                                            # 1279 "./comelang2.h"
                                            it_32=0;
                                        }
                                        else {
                                            # 1284 "./comelang2.h"
                                            # 1281 "./comelang2.h"
                                            if(_if_conditional57=it_32==hash_31,                                            _if_conditional57) {
                                                # 1282 "./comelang2.h"
                                                __result34__ = __result_obj__ = default_value;
                                                return __result34__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1286 "./comelang2.h"
                                        __result35__ = __result_obj__ = default_value;
                                        return __result35__;
                                    }
                                }
                                # 1290 "./comelang2.h"
                                __result36__ = __result_obj__ = default_value;
                                return __result36__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
_Bool default_value_33;
_Bool __result31__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(_Bool));
                                            # 69 "./comelang2.h"
                                            # 61 "./comelang2.h"
                                            if(_if_conditional54=self==((void*)0),                                            _if_conditional54) {
                                                # 62 "./comelang2.h"
                                                # 63 "./comelang2.h"
                                                memset(&default_value_33,0,sizeof(_Bool));
                                                # 64 "./comelang2.h"
                                                __result31__ = default_value_33;
                                                return __result31__;
                                            }
                                            else {
                                                # 67 "./comelang2.h"
                                                __result32__ = self->v1;
                                                return __result32__;
                                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
unsigned int hash_46;
int it_47;
_Bool _while_condtional8;
_Bool _if_conditional62;
void* right_value33;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool same_key_exist_64;
char* it2_67;
_Bool _for_condtionalA6;
void* right_value35;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct map$2charphsVarph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
memset(&same_key_exist_64, 0, sizeof(_Bool));
memset(&it2_67, 0, sizeof(char*));
memset(&right_value35, 0, sizeof(void*));
                                # 1509 "./comelang2.h"
                                # 1506 "./comelang2.h"
                                if(_if_conditional58=self->len*2>=self->size,                                _if_conditional58) {
                                    # 1507 "./comelang2.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1509 "./comelang2.h"
                                hash_46=string_get_hash_key(key)%self->size;
                                # 1510 "./comelang2.h"
                                it_47=hash_46;
                                # 1568 "./comelang2.h"
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    # 1566 "./comelang2.h"
                                    # 1513 "./comelang2.h"
                                    if(_if_conditional62=self->item_existance[it_47],                                    _if_conditional62) {
                                        # 1536 "./comelang2.h"
                                        # 1515 "./comelang2.h"
                                        if(_if_conditional63=optional$2boolbool_value(((struct optional$2boolbool*)(right_value33=string_equals(self->keys[it_47],key)))),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33),
                                        (right_value33 && right_value33 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value33, 
                                        __freed_obj__ = 0, 
                                        _if_conditional63) {
                                            # 1526 "./comelang2.h"
                                            # 1517 "./comelang2.h"
                                            if(_if_conditional64=1,                                            _if_conditional64) {
                                                # 1518 "./comelang2.h"
                                                if(self->keys[it_47] && !__freed_obj__) { self->keys[it_47] = come_decrement_ref_count(self->keys[it_47], (void*)0, (void*)0, 0, 0, 0); }
                                                # 1519 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                # 1520 "./comelang2.h"
                                                self->keys[it_47]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1523 "./comelang2.h"
                                                list$1charp_remove(self->key_list,self->keys[it_47]);
                                                # 1524 "./comelang2.h"
                                                self->keys[it_47]=key;
                                            }
                                            # 1533 "./comelang2.h"
                                            # 1526 "./comelang2.h"
                                            if(_if_conditional84=1,                                            _if_conditional84) {
                                                # 1527 "./comelang2.h"
                                                if(self->items[it_47] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_47], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                # 1528 "./comelang2.h"
                                                self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1531 "./comelang2.h"
                                                self->items[it_47]=item;
                                            }
                                            # 1533 "./comelang2.h"
                                            break;
                                        }
                                        # 1536 "./comelang2.h"
                                        it_47++;
                                        # 1546 "./comelang2.h"
                                        # 1538 "./comelang2.h"
                                        if(_if_conditional85=it_47>=self->size,                                        _if_conditional85) {
                                            # 1539 "./comelang2.h"
                                            it_47=0;
                                        }
                                        else {
                                            # 1546 "./comelang2.h"
                                            # 1541 "./comelang2.h"
                                            if(_if_conditional86=it_47==hash_46,                                            _if_conditional86) {
                                                # 1542 "./comelang2.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1543 "./comelang2.h"
                                                stackframe();
                                                # 1544 "./comelang2.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1548 "./comelang2.h"
                                        self->item_existance[it_47]=(_Bool)1;
                                        # 1555 "./comelang2.h"
                                        # 1549 "./comelang2.h"
                                        if(_if_conditional87=1,                                        _if_conditional87) {
                                            # 1550 "./comelang2.h"
                                            self->keys[it_47]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1553 "./comelang2.h"
                                            self->keys[it_47]=key;
                                        }
                                        # 1562 "./comelang2.h"
                                        # 1555 "./comelang2.h"
                                        if(_if_conditional88=1,                                        _if_conditional88) {
                                            # 1556 "./comelang2.h"
                                            self->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1559 "./comelang2.h"
                                            self->items[it_47]=item;
                                        }
                                        # 1562 "./comelang2.h"
                                        self->len++;
                                        # 1564 "./comelang2.h"
                                        break;
                                    }
                                }
                                # 1568 "./comelang2.h"
                                same_key_exist_64=(_Bool)0;
                                # 1576 "./comelang2.h"
                                for(
                                it2_67=list$1charp_begin(self->key_list) ,                                0;                                _for_condtionalA6=                                !list$1charp_end(self->key_list) ,                                _for_condtionalA6;                                it2_67=list$1charp_next(self->key_list) ,                                0                                ){
                                    # 1574 "./comelang2.h"
                                    # 1571 "./comelang2.h"
                                    if(_if_conditional93=optional$2boolbool_value(((struct optional$2boolbool*)(right_value35=string_equals(it2_67,key)))),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35),
                                    (right_value35 && right_value35 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value35, 
                                    __freed_obj__ = 0, 
                                    _if_conditional93) {
                                        # 1572 "./comelang2.h"
                                        same_key_exist_64=(_Bool)1;
                                    }
                                }
                                # 1580 "./comelang2.h"
                                # 1576 "./comelang2.h"
                                if(_if_conditional94=!same_key_exist_64,                                _if_conditional94) {
                                    # 1577 "./comelang2.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1580 "./comelang2.h"
                                __result49__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result49__;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_35;
void* right_value30;
char** keys_36;
void* right_value31;
struct sVar** items_37;
void* right_value32;
_Bool* item_existance_38;
int len_39;
char* it_40;
_Bool _for_condtionalA5;
struct sVar* default_value_41;
struct sVar* it2_42;
unsigned int hash_43;
int n_44;
_Bool _while_condtional7;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sVar* default_value_45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_35, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&keys_36, 0, sizeof(char**));
memset(&right_value31, 0, sizeof(void*));
memset(&items_37, 0, sizeof(struct sVar**));
memset(&right_value32, 0, sizeof(void*));
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_40, 0, sizeof(char*));
memset(&default_value_41, 0, sizeof(struct sVar*));
memset(&it2_42, 0, sizeof(struct sVar*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&n_44, 0, sizeof(int));
memset(&default_value_45, 0, sizeof(struct sVar*));
                                        # 1376 "./comelang2.h"
                                        size_35=self->size*10;
                                        # 1377 "./comelang2.h"
                                        keys_36=(char**)come_increment_ref_count(((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1377))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value30;
                                        __freed_obj__ = 0;
                                        # 1378 "./comelang2.h"
                                        items_37=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value31=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_35)), "./comelang2.h", 1378))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
                                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value31;
                                        __freed_obj__ = 0;
                                        # 1379 "./comelang2.h"
                                        item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value32=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1379))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value32);
                                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value32;
                                        __freed_obj__ = 0;
                                        # 1381 "./comelang2.h"
                                        len_39=0;
                                        # 1416 "./comelang2.h"
                                        for(
                                        it_40=map$2charphsVarph_begin(self) ,                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(self) ,                                        _for_condtionalA5;                                        it_40=map$2charphsVarph_next(self) ,                                        0                                        ){
                                            # 1384 "./comelang2.h"
                                            # 1385 "./comelang2.h"
                                            memset(&default_value_41,0,sizeof(struct sVar*));
                                            # 1386 "./comelang2.h"
                                            it2_42=map$2charphsVarph_at(self,it_40,default_value_41);
                                            # 1387 "./comelang2.h"
                                            hash_43=string_get_hash_key(it_40)%size_35;
                                            # 1388 "./comelang2.h"
                                            n_44=hash_43;
                                            # 1414 "./comelang2.h"
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                # 1413 "./comelang2.h"
                                                # 1391 "./comelang2.h"
                                                if(_if_conditional59=item_existance_38[n_44],                                                _if_conditional59) {
                                                    # 1393 "./comelang2.h"
                                                    n_44++;
                                                    # 1403 "./comelang2.h"
                                                    # 1395 "./comelang2.h"
                                                    if(_if_conditional60=n_44>=size_35,                                                    _if_conditional60) {
                                                        # 1396 "./comelang2.h"
                                                        n_44=0;
                                                    }
                                                    else {
                                                        # 1403 "./comelang2.h"
                                                        # 1398 "./comelang2.h"
                                                        if(_if_conditional61=n_44==hash_43,                                                        _if_conditional61) {
                                                            # 1399 "./comelang2.h"
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            # 1400 "./comelang2.h"
                                                            stackframe();
                                                            # 1401 "./comelang2.h"
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1405 "./comelang2.h"
                                                    item_existance_38[n_44]=(_Bool)1;
                                                    # 1406 "./comelang2.h"
                                                    keys_36[n_44]=it_40;
                                                    # 1407 "./comelang2.h"
                                                    # 1408 "./comelang2.h"
                                                    items_37[n_44]=map$2charphsVarph_at(self,it_40,default_value_45);
                                                    # 1410 "./comelang2.h"
                                                    len_39++;
                                                    # 1411 "./comelang2.h"
                                                    break;
                                                }
                                            }
                                        }
                                        # 1416 "./comelang2.h"
                                        come_free_object((char*)self->items);
                                        # 1417 "./comelang2.h"
                                        if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        # 1418 "./comelang2.h"
                                        come_free_object((char*)self->keys);
                                        # 1420 "./comelang2.h"
                                        self->keys=keys_36;
                                        # 1421 "./comelang2.h"
                                        self->items=items_37;
                                        # 1422 "./comelang2.h"
                                        self->item_existance=item_existance_38;
                                        # 1424 "./comelang2.h"
                                        self->size=size_35;
                                        # 1425 "./comelang2.h"
                                        self->len=len_39;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_48;
struct list_item$1charp* it_49;
_Bool _while_condtional9;
void* right_value34;
_Bool _if_conditional65;
struct list$1charp* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_48, 0, sizeof(int));
memset(&it_49, 0, sizeof(struct list_item$1charp*));
memset(&right_value34, 0, sizeof(void*));
                                                    # 498 "./comelang2.h"
                                                    it2_48=0;
                                                    # 499 "./comelang2.h"
                                                    it_49=self->head;
                                                    # 510 "./comelang2.h"
                                                    while(_while_condtional9=it_49!=((void*)0),                                                    _while_condtional9) {
                                                        # 505 "./comelang2.h"
                                                        # 501 "./comelang2.h"
                                                        if(_if_conditional65=optional$2boolbool_value(((struct optional$2boolbool*)(right_value34=string_equals(it_49->item,item)))),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34),
                                                        (right_value34 && right_value34 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value34, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional65) {
                                                            # 502 "./comelang2.h"
                                                            list$1charp_delete(self,it2_48,it2_48+1);
                                                            # 503 "./comelang2.h"
                                                            break;
                                                        }
                                                        # 505 "./comelang2.h"
                                                        it2_48++;
                                                        # 507 "./comelang2.h"
                                                        it_49=it_49->next;
                                                    }
                                                    # 510 "./comelang2.h"
                                                    __result40__ = __result_obj__ = self;
                                                    return __result40__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
int tmp_50;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct list$1charp* __result37__;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list_item$1charp* it_53;
int i_54;
_Bool _while_condtional11;
_Bool _if_conditional74;
struct list_item$1charp* prev_it_55;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list_item$1charp* it_56;
int i_57;
_Bool _while_condtional12;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* prev_it_58;
struct list_item$1charp* it_59;
struct list_item$1charp* head_prev_it_60;
struct list_item$1charp* tail_it_61;
int i_62;
_Bool _while_condtional13;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list_item$1charp* prev_it_63;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_50, 0, sizeof(int));
memset(&it_53, 0, sizeof(struct list_item$1charp*));
memset(&i_54, 0, sizeof(int));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
                                                                # 517 "./comelang2.h"
                                                                # 514 "./comelang2.h"
                                                                if(_if_conditional66=head<0,                                                                _if_conditional66) {
                                                                    # 515 "./comelang2.h"
                                                                    head+=self->len;
                                                                }
                                                                # 521 "./comelang2.h"
                                                                # 517 "./comelang2.h"
                                                                if(_if_conditional67=tail<0,                                                                _if_conditional67) {
                                                                    # 518 "./comelang2.h"
                                                                    tail+=self->len+1;
                                                                }
                                                                # 527 "./comelang2.h"
                                                                # 521 "./comelang2.h"
                                                                if(_if_conditional68=head>tail,                                                                _if_conditional68) {
                                                                    # 522 "./comelang2.h"
                                                                    tmp_50=tail;
                                                                    # 523 "./comelang2.h"
                                                                    tail=head;
                                                                    # 524 "./comelang2.h"
                                                                    head=tmp_50;
                                                                }
                                                                # 531 "./comelang2.h"
                                                                # 527 "./comelang2.h"
                                                                if(_if_conditional69=head<0,                                                                _if_conditional69) {
                                                                    # 528 "./comelang2.h"
                                                                    head=0;
                                                                }
                                                                # 535 "./comelang2.h"
                                                                # 531 "./comelang2.h"
                                                                if(_if_conditional70=tail>self->len,                                                                _if_conditional70) {
                                                                    # 532 "./comelang2.h"
                                                                    tail=self->len;
                                                                }
                                                                # 539 "./comelang2.h"
                                                                # 535 "./comelang2.h"
                                                                if(_if_conditional71=head==tail,                                                                _if_conditional71) {
                                                                    # 536 "./comelang2.h"
                                                                    __result37__ = __result_obj__ = self;
                                                                    return __result37__;
                                                                }
                                                                # 634 "./comelang2.h"
                                                                # 539 "./comelang2.h"
                                                                if(_if_conditional72=head==0&&tail==self->len,                                                                _if_conditional72) {
                                                                    # 541 "./comelang2.h"
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    # 634 "./comelang2.h"
                                                                    # 543 "./comelang2.h"
                                                                    if(_if_conditional73=head==0,                                                                    _if_conditional73) {
                                                                        # 544 "./comelang2.h"
                                                                        it_53=self->head;
                                                                        # 545 "./comelang2.h"
                                                                        i_54=0;
                                                                        # 567 "./comelang2.h"
                                                                        while(_while_condtional11=it_53!=((void*)0),                                                                        _while_condtional11) {
                                                                            # 566 "./comelang2.h"
                                                                            # 547 "./comelang2.h"
                                                                            if(_if_conditional74=i_54<tail,                                                                            _if_conditional74) {
                                                                                # 548 "./comelang2.h"
                                                                                prev_it_55=it_53;
                                                                                # 550 "./comelang2.h"
                                                                                it_53=it_53->next;
                                                                                # 551 "./comelang2.h"
                                                                                i_54++;
                                                                                # 553 "./comelang2.h"
                                                                                if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                # 555 "./comelang2.h"
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                # 566 "./comelang2.h"
                                                                                # 557 "./comelang2.h"
                                                                                if(_if_conditional75=i_54==tail,                                                                                _if_conditional75) {
                                                                                    # 558 "./comelang2.h"
                                                                                    self->head=it_53;
                                                                                    # 559 "./comelang2.h"
                                                                                    self->head->prev=((void*)0);
                                                                                    # 560 "./comelang2.h"
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    # 563 "./comelang2.h"
                                                                                    it_53=it_53->next;
                                                                                    # 564 "./comelang2.h"
                                                                                    i_54++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 634 "./comelang2.h"
                                                                        # 568 "./comelang2.h"
                                                                        if(_if_conditional76=tail==self->len,                                                                        _if_conditional76) {
                                                                            # 569 "./comelang2.h"
                                                                            it_56=self->head;
                                                                            # 570 "./comelang2.h"
                                                                            i_57=0;
                                                                            # 592 "./comelang2.h"
                                                                            while(_while_condtional12=it_56!=((void*)0),                                                                            _while_condtional12) {
                                                                                # 577 "./comelang2.h"
                                                                                # 572 "./comelang2.h"
                                                                                if(_if_conditional77=i_57==head,                                                                                _if_conditional77) {
                                                                                    # 573 "./comelang2.h"
                                                                                    self->tail=it_56->prev;
                                                                                    # 574 "./comelang2.h"
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                # 591 "./comelang2.h"
                                                                                # 577 "./comelang2.h"
                                                                                if(_if_conditional78=i_57>=head,                                                                                _if_conditional78) {
                                                                                    # 578 "./comelang2.h"
                                                                                    prev_it_58=it_56;
                                                                                    # 580 "./comelang2.h"
                                                                                    it_56=it_56->next;
                                                                                    # 581 "./comelang2.h"
                                                                                    i_57++;
                                                                                    # 583 "./comelang2.h"
                                                                                    if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    # 585 "./comelang2.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 588 "./comelang2.h"
                                                                                    it_56=it_56->next;
                                                                                    # 589 "./comelang2.h"
                                                                                    i_57++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 594 "./comelang2.h"
                                                                            it_59=self->head;
                                                                            # 596 "./comelang2.h"
                                                                            head_prev_it_60=((void*)0);
                                                                            # 597 "./comelang2.h"
                                                                            tail_it_61=((void*)0);
                                                                            # 600 "./comelang2.h"
                                                                            i_62=0;
                                                                            # 626 "./comelang2.h"
                                                                            while(_while_condtional13=it_59!=((void*)0),                                                                            _while_condtional13) {
                                                                                # 605 "./comelang2.h"
                                                                                # 602 "./comelang2.h"
                                                                                if(_if_conditional79=i_62==head,                                                                                _if_conditional79) {
                                                                                    # 603 "./comelang2.h"
                                                                                    head_prev_it_60=it_59->prev;
                                                                                }
                                                                                # 609 "./comelang2.h"
                                                                                # 605 "./comelang2.h"
                                                                                if(_if_conditional80=i_62==tail,                                                                                _if_conditional80) {
                                                                                    # 606 "./comelang2.h"
                                                                                    tail_it_61=it_59;
                                                                                }
                                                                                # 624 "./comelang2.h"
                                                                                # 609 "./comelang2.h"
                                                                                if(_if_conditional81=i_62>=head&&i_62<tail,                                                                                _if_conditional81) {
                                                                                    # 611 "./comelang2.h"
                                                                                    prev_it_63=it_59;
                                                                                    # 613 "./comelang2.h"
                                                                                    it_59=it_59->next;
                                                                                    # 614 "./comelang2.h"
                                                                                    i_62++;
                                                                                    # 616 "./comelang2.h"
                                                                                    if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    # 618 "./comelang2.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 621 "./comelang2.h"
                                                                                    it_59=it_59->next;
                                                                                    # 622 "./comelang2.h"
                                                                                    i_62++;
                                                                                }
                                                                            }
                                                                            # 629 "./comelang2.h"
                                                                            # 626 "./comelang2.h"
                                                                            if(_if_conditional82=head_prev_it_60!=((void*)0),                                                                            _if_conditional82) {
                                                                                # 627 "./comelang2.h"
                                                                                head_prev_it_60->next=tail_it_61;
                                                                            }
                                                                            # 632 "./comelang2.h"
                                                                            # 629 "./comelang2.h"
                                                                            if(_if_conditional83=tail_it_61!=((void*)0),                                                                            _if_conditional83) {
                                                                                # 630 "./comelang2.h"
                                                                                tail_it_61->prev=head_prev_it_60;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                # 634 "./comelang2.h"
                                                                __result39__ = __result_obj__ = self;
                                                                return __result39__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_51;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_52;
struct list$1charp* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_51, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charp*));
                                                                        # 483 "./comelang2.h"
                                                                        it_51=self->head;
                                                                        # 490 "./comelang2.h"
                                                                        while(_while_condtional10=it_51!=((void*)0),                                                                        _while_condtional10) {
                                                                            # 485 "./comelang2.h"
                                                                            prev_it_52=it_51;
                                                                            # 486 "./comelang2.h"
                                                                            it_51=it_51->next;
                                                                            # 487 "./comelang2.h"
                                                                            if(prev_it_52 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        }
                                                                        # 490 "./comelang2.h"
                                                                        self->head=((void*)0);
                                                                        # 491 "./comelang2.h"
                                                                        self->tail=((void*)0);
                                                                        # 493 "./comelang2.h"
                                                                        self->len=0;
                                                                        # 495 "./comelang2.h"
                                                                        __result38__ = __result_obj__ = self;
                                                                        return __result38__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
char* result_65;
char* __result41__;
_Bool _if_conditional90;
char* __result42__;
char* result_66;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                                    # 343 "./comelang2.h"
                                    # 338 "./comelang2.h"
                                    if(_if_conditional89=self==((void*)0),                                    _if_conditional89) {
                                        # 339 "./comelang2.h"
                                        # 340 "./comelang2.h"
                                        memset(&result_65,0,sizeof(char*));
                                        # 341 "./comelang2.h"
                                        __result41__ = __result_obj__ = result_65;
                                        return __result41__;
                                    }
                                    # 343 "./comelang2.h"
                                    self->it=self->head;
                                    # 349 "./comelang2.h"
                                    # 345 "./comelang2.h"
                                    if(_if_conditional90=self->it,                                    _if_conditional90) {
                                        # 346 "./comelang2.h"
                                        __result42__ = __result_obj__ = self->it->item;
                                        return __result42__;
                                    }
                                    # 349 "./comelang2.h"
                                    # 350 "./comelang2.h"
                                    memset(&result_66,0,sizeof(char*));
                                    # 351 "./comelang2.h"
                                    __result43__ = __result_obj__ = result_66;
                                    return __result43__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 373 "./comelang2.h"
                                    __result44__ = self==((void*)0)||self->it==((void*)0);
                                    return __result44__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
char* result_68;
char* __result45__;
_Bool _if_conditional92;
char* __result46__;
char* result_69;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                                    # 361 "./comelang2.h"
                                    # 355 "./comelang2.h"
                                    if(_if_conditional91=self==((void*)0)||self->it==((void*)0),                                    _if_conditional91) {
                                        # 356 "./comelang2.h"
                                        # 357 "./comelang2.h"
                                        memset(&result_68,0,sizeof(char*));
                                        # 358 "./comelang2.h"
                                        __result45__ = __result_obj__ = result_68;
                                        return __result45__;
                                    }
                                    # 361 "./comelang2.h"
                                    self->it=self->it->next;
                                    # 367 "./comelang2.h"
                                    # 363 "./comelang2.h"
                                    if(_if_conditional92=self->it,                                    _if_conditional92) {
                                        # 364 "./comelang2.h"
                                        __result46__ = __result_obj__ = self->it->item;
                                        return __result46__;
                                    }
                                    # 367 "./comelang2.h"
                                    # 368 "./comelang2.h"
                                    memset(&result_69,0,sizeof(char*));
                                    # 369 "./comelang2.h"
                                    __result47__ = __result_obj__ = result_69;
                                    return __result47__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
void* right_value36;
struct list_item$1charp* litem_70;
_Bool _if_conditional96;
void* right_value37;
struct list_item$1charp* litem_71;
void* right_value38;
struct list_item$1charp* litem_72;
struct list$1charp* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1charp*));
                                        # 309 "./comelang2.h"
                                        # 278 "./comelang2.h"
                                        if(_if_conditional95=self->len==0,                                        _if_conditional95) {
                                            # 279 "./comelang2.h"
                                            litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value36=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value36;
                                            __freed_obj__ = 0;
                                            # 281 "./comelang2.h"
                                            litem_70->prev=((void*)0);
                                            # 282 "./comelang2.h"
                                            litem_70->next=((void*)0);
                                            # 283 "./comelang2.h"
                                            litem_70->item=item;
                                            # 285 "./comelang2.h"
                                            self->tail=litem_70;
                                            # 286 "./comelang2.h"
                                            self->head=litem_70;
                                        }
                                        else {
                                            # 309 "./comelang2.h"
                                            # 288 "./comelang2.h"
                                            if(_if_conditional96=self->len==1,                                            _if_conditional96) {
                                                # 289 "./comelang2.h"
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value37;
                                                __freed_obj__ = 0;
                                                # 291 "./comelang2.h"
                                                litem_71->prev=self->head;
                                                # 292 "./comelang2.h"
                                                litem_71->next=((void*)0);
                                                # 293 "./comelang2.h"
                                                litem_71->item=item;
                                                # 295 "./comelang2.h"
                                                self->tail=litem_71;
                                                # 296 "./comelang2.h"
                                                self->head->next=litem_71;
                                            }
                                            else {
                                                # 299 "./comelang2.h"
                                                litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value38=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value38;
                                                __freed_obj__ = 0;
                                                # 301 "./comelang2.h"
                                                litem_72->prev=self->tail;
                                                # 302 "./comelang2.h"
                                                litem_72->next=((void*)0);
                                                # 303 "./comelang2.h"
                                                litem_72->item=item;
                                                # 305 "./comelang2.h"
                                                self->tail->next=litem_72;
                                                # 306 "./comelang2.h"
                                                self->tail=litem_72;
                                            }
                                        }
                                        # 309 "./comelang2.h"
                                        self->len++;
                                        # 311 "./comelang2.h"
                                        __result48__ = __result_obj__ = self;
                                        return __result48__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "map$2charphsVarph_finalize"
                        # 0 "map$2charphsVarph_finalize"
                        if(_if_conditional97=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional97) {
                            # 0 "map$2charphsVarph_finalize"
                            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
struct list$1sBlockph* __result53__;
void* right_value43;
void* right_value44;
struct list$1sBlockph* result_75;
struct list_item$1sBlockph* it_76;
_Bool _while_condtional15;
void* right_value48;
struct list$1sBlockph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_75, 0, sizeof(struct list$1sBlockph*));
memset(&it_76, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value48, 0, sizeof(void*));
        # 195 "./comelang2.h"
        # 192 "./comelang2.h"
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            # 193 "./comelang2.h"
            __result53__ = __result_obj__ = ((void*)0);
            return __result53__;
        }
        # 195 "./comelang2.h"
        result_75=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value44=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value43=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang2.h", 195))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value43;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value44;
        __freed_obj__ = 0;
        # 197 "./comelang2.h"
        it_76=self->head;
        # 204 "./comelang2.h"
        while(_while_condtional15=it_76!=((void*)0),        _while_condtional15) {
            # 199 "./comelang2.h"
            list$1sBlockph_add(result_75,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value48=sBlock_clone(it_76->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value48;
            __freed_obj__ = 0;
            # 201 "./comelang2.h"
            it_76=it_76->next;
        }
        # 204 "./comelang2.h"
        __result56__ = __result_obj__ = result_75;
        if(result_75 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,result_75, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result56__;
        if(result_75 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,result_75, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sBlockph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 157 "./comelang2.h"
            self->head=((void*)0);
            # 158 "./comelang2.h"
            self->tail=((void*)0);
            # 159 "./comelang2.h"
            self->len=0;
            # 161 "./comelang2.h"
            __result54__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result54__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sBlockph* it_73;
_Bool _while_condtional14;
struct list_item$1sBlockph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_73, 0, sizeof(struct list_item$1sBlockph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sBlockph*));
                # 176 "./comelang2.h"
                it_73=self->head;
                # 182 "./comelang2.h"
                while(_while_condtional14=it_73!=((void*)0),                _while_condtional14) {
                    # 178 "./comelang2.h"
                    prev_it_74=it_73;
                    # 179 "./comelang2.h"
                    it_73=it_73->next;
                    # 180 "./comelang2.h"
                    if(prev_it_74 && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "list_item$1sBlockphp_finalize"
                        # 0 "list_item$1sBlockphp_finalize"
                        if(_if_conditional102=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional102) {
                            # 0 "list_item$1sBlockphp_finalize"
                            if(self->item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value45;
struct list_item$1sBlockph* litem_77;
struct sBlock* __dec_obj17;
_Bool _if_conditional104;
void* right_value46;
struct list_item$1sBlockph* litem_78;
struct sBlock* __dec_obj18;
void* right_value47;
struct list_item$1sBlockph* litem_79;
struct sBlock* __dec_obj19;
struct list$1sBlockph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1sBlockph*));
                # 239 "./comelang2.h"
                # 208 "./comelang2.h"
                if(_if_conditional103=self->len==0,                _if_conditional103) {
                    # 209 "./comelang2.h"
                    litem_77=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value45=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 209))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value45;
                    __freed_obj__ = 0;
                    # 211 "./comelang2.h"
                    litem_77->prev=((void*)0);
                    # 212 "./comelang2.h"
                    litem_77->next=((void*)0);
                    # 213 "./comelang2.h"
                    __dec_obj17=litem_77->item;
                    litem_77->item=(struct sBlock*)come_increment_ref_count(item);
                    if(__dec_obj17) { come_call_finalizer(sBlock_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 215 "./comelang2.h"
                    self->tail=litem_77;
                    # 216 "./comelang2.h"
                    self->head=litem_77;
                }
                else {
                    # 239 "./comelang2.h"
                    # 218 "./comelang2.h"
                    if(_if_conditional104=self->len==1,                    _if_conditional104) {
                        # 219 "./comelang2.h"
                        litem_78=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value46=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 219))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value46;
                        __freed_obj__ = 0;
                        # 221 "./comelang2.h"
                        litem_78->prev=self->head;
                        # 222 "./comelang2.h"
                        litem_78->next=((void*)0);
                        # 223 "./comelang2.h"
                        __dec_obj18=litem_78->item;
                        litem_78->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj18) { come_call_finalizer(sBlock_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 225 "./comelang2.h"
                        self->tail=litem_78;
                        # 226 "./comelang2.h"
                        self->head->next=litem_78;
                    }
                    else {
                        # 229 "./comelang2.h"
                        litem_79=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value47=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 229))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value47;
                        __freed_obj__ = 0;
                        # 231 "./comelang2.h"
                        litem_79->prev=self->tail;
                        # 232 "./comelang2.h"
                        litem_79->next=((void*)0);
                        # 233 "./comelang2.h"
                        __dec_obj19=litem_79->item;
                        litem_79->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj19) { come_call_finalizer(sBlock_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 235 "./comelang2.h"
                        self->tail->next=litem_79;
                        # 236 "./comelang2.h"
                        self->tail=litem_79;
                    }
                }
                # 239 "./comelang2.h"
                self->len++;
                # 241 "./comelang2.h"
                __result55__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result55__;
                if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sIfNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 40 "08if.c"
    __result58__ = (_Bool)1;
    return __result58__;
}

char* sIfNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value51;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
    # 45 "08if.c"
    __result59__ = __result_obj__ = ((char*)(right_value51=__builtin_string("sIfNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value51;
    __freed_obj__ = 0;
    return __result59__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sBlock* else_block_80;
int elif_num_81;
struct sNode* expression_node_82;
int sline_83;
char* sname_84;
_Bool _if_conditional112;
_Bool __result60__;
void* right_value52;
struct CVALUE* conditional_value_85;
struct sBlock* if_block_86;
static int num_if_conditional_87=0;
int num_if_conditional_stack_88;
_Bool _if_conditional115;
int i_89;
_Bool _for_condtionalA7;
struct sNode* expression_node2_93;
_Bool _if_conditional118;
_Bool __result63__;
void* right_value53;
struct CVALUE* conditional_value_94;
struct sBlock* elif_node_block_98;
static int num_elif_conditional_99=0;
int num_elif_conditional_stack_100;
_Bool _if_conditional121;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&else_block_80, 0, sizeof(struct sBlock*));
memset(&elif_num_81, 0, sizeof(int));
memset(&expression_node_82, 0, sizeof(struct sNode*));
memset(&sline_83, 0, sizeof(int));
memset(&sname_84, 0, sizeof(char*));
memset(&right_value52, 0, sizeof(void*));
memset(&conditional_value_85, 0, sizeof(struct CVALUE*));
memset(&if_block_86, 0, sizeof(struct sBlock*));
memset(&num_if_conditional_stack_88, 0, sizeof(int));
memset(&i_89, 0, sizeof(int));
memset(&expression_node2_93, 0, sizeof(struct sNode*));
memset(&right_value53, 0, sizeof(void*));
memset(&conditional_value_94, 0, sizeof(struct CVALUE*));
memset(&elif_node_block_98, 0, sizeof(struct sBlock*));
memset(&num_elif_conditional_stack_100, 0, sizeof(int));
    # 50 "08if.c"
    else_block_80=self->mElseBlock;
    # 51 "08if.c"
    elif_num_81=self->mElifNum;
    # 54 "08if.c"
    expression_node_82=self->mExpressionNode;
    # 56 "08if.c"
    sline_83=info->sline;
    # 57 "08if.c"
    sname_84=info->sname;
    # 59 "08if.c"
    info->writing_source_file_position=(_Bool)1;
    # 61 "08if.c"
    info->without_semicolon=(_Bool)1;
    # 65 "08if.c"
    # 62 "08if.c"
    if(_if_conditional112=!node_compile(expression_node_82,info),    _if_conditional112) {
        # 63 "08if.c"
        __result60__ = (_Bool)0;
        return __result60__;
    }
    # 65 "08if.c"
    info->without_semicolon=(_Bool)0;
    # 67 "08if.c"
    conditional_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value52;
    __freed_obj__ = 0;
    # 68 "08if.c"
    dec_stack_ptr(1,info);
    # 70 "08if.c"
    if_block_86=self->mIfBlock;
    # 72 "08if.c"
    # 73 "08if.c"
    add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_87);
    # 74 "08if.c"
    num_if_conditional_stack_88=num_if_conditional_87;
    # 76 "08if.c"
    add_come_code(info,"if(_if_conditional%d=%s,",num_if_conditional_87,conditional_value_85->c_value);
    # 77 "08if.c"
    add_last_code_to_source_with_comma(info);
    # 78 "08if.c"
    free_right_value_objects(info,(_Bool)1);
    # 79 "08if.c"
    add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_88);
    # 81 "08if.c"
    transpile_block(if_block_86,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    # 83 "08if.c"
    add_come_code(info,"}\n");
    # 117 "08if.c"
    # 86 "08if.c"
    if(_if_conditional115=elif_num_81>0,    _if_conditional115) {
        # 115 "08if.c"
        for(
        i_89=0 ,        0;        _for_condtionalA7=        i_89<elif_num_81 ,        _for_condtionalA7;        i_89++ ,        0        ){
            # 88 "08if.c"
            expression_node2_93=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_89);
            # 90 "08if.c"
            info->writing_source_file_position=(_Bool)1;
            # 91 "08if.c"
            info->without_semicolon=(_Bool)1;
            # 95 "08if.c"
            # 92 "08if.c"
            if(_if_conditional118=!node_compile(expression_node2_93,info),            _if_conditional118) {
                # 93 "08if.c"
                __result63__ = (_Bool)0;
                if(conditional_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result63__;
            }
            # 95 "08if.c"
            info->without_semicolon=(_Bool)0;
            # 97 "08if.c"
            conditional_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value53=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = 0;
            # 98 "08if.c"
            dec_stack_ptr(1,info);
            # 100 "08if.c"
            elif_node_block_98=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_89);
            # 102 "08if.c"
            # 103 "08if.c"
            add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_99);
            # 104 "08if.c"
            num_elif_conditional_stack_100=num_elif_conditional_99;
            # 106 "08if.c"
            add_come_code(info,"else if(_elif_conditional%d=%s,",num_elif_conditional_99,conditional_value_94->c_value);
            # 107 "08if.c"
            add_last_code_to_source_with_comma(info);
            # 108 "08if.c"
            free_right_value_objects(info,(_Bool)1);
            # 109 "08if.c"
            add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_100);
            # 111 "08if.c"
            transpile_block(elif_node_block_98,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
            # 113 "08if.c"
            add_come_code(info,"}\n");
            if(conditional_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    # 125 "08if.c"
    # 117 "08if.c"
    if(_if_conditional121=else_block_80,    _if_conditional121) {
        # 118 "08if.c"
        add_come_code(info,"else {\n");
        # 120 "08if.c"
        transpile_block(else_block_80,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        # 122 "08if.c"
        add_come_code(info,"}\n");
    }
    # 125 "08if.c"
    transpiler_clear_last_code(info);
    # 127 "08if.c"
    __result66__ = (_Bool)1;
    if(conditional_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result66__;
    if(conditional_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional113=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional113) {
            # 0 "CVALUE_finalize"
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional114=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional114) {
            # 1 "CVALUE_finalize"
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional16;
_Bool _if_conditional117;
struct sNode* __result61__;
struct sNode* default_value_92;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional116=position<0,                _if_conditional116) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_90=self->head;
                # 746 "./comelang2.h"
                i_91=0;
                # 753 "./comelang2.h"
                while(_while_condtional16=it_90!=((void*)0),                _while_condtional16) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional117=position==i_91,                    _if_conditional117) {
                        # 749 "./comelang2.h"
                        __result61__ = __result_obj__ = it_90->item;
                        return __result61__;
                    }
                    # 751 "./comelang2.h"
                    it_90=it_90->next;
                    # 752 "./comelang2.h"
                    i_91++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_92,0,sizeof(struct sNode*));
                # 757 "./comelang2.h"
                __result62__ = __result_obj__ = default_value_92;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 1, 0); } 
                return __result62__;
                if(default_value_92 && !__freed_obj__) { default_value_92 = come_decrement_ref_count(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0); } 
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
struct list_item$1sBlockph* it_95;
int i_96;
_Bool _while_condtional17;
_Bool _if_conditional120;
struct sBlock* __result64__;
struct sBlock* default_value_97;
struct sBlock* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_95, 0, sizeof(struct list_item$1sBlockph*));
memset(&i_96, 0, sizeof(int));
memset(&default_value_97, 0, sizeof(struct sBlock*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional119=position<0,                _if_conditional119) {
                    # 742 "./comelang2.h"
                    position+=self->len;
                }
                # 745 "./comelang2.h"
                it_95=self->head;
                # 746 "./comelang2.h"
                i_96=0;
                # 753 "./comelang2.h"
                while(_while_condtional17=it_95!=((void*)0),                _while_condtional17) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional120=position==i_96,                    _if_conditional120) {
                        # 749 "./comelang2.h"
                        __result64__ = __result_obj__ = it_95->item;
                        return __result64__;
                    }
                    # 751 "./comelang2.h"
                    it_95=it_95->next;
                    # 752 "./comelang2.h"
                    i_96++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                memset(&default_value_97,0,sizeof(struct sBlock*));
                # 757 "./comelang2.h"
                __result65__ = __result_obj__ = default_value_97;
                if(default_value_97 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,default_value_97, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result65__;
                if(default_value_97 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,default_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sIfNode_sline(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 132 "08if.c"
    __result67__ = self->sline;
    return __result67__;
}

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value54;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
    # 137 "08if.c"
    __result68__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value54;
    __freed_obj__ = 0;
    return __result68__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
char* __dec_obj23;
void* right_value56;
struct sNode* __dec_obj24;
void* right_value57;
struct sBlock* __dec_obj25;
struct sOrStatmentNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
    # 152 "08if.c"
    self->sline=info->sline;
    # 153 "08if.c"
    __dec_obj23=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(info->sname))));
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = 0;
    # 155 "08if.c"
    __dec_obj24=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(expression_node))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    # 156 "08if.c"
    __dec_obj25=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value57=sBlock_clone(if_block))));
    if(__dec_obj25) { come_call_finalizer(sBlock_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value57;
    __freed_obj__ = 0;
    # 158 "08if.c"
    __result69__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result69__;
    if(self && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrStatmentNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 163 "08if.c"
    __result70__ = (_Bool)1;
    return __result70__;
}

char* sOrStatmentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value58;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
    # 168 "08if.c"
    __result71__ = __result_obj__ = ((char*)(right_value58=__builtin_string("sOrStatmentNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58;
    __freed_obj__ = 0;
    return __result71__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* expression_node_101;
_Bool _if_conditional125;
_Bool __result72__;
void* right_value59;
struct CVALUE* conditional_value_102;
struct sBlock* if_block_103;
static int num_or_conditional_104=0;
int num_or_conditional_stack_105;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&expression_node_101, 0, sizeof(struct sNode*));
memset(&right_value59, 0, sizeof(void*));
memset(&conditional_value_102, 0, sizeof(struct CVALUE*));
memset(&if_block_103, 0, sizeof(struct sBlock*));
memset(&num_or_conditional_stack_105, 0, sizeof(int));
    # 174 "08if.c"
    expression_node_101=self->mExpressionNode;
    # 176 "08if.c"
    info->without_semicolon=(_Bool)1;
    # 180 "08if.c"
    # 177 "08if.c"
    if(_if_conditional125=!node_compile(expression_node_101,info),    _if_conditional125) {
        # 178 "08if.c"
        __result72__ = (_Bool)0;
        return __result72__;
    }
    # 180 "08if.c"
    info->without_semicolon=(_Bool)0;
    # 183 "08if.c"
    conditional_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value59=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59;
    __freed_obj__ = 0;
    # 184 "08if.c"
    dec_stack_ptr(1,info);
    # 186 "08if.c"
    if_block_103=self->mIfBlock;
    # 188 "08if.c"
    # 189 "08if.c"
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_104);
    # 191 "08if.c"
    add_come_code(info,"if(_or_conditional%d=%s,",num_or_conditional_104,conditional_value_102->c_value);
    # 192 "08if.c"
    num_or_conditional_stack_105=num_or_conditional_104;
    # 193 "08if.c"
    add_last_code_to_source_with_comma(info);
    # 194 "08if.c"
    free_right_value_objects(info,(_Bool)1);
    # 195 "08if.c"
    add_come_code(info,"_or_conditional%d != 0) {\n",num_or_conditional_stack_105);
    # 197 "08if.c"
    transpile_block(if_block_103,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    # 199 "08if.c"
    add_come_code(info,"}\n");
    # 201 "08if.c"
    transpiler_clear_last_code(info);
    # 206 "08if.c"
    __result73__ = (_Bool)1;
    if(conditional_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result73__;
    if(conditional_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 211 "08if.c"
    __result74__ = self->sline;
    return __result74__;
}

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value60;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
    # 216 "08if.c"
    __result75__ = __result_obj__ = ((char*)(right_value60=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60;
    __freed_obj__ = 0;
    return __result75__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value61;
char* __dec_obj26;
void* right_value62;
struct sNode* __dec_obj27;
void* right_value63;
struct sBlock* __dec_obj28;
struct sAndStatmentNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
    # 231 "08if.c"
    self->sline=info->sline;
    # 232 "08if.c"
    __dec_obj26=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value61=__builtin_string(info->sname))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value61;
    __freed_obj__ = 0;
    # 234 "08if.c"
    __dec_obj27=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(expression_node))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value62;
    __freed_obj__ = 0;
    # 235 "08if.c"
    __dec_obj28=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value63=sBlock_clone(if_block))));
    if(__dec_obj28) { come_call_finalizer(sBlock_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value63;
    __freed_obj__ = 0;
    # 237 "08if.c"
    __result76__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    return __result76__;
    if(self && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndStatmentNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 242 "08if.c"
    __result77__ = (_Bool)1;
    return __result77__;
}

char* sAndStatmentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value64;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
    # 247 "08if.c"
    __result78__ = __result_obj__ = ((char*)(right_value64=__builtin_string("sAndStatmentNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value64;
    __freed_obj__ = 0;
    return __result78__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* expression_node_106;
_Bool _if_conditional129;
_Bool __result79__;
void* right_value65;
struct CVALUE* conditional_value_107;
struct sBlock* if_block_108;
static int num_and_conditional_109=0;
int num_and_conditional_stack_110;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&expression_node_106, 0, sizeof(struct sNode*));
memset(&right_value65, 0, sizeof(void*));
memset(&conditional_value_107, 0, sizeof(struct CVALUE*));
memset(&if_block_108, 0, sizeof(struct sBlock*));
memset(&num_and_conditional_stack_110, 0, sizeof(int));
    # 253 "08if.c"
    expression_node_106=self->mExpressionNode;
    # 255 "08if.c"
    info->without_semicolon=(_Bool)1;
    # 259 "08if.c"
    # 256 "08if.c"
    if(_if_conditional129=!node_compile(expression_node_106,info),    _if_conditional129) {
        # 257 "08if.c"
        __result79__ = (_Bool)0;
        return __result79__;
    }
    # 259 "08if.c"
    info->without_semicolon=(_Bool)0;
    # 262 "08if.c"
    conditional_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value65=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value65;
    __freed_obj__ = 0;
    # 263 "08if.c"
    dec_stack_ptr(1,info);
    # 265 "08if.c"
    if_block_108=self->mIfBlock;
    # 267 "08if.c"
    # 268 "08if.c"
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_109);
    # 270 "08if.c"
    add_come_code(info,"if(_and_conditional%d=%s,",num_and_conditional_109,conditional_value_107->c_value);
    # 271 "08if.c"
    num_and_conditional_stack_110=num_and_conditional_109;
    # 272 "08if.c"
    add_last_code_to_source_with_comma(info);
    # 273 "08if.c"
    free_right_value_objects(info,(_Bool)1);
    # 274 "08if.c"
    add_come_code(info,"_and_conditional%d == 0) {\n",num_and_conditional_stack_110);
    # 276 "08if.c"
    transpile_block(if_block_108,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    # 278 "08if.c"
    add_come_code(info,"}\n");
    # 280 "08if.c"
    transpiler_clear_last_code(info);
    # 285 "08if.c"
    __result80__ = (_Bool)1;
    if(conditional_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result80__;
    if(conditional_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 290 "08if.c"
    __result81__ = self->sline;
    return __result81__;
}

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value66;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
    # 295 "08if.c"
    __result82__ = __result_obj__ = ((char*)(right_value66=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    return __result82__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value67;
char* sname_111;
int sline_112;
void* right_value68;
struct sBlock* if_block_113;
void* right_value69;
void* right_value70;
struct list$1sNodeph* elif_expression_nodes_114;
void* right_value71;
void* right_value72;
struct list$1sBlockph* elif_blocks_115;
int elif_num_116;
struct sBlock* else_block_117;
_Bool _while_condtional18;
char* saved_p_118;
int saved_sline_119;
_Bool _if_conditional130;
void* right_value73;
char* buf_120;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value74;
struct sNode* expression_node_121;
void* right_value78;
struct sBlock* elif_block_125;
void* right_value82;
struct sBlock* __dec_obj35;
void* right_value83;
void* right_value84;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* right_value92;
struct sNode* result_130;
struct sNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&sname_111, 0, sizeof(char*));
memset(&sline_112, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&if_block_113, 0, sizeof(struct sBlock*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&elif_expression_nodes_114, 0, sizeof(struct list$1sNodeph*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&elif_blocks_115, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_116, 0, sizeof(int));
memset(&else_block_117, 0, sizeof(struct sBlock*));
memset(&saved_p_118, 0, sizeof(char*));
memset(&saved_sline_119, 0, sizeof(int));
memset(&right_value73, 0, sizeof(void*));
memset(&buf_120, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&expression_node_121, 0, sizeof(struct sNode*));
memset(&right_value78, 0, sizeof(void*));
memset(&elif_block_125, 0, sizeof(struct sBlock*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&result_130, 0, sizeof(struct sNode*));
    # 300 "08if.c"
    sname_111=(char*)come_increment_ref_count(((char*)(right_value67=string_clone(info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    # 301 "08if.c"
    sline_112=info->sline;
    # 303 "08if.c"
    parse_sharp_v5(info);
    # 305 "08if.c"
    if_block_113=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value68=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value68;
    __freed_obj__ = 0;
    # 307 "08if.c"
    elif_expression_nodes_114=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value69=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 307))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value69;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value70;
    __freed_obj__ = 0;
    # 309 "08if.c"
    elif_blocks_115=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value72=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value71=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 309))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value71;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value72;
    __freed_obj__ = 0;
    # 311 "08if.c"
    elif_num_116=0;
    # 313 "08if.c"
    else_block_117=((void*)0);
    # 362 "08if.c"
    while(_while_condtional18=1,    _while_condtional18) {
        # 316 "08if.c"
        saved_p_118=info->p;
        # 317 "08if.c"
        saved_sline_119=info->sline;
        # 318 "08if.c"
        parse_sharp_v5(info);
        # 324 "08if.c"
        # 321 "08if.c"
        if(_if_conditional130=!xisalpha(*info->p),        _if_conditional130) {
            # 322 "08if.c"
            break;
        }
        # 324 "08if.c"
        parse_sharp_v5(info);
        # 325 "08if.c"
        buf_120=(char*)come_increment_ref_count(((char*)(right_value73=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value73;
        __freed_obj__ = 0;
        # 326 "08if.c"
        parse_sharp_v5(info);
        # 362 "08if.c"
        # 328 "08if.c"
        if(_if_conditional131=string_operator_equals(buf_120,"else"),        _if_conditional131) {
            # 356 "08if.c"
            # 329 "08if.c"
            if(_if_conditional132=parsecmp("if",info),            _if_conditional132) {
                # 330 "08if.c"
                parse_sharp_v5(info);
                # 331 "08if.c"
                info->p+=strlen("if");
                # 332 "08if.c"
                skip_spaces_and_lf(info);
                # 333 "08if.c"
                parse_sharp_v5(info);
                # 335 "08if.c"
                expected_next_character(40,info);
                # 338 "08if.c"
                expression_node_121=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value74;
                __freed_obj__ = 0;
                # 340 "08if.c"
                list$1sNodeph_push_back(elif_expression_nodes_114,(struct sNode*)come_increment_ref_count(expression_node_121));
                # 342 "08if.c"
                expected_next_character(41,info);
                # 343 "08if.c"
                parse_sharp_v5(info);
                # 346 "08if.c"
                elif_block_125=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value78=parse_block(info,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value78;
                __freed_obj__ = 0;
                # 348 "08if.c"
                list$1sBlockph_push_back(elif_blocks_115,(struct sBlock*)come_increment_ref_count(elif_block_125));
                # 350 "08if.c"
                elif_num_116++;
                if(expression_node_121 && !__freed_obj__) { expression_node_121 = come_decrement_ref_count(expression_node_121, ((struct sNode*)expression_node_121)->finalize, ((struct sNode*)expression_node_121)->_protocol_obj, 0, 0, 0); } 
                if(elif_block_125 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,elif_block_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                # 353 "08if.c"
                __dec_obj35=else_block_117;
                else_block_117=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value82=parse_block(info,(_Bool)0))));
                if(__dec_obj35) { come_call_finalizer(sBlock_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value82;
                __freed_obj__ = 0;
                # 354 "08if.c"
                if(buf_120 && !__freed_obj__) { buf_120 = come_decrement_ref_count(buf_120, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
        }
        else {
            # 358 "08if.c"
            info->p=saved_p_118;
            # 359 "08if.c"
            info->sline=saved_sline_119;
            # 360 "08if.c"
            if(buf_120 && !__freed_obj__) { buf_120 = come_decrement_ref_count(buf_120, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        if(buf_120 && !__freed_obj__) { buf_120 = come_decrement_ref_count(buf_120, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 364 "08if.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 364);
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(right_value84=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value83=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 364)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_113,elif_expression_nodes_114,elif_blocks_115,elif_num_116,else_block_117,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sIfNode_sline;
    _inf_value1->sname=(void*)sIfNode_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    result_130=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value92=_inf_value1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value83;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value84;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, ((struct sNode*)right_value92)->finalize, ((struct sNode*)right_value92)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[8] = right_value92;
    __freed_obj__ = 0;
    # 366 "08if.c"
    __result87__ = __result_obj__ = result_130;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_111 && !__freed_obj__) { sname_111 = come_decrement_ref_count(sname_111, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_113 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_114 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_115 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_117 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_130 && !__freed_obj__) { result_130 = come_decrement_ref_count(result_130, ((struct sNode*)result_130)->finalize, ((struct sNode*)result_130)->_protocol_obj, 0, 1, 0); } 
    return __result87__;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_111 && !__freed_obj__) { sname_111 = come_decrement_ref_count(sname_111, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_113 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_114 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_115 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_117 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_130 && !__freed_obj__) { result_130 = come_decrement_ref_count(result_130, ((struct sNode*)result_130)->finalize, ((struct sNode*)result_130)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
void* right_value75;
struct list_item$1sNodeph* litem_122;
struct sNode* __dec_obj29;
_Bool _if_conditional134;
void* right_value76;
struct list_item$1sNodeph* litem_123;
struct sNode* __dec_obj30;
void* right_value77;
struct list_item$1sNodeph* litem_124;
struct sNode* __dec_obj31;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value76, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value77, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1sNodeph*));
                    # 309 "./comelang2.h"
                    # 278 "./comelang2.h"
                    if(_if_conditional133=self->len==0,                    _if_conditional133) {
                        # 279 "./comelang2.h"
                        litem_122=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value75=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value75;
                        __freed_obj__ = 0;
                        # 281 "./comelang2.h"
                        litem_122->prev=((void*)0);
                        # 282 "./comelang2.h"
                        litem_122->next=((void*)0);
                        # 283 "./comelang2.h"
                        __dec_obj29=litem_122->item;
                        litem_122->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                        # 285 "./comelang2.h"
                        self->tail=litem_122;
                        # 286 "./comelang2.h"
                        self->head=litem_122;
                    }
                    else {
                        # 309 "./comelang2.h"
                        # 288 "./comelang2.h"
                        if(_if_conditional134=self->len==1,                        _if_conditional134) {
                            # 289 "./comelang2.h"
                            litem_123=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value76=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                            # 291 "./comelang2.h"
                            litem_123->prev=self->head;
                            # 292 "./comelang2.h"
                            litem_123->next=((void*)0);
                            # 293 "./comelang2.h"
                            __dec_obj30=litem_123->item;
                            litem_123->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0); }
                            # 295 "./comelang2.h"
                            self->tail=litem_123;
                            # 296 "./comelang2.h"
                            self->head->next=litem_123;
                        }
                        else {
                            # 299 "./comelang2.h"
                            litem_124=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value77=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                            # 301 "./comelang2.h"
                            litem_124->prev=self->tail;
                            # 302 "./comelang2.h"
                            litem_124->next=((void*)0);
                            # 303 "./comelang2.h"
                            __dec_obj31=litem_124->item;
                            litem_124->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                            # 305 "./comelang2.h"
                            self->tail->next=litem_124;
                            # 306 "./comelang2.h"
                            self->tail=litem_124;
                        }
                    }
                    # 309 "./comelang2.h"
                    self->len++;
                    # 311 "./comelang2.h"
                    __result83__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                    return __result83__;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
void* right_value79;
struct list_item$1sBlockph* litem_126;
struct sBlock* __dec_obj32;
_Bool _if_conditional136;
void* right_value80;
struct list_item$1sBlockph* litem_127;
struct sBlock* __dec_obj33;
void* right_value81;
struct list_item$1sBlockph* litem_128;
struct sBlock* __dec_obj34;
struct list$1sBlockph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1sBlockph*));
                    # 309 "./comelang2.h"
                    # 278 "./comelang2.h"
                    if(_if_conditional135=self->len==0,                    _if_conditional135) {
                        # 279 "./comelang2.h"
                        litem_126=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value79=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value79;
                        __freed_obj__ = 0;
                        # 281 "./comelang2.h"
                        litem_126->prev=((void*)0);
                        # 282 "./comelang2.h"
                        litem_126->next=((void*)0);
                        # 283 "./comelang2.h"
                        __dec_obj32=litem_126->item;
                        litem_126->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj32) { come_call_finalizer(sBlock_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 285 "./comelang2.h"
                        self->tail=litem_126;
                        # 286 "./comelang2.h"
                        self->head=litem_126;
                    }
                    else {
                        # 309 "./comelang2.h"
                        # 288 "./comelang2.h"
                        if(_if_conditional136=self->len==1,                        _if_conditional136) {
                            # 289 "./comelang2.h"
                            litem_127=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value80=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value80;
                            __freed_obj__ = 0;
                            # 291 "./comelang2.h"
                            litem_127->prev=self->head;
                            # 292 "./comelang2.h"
                            litem_127->next=((void*)0);
                            # 293 "./comelang2.h"
                            __dec_obj33=litem_127->item;
                            litem_127->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj33) { come_call_finalizer(sBlock_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 295 "./comelang2.h"
                            self->tail=litem_127;
                            # 296 "./comelang2.h"
                            self->head->next=litem_127;
                        }
                        else {
                            # 299 "./comelang2.h"
                            litem_128=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value81=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value81;
                            __freed_obj__ = 0;
                            # 301 "./comelang2.h"
                            litem_128->prev=self->tail;
                            # 302 "./comelang2.h"
                            litem_128->next=((void*)0);
                            # 303 "./comelang2.h"
                            __dec_obj34=litem_128->item;
                            litem_128->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj34) { come_call_finalizer(sBlock_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 305 "./comelang2.h"
                            self->tail->next=litem_128;
                            # 306 "./comelang2.h"
                            self->tail=litem_128;
                        }
                    }
                    # 309 "./comelang2.h"
                    self->len++;
                    # 311 "./comelang2.h"
                    __result84__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result84__;
                    if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* sname_131;
int sline_132;
void* right_value94;
struct sNode* expression_node2_133;
void* right_value95;
struct sBlock* if_block_134;
void* right_value96;
void* right_value97;
struct list$1sNodeph* elif_expression_nodes_135;
void* right_value98;
void* right_value99;
struct list$1sBlockph* elif_blocks_136;
int elif_num_137;
struct sBlock* else_block_138;
_Bool _while_condtional19;
char* saved_p_139;
int saved_sline_140;
_Bool _if_conditional152;
void* right_value100;
char* buf_141;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value101;
struct sNode* expression_node_142;
void* right_value102;
struct sBlock* elif_block_143;
void* right_value103;
struct sBlock* __dec_obj42;
void* right_value104;
void* right_value105;
struct sNode* _inf_value2;
struct sIfNode* _inf_obj_value2;
void* right_value113;
struct sNode* result_145;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&sname_131, 0, sizeof(char*));
memset(&sline_132, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&expression_node2_133, 0, sizeof(struct sNode*));
memset(&right_value95, 0, sizeof(void*));
memset(&if_block_134, 0, sizeof(struct sBlock*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&elif_expression_nodes_135, 0, sizeof(struct list$1sNodeph*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&elif_blocks_136, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_137, 0, sizeof(int));
memset(&else_block_138, 0, sizeof(struct sBlock*));
memset(&saved_p_139, 0, sizeof(char*));
memset(&saved_sline_140, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&buf_141, 0, sizeof(char*));
memset(&right_value101, 0, sizeof(void*));
memset(&expression_node_142, 0, sizeof(struct sNode*));
memset(&right_value102, 0, sizeof(void*));
memset(&elif_block_143, 0, sizeof(struct sBlock*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct sNode*));
    # 371 "08if.c"
    sname_131=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    # 372 "08if.c"
    sline_132=info->sline;
    # 374 "08if.c"
    parse_sharp_v5(info);
    # 376 "08if.c"
    expression_node2_133=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=craete_logical_denial((struct sNode*)come_increment_ref_count(expression_node),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value94;
    __freed_obj__ = 0;
    # 378 "08if.c"
    if_block_134=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value95=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value95;
    __freed_obj__ = 0;
    # 380 "08if.c"
    elif_expression_nodes_135=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 380))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value96;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value97;
    __freed_obj__ = 0;
    # 382 "08if.c"
    elif_blocks_136=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value99=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value98=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 382))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value98;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value99;
    __freed_obj__ = 0;
    # 384 "08if.c"
    elif_num_137=0;
    # 386 "08if.c"
    else_block_138=((void*)0);
    # 435 "08if.c"
    while(_while_condtional19=1,    _while_condtional19) {
        # 389 "08if.c"
        saved_p_139=info->p;
        # 390 "08if.c"
        saved_sline_140=info->sline;
        # 391 "08if.c"
        parse_sharp_v5(info);
        # 397 "08if.c"
        # 394 "08if.c"
        if(_if_conditional152=!xisalpha(*info->p),        _if_conditional152) {
            # 395 "08if.c"
            break;
        }
        # 397 "08if.c"
        parse_sharp_v5(info);
        # 398 "08if.c"
        buf_141=(char*)come_increment_ref_count(((char*)(right_value100=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value100;
        __freed_obj__ = 0;
        # 399 "08if.c"
        parse_sharp_v5(info);
        # 435 "08if.c"
        # 401 "08if.c"
        if(_if_conditional153=string_operator_equals(buf_141,"else"),        _if_conditional153) {
            # 429 "08if.c"
            # 402 "08if.c"
            if(_if_conditional154=parsecmp("if",info),            _if_conditional154) {
                # 403 "08if.c"
                parse_sharp_v5(info);
                # 404 "08if.c"
                info->p+=strlen("if");
                # 405 "08if.c"
                skip_spaces_and_lf(info);
                # 406 "08if.c"
                parse_sharp_v5(info);
                # 408 "08if.c"
                expected_next_character(40,info);
                # 411 "08if.c"
                expression_node_142=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value101;
                __freed_obj__ = 0;
                # 413 "08if.c"
                list$1sNodeph_push_back(elif_expression_nodes_135,(struct sNode*)come_increment_ref_count(expression_node_142));
                # 415 "08if.c"
                expected_next_character(41,info);
                # 416 "08if.c"
                parse_sharp_v5(info);
                # 419 "08if.c"
                elif_block_143=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value102=parse_block(info,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value102);
                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value102;
                __freed_obj__ = 0;
                # 421 "08if.c"
                list$1sBlockph_push_back(elif_blocks_136,(struct sBlock*)come_increment_ref_count(elif_block_143));
                # 423 "08if.c"
                elif_num_137++;
                if(expression_node_142 && !__freed_obj__) { expression_node_142 = come_decrement_ref_count(expression_node_142, ((struct sNode*)expression_node_142)->finalize, ((struct sNode*)expression_node_142)->_protocol_obj, 0, 0, 0); } 
                if(elif_block_143 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,elif_block_143, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                # 426 "08if.c"
                __dec_obj42=else_block_138;
                else_block_138=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value103=parse_block(info,(_Bool)0))));
                if(__dec_obj42) { come_call_finalizer(sBlock_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value103;
                __freed_obj__ = 0;
                # 427 "08if.c"
                if(buf_141 && !__freed_obj__) { buf_141 = come_decrement_ref_count(buf_141, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
        }
        else {
            # 431 "08if.c"
            info->p=saved_p_139;
            # 432 "08if.c"
            info->sline=saved_sline_140;
            # 433 "08if.c"
            if(buf_141 && !__freed_obj__) { buf_141 = come_decrement_ref_count(buf_141, (void*)0, (void*)0, 0, 0, 0); }
            break;
        }
        if(buf_141 && !__freed_obj__) { buf_141 = come_decrement_ref_count(buf_141, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 437 "08if.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 437);
    _inf_obj_value2=come_increment_ref_count(((struct sIfNode*)(right_value105=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value104=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 437)))),(struct sNode*)come_increment_ref_count(expression_node2_133),if_block_134,elif_expression_nodes_135,elif_blocks_136,elif_num_137,else_block_138,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sIfNode_finalize;
    _inf_value2->clone=(void*)sIfNode_clone;
    _inf_value2->compile=(void*)sIfNode_compile;
    _inf_value2->sline=(void*)sIfNode_sline;
    _inf_value2->sname=(void*)sIfNode_sname;
    _inf_value2->terminated=(void*)sIfNode_terminated;
    _inf_value2->kind=(void*)sIfNode_kind;
    result_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value104;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value105;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[9] = right_value113;
    __freed_obj__ = 0;
    # 439 "08if.c"
    __result90__ = __result_obj__ = result_145;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_131 && !__freed_obj__) { sname_131 = come_decrement_ref_count(sname_131, (void*)0, (void*)0, 0, 0, 0); }
    if(expression_node2_133 && !__freed_obj__) { expression_node2_133 = come_decrement_ref_count(expression_node2_133, ((struct sNode*)expression_node2_133)->finalize, ((struct sNode*)expression_node2_133)->_protocol_obj, 0, 0, 0); } 
    if(if_block_134 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_135 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_136 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_138 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_145 && !__freed_obj__) { result_145 = come_decrement_ref_count(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 1, 0); } 
    return __result90__;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_131 && !__freed_obj__) { sname_131 = come_decrement_ref_count(sname_131, (void*)0, (void*)0, 0, 0, 0); }
    if(expression_node2_133 && !__freed_obj__) { expression_node2_133 = come_decrement_ref_count(expression_node2_133, ((struct sNode*)expression_node2_133)->finalize, ((struct sNode*)expression_node2_133)->_protocol_obj, 0, 0, 0); } 
    if(if_block_134 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_135 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_136 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_138 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_145 && !__freed_obj__) { result_145 = come_decrement_ref_count(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
void* right_value114;
char* sname_146;
int sline_147;
void* right_value115;
struct sNode* expression_node_148;
void* right_value116;
struct sBlock* if_block_149;
void* right_value117;
void* right_value118;
struct list$1sNodeph* elif_expression_nodes_150;
void* right_value119;
void* right_value120;
struct list$1sBlockph* elif_blocks_151;
int elif_num_152;
struct sBlock* else_block_153;
_Bool _while_condtional20;
char* saved_p_154;
int saved_sline_155;
_Bool _if_conditional171;
void* right_value121;
char* buf_156;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value122;
struct sNode* expression_node_157;
void* right_value123;
struct sBlock* elif_block_158;
void* right_value124;
struct sBlock* __dec_obj49;
void* right_value125;
void* right_value126;
struct sNode* _inf_value3;
struct sIfNode* _inf_obj_value3;
void* right_value134;
struct sNode* result_160;
struct sNode* __result93__;
void* right_value135;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&sname_146, 0, sizeof(char*));
memset(&sline_147, 0, sizeof(int));
memset(&right_value115, 0, sizeof(void*));
memset(&expression_node_148, 0, sizeof(struct sNode*));
memset(&right_value116, 0, sizeof(void*));
memset(&if_block_149, 0, sizeof(struct sBlock*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&elif_expression_nodes_150, 0, sizeof(struct list$1sNodeph*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&elif_blocks_151, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_152, 0, sizeof(int));
memset(&else_block_153, 0, sizeof(struct sBlock*));
memset(&saved_p_154, 0, sizeof(char*));
memset(&saved_sline_155, 0, sizeof(int));
memset(&right_value121, 0, sizeof(void*));
memset(&buf_156, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&expression_node_157, 0, sizeof(struct sNode*));
memset(&right_value123, 0, sizeof(void*));
memset(&elif_block_158, 0, sizeof(struct sBlock*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&result_160, 0, sizeof(struct sNode*));
memset(&right_value135, 0, sizeof(void*));
    # 522 "08if.c"
    # 444 "08if.c"
    if(_if_conditional170=charp_operator_equals(buf,"if"),    _if_conditional170) {
        # 445 "08if.c"
        sname_146=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(info->sname))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value114;
        __freed_obj__ = 0;
        # 446 "08if.c"
        sline_147=info->sline;
        # 448 "08if.c"
        parse_sharp_v5(info);
        # 450 "08if.c"
        expected_next_character(40,info);
        # 453 "08if.c"
        expression_node_148=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value115;
        __freed_obj__ = 0;
        # 455 "08if.c"
        expected_next_character(41,info);
        # 456 "08if.c"
        parse_sharp_v5(info);
        # 458 "08if.c"
        if_block_149=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value116=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value116;
        __freed_obj__ = 0;
        # 460 "08if.c"
        elif_expression_nodes_150=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value118=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value117=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 460))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value117;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value118;
        __freed_obj__ = 0;
        # 462 "08if.c"
        elif_blocks_151=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value120=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value119=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 462))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value119;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value120;
        __freed_obj__ = 0;
        # 464 "08if.c"
        elif_num_152=0;
        # 466 "08if.c"
        else_block_153=((void*)0);
        # 515 "08if.c"
        while(_while_condtional20=1,        _while_condtional20) {
            # 469 "08if.c"
            saved_p_154=info->p;
            # 470 "08if.c"
            saved_sline_155=info->sline;
            # 471 "08if.c"
            parse_sharp_v5(info);
            # 477 "08if.c"
            # 474 "08if.c"
            if(_if_conditional171=!xisalpha(*info->p),            _if_conditional171) {
                # 475 "08if.c"
                break;
            }
            # 477 "08if.c"
            parse_sharp_v5(info);
            # 478 "08if.c"
            buf_156=(char*)come_increment_ref_count(((char*)(right_value121=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value121;
            __freed_obj__ = 0;
            # 479 "08if.c"
            parse_sharp_v5(info);
            # 515 "08if.c"
            # 481 "08if.c"
            if(_if_conditional172=string_operator_equals(buf_156,"else"),            _if_conditional172) {
                # 509 "08if.c"
                # 482 "08if.c"
                if(_if_conditional173=parsecmp("if",info),                _if_conditional173) {
                    # 483 "08if.c"
                    parse_sharp_v5(info);
                    # 484 "08if.c"
                    info->p+=strlen("if");
                    # 485 "08if.c"
                    skip_spaces_and_lf(info);
                    # 486 "08if.c"
                    parse_sharp_v5(info);
                    # 488 "08if.c"
                    expected_next_character(40,info);
                    # 491 "08if.c"
                    expression_node_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value122;
                    __freed_obj__ = 0;
                    # 493 "08if.c"
                    list$1sNodeph_push_back(elif_expression_nodes_150,(struct sNode*)come_increment_ref_count(expression_node_157));
                    # 495 "08if.c"
                    expected_next_character(41,info);
                    # 496 "08if.c"
                    parse_sharp_v5(info);
                    # 499 "08if.c"
                    elif_block_158=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value123=parse_block(info,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value123;
                    __freed_obj__ = 0;
                    # 501 "08if.c"
                    list$1sBlockph_push_back(elif_blocks_151,(struct sBlock*)come_increment_ref_count(elif_block_158));
                    # 503 "08if.c"
                    elif_num_152++;
                    if(expression_node_157 && !__freed_obj__) { expression_node_157 = come_decrement_ref_count(expression_node_157, ((struct sNode*)expression_node_157)->finalize, ((struct sNode*)expression_node_157)->_protocol_obj, 0, 0, 0); } 
                    if(elif_block_158 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,elif_block_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 506 "08if.c"
                    __dec_obj49=else_block_153;
                    else_block_153=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value124=parse_block(info,(_Bool)0))));
                    if(__dec_obj49) { come_call_finalizer(sBlock_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value124;
                    __freed_obj__ = 0;
                    # 507 "08if.c"
                    if(buf_156 && !__freed_obj__) { buf_156 = come_decrement_ref_count(buf_156, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                }
            }
            else {
                # 511 "08if.c"
                info->p=saved_p_154;
                # 512 "08if.c"
                info->sline=saved_sline_155;
                # 513 "08if.c"
                if(buf_156 && !__freed_obj__) { buf_156 = come_decrement_ref_count(buf_156, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(buf_156 && !__freed_obj__) { buf_156 = come_decrement_ref_count(buf_156, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 517 "08if.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 517);
        _inf_obj_value3=come_increment_ref_count(((struct sIfNode*)(right_value126=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value125=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 517)))),(struct sNode*)come_increment_ref_count(expression_node_148),if_block_149,elif_expression_nodes_150,elif_blocks_151,elif_num_152,else_block_153,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sIfNode_finalize;
        _inf_value3->clone=(void*)sIfNode_clone;
        _inf_value3->compile=(void*)sIfNode_compile;
        _inf_value3->sline=(void*)sIfNode_sline;
        _inf_value3->sname=(void*)sIfNode_sname;
        _inf_value3->terminated=(void*)sIfNode_terminated;
        _inf_value3->kind=(void*)sIfNode_kind;
        result_160=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=_inf_value3)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value125;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value126;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[9] = right_value134;
        __freed_obj__ = 0;
        # 519 "08if.c"
        __result93__ = __result_obj__ = result_160;
        if(sname_146 && !__freed_obj__) { sname_146 = come_decrement_ref_count(sname_146, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_148 && !__freed_obj__) { expression_node_148 = come_decrement_ref_count(expression_node_148, ((struct sNode*)expression_node_148)->finalize, ((struct sNode*)expression_node_148)->_protocol_obj, 0, 0, 0); } 
        if(if_block_149 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_149, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_expression_nodes_150 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_blocks_151 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(else_block_153 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, ((struct sNode*)result_160)->finalize, ((struct sNode*)result_160)->_protocol_obj, 0, 1, 0); } 
        return __result93__;
        if(sname_146 && !__freed_obj__) { sname_146 = come_decrement_ref_count(sname_146, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_148 && !__freed_obj__) { expression_node_148 = come_decrement_ref_count(expression_node_148, ((struct sNode*)expression_node_148)->finalize, ((struct sNode*)expression_node_148)->_protocol_obj, 0, 0, 0); } 
        if(if_block_149 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_149, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_expression_nodes_150 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_blocks_151 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(else_block_153 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_160 && !__freed_obj__) { result_160 = come_decrement_ref_count(result_160, ((struct sNode*)result_160)->finalize, ((struct sNode*)result_160)->_protocol_obj, 0, 0, 0); } 
    }
    # 522 "08if.c"
    __result94__ = __result_obj__ = ((struct sNode*)(right_value135=string_node_v7(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value135;
    __freed_obj__ = 0;
    return __result94__;
}

static void sIfNode_finalize(struct sIfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 1 "sIfNode_finalize"
            # 0 "sIfNode_finalize"
            if(_if_conditional174=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional174) {
                # 0 "sIfNode_finalize"
                if(self->mExpressionNode && !__freed_obj__) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
            }
            # 2 "sIfNode_finalize"
            # 1 "sIfNode_finalize"
            if(_if_conditional175=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional175) {
                # 1 "sIfNode_finalize"
                if(self->mIfBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 3 "sIfNode_finalize"
            # 2 "sIfNode_finalize"
            if(_if_conditional176=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional176) {
                # 2 "sIfNode_finalize"
                if(self->mElifExpressionNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 4 "sIfNode_finalize"
            # 3 "sIfNode_finalize"
            if(_if_conditional177=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional177) {
                # 3 "sIfNode_finalize"
                if(self->mElifBlocks && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 5 "sIfNode_finalize"
            # 4 "sIfNode_finalize"
            if(_if_conditional178=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional178) {
                # 4 "sIfNode_finalize"
                if(self->mElseBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            # 6 "sIfNode_finalize"
            # 5 "sIfNode_finalize"
            if(_if_conditional179=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional179) {
                # 5 "sIfNode_finalize"
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
struct sIfNode* __result91__;
void* right_value127;
struct sIfNode* result_159;
_Bool _if_conditional181;
void* right_value128;
struct sNode* __dec_obj50;
_Bool _if_conditional182;
void* right_value129;
struct sBlock* __dec_obj51;
_Bool _if_conditional183;
void* right_value130;
struct list$1sNodeph* __dec_obj52;
_Bool _if_conditional184;
void* right_value131;
struct list$1sBlockph* __dec_obj53;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value132;
struct sBlock* __dec_obj54;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value133;
char* __dec_obj55;
struct sIfNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct sIfNode*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
            # 3 "sIfNode_clone"
            # 2 "sIfNode_clone"
            if(_if_conditional180=self==(void*)0,            _if_conditional180) {
                # 2 "sIfNode_clone"
                __result91__ = __result_obj__ = (void*)0;
                return __result91__;
            }
            # 3 "sIfNode_clone"
            result_159=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value127=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value127;
            __freed_obj__ = 0;
            # 5 "sIfNode_clone"
            # 4 "sIfNode_clone"
            if(_if_conditional181=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional181) {
                # 4 "sIfNode_clone"
                __dec_obj50=result_159->mExpressionNode;
                result_159->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(self->mExpressionNode))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value128;
                __freed_obj__ = 0;
            }
            # 6 "sIfNode_clone"
            # 5 "sIfNode_clone"
            if(_if_conditional182=self!=((void*)0)&&self->mIfBlock!=((void*)0),            _if_conditional182) {
                # 5 "sIfNode_clone"
                __dec_obj51=result_159->mIfBlock;
                result_159->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value129=sBlock_clone(self->mIfBlock))));
                if(__dec_obj51) { come_call_finalizer(sBlock_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = 0;
            }
            # 7 "sIfNode_clone"
            # 6 "sIfNode_clone"
            if(_if_conditional183=self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0),            _if_conditional183) {
                # 6 "sIfNode_clone"
                __dec_obj52=result_159->mElifExpressionNodes;
                result_159->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value130=list$1sNodephp_clone(self->mElifExpressionNodes))));
                if(__dec_obj52) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value130;
                __freed_obj__ = 0;
            }
            # 8 "sIfNode_clone"
            # 7 "sIfNode_clone"
            if(_if_conditional184=self!=((void*)0)&&self->mElifBlocks!=((void*)0),            _if_conditional184) {
                # 7 "sIfNode_clone"
                __dec_obj53=result_159->mElifBlocks;
                result_159->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value131=list$1sBlockphp_clone(self->mElifBlocks))));
                if(__dec_obj53) { come_call_finalizer(list$1sBlockph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value131;
                __freed_obj__ = 0;
            }
            # 9 "sIfNode_clone"
            # 8 "sIfNode_clone"
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                # 8 "sIfNode_clone"
                result_159->mElifNum=self->mElifNum;
            }
            # 10 "sIfNode_clone"
            # 9 "sIfNode_clone"
            if(_if_conditional186=self!=((void*)0)&&self->mElseBlock!=((void*)0),            _if_conditional186) {
                # 9 "sIfNode_clone"
                __dec_obj54=result_159->mElseBlock;
                result_159->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value132=sBlock_clone(self->mElseBlock))));
                if(__dec_obj54) { come_call_finalizer(sBlock_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value132;
                __freed_obj__ = 0;
            }
            # 11 "sIfNode_clone"
            # 10 "sIfNode_clone"
            if(_if_conditional187=self!=((void*)0),            _if_conditional187) {
                # 10 "sIfNode_clone"
                result_159->sline=self->sline;
            }
            # 12 "sIfNode_clone"
            # 11 "sIfNode_clone"
            if(_if_conditional188=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional188) {
                # 11 "sIfNode_clone"
                __dec_obj55=result_159->sname;
                result_159->sname=(char*)come_increment_ref_count(((char*)(right_value133=string_clone(self->sname))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value133;
                __freed_obj__ = 0;
            }
            # 12 "sIfNode_clone"
            __result92__ = __result_obj__ = result_159;
            if(result_159 && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result92__;
            if(result_159 && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* sname_161;
int sline_162;
void* right_value137;
struct sBlock* if_block_163;
void* right_value138;
void* right_value139;
struct sNode* _inf_value4;
struct sOrStatmentNode* _inf_obj_value4;
void* right_value144;
struct sNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&sname_161, 0, sizeof(char*));
memset(&sline_162, 0, sizeof(int));
memset(&right_value137, 0, sizeof(void*));
memset(&if_block_163, 0, sizeof(struct sBlock*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
    # 527 "08if.c"
    sname_161=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    # 528 "08if.c"
    sline_162=info->sline;
    # 530 "08if.c"
    parse_sharp_v5(info);
    # 532 "08if.c"
    if_block_163=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value137=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = 0;
    # 534 "08if.c"
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 534);
    _inf_obj_value4=come_increment_ref_count(((struct sOrStatmentNode*)(right_value139=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value138=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 534)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_163,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value4->clone=(void*)sOrStatmentNode_clone;
    _inf_value4->compile=(void*)sOrStatmentNode_compile;
    _inf_value4->sline=(void*)sOrStatmentNode_sline;
    _inf_value4->sname=(void*)sOrStatmentNode_sname;
    _inf_value4->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value4->kind=(void*)sOrStatmentNode_kind;
    __result97__ = __result_obj__ = ((struct sNode*)(right_value144=_inf_value4));
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_161 && !__freed_obj__) { sname_161 = come_decrement_ref_count(sname_161, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_163 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value138;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value139;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[4] = right_value144;
    __freed_obj__ = 0;
    return __result97__;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_161 && !__freed_obj__) { sname_161 = come_decrement_ref_count(sname_161, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_163 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sOrStatmentNode_finalize"
        # 0 "sOrStatmentNode_finalize"
        if(_if_conditional189=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional189) {
            # 0 "sOrStatmentNode_finalize"
            if(self->mExpressionNode && !__freed_obj__) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
        }
        # 2 "sOrStatmentNode_finalize"
        # 1 "sOrStatmentNode_finalize"
        if(_if_conditional190=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional190) {
            # 1 "sOrStatmentNode_finalize"
            if(self->mIfBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 3 "sOrStatmentNode_finalize"
        # 2 "sOrStatmentNode_finalize"
        if(_if_conditional191=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional191) {
            # 2 "sOrStatmentNode_finalize"
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
struct sOrStatmentNode* __result95__;
void* right_value140;
struct sOrStatmentNode* result_164;
_Bool _if_conditional193;
void* right_value141;
struct sNode* __dec_obj56;
_Bool _if_conditional194;
void* right_value142;
struct sBlock* __dec_obj57;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value143;
char* __dec_obj58;
struct sOrStatmentNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sOrStatmentNode*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
        # 3 "sOrStatmentNode_clone"
        # 2 "sOrStatmentNode_clone"
        if(_if_conditional192=self==(void*)0,        _if_conditional192) {
            # 2 "sOrStatmentNode_clone"
            __result95__ = __result_obj__ = (void*)0;
            return __result95__;
        }
        # 3 "sOrStatmentNode_clone"
        result_164=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value140=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
        # 5 "sOrStatmentNode_clone"
        # 4 "sOrStatmentNode_clone"
        if(_if_conditional193=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional193) {
            # 4 "sOrStatmentNode_clone"
            __dec_obj56=result_164->mExpressionNode;
            result_164->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(self->mExpressionNode))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
            if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value141;
            __freed_obj__ = 0;
        }
        # 6 "sOrStatmentNode_clone"
        # 5 "sOrStatmentNode_clone"
        if(_if_conditional194=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional194) {
            # 5 "sOrStatmentNode_clone"
            __dec_obj57=result_164->mIfBlock;
            result_164->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value142=sBlock_clone(self->mIfBlock))));
            if(__dec_obj57) { come_call_finalizer(sBlock_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value142;
            __freed_obj__ = 0;
        }
        # 7 "sOrStatmentNode_clone"
        # 6 "sOrStatmentNode_clone"
        if(_if_conditional195=self!=((void*)0),        _if_conditional195) {
            # 6 "sOrStatmentNode_clone"
            result_164->sline=self->sline;
        }
        # 8 "sOrStatmentNode_clone"
        # 7 "sOrStatmentNode_clone"
        if(_if_conditional196=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional196) {
            # 7 "sOrStatmentNode_clone"
            __dec_obj58=result_164->sname;
            result_164->sname=(char*)come_increment_ref_count(((char*)(right_value143=string_clone(self->sname))));
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value143;
            __freed_obj__ = 0;
        }
        # 8 "sOrStatmentNode_clone"
        __result96__ = __result_obj__ = result_164;
        if(result_164 && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result96__;
        if(result_164 && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value145;
char* sname_165;
int sline_166;
void* right_value146;
struct sBlock* if_block_167;
void* right_value147;
void* right_value148;
struct sNode* _inf_value5;
struct sAndStatmentNode* _inf_obj_value5;
void* right_value153;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
memset(&sname_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
memset(&right_value146, 0, sizeof(void*));
memset(&if_block_167, 0, sizeof(struct sBlock*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
    # 539 "08if.c"
    sname_165=(char*)come_increment_ref_count(((char*)(right_value145=string_clone(info->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = 0;
    # 540 "08if.c"
    sline_166=info->sline;
    # 542 "08if.c"
    parse_sharp_v5(info);
    # 544 "08if.c"
    if_block_167=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value146=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value146;
    __freed_obj__ = 0;
    # 546 "08if.c"
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 546);
    _inf_obj_value5=come_increment_ref_count(((struct sAndStatmentNode*)(right_value148=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value147=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 546)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_167,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value5->clone=(void*)sAndStatmentNode_clone;
    _inf_value5->compile=(void*)sAndStatmentNode_compile;
    _inf_value5->sline=(void*)sAndStatmentNode_sline;
    _inf_value5->sname=(void*)sAndStatmentNode_sname;
    _inf_value5->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value5->kind=(void*)sAndStatmentNode_kind;
    __result100__ = __result_obj__ = ((struct sNode*)(right_value153=_inf_value5));
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_165 && !__freed_obj__) { sname_165 = come_decrement_ref_count(sname_165, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_167 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_167, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value147;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value148;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[4] = right_value153;
    __freed_obj__ = 0;
    return __result100__;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_165 && !__freed_obj__) { sname_165 = come_decrement_ref_count(sname_165, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_167 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_167, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sAndStatmentNode_finalize"
        # 0 "sAndStatmentNode_finalize"
        if(_if_conditional197=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional197) {
            # 0 "sAndStatmentNode_finalize"
            if(self->mExpressionNode && !__freed_obj__) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
        }
        # 2 "sAndStatmentNode_finalize"
        # 1 "sAndStatmentNode_finalize"
        if(_if_conditional198=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional198) {
            # 1 "sAndStatmentNode_finalize"
            if(self->mIfBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 3 "sAndStatmentNode_finalize"
        # 2 "sAndStatmentNode_finalize"
        if(_if_conditional199=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional199) {
            # 2 "sAndStatmentNode_finalize"
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
struct sAndStatmentNode* __result98__;
void* right_value149;
struct sAndStatmentNode* result_168;
_Bool _if_conditional201;
void* right_value150;
struct sNode* __dec_obj59;
_Bool _if_conditional202;
void* right_value151;
struct sBlock* __dec_obj60;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value152;
char* __dec_obj61;
struct sAndStatmentNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&result_168, 0, sizeof(struct sAndStatmentNode*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
        # 3 "sAndStatmentNode_clone"
        # 2 "sAndStatmentNode_clone"
        if(_if_conditional200=self==(void*)0,        _if_conditional200) {
            # 2 "sAndStatmentNode_clone"
            __result98__ = __result_obj__ = (void*)0;
            return __result98__;
        }
        # 3 "sAndStatmentNode_clone"
        result_168=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value149=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149;
        __freed_obj__ = 0;
        # 5 "sAndStatmentNode_clone"
        # 4 "sAndStatmentNode_clone"
        if(_if_conditional201=self!=((void*)0)&&self->mExpressionNode!=((void*)0),        _if_conditional201) {
            # 4 "sAndStatmentNode_clone"
            __dec_obj59=result_168->mExpressionNode;
            result_168->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=sNode_clone(self->mExpressionNode))));
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value150;
            __freed_obj__ = 0;
        }
        # 6 "sAndStatmentNode_clone"
        # 5 "sAndStatmentNode_clone"
        if(_if_conditional202=self!=((void*)0)&&self->mIfBlock!=((void*)0),        _if_conditional202) {
            # 5 "sAndStatmentNode_clone"
            __dec_obj60=result_168->mIfBlock;
            result_168->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value151=sBlock_clone(self->mIfBlock))));
            if(__dec_obj60) { come_call_finalizer(sBlock_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value151;
            __freed_obj__ = 0;
        }
        # 7 "sAndStatmentNode_clone"
        # 6 "sAndStatmentNode_clone"
        if(_if_conditional203=self!=((void*)0),        _if_conditional203) {
            # 6 "sAndStatmentNode_clone"
            result_168->sline=self->sline;
        }
        # 8 "sAndStatmentNode_clone"
        # 7 "sAndStatmentNode_clone"
        if(_if_conditional204=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional204) {
            # 7 "sAndStatmentNode_clone"
            __dec_obj61=result_168->sname;
            result_168->sname=(char*)come_increment_ref_count(((char*)(right_value152=string_clone(self->sname))));
            if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value152;
            __freed_obj__ = 0;
        }
        # 8 "sAndStatmentNode_clone"
        __result99__ = __result_obj__ = result_168;
        if(result_168 && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result99__;
        if(result_168 && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0); }
}

