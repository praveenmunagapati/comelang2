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
typedef long int ptrdiff_t;
struct anonymous_typeX21
{
    long long __max_align_ll;
    long double __max_align_ld;
};
typedef struct anonymous_typeX21 max_align_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(long int);
extern void* (*GC_oom_fn)(long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY22 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY22 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY22);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long int GC_free_space_divisor;
extern unsigned long int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long int GC_time_limit;
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long int heapsize_full;
    unsigned long int free_bytes_full;
    unsigned long int unmapped_bytes;
    unsigned long int bytes_allocd_since_gc;
    unsigned long int allocd_bytes_before_gc;
    unsigned long int non_gc_bytes;
    unsigned long int gc_no;
    unsigned long int markers_m1;
    unsigned long int bytes_reclaimed_since_gc;
    unsigned long int reclaimed_bytes_before_gc;
    unsigned long int expl_freed_bytes_since_gc;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY23 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY23 GC_ToggleRefStatus;
typedef enum anonymous_typeY23 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,long int);
char* gComeStackFrameSName[10];
int gComeStackFrameSLine[10];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
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

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX57)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX59)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX61)(enum anonymous_typeY22));

void (*GC_get_on_collection_event())(enum anonymous_typeY22);

void GC_set_find_leak(int anonymous_var_nameX62);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX63);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX64);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX65);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX66)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX67);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX68);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX69);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX70);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX71);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX72);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX73);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX74);

unsigned long int GC_get_time_limit();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX75);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX76);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX77);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX78);

int GC_get_max_prior_attempts();

void GC_set_handle_fork(int anonymous_var_nameX79);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX80);

void* GC_malloc_atomic(long int anonymous_var_nameX81);

char* GC_strdup(const char* anonymous_var_nameX82);

char* GC_strndup(const char* anonymous_var_nameX83, long int anonymous_var_nameX84);

void* GC_malloc_uncollectable(long int anonymous_var_nameX85);

void* GC_malloc_stubborn(long int anonymous_var_nameX86);

void* GC_memalign(long int anonymous_var_nameX87, long int anonymous_var_nameX88);

int GC_posix_memalign(void** anonymous_var_nameX89, long int anonymous_var_nameX90, long int anonymous_var_nameX91);

void GC_free(void* anonymous_var_nameX92);

void GC_change_stubborn(const void* anonymous_var_nameX93);

void GC_end_stubborn_change(const void* anonymous_var_nameX94);

void* GC_base(void* anonymous_var_nameX95);

int GC_is_heap_ptr(const void* anonymous_var_nameX96);

long int GC_size(const void* anonymous_var_nameX97);

void* GC_realloc(void* anonymous_var_nameX98, long int anonymous_var_nameX99);

int GC_expand_hp(long int anonymous_var_nameX100);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX101);

void GC_exclude_static_roots(void* anonymous_var_nameX102, void* anonymous_var_nameX103);

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX104, void* anonymous_var_nameX105);

void GC_remove_roots(void* anonymous_var_nameX106, void* anonymous_var_nameX107);

void GC_register_displacement(long int anonymous_var_nameX108);

void GC_debug_register_displacement(long int anonymous_var_nameX109);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX110)());

void GC_set_stop_func(int (*anonymous_var_nameX111)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX112, unsigned long int* anonymous_var_nameX113, unsigned long int* anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, unsigned long int* anonymous_var_nameX116);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX117, long int anonymous_var_nameX118);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX119);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX120);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX121);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX122);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX123, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX124, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX125, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX126, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX127, long int anonymous_var_nameX128, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX129, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX130, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX131, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX132, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX133);

void* GC_debug_realloc(void* anonymous_var_nameX134, long int anonymous_var_nameX135, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX136);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX137);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX138);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX139, long int anonymous_var_nameX140);

void GC_register_finalizer(void* anonymous_var_nameX143, void (*anonymous_var_nameX144)(void*,void*), void* anonymous_var_nameX145, void (*anonymous_var_nameX146)(void*,void*), void** anonymous_var_nameX147);

void GC_debug_register_finalizer(void* anonymous_var_nameX148, void (*anonymous_var_nameX149)(void*,void*), void* anonymous_var_nameX150, void (*anonymous_var_nameX151)(void*,void*), void** anonymous_var_nameX152);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX153, void (*anonymous_var_nameX154)(void*,void*), void* anonymous_var_nameX155, void (*anonymous_var_nameX156)(void*,void*), void** anonymous_var_nameX157);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX158, void (*anonymous_var_nameX159)(void*,void*), void* anonymous_var_nameX160, void (*anonymous_var_nameX161)(void*,void*), void** anonymous_var_nameX162);

void GC_register_finalizer_no_order(void* anonymous_var_nameX163, void (*anonymous_var_nameX164)(void*,void*), void* anonymous_var_nameX165, void (*anonymous_var_nameX166)(void*,void*), void** anonymous_var_nameX167);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX168, void (*anonymous_var_nameX169)(void*,void*), void* anonymous_var_nameX170, void (*anonymous_var_nameX171)(void*,void*), void** anonymous_var_nameX172);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX173, void (*anonymous_var_nameX174)(void*,void*), void* anonymous_var_nameX175, void (*anonymous_var_nameX176)(void*,void*), void** anonymous_var_nameX177);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX178, void (*anonymous_var_nameX179)(void*,void*), void* anonymous_var_nameX180, void (*anonymous_var_nameX181)(void*,void*), void** anonymous_var_nameX182);

int GC_register_disappearing_link(void** anonymous_var_nameX183);

int GC_general_register_disappearing_link(void** anonymous_var_nameX184, const void* anonymous_var_nameX185);

int GC_move_disappearing_link(void** anonymous_var_nameX186, void** anonymous_var_nameX187);

int GC_unregister_disappearing_link(void** anonymous_var_nameX188);

int GC_register_long_link(void** anonymous_var_nameX189, const void* anonymous_var_nameX190);

int GC_move_long_link(void** anonymous_var_nameX191, void** anonymous_var_nameX192);

int GC_unregister_long_link(void** anonymous_var_nameX193);

void GC_set_toggleref_func(enum anonymous_typeY23 (*anonymous_var_nameX195)(void*));

enum anonymous_typeY23 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX196, int anonymous_var_nameX197);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX199)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX200);

void GC_set_warn_proc(void (*anonymous_var_nameX203)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX204, unsigned long int anonymous_var_nameX205);

void GC_set_log_fd(int anonymous_var_nameX206);

void GC_set_abort_func(void (*anonymous_var_nameX208)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX210)(void*), void* anonymous_var_nameX211);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX214)(struct GC_stack_base*,void*), void* anonymous_var_nameX215);

void* GC_do_blocking(void* (*anonymous_var_nameX216)(void*), void* anonymous_var_nameX217);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX218)(void*), void* anonymous_var_nameX219);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX220);

void* GC_same_obj(void* anonymous_var_nameX221, void* anonymous_var_nameX222);

void* GC_pre_incr(void** anonymous_var_nameX223, long int anonymous_var_nameX224);

void* GC_post_incr(void** anonymous_var_nameX225, long int anonymous_var_nameX226);

void* GC_is_visible(void* anonymous_var_nameX227);

void* GC_is_valid_displacement(void* anonymous_var_nameX228);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX229);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX230, const void* anonymous_var_nameX231);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX232, const void* anonymous_var_nameX233);

void* GC_malloc_many(long int anonymous_var_nameX254);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX258)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX259);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

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
static void come_free_mem_of_heap_pool(char* mem);
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

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
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
struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
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
struct smart_pointer$1char* result_0;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    # 1997 "./comelang2.h"
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997);
    # 1999 "./comelang2.h"
    result_0->memory=buffer_clone(self);
    # 2000 "./comelang2.h"
    result_0->p=result_0->memory->buf;
    # 2002 "./comelang2.h"
    __result8__ = __result_obj__ = result_0;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1char* result_1;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
    # 2007 "./comelang2.h"
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2007);
    # 2009 "./comelang2.h"
    result_1->memory=buffer_clone(self);
    # 2010 "./comelang2.h"
    result_1->p=(char*)result_1->memory->buf;
    # 2012 "./comelang2.h"
    __result9__ = __result_obj__ = result_1;
    return __result9__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1short* result_2;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
    # 2017 "./comelang2.h"
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2017);
    # 2019 "./comelang2.h"
    result_2->memory=buffer_clone(self);
    # 2020 "./comelang2.h"
    result_2->p=(short short*)result_2->memory->buf;
    # 2022 "./comelang2.h"
    __result10__ = __result_obj__ = result_2;
    return __result10__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1int* result_3;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
    # 2027 "./comelang2.h"
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2027);
    # 2029 "./comelang2.h"
    result_3->memory=buffer_clone(self);
    # 2030 "./comelang2.h"
    result_3->p=(int*)result_3->memory->buf;
    # 2032 "./comelang2.h"
    __result11__ = __result_obj__ = result_3;
    return __result11__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct smart_pointer$1long* result_4;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
    # 2037 "./comelang2.h"
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2037);
    # 2039 "./comelang2.h"
    result_4->memory=buffer_clone(self);
    # 2040 "./comelang2.h"
    result_4->p=(long*)result_4->memory->buf;
    # 2042 "./comelang2.h"
    __result12__ = __result_obj__ = result_4;
    return __result12__;
}

// body function












void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
int i_5;
_Bool _for_condtionalA1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_5, 0, sizeof(int));
    # 35 "libcomelang2-gc.c"
    # 20 "libcomelang2-gc.c"
    if(_if_conditional1=gNumComeStackFrame==10,    _if_conditional1) {
        # 21 "libcomelang2-gc.c"
        # 26 "libcomelang2-gc.c"
        for(
        i_5=0 ,        0;        _for_condtionalA1=        i_5<10-1 ,        _for_condtionalA1;        i_5++ ,        0        ){
            # 23 "libcomelang2-gc.c"
            gComeStackFrameSName[i_5]=gComeStackFrameSName[i_5+1];
            # 24 "libcomelang2-gc.c"
            gComeStackFrameSLine[i_5]=gComeStackFrameSLine[i_5+1];
        }
        # 26 "libcomelang2-gc.c"
        gComeStackFrameSName[i_5]=sname;
        # 27 "libcomelang2-gc.c"
        gComeStackFrameSLine[i_5]=sline;
    }
    else {
        # 30 "libcomelang2-gc.c"
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        # 31 "libcomelang2-gc.c"
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        # 33 "libcomelang2-gc.c"
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 42 "libcomelang2-gc.c"
    # 39 "libcomelang2-gc.c"
    if(_if_conditional2=gNumComeStackFrame>0,    _if_conditional2) {
        # 40 "libcomelang2-gc.c"
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* buf_6;
int i_7;
_Bool _for_condtionalA2;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&i_7, 0, sizeof(int));
    # 46 "libcomelang2-gc.c"
    buf_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 46));
    # 47 "libcomelang2-gc.c"
    buffer_append_str(buf_6,xsprintf("%s %d\n",sname,sline));
    # 52 "libcomelang2-gc.c"
    for(
    i_7=gNumComeStackFrame-2 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        # 49 "libcomelang2-gc.c"
        buffer_append_str(buf_6,xsprintf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]));
    }
    # 55 "libcomelang2-gc.c"
    # 52 "libcomelang2-gc.c"
    if(_if_conditional3=gComeStackFrameBuffer,    _if_conditional3) {
        # 53 "libcomelang2-gc.c"
        free(gComeStackFrameBuffer);
    }
    # 55 "libcomelang2-gc.c"
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_6));
}

void exception_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 60 "libcomelang2-gc.c"
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
    # 68 "libcomelang2-gc.c"
    for(
    i_8=gNumComeStackFrame-1 ,    0;    _for_condtionalA3=    i_8>=0 ,    _for_condtionalA3;    i_8-- ,    0    ){
        # 66 "libcomelang2-gc.c"
        printf("%s %d\n",gComeStackFrameSName[i_8],gComeStackFrameSLine[i_8]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 72 "libcomelang2-gc.c"
    __result13__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result13__;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
void* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 83 "libcomelang2-gc.c"
    # 77 "libcomelang2-gc.c"
    if(_if_conditional4=mem==((void*)0),    _if_conditional4) {
        # 78 "libcomelang2-gc.c"
        printf("%s %d: null check error\n",sname,sline);
        # 79 "libcomelang2-gc.c"
        stackframe();
        # 80 "libcomelang2-gc.c"
        exit(2);
    }
    # 83 "libcomelang2-gc.c"
    __result14__ = __result_obj__ = mem;
    return __result14__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
void* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 94 "libcomelang2-gc.c"
    # 88 "libcomelang2-gc.c"
    if(_if_conditional5=mem==((void*)0),    _if_conditional5) {
        # 89 "libcomelang2-gc.c"
        printf("%s %d: null check error\n",sname,sline);
        # 90 "libcomelang2-gc.c"
        stackframe();
        # 91 "libcomelang2-gc.c"
        exit(2);
    }
    # 100 "libcomelang2-gc.c"
    # 94 "libcomelang2-gc.c"
    if(_if_conditional6=mem<begin,    _if_conditional6) {
        # 95 "libcomelang2-gc.c"
        printf("%s %d: range check error\n",sname,sline);
        # 96 "libcomelang2-gc.c"
        stackframe();
        # 97 "libcomelang2-gc.c"
        exit(2);
    }
    # 106 "libcomelang2-gc.c"
    # 100 "libcomelang2-gc.c"
    if(_if_conditional7=mem>=end,    _if_conditional7) {
        # 101 "libcomelang2-gc.c"
        printf("%s %d: range check error\n",sname,sline);
        # 102 "libcomelang2-gc.c"
        stackframe();
        # 103 "libcomelang2-gc.c"
        exit(2);
    }
    # 106 "libcomelang2-gc.c"
    __result15__ = __result_obj__ = mem;
    return __result15__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool __result16__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 120 "libcomelang2-gc.c"
    # 111 "libcomelang2-gc.c"
    if(_if_conditional8=!self,    _if_conditional8) {
        # 112 "libcomelang2-gc.c"
        block(parent);
        # 116 "libcomelang2-gc.c"
        # 113 "libcomelang2-gc.c"
        if(_if_conditional9=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional9) {
            # 114 "libcomelang2-gc.c"
            __result16__ = self;
            return __result16__;
        }
        # 116 "libcomelang2-gc.c"
        stackframe();
        # 117 "libcomelang2-gc.c"
        exit(1);
    }
    # 120 "libcomelang2-gc.c"
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
    # 125 "libcomelang2-gc.c"
    __result18__ = self;
    return __result18__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional11;
int __result19__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 138 "libcomelang2-gc.c"
    # 130 "libcomelang2-gc.c"
    if(_if_conditional10=self<0,    _if_conditional10) {
        # 131 "libcomelang2-gc.c"
        block(parent);
        # 136 "libcomelang2-gc.c"
        # 133 "libcomelang2-gc.c"
        if(_if_conditional11=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional11) {
            # 134 "libcomelang2-gc.c"
            __result19__ = self;
            return __result19__;
        }
    }
    # 138 "libcomelang2-gc.c"
    __result20__ = self;
    return __result20__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 152 "libcomelang2-gc.c"
    # 143 "libcomelang2-gc.c"
    if(_if_conditional12=self<0,    _if_conditional12) {
        # 144 "libcomelang2-gc.c"
        block(parent);
        # 148 "libcomelang2-gc.c"
        # 145 "libcomelang2-gc.c"
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            # 146 "libcomelang2-gc.c"
            __result21__ = self;
            return __result21__;
        }
        # 148 "libcomelang2-gc.c"
        stackframe();
        # 149 "libcomelang2-gc.c"
        exit(1);
    }
    # 152 "libcomelang2-gc.c"
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
    # 157 "libcomelang2-gc.c"
    __result23__ = self;
    return __result23__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 169 "libcomelang2-gc.c"
    # 162 "libcomelang2-gc.c"
    if(_if_conditional14=self<0,    _if_conditional14) {
        # 163 "libcomelang2-gc.c"
        block(parent);
        # 167 "libcomelang2-gc.c"
        # 164 "libcomelang2-gc.c"
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            # 165 "libcomelang2-gc.c"
            __result24__ = self;
            return __result24__;
        }
    }
    # 169 "libcomelang2-gc.c"
    __result25__ = self;
    return __result25__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 181 "libcomelang2-gc.c"
    # 174 "libcomelang2-gc.c"
    if(_if_conditional16=!self,    _if_conditional16) {
        # 175 "libcomelang2-gc.c"
        block(parent);
        # 179 "libcomelang2-gc.c"
        # 176 "libcomelang2-gc.c"
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            # 177 "libcomelang2-gc.c"
            __result26__ = self;
            return __result26__;
        }
    }
    # 181 "libcomelang2-gc.c"
    __result27__ = self;
    return __result27__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool __result28__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 194 "libcomelang2-gc.c"
    # 186 "libcomelang2-gc.c"
    if(_if_conditional18=!self,    _if_conditional18) {
        # 187 "libcomelang2-gc.c"
        block(parent);
        # 192 "libcomelang2-gc.c"
        # 189 "libcomelang2-gc.c"
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            # 190 "libcomelang2-gc.c"
            __result28__ = self;
            return __result28__;
        }
    }
    # 194 "libcomelang2-gc.c"
    __result29__ = self;
    return __result29__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 199 "libcomelang2-gc.c"
    printf("%s...",msg);
    # 204 "libcomelang2-gc.c"
    # 200 "libcomelang2-gc.c"
    if(_if_conditional20=!test,    _if_conditional20) {
        # 201 "libcomelang2-gc.c"
        puts("false");
        # 202 "libcomelang2-gc.c"
        exit(2);
    }
    # 204 "libcomelang2-gc.c"
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 218 "libcomelang2-gc.c"
    gComeMallocLib=(_Bool)0;
    # 220 "libcomelang2-gc.c"
    gComeDebugLib=come_debug;
    # 220 "libcomelang2-gc.c"
    gComeGCLib=come_gc;
    # 228 "libcomelang2-gc.c"
    # 222 "libcomelang2-gc.c"
    if(_if_conditional21=gComeGCLib,    _if_conditional21) {
        # 223 "libcomelang2-gc.c"
        GC_init();
        # 224 "libcomelang2-gc.c"
        GC_set_warn_proc(GC_ignore_warn_proc);
        # 225 "libcomelang2-gc.c"
        GC_enable_incremental();
    }
    # 228 "libcomelang2-gc.c"
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 236 "libcomelang2-gc.c"
    # 233 "libcomelang2-gc.c"
    if(_if_conditional22=gComeStackFrameBuffer,    _if_conditional22) {
        # 234 "libcomelang2-gc.c"
        free(gComeStackFrameBuffer);
    }
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
void* result_9;
void* __result30__;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_9, 0, sizeof(void*));
    # 248 "libcomelang2-gc.c"
    # 240 "libcomelang2-gc.c"
    if(_if_conditional23=gComeGCLib,    _if_conditional23) {
        # 241 "libcomelang2-gc.c"
        result_9=GC_malloc(size);
        # 242 "libcomelang2-gc.c"
        memset(result_9,0,size);
        # 243 "libcomelang2-gc.c"
        __result30__ = __result_obj__ = result_9;
        return __result30__;
    }
    else {
        # 246 "libcomelang2-gc.c"
        __result31__ = __result_obj__ = calloc(1,size);
        return __result31__;
    }
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 259 "libcomelang2-gc.c"
    # 252 "libcomelang2-gc.c"
    if(_if_conditional24=mem,    _if_conditional24) {
        # 258 "libcomelang2-gc.c"
        # 253 "libcomelang2-gc.c"
        if(_if_conditional25=gComeGCLib,        _if_conditional25) {
        }
        else {
            # 256 "libcomelang2-gc.c"
            free(mem);
        }
    }
}

void* come_calloc(long int count, long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_10;
long int* ref_count_11;
long int* size2_12;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_10, 0, sizeof(char*));
memset(&ref_count_11, 0, sizeof(long int*));
memset(&size2_12, 0, sizeof(long int*));
    # 263 "libcomelang2-gc.c"
    mem_10=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    # 265 "libcomelang2-gc.c"
    ref_count_11=(long int*)mem_10;
    # 267 "libcomelang2-gc.c"
    *ref_count_11=0;
    # 269 "libcomelang2-gc.c"
    size2_12=(long int*)(mem_10+sizeof(long int));
    # 271 "libcomelang2-gc.c"
    *size2_12=size*count+sizeof(long int)+sizeof(long int);
    # 273 "libcomelang2-gc.c"
    __result32__ = __result_obj__ = mem_10+sizeof(long int)+sizeof(long int);
    return __result32__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
long int* ref_count_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_13, 0, sizeof(long int*));
    # 282 "libcomelang2-gc.c"
    # 278 "libcomelang2-gc.c"
    if(_if_conditional26=mem==((void*)0),    _if_conditional26) {
        # 279 "libcomelang2-gc.c"
        return;
    }
    # 282 "libcomelang2-gc.c"
    ref_count_13=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 284 "libcomelang2-gc.c"
    come_free_mem_of_heap_pool((char*)ref_count_13);
}

void* come_memdup(void* block, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
void* __result33__;
char* mem_14;
long int* size_p_15;
long int size_16;
void* result_17;
void* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_14, 0, sizeof(char*));
memset(&size_p_15, 0, sizeof(long int*));
memset(&size_16, 0, sizeof(long int));
memset(&result_17, 0, sizeof(void*));
    # 293 "libcomelang2-gc.c"
    # 289 "libcomelang2-gc.c"
    if(_if_conditional27=!block,    _if_conditional27) {
        # 290 "libcomelang2-gc.c"
        __result33__ = __result_obj__ = ((void*)0);
        return __result33__;
    }
    # 293 "libcomelang2-gc.c"
    mem_14=(char*)block-sizeof(long int)-sizeof(long int);
    # 295 "libcomelang2-gc.c"
    size_p_15=(long int*)(mem_14+sizeof(long int));
    # 297 "libcomelang2-gc.c"
    size_16=*size_p_15-sizeof(long int)-sizeof(long int);
    # 299 "libcomelang2-gc.c"
    result_17=come_calloc(1,size_16,sname,sline);
    # 301 "libcomelang2-gc.c"
    memcpy(result_17,block,size_16);
    # 303 "libcomelang2-gc.c"
    __result34__ = __result_obj__ = result_17;
    return __result34__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
void* __result35__;
long int* ref_count_18;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_18, 0, sizeof(long int*));
    # 312 "libcomelang2-gc.c"
    # 308 "libcomelang2-gc.c"
    if(_if_conditional28=mem==((void*)0),    _if_conditional28) {
        # 309 "libcomelang2-gc.c"
        __result35__ = __result_obj__ = mem;
        return __result35__;
    }
    # 312 "libcomelang2-gc.c"
    ref_count_18=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 314 "libcomelang2-gc.c"
    (*ref_count_18)++;
    # 316 "libcomelang2-gc.c"
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
void* __result37__;
long int* ref_count_19;
void* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_19, 0, sizeof(long int*));
    # 325 "libcomelang2-gc.c"
    # 321 "libcomelang2-gc.c"
    if(_if_conditional29=mem==((void*)0),    _if_conditional29) {
        # 322 "libcomelang2-gc.c"
        __result37__ = __result_obj__ = mem;
        return __result37__;
    }
    # 325 "libcomelang2-gc.c"
    ref_count_19=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 327 "libcomelang2-gc.c"
    printf("ref_count %ld\n",*ref_count_19);
    # 329 "libcomelang2-gc.c"
    __result38__ = __result_obj__ = mem;
    return __result38__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* __result39__;
long int* ref_count_20;
_Bool _if_conditional31;
long int count_21;
_Bool _if_conditional32;
_Bool _if_conditional33;
void (*finalizer_22)(void*);
void* __result40__;
void* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_20, 0, sizeof(long int*));
memset(&count_21, 0, sizeof(long int));
memset(&finalizer_22, 0, sizeof(void (*)(void*)));
    # 338 "libcomelang2-gc.c"
    # 334 "libcomelang2-gc.c"
    if(_if_conditional30=mem==((void*)0),    _if_conditional30) {
        # 335 "libcomelang2-gc.c"
        __result39__ = __result_obj__ = ((void*)0);
        return __result39__;
    }
    # 338 "libcomelang2-gc.c"
    ref_count_20=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    # 344 "libcomelang2-gc.c"
    # 340 "libcomelang2-gc.c"
    if(_if_conditional31=!no_decrement,    _if_conditional31) {
        # 341 "libcomelang2-gc.c"
        (*ref_count_20)--;
    }
    # 344 "libcomelang2-gc.c"
    count_21=*ref_count_20;
    # 356 "libcomelang2-gc.c"
    # 345 "libcomelang2-gc.c"
    if(_if_conditional32=!no_free&&(count_21<=0||force_delete_),    _if_conditional32) {
        # 352 "libcomelang2-gc.c"
        # 346 "libcomelang2-gc.c"
        if(_if_conditional33=protocol_obj&&protocol_fun,        _if_conditional33) {
            # 347 "libcomelang2-gc.c"
            finalizer_22=protocol_fun;
            # 348 "libcomelang2-gc.c"
            finalizer_22(protocol_obj);
            # 350 "libcomelang2-gc.c"
            come_free_object(protocol_obj);
        }
        # 352 "libcomelang2-gc.c"
        come_free_object(mem);
        # 353 "libcomelang2-gc.c"
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    # 356 "libcomelang2-gc.c"
    __result41__ = __result_obj__ = mem;
    return __result41__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
void (*finalizer_23)(void*);
void (*finalizer_24)(void*);
long int* ref_count_25;
_Bool _if_conditional38;
long int count_26;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
void (*finalizer_27)(void*);
_Bool _if_conditional42;
void (*finalizer_28)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_23, 0, sizeof(void (*)(void*)));
memset(&finalizer_24, 0, sizeof(void (*)(void*)));
memset(&ref_count_25, 0, sizeof(long int*));
memset(&count_26, 0, sizeof(long int));
memset(&finalizer_27, 0, sizeof(void (*)(void*)));
memset(&finalizer_28, 0, sizeof(void (*)(void*)));
    # 365 "libcomelang2-gc.c"
    # 361 "libcomelang2-gc.c"
    if(_if_conditional34=mem==((void*)0),    _if_conditional34) {
        # 362 "libcomelang2-gc.c"
        return;
    }
    # 398 "libcomelang2-gc.c"
    # 365 "libcomelang2-gc.c"
    if(_if_conditional35=call_finalizer_only,    _if_conditional35) {
        # 374 "libcomelang2-gc.c"
        # 366 "libcomelang2-gc.c"
        if(_if_conditional36=fun,        _if_conditional36) {
            # 371 "libcomelang2-gc.c"
            # 367 "libcomelang2-gc.c"
            if(_if_conditional37=protocol_obj&&protocol_fun,            _if_conditional37) {
                # 368 "libcomelang2-gc.c"
                finalizer_23=protocol_fun;
                # 369 "libcomelang2-gc.c"
                finalizer_23(protocol_obj);
            }
            # 371 "libcomelang2-gc.c"
            finalizer_24=fun;
            # 372 "libcomelang2-gc.c"
            finalizer_24(mem);
        }
    }
    else {
        # 376 "libcomelang2-gc.c"
        ref_count_25=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        # 382 "libcomelang2-gc.c"
        # 378 "libcomelang2-gc.c"
        if(_if_conditional38=!no_decrement,        _if_conditional38) {
            # 379 "libcomelang2-gc.c"
            (*ref_count_25)--;
        }
        # 382 "libcomelang2-gc.c"
        count_26=*ref_count_25;
        # 397 "libcomelang2-gc.c"
        # 383 "libcomelang2-gc.c"
        if(_if_conditional39=!no_free&&(count_26<=0||force_delete_),        _if_conditional39) {
            # 396 "libcomelang2-gc.c"
            # 384 "libcomelang2-gc.c"
            if(_if_conditional40=mem,            _if_conditional40) {
                # 390 "libcomelang2-gc.c"
                # 385 "libcomelang2-gc.c"
                if(_if_conditional41=protocol_obj&&protocol_fun,                _if_conditional41) {
                    # 386 "libcomelang2-gc.c"
                    finalizer_27=protocol_fun;
                    # 387 "libcomelang2-gc.c"
                    finalizer_27(protocol_obj);
                    # 388 "libcomelang2-gc.c"
                    come_free_object(protocol_obj);
                }
                # 394 "libcomelang2-gc.c"
                # 390 "libcomelang2-gc.c"
                if(_if_conditional42=fun,                _if_conditional42) {
                    # 391 "libcomelang2-gc.c"
                    finalizer_28=fun;
                    # 392 "libcomelang2-gc.c"
                    finalizer_28(mem);
                }
                # 394 "libcomelang2-gc.c"
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
char* __result42__;
int len_29;
char* result_30;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_29, 0, sizeof(int));
memset(&result_30, 0, sizeof(char*));
    # 405 "libcomelang2-gc.c"
    # 402 "libcomelang2-gc.c"
    if(_if_conditional43=str==((void*)0),    _if_conditional43) {
        # 403 "libcomelang2-gc.c"
        __result42__ = __result_obj__ = ((void*)0);
        return __result42__;
    }
    # 405 "libcomelang2-gc.c"
    len_29=strlen(str)+1;
    # 407 "libcomelang2-gc.c"
    result_30=(char*)come_calloc(1, sizeof(char)*(1*(len_29)), "libcomelang2-gc.c", 407);
    # 409 "libcomelang2-gc.c"
    strncpy(result_30,str,len_29);
    # 411 "libcomelang2-gc.c"
    __result43__ = __result_obj__ = result_30;
    return __result43__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_31;
int i_32;
_Bool _for_condtionalA4;
_Bool _if_conditional44;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_31, 0, sizeof(_Bool));
memset(&i_32, 0, sizeof(int));
    # 416 "libcomelang2-gc.c"
    found_31=(_Bool)0;
    # 423 "libcomelang2-gc.c"
    for(
    i_32=0 ,    0;    _for_condtionalA4=    i_32<len ,    _for_condtionalA4;    i_32++ ,    0    ){
        # 422 "libcomelang2-gc.c"
        # 418 "libcomelang2-gc.c"
        if(_if_conditional44=array[i_32]==element,        _if_conditional44) {
            # 419 "libcomelang2-gc.c"
            found_31=(_Bool)1;
            # 420 "libcomelang2-gc.c"
            break;
        }
    }
    # 423 "libcomelang2-gc.c"
    __result44__ = found_31;
    return __result44__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 431 "libcomelang2-gc.c"
    self->size=128;
    # 432 "libcomelang2-gc.c"
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 432);
    # 433 "libcomelang2-gc.c"
    self->buf[0]=0;
    # 434 "libcomelang2-gc.c"
    self->len=0;
    # 436 "libcomelang2-gc.c"
    __result45__ = __result_obj__ = self;
    return __result45__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 441 "libcomelang2-gc.c"
    # 441 "libcomelang2-gc.c"
    if(_if_conditional45=self&&self->buf,    _if_conditional45) {
        # 441 "libcomelang2-gc.c"
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 445 "libcomelang2-gc.c"
    # 445 "libcomelang2-gc.c"
    if(_if_conditional46=self&&self->buf,    _if_conditional46) {
        # 445 "libcomelang2-gc.c"
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct buffer* __result46__;
struct buffer* result_33;
struct buffer* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_33, 0, sizeof(struct buffer*));
    # 454 "libcomelang2-gc.c"
    # 450 "libcomelang2-gc.c"
    if(_if_conditional47=self==((void*)0),    _if_conditional47) {
        # 451 "libcomelang2-gc.c"
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    # 454 "libcomelang2-gc.c"
    result_33=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 454);
    # 456 "libcomelang2-gc.c"
    result_33->size=self->size;
    # 457 "libcomelang2-gc.c"
    result_33->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 457);
    # 458 "libcomelang2-gc.c"
    result_33->len=self->len;
    # 459 "libcomelang2-gc.c"
    memcpy(result_33->buf,self->buf,self->len);
    # 461 "libcomelang2-gc.c"
    __result47__ = __result_obj__ = result_33;
    return __result47__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
int __result48__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 469 "libcomelang2-gc.c"
    # 466 "libcomelang2-gc.c"
    if(_if_conditional48=self==((void*)0),    _if_conditional48) {
        # 467 "libcomelang2-gc.c"
        __result48__ = 0;
        return __result48__;
    }
    # 469 "libcomelang2-gc.c"
    __result49__ = self->len;
    return __result49__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 477 "libcomelang2-gc.c"
    # 474 "libcomelang2-gc.c"
    if(_if_conditional49=self==((void*)0),    _if_conditional49) {
        # 475 "libcomelang2-gc.c"
        return;
    }
    # 477 "libcomelang2-gc.c"
    self->buf[0]=0;
    # 478 "libcomelang2-gc.c"
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 486 "libcomelang2-gc.c"
    # 483 "libcomelang2-gc.c"
    if(_if_conditional50=self==((void*)0),    _if_conditional50) {
        # 484 "libcomelang2-gc.c"
        return;
    }
    # 486 "libcomelang2-gc.c"
    self->len-=len;
    # 487 "libcomelang2-gc.c"
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct buffer* __result50__;
_Bool _if_conditional52;
char* old_buf_34;
int old_len_35;
int new_size_36;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_34, 0, sizeof(char*));
memset(&old_len_35, 0, sizeof(int));
memset(&new_size_36, 0, sizeof(int));
    # 495 "libcomelang2-gc.c"
    # 492 "libcomelang2-gc.c"
    if(_if_conditional51=self==((void*)0)||mem==((void*)0),    _if_conditional51) {
        # 493 "libcomelang2-gc.c"
        __result50__ = __result_obj__ = self;
        return __result50__;
    }
    # 506 "libcomelang2-gc.c"
    # 495 "libcomelang2-gc.c"
    if(_if_conditional52=self->len+size+1+1>=self->size,    _if_conditional52) {
        # 496 "libcomelang2-gc.c"
        old_buf_34=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 496);
        # 497 "libcomelang2-gc.c"
        memcpy(old_buf_34,self->buf,self->size);
        # 498 "libcomelang2-gc.c"
        old_len_35=self->len;
        # 499 "libcomelang2-gc.c"
        new_size_36=(self->size+size+1)*2;
        # 500 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_36)), "libcomelang2-gc.c", 500);
        # 501 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_34,old_len_35);
        # 502 "libcomelang2-gc.c"
        self->buf[old_len_35]=0;
        # 503 "libcomelang2-gc.c"
        self->size=new_size_36;
    }
    # 506 "libcomelang2-gc.c"
    memcpy(self->buf+self->len,mem,size);
    # 507 "libcomelang2-gc.c"
    self->len+=size;
    # 508 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 510 "libcomelang2-gc.c"
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
struct buffer* __result52__;
_Bool _if_conditional54;
char* old_buf_37;
int old_len_38;
int new_size_39;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_37, 0, sizeof(char*));
memset(&old_len_38, 0, sizeof(int));
memset(&new_size_39, 0, sizeof(int));
    # 518 "libcomelang2-gc.c"
    # 515 "libcomelang2-gc.c"
    if(_if_conditional53=self==((void*)0),    _if_conditional53) {
        # 516 "libcomelang2-gc.c"
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    # 529 "libcomelang2-gc.c"
    # 518 "libcomelang2-gc.c"
    if(_if_conditional54=self->len+1+1+1>=self->size,    _if_conditional54) {
        # 519 "libcomelang2-gc.c"
        old_buf_37=charp_clone(self->buf);
        # 520 "libcomelang2-gc.c"
        old_len_38=self->len;
        # 522 "libcomelang2-gc.c"
        new_size_39=(self->size+10+1)*2;
        # 523 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_39)), "libcomelang2-gc.c", 523);
        # 524 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_37,old_len_38);
        # 525 "libcomelang2-gc.c"
        self->buf[old_len_38]=0;
        # 526 "libcomelang2-gc.c"
        self->size=new_size_39;
    }
    # 529 "libcomelang2-gc.c"
    self->buf[self->len]=c;
    # 530 "libcomelang2-gc.c"
    self->len++;
    # 532 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 534 "libcomelang2-gc.c"
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional55;
struct buffer* __result54__;
int size_40;
_Bool _if_conditional56;
char* old_buf_41;
int old_len_42;
int new_size_43;
struct buffer* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_40, 0, sizeof(int));
memset(&old_buf_41, 0, sizeof(char*));
memset(&old_len_42, 0, sizeof(int));
memset(&new_size_43, 0, sizeof(int));
    # 543 "libcomelang2-gc.c"
    # 539 "libcomelang2-gc.c"
    if(_if_conditional55=self==((void*)0)||mem==((void*)0),    _if_conditional55) {
        # 540 "libcomelang2-gc.c"
        __result54__ = __result_obj__ = self;
        return __result54__;
    }
    # 543 "libcomelang2-gc.c"
    size_40=strlen(mem);
    # 555 "libcomelang2-gc.c"
    # 544 "libcomelang2-gc.c"
    if(_if_conditional56=self->len+size_40+1+1>=self->size,    _if_conditional56) {
        # 545 "libcomelang2-gc.c"
        old_buf_41=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 545);
        # 546 "libcomelang2-gc.c"
        memcpy(old_buf_41,self->buf,self->size);
        # 547 "libcomelang2-gc.c"
        old_len_42=self->len;
        # 548 "libcomelang2-gc.c"
        new_size_43=(self->size+size_40+1)*2;
        # 549 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_43)), "libcomelang2-gc.c", 549);
        # 550 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_41,old_len_42);
        # 551 "libcomelang2-gc.c"
        self->buf[old_len_42]=0;
        # 552 "libcomelang2-gc.c"
        self->size=new_size_43;
    }
    # 555 "libcomelang2-gc.c"
    memcpy(self->buf+self->len,mem,size_40);
    # 556 "libcomelang2-gc.c"
    self->len+=size_40;
    # 557 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 559 "libcomelang2-gc.c"
    __result55__ = __result_obj__ = self;
    return __result55__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct buffer* __result56__;
int size_44;
_Bool _if_conditional58;
char* old_buf_45;
int old_len_46;
int new_size_47;
struct buffer* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_44, 0, sizeof(int));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
    # 567 "libcomelang2-gc.c"
    # 564 "libcomelang2-gc.c"
    if(_if_conditional57=self==((void*)0)||mem==((void*)0),    _if_conditional57) {
        # 565 "libcomelang2-gc.c"
        __result56__ = __result_obj__ = self;
        return __result56__;
    }
    # 567 "libcomelang2-gc.c"
    size_44=strlen(mem)+1;
    # 579 "libcomelang2-gc.c"
    # 568 "libcomelang2-gc.c"
    if(_if_conditional58=self->len+size_44+1+1+1>=self->size,    _if_conditional58) {
        # 569 "libcomelang2-gc.c"
        old_buf_45=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 569);
        # 570 "libcomelang2-gc.c"
        memcpy(old_buf_45,self->buf,self->size);
        # 571 "libcomelang2-gc.c"
        old_len_46=self->len;
        # 572 "libcomelang2-gc.c"
        new_size_47=(self->size+size_44+1)*2;
        # 573 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2-gc.c", 573);
        # 574 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_45,old_len_46);
        # 575 "libcomelang2-gc.c"
        self->buf[old_len_46]=0;
        # 576 "libcomelang2-gc.c"
        self->size=new_size_47;
    }
    # 579 "libcomelang2-gc.c"
    memcpy(self->buf+self->len,mem,size_44);
    # 580 "libcomelang2-gc.c"
    self->len+=size_44;
    # 581 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 582 "libcomelang2-gc.c"
    self->len++;
    # 584 "libcomelang2-gc.c"
    __result57__ = __result_obj__ = self;
    return __result57__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct buffer* __result58__;
int* mem_48;
int size_49;
_Bool _if_conditional60;
char* old_buf_50;
int old_len_51;
int new_size_52;
struct buffer* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_48, 0, sizeof(int*));
memset(&size_49, 0, sizeof(int));
memset(&old_buf_50, 0, sizeof(char*));
memset(&old_len_51, 0, sizeof(int));
memset(&new_size_52, 0, sizeof(int));
    # 592 "libcomelang2-gc.c"
    # 589 "libcomelang2-gc.c"
    if(_if_conditional59=self==((void*)0),    _if_conditional59) {
        # 590 "libcomelang2-gc.c"
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    # 592 "libcomelang2-gc.c"
    mem_48=&value;
    # 593 "libcomelang2-gc.c"
    size_49=sizeof(int);
    # 606 "libcomelang2-gc.c"
    # 595 "libcomelang2-gc.c"
    if(_if_conditional60=self->len+size_49+1+1>=self->size,    _if_conditional60) {
        # 596 "libcomelang2-gc.c"
        old_buf_50=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 596);
        # 597 "libcomelang2-gc.c"
        memcpy(old_buf_50,self->buf,self->size);
        # 598 "libcomelang2-gc.c"
        old_len_51=self->len;
        # 599 "libcomelang2-gc.c"
        new_size_52=(self->size+size_49+1)*2;
        # 600 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_52)), "libcomelang2-gc.c", 600);
        # 601 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_50,old_len_51);
        # 602 "libcomelang2-gc.c"
        self->buf[old_len_51]=0;
        # 603 "libcomelang2-gc.c"
        self->size=new_size_52;
    }
    # 606 "libcomelang2-gc.c"
    memcpy(self->buf+self->len,mem_48,size_49);
    # 607 "libcomelang2-gc.c"
    self->len+=size_49;
    # 608 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 610 "libcomelang2-gc.c"
    __result59__ = __result_obj__ = self;
    return __result59__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_53;
int size_54;
_Bool _if_conditional61;
char* old_buf_55;
int old_len_56;
int new_size_57;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_53, 0, sizeof(long*));
memset(&size_54, 0, sizeof(int));
memset(&old_buf_55, 0, sizeof(char*));
memset(&old_len_56, 0, sizeof(int));
memset(&new_size_57, 0, sizeof(int));
    # 615 "libcomelang2-gc.c"
    mem_53=&value;
    # 616 "libcomelang2-gc.c"
    size_54=sizeof(long);
    # 629 "libcomelang2-gc.c"
    # 618 "libcomelang2-gc.c"
    if(_if_conditional61=self->len+size_54+1+1>=self->size,    _if_conditional61) {
        # 619 "libcomelang2-gc.c"
        old_buf_55=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 619);
        # 620 "libcomelang2-gc.c"
        memcpy(old_buf_55,self->buf,self->size);
        # 621 "libcomelang2-gc.c"
        old_len_56=self->len;
        # 622 "libcomelang2-gc.c"
        new_size_57=(self->size+size_54+1)*2;
        # 623 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_57)), "libcomelang2-gc.c", 623);
        # 624 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_55,old_len_56);
        # 625 "libcomelang2-gc.c"
        self->buf[old_len_56]=0;
        # 626 "libcomelang2-gc.c"
        self->size=new_size_57;
    }
    # 629 "libcomelang2-gc.c"
    memcpy(self->buf+self->len,mem_53,size_54);
    # 630 "libcomelang2-gc.c"
    self->len+=size_54;
    # 631 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 633 "libcomelang2-gc.c"
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
struct buffer* __result61__;
short short* mem_58;
int size_59;
_Bool _if_conditional63;
char* old_buf_60;
int old_len_61;
int new_size_62;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_58, 0, sizeof(short short*));
memset(&size_59, 0, sizeof(int));
memset(&old_buf_60, 0, sizeof(char*));
memset(&old_len_61, 0, sizeof(int));
memset(&new_size_62, 0, sizeof(int));
    # 642 "libcomelang2-gc.c"
    # 638 "libcomelang2-gc.c"
    if(_if_conditional62=self==((void*)0),    _if_conditional62) {
        # 639 "libcomelang2-gc.c"
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    # 642 "libcomelang2-gc.c"
    mem_58=&value;
    # 643 "libcomelang2-gc.c"
    size_59=sizeof(short short);
    # 656 "libcomelang2-gc.c"
    # 645 "libcomelang2-gc.c"
    if(_if_conditional63=self->len+size_59+1+1>=self->size,    _if_conditional63) {
        # 646 "libcomelang2-gc.c"
        old_buf_60=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 646);
        # 647 "libcomelang2-gc.c"
        memcpy(old_buf_60,self->buf,self->size);
        # 648 "libcomelang2-gc.c"
        old_len_61=self->len;
        # 649 "libcomelang2-gc.c"
        new_size_62=(self->size+size_59+1)*2;
        # 650 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_62)), "libcomelang2-gc.c", 650);
        # 651 "libcomelang2-gc.c"
        memcpy(self->buf,old_buf_60,old_len_61);
        # 652 "libcomelang2-gc.c"
        self->buf[old_len_61]=0;
        # 653 "libcomelang2-gc.c"
        self->size=new_size_62;
    }
    # 656 "libcomelang2-gc.c"
    memcpy(self->buf+self->len,mem_58,size_59);
    # 657 "libcomelang2-gc.c"
    self->len+=size_59;
    # 658 "libcomelang2-gc.c"
    self->buf[self->len]=0;
    # 660 "libcomelang2-gc.c"
    __result62__ = __result_obj__ = self;
    return __result62__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
struct buffer* __result63__;
int len_63;
_Bool _if_conditional65;
int new_size_64;
int i_65;
_Bool _for_condtionalA5;
struct buffer* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_63, 0, sizeof(int));
memset(&new_size_64, 0, sizeof(int));
memset(&i_65, 0, sizeof(int));
    # 669 "libcomelang2-gc.c"
    # 665 "libcomelang2-gc.c"
    if(_if_conditional64=self==((void*)0),    _if_conditional64) {
        # 666 "libcomelang2-gc.c"
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    # 669 "libcomelang2-gc.c"
    len_63=self->len;
    # 670 "libcomelang2-gc.c"
    len_63=(len_63+3)&~3;
    # 678 "libcomelang2-gc.c"
    # 672 "libcomelang2-gc.c"
    if(_if_conditional65=len_63>=self->size,    _if_conditional65) {
        # 673 "libcomelang2-gc.c"
        new_size_64=(self->size+1+1)*2;
        # 674 "libcomelang2-gc.c"
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_64)), "libcomelang2-gc.c", 674);
        # 675 "libcomelang2-gc.c"
        self->size=new_size_64;
    }
    # 682 "libcomelang2-gc.c"
    for(
    i_65=self->len ,    0;    _for_condtionalA5=    i_65<len_63 ,    _for_condtionalA5;    i_65++ ,    0    ){
        # 679 "libcomelang2-gc.c"
        self->buf[i_65]=0;
    }
    # 682 "libcomelang2-gc.c"
    self->len=len_63;
    # 684 "libcomelang2-gc.c"
    __result64__ = __result_obj__ = self;
    return __result64__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct optional$2intbool* __result66__;
_Bool _if_conditional67;
struct optional$2intbool* __result67__;
_Bool _if_conditional68;
struct optional$2intbool* __result68__;
struct optional$2intbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 699 "libcomelang2-gc.c"
    # 689 "libcomelang2-gc.c"
    if(_if_conditional66=left==((void*)0)&&right==((void*)0),    _if_conditional66) {
        # 690 "libcomelang2-gc.c"
        __result66__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 690),0,(_Bool)0);
        return __result66__;
    }
    else {
        # 699 "libcomelang2-gc.c"
        # 692 "libcomelang2-gc.c"
        if(_if_conditional67=left==((void*)0),        _if_conditional67) {
            # 693 "libcomelang2-gc.c"
            __result67__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 693),-1,(_Bool)0);
            return __result67__;
        }
        else {
            # 699 "libcomelang2-gc.c"
            # 695 "libcomelang2-gc.c"
            if(_if_conditional68=right==((void*)0),            _if_conditional68) {
                # 696 "libcomelang2-gc.c"
                __result68__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 696),1,(_Bool)0);
                return __result68__;
            }
        }
    }
    # 699 "libcomelang2-gc.c"
    __result69__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 699),strcmp(left->buf,right->buf),(_Bool)1);
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
            return __result65__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_66;
_Bool _if_conditional69;
struct buffer* __result70__;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_66, 0, sizeof(struct buffer*));
    # 704 "libcomelang2-gc.c"
    result_66=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 704));
    # 710 "libcomelang2-gc.c"
    # 706 "libcomelang2-gc.c"
    if(_if_conditional69=self==((void*)0),    _if_conditional69) {
        # 707 "libcomelang2-gc.c"
        __result70__ = __result_obj__ = result_66;
        return __result70__;
    }
    # 710 "libcomelang2-gc.c"
    buffer_append_str(result_66,self);
    # 712 "libcomelang2-gc.c"
    __result71__ = __result_obj__ = result_66;
    return __result71__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_67;
_Bool _if_conditional70;
struct buffer* __result72__;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_67, 0, sizeof(struct buffer*));
    # 717 "libcomelang2-gc.c"
    result_67=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 717));
    # 723 "libcomelang2-gc.c"
    # 719 "libcomelang2-gc.c"
    if(_if_conditional70=self==((void*)0),    _if_conditional70) {
        # 720 "libcomelang2-gc.c"
        __result72__ = __result_obj__ = result_67;
        return __result72__;
    }
    # 723 "libcomelang2-gc.c"
    buffer_append_str(result_67,self);
    # 725 "libcomelang2-gc.c"
    __result73__ = __result_obj__ = result_67;
    return __result73__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
char* __result74__;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 734 "libcomelang2-gc.c"
    # 730 "libcomelang2-gc.c"
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        # 731 "libcomelang2-gc.c"
        __result74__ = __result_obj__ = __builtin_string("");
        return __result74__;
    }
    # 734 "libcomelang2-gc.c"
    __result75__ = __result_obj__ = __builtin_string(self->buf);
    return __result75__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 742 "libcomelang2-gc.c"
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
    # 747 "libcomelang2-gc.c"
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
    # 752 "libcomelang2-gc.c"
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
    # 757 "libcomelang2-gc.c"
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
    # 762 "libcomelang2-gc.c"
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
    # 767 "libcomelang2-gc.c"
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
    # 772 "libcomelang2-gc.c"
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
    # 777 "libcomelang2-gc.c"
    __result83__ = self==right;
    return __result83__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
struct optional$2boolbool* __result85__;
_Bool _if_conditional73;
struct optional$2boolbool* __result86__;
_Bool _if_conditional74;
struct optional$2boolbool* __result87__;
struct optional$2boolbool* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 792 "libcomelang2-gc.c"
    # 782 "libcomelang2-gc.c"
    if(_if_conditional72=self==((void*)0)&&right==((void*)0),    _if_conditional72) {
        # 783 "libcomelang2-gc.c"
        __result85__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 783),(_Bool)1,(_Bool)0);
        return __result85__;
    }
    else {
        # 792 "libcomelang2-gc.c"
        # 785 "libcomelang2-gc.c"
        if(_if_conditional73=self==((void*)0),        _if_conditional73) {
            # 786 "libcomelang2-gc.c"
            __result86__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 786),(_Bool)0,(_Bool)0);
            return __result86__;
        }
        else {
            # 792 "libcomelang2-gc.c"
            # 788 "libcomelang2-gc.c"
            if(_if_conditional74=right==((void*)0),            _if_conditional74) {
                # 789 "libcomelang2-gc.c"
                __result87__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 789),(_Bool)0,(_Bool)0);
                return __result87__;
            }
        }
    }
    # 792 "libcomelang2-gc.c"
    __result88__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 792),strcmp(self,right)==0,(_Bool)1);
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
            return __result84__;
}

struct optional$2boolbool* charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct optional$2boolbool* __result89__;
_Bool _if_conditional76;
struct optional$2boolbool* __result90__;
_Bool _if_conditional77;
struct optional$2boolbool* __result91__;
struct optional$2boolbool* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 807 "libcomelang2-gc.c"
    # 797 "libcomelang2-gc.c"
    if(_if_conditional75=self==((void*)0)&&right==((void*)0),    _if_conditional75) {
        # 798 "libcomelang2-gc.c"
        __result89__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 798),(_Bool)1,(_Bool)0);
        return __result89__;
    }
    else {
        # 807 "libcomelang2-gc.c"
        # 800 "libcomelang2-gc.c"
        if(_if_conditional76=self==((void*)0),        _if_conditional76) {
            # 801 "libcomelang2-gc.c"
            __result90__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 801),(_Bool)0,(_Bool)0);
            return __result90__;
        }
        else {
            # 807 "libcomelang2-gc.c"
            # 803 "libcomelang2-gc.c"
            if(_if_conditional77=right==((void*)0),            _if_conditional77) {
                # 804 "libcomelang2-gc.c"
                __result91__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 804),(_Bool)0,(_Bool)0);
                return __result91__;
            }
        }
    }
    # 807 "libcomelang2-gc.c"
    __result92__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 807),strcmp(self,right)==0,(_Bool)1);
    return __result92__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
_Bool __result93__;
_Bool _if_conditional79;
_Bool __result94__;
_Bool _if_conditional80;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 822 "libcomelang2-gc.c"
    # 812 "libcomelang2-gc.c"
    if(_if_conditional78=self==((void*)0)&&right==((void*)0),    _if_conditional78) {
        # 813 "libcomelang2-gc.c"
        __result93__ = (_Bool)1;
        return __result93__;
    }
    else {
        # 822 "libcomelang2-gc.c"
        # 815 "libcomelang2-gc.c"
        if(_if_conditional79=self==((void*)0),        _if_conditional79) {
            # 816 "libcomelang2-gc.c"
            __result94__ = (_Bool)0;
            return __result94__;
        }
        else {
            # 822 "libcomelang2-gc.c"
            # 818 "libcomelang2-gc.c"
            if(_if_conditional80=right==((void*)0),            _if_conditional80) {
                # 819 "libcomelang2-gc.c"
                __result95__ = (_Bool)0;
                return __result95__;
            }
        }
    }
    # 822 "libcomelang2-gc.c"
    __result96__ = strcmp(self,right)==0;
    return __result96__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
_Bool __result97__;
_Bool _if_conditional82;
_Bool __result98__;
_Bool _if_conditional83;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 837 "libcomelang2-gc.c"
    # 827 "libcomelang2-gc.c"
    if(_if_conditional81=self==((void*)0)&&right==((void*)0),    _if_conditional81) {
        # 828 "libcomelang2-gc.c"
        __result97__ = (_Bool)1;
        return __result97__;
    }
    else {
        # 837 "libcomelang2-gc.c"
        # 830 "libcomelang2-gc.c"
        if(_if_conditional82=self==((void*)0),        _if_conditional82) {
            # 831 "libcomelang2-gc.c"
            __result98__ = (_Bool)0;
            return __result98__;
        }
        else {
            # 837 "libcomelang2-gc.c"
            # 833 "libcomelang2-gc.c"
            if(_if_conditional83=right==((void*)0),            _if_conditional83) {
                # 834 "libcomelang2-gc.c"
                __result99__ = (_Bool)0;
                return __result99__;
            }
        }
    }
    # 837 "libcomelang2-gc.c"
    __result100__ = strcmp(self,right)==0;
    return __result100__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
_Bool __result101__;
_Bool _if_conditional85;
_Bool __result102__;
_Bool _if_conditional86;
_Bool __result103__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 852 "libcomelang2-gc.c"
    # 842 "libcomelang2-gc.c"
    if(_if_conditional84=self==((void*)0)&&right==((void*)0),    _if_conditional84) {
        # 843 "libcomelang2-gc.c"
        __result101__ = (_Bool)0;
        return __result101__;
    }
    else {
        # 852 "libcomelang2-gc.c"
        # 845 "libcomelang2-gc.c"
        if(_if_conditional85=self==((void*)0),        _if_conditional85) {
            # 846 "libcomelang2-gc.c"
            __result102__ = (_Bool)1;
            return __result102__;
        }
        else {
            # 852 "libcomelang2-gc.c"
            # 848 "libcomelang2-gc.c"
            if(_if_conditional86=right==((void*)0),            _if_conditional86) {
                # 849 "libcomelang2-gc.c"
                __result103__ = (_Bool)1;
                return __result103__;
            }
        }
    }
    # 852 "libcomelang2-gc.c"
    __result104__ = strcmp(self,right)!=0;
    return __result104__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
_Bool __result105__;
_Bool _if_conditional88;
_Bool __result106__;
_Bool _if_conditional89;
_Bool __result107__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 867 "libcomelang2-gc.c"
    # 857 "libcomelang2-gc.c"
    if(_if_conditional87=self==((void*)0)&&right==((void*)0),    _if_conditional87) {
        # 858 "libcomelang2-gc.c"
        __result105__ = (_Bool)0;
        return __result105__;
    }
    else {
        # 867 "libcomelang2-gc.c"
        # 860 "libcomelang2-gc.c"
        if(_if_conditional88=self==((void*)0),        _if_conditional88) {
            # 861 "libcomelang2-gc.c"
            __result106__ = (_Bool)1;
            return __result106__;
        }
        else {
            # 867 "libcomelang2-gc.c"
            # 863 "libcomelang2-gc.c"
            if(_if_conditional89=right==((void*)0),            _if_conditional89) {
                # 864 "libcomelang2-gc.c"
                __result107__ = (_Bool)1;
                return __result107__;
            }
        }
    }
    # 867 "libcomelang2-gc.c"
    __result108__ = strcmp(self,right)!=0;
    return __result108__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
char* __result109__;
int len_68;
char* result_69;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_68, 0, sizeof(int));
memset(&result_69, 0, sizeof(char*));
    # 876 "libcomelang2-gc.c"
    # 873 "libcomelang2-gc.c"
    if(_if_conditional90=self==((void*)0)||right==((void*)0),    _if_conditional90) {
        # 874 "libcomelang2-gc.c"
        __result109__ = __result_obj__ = __builtin_string("");
        return __result109__;
    }
    # 876 "libcomelang2-gc.c"
    len_68=strlen(self)+strlen(right);
    # 878 "libcomelang2-gc.c"
    result_69=(char*)come_calloc(1, sizeof(char)*(1*(len_68+1)), "libcomelang2-gc.c", 878);
    # 880 "libcomelang2-gc.c"
    strncpy(result_69,self,len_68+1);
    # 881 "libcomelang2-gc.c"
    strncat(result_69,right,len_68+1);
    # 883 "libcomelang2-gc.c"
    __result110__ = __result_obj__ = result_69;
    return __result110__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
char* __result111__;
int len_70;
char* result_71;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_70, 0, sizeof(int));
memset(&result_71, 0, sizeof(char*));
    # 891 "libcomelang2-gc.c"
    # 888 "libcomelang2-gc.c"
    if(_if_conditional91=self==((void*)0)||right==((void*)0),    _if_conditional91) {
        # 889 "libcomelang2-gc.c"
        __result111__ = __result_obj__ = __builtin_string("");
        return __result111__;
    }
    # 891 "libcomelang2-gc.c"
    len_70=strlen(self)+strlen(right);
    # 893 "libcomelang2-gc.c"
    result_71=(char*)come_calloc(1, sizeof(char)*(1*(len_70+1)), "libcomelang2-gc.c", 893);
    # 895 "libcomelang2-gc.c"
    strncpy(result_71,self,len_70+1);
    # 896 "libcomelang2-gc.c"
    strncat(result_71,right,len_70+1);
    # 898 "libcomelang2-gc.c"
    __result112__ = __result_obj__ = result_71;
    return __result112__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
char* __result113__;
struct buffer* buf_72;
int i_73;
_Bool _for_condtionalA6;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_72, 0, sizeof(struct buffer*));
memset(&i_73, 0, sizeof(int));
    # 906 "libcomelang2-gc.c"
    # 903 "libcomelang2-gc.c"
    if(_if_conditional92=self==((void*)0),    _if_conditional92) {
        # 904 "libcomelang2-gc.c"
        __result113__ = __result_obj__ = __builtin_string("");
        return __result113__;
    }
    # 906 "libcomelang2-gc.c"
    buf_72=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 906));
    # 912 "libcomelang2-gc.c"
    for(
    i_73=0 ,    0;    _for_condtionalA6=    i_73<right ,    _for_condtionalA6;    i_73++ ,    0    ){
        # 909 "libcomelang2-gc.c"
        buffer_append_str(buf_72,self);
    }
    # 912 "libcomelang2-gc.c"
    __result114__ = __result_obj__ = buffer_to_string(buf_72);
    return __result114__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
char* __result115__;
struct buffer* buf_74;
int i_75;
_Bool _for_condtionalA7;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_74, 0, sizeof(struct buffer*));
memset(&i_75, 0, sizeof(int));
    # 920 "libcomelang2-gc.c"
    # 917 "libcomelang2-gc.c"
    if(_if_conditional93=self==((void*)0),    _if_conditional93) {
        # 918 "libcomelang2-gc.c"
        __result115__ = __result_obj__ = __builtin_string("");
        return __result115__;
    }
    # 920 "libcomelang2-gc.c"
    buf_74=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 920));
    # 926 "libcomelang2-gc.c"
    for(
    i_75=0 ,    0;    _for_condtionalA7=    i_75<right ,    _for_condtionalA7;    i_75++ ,    0    ){
        # 923 "libcomelang2-gc.c"
        buffer_append_str(buf_74,self);
    }
    # 926 "libcomelang2-gc.c"
    __result116__ = __result_obj__ = buffer_to_string(buf_74);
    return __result116__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 934 "libcomelang2-gc.c"
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
    # 939 "libcomelang2-gc.c"
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
    # 944 "libcomelang2-gc.c"
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
    # 949 "libcomelang2-gc.c"
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
    # 954 "libcomelang2-gc.c"
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
    # 959 "libcomelang2-gc.c"
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
    # 964 "libcomelang2-gc.c"
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
    # 969 "libcomelang2-gc.c"
    __result124__ = (unsigned int)value;
    return __result124__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
unsigned int __result125__;
int result_76;
char* p_77;
_Bool _while_condtional1;
unsigned int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(int));
memset(&p_77, 0, sizeof(char*));
    # 977 "libcomelang2-gc.c"
    # 974 "libcomelang2-gc.c"
    if(_if_conditional94=value==((void*)0),    _if_conditional94) {
        # 975 "libcomelang2-gc.c"
        __result125__ = 0;
        return __result125__;
    }
    # 977 "libcomelang2-gc.c"
    result_76=0;
    # 978 "libcomelang2-gc.c"
    p_77=value;
    # 983 "libcomelang2-gc.c"
    while(_while_condtional1=*p_77,    _while_condtional1) {
        # 980 "libcomelang2-gc.c"
        result_76+=(*p_77);
        # 981 "libcomelang2-gc.c"
        p_77++;
    }
    # 983 "libcomelang2-gc.c"
    __result126__ = result_76;
    return __result126__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
unsigned int __result127__;
int result_78;
char* p_79;
_Bool _while_condtional2;
unsigned int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(int));
memset(&p_79, 0, sizeof(char*));
    # 991 "libcomelang2-gc.c"
    # 988 "libcomelang2-gc.c"
    if(_if_conditional95=value==((void*)0),    _if_conditional95) {
        # 989 "libcomelang2-gc.c"
        __result127__ = 0;
        return __result127__;
    }
    # 991 "libcomelang2-gc.c"
    result_78=0;
    # 992 "libcomelang2-gc.c"
    p_79=value;
    # 997 "libcomelang2-gc.c"
    while(_while_condtional2=*p_79,    _while_condtional2) {
        # 994 "libcomelang2-gc.c"
        result_78+=(*p_79);
        # 995 "libcomelang2-gc.c"
        p_79++;
    }
    # 997 "libcomelang2-gc.c"
    __result128__ = result_78;
    return __result128__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1005 "libcomelang2-gc.c"
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
    # 1010 "libcomelang2-gc.c"
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
    # 1015 "libcomelang2-gc.c"
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
    # 1020 "libcomelang2-gc.c"
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
    # 1025 "libcomelang2-gc.c"
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
    # 1030 "libcomelang2-gc.c"
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
    # 1035 "libcomelang2-gc.c"
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
    # 1040 "libcomelang2-gc.c"
    __result136__ = self;
    return __result136__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
char* __result137__;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1046 "libcomelang2-gc.c"
    # 1045 "libcomelang2-gc.c"
    if(_if_conditional96=self==((void*)0),    _if_conditional96) {
        # 1045 "libcomelang2-gc.c"
        __result137__ = __result_obj__ = ((void*)0);
        return __result137__;
    }
    # 1046 "libcomelang2-gc.c"
    __result138__ = __result_obj__ = __builtin_string(self);
    return __result138__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
char* __result139__;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1053 "libcomelang2-gc.c"
    # 1051 "libcomelang2-gc.c"
    if(_if_conditional97=self==((void*)0),    _if_conditional97) {
        # 1051 "libcomelang2-gc.c"
        __result139__ = __result_obj__ = ((void*)0);
        return __result139__;
    }
    # 1053 "libcomelang2-gc.c"
    __result140__ = __result_obj__ = __builtin_string(self);
    return __result140__;
}

_Bool xiswalpha(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_80;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(_Bool));
    # 1061 "libcomelang2-gc.c"
    result_80=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1062 "libcomelang2-gc.c"
    __result141__ = result_80;
    return __result141__;
}

_Bool xiswblank(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1067 "libcomelang2-gc.c"
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
    # 1072 "libcomelang2-gc.c"
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
    # 1077 "libcomelang2-gc.c"
    __result144__ = xiswalpha(c)||xiswdigit(c);
    return __result144__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_81;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(_Bool));
    # 1082 "libcomelang2-gc.c"
    result_81=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1083 "libcomelang2-gc.c"
    __result145__ = result_81;
    return __result145__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1088 "libcomelang2-gc.c"
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
    # 1093 "libcomelang2-gc.c"
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
    # 1098 "libcomelang2-gc.c"
    __result148__ = xisalpha(c)||xisdigit(c);
    return __result148__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_82;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_82, 0, sizeof(_Bool));
    # 1103 "libcomelang2-gc.c"
    result_82=(c>=32&&c<=126);
    # 1104 "libcomelang2-gc.c"
    __result149__ = result_82;
    return __result149__;
}

_Bool xiswascii(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_83;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(_Bool));
    # 1109 "libcomelang2-gc.c"
    result_83=(c>=32&&c<=126);
    # 1110 "libcomelang2-gc.c"
    __result150__ = result_83;
    return __result150__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
int __result151__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1121 "libcomelang2-gc.c"
    # 1118 "libcomelang2-gc.c"
    if(_if_conditional98=str==((void*)0),    _if_conditional98) {
        # 1119 "libcomelang2-gc.c"
        __result151__ = 0;
        return __result151__;
    }
    # 1121 "libcomelang2-gc.c"
    __result152__ = strlen(str);
    return __result152__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
int __result153__;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1128 "libcomelang2-gc.c"
    # 1125 "libcomelang2-gc.c"
    if(_if_conditional99=str==((void*)0),    _if_conditional99) {
        # 1126 "libcomelang2-gc.c"
        __result153__ = 0;
        return __result153__;
    }
    # 1128 "libcomelang2-gc.c"
    __result154__ = strlen(str);
    return __result154__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
char* __result155__;
int len_84;
char* result_85;
int i_86;
_Bool _for_condtionalA8;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_84, 0, sizeof(int));
memset(&result_85, 0, sizeof(char*));
memset(&i_86, 0, sizeof(int));
    # 1136 "libcomelang2-gc.c"
    # 1133 "libcomelang2-gc.c"
    if(_if_conditional100=str==((void*)0),    _if_conditional100) {
        # 1134 "libcomelang2-gc.c"
        __result155__ = __result_obj__ = __builtin_string("");
        return __result155__;
    }
    # 1136 "libcomelang2-gc.c"
    len_84=strlen(str);
    # 1137 "libcomelang2-gc.c"
    result_85=(char*)come_calloc(1, sizeof(char)*(1*(len_84+1)), "libcomelang2-gc.c", 1137);
    # 1143 "libcomelang2-gc.c"
    for(
    i_86=0 ,    0;    _for_condtionalA8=    i_86<len_84 ,    _for_condtionalA8;    i_86++ ,    0    ){
        # 1140 "libcomelang2-gc.c"
        result_85[i_86]=str[len_84-i_86-1];
    }
    # 1143 "libcomelang2-gc.c"
    result_85[len_84]=0;
    # 1145 "libcomelang2-gc.c"
    __result156__ = __result_obj__ = result_85;
    return __result156__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
char* __result157__;
int len_87;
char* result_88;
int i_89;
_Bool _for_condtionalA9;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_87, 0, sizeof(int));
memset(&result_88, 0, sizeof(char*));
memset(&i_89, 0, sizeof(int));
    # 1153 "libcomelang2-gc.c"
    # 1150 "libcomelang2-gc.c"
    if(_if_conditional101=str==((void*)0),    _if_conditional101) {
        # 1151 "libcomelang2-gc.c"
        __result157__ = __result_obj__ = __builtin_string("");
        return __result157__;
    }
    # 1153 "libcomelang2-gc.c"
    len_87=strlen(str);
    # 1154 "libcomelang2-gc.c"
    result_88=(char*)come_calloc(1, sizeof(char)*(1*(len_87+1)), "libcomelang2-gc.c", 1154);
    # 1160 "libcomelang2-gc.c"
    for(
    i_89=0 ,    0;    _for_condtionalA9=    i_89<len_87 ,    _for_condtionalA9;    i_89++ ,    0    ){
        # 1157 "libcomelang2-gc.c"
        result_88[i_89]=str[len_87-i_89-1];
    }
    # 1160 "libcomelang2-gc.c"
    result_88[len_87]=0;
    # 1162 "libcomelang2-gc.c"
    __result158__ = __result_obj__ = result_88;
    return __result158__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
char* __result159__;
int len_90;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
char* __result160__;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
char* __result161__;
_Bool _if_conditional109;
char* __result162__;
char* result_91;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_90, 0, sizeof(int));
memset(&result_91, 0, sizeof(char*));
    # 1170 "libcomelang2-gc.c"
    # 1166 "libcomelang2-gc.c"
    if(_if_conditional102=str==((void*)0),    _if_conditional102) {
        # 1167 "libcomelang2-gc.c"
        __result159__ = __result_obj__ = __builtin_string("");
        return __result159__;
    }
    # 1170 "libcomelang2-gc.c"
    len_90=strlen(str);
    # 1175 "libcomelang2-gc.c"
    # 1172 "libcomelang2-gc.c"
    if(_if_conditional103=head<0,    _if_conditional103) {
        # 1173 "libcomelang2-gc.c"
        head+=len_90;
    }
    # 1179 "libcomelang2-gc.c"
    # 1175 "libcomelang2-gc.c"
    if(_if_conditional104=tail<0,    _if_conditional104) {
        # 1176 "libcomelang2-gc.c"
        tail+=len_90+1;
    }
    # 1183 "libcomelang2-gc.c"
    # 1179 "libcomelang2-gc.c"
    if(_if_conditional105=head>tail,    _if_conditional105) {
        # 1180 "libcomelang2-gc.c"
        __result160__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result160__;
    }
    # 1187 "libcomelang2-gc.c"
    # 1183 "libcomelang2-gc.c"
    if(_if_conditional106=head<0,    _if_conditional106) {
        # 1184 "libcomelang2-gc.c"
        head=0;
    }
    # 1191 "libcomelang2-gc.c"
    # 1187 "libcomelang2-gc.c"
    if(_if_conditional107=tail>=len_90,    _if_conditional107) {
        # 1188 "libcomelang2-gc.c"
        tail=len_90;
    }
    # 1195 "libcomelang2-gc.c"
    # 1191 "libcomelang2-gc.c"
    if(_if_conditional108=head==tail,    _if_conditional108) {
        # 1192 "libcomelang2-gc.c"
        __result161__ = __result_obj__ = __builtin_string("");
        return __result161__;
    }
    # 1199 "libcomelang2-gc.c"
    # 1195 "libcomelang2-gc.c"
    if(_if_conditional109=tail-head+1<1,    _if_conditional109) {
        # 1196 "libcomelang2-gc.c"
        __result162__ = __result_obj__ = __builtin_string("");
        return __result162__;
    }
    # 1199 "libcomelang2-gc.c"
    result_91=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1199);
    # 1201 "libcomelang2-gc.c"
    memcpy(result_91,str+head,tail-head);
    # 1202 "libcomelang2-gc.c"
    result_91[tail-head]=0;
    # 1204 "libcomelang2-gc.c"
    __result163__ = __result_obj__ = result_91;
    return __result163__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
char* __result164__;
int len_92;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
char* __result165__;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
char* __result166__;
_Bool _if_conditional117;
char* __result167__;
char* result_93;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_92, 0, sizeof(int));
memset(&result_93, 0, sizeof(char*));
    # 1213 "libcomelang2-gc.c"
    # 1209 "libcomelang2-gc.c"
    if(_if_conditional110=str==((void*)0),    _if_conditional110) {
        # 1210 "libcomelang2-gc.c"
        __result164__ = __result_obj__ = __builtin_string("");
        return __result164__;
    }
    # 1213 "libcomelang2-gc.c"
    len_92=strlen(str);
    # 1218 "libcomelang2-gc.c"
    # 1215 "libcomelang2-gc.c"
    if(_if_conditional111=head<0,    _if_conditional111) {
        # 1216 "libcomelang2-gc.c"
        head+=len_92;
    }
    # 1222 "libcomelang2-gc.c"
    # 1218 "libcomelang2-gc.c"
    if(_if_conditional112=tail<0,    _if_conditional112) {
        # 1219 "libcomelang2-gc.c"
        tail+=len_92+1;
    }
    # 1226 "libcomelang2-gc.c"
    # 1222 "libcomelang2-gc.c"
    if(_if_conditional113=head>tail,    _if_conditional113) {
        # 1223 "libcomelang2-gc.c"
        __result165__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result165__;
    }
    # 1230 "libcomelang2-gc.c"
    # 1226 "libcomelang2-gc.c"
    if(_if_conditional114=head<0,    _if_conditional114) {
        # 1227 "libcomelang2-gc.c"
        head=0;
    }
    # 1234 "libcomelang2-gc.c"
    # 1230 "libcomelang2-gc.c"
    if(_if_conditional115=tail>=len_92,    _if_conditional115) {
        # 1231 "libcomelang2-gc.c"
        tail=len_92;
    }
    # 1238 "libcomelang2-gc.c"
    # 1234 "libcomelang2-gc.c"
    if(_if_conditional116=head==tail,    _if_conditional116) {
        # 1235 "libcomelang2-gc.c"
        __result166__ = __result_obj__ = __builtin_string("");
        return __result166__;
    }
    # 1242 "libcomelang2-gc.c"
    # 1238 "libcomelang2-gc.c"
    if(_if_conditional117=tail-head+1<1,    _if_conditional117) {
        # 1239 "libcomelang2-gc.c"
        __result167__ = __result_obj__ = __builtin_string("");
        return __result167__;
    }
    # 1242 "libcomelang2-gc.c"
    result_93=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1242);
    # 1244 "libcomelang2-gc.c"
    memcpy(result_93,str+head,tail-head);
    # 1245 "libcomelang2-gc.c"
    result_93[tail-head]=0;
    # 1247 "libcomelang2-gc.c"
    __result168__ = __result_obj__ = result_93;
    return __result168__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
char* __result169__;
int len_94;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
char* __result170__;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
char* __result171__;
_Bool _if_conditional125;
char* __result172__;
char* result_95;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_94, 0, sizeof(int));
memset(&result_95, 0, sizeof(char*));
    # 1256 "libcomelang2-gc.c"
    # 1252 "libcomelang2-gc.c"
    if(_if_conditional118=str==((void*)0),    _if_conditional118) {
        # 1253 "libcomelang2-gc.c"
        __result169__ = __result_obj__ = __builtin_string("");
        return __result169__;
    }
    # 1256 "libcomelang2-gc.c"
    len_94=strlen(str);
    # 1261 "libcomelang2-gc.c"
    # 1258 "libcomelang2-gc.c"
    if(_if_conditional119=head<0,    _if_conditional119) {
        # 1259 "libcomelang2-gc.c"
        head+=len_94;
    }
    # 1265 "libcomelang2-gc.c"
    # 1261 "libcomelang2-gc.c"
    if(_if_conditional120=tail<0,    _if_conditional120) {
        # 1262 "libcomelang2-gc.c"
        tail+=len_94+1;
    }
    # 1269 "libcomelang2-gc.c"
    # 1265 "libcomelang2-gc.c"
    if(_if_conditional121=head>tail,    _if_conditional121) {
        # 1266 "libcomelang2-gc.c"
        __result170__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result170__;
    }
    # 1273 "libcomelang2-gc.c"
    # 1269 "libcomelang2-gc.c"
    if(_if_conditional122=head<0,    _if_conditional122) {
        # 1270 "libcomelang2-gc.c"
        head=0;
    }
    # 1277 "libcomelang2-gc.c"
    # 1273 "libcomelang2-gc.c"
    if(_if_conditional123=tail>=len_94,    _if_conditional123) {
        # 1274 "libcomelang2-gc.c"
        tail=len_94;
    }
    # 1281 "libcomelang2-gc.c"
    # 1277 "libcomelang2-gc.c"
    if(_if_conditional124=head==tail,    _if_conditional124) {
        # 1278 "libcomelang2-gc.c"
        __result171__ = __result_obj__ = __builtin_string("");
        return __result171__;
    }
    # 1285 "libcomelang2-gc.c"
    # 1281 "libcomelang2-gc.c"
    if(_if_conditional125=tail-head+1<1,    _if_conditional125) {
        # 1282 "libcomelang2-gc.c"
        __result172__ = __result_obj__ = __builtin_string("");
        return __result172__;
    }
    # 1285 "libcomelang2-gc.c"
    result_95=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1285);
    # 1287 "libcomelang2-gc.c"
    memcpy(result_95,str+head,tail-head);
    # 1288 "libcomelang2-gc.c"
    result_95[tail-head]=0;
    # 1290 "libcomelang2-gc.c"
    __result173__ = __result_obj__ = result_95;
    return __result173__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
char* __result174__;
int len_96;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __result175__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
char* __result176__;
_Bool _if_conditional133;
char* __result177__;
char* result_97;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_96, 0, sizeof(int));
memset(&result_97, 0, sizeof(char*));
    # 1299 "libcomelang2-gc.c"
    # 1295 "libcomelang2-gc.c"
    if(_if_conditional126=str==((void*)0),    _if_conditional126) {
        # 1296 "libcomelang2-gc.c"
        __result174__ = __result_obj__ = __builtin_string("");
        return __result174__;
    }
    # 1299 "libcomelang2-gc.c"
    len_96=strlen(str);
    # 1304 "libcomelang2-gc.c"
    # 1301 "libcomelang2-gc.c"
    if(_if_conditional127=head<0,    _if_conditional127) {
        # 1302 "libcomelang2-gc.c"
        head+=len_96;
    }
    # 1308 "libcomelang2-gc.c"
    # 1304 "libcomelang2-gc.c"
    if(_if_conditional128=tail<0,    _if_conditional128) {
        # 1305 "libcomelang2-gc.c"
        tail+=len_96+1;
    }
    # 1312 "libcomelang2-gc.c"
    # 1308 "libcomelang2-gc.c"
    if(_if_conditional129=head>tail,    _if_conditional129) {
        # 1309 "libcomelang2-gc.c"
        __result175__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result175__;
    }
    # 1316 "libcomelang2-gc.c"
    # 1312 "libcomelang2-gc.c"
    if(_if_conditional130=head<0,    _if_conditional130) {
        # 1313 "libcomelang2-gc.c"
        head=0;
    }
    # 1320 "libcomelang2-gc.c"
    # 1316 "libcomelang2-gc.c"
    if(_if_conditional131=tail>=len_96,    _if_conditional131) {
        # 1317 "libcomelang2-gc.c"
        tail=len_96;
    }
    # 1324 "libcomelang2-gc.c"
    # 1320 "libcomelang2-gc.c"
    if(_if_conditional132=head==tail,    _if_conditional132) {
        # 1321 "libcomelang2-gc.c"
        __result176__ = __result_obj__ = __builtin_string("");
        return __result176__;
    }
    # 1328 "libcomelang2-gc.c"
    # 1324 "libcomelang2-gc.c"
    if(_if_conditional133=tail-head+1<1,    _if_conditional133) {
        # 1325 "libcomelang2-gc.c"
        __result177__ = __result_obj__ = __builtin_string("");
        return __result177__;
    }
    # 1328 "libcomelang2-gc.c"
    result_97=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1328);
    # 1330 "libcomelang2-gc.c"
    memcpy(result_97,str+head,tail-head);
    # 1331 "libcomelang2-gc.c"
    result_97[tail-head]=0;
    # 1333 "libcomelang2-gc.c"
    __result178__ = __result_obj__ = result_97;
    return __result178__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
char* __result179__;
va_list args_98;
char* result_99;
int len_100;
_Bool _if_conditional135;
char* __result180__;
char* result2_101;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_98, 0, sizeof(va_list));
memset(&result_99, 0, sizeof(char*));
memset(&len_100, 0, sizeof(int));
memset(&result2_101, 0, sizeof(char*));
    # 1341 "libcomelang2-gc.c"
    # 1338 "libcomelang2-gc.c"
    if(_if_conditional134=msg==((void*)0),    _if_conditional134) {
        # 1339 "libcomelang2-gc.c"
        __result179__ = __result_obj__ = __builtin_string("");
        return __result179__;
    }
    # 1341 "libcomelang2-gc.c"
    # 1342 "libcomelang2-gc.c"
    __builtin_va_start(args_98,msg);
    # 1343 "libcomelang2-gc.c"
    # 1344 "libcomelang2-gc.c"
    len_100=vasprintf(&result_99,msg,args_98);
    # 1345 "libcomelang2-gc.c"
    __builtin_va_end(args_98);
    # 1351 "libcomelang2-gc.c"
    # 1347 "libcomelang2-gc.c"
    if(_if_conditional135=len_100<0,    _if_conditional135) {
        # 1348 "libcomelang2-gc.c"
        __result180__ = __result_obj__ = __builtin_string("");
        return __result180__;
    }
    # 1351 "libcomelang2-gc.c"
    result2_101=__builtin_string(result_99);
    # 1353 "libcomelang2-gc.c"
    free(result_99);
    # 1355 "libcomelang2-gc.c"
    __result181__ = __result_obj__ = result2_101;
    return __result181__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
char* __result182__;
int len_102;
_Bool _if_conditional137;
char* __result183__;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
char* __result184__;
_Bool _if_conditional142;
char* sub_str_103;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_102, 0, sizeof(int));
memset(&sub_str_103, 0, sizeof(char*));
    # 1364 "libcomelang2-gc.c"
    # 1360 "libcomelang2-gc.c"
    if(_if_conditional136=str==((void*)0),    _if_conditional136) {
        # 1361 "libcomelang2-gc.c"
        __result182__ = __result_obj__ = __builtin_string("");
        return __result182__;
    }
    # 1364 "libcomelang2-gc.c"
    len_102=strlen(str);
    # 1370 "libcomelang2-gc.c"
    # 1366 "libcomelang2-gc.c"
    if(_if_conditional137=strcmp(str,"")==0,    _if_conditional137) {
        # 1367 "libcomelang2-gc.c"
        __result183__ = __result_obj__ = __builtin_string(str);
        return __result183__;
    }
    # 1374 "libcomelang2-gc.c"
    # 1370 "libcomelang2-gc.c"
    if(_if_conditional138=head<0,    _if_conditional138) {
        # 1371 "libcomelang2-gc.c"
        head+=len_102;
    }
    # 1378 "libcomelang2-gc.c"
    # 1374 "libcomelang2-gc.c"
    if(_if_conditional139=tail<0,    _if_conditional139) {
        # 1375 "libcomelang2-gc.c"
        tail+=len_102+1;
    }
    # 1382 "libcomelang2-gc.c"
    # 1378 "libcomelang2-gc.c"
    if(_if_conditional140=head<0,    _if_conditional140) {
        # 1379 "libcomelang2-gc.c"
        head=0;
    }
    # 1386 "libcomelang2-gc.c"
    # 1382 "libcomelang2-gc.c"
    if(_if_conditional141=tail<0,    _if_conditional141) {
        # 1383 "libcomelang2-gc.c"
        __result184__ = __result_obj__ = __builtin_string(str);
        return __result184__;
    }
    # 1390 "libcomelang2-gc.c"
    # 1386 "libcomelang2-gc.c"
    if(_if_conditional142=tail>=len_102,    _if_conditional142) {
        # 1387 "libcomelang2-gc.c"
        tail=len_102;
    }
    # 1390 "libcomelang2-gc.c"
    sub_str_103=charp_substring(str,tail,-1);
    # 1392 "libcomelang2-gc.c"
    memcpy(str+head,sub_str_103,string_length(sub_str_103)+1);
    # 1394 "libcomelang2-gc.c"
    __result185__ = __result_obj__ = __builtin_string(str);
    return __result185__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
char* __result186__;
int len_104;
_Bool _if_conditional144;
char* __result187__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
char* __result188__;
_Bool _if_conditional149;
char* sub_str_105;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_104, 0, sizeof(int));
memset(&sub_str_105, 0, sizeof(char*));
    # 1403 "libcomelang2-gc.c"
    # 1399 "libcomelang2-gc.c"
    if(_if_conditional143=str==((void*)0),    _if_conditional143) {
        # 1400 "libcomelang2-gc.c"
        __result186__ = __result_obj__ = __builtin_string("");
        return __result186__;
    }
    # 1403 "libcomelang2-gc.c"
    len_104=strlen(str);
    # 1409 "libcomelang2-gc.c"
    # 1405 "libcomelang2-gc.c"
    if(_if_conditional144=strcmp(str,"")==0,    _if_conditional144) {
        # 1406 "libcomelang2-gc.c"
        __result187__ = __result_obj__ = __builtin_string(str);
        return __result187__;
    }
    # 1413 "libcomelang2-gc.c"
    # 1409 "libcomelang2-gc.c"
    if(_if_conditional145=head<0,    _if_conditional145) {
        # 1410 "libcomelang2-gc.c"
        head+=len_104;
    }
    # 1417 "libcomelang2-gc.c"
    # 1413 "libcomelang2-gc.c"
    if(_if_conditional146=tail<0,    _if_conditional146) {
        # 1414 "libcomelang2-gc.c"
        tail+=len_104+1;
    }
    # 1421 "libcomelang2-gc.c"
    # 1417 "libcomelang2-gc.c"
    if(_if_conditional147=head<0,    _if_conditional147) {
        # 1418 "libcomelang2-gc.c"
        head=0;
    }
    # 1425 "libcomelang2-gc.c"
    # 1421 "libcomelang2-gc.c"
    if(_if_conditional148=tail<0,    _if_conditional148) {
        # 1422 "libcomelang2-gc.c"
        __result188__ = __result_obj__ = __builtin_string(str);
        return __result188__;
    }
    # 1429 "libcomelang2-gc.c"
    # 1425 "libcomelang2-gc.c"
    if(_if_conditional149=tail>=len_104,    _if_conditional149) {
        # 1426 "libcomelang2-gc.c"
        tail=len_104;
    }
    # 1429 "libcomelang2-gc.c"
    sub_str_105=charp_substring(str,tail,-1);
    # 1431 "libcomelang2-gc.c"
    memcpy(str+head,sub_str_105,string_length(sub_str_105)+1);
    # 1433 "libcomelang2-gc.c"
    __result189__ = __result_obj__ = __builtin_string(str);
    return __result189__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional150;
struct list$1charph* __result191__;
struct list$1charph* result_106;
struct buffer* str_107;
int i_108;
_Bool _for_condtionalA10;
_Bool _if_conditional151;
_Bool _if_conditional154;
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_106, 0, sizeof(struct list$1charph*));
memset(&str_107, 0, sizeof(struct buffer*));
memset(&i_108, 0, sizeof(int));
    # 1442 "libcomelang2-gc.c"
    # 1438 "libcomelang2-gc.c"
    if(_if_conditional150=self==((void*)0),    _if_conditional150) {
        # 1439 "libcomelang2-gc.c"
        __result191__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1439));
        return __result191__;
    }
    # 1442 "libcomelang2-gc.c"
    result_106=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1442));
    # 1444 "libcomelang2-gc.c"
    str_107=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1444));
    # 1455 "libcomelang2-gc.c"
    for(
    i_108=0 ,    0;    _for_condtionalA10=    i_108<charp_length(self) ,    _for_condtionalA10;    i_108++ ,    0    ){
        # 1454 "libcomelang2-gc.c"
        # 1447 "libcomelang2-gc.c"
        if(_if_conditional151=self[i_108]==c,        _if_conditional151) {
            # 1448 "libcomelang2-gc.c"
            list$1charph_push_back(result_106,__builtin_string(str_107->buf));
            # 1449 "libcomelang2-gc.c"
            buffer_reset(str_107);
        }
        else {
            # 1452 "libcomelang2-gc.c"
            buffer_append_char(str_107,self[i_108]);
        }
    }
    # 1459 "libcomelang2-gc.c"
    # 1455 "libcomelang2-gc.c"
    if(_if_conditional154=buffer_length(str_107)!=0,    _if_conditional154) {
        # 1456 "libcomelang2-gc.c"
        list$1charph_push_back(result_106,__builtin_string(str_107->buf));
    }
    # 1459 "libcomelang2-gc.c"
    __result193__ = __result_obj__ = result_106;
    return __result193__;
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
            return __result190__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
struct list_item$1charph* litem_109;
_Bool _if_conditional153;
struct list_item$1charph* litem_110;
struct list_item$1charph* litem_111;
struct list$1charph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional152=self->len==0,                _if_conditional152) {
                    # 279 "./comelang2.h"
                    litem_109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279);
                    # 281 "./comelang2.h"
                    litem_109->prev=((void*)0);
                    # 282 "./comelang2.h"
                    litem_109->next=((void*)0);
                    # 283 "./comelang2.h"
                    litem_109->item=item;
                    # 285 "./comelang2.h"
                    self->tail=litem_109;
                    # 286 "./comelang2.h"
                    self->head=litem_109;
                }
                else {
                    # 309 "./comelang2.h"
                    # 288 "./comelang2.h"
                    if(_if_conditional153=self->len==1,                    _if_conditional153) {
                        # 289 "./comelang2.h"
                        litem_110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289);
                        # 291 "./comelang2.h"
                        litem_110->prev=self->head;
                        # 292 "./comelang2.h"
                        litem_110->next=((void*)0);
                        # 293 "./comelang2.h"
                        litem_110->item=item;
                        # 295 "./comelang2.h"
                        self->tail=litem_110;
                        # 296 "./comelang2.h"
                        self->head->next=litem_110;
                    }
                    else {
                        # 299 "./comelang2.h"
                        litem_111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299);
                        # 301 "./comelang2.h"
                        litem_111->prev=self->tail;
                        # 302 "./comelang2.h"
                        litem_111->next=((void*)0);
                        # 303 "./comelang2.h"
                        litem_111->item=item;
                        # 305 "./comelang2.h"
                        self->tail->next=litem_111;
                        # 306 "./comelang2.h"
                        self->tail=litem_111;
                    }
                }
                # 309 "./comelang2.h"
                self->len++;
                # 311 "./comelang2.h"
                __result192__ = __result_obj__ = self;
                return __result192__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional155;
struct list$1charph* __result194__;
struct list$1charph* result_112;
struct buffer* str_113;
int i_114;
_Bool _for_condtionalA11;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list$1charph* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_112, 0, sizeof(struct list$1charph*));
memset(&str_113, 0, sizeof(struct buffer*));
memset(&i_114, 0, sizeof(int));
    # 1468 "libcomelang2-gc.c"
    # 1464 "libcomelang2-gc.c"
    if(_if_conditional155=self==((void*)0),    _if_conditional155) {
        # 1465 "libcomelang2-gc.c"
        __result194__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1465));
        return __result194__;
    }
    # 1468 "libcomelang2-gc.c"
    result_112=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1468));
    # 1470 "libcomelang2-gc.c"
    str_113=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1470));
    # 1481 "libcomelang2-gc.c"
    for(
    i_114=0 ,    0;    _for_condtionalA11=    i_114<charp_length(self) ,    _for_condtionalA11;    i_114++ ,    0    ){
        # 1480 "libcomelang2-gc.c"
        # 1473 "libcomelang2-gc.c"
        if(_if_conditional156=self[i_114]==c,        _if_conditional156) {
            # 1474 "libcomelang2-gc.c"
            list$1charph_push_back(result_112,__builtin_string(str_113->buf));
            # 1475 "libcomelang2-gc.c"
            buffer_reset(str_113);
        }
        else {
            # 1478 "libcomelang2-gc.c"
            buffer_append_char(str_113,self[i_114]);
        }
    }
    # 1485 "libcomelang2-gc.c"
    # 1481 "libcomelang2-gc.c"
    if(_if_conditional157=buffer_length(str_113)!=0,    _if_conditional157) {
        # 1482 "libcomelang2-gc.c"
        list$1charph_push_back(result_112,__builtin_string(str_113->buf));
    }
    # 1485 "libcomelang2-gc.c"
    __result195__ = __result_obj__ = result_112;
    return __result195__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
char* __result196__;
char* p_115;
_Bool _while_condtional3;
_Bool _if_conditional159;
_Bool _if_conditional160;
char* __result197__;
char* __result198__;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_115, 0, sizeof(char*));
    # 1496 "libcomelang2-gc.c"
    # 1493 "libcomelang2-gc.c"
    if(_if_conditional158=path==((void*)0),    _if_conditional158) {
        # 1494 "libcomelang2-gc.c"
        __result196__ = __result_obj__ = __builtin_string("");
        return __result196__;
    }
    # 1496 "libcomelang2-gc.c"
    p_115=path+strlen(path);
    # 1507 "libcomelang2-gc.c"
    while(_while_condtional3=p_115>=path,    _while_condtional3) {
        # 1505 "libcomelang2-gc.c"
        # 1499 "libcomelang2-gc.c"
        if(_if_conditional159=*p_115==47,        _if_conditional159) {
            # 1500 "libcomelang2-gc.c"
            break;
        }
        else {
            # 1503 "libcomelang2-gc.c"
            p_115--;
        }
    }
    # 1514 "libcomelang2-gc.c"
    # 1507 "libcomelang2-gc.c"
    if(_if_conditional160=p_115<path,    _if_conditional160) {
        # 1508 "libcomelang2-gc.c"
        __result197__ = __result_obj__ = __builtin_string(path);
        return __result197__;
    }
    else {
        # 1511 "libcomelang2-gc.c"
        __result198__ = __result_obj__ = __builtin_string(p_115+1);
        return __result198__;
    }
    # 1514 "libcomelang2-gc.c"
    __result199__ = __result_obj__ = __builtin_string("");
    return __result199__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
char* __result200__;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1522 "libcomelang2-gc.c"
    # 1519 "libcomelang2-gc.c"
    if(_if_conditional161=path==((void*)0),    _if_conditional161) {
        # 1520 "libcomelang2-gc.c"
        __result200__ = __result_obj__ = __builtin_string("");
        return __result200__;
    }
    # 1522 "libcomelang2-gc.c"
    __result201__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result201__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
char* __result202__;
char* path2_116;
char* p_117;
_Bool _while_condtional4;
_Bool _if_conditional163;
_Bool _if_conditional164;
char* __result203__;
char* __result204__;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&path2_116, 0, sizeof(char*));
memset(&p_117, 0, sizeof(char*));
    # 1530 "libcomelang2-gc.c"
    # 1527 "libcomelang2-gc.c"
    if(_if_conditional162=path==((void*)0),    _if_conditional162) {
        # 1528 "libcomelang2-gc.c"
        __result202__ = __result_obj__ = __builtin_string("");
        return __result202__;
    }
    # 1530 "libcomelang2-gc.c"
    path2_116=xbasename(path);
    # 1532 "libcomelang2-gc.c"
    p_117=path2_116+strlen(path2_116);
    # 1543 "libcomelang2-gc.c"
    while(_while_condtional4=p_117>=path2_116,    _while_condtional4) {
        # 1541 "libcomelang2-gc.c"
        # 1535 "libcomelang2-gc.c"
        if(_if_conditional163=*p_117==46,        _if_conditional163) {
            # 1536 "libcomelang2-gc.c"
            break;
        }
        else {
            # 1539 "libcomelang2-gc.c"
            p_117--;
        }
    }
    # 1550 "libcomelang2-gc.c"
    # 1543 "libcomelang2-gc.c"
    if(_if_conditional164=p_117<path2_116,    _if_conditional164) {
        # 1544 "libcomelang2-gc.c"
        __result203__ = __result_obj__ = __builtin_string(path2_116);
        return __result203__;
    }
    else {
        # 1547 "libcomelang2-gc.c"
        __result204__ = __result_obj__ = string_substring(path2_116,0,p_117-path2_116);
        return __result204__;
    }
    # 1550 "libcomelang2-gc.c"
    __result205__ = __result_obj__ = __builtin_string("");
    return __result205__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
char* __result206__;
char* p_118;
_Bool _while_condtional5;
_Bool _if_conditional166;
_Bool _if_conditional167;
char* __result207__;
char* __result208__;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_118, 0, sizeof(char*));
    # 1558 "libcomelang2-gc.c"
    # 1555 "libcomelang2-gc.c"
    if(_if_conditional165=path==((void*)0),    _if_conditional165) {
        # 1556 "libcomelang2-gc.c"
        __result206__ = __result_obj__ = __builtin_string("");
        return __result206__;
    }
    # 1558 "libcomelang2-gc.c"
    p_118=path+strlen(path);
    # 1569 "libcomelang2-gc.c"
    while(_while_condtional5=p_118>=path,    _while_condtional5) {
        # 1567 "libcomelang2-gc.c"
        # 1561 "libcomelang2-gc.c"
        if(_if_conditional166=*p_118==46,        _if_conditional166) {
            # 1562 "libcomelang2-gc.c"
            break;
        }
        else {
            # 1565 "libcomelang2-gc.c"
            p_118--;
        }
    }
    # 1576 "libcomelang2-gc.c"
    # 1569 "libcomelang2-gc.c"
    if(_if_conditional167=p_118<path,    _if_conditional167) {
        # 1570 "libcomelang2-gc.c"
        __result207__ = __result_obj__ = __builtin_string(path);
        return __result207__;
    }
    else {
        # 1573 "libcomelang2-gc.c"
        __result208__ = __result_obj__ = __builtin_string(p_118+1);
        return __result208__;
    }
    # 1576 "libcomelang2-gc.c"
    __result209__ = __result_obj__ = __builtin_string("");
    return __result209__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
char* __result210__;
char* result_119;
char* result2_120;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_119, 0, sizeof(char*));
memset(&result2_120, 0, sizeof(char*));
    # 1584 "libcomelang2-gc.c"
    # 1581 "libcomelang2-gc.c"
    if(_if_conditional168=path==((void*)0),    _if_conditional168) {
        # 1582 "libcomelang2-gc.c"
        __result210__ = __result_obj__ = __builtin_string("");
        return __result210__;
    }
    # 1584 "libcomelang2-gc.c"
    result_119=realpath(path,((void*)0));
    # 1586 "libcomelang2-gc.c"
    result2_120=__builtin_string(result_119);
    # 1588 "libcomelang2-gc.c"
    free(result_119);
    # 1590 "libcomelang2-gc.c"
    __result211__ = __result_obj__ = result2_120;
    return __result211__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
char* __result212__;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1604 "libcomelang2-gc.c"
    # 1598 "libcomelang2-gc.c"
    if(_if_conditional169=self,    _if_conditional169) {
        # 1599 "libcomelang2-gc.c"
        __result212__ = __result_obj__ = __builtin_string("true");
        return __result212__;
    }
    else {
        # 1602 "libcomelang2-gc.c"
        __result213__ = __result_obj__ = __builtin_string("false");
        return __result213__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1608 "libcomelang2-gc.c"
    __result214__ = __result_obj__ = xsprintf("%c",self);
    return __result214__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1613 "libcomelang2-gc.c"
    __result215__ = __result_obj__ = xsprintf("%d",self);
    return __result215__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1618 "libcomelang2-gc.c"
    __result216__ = __result_obj__ = xsprintf("%d",self);
    return __result216__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1623 "libcomelang2-gc.c"
    __result217__ = __result_obj__ = xsprintf("%ld",self);
    return __result217__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1628 "libcomelang2-gc.c"
    __result218__ = __result_obj__ = xsprintf("%ld",self);
    return __result218__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1633 "libcomelang2-gc.c"
    __result219__ = __result_obj__ = xsprintf("%f",self);
    return __result219__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1638 "libcomelang2-gc.c"
    __result220__ = __result_obj__ = xsprintf("%lf",self);
    return __result220__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
char* __result221__;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1646 "libcomelang2-gc.c"
    # 1643 "libcomelang2-gc.c"
    if(_if_conditional170=self==((void*)0),    _if_conditional170) {
        # 1644 "libcomelang2-gc.c"
        __result221__ = __result_obj__ = __builtin_string("");
        return __result221__;
    }
    # 1646 "libcomelang2-gc.c"
    __result222__ = __result_obj__ = __builtin_string(self);
    return __result222__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
char* __result223__;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1654 "libcomelang2-gc.c"
    # 1651 "libcomelang2-gc.c"
    if(_if_conditional171=self==((void*)0),    _if_conditional171) {
        # 1652 "libcomelang2-gc.c"
        __result223__ = __result_obj__ = __builtin_string("");
        return __result223__;
    }
    # 1654 "libcomelang2-gc.c"
    __result224__ = __result_obj__ = __builtin_string(self);
    return __result224__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
int __result225__;
_Bool _if_conditional173;
int __result226__;
_Bool _if_conditional174;
int __result227__;
int __result228__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1675 "libcomelang2-gc.c"
    # 1662 "libcomelang2-gc.c"
    if(_if_conditional172=!left&&right,    _if_conditional172) {
        # 1663 "libcomelang2-gc.c"
        __result225__ = -1;
        return __result225__;
    }
    else {
        # 1675 "libcomelang2-gc.c"
        # 1665 "libcomelang2-gc.c"
        if(_if_conditional173=left&&right,        _if_conditional173) {
            # 1666 "libcomelang2-gc.c"
            __result226__ = 0;
            return __result226__;
        }
        else {
            # 1675 "libcomelang2-gc.c"
            # 1668 "libcomelang2-gc.c"
            if(_if_conditional174=!left&&!right,            _if_conditional174) {
                # 1669 "libcomelang2-gc.c"
                __result227__ = 0;
                return __result227__;
            }
            else {
                # 1672 "libcomelang2-gc.c"
                __result228__ = 1;
                return __result228__;
            }
        }
    }
    # 1675 "libcomelang2-gc.c"
    __result229__ = 0;
    return __result229__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
int __result230__;
_Bool _if_conditional176;
int __result231__;
int __result232__;
int __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1690 "libcomelang2-gc.c"
    # 1680 "libcomelang2-gc.c"
    if(_if_conditional175=left<right,    _if_conditional175) {
        # 1681 "libcomelang2-gc.c"
        __result230__ = -1;
        return __result230__;
    }
    else {
        # 1690 "libcomelang2-gc.c"
        # 1683 "libcomelang2-gc.c"
        if(_if_conditional176=left>right,        _if_conditional176) {
            # 1684 "libcomelang2-gc.c"
            __result231__ = 1;
            return __result231__;
        }
        else {
            # 1687 "libcomelang2-gc.c"
            __result232__ = 0;
            return __result232__;
        }
    }
    # 1690 "libcomelang2-gc.c"
    __result233__ = 0;
    return __result233__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
int __result234__;
_Bool _if_conditional178;
int __result235__;
int __result236__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1705 "libcomelang2-gc.c"
    # 1695 "libcomelang2-gc.c"
    if(_if_conditional177=left<right,    _if_conditional177) {
        # 1696 "libcomelang2-gc.c"
        __result234__ = -1;
        return __result234__;
    }
    else {
        # 1705 "libcomelang2-gc.c"
        # 1698 "libcomelang2-gc.c"
        if(_if_conditional178=left>right,        _if_conditional178) {
            # 1699 "libcomelang2-gc.c"
            __result235__ = 1;
            return __result235__;
        }
        else {
            # 1702 "libcomelang2-gc.c"
            __result236__ = 0;
            return __result236__;
        }
    }
    # 1705 "libcomelang2-gc.c"
    __result237__ = 0;
    return __result237__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
int __result238__;
_Bool _if_conditional180;
int __result239__;
int __result240__;
int __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1720 "libcomelang2-gc.c"
    # 1710 "libcomelang2-gc.c"
    if(_if_conditional179=left<right,    _if_conditional179) {
        # 1711 "libcomelang2-gc.c"
        __result238__ = -1;
        return __result238__;
    }
    else {
        # 1720 "libcomelang2-gc.c"
        # 1713 "libcomelang2-gc.c"
        if(_if_conditional180=left>right,        _if_conditional180) {
            # 1714 "libcomelang2-gc.c"
            __result239__ = 1;
            return __result239__;
        }
        else {
            # 1717 "libcomelang2-gc.c"
            __result240__ = 0;
            return __result240__;
        }
    }
    # 1720 "libcomelang2-gc.c"
    __result241__ = 0;
    return __result241__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
int __result242__;
_Bool _if_conditional182;
int __result243__;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1735 "libcomelang2-gc.c"
    # 1725 "libcomelang2-gc.c"
    if(_if_conditional181=left<right,    _if_conditional181) {
        # 1726 "libcomelang2-gc.c"
        __result242__ = -1;
        return __result242__;
    }
    else {
        # 1735 "libcomelang2-gc.c"
        # 1728 "libcomelang2-gc.c"
        if(_if_conditional182=left>right,        _if_conditional182) {
            # 1729 "libcomelang2-gc.c"
            __result243__ = 1;
            return __result243__;
        }
        else {
            # 1732 "libcomelang2-gc.c"
            __result244__ = 0;
            return __result244__;
        }
    }
    # 1735 "libcomelang2-gc.c"
    __result245__ = 0;
    return __result245__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
int __result246__;
_Bool _if_conditional184;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1750 "libcomelang2-gc.c"
    # 1740 "libcomelang2-gc.c"
    if(_if_conditional183=left<right,    _if_conditional183) {
        # 1741 "libcomelang2-gc.c"
        __result246__ = -1;
        return __result246__;
    }
    else {
        # 1750 "libcomelang2-gc.c"
        # 1743 "libcomelang2-gc.c"
        if(_if_conditional184=left>right,        _if_conditional184) {
            # 1744 "libcomelang2-gc.c"
            __result247__ = 1;
            return __result247__;
        }
        else {
            # 1747 "libcomelang2-gc.c"
            __result248__ = 0;
            return __result248__;
        }
    }
    # 1750 "libcomelang2-gc.c"
    __result249__ = 0;
    return __result249__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
int __result250__;
_Bool _if_conditional186;
int __result251__;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1765 "libcomelang2-gc.c"
    # 1755 "libcomelang2-gc.c"
    if(_if_conditional185=left<right,    _if_conditional185) {
        # 1756 "libcomelang2-gc.c"
        __result250__ = -1;
        return __result250__;
    }
    else {
        # 1765 "libcomelang2-gc.c"
        # 1758 "libcomelang2-gc.c"
        if(_if_conditional186=left>right,        _if_conditional186) {
            # 1759 "libcomelang2-gc.c"
            __result251__ = 1;
            return __result251__;
        }
        else {
            # 1762 "libcomelang2-gc.c"
            __result252__ = 0;
            return __result252__;
        }
    }
    # 1765 "libcomelang2-gc.c"
    __result253__ = 0;
    return __result253__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
int __result254__;
_Bool _if_conditional188;
int __result255__;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1780 "libcomelang2-gc.c"
    # 1770 "libcomelang2-gc.c"
    if(_if_conditional187=left<right,    _if_conditional187) {
        # 1771 "libcomelang2-gc.c"
        __result254__ = -1;
        return __result254__;
    }
    else {
        # 1780 "libcomelang2-gc.c"
        # 1773 "libcomelang2-gc.c"
        if(_if_conditional188=left>right,        _if_conditional188) {
            # 1774 "libcomelang2-gc.c"
            __result255__ = 1;
            return __result255__;
        }
        else {
            # 1777 "libcomelang2-gc.c"
            __result256__ = 0;
            return __result256__;
        }
    }
    # 1780 "libcomelang2-gc.c"
    __result257__ = 0;
    return __result257__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
int __result258__;
_Bool _if_conditional190;
int __result259__;
_Bool _if_conditional191;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1795 "libcomelang2-gc.c"
    # 1785 "libcomelang2-gc.c"
    if(_if_conditional189=left==((void*)0)&&right==((void*)0),    _if_conditional189) {
        # 1786 "libcomelang2-gc.c"
        __result258__ = 0;
        return __result258__;
    }
    else {
        # 1795 "libcomelang2-gc.c"
        # 1788 "libcomelang2-gc.c"
        if(_if_conditional190=left==((void*)0),        _if_conditional190) {
            # 1789 "libcomelang2-gc.c"
            __result259__ = -1;
            return __result259__;
        }
        else {
            # 1795 "libcomelang2-gc.c"
            # 1791 "libcomelang2-gc.c"
            if(_if_conditional191=right==((void*)0),            _if_conditional191) {
                # 1792 "libcomelang2-gc.c"
                __result260__ = 1;
                return __result260__;
            }
        }
    }
    # 1795 "libcomelang2-gc.c"
    __result261__ = strcmp(left,right);
    return __result261__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
int __result262__;
_Bool _if_conditional193;
int __result263__;
_Bool _if_conditional194;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1810 "libcomelang2-gc.c"
    # 1800 "libcomelang2-gc.c"
    if(_if_conditional192=left==((void*)0)&&right==((void*)0),    _if_conditional192) {
        # 1801 "libcomelang2-gc.c"
        __result262__ = 0;
        return __result262__;
    }
    else {
        # 1810 "libcomelang2-gc.c"
        # 1803 "libcomelang2-gc.c"
        if(_if_conditional193=left==((void*)0),        _if_conditional193) {
            # 1804 "libcomelang2-gc.c"
            __result263__ = -1;
            return __result263__;
        }
        else {
            # 1810 "libcomelang2-gc.c"
            # 1806 "libcomelang2-gc.c"
            if(_if_conditional194=right==((void*)0),            _if_conditional194) {
                # 1807 "libcomelang2-gc.c"
                __result264__ = 1;
                return __result264__;
            }
        }
    }
    # 1810 "libcomelang2-gc.c"
    __result265__ = strcmp(left,right);
    return __result265__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
struct optional$2charphbool* __result267__;
struct buffer* buf_121;
_Bool _while_condtional6;
int size_123;
_Bool _if_conditional196;
struct optional$2charphbool* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_121, 0, sizeof(struct buffer*));
memset(&size_123, 0, sizeof(int));
    # 1821 "libcomelang2-gc.c"
    # 1818 "libcomelang2-gc.c"
    if(_if_conditional195=f==((void*)0),    _if_conditional195) {
        # 1819 "libcomelang2-gc.c"
        __result267__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1819),__builtin_string(""),(_Bool)0);
        return __result267__;
    }
    # 1821 "libcomelang2-gc.c"
    buf_121=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1821));
    # 1835 "libcomelang2-gc.c"
    while(_while_condtional6=1,    _while_condtional6) {
        # 1824 "libcomelang2-gc.c"
        char buf2_122[8192];
        memset(&buf2_122, 0, sizeof(char)        *(8192)        );
        # 1826 "libcomelang2-gc.c"
        size_123=fread(buf2_122,1,8192,f);
        # 1828 "libcomelang2-gc.c"
        buffer_append(buf_121,buf2_122,size_123);
        # 1833 "libcomelang2-gc.c"
        # 1830 "libcomelang2-gc.c"
        if(_if_conditional196=size_123<8192,        _if_conditional196) {
            # 1831 "libcomelang2-gc.c"
            break;
        }
    }
    # 1835 "libcomelang2-gc.c"
    __result268__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1835),buffer_to_string(buf_121),(_Bool)1);
    return __result268__;
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2charphbool* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            self->v1=v1;
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result266__ = __result_obj__ = self;
            return __result266__;
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
struct optional$2intbool* __result269__;
struct optional$2intbool* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1844 "libcomelang2-gc.c"
    # 1840 "libcomelang2-gc.c"
    if(_if_conditional197=f==((void*)0)||str==((void*)0),    _if_conditional197) {
        # 1841 "libcomelang2-gc.c"
        __result269__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1841),-1,(_Bool)0);
        return __result269__;
    }
    # 1844 "libcomelang2-gc.c"
    __result270__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1844),fwrite(str,strlen(str),1,f),(_Bool)1);
    return __result270__;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
struct optional$2intbool* __result271__;
int result_124;
_Bool _if_conditional199;
struct optional$2intbool* __result272__;
struct optional$2intbool* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(int));
    # 1853 "libcomelang2-gc.c"
    # 1849 "libcomelang2-gc.c"
    if(_if_conditional198=f==((void*)0),    _if_conditional198) {
        # 1850 "libcomelang2-gc.c"
        __result271__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1850),-1,(_Bool)0);
        return __result271__;
    }
    # 1853 "libcomelang2-gc.c"
    result_124=fclose(f);
    # 1859 "libcomelang2-gc.c"
    # 1855 "libcomelang2-gc.c"
    if(_if_conditional199=result_124<0,    _if_conditional199) {
        # 1856 "libcomelang2-gc.c"
        __result272__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1856),result_124,(_Bool)0);
        return __result272__;
    }
    # 1859 "libcomelang2-gc.c"
    __result273__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1859),result_124,(_Bool)1);
    return __result273__;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
struct optional$2_IO_FILEpbool* __result275__;
va_list args_126;
int result_127;
_Bool _if_conditional201;
struct optional$2_IO_FILEpbool* __result276__;
struct optional$2_IO_FILEpbool* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_126, 0, sizeof(va_list));
memset(&result_127, 0, sizeof(int));
    # 1867 "libcomelang2-gc.c"
    # 1864 "libcomelang2-gc.c"
    if(_if_conditional200=f==((void*)0)||msg==((void*)0),    _if_conditional200) {
        # 1865 "libcomelang2-gc.c"
        __result275__ = __result_obj__ = optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2-gc.c", 1865),f,(_Bool)0);
        return __result275__;
    }
    # 1867 "libcomelang2-gc.c"
    char msg2_125[1024*2*2*2];
    memset(&msg2_125, 0, sizeof(char)    *(1024*2*2*2)    );
    # 1869 "libcomelang2-gc.c"
    # 1870 "libcomelang2-gc.c"
    __builtin_va_start(args_126,msg);
    # 1871 "libcomelang2-gc.c"
    vsnprintf(msg2_125,1024*2*2*2,msg,args_126);
    # 1872 "libcomelang2-gc.c"
    __builtin_va_end(args_126);
    # 1874 "libcomelang2-gc.c"
    result_127=fprintf(f,"%s",msg2_125);
    # 1880 "libcomelang2-gc.c"
    # 1876 "libcomelang2-gc.c"
    if(_if_conditional201=result_127<0,    _if_conditional201) {
        # 1877 "libcomelang2-gc.c"
        __result276__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1877),result_127,(_Bool)0);
        return __result276__;
    }
    # 1880 "libcomelang2-gc.c"
    __result277__ = __result_obj__ = optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2-gc.c", 1880),f,(_Bool)1);
    return __result277__;
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
            return __result274__;
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
struct optional$2intbool* __result278__;
struct _IO_FILE* f_128;
_Bool _if_conditional203;
_Bool _if_conditional204;
struct optional$2intbool* __result279__;
int result_129;
_Bool _if_conditional205;
struct optional$2intbool* __result280__;
int result2_130;
_Bool _if_conditional206;
struct optional$2intbool* __result281__;
struct optional$2intbool* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_128, 0, sizeof(struct _IO_FILE*));
memset(&result_129, 0, sizeof(int));
memset(&result2_130, 0, sizeof(int));
    # 1889 "libcomelang2-gc.c"
    # 1885 "libcomelang2-gc.c"
    if(_if_conditional202=self==((void*)0)||file_name==((void*)0),    _if_conditional202) {
        # 1886 "libcomelang2-gc.c"
        __result278__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1886),-1,(_Bool)0);
        return __result278__;
    }
    # 1889 "libcomelang2-gc.c"
    # 1897 "libcomelang2-gc.c"
    # 1890 "libcomelang2-gc.c"
    if(_if_conditional203=append,    _if_conditional203) {
        # 1891 "libcomelang2-gc.c"
        f_128=fopen(file_name,"a");
    }
    else {
        # 1894 "libcomelang2-gc.c"
        f_128=fopen(file_name,"w");
    }
    # 1901 "libcomelang2-gc.c"
    # 1897 "libcomelang2-gc.c"
    if(_if_conditional204=f_128==((void*)0),    _if_conditional204) {
        # 1898 "libcomelang2-gc.c"
        __result279__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1898),-1,(_Bool)0);
        return __result279__;
    }
    # 1901 "libcomelang2-gc.c"
    result_129=fwrite(self,strlen(self),1,f_128);
    # 1907 "libcomelang2-gc.c"
    # 1903 "libcomelang2-gc.c"
    if(_if_conditional205=result_129<0,    _if_conditional205) {
        # 1904 "libcomelang2-gc.c"
        __result280__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1904),result_129,(_Bool)0);
        return __result280__;
    }
    # 1909 "libcomelang2-gc.c"
    result2_130=fclose(f_128);
    # 1913 "libcomelang2-gc.c"
    # 1909 "libcomelang2-gc.c"
    if(_if_conditional206=result2_130<0,    _if_conditional206) {
        # 1910 "libcomelang2-gc.c"
        __result281__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1910),result2_130,(_Bool)0);
        return __result281__;
    }
    # 1913 "libcomelang2-gc.c"
    __result282__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1913),result_129,(_Bool)1);
    return __result282__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
struct optional$2intbool* __result283__;
struct _IO_FILE* f_131;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct optional$2intbool* __result284__;
int result_132;
_Bool _if_conditional210;
struct optional$2intbool* __result285__;
int result2_133;
_Bool _if_conditional211;
struct optional$2intbool* __result286__;
struct optional$2intbool* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_131, 0, sizeof(struct _IO_FILE*));
memset(&result_132, 0, sizeof(int));
memset(&result2_133, 0, sizeof(int));
    # 1922 "libcomelang2-gc.c"
    # 1918 "libcomelang2-gc.c"
    if(_if_conditional207=self==((void*)0)||file_name==((void*)0),    _if_conditional207) {
        # 1919 "libcomelang2-gc.c"
        __result283__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1919),-1,(_Bool)0);
        return __result283__;
    }
    # 1922 "libcomelang2-gc.c"
    # 1930 "libcomelang2-gc.c"
    # 1923 "libcomelang2-gc.c"
    if(_if_conditional208=append,    _if_conditional208) {
        # 1924 "libcomelang2-gc.c"
        f_131=fopen(file_name,"a");
    }
    else {
        # 1927 "libcomelang2-gc.c"
        f_131=fopen(file_name,"w");
    }
    # 1934 "libcomelang2-gc.c"
    # 1930 "libcomelang2-gc.c"
    if(_if_conditional209=f_131==((void*)0),    _if_conditional209) {
        # 1931 "libcomelang2-gc.c"
        __result284__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1931),-1,(_Bool)0);
        return __result284__;
    }
    # 1934 "libcomelang2-gc.c"
    result_132=fwrite(self,strlen(self),1,f_131);
    # 1940 "libcomelang2-gc.c"
    # 1936 "libcomelang2-gc.c"
    if(_if_conditional210=result_132<0,    _if_conditional210) {
        # 1937 "libcomelang2-gc.c"
        __result285__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1937),result_132,(_Bool)0);
        return __result285__;
    }
    # 1942 "libcomelang2-gc.c"
    result2_133=fclose(f_131);
    # 1946 "libcomelang2-gc.c"
    # 1942 "libcomelang2-gc.c"
    if(_if_conditional211=result2_133<0,    _if_conditional211) {
        # 1943 "libcomelang2-gc.c"
        __result286__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1943),result2_133,(_Bool)0);
        return __result286__;
    }
    # 1946 "libcomelang2-gc.c"
    __result287__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1946),result_132,(_Bool)1);
    return __result287__;
}

struct optional$2charphbool* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct optional$2charphbool* __result288__;
struct _IO_FILE* f_134;
_Bool _if_conditional213;
struct optional$2charphbool* __result289__;
struct buffer* buf_135;
_Bool _while_condtional7;
int size_137;
_Bool _if_conditional214;
char* result_138;
int result2_139;
_Bool _if_conditional215;
struct optional$2charphbool* __result290__;
struct optional$2charphbool* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_134, 0, sizeof(struct _IO_FILE*));
memset(&buf_135, 0, sizeof(struct buffer*));
memset(&size_137, 0, sizeof(int));
memset(&result_138, 0, sizeof(char*));
memset(&result2_139, 0, sizeof(int));
    # 1955 "libcomelang2-gc.c"
    # 1951 "libcomelang2-gc.c"
    if(_if_conditional212=file_name==((void*)0),    _if_conditional212) {
        # 1952 "libcomelang2-gc.c"
        __result288__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1952),__builtin_string(""),(_Bool)0);
        return __result288__;
    }
    # 1955 "libcomelang2-gc.c"
    f_134=fopen(file_name,"r");
    # 1961 "libcomelang2-gc.c"
    # 1957 "libcomelang2-gc.c"
    if(_if_conditional213=f_134==((void*)0),    _if_conditional213) {
        # 1958 "libcomelang2-gc.c"
        __result289__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1958),__builtin_string(""),(_Bool)0);
        return __result289__;
    }
    # 1961 "libcomelang2-gc.c"
    buf_135=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1961));
    # 1975 "libcomelang2-gc.c"
    while(_while_condtional7=1,    _while_condtional7) {
        # 1964 "libcomelang2-gc.c"
        char buf2_136[8192];
        memset(&buf2_136, 0, sizeof(char)        *(8192)        );
        # 1966 "libcomelang2-gc.c"
        size_137=fread(buf2_136,1,8192,f_134);
        # 1968 "libcomelang2-gc.c"
        buffer_append(buf_135,buf2_136,size_137);
        # 1973 "libcomelang2-gc.c"
        # 1970 "libcomelang2-gc.c"
        if(_if_conditional214=size_137<8192,        _if_conditional214) {
            # 1971 "libcomelang2-gc.c"
            break;
        }
    }
    # 1975 "libcomelang2-gc.c"
    result_138=buffer_to_string(buf_135);
    # 1979 "libcomelang2-gc.c"
    result2_139=fclose(f_134);
    # 1983 "libcomelang2-gc.c"
    # 1979 "libcomelang2-gc.c"
    if(_if_conditional215=result2_139<0,    _if_conditional215) {
        # 1980 "libcomelang2-gc.c"
        __result290__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1980),__builtin_string(""),(_Bool)0);
        return __result290__;
    }
    # 1983 "libcomelang2-gc.c"
    __result291__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1983),result_138,(_Bool)1);
    return __result291__;
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
struct optional$2charphbool* __result292__;
struct _IO_FILE* f_140;
_Bool _if_conditional217;
struct optional$2charphbool* __result293__;
struct buffer* buf_141;
_Bool _while_condtional8;
int size_143;
_Bool _if_conditional218;
char* result_144;
int result2_145;
_Bool _if_conditional219;
struct optional$2charphbool* __result294__;
struct optional$2charphbool* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_140, 0, sizeof(struct _IO_FILE*));
memset(&buf_141, 0, sizeof(struct buffer*));
memset(&size_143, 0, sizeof(int));
memset(&result_144, 0, sizeof(char*));
memset(&result2_145, 0, sizeof(int));
    # 1992 "libcomelang2-gc.c"
    # 1988 "libcomelang2-gc.c"
    if(_if_conditional216=file_name==((void*)0),    _if_conditional216) {
        # 1989 "libcomelang2-gc.c"
        __result292__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1989),__builtin_string(""),(_Bool)0);
        return __result292__;
    }
    # 1992 "libcomelang2-gc.c"
    f_140=fopen(file_name,"r");
    # 1998 "libcomelang2-gc.c"
    # 1994 "libcomelang2-gc.c"
    if(_if_conditional217=f_140==((void*)0),    _if_conditional217) {
        # 1995 "libcomelang2-gc.c"
        __result293__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 1995),__builtin_string(""),(_Bool)0);
        return __result293__;
    }
    # 1998 "libcomelang2-gc.c"
    buf_141=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1998));
    # 2012 "libcomelang2-gc.c"
    while(_while_condtional8=1,    _while_condtional8) {
        # 2001 "libcomelang2-gc.c"
        char buf2_142[8192];
        memset(&buf2_142, 0, sizeof(char)        *(8192)        );
        # 2003 "libcomelang2-gc.c"
        size_143=fread(buf2_142,1,8192,f_140);
        # 2005 "libcomelang2-gc.c"
        buffer_append(buf_141,buf2_142,size_143);
        # 2010 "libcomelang2-gc.c"
        # 2007 "libcomelang2-gc.c"
        if(_if_conditional218=size_143<8192,        _if_conditional218) {
            # 2008 "libcomelang2-gc.c"
            break;
        }
    }
    # 2012 "libcomelang2-gc.c"
    result_144=buffer_to_string(buf_141);
    # 2016 "libcomelang2-gc.c"
    result2_145=fclose(f_140);
    # 2020 "libcomelang2-gc.c"
    # 2016 "libcomelang2-gc.c"
    if(_if_conditional219=result2_145<0,    _if_conditional219) {
        # 2017 "libcomelang2-gc.c"
        __result294__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2017),__builtin_string(""),(_Bool)0);
        return __result294__;
    }
    # 2020 "libcomelang2-gc.c"
    __result295__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2020),result_144,(_Bool)1);
    return __result295__;
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_146;
_Bool _if_conditional220;
struct optional$2list$1charphphbool* __result297__;
_Bool _while_condtional9;
_Bool _if_conditional221;
struct optional$2list$1charphphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_146, 0, sizeof(struct list$1charph*));
    # 2025 "libcomelang2-gc.c"
    result_146=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 2025));
    # 2031 "libcomelang2-gc.c"
    # 2027 "libcomelang2-gc.c"
    if(_if_conditional220=f==((void*)0),    _if_conditional220) {
        # 2028 "libcomelang2-gc.c"
        __result297__ = __result_obj__ = optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2-gc.c", 2028),result_146,(_Bool)0);
        return __result297__;
    }
    # 2041 "libcomelang2-gc.c"
    while(_while_condtional9=1,    _while_condtional9) {
        # 2032 "libcomelang2-gc.c"
        char buf_147[8192];
        memset(&buf_147, 0, sizeof(char)        *(8192)        );
        # 2038 "libcomelang2-gc.c"
        # 2034 "libcomelang2-gc.c"
        if(_if_conditional221=fgets(buf_147,8192,f)==((void*)0),        _if_conditional221) {
            # 2035 "libcomelang2-gc.c"
            break;
        }
        # 2038 "libcomelang2-gc.c"
        list$1charph_push_back(result_146,__builtin_string(buf_147));
    }
    # 2041 "libcomelang2-gc.c"
    __result298__ = __result_obj__ = optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2-gc.c", 2041),result_146,(_Bool)1);
    return __result298__;
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2list$1charphphbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 40 "./comelang2.h"
            self->v1=v1;
            # 41 "./comelang2.h"
            self->v2=v2;
            # 43 "./comelang2.h"
            __result296__ = __result_obj__ = self;
            return __result296__;
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
struct optional$2intbool* __result299__;
struct _IO_FILE* f_148;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct optional$2intbool* __result300__;
struct optional$2intbool* __result301__;
struct optional$2intbool* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_148, 0, sizeof(struct _IO_FILE*));
    # 2049 "libcomelang2-gc.c"
    # 2046 "libcomelang2-gc.c"
    if(_if_conditional222=path==((void*)0)||mode==((void*)0),    _if_conditional222) {
        # 2047 "libcomelang2-gc.c"
        __result299__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2047),-1,(_Bool)0);
        return __result299__;
    }
    # 2049 "libcomelang2-gc.c"
    f_148=fopen(path,mode);
    # 2063 "libcomelang2-gc.c"
    # 2051 "libcomelang2-gc.c"
    if(_if_conditional223=f_148,    _if_conditional223) {
        # 2052 "libcomelang2-gc.c"
        block(parent,f_148);
        # 2058 "libcomelang2-gc.c"
        # 2053 "libcomelang2-gc.c"
        if(_if_conditional224=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional224) {
            # 2054 "libcomelang2-gc.c"
            fclose(f_148);
            # 2055 "libcomelang2-gc.c"
            __result300__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2055),0,(_Bool)1);
            return __result300__;
        }
        # 2058 "libcomelang2-gc.c"
        fclose(f_148);
        # 2060 "libcomelang2-gc.c"
        __result301__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2060),0,(_Bool)1);
        return __result301__;
    }
    # 2063 "libcomelang2-gc.c"
    __result302__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2063),-1,(_Bool)0);
    return __result302__;
}

struct optional$2charphbool* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
struct optional$2charphbool* __result303__;
struct optional$2charphbool* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 2074 "libcomelang2-gc.c"
    # 2071 "libcomelang2-gc.c"
    if(_if_conditional225=self==((void*)0),    _if_conditional225) {
        # 2072 "libcomelang2-gc.c"
        __result303__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2072),-1,(_Bool)0);
        return __result303__;
    }
    # 2074 "libcomelang2-gc.c"
    puts(self);
    # 2076 "libcomelang2-gc.c"
    __result304__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2076),__builtin_string(self),(_Bool)1);
    return __result304__;
}

struct optional$2charphbool* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
struct optional$2charphbool* __result305__;
struct optional$2charphbool* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 2084 "libcomelang2-gc.c"
    # 2081 "libcomelang2-gc.c"
    if(_if_conditional226=self==((void*)0),    _if_conditional226) {
        # 2082 "libcomelang2-gc.c"
        __result305__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2082),-1,(_Bool)0);
        return __result305__;
    }
    # 2084 "libcomelang2-gc.c"
    printf("%s",self);
    # 2086 "libcomelang2-gc.c"
    __result306__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2086),__builtin_string(self),(_Bool)1);
    return __result306__;
}

struct optional$2charphbool* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
struct optional$2charphbool* __result307__;
char* msg2_149;
va_list args_150;
struct optional$2charphbool* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_149, 0, sizeof(char*));
memset(&args_150, 0, sizeof(va_list));
    # 2095 "libcomelang2-gc.c"
    # 2092 "libcomelang2-gc.c"
    if(_if_conditional227=self==((void*)0),    _if_conditional227) {
        # 2093 "libcomelang2-gc.c"
        __result307__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2093),__builtin_string(""),(_Bool)0);
        return __result307__;
    }
    # 2095 "libcomelang2-gc.c"
    # 2097 "libcomelang2-gc.c"
    # 2098 "libcomelang2-gc.c"
    __builtin_va_start(args_150,self);
    # 2099 "libcomelang2-gc.c"
    vasprintf(&msg2_149,self,args_150);
    # 2100 "libcomelang2-gc.c"
    __builtin_va_end(args_150);
    # 2102 "libcomelang2-gc.c"
    printf("%s",msg2_149);
    # 2104 "libcomelang2-gc.c"
    free(msg2_149);
    # 2106 "libcomelang2-gc.c"
    __result308__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2106),__builtin_string(self),(_Bool)1);
    return __result308__;
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct optional$2charphbool* __result309__;
char* msg2_151;
va_list args_152;
struct optional$2charphbool* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_151, 0, sizeof(char*));
memset(&args_152, 0, sizeof(va_list));
    # 2114 "libcomelang2-gc.c"
    # 2111 "libcomelang2-gc.c"
    if(_if_conditional228=self==((void*)0),    _if_conditional228) {
        # 2112 "libcomelang2-gc.c"
        __result309__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2112),__builtin_string(""),(_Bool)0);
        return __result309__;
    }
    # 2114 "libcomelang2-gc.c"
    # 2116 "libcomelang2-gc.c"
    # 2117 "libcomelang2-gc.c"
    __builtin_va_start(args_152,self);
    # 2118 "libcomelang2-gc.c"
    vasprintf(&msg2_151,self,args_152);
    # 2119 "libcomelang2-gc.c"
    __builtin_va_end(args_152);
    # 2121 "libcomelang2-gc.c"
    printf("%s",msg2_151);
    # 2123 "libcomelang2-gc.c"
    free(msg2_151);
    # 2125 "libcomelang2-gc.c"
    __result310__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2125),__builtin_string(self),(_Bool)1);
    return __result310__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 2130 "libcomelang2-gc.c"
    printf(msg,self);
    # 2132 "libcomelang2-gc.c"
    __result311__ = self;
    return __result311__;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
struct optional$2charphbool* __result312__;
struct optional$2charphbool* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 2140 "libcomelang2-gc.c"
    # 2137 "libcomelang2-gc.c"
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        # 2138 "libcomelang2-gc.c"
        __result312__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2138),__builtin_string(""),(_Bool)0);
        return __result312__;
    }
    # 2140 "libcomelang2-gc.c"
    puts(self);
    # 2142 "libcomelang2-gc.c"
    __result313__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2142),__builtin_string(self),(_Bool)1);
    return __result313__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_153;
_Bool _for_condtionalA12;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_153, 0, sizeof(int));
    # 2157 "libcomelang2-gc.c"
    for(
    i_153=0 ,    0;    _for_condtionalA12=    i_153<self ,    _for_condtionalA12;    i_153++ ,    0    ){
        # 2151 "libcomelang2-gc.c"
        block(parent,i_153);
        # 2156 "libcomelang2-gc.c"
        # 2153 "libcomelang2-gc.c"
        if(_if_conditional230=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional230) {
            # 2154 "libcomelang2-gc.c"
            return;
        }
    }
}

