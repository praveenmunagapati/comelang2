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
struct sMemHeader
{
    void* mem;
    long int size;
};
struct sMemHeader* gMemHeaderTable;
long int gSizeMemHeaders=0;
long int gNumMemHeaders=0;
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

static void come_mem_header_rehash();
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
struct smart_pointer$1char* result_0;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997);
    result_0->memory=buffer_clone(self);
    result_0->p=result_0->memory->buf;
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
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2007);
    result_1->memory=buffer_clone(self);
    result_1->p=(char*)result_1->memory->buf;
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
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2017);
    result_2->memory=buffer_clone(self);
    result_2->p=(short short*)result_2->memory->buf;
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
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2027);
    result_3->memory=buffer_clone(self);
    result_3->p=(int*)result_3->memory->buf;
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
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2037);
    result_4->memory=buffer_clone(self);
    result_4->p=(long*)result_4->memory->buf;
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
    if(_if_conditional1=gNumComeStackFrame==10,    _if_conditional1) {
        for(
        i_5=0 ,        0;        _for_condtionalA1=        i_5<10-1 ,        _for_condtionalA1;        i_5++ ,        0        ){
            gComeStackFrameSName[i_5]=gComeStackFrameSName[i_5+1];
            gComeStackFrameSLine[i_5]=gComeStackFrameSLine[i_5+1];
        }
        gComeStackFrameSName[i_5]=sname;
        gComeStackFrameSLine[i_5]=sline;
    }
    else {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
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
    if(_if_conditional2=gNumComeStackFrame>0,    _if_conditional2) {
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
    buf_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 46));
    buffer_append_str(buf_6,xsprintf("%s %d\n",sname,sline));
    for(
    i_7=gNumComeStackFrame-2 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        buffer_append_str(buf_6,xsprintf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]));
    }
    if(_if_conditional3=gComeStackFrameBuffer,    _if_conditional3) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_6));
}

void exception_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    for(
    i_8=gNumComeStackFrame-1 ,    0;    _for_condtionalA3=    i_8>=0 ,    _for_condtionalA3;    i_8-- ,    0    ){
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
    if(_if_conditional4=mem==((void*)0),    _if_conditional4) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
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
    if(_if_conditional5=mem==((void*)0),    _if_conditional5) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional6=mem<begin,    _if_conditional6) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional7=mem>=end,    _if_conditional7) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
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
    if(_if_conditional8=!self,    _if_conditional8) {
        block(parent);
        if(_if_conditional9=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional9) {
            __result16__ = self;
            return __result16__;
        }
        stackframe();
        exit(1);
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
_Bool _if_conditional10;
_Bool _if_conditional11;
int __result19__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional10=self<0,    _if_conditional10) {
        block(parent);
        if(_if_conditional11=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional11) {
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
_Bool _if_conditional12;
_Bool _if_conditional13;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional12=self<0,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result21__ = self;
            return __result21__;
        }
        stackframe();
        exit(1);
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
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result24__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
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
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional16=!self,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
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
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool __result28__;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional18=!self,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
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
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    if(_if_conditional20=!test,    _if_conditional20) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(_if_conditional21=gComeMallocLib,    _if_conditional21) {
        gSizeMemHeaders=1024;
        gMemHeaderTable=calloc(1,sizeof(struct sMemHeader)*gSizeMemHeaders);
        gNumMemHeaders=0;
    }
    if(_if_conditional22=gComeGCLib,    _if_conditional22) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
_Bool _if_conditional24;
struct sMemHeader* it_9;
int n_10;
_Bool _while_condtional1;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&n_10, 0, sizeof(int));
    if(_if_conditional23=gComeStackFrameBuffer,    _if_conditional23) {
        free(gComeStackFrameBuffer);
    }
    if(_if_conditional24=gComeMallocLib,    _if_conditional24) {
        it_9=gMemHeaderTable;
        n_10=0;
        while(_while_condtional1=it_9<gMemHeaderTable+gSizeMemHeaders,        _while_condtional1) {
            if(_if_conditional25=it_9->mem,            _if_conditional25) {
                n_10++;
            }
            it_9++;
        }
        if(_if_conditional26=n_10>0,        _if_conditional26) {
            printf("%d memory leaks\n",n_10);
        }
        free(gMemHeaderTable);
    }
}

static void come_mem_header_rehash(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int new_size_11;
struct sMemHeader* new_table_12;
struct sMemHeader* it_13;
_Bool _while_condtional2;
_Bool _if_conditional27;
unsigned int key_14;
struct sMemHeader* it2_15;
_Bool _while_condtional3;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&new_size_11, 0, sizeof(long int));
memset(&new_table_12, 0, sizeof(struct sMemHeader*));
memset(&it_13, 0, sizeof(struct sMemHeader*));
memset(&key_14, 0, sizeof(unsigned int));
memset(&it2_15, 0, sizeof(struct sMemHeader*));
    new_size_11=gSizeMemHeaders*3;
    new_table_12=calloc(1,sizeof(struct sMemHeader)*new_size_11);
    it_13=gMemHeaderTable;
    while(_while_condtional2=it_13<gMemHeaderTable+gSizeMemHeaders,    _while_condtional2) {
        if(_if_conditional27=it_13->mem,        _if_conditional27) {
            key_14=(long int)it_13->mem%(long int)new_size_11;
            it2_15=new_table_12+key_14;
            while(_while_condtional3=(_Bool)1,            _while_condtional3) {
                if(_if_conditional28=it2_15->mem==((void*)0),                _if_conditional28) {
                    break;
                }
                else {
                    it2_15++;
                    if(_if_conditional29=it2_15==new_table_12+new_size_11,                    _if_conditional29) {
                        it2_15=new_table_12;
                    }
                    else {
                        if(_if_conditional30=it2_15==new_table_12+key_14,                        _if_conditional30) {
                            puts("mem header unexpected error");
                            stackframe();
                            exit(2);
                        }
                    }
                }
            }
            it2_15->mem=it_13->mem;
            it2_15->size=it_13->size;
        }
        it_13++;
    }
    free(gMemHeaderTable);
    gMemHeaderTable=new_table_12;
    gSizeMemHeaders=new_size_11;
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
void* result_16;
void* __result30__;
_Bool _if_conditional32;
void* __result31__;
void* result_17;
_Bool _if_conditional33;
unsigned int key_18;
struct sMemHeader* it_19;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_16, 0, sizeof(void*));
memset(&result_17, 0, sizeof(void*));
memset(&key_18, 0, sizeof(unsigned int));
memset(&it_19, 0, sizeof(struct sMemHeader*));
    if(_if_conditional31=gComeGCLib,    _if_conditional31) {
        result_16=GC_malloc(size);
        memset(result_16,0,size);
        __result30__ = __result_obj__ = result_16;
        return __result30__;
    }
    else {
        if(_if_conditional32=!gComeMallocLib,        _if_conditional32) {
            __result31__ = __result_obj__ = calloc(1,size);
            return __result31__;
        }
        else {
            result_17=calloc(1,size);
            if(_if_conditional33=gNumMemHeaders>=gSizeMemHeaders/3,            _if_conditional33) {
                come_mem_header_rehash();
            }
            key_18=(long int)result_17%gSizeMemHeaders;
            it_19=gMemHeaderTable+key_18;
            while(_while_condtional4=(_Bool)1,            _while_condtional4) {
                if(_if_conditional34=it_19->mem==((void*)0),                _if_conditional34) {
                    break;
                }
                else {
                    it_19++;
                    if(_if_conditional35=it_19==gMemHeaderTable+gSizeMemHeaders,                    _if_conditional35) {
                        it_19=gMemHeaderTable;
                    }
                    else {
                        if(_if_conditional36=it_19==gMemHeaderTable+key_18,                        _if_conditional36) {
                            puts("mem header unexpected error");
                            stackframe();
                            exit(2);
                        }
                    }
                }
            }
            it_19->mem=result_17;
            it_19->size=size;
            gNumMemHeaders++;
            __result32__ = __result_obj__ = result_17;
            return __result32__;
        }
    }
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
unsigned int key_20;
struct sMemHeader* it_21;
_Bool _while_condtional5;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&key_20, 0, sizeof(unsigned int));
memset(&it_21, 0, sizeof(struct sMemHeader*));
    if(_if_conditional37=mem,    _if_conditional37) {
        if(_if_conditional38=gComeGCLib,        _if_conditional38) {
        }
        else {
            if(_if_conditional39=!gComeMallocLib,            _if_conditional39) {
                free(mem);
            }
            else {
                key_20=(long int)mem%gSizeMemHeaders;
                it_21=gMemHeaderTable+key_20;
                while(_while_condtional5=(_Bool)1,                _while_condtional5) {
                    if(_if_conditional40=it_21->mem==((void*)0),                    _if_conditional40) {
                        break;
                    }
                    else {
                        if(_if_conditional41=it_21->mem==mem,                        _if_conditional41) {
                            break;
                        }
                        else {
                            it_21++;
                            if(_if_conditional42=it_21==gMemHeaderTable+gSizeMemHeaders,                            _if_conditional42) {
                                it_21=gMemHeaderTable;
                            }
                            else {
                                if(_if_conditional43=it_21==gMemHeaderTable+key_20,                                _if_conditional43) {
                                    puts("mem header unexpected error");
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                it_21->mem=((void*)0);
                it_21->size=0;
                free(mem);
                gNumMemHeaders--;
            }
        }
    }
}

void* come_calloc(long int count, long int size, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_22;
long int* ref_count_23;
long int* size2_24;
void* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_22, 0, sizeof(char*));
memset(&ref_count_23, 0, sizeof(long int*));
memset(&size2_24, 0, sizeof(long int*));
    mem_22=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    ref_count_23=(long int*)mem_22;
    *ref_count_23=0;
    size2_24=(long int*)(mem_22+sizeof(long int));
    *size2_24=size*count+sizeof(long int)+sizeof(long int);
    __result33__ = __result_obj__ = mem_22+sizeof(long int)+sizeof(long int);
    return __result33__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
long int* ref_count_25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_25, 0, sizeof(long int*));
    if(_if_conditional44=mem==((void*)0),    _if_conditional44) {
        return;
    }
    ref_count_25=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_25);
}

void* come_memdup(void* block, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
void* __result34__;
char* mem_26;
long int* size_p_27;
long int size_28;
void* result_29;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_26, 0, sizeof(char*));
memset(&size_p_27, 0, sizeof(long int*));
memset(&size_28, 0, sizeof(long int));
memset(&result_29, 0, sizeof(void*));
    if(_if_conditional45=!block,    _if_conditional45) {
        __result34__ = __result_obj__ = ((void*)0);
        return __result34__;
    }
    mem_26=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_27=(long int*)(mem_26+sizeof(long int));
    size_28=*size_p_27-sizeof(long int)-sizeof(long int);
    result_29=come_calloc(1,size_28,sname,sline);
    memcpy(result_29,block,size_28);
    __result35__ = __result_obj__ = result_29;
    return __result35__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
void* __result36__;
long int* ref_count_30;
void* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_30, 0, sizeof(long int*));
    if(_if_conditional46=mem==((void*)0),    _if_conditional46) {
        __result36__ = __result_obj__ = mem;
        return __result36__;
    }
    ref_count_30=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_30)++;
    __result37__ = __result_obj__ = mem;
    return __result37__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
void* __result38__;
long int* ref_count_31;
void* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_31, 0, sizeof(long int*));
    if(_if_conditional47=mem==((void*)0),    _if_conditional47) {
        __result38__ = __result_obj__ = mem;
        return __result38__;
    }
    ref_count_31=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_31);
    __result39__ = __result_obj__ = mem;
    return __result39__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
void* __result40__;
long int* ref_count_32;
_Bool _if_conditional49;
long int count_33;
_Bool _if_conditional50;
_Bool _if_conditional51;
void (*finalizer_34)(void*);
void* __result41__;
void* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_32, 0, sizeof(long int*));
memset(&count_33, 0, sizeof(long int));
memset(&finalizer_34, 0, sizeof(void (*)(void*)));
    if(_if_conditional48=mem==((void*)0),    _if_conditional48) {
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    ref_count_32=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional49=!no_decrement,    _if_conditional49) {
        (*ref_count_32)--;
    }
    count_33=*ref_count_32;
    if(_if_conditional50=!no_free&&(count_33<=0||force_delete_),    _if_conditional50) {
        if(_if_conditional51=protocol_obj&&protocol_fun,        _if_conditional51) {
            finalizer_34=protocol_fun;
            finalizer_34(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result41__ = __result_obj__ = ((void*)0);
        return __result41__;
    }
    __result42__ = __result_obj__ = mem;
    return __result42__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
void (*finalizer_35)(void*);
void (*finalizer_36)(void*);
long int* ref_count_37;
_Bool _if_conditional56;
long int count_38;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
void (*finalizer_39)(void*);
_Bool _if_conditional60;
void (*finalizer_40)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_35, 0, sizeof(void (*)(void*)));
memset(&finalizer_36, 0, sizeof(void (*)(void*)));
memset(&ref_count_37, 0, sizeof(long int*));
memset(&count_38, 0, sizeof(long int));
memset(&finalizer_39, 0, sizeof(void (*)(void*)));
memset(&finalizer_40, 0, sizeof(void (*)(void*)));
    if(_if_conditional52=mem==((void*)0),    _if_conditional52) {
        return;
    }
    if(_if_conditional53=call_finalizer_only,    _if_conditional53) {
        if(_if_conditional54=fun,        _if_conditional54) {
            if(_if_conditional55=protocol_obj&&protocol_fun,            _if_conditional55) {
                finalizer_35=protocol_fun;
                finalizer_35(protocol_obj);
            }
            finalizer_36=fun;
            finalizer_36(mem);
        }
    }
    else {
        ref_count_37=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional56=!no_decrement,        _if_conditional56) {
            (*ref_count_37)--;
        }
        count_38=*ref_count_37;
        if(_if_conditional57=!no_free&&(count_38<=0||force_delete_),        _if_conditional57) {
            if(_if_conditional58=mem,            _if_conditional58) {
                if(_if_conditional59=protocol_obj&&protocol_fun,                _if_conditional59) {
                    finalizer_39=protocol_fun;
                    finalizer_39(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional60=fun,                _if_conditional60) {
                    finalizer_40=fun;
                    finalizer_40(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
char* __result43__;
int len_41;
char* result_42;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_41, 0, sizeof(int));
memset(&result_42, 0, sizeof(char*));
    if(_if_conditional61=str==((void*)0),    _if_conditional61) {
        __result43__ = __result_obj__ = ((void*)0);
        return __result43__;
    }
    len_41=strlen(str)+1;
    result_42=(char*)come_calloc(1, sizeof(char)*(1*(len_41)), "libcomelang2-gc.c", 627);
    strncpy(result_42,str,len_41);
    __result44__ = __result_obj__ = result_42;
    return __result44__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_43;
int i_44;
_Bool _for_condtionalA4;
_Bool _if_conditional62;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_43, 0, sizeof(_Bool));
memset(&i_44, 0, sizeof(int));
    found_43=(_Bool)0;
    for(
    i_44=0 ,    0;    _for_condtionalA4=    i_44<len ,    _for_condtionalA4;    i_44++ ,    0    ){
        if(_if_conditional62=array[i_44]==element,        _if_conditional62) {
            found_43=(_Bool)1;
            break;
        }
    }
    __result45__ = found_43;
    return __result45__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 652);
    self->buf[0]=0;
    self->len=0;
    __result46__ = __result_obj__ = self;
    return __result46__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional63=self&&self->buf,    _if_conditional63) {
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional64=self&&self->buf,    _if_conditional64) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
struct buffer* __result47__;
struct buffer* result_45;
struct buffer* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_45, 0, sizeof(struct buffer*));
    if(_if_conditional65=self==((void*)0),    _if_conditional65) {
        __result47__ = __result_obj__ = ((void*)0);
        return __result47__;
    }
    result_45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 674);
    result_45->size=self->size;
    result_45->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 677);
    result_45->len=self->len;
    memcpy(result_45->buf,self->buf,self->len);
    __result48__ = __result_obj__ = result_45;
    return __result48__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
int __result49__;
int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        __result49__ = 0;
        return __result49__;
    }
    __result50__ = self->len;
    return __result50__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional67=self==((void*)0),    _if_conditional67) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional68=self==((void*)0),    _if_conditional68) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
struct buffer* __result51__;
_Bool _if_conditional70;
char* old_buf_46;
int old_len_47;
int new_size_48;
struct buffer* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_46, 0, sizeof(char*));
memset(&old_len_47, 0, sizeof(int));
memset(&new_size_48, 0, sizeof(int));
    if(_if_conditional69=self==((void*)0)||mem==((void*)0),    _if_conditional69) {
        __result51__ = __result_obj__ = self;
        return __result51__;
    }
    if(_if_conditional70=self->len+size+1+1>=self->size,    _if_conditional70) {
        old_buf_46=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 716);
        memcpy(old_buf_46,self->buf,self->size);
        old_len_47=self->len;
        new_size_48=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_48)), "libcomelang2-gc.c", 720);
        memcpy(self->buf,old_buf_46,old_len_47);
        self->buf[old_len_47]=0;
        self->size=new_size_48;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result52__ = __result_obj__ = self;
    return __result52__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
struct buffer* __result53__;
_Bool _if_conditional72;
char* old_buf_49;
int old_len_50;
int new_size_51;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&old_buf_49, 0, sizeof(char*));
memset(&old_len_50, 0, sizeof(int));
memset(&new_size_51, 0, sizeof(int));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result53__ = __result_obj__ = ((void*)0);
        return __result53__;
    }
    if(_if_conditional72=self->len+1+1+1>=self->size,    _if_conditional72) {
        old_buf_49=charp_clone(self->buf);
        old_len_50=self->len;
        new_size_51=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_51)), "libcomelang2-gc.c", 743);
        memcpy(self->buf,old_buf_49,old_len_50);
        self->buf[old_len_50]=0;
        self->size=new_size_51;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
struct buffer* __result55__;
int size_52;
_Bool _if_conditional74;
char* old_buf_53;
int old_len_54;
int new_size_55;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_52, 0, sizeof(int));
memset(&old_buf_53, 0, sizeof(char*));
memset(&old_len_54, 0, sizeof(int));
memset(&new_size_55, 0, sizeof(int));
    if(_if_conditional73=self==((void*)0)||mem==((void*)0),    _if_conditional73) {
        __result55__ = __result_obj__ = self;
        return __result55__;
    }
    size_52=strlen(mem);
    if(_if_conditional74=self->len+size_52+1+1>=self->size,    _if_conditional74) {
        old_buf_53=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 765);
        memcpy(old_buf_53,self->buf,self->size);
        old_len_54=self->len;
        new_size_55=(self->size+size_52+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_55)), "libcomelang2-gc.c", 769);
        memcpy(self->buf,old_buf_53,old_len_54);
        self->buf[old_len_54]=0;
        self->size=new_size_55;
    }
    memcpy(self->buf+self->len,mem,size_52);
    self->len+=size_52;
    self->buf[self->len]=0;
    __result56__ = __result_obj__ = self;
    return __result56__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct buffer* __result57__;
int size_56;
_Bool _if_conditional76;
char* old_buf_57;
int old_len_58;
int new_size_59;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_56, 0, sizeof(int));
memset(&old_buf_57, 0, sizeof(char*));
memset(&old_len_58, 0, sizeof(int));
memset(&new_size_59, 0, sizeof(int));
    if(_if_conditional75=self==((void*)0)||mem==((void*)0),    _if_conditional75) {
        __result57__ = __result_obj__ = self;
        return __result57__;
    }
    size_56=strlen(mem)+1;
    if(_if_conditional76=self->len+size_56+1+1+1>=self->size,    _if_conditional76) {
        old_buf_57=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 789);
        memcpy(old_buf_57,self->buf,self->size);
        old_len_58=self->len;
        new_size_59=(self->size+size_56+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_59)), "libcomelang2-gc.c", 793);
        memcpy(self->buf,old_buf_57,old_len_58);
        self->buf[old_len_58]=0;
        self->size=new_size_59;
    }
    memcpy(self->buf+self->len,mem,size_56);
    self->len+=size_56;
    self->buf[self->len]=0;
    self->len++;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
struct buffer* __result59__;
int* mem_60;
int size_61;
_Bool _if_conditional78;
char* old_buf_62;
int old_len_63;
int new_size_64;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_60, 0, sizeof(int*));
memset(&size_61, 0, sizeof(int));
memset(&old_buf_62, 0, sizeof(char*));
memset(&old_len_63, 0, sizeof(int));
memset(&new_size_64, 0, sizeof(int));
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result59__ = __result_obj__ = ((void*)0);
        return __result59__;
    }
    mem_60=&value;
    size_61=sizeof(int);
    if(_if_conditional78=self->len+size_61+1+1>=self->size,    _if_conditional78) {
        old_buf_62=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 816);
        memcpy(old_buf_62,self->buf,self->size);
        old_len_63=self->len;
        new_size_64=(self->size+size_61+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_64)), "libcomelang2-gc.c", 820);
        memcpy(self->buf,old_buf_62,old_len_63);
        self->buf[old_len_63]=0;
        self->size=new_size_64;
    }
    memcpy(self->buf+self->len,mem_60,size_61);
    self->len+=size_61;
    self->buf[self->len]=0;
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_65;
int size_66;
_Bool _if_conditional79;
char* old_buf_67;
int old_len_68;
int new_size_69;
struct buffer* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_65, 0, sizeof(long*));
memset(&size_66, 0, sizeof(int));
memset(&old_buf_67, 0, sizeof(char*));
memset(&old_len_68, 0, sizeof(int));
memset(&new_size_69, 0, sizeof(int));
    mem_65=&value;
    size_66=sizeof(long);
    if(_if_conditional79=self->len+size_66+1+1>=self->size,    _if_conditional79) {
        old_buf_67=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 839);
        memcpy(old_buf_67,self->buf,self->size);
        old_len_68=self->len;
        new_size_69=(self->size+size_66+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_69)), "libcomelang2-gc.c", 843);
        memcpy(self->buf,old_buf_67,old_len_68);
        self->buf[old_len_68]=0;
        self->size=new_size_69;
    }
    memcpy(self->buf+self->len,mem_65,size_66);
    self->len+=size_66;
    self->buf[self->len]=0;
    __result61__ = __result_obj__ = self;
    return __result61__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional80;
struct buffer* __result62__;
short short* mem_70;
int size_71;
_Bool _if_conditional81;
char* old_buf_72;
int old_len_73;
int new_size_74;
struct buffer* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_70, 0, sizeof(short short*));
memset(&size_71, 0, sizeof(int));
memset(&old_buf_72, 0, sizeof(char*));
memset(&old_len_73, 0, sizeof(int));
memset(&new_size_74, 0, sizeof(int));
    if(_if_conditional80=self==((void*)0),    _if_conditional80) {
        __result62__ = __result_obj__ = ((void*)0);
        return __result62__;
    }
    mem_70=&value;
    size_71=sizeof(short short);
    if(_if_conditional81=self->len+size_71+1+1>=self->size,    _if_conditional81) {
        old_buf_72=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 866);
        memcpy(old_buf_72,self->buf,self->size);
        old_len_73=self->len;
        new_size_74=(self->size+size_71+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_74)), "libcomelang2-gc.c", 870);
        memcpy(self->buf,old_buf_72,old_len_73);
        self->buf[old_len_73]=0;
        self->size=new_size_74;
    }
    memcpy(self->buf+self->len,mem_70,size_71);
    self->len+=size_71;
    self->buf[self->len]=0;
    __result63__ = __result_obj__ = self;
    return __result63__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
struct buffer* __result64__;
int len_75;
_Bool _if_conditional83;
int new_size_76;
int i_77;
_Bool _for_condtionalA5;
struct buffer* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_75, 0, sizeof(int));
memset(&new_size_76, 0, sizeof(int));
memset(&i_77, 0, sizeof(int));
    if(_if_conditional82=self==((void*)0),    _if_conditional82) {
        __result64__ = __result_obj__ = ((void*)0);
        return __result64__;
    }
    len_75=self->len;
    len_75=(len_75+3)&~3;
    if(_if_conditional83=len_75>=self->size,    _if_conditional83) {
        new_size_76=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_76)), "libcomelang2-gc.c", 894);
        self->size=new_size_76;
    }
    for(
    i_77=self->len ,    0;    _for_condtionalA5=    i_77<len_75 ,    _for_condtionalA5;    i_77++ ,    0    ){
        self->buf[i_77]=0;
    }
    self->len=len_75;
    __result65__ = __result_obj__ = self;
    return __result65__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
struct optional$2intbool* __result67__;
_Bool _if_conditional85;
struct optional$2intbool* __result68__;
_Bool _if_conditional86;
struct optional$2intbool* __result69__;
struct optional$2intbool* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional84=left==((void*)0)&&right==((void*)0),    _if_conditional84) {
        __result67__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 910),0,(_Bool)0);
        return __result67__;
    }
    else {
        if(_if_conditional85=left==((void*)0),        _if_conditional85) {
            __result68__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 913),-1,(_Bool)0);
            return __result68__;
        }
        else {
            if(_if_conditional86=right==((void*)0),            _if_conditional86) {
                __result69__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 916),1,(_Bool)0);
                return __result69__;
            }
        }
    }
    __result70__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 919),strcmp(left->buf,right->buf),(_Bool)1);
    return __result70__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result66__ = __result_obj__ = self;
            return __result66__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_78;
_Bool _if_conditional87;
struct buffer* __result71__;
struct buffer* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct buffer*));
    result_78=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 924));
    if(_if_conditional87=self==((void*)0),    _if_conditional87) {
        __result71__ = __result_obj__ = result_78;
        return __result71__;
    }
    buffer_append_str(result_78,self);
    __result72__ = __result_obj__ = result_78;
    return __result72__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct buffer* result_79;
_Bool _if_conditional88;
struct buffer* __result73__;
struct buffer* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_79, 0, sizeof(struct buffer*));
    result_79=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 937));
    if(_if_conditional88=self==((void*)0),    _if_conditional88) {
        __result73__ = __result_obj__ = result_79;
        return __result73__;
    }
    buffer_append_str(result_79,self);
    __result74__ = __result_obj__ = result_79;
    return __result74__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
char* __result75__;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional89=self==((void*)0),    _if_conditional89) {
        __result75__ = __result_obj__ = __builtin_string("");
        return __result75__;
    }
    __result76__ = __result_obj__ = __builtin_string(self->buf);
    return __result76__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self==right;
    return __result77__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = self==right;
    return __result78__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = self==right;
    return __result79__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = self==right;
    return __result80__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = self==right;
    return __result81__;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = self==right;
    return __result82__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = self==right;
    return __result83__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = self==right;
    return __result84__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
struct optional$2boolbool* __result86__;
_Bool _if_conditional91;
struct optional$2boolbool* __result87__;
_Bool _if_conditional92;
struct optional$2boolbool* __result88__;
struct optional$2boolbool* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional90=self==((void*)0)&&right==((void*)0),    _if_conditional90) {
        __result86__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 1003),(_Bool)1,(_Bool)0);
        return __result86__;
    }
    else {
        if(_if_conditional91=self==((void*)0),        _if_conditional91) {
            __result87__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 1006),(_Bool)0,(_Bool)0);
            return __result87__;
        }
        else {
            if(_if_conditional92=right==((void*)0),            _if_conditional92) {
                __result88__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 1009),(_Bool)0,(_Bool)0);
                return __result88__;
            }
        }
    }
    __result89__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1012),strcmp(self,right)==0,(_Bool)1);
    return __result89__;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result85__ = __result_obj__ = self;
            return __result85__;
}

struct optional$2boolbool* charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
struct optional$2boolbool* __result90__;
_Bool _if_conditional94;
struct optional$2boolbool* __result91__;
_Bool _if_conditional95;
struct optional$2boolbool* __result92__;
struct optional$2boolbool* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional93=self==((void*)0)&&right==((void*)0),    _if_conditional93) {
        __result90__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 1018),(_Bool)1,(_Bool)0);
        return __result90__;
    }
    else {
        if(_if_conditional94=self==((void*)0),        _if_conditional94) {
            __result91__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 1021),(_Bool)0,(_Bool)0);
            return __result91__;
        }
        else {
            if(_if_conditional95=right==((void*)0),            _if_conditional95) {
                __result92__ = __result_obj__ = optional$2boolbool_initialize((struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2-gc.c", 1024),(_Bool)0,(_Bool)0);
                return __result92__;
            }
        }
    }
    __result93__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 1027),strcmp(self,right)==0,(_Bool)1);
    return __result93__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool __result94__;
_Bool _if_conditional97;
_Bool __result95__;
_Bool _if_conditional98;
_Bool __result96__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional96=self==((void*)0)&&right==((void*)0),    _if_conditional96) {
        __result94__ = (_Bool)1;
        return __result94__;
    }
    else {
        if(_if_conditional97=self==((void*)0),        _if_conditional97) {
            __result95__ = (_Bool)0;
            return __result95__;
        }
        else {
            if(_if_conditional98=right==((void*)0),            _if_conditional98) {
                __result96__ = (_Bool)0;
                return __result96__;
            }
        }
    }
    __result97__ = strcmp(self,right)==0;
    return __result97__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
_Bool __result98__;
_Bool _if_conditional100;
_Bool __result99__;
_Bool _if_conditional101;
_Bool __result100__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional99=self==((void*)0)&&right==((void*)0),    _if_conditional99) {
        __result98__ = (_Bool)1;
        return __result98__;
    }
    else {
        if(_if_conditional100=self==((void*)0),        _if_conditional100) {
            __result99__ = (_Bool)0;
            return __result99__;
        }
        else {
            if(_if_conditional101=right==((void*)0),            _if_conditional101) {
                __result100__ = (_Bool)0;
                return __result100__;
            }
        }
    }
    __result101__ = strcmp(self,right)==0;
    return __result101__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
_Bool __result102__;
_Bool _if_conditional103;
_Bool __result103__;
_Bool _if_conditional104;
_Bool __result104__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional102=self==((void*)0)&&right==((void*)0),    _if_conditional102) {
        __result102__ = (_Bool)0;
        return __result102__;
    }
    else {
        if(_if_conditional103=self==((void*)0),        _if_conditional103) {
            __result103__ = (_Bool)1;
            return __result103__;
        }
        else {
            if(_if_conditional104=right==((void*)0),            _if_conditional104) {
                __result104__ = (_Bool)1;
                return __result104__;
            }
        }
    }
    __result105__ = strcmp(self,right)!=0;
    return __result105__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
_Bool __result106__;
_Bool _if_conditional106;
_Bool __result107__;
_Bool _if_conditional107;
_Bool __result108__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional105=self==((void*)0)&&right==((void*)0),    _if_conditional105) {
        __result106__ = (_Bool)0;
        return __result106__;
    }
    else {
        if(_if_conditional106=self==((void*)0),        _if_conditional106) {
            __result107__ = (_Bool)1;
            return __result107__;
        }
        else {
            if(_if_conditional107=right==((void*)0),            _if_conditional107) {
                __result108__ = (_Bool)1;
                return __result108__;
            }
        }
    }
    __result109__ = strcmp(self,right)!=0;
    return __result109__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
char* __result110__;
int len_80;
char* result_81;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_80, 0, sizeof(int));
memset(&result_81, 0, sizeof(char*));
    if(_if_conditional108=self==((void*)0)||right==((void*)0),    _if_conditional108) {
        __result110__ = __result_obj__ = __builtin_string("");
        return __result110__;
    }
    len_80=strlen(self)+strlen(right);
    result_81=(char*)come_calloc(1, sizeof(char)*(1*(len_80+1)), "libcomelang2-gc.c", 1098);
    strncpy(result_81,self,len_80+1);
    strncat(result_81,right,len_80+1);
    __result111__ = __result_obj__ = result_81;
    return __result111__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
char* __result112__;
int len_82;
char* result_83;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_82, 0, sizeof(int));
memset(&result_83, 0, sizeof(char*));
    if(_if_conditional109=self==((void*)0)||right==((void*)0),    _if_conditional109) {
        __result112__ = __result_obj__ = __builtin_string("");
        return __result112__;
    }
    len_82=strlen(self)+strlen(right);
    result_83=(char*)come_calloc(1, sizeof(char)*(1*(len_82+1)), "libcomelang2-gc.c", 1113);
    strncpy(result_83,self,len_82+1);
    strncat(result_83,right,len_82+1);
    __result113__ = __result_obj__ = result_83;
    return __result113__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
char* __result114__;
struct buffer* buf_84;
int i_85;
_Bool _for_condtionalA6;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_84, 0, sizeof(struct buffer*));
memset(&i_85, 0, sizeof(int));
    if(_if_conditional110=self==((void*)0),    _if_conditional110) {
        __result114__ = __result_obj__ = __builtin_string("");
        return __result114__;
    }
    buf_84=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1126));
    for(
    i_85=0 ,    0;    _for_condtionalA6=    i_85<right ,    _for_condtionalA6;    i_85++ ,    0    ){
        buffer_append_str(buf_84,self);
    }
    __result115__ = __result_obj__ = buffer_to_string(buf_84);
    return __result115__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
char* __result116__;
struct buffer* buf_86;
int i_87;
_Bool _for_condtionalA7;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_86, 0, sizeof(struct buffer*));
memset(&i_87, 0, sizeof(int));
    if(_if_conditional111=self==((void*)0),    _if_conditional111) {
        __result116__ = __result_obj__ = __builtin_string("");
        return __result116__;
    }
    buf_86=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1140));
    for(
    i_87=0 ,    0;    _for_condtionalA7=    i_87<right ,    _for_condtionalA7;    i_87++ ,    0    ){
        buffer_append_str(buf_86,self);
    }
    __result117__ = __result_obj__ = buffer_to_string(buf_86);
    return __result117__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = (int_get_hash_key(((int)value)));
    return __result118__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = value;
    return __result119__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = value;
    return __result120__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = value;
    return __result121__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = value;
    return __result122__;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = value;
    return __result123__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = (unsigned int)value;
    return __result124__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = (unsigned int)value;
    return __result125__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
unsigned int __result126__;
int result_88;
char* p_89;
_Bool _while_condtional6;
unsigned int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_88, 0, sizeof(int));
memset(&p_89, 0, sizeof(char*));
    if(_if_conditional112=value==((void*)0),    _if_conditional112) {
        __result126__ = 0;
        return __result126__;
    }
    result_88=0;
    p_89=value;
    while(_while_condtional6=*p_89,    _while_condtional6) {
        result_88+=(*p_89);
        p_89++;
    }
    __result127__ = result_88;
    return __result127__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
unsigned int __result128__;
int result_90;
char* p_91;
_Bool _while_condtional7;
unsigned int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_90, 0, sizeof(int));
memset(&p_91, 0, sizeof(char*));
    if(_if_conditional113=value==((void*)0),    _if_conditional113) {
        __result128__ = 0;
        return __result128__;
    }
    result_90=0;
    p_91=value;
    while(_while_condtional7=*p_91,    _while_condtional7) {
        result_90+=(*p_91);
        p_91++;
    }
    __result129__ = result_90;
    return __result129__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = self;
    return __result130__;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = self;
    return __result131__;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = self;
    return __result132__;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = self;
    return __result133__;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = self;
    return __result134__;
}

long int size_t_clone(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = self;
    return __result135__;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = self;
    return __result136__;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = self;
    return __result137__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
char* __result138__;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional114=self==((void*)0),    _if_conditional114) {
        __result138__ = __result_obj__ = ((void*)0);
        return __result138__;
    }
    __result139__ = __result_obj__ = __builtin_string(self);
    return __result139__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
char* __result140__;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional115=self==((void*)0),    _if_conditional115) {
        __result140__ = __result_obj__ = ((void*)0);
        return __result140__;
    }
    __result141__ = __result_obj__ = __builtin_string(self);
    return __result141__;
}

_Bool xiswalpha(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_92;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(_Bool));
    result_92=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result142__ = result_92;
    return __result142__;
}

_Bool xiswblank(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = c==32||c==9;
    return __result143__;
}

_Bool xiswdigit(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = (c>=48&&c<=57);
    return __result144__;
}

_Bool xiswalnum(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = xiswalpha(c)||xiswdigit(c);
    return __result145__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_93;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_93, 0, sizeof(_Bool));
    result_93=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result146__ = result_93;
    return __result146__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result147__ = c==32||c==9;
    return __result147__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = (c>=48&&c<=57);
    return __result148__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = xisalpha(c)||xisdigit(c);
    return __result149__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_94;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_94, 0, sizeof(_Bool));
    result_94=(c>=32&&c<=126);
    __result150__ = result_94;
    return __result150__;
}

_Bool xiswascii(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_95;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_95, 0, sizeof(_Bool));
    result_95=(c>=32&&c<=126);
    __result151__ = result_95;
    return __result151__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
int __result152__;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional116=str==((void*)0),    _if_conditional116) {
        __result152__ = 0;
        return __result152__;
    }
    __result153__ = strlen(str);
    return __result153__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
int __result154__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional117=str==((void*)0),    _if_conditional117) {
        __result154__ = 0;
        return __result154__;
    }
    __result155__ = strlen(str);
    return __result155__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
char* __result156__;
int len_96;
char* result_97;
int i_98;
_Bool _for_condtionalA8;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_96, 0, sizeof(int));
memset(&result_97, 0, sizeof(char*));
memset(&i_98, 0, sizeof(int));
    if(_if_conditional118=str==((void*)0),    _if_conditional118) {
        __result156__ = __result_obj__ = __builtin_string("");
        return __result156__;
    }
    len_96=strlen(str);
    result_97=(char*)come_calloc(1, sizeof(char)*(1*(len_96+1)), "libcomelang2-gc.c", 1357);
    for(
    i_98=0 ,    0;    _for_condtionalA8=    i_98<len_96 ,    _for_condtionalA8;    i_98++ ,    0    ){
        result_97[i_98]=str[len_96-i_98-1];
    }
    result_97[len_96]=0;
    __result157__ = __result_obj__ = result_97;
    return __result157__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
char* __result158__;
int len_99;
char* result_100;
int i_101;
_Bool _for_condtionalA9;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_99, 0, sizeof(int));
memset(&result_100, 0, sizeof(char*));
memset(&i_101, 0, sizeof(int));
    if(_if_conditional119=str==((void*)0),    _if_conditional119) {
        __result158__ = __result_obj__ = __builtin_string("");
        return __result158__;
    }
    len_99=strlen(str);
    result_100=(char*)come_calloc(1, sizeof(char)*(1*(len_99+1)), "libcomelang2-gc.c", 1374);
    for(
    i_101=0 ,    0;    _for_condtionalA9=    i_101<len_99 ,    _for_condtionalA9;    i_101++ ,    0    ){
        result_100[i_101]=str[len_99-i_101-1];
    }
    result_100[len_99]=0;
    __result159__ = __result_obj__ = result_100;
    return __result159__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
char* __result160__;
int len_102;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
char* __result161__;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __result162__;
_Bool _if_conditional127;
char* __result163__;
char* result_103;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_102, 0, sizeof(int));
memset(&result_103, 0, sizeof(char*));
    if(_if_conditional120=str==((void*)0),    _if_conditional120) {
        __result160__ = __result_obj__ = __builtin_string("");
        return __result160__;
    }
    len_102=strlen(str);
    if(_if_conditional121=head<0,    _if_conditional121) {
        head+=len_102;
    }
    if(_if_conditional122=tail<0,    _if_conditional122) {
        tail+=len_102+1;
    }
    if(_if_conditional123=head>tail,    _if_conditional123) {
        __result161__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result161__;
    }
    if(_if_conditional124=head<0,    _if_conditional124) {
        head=0;
    }
    if(_if_conditional125=tail>=len_102,    _if_conditional125) {
        tail=len_102;
    }
    if(_if_conditional126=head==tail,    _if_conditional126) {
        __result162__ = __result_obj__ = __builtin_string("");
        return __result162__;
    }
    if(_if_conditional127=tail-head+1<1,    _if_conditional127) {
        __result163__ = __result_obj__ = __builtin_string("");
        return __result163__;
    }
    result_103=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1419);
    memcpy(result_103,str+head,tail-head);
    result_103[tail-head]=0;
    __result164__ = __result_obj__ = result_103;
    return __result164__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
char* __result165__;
int len_104;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
char* __result166__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
char* __result167__;
_Bool _if_conditional135;
char* __result168__;
char* result_105;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_104, 0, sizeof(int));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional128=str==((void*)0),    _if_conditional128) {
        __result165__ = __result_obj__ = __builtin_string("");
        return __result165__;
    }
    len_104=strlen(str);
    if(_if_conditional129=head<0,    _if_conditional129) {
        head+=len_104;
    }
    if(_if_conditional130=tail<0,    _if_conditional130) {
        tail+=len_104+1;
    }
    if(_if_conditional131=head>tail,    _if_conditional131) {
        __result166__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result166__;
    }
    if(_if_conditional132=head<0,    _if_conditional132) {
        head=0;
    }
    if(_if_conditional133=tail>=len_104,    _if_conditional133) {
        tail=len_104;
    }
    if(_if_conditional134=head==tail,    _if_conditional134) {
        __result167__ = __result_obj__ = __builtin_string("");
        return __result167__;
    }
    if(_if_conditional135=tail-head+1<1,    _if_conditional135) {
        __result168__ = __result_obj__ = __builtin_string("");
        return __result168__;
    }
    result_105=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1462);
    memcpy(result_105,str+head,tail-head);
    result_105[tail-head]=0;
    __result169__ = __result_obj__ = result_105;
    return __result169__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
char* __result170__;
int len_106;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
char* __result171__;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
char* __result172__;
_Bool _if_conditional143;
char* __result173__;
char* result_107;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_106, 0, sizeof(int));
memset(&result_107, 0, sizeof(char*));
    if(_if_conditional136=str==((void*)0),    _if_conditional136) {
        __result170__ = __result_obj__ = __builtin_string("");
        return __result170__;
    }
    len_106=strlen(str);
    if(_if_conditional137=head<0,    _if_conditional137) {
        head+=len_106;
    }
    if(_if_conditional138=tail<0,    _if_conditional138) {
        tail+=len_106+1;
    }
    if(_if_conditional139=head>tail,    _if_conditional139) {
        __result171__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result171__;
    }
    if(_if_conditional140=head<0,    _if_conditional140) {
        head=0;
    }
    if(_if_conditional141=tail>=len_106,    _if_conditional141) {
        tail=len_106;
    }
    if(_if_conditional142=head==tail,    _if_conditional142) {
        __result172__ = __result_obj__ = __builtin_string("");
        return __result172__;
    }
    if(_if_conditional143=tail-head+1<1,    _if_conditional143) {
        __result173__ = __result_obj__ = __builtin_string("");
        return __result173__;
    }
    result_107=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1505);
    memcpy(result_107,str+head,tail-head);
    result_107[tail-head]=0;
    __result174__ = __result_obj__ = result_107;
    return __result174__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
char* __result175__;
int len_108;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
char* __result176__;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
char* __result177__;
_Bool _if_conditional151;
char* __result178__;
char* result_109;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_108, 0, sizeof(int));
memset(&result_109, 0, sizeof(char*));
    if(_if_conditional144=str==((void*)0),    _if_conditional144) {
        __result175__ = __result_obj__ = __builtin_string("");
        return __result175__;
    }
    len_108=strlen(str);
    if(_if_conditional145=head<0,    _if_conditional145) {
        head+=len_108;
    }
    if(_if_conditional146=tail<0,    _if_conditional146) {
        tail+=len_108+1;
    }
    if(_if_conditional147=head>tail,    _if_conditional147) {
        __result176__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result176__;
    }
    if(_if_conditional148=head<0,    _if_conditional148) {
        head=0;
    }
    if(_if_conditional149=tail>=len_108,    _if_conditional149) {
        tail=len_108;
    }
    if(_if_conditional150=head==tail,    _if_conditional150) {
        __result177__ = __result_obj__ = __builtin_string("");
        return __result177__;
    }
    if(_if_conditional151=tail-head+1<1,    _if_conditional151) {
        __result178__ = __result_obj__ = __builtin_string("");
        return __result178__;
    }
    result_109=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1548);
    memcpy(result_109,str+head,tail-head);
    result_109[tail-head]=0;
    __result179__ = __result_obj__ = result_109;
    return __result179__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
char* __result180__;
va_list args_110;
char* result_111;
int len_112;
_Bool _if_conditional153;
char* __result181__;
char* result2_113;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_110, 0, sizeof(va_list));
memset(&result_111, 0, sizeof(char*));
memset(&len_112, 0, sizeof(int));
memset(&result2_113, 0, sizeof(char*));
    if(_if_conditional152=msg==((void*)0),    _if_conditional152) {
        __result180__ = __result_obj__ = __builtin_string("");
        return __result180__;
    }
    __builtin_va_start(args_110,msg);
    len_112=vasprintf(&result_111,msg,args_110);
    __builtin_va_end(args_110);
    if(_if_conditional153=len_112<0,    _if_conditional153) {
        __result181__ = __result_obj__ = __builtin_string("");
        return __result181__;
    }
    result2_113=__builtin_string(result_111);
    free(result_111);
    __result182__ = __result_obj__ = result2_113;
    return __result182__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional154;
char* __result183__;
int len_114;
_Bool _if_conditional155;
char* __result184__;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
char* __result185__;
_Bool _if_conditional160;
char* sub_str_115;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_114, 0, sizeof(int));
memset(&sub_str_115, 0, sizeof(char*));
    if(_if_conditional154=str==((void*)0),    _if_conditional154) {
        __result183__ = __result_obj__ = __builtin_string("");
        return __result183__;
    }
    len_114=strlen(str);
    if(_if_conditional155=strcmp(str,"")==0,    _if_conditional155) {
        __result184__ = __result_obj__ = __builtin_string(str);
        return __result184__;
    }
    if(_if_conditional156=head<0,    _if_conditional156) {
        head+=len_114;
    }
    if(_if_conditional157=tail<0,    _if_conditional157) {
        tail+=len_114+1;
    }
    if(_if_conditional158=head<0,    _if_conditional158) {
        head=0;
    }
    if(_if_conditional159=tail<0,    _if_conditional159) {
        __result185__ = __result_obj__ = __builtin_string(str);
        return __result185__;
    }
    if(_if_conditional160=tail>=len_114,    _if_conditional160) {
        tail=len_114;
    }
    sub_str_115=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_115,string_length(sub_str_115)+1);
    __result186__ = __result_obj__ = __builtin_string(str);
    return __result186__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
char* __result187__;
int len_116;
_Bool _if_conditional162;
char* __result188__;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
char* __result189__;
_Bool _if_conditional167;
char* sub_str_117;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_116, 0, sizeof(int));
memset(&sub_str_117, 0, sizeof(char*));
    if(_if_conditional161=str==((void*)0),    _if_conditional161) {
        __result187__ = __result_obj__ = __builtin_string("");
        return __result187__;
    }
    len_116=strlen(str);
    if(_if_conditional162=strcmp(str,"")==0,    _if_conditional162) {
        __result188__ = __result_obj__ = __builtin_string(str);
        return __result188__;
    }
    if(_if_conditional163=head<0,    _if_conditional163) {
        head+=len_116;
    }
    if(_if_conditional164=tail<0,    _if_conditional164) {
        tail+=len_116+1;
    }
    if(_if_conditional165=head<0,    _if_conditional165) {
        head=0;
    }
    if(_if_conditional166=tail<0,    _if_conditional166) {
        __result189__ = __result_obj__ = __builtin_string(str);
        return __result189__;
    }
    if(_if_conditional167=tail>=len_116,    _if_conditional167) {
        tail=len_116;
    }
    sub_str_117=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_117,string_length(sub_str_117)+1);
    __result190__ = __result_obj__ = __builtin_string(str);
    return __result190__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
struct list$1charph* __result192__;
struct list$1charph* result_118;
struct buffer* str_119;
int i_120;
_Bool _for_condtionalA10;
_Bool _if_conditional169;
_Bool _if_conditional172;
struct list$1charph* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_118, 0, sizeof(struct list$1charph*));
memset(&str_119, 0, sizeof(struct buffer*));
memset(&i_120, 0, sizeof(int));
    if(_if_conditional168=self==((void*)0),    _if_conditional168) {
        __result192__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1659));
        return __result192__;
    }
    result_118=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1662));
    str_119=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1664));
    for(
    i_120=0 ,    0;    _for_condtionalA10=    i_120<charp_length(self) ,    _for_condtionalA10;    i_120++ ,    0    ){
        if(_if_conditional169=self[i_120]==c,        _if_conditional169) {
            list$1charph_push_back(result_118,__builtin_string(str_119->buf));
            buffer_reset(str_119);
        }
        else {
            buffer_append_char(str_119,self[i_120]);
        }
    }
    if(_if_conditional172=buffer_length(str_119)!=0,    _if_conditional172) {
        list$1charph_push_back(result_118,__builtin_string(str_119->buf));
    }
    __result194__ = __result_obj__ = result_118;
    return __result194__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result191__ = __result_obj__ = self;
            return __result191__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
struct list_item$1charph* litem_121;
_Bool _if_conditional171;
struct list_item$1charph* litem_122;
struct list_item$1charph* litem_123;
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_121, 0, sizeof(struct list_item$1charph*));
memset(&litem_122, 0, sizeof(struct list_item$1charph*));
memset(&litem_123, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional170=self->len==0,                _if_conditional170) {
                    litem_121=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 279);
                    litem_121->prev=((void*)0);
                    litem_121->next=((void*)0);
                    litem_121->item=item;
                    self->tail=litem_121;
                    self->head=litem_121;
                }
                else {
                    if(_if_conditional171=self->len==1,                    _if_conditional171) {
                        litem_122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 289);
                        litem_122->prev=self->head;
                        litem_122->next=((void*)0);
                        litem_122->item=item;
                        self->tail=litem_122;
                        self->head->next=litem_122;
                    }
                    else {
                        litem_123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 299);
                        litem_123->prev=self->tail;
                        litem_123->next=((void*)0);
                        litem_123->item=item;
                        self->tail->next=litem_123;
                        self->tail=litem_123;
                    }
                }
                self->len++;
                __result193__ = __result_obj__ = self;
                return __result193__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
struct list$1charph* __result195__;
struct list$1charph* result_124;
struct buffer* str_125;
int i_126;
_Bool _for_condtionalA11;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct list$1charph* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(struct list$1charph*));
memset(&str_125, 0, sizeof(struct buffer*));
memset(&i_126, 0, sizeof(int));
    if(_if_conditional173=self==((void*)0),    _if_conditional173) {
        __result195__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1685));
        return __result195__;
    }
    result_124=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1688));
    str_125=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1690));
    for(
    i_126=0 ,    0;    _for_condtionalA11=    i_126<charp_length(self) ,    _for_condtionalA11;    i_126++ ,    0    ){
        if(_if_conditional174=self[i_126]==c,        _if_conditional174) {
            list$1charph_push_back(result_124,__builtin_string(str_125->buf));
            buffer_reset(str_125);
        }
        else {
            buffer_append_char(str_125,self[i_126]);
        }
    }
    if(_if_conditional175=buffer_length(str_125)!=0,    _if_conditional175) {
        list$1charph_push_back(result_124,__builtin_string(str_125->buf));
    }
    __result196__ = __result_obj__ = result_124;
    return __result196__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
char* __result197__;
char* p_127;
_Bool _while_condtional8;
_Bool _if_conditional177;
_Bool _if_conditional178;
char* __result198__;
char* __result199__;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_127, 0, sizeof(char*));
    if(_if_conditional176=path==((void*)0),    _if_conditional176) {
        __result197__ = __result_obj__ = __builtin_string("");
        return __result197__;
    }
    p_127=path+strlen(path);
    while(_while_condtional8=p_127>=path,    _while_condtional8) {
        if(_if_conditional177=*p_127==47,        _if_conditional177) {
            break;
        }
        else {
            p_127--;
        }
    }
    if(_if_conditional178=p_127<path,    _if_conditional178) {
        __result198__ = __result_obj__ = __builtin_string(path);
        return __result198__;
    }
    else {
        __result199__ = __result_obj__ = __builtin_string(p_127+1);
        return __result199__;
    }
    __result200__ = __result_obj__ = __builtin_string("");
    return __result200__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
char* __result201__;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional179=path==((void*)0),    _if_conditional179) {
        __result201__ = __result_obj__ = __builtin_string("");
        return __result201__;
    }
    __result202__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result202__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
char* __result203__;
char* path2_128;
char* p_129;
_Bool _while_condtional9;
_Bool _if_conditional181;
_Bool _if_conditional182;
char* __result204__;
char* __result205__;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&path2_128, 0, sizeof(char*));
memset(&p_129, 0, sizeof(char*));
    if(_if_conditional180=path==((void*)0),    _if_conditional180) {
        __result203__ = __result_obj__ = __builtin_string("");
        return __result203__;
    }
    path2_128=xbasename(path);
    p_129=path2_128+strlen(path2_128);
    while(_while_condtional9=p_129>=path2_128,    _while_condtional9) {
        if(_if_conditional181=*p_129==46,        _if_conditional181) {
            break;
        }
        else {
            p_129--;
        }
    }
    if(_if_conditional182=p_129<path2_128,    _if_conditional182) {
        __result204__ = __result_obj__ = __builtin_string(path2_128);
        return __result204__;
    }
    else {
        __result205__ = __result_obj__ = string_substring(path2_128,0,p_129-path2_128);
        return __result205__;
    }
    __result206__ = __result_obj__ = __builtin_string("");
    return __result206__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
char* __result207__;
char* p_130;
_Bool _while_condtional10;
_Bool _if_conditional184;
_Bool _if_conditional185;
char* __result208__;
char* __result209__;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_130, 0, sizeof(char*));
    if(_if_conditional183=path==((void*)0),    _if_conditional183) {
        __result207__ = __result_obj__ = __builtin_string("");
        return __result207__;
    }
    p_130=path+strlen(path);
    while(_while_condtional10=p_130>=path,    _while_condtional10) {
        if(_if_conditional184=*p_130==46,        _if_conditional184) {
            break;
        }
        else {
            p_130--;
        }
    }
    if(_if_conditional185=p_130<path,    _if_conditional185) {
        __result208__ = __result_obj__ = __builtin_string(path);
        return __result208__;
    }
    else {
        __result209__ = __result_obj__ = __builtin_string(p_130+1);
        return __result209__;
    }
    __result210__ = __result_obj__ = __builtin_string("");
    return __result210__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
char* __result211__;
char* result_131;
char* result2_132;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_131, 0, sizeof(char*));
memset(&result2_132, 0, sizeof(char*));
    if(_if_conditional186=path==((void*)0),    _if_conditional186) {
        __result211__ = __result_obj__ = __builtin_string("");
        return __result211__;
    }
    result_131=realpath(path,((void*)0));
    result2_132=__builtin_string(result_131);
    free(result_131);
    __result212__ = __result_obj__ = result2_132;
    return __result212__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
char* __result213__;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional187=self,    _if_conditional187) {
        __result213__ = __result_obj__ = __builtin_string("true");
        return __result213__;
    }
    else {
        __result214__ = __result_obj__ = __builtin_string("false");
        return __result214__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result215__ = __result_obj__ = xsprintf("%c",self);
    return __result215__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result216__ = __result_obj__ = xsprintf("%d",self);
    return __result216__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result217__ = __result_obj__ = xsprintf("%d",self);
    return __result217__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result218__ = __result_obj__ = xsprintf("%ld",self);
    return __result218__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result219__ = __result_obj__ = xsprintf("%ld",self);
    return __result219__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result220__ = __result_obj__ = xsprintf("%f",self);
    return __result220__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result221__ = __result_obj__ = xsprintf("%lf",self);
    return __result221__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
char* __result222__;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional188=self==((void*)0),    _if_conditional188) {
        __result222__ = __result_obj__ = __builtin_string("");
        return __result222__;
    }
    __result223__ = __result_obj__ = __builtin_string(self);
    return __result223__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
char* __result224__;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional189=self==((void*)0),    _if_conditional189) {
        __result224__ = __result_obj__ = __builtin_string("");
        return __result224__;
    }
    __result225__ = __result_obj__ = __builtin_string(self);
    return __result225__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
int __result226__;
_Bool _if_conditional191;
int __result227__;
_Bool _if_conditional192;
int __result228__;
int __result229__;
int __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional190=!left&&right,    _if_conditional190) {
        __result226__ = -1;
        return __result226__;
    }
    else {
        if(_if_conditional191=left&&right,        _if_conditional191) {
            __result227__ = 0;
            return __result227__;
        }
        else {
            if(_if_conditional192=!left&&!right,            _if_conditional192) {
                __result228__ = 0;
                return __result228__;
            }
            else {
                __result229__ = 1;
                return __result229__;
            }
        }
    }
    __result230__ = 0;
    return __result230__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
int __result231__;
_Bool _if_conditional194;
int __result232__;
int __result233__;
int __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional193=left<right,    _if_conditional193) {
        __result231__ = -1;
        return __result231__;
    }
    else {
        if(_if_conditional194=left>right,        _if_conditional194) {
            __result232__ = 1;
            return __result232__;
        }
        else {
            __result233__ = 0;
            return __result233__;
        }
    }
    __result234__ = 0;
    return __result234__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
int __result235__;
_Bool _if_conditional196;
int __result236__;
int __result237__;
int __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional195=left<right,    _if_conditional195) {
        __result235__ = -1;
        return __result235__;
    }
    else {
        if(_if_conditional196=left>right,        _if_conditional196) {
            __result236__ = 1;
            return __result236__;
        }
        else {
            __result237__ = 0;
            return __result237__;
        }
    }
    __result238__ = 0;
    return __result238__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
int __result239__;
_Bool _if_conditional198;
int __result240__;
int __result241__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional197=left<right,    _if_conditional197) {
        __result239__ = -1;
        return __result239__;
    }
    else {
        if(_if_conditional198=left>right,        _if_conditional198) {
            __result240__ = 1;
            return __result240__;
        }
        else {
            __result241__ = 0;
            return __result241__;
        }
    }
    __result242__ = 0;
    return __result242__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
int __result243__;
_Bool _if_conditional200;
int __result244__;
int __result245__;
int __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional199=left<right,    _if_conditional199) {
        __result243__ = -1;
        return __result243__;
    }
    else {
        if(_if_conditional200=left>right,        _if_conditional200) {
            __result244__ = 1;
            return __result244__;
        }
        else {
            __result245__ = 0;
            return __result245__;
        }
    }
    __result246__ = 0;
    return __result246__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
int __result247__;
_Bool _if_conditional202;
int __result248__;
int __result249__;
int __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional201=left<right,    _if_conditional201) {
        __result247__ = -1;
        return __result247__;
    }
    else {
        if(_if_conditional202=left>right,        _if_conditional202) {
            __result248__ = 1;
            return __result248__;
        }
        else {
            __result249__ = 0;
            return __result249__;
        }
    }
    __result250__ = 0;
    return __result250__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
int __result251__;
_Bool _if_conditional204;
int __result252__;
int __result253__;
int __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional203=left<right,    _if_conditional203) {
        __result251__ = -1;
        return __result251__;
    }
    else {
        if(_if_conditional204=left>right,        _if_conditional204) {
            __result252__ = 1;
            return __result252__;
        }
        else {
            __result253__ = 0;
            return __result253__;
        }
    }
    __result254__ = 0;
    return __result254__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
int __result255__;
_Bool _if_conditional206;
int __result256__;
int __result257__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional205=left<right,    _if_conditional205) {
        __result255__ = -1;
        return __result255__;
    }
    else {
        if(_if_conditional206=left>right,        _if_conditional206) {
            __result256__ = 1;
            return __result256__;
        }
        else {
            __result257__ = 0;
            return __result257__;
        }
    }
    __result258__ = 0;
    return __result258__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
int __result259__;
_Bool _if_conditional208;
int __result260__;
_Bool _if_conditional209;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional207=left==((void*)0)&&right==((void*)0),    _if_conditional207) {
        __result259__ = 0;
        return __result259__;
    }
    else {
        if(_if_conditional208=left==((void*)0),        _if_conditional208) {
            __result260__ = -1;
            return __result260__;
        }
        else {
            if(_if_conditional209=right==((void*)0),            _if_conditional209) {
                __result261__ = 1;
                return __result261__;
            }
        }
    }
    __result262__ = strcmp(left,right);
    return __result262__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
int __result263__;
_Bool _if_conditional211;
int __result264__;
_Bool _if_conditional212;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional210=left==((void*)0)&&right==((void*)0),    _if_conditional210) {
        __result263__ = 0;
        return __result263__;
    }
    else {
        if(_if_conditional211=left==((void*)0),        _if_conditional211) {
            __result264__ = -1;
            return __result264__;
        }
        else {
            if(_if_conditional212=right==((void*)0),            _if_conditional212) {
                __result265__ = 1;
                return __result265__;
            }
        }
    }
    __result266__ = strcmp(left,right);
    return __result266__;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
struct optional$2charphbool* __result268__;
struct buffer* buf_133;
_Bool _while_condtional11;
int size_135;
_Bool _if_conditional214;
struct optional$2charphbool* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_133, 0, sizeof(struct buffer*));
memset(&size_135, 0, sizeof(int));
    if(_if_conditional213=f==((void*)0),    _if_conditional213) {
        __result268__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2039),__builtin_string(""),(_Bool)0);
        return __result268__;
    }
    buf_133=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2041));
    while(_while_condtional11=1,    _while_condtional11) {
        char buf2_134[8192];
        memset(&buf2_134, 0, sizeof(char)        *(8192)        );
        size_135=fread(buf2_134,1,8192,f);
        buffer_append(buf_133,buf2_134,size_135);
        if(_if_conditional214=size_135<8192,        _if_conditional214) {
            break;
        }
    }
    __result269__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2055),buffer_to_string(buf_133),(_Bool)1);
    return __result269__;
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2charphbool* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result267__ = __result_obj__ = self;
            return __result267__;
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
struct optional$2intbool* __result270__;
struct optional$2intbool* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional215=f==((void*)0)||str==((void*)0),    _if_conditional215) {
        __result270__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2061),-1,(_Bool)0);
        return __result270__;
    }
    __result271__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2064),fwrite(str,strlen(str),1,f),(_Bool)1);
    return __result271__;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
struct optional$2intbool* __result272__;
int result_136;
_Bool _if_conditional217;
struct optional$2intbool* __result273__;
struct optional$2intbool* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_136, 0, sizeof(int));
    if(_if_conditional216=f==((void*)0),    _if_conditional216) {
        __result272__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2070),-1,(_Bool)0);
        return __result272__;
    }
    result_136=fclose(f);
    if(_if_conditional217=result_136<0,    _if_conditional217) {
        __result273__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2076),result_136,(_Bool)0);
        return __result273__;
    }
    __result274__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2079),result_136,(_Bool)1);
    return __result274__;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
struct optional$2_IO_FILEpbool* __result276__;
va_list args_138;
int result_139;
_Bool _if_conditional219;
struct optional$2_IO_FILEpbool* __result277__;
struct optional$2_IO_FILEpbool* __result278__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_138, 0, sizeof(va_list));
memset(&result_139, 0, sizeof(int));
    if(_if_conditional218=f==((void*)0)||msg==((void*)0),    _if_conditional218) {
        __result276__ = __result_obj__ = optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2-gc.c", 2085),f,(_Bool)0);
        return __result276__;
    }
    char msg2_137[1024*2*2*2];
    memset(&msg2_137, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_138,msg);
    vsnprintf(msg2_137,1024*2*2*2,msg,args_138);
    __builtin_va_end(args_138);
    result_139=fprintf(f,"%s",msg2_137);
    if(_if_conditional219=result_139<0,    _if_conditional219) {
        __result277__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2097),result_139,(_Bool)0);
        return __result277__;
    }
    __result278__ = __result_obj__ = optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2-gc.c", 2100),f,(_Bool)1);
    return __result278__;
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result275__ = __result_obj__ = self;
            return __result275__;
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
struct optional$2intbool* __result279__;
struct _IO_FILE* f_140;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct optional$2intbool* __result280__;
int result_141;
_Bool _if_conditional223;
struct optional$2intbool* __result281__;
int result2_142;
_Bool _if_conditional224;
struct optional$2intbool* __result282__;
struct optional$2intbool* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_140, 0, sizeof(struct _IO_FILE*));
memset(&result_141, 0, sizeof(int));
memset(&result2_142, 0, sizeof(int));
    if(_if_conditional220=self==((void*)0)||file_name==((void*)0),    _if_conditional220) {
        __result279__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2106),-1,(_Bool)0);
        return __result279__;
    }
    if(_if_conditional221=append,    _if_conditional221) {
        f_140=fopen(file_name,"a");
    }
    else {
        f_140=fopen(file_name,"w");
    }
    if(_if_conditional222=f_140==((void*)0),    _if_conditional222) {
        __result280__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2118),-1,(_Bool)0);
        return __result280__;
    }
    result_141=fwrite(self,strlen(self),1,f_140);
    if(_if_conditional223=result_141<0,    _if_conditional223) {
        __result281__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2124),result_141,(_Bool)0);
        return __result281__;
    }
    result2_142=fclose(f_140);
    if(_if_conditional224=result2_142<0,    _if_conditional224) {
        __result282__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2130),result2_142,(_Bool)0);
        return __result282__;
    }
    __result283__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2133),result_141,(_Bool)1);
    return __result283__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
struct optional$2intbool* __result284__;
struct _IO_FILE* f_143;
_Bool _if_conditional226;
_Bool _if_conditional227;
struct optional$2intbool* __result285__;
int result_144;
_Bool _if_conditional228;
struct optional$2intbool* __result286__;
int result2_145;
_Bool _if_conditional229;
struct optional$2intbool* __result287__;
struct optional$2intbool* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_143, 0, sizeof(struct _IO_FILE*));
memset(&result_144, 0, sizeof(int));
memset(&result2_145, 0, sizeof(int));
    if(_if_conditional225=self==((void*)0)||file_name==((void*)0),    _if_conditional225) {
        __result284__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2139),-1,(_Bool)0);
        return __result284__;
    }
    if(_if_conditional226=append,    _if_conditional226) {
        f_143=fopen(file_name,"a");
    }
    else {
        f_143=fopen(file_name,"w");
    }
    if(_if_conditional227=f_143==((void*)0),    _if_conditional227) {
        __result285__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2151),-1,(_Bool)0);
        return __result285__;
    }
    result_144=fwrite(self,strlen(self),1,f_143);
    if(_if_conditional228=result_144<0,    _if_conditional228) {
        __result286__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2157),result_144,(_Bool)0);
        return __result286__;
    }
    result2_145=fclose(f_143);
    if(_if_conditional229=result2_145<0,    _if_conditional229) {
        __result287__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2163),result2_145,(_Bool)0);
        return __result287__;
    }
    __result288__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2166),result_144,(_Bool)1);
    return __result288__;
}

struct optional$2charphbool* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
struct optional$2charphbool* __result289__;
struct _IO_FILE* f_146;
_Bool _if_conditional231;
struct optional$2charphbool* __result290__;
struct buffer* buf_147;
_Bool _while_condtional12;
int size_149;
_Bool _if_conditional232;
char* result_150;
int result2_151;
_Bool _if_conditional233;
struct optional$2charphbool* __result291__;
struct optional$2charphbool* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_146, 0, sizeof(struct _IO_FILE*));
memset(&buf_147, 0, sizeof(struct buffer*));
memset(&size_149, 0, sizeof(int));
memset(&result_150, 0, sizeof(char*));
memset(&result2_151, 0, sizeof(int));
    if(_if_conditional230=file_name==((void*)0),    _if_conditional230) {
        __result289__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2172),__builtin_string(""),(_Bool)0);
        return __result289__;
    }
    f_146=fopen(file_name,"r");
    if(_if_conditional231=f_146==((void*)0),    _if_conditional231) {
        __result290__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2178),__builtin_string(""),(_Bool)0);
        return __result290__;
    }
    buf_147=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2181));
    while(_while_condtional12=1,    _while_condtional12) {
        char buf2_148[8192];
        memset(&buf2_148, 0, sizeof(char)        *(8192)        );
        size_149=fread(buf2_148,1,8192,f_146);
        buffer_append(buf_147,buf2_148,size_149);
        if(_if_conditional232=size_149<8192,        _if_conditional232) {
            break;
        }
    }
    result_150=buffer_to_string(buf_147);
    result2_151=fclose(f_146);
    if(_if_conditional233=result2_151<0,    _if_conditional233) {
        __result291__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2200),__builtin_string(""),(_Bool)0);
        return __result291__;
    }
    __result292__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2203),result_150,(_Bool)1);
    return __result292__;
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct optional$2charphbool* __result293__;
struct _IO_FILE* f_152;
_Bool _if_conditional235;
struct optional$2charphbool* __result294__;
struct buffer* buf_153;
_Bool _while_condtional13;
int size_155;
_Bool _if_conditional236;
char* result_156;
int result2_157;
_Bool _if_conditional237;
struct optional$2charphbool* __result295__;
struct optional$2charphbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_152, 0, sizeof(struct _IO_FILE*));
memset(&buf_153, 0, sizeof(struct buffer*));
memset(&size_155, 0, sizeof(int));
memset(&result_156, 0, sizeof(char*));
memset(&result2_157, 0, sizeof(int));
    if(_if_conditional234=file_name==((void*)0),    _if_conditional234) {
        __result293__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2209),__builtin_string(""),(_Bool)0);
        return __result293__;
    }
    f_152=fopen(file_name,"r");
    if(_if_conditional235=f_152==((void*)0),    _if_conditional235) {
        __result294__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2215),__builtin_string(""),(_Bool)0);
        return __result294__;
    }
    buf_153=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2218));
    while(_while_condtional13=1,    _while_condtional13) {
        char buf2_154[8192];
        memset(&buf2_154, 0, sizeof(char)        *(8192)        );
        size_155=fread(buf2_154,1,8192,f_152);
        buffer_append(buf_153,buf2_154,size_155);
        if(_if_conditional236=size_155<8192,        _if_conditional236) {
            break;
        }
    }
    result_156=buffer_to_string(buf_153);
    result2_157=fclose(f_152);
    if(_if_conditional237=result2_157<0,    _if_conditional237) {
        __result295__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2237),__builtin_string(""),(_Bool)0);
        return __result295__;
    }
    __result296__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2240),result_156,(_Bool)1);
    return __result296__;
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* result_158;
_Bool _if_conditional238;
struct optional$2list$1charphphbool* __result298__;
_Bool _while_condtional14;
_Bool _if_conditional239;
struct optional$2list$1charphphbool* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_158, 0, sizeof(struct list$1charph*));
    result_158=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 2245));
    if(_if_conditional238=f==((void*)0),    _if_conditional238) {
        __result298__ = __result_obj__ = optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2-gc.c", 2248),result_158,(_Bool)0);
        return __result298__;
    }
    while(_while_condtional14=1,    _while_condtional14) {
        char buf_159[8192];
        memset(&buf_159, 0, sizeof(char)        *(8192)        );
        if(_if_conditional239=fgets(buf_159,8192,f)==((void*)0),        _if_conditional239) {
            break;
        }
        list$1charph_push_back(result_158,__builtin_string(buf_159));
    }
    __result299__ = __result_obj__ = optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2-gc.c", 2261),result_158,(_Bool)1);
    return __result299__;
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2list$1charphphbool* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result297__ = __result_obj__ = self;
            return __result297__;
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
struct optional$2intbool* __result300__;
struct _IO_FILE* f_160;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct optional$2intbool* __result301__;
struct optional$2intbool* __result302__;
struct optional$2intbool* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_160, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional240=path==((void*)0)||mode==((void*)0),    _if_conditional240) {
        __result300__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2267),-1,(_Bool)0);
        return __result300__;
    }
    f_160=fopen(path,mode);
    if(_if_conditional241=f_160,    _if_conditional241) {
        block(parent,f_160);
        if(_if_conditional242=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional242) {
            fclose(f_160);
            __result301__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2275),0,(_Bool)1);
            return __result301__;
        }
        fclose(f_160);
        __result302__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2280),0,(_Bool)1);
        return __result302__;
    }
    __result303__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2283),-1,(_Bool)0);
    return __result303__;
}

struct optional$2charphbool* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
struct optional$2charphbool* __result304__;
struct optional$2charphbool* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional243=self==((void*)0),    _if_conditional243) {
        __result304__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2292),-1,(_Bool)0);
        return __result304__;
    }
    puts(self);
    __result305__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2296),__builtin_string(self),(_Bool)1);
    return __result305__;
}

struct optional$2charphbool* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional244;
struct optional$2charphbool* __result306__;
struct optional$2charphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional244=self==((void*)0),    _if_conditional244) {
        __result306__ = __result_obj__ = optional$2intbool_initialize((struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2-gc.c", 2302),-1,(_Bool)0);
        return __result306__;
    }
    printf("%s",self);
    __result307__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2306),__builtin_string(self),(_Bool)1);
    return __result307__;
}

struct optional$2charphbool* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional245;
struct optional$2charphbool* __result308__;
char* msg2_161;
va_list args_162;
struct optional$2charphbool* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_161, 0, sizeof(char*));
memset(&args_162, 0, sizeof(va_list));
    if(_if_conditional245=self==((void*)0),    _if_conditional245) {
        __result308__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2313),__builtin_string(""),(_Bool)0);
        return __result308__;
    }
    __builtin_va_start(args_162,self);
    vasprintf(&msg2_161,self,args_162);
    __builtin_va_end(args_162);
    printf("%s",msg2_161);
    free(msg2_161);
    __result309__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2326),__builtin_string(self),(_Bool)1);
    return __result309__;
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
struct optional$2charphbool* __result310__;
char* msg2_163;
va_list args_164;
struct optional$2charphbool* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_163, 0, sizeof(char*));
memset(&args_164, 0, sizeof(va_list));
    if(_if_conditional246=self==((void*)0),    _if_conditional246) {
        __result310__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2332),__builtin_string(""),(_Bool)0);
        return __result310__;
    }
    __builtin_va_start(args_164,self);
    vasprintf(&msg2_163,self,args_164);
    __builtin_va_end(args_164);
    printf("%s",msg2_163);
    free(msg2_163);
    __result311__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2345),__builtin_string(self),(_Bool)1);
    return __result311__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __result312__ = self;
    return __result312__;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional247;
struct optional$2charphbool* __result313__;
struct optional$2charphbool* __result314__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional247=self==((void*)0),    _if_conditional247) {
        __result313__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2358),__builtin_string(""),(_Bool)0);
        return __result313__;
    }
    puts(self);
    __result314__ = __result_obj__ = optional$2charphbool_initialize((struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2-gc.c", 2362),__builtin_string(self),(_Bool)1);
    return __result314__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_165;
_Bool _for_condtionalA12;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_165, 0, sizeof(int));
    for(
    i_165=0 ,    0;    _for_condtionalA12=    i_165<self ,    _for_condtionalA12;    i_165++ ,    0    ){
        block(parent,i_165);
        if(_if_conditional248=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional248) {
            return;
        }
    }
}

