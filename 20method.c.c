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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sMethodCallNode
{
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
    int method_block_sline;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2CVALUEpbool
{
    struct CVALUE* v1;
    _Bool v2;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

char* sCurrentNode_kind();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
struct sCurrentNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __result13__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result13__;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = self->sline;
    return __result14__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((char*)(right_value11=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11;
    __freed_obj__ = 0;
    return __result15__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = (_Bool)0;
    return __result16__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((char*)(right_value12=__builtin_string("sCurrentNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    return __result17__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* class_name_5;
void* right_value14;
void* right_value15;
struct sClass* current_stack_6;
void* right_value16;
void* right_value17;
void* right_value18;
void* right_value19;
void* right_value60;
struct tuple2$2charphsTypeph* result_kind_35;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
void* right_value71;
void* right_value72;
struct tuple2$2charphsTypeph* return_value_40;
void* right_value73;
struct sVarTable* vtable_41;
_Bool _while_condtional8;
struct map$2charphsVarph* o2_saved_42;
char* it_45;
_Bool _for_condtionalA1;
char* key_48;
struct sVar* value_53;
void* right_value77;
struct sType* type2_54;
void* right_value78;
void* right_value79;
void* right_value80;
struct tuple2$2charphsTypeph* item_55;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value81;
struct sType* type3_56;
void* right_value82;
void* right_value83;
void* right_value84;
struct tuple2$2charphsTypeph* item2_59;
void* right_value85;
void* right_value86;
static int num_current_stack_108=0;
_Bool _while_condtional20;
struct map$2charphsVarph* o2_saved_109;
char* it_110;
_Bool _for_condtionalA6;
char* key_111;
struct sVar* value_112;
void* right_value97;
struct sType* type2_113;
void* right_value98;
void* right_value99;
struct tuple2$2charphsTypeph* item_114;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value100;
struct CVALUE* come_value_115;
void* right_value101;
char* __dec_obj38;
void* right_value102;
void* right_value103;
struct sType* __dec_obj39;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&class_name_5, 0, sizeof(char*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&current_stack_6, 0, sizeof(struct sClass*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_kind_35, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&return_value_40, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value73, 0, sizeof(void*));
memset(&vtable_41, 0, sizeof(struct sVarTable*));
memset(&o2_saved_42, 0, sizeof(struct map$2charphsVarph*));
memset(&it_45, 0, sizeof(char*));
memset(&key_48, 0, sizeof(char*));
memset(&value_53, 0, sizeof(struct sVar*));
memset(&right_value77, 0, sizeof(void*));
memset(&type2_54, 0, sizeof(struct sType*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&item_55, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value81, 0, sizeof(void*));
memset(&type3_56, 0, sizeof(struct sType*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&item2_59, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&o2_saved_109, 0, sizeof(struct map$2charphsVarph*));
memset(&it_110, 0, sizeof(char*));
memset(&key_111, 0, sizeof(char*));
memset(&value_112, 0, sizeof(struct sVar*));
memset(&right_value97, 0, sizeof(void*));
memset(&type2_113, 0, sizeof(struct sType*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&item_114, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value100, 0, sizeof(void*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
    info->current_stack_num++;
    class_name_5=(char*)come_increment_ref_count(((char*)(right_value13=xsprintf("__current_stack%d__",info->current_stack_num))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    current_stack_6=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value15=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value14=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40)))),class_name_5,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value15;
    __freed_obj__ = 0;
    result_kind_35=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value60=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value19=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42)))),(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42)))),"int",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value16;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value17;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value19;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value60;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value67=tuple2$2charphsTypephp_clone(result_kind_35)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value67;
    __freed_obj__ = 0;
    return_value_40=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value72=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value71=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45)))),(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value69=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45)))),"void*",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value68;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value69;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value71;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value72;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value73=tuple2$2charphsTypephp_clone(return_value_40)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value73;
    __freed_obj__ = 0;
    vtable_41=info->lv_table;
    while(_while_condtional8=vtable_41,    _while_condtional8) {
        for(
        o2_saved_42=(struct map$2charphsVarph*)come_increment_ref_count((vtable_41->mVars)),it_45=map$2charphsVarph_begin((o2_saved_42)) ,        0;        _for_condtionalA1=        !map$2charphsVarph_end((o2_saved_42)) ,        _for_condtionalA1;        it_45=map$2charphsVarph_next((o2_saved_42)) ,        0        ){
            key_48=it_45;
            value_53=map$2charphsVarphp_operator_load_element(vtable_41->mVars,key_48);
            type2_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(value_53->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
            type2_54->mPointerNum++;
            item_55=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value80=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value79=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59)))),(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(value_53->mCValueName)))),(struct sType*)come_increment_ref_count(type2_54)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value78;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value79;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value80;
            __freed_obj__ = 0;
            if(_if_conditional118=value_53->mCValueName!=((void*)0),            _if_conditional118) {
                if(_if_conditional119=strcmp(value_53->mCValueName,"__list_values")==0,                _if_conditional119) {
                }
                else {
                    if(_if_conditional120=strcmp(value_53->mCValueName,"__map_keys")==0,                    _if_conditional120) {
                    }
                    else {
                        if(_if_conditional121=strcmp(value_53->mCValueName,"__map_element")==0,                        _if_conditional121) {
                        }
                        else {
                            if(_if_conditional122=string_operator_equals(value_53->mType->mClass->mName,"va_list")||string_operator_equals(value_53->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional122) {
                            }
                            else {
                                if(_if_conditional123=list$1sNodeph_length(type2_54->mArrayNum)==1,                                _if_conditional123) {
                                    type3_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(type2_54))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value81;
                                    __freed_obj__ = 0;
                                    list$1sNodeph_reset(type3_56->mArrayNum);
                                    type3_56->mPointerNum++;
                                    item2_59=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value84=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value83=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78)))),(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(value_53->mCValueName)))),(struct sType*)come_increment_ref_count(type3_56)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
                                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value82;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value83);
                                    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value83;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value84);
                                    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value84;
                                    __freed_obj__ = 0;
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value85=tuple2$2charphsTypephp_clone(item2_59)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value85);
                                    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value85;
                                    __freed_obj__ = 0;
                                    if(type3_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(item2_59 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value86=tuple2$2charphsTypephp_clone(item_55)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                                    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value86;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                    }
                }
            }
            if(type2_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_54, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_55 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_55, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_42 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_42, (void*)0, (void*)0, 0, 0, 0, 0); }
        vtable_41=vtable_41->mParent;
    }
    output_struct(current_stack_6,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_5),(struct sClass*)come_increment_ref_count(current_stack_6));
    num_current_stack_108++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_5,num_current_stack_108);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_108,class_name_5);
    vtable_41=info->lv_table;
    while(_while_condtional20=vtable_41,    _while_condtional20) {
        for(
        o2_saved_109=(struct map$2charphsVarph*)come_increment_ref_count((vtable_41->mVars)),it_110=map$2charphsVarph_begin((o2_saved_109)) ,        0;        _for_condtionalA6=        !map$2charphsVarph_end((o2_saved_109)) ,        _for_condtionalA6;        it_110=map$2charphsVarph_next((o2_saved_109)) ,        0        ){
            key_111=it_110;
            value_112=map$2charphsVarphp_operator_load_element(vtable_41->mVars,key_111);
            type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(value_112->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value97;
            __freed_obj__ = 0;
            item_114=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108)))),(char*)come_increment_ref_count(value_112->mCValueName),(struct sType*)come_increment_ref_count(type2_113)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value98;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value99);
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value99;
            __freed_obj__ = 0;
            if(_if_conditional179=value_112->mCValueName!=((void*)0),            _if_conditional179) {
                if(_if_conditional180=strcmp(value_112->mCValueName,"__list_values")==0,                _if_conditional180) {
                }
                else {
                    if(_if_conditional181=strcmp(value_112->mCValueName,"__map_keys")==0,                    _if_conditional181) {
                    }
                    else {
                        if(_if_conditional182=strcmp(value_112->mCValueName,"__map_element")==0,                        _if_conditional182) {
                        }
                        else {
                            if(_if_conditional183=string_operator_equals(value_112->mType->mClass->mName,"va_list")||string_operator_equals(value_112->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional183) {
                            }
                            else {
                                if(_if_conditional184=string_operator_equals(type2_113->mClass->mName,"lambda"),                                _if_conditional184) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_108,value_112->mCValueName,value_112->mCValueName);
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_108,value_112->mCValueName,value_112->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            if(type2_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_113, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_114 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_109 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        vtable_41=vtable_41->mParent;
    }
    come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value100;
    __freed_obj__ = 0;
    __dec_obj38=come_value_115->c_value;
    come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("&__current_stack%d__",num_current_stack_108))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value101;
    __freed_obj__ = 0;
    __dec_obj39=come_value_115->type;
    come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140)))),class_name_5,(_Bool)0,info))));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value102;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value103;
    __freed_obj__ = 0;
    come_value_115->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_115->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
    info->num_current_stack=num_current_stack_108;
    __result85__ = (_Bool)1;
    if(class_name_5 && !__freed_obj__) { class_name_5 = come_decrement_ref_count(class_name_5, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_6 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_35 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_40 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result85__;
    if(class_name_5 && !__freed_obj__) { class_name_5 = come_decrement_ref_count(class_name_5, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_6 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_35 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_40 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional6=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional6) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional7=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional7) {
            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional27=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional27) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_7;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional8) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional9) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional10) {
                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional11) {
                                            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional13) {
                                            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional14) {
                                            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional15) {
                                            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional17=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional17) {
                                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional19=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional19) {
                                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional20=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional20) {
                                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional22=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional22) {
                                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional23=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional23) {
                                            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional24=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional24) {
                                            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional25=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional25) {
                                            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional26=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional26) {
                                            if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional12) {
                                                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_9;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sTypeph*));
                                                it_9=self->head;
                                                while(_while_condtional2=it_9!=((void*)0),                                                _while_condtional2) {
                                                    prev_it_10=it_9;
                                                    it_9=it_9->next;
                                                    if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional16) {
                                                            if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_11;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                                                it_11=self->head;
                                                while(_while_condtional3=it_11!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_12=it_11;
                                                    it_11=it_11->next;
                                                    if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional18) {
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_13;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                                                it_13=self->head;
                                                while(_while_condtional4=it_13!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_14=it_13;
                                                    it_13=it_13->next;
                                                    if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional21) {
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value20;
char* __dec_obj7;
void* right_value59;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
        __dec_obj7=self->v1;
        self->v1=(char*)come_increment_ref_count(((char*)(right_value20=charp_clone(v1))));
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        __dec_obj32=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(v2))));
        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value59;
        __freed_obj__ = 0;
        __result40__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result40__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
struct sType* __result18__;
void* right_value21;
struct sType* result_15;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional34;
void* right_value27;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional37;
void* right_value28;
char* __dec_obj12;
_Bool _if_conditional38;
void* right_value35;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional42;
void* right_value43;
struct list$1sNodeph* __dec_obj20;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value44;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional57;
void* right_value51;
struct list$1charph* __dec_obj25;
_Bool _if_conditional61;
void* right_value54;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value55;
struct sNode* __dec_obj28;
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
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value56;
struct sNode* __dec_obj29;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value57;
char* __dec_obj30;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value58;
char* __dec_obj31;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct sType*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
            if(_if_conditional28=self==(void*)0,            _if_conditional28) {
                __result18__ = __result_obj__ = (void*)0;
                return __result18__;
            }
            result_15=(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
            if(_if_conditional29=self!=((void*)0),            _if_conditional29) {
                result_15->mClass=self->mClass;
            }
            if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional30) {
                __dec_obj9=result_15->mNoSolvedGenericsType;
                result_15->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value24;
                __freed_obj__ = 0;
            }
            if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional34) {
                __dec_obj11=result_15->mOriginalLoadVarType;
                result_15->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj11) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = 0;
            }
            if(_if_conditional37=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional37) {
                __dec_obj12=result_15->mGenericsName;
                result_15->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value28=string_clone(self->mGenericsName))));
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = 0;
            }
            if(_if_conditional38=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional38) {
                __dec_obj16=result_15->mGenericsTypes;
                result_15->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypeph_clone(self->mGenericsTypes))));
                if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value35;
                __freed_obj__ = 0;
            }
            if(_if_conditional42=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional42) {
                __dec_obj20=result_15->mArrayNum;
                result_15->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value43=list$1sNodeph_clone(self->mArrayNum))));
                if(__dec_obj20) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43;
                __freed_obj__ = 0;
            }
            if(_if_conditional55=self!=((void*)0),            _if_conditional55) {
                result_15->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional56=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional56) {
                __dec_obj21=result_15->mParamTypes;
                result_15->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=list$1sTypeph_clone(self->mParamTypes))));
                if(__dec_obj21) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            if(_if_conditional57=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional57) {
                __dec_obj25=result_15->mParamNames;
                result_15->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value51=list$1charph_clone(self->mParamNames))));
                if(__dec_obj25) { come_call_finalizer(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value51;
                __freed_obj__ = 0;
            }
            if(_if_conditional61=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional61) {
                __dec_obj27=result_15->mResultType;
                result_15->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_15->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional65=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional65) {
                __dec_obj28=result_15->mAlignas;
                result_15->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->mAlignas))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_15->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_15->mShort=self->mShort;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_15->mLong=self->mLong;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_15->mLongLong=self->mLongLong;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_15->mConstant=self->mConstant;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_15->mRegister=self->mRegister;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_15->mVolatile=self->mVolatile;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_15->mStatic=self->mStatic;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_15->mExtern=self->mExtern;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_15->mRestrict=self->mRestrict;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_15->mImmutable=self->mImmutable;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_15->mHeap=self->mHeap;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_15->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_15->mDelegate=self->mDelegate;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_15->mShare=self->mShare;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_15->mClone=self->mClone;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_15->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_15->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_15->mRefference=self->mRefference;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_15->mException=self->mException;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_15->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_15->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_15->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional89=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional89) {
                __dec_obj29=result_15->mSizeNum;
                result_15->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(self->mSizeNum))));
                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_15->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_15->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional92=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional92) {
                __dec_obj30=result_15->mOriginalTypeName;
                result_15->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mOriginalTypeName))));
                if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_15->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_15->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_15->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_15->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_15->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_15->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_15->mInline=self->mInline;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_15->mNullValue=self->mNullValue;
            }
            if(_if_conditional101=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional101) {
                __dec_obj31=result_15->mAsmName;
                result_15->mAsmName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mAsmName))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
            }
            __result39__ = __result_obj__ = result_15;
            if(result_15 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result39__;
            if(result_15 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional32) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
struct list$1sTypeph* __result23__;
void* right_value29;
void* right_value30;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional5;
void* right_value34;
struct list$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value34, 0, sizeof(void*));
                    if(_if_conditional39=self==((void*)0),                    _if_conditional39) {
                        __result23__ = __result_obj__ = ((void*)0);
                        return __result23__;
                    }
                    result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value30;
                    __freed_obj__ = 0;
                    it_19=self->head;
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(it_19->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value34;
                        __freed_obj__ = 0;
                        it_19=it_19->next;
                    }
                    __result26__ = __result_obj__ = result_18;
                    if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result26__;
                    if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result24__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result24__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
void* right_value31;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj13;
_Bool _if_conditional41;
void* right_value32;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj14;
void* right_value33;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj15;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional40=self->len==0,                            _if_conditional40) {
                                litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                litem_20->prev=((void*)0);
                                litem_20->next=((void*)0);
                                __dec_obj13=litem_20->item;
                                litem_20->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_20;
                                self->head=litem_20;
                            }
                            else {
                                if(_if_conditional41=self->len==1,                                _if_conditional41) {
                                    litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value32;
                                    __freed_obj__ = 0;
                                    litem_21->prev=self->head;
                                    litem_21->next=((void*)0);
                                    __dec_obj14=litem_21->item;
                                    litem_21->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_21;
                                    self->head->next=litem_21;
                                }
                                else {
                                    litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value33;
                                    __freed_obj__ = 0;
                                    litem_22->prev=self->tail;
                                    litem_22->next=((void*)0);
                                    __dec_obj15=litem_22->item;
                                    litem_22->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_22;
                                    self->tail=litem_22;
                                }
                            }
                            self->len++;
                            __result25__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result25__;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
struct list$1sNodeph* __result27__;
void* right_value36;
void* right_value37;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional6;
void* right_value42;
struct list$1sNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value42, 0, sizeof(void*));
                    if(_if_conditional43=self==((void*)0),                    _if_conditional43) {
                        __result27__ = __result_obj__ = ((void*)0);
                        return __result27__;
                    }
                    result_23=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value37=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value36;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value37;
                    __freed_obj__ = 0;
                    it_24=self->head;
                    while(_while_condtional6=it_24!=((void*)0),                    _while_condtional6) {
                        list$1sNodeph_add(result_23,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(it_24->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value42;
                        __freed_obj__ = 0;
                        it_24=it_24->next;
                    }
                    __result32__ = __result_obj__ = result_23;
                    if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result32__;
                    if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result28__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result28__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
void* right_value38;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj17;
_Bool _if_conditional45;
void* right_value39;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj18;
void* right_value40;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj19;
struct list$1sNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional44=self->len==0,                            _if_conditional44) {
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value38;
                                __freed_obj__ = 0;
                                litem_25->prev=((void*)0);
                                litem_25->next=((void*)0);
                                __dec_obj17=litem_25->item;
                                litem_25->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                self->tail=litem_25;
                                self->head=litem_25;
                            }
                            else {
                                if(_if_conditional45=self->len==1,                                _if_conditional45) {
                                    litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39;
                                    __freed_obj__ = 0;
                                    litem_26->prev=self->head;
                                    litem_26->next=((void*)0);
                                    __dec_obj18=litem_26->item;
                                    litem_26->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_26;
                                    self->head->next=litem_26;
                                }
                                else {
                                    litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value40;
                                    __freed_obj__ = 0;
                                    litem_27->prev=self->tail;
                                    litem_27->next=((void*)0);
                                    __dec_obj19=litem_27->item;
                                    litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                                    self->tail->next=litem_27;
                                    self->tail=litem_27;
                                }
                            }
                            self->len++;
                            __result29__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result29__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct sNode* __result30__;
void* right_value41;
struct sNode* result_28;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&result_28, 0, sizeof(struct sNode*));
                            if(_if_conditional46=self==(void*)0,                            _if_conditional46) {
                                __result30__ = __result_obj__ = (void*)0;
                                return __result30__;
                            }
                            result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value41;
                            __freed_obj__ = 0;
                            if(_if_conditional47=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional47) {
                                result_28->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional48=self!=((void*)0),                            _if_conditional48) {
                                result_28->finalize=self->finalize;
                            }
                            if(_if_conditional49=self!=((void*)0),                            _if_conditional49) {
                                result_28->clone=self->clone;
                            }
                            if(_if_conditional50=self!=((void*)0),                            _if_conditional50) {
                                result_28->compile=self->compile;
                            }
                            if(_if_conditional51=self!=((void*)0),                            _if_conditional51) {
                                result_28->sline=self->sline;
                            }
                            if(_if_conditional52=self!=((void*)0),                            _if_conditional52) {
                                result_28->sname=self->sname;
                            }
                            if(_if_conditional53=self!=((void*)0),                            _if_conditional53) {
                                result_28->terminated=self->terminated;
                            }
                            if(_if_conditional54=self!=((void*)0),                            _if_conditional54) {
                                result_28->kind=self->kind;
                            }
                            __result31__ = __result_obj__ = result_28;
                            if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 1, 0); } 
                            return __result31__;
                            if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct list$1charph* __result33__;
void* right_value45;
void* right_value46;
struct list$1charph* result_29;
struct list_item$1charph* it_30;
_Bool _while_condtional7;
void* right_value50;
struct list$1charph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct list$1charph*));
memset(&it_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
                    if(_if_conditional58=self==((void*)0),                    _if_conditional58) {
                        __result33__ = __result_obj__ = ((void*)0);
                        return __result33__;
                    }
                    result_29=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value45;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value46;
                    __freed_obj__ = 0;
                    it_30=self->head;
                    while(_while_condtional7=it_30!=((void*)0),                    _while_condtional7) {
                        list$1charph_add(result_29,(char*)come_increment_ref_count(((char*)(right_value50=string_clone(it_30->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = 0;
                        it_30=it_30->next;
                    }
                    __result36__ = __result_obj__ = result_29;
                    if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result36__;
                    if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result34__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result34__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
void* right_value47;
struct list_item$1charph* litem_31;
char* __dec_obj22;
_Bool _if_conditional60;
void* right_value48;
struct list_item$1charph* litem_32;
char* __dec_obj23;
void* right_value49;
struct list_item$1charph* litem_33;
char* __dec_obj24;
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional59=self->len==0,                            _if_conditional59) {
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value47;
                                __freed_obj__ = 0;
                                litem_31->prev=((void*)0);
                                litem_31->next=((void*)0);
                                __dec_obj22=litem_31->item;
                                litem_31->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_31;
                                self->head=litem_31;
                            }
                            else {
                                if(_if_conditional60=self->len==1,                                _if_conditional60) {
                                    litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value48;
                                    __freed_obj__ = 0;
                                    litem_32->prev=self->head;
                                    litem_32->next=((void*)0);
                                    __dec_obj23=litem_32->item;
                                    litem_32->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_32;
                                    self->head->next=litem_32;
                                }
                                else {
                                    litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value49;
                                    __freed_obj__ = 0;
                                    litem_33->prev=self->tail;
                                    litem_33->next=((void*)0);
                                    __dec_obj24=litem_33->item;
                                    litem_33->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                                    self->tail->next=litem_33;
                                    self->tail=litem_33;
                                }
                            }
                            self->len++;
                            __result35__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            return __result35__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
struct tuple1$1sTypeph* __result37__;
void* right_value52;
struct tuple1$1sTypeph* result_34;
_Bool _if_conditional63;
void* right_value53;
struct sType* __dec_obj26;
struct tuple1$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value53, 0, sizeof(void*));
                    if(_if_conditional62=self==(void*)0,                    _if_conditional62) {
                        __result37__ = __result_obj__ = (void*)0;
                        return __result37__;
                    }
                    result_34=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    if(_if_conditional63=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional63) {
                        __dec_obj26=result_34->v1;
                        result_34->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                    }
                    __result38__ = __result_obj__ = result_34;
                    if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result38__;
                    if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
void* right_value61;
struct list_item$1tuple2$2charphsTypephph* litem_36;
struct tuple2$2charphsTypeph* __dec_obj33;
_Bool _if_conditional105;
void* right_value62;
struct list_item$1tuple2$2charphsTypephph* litem_37;
struct tuple2$2charphsTypeph* __dec_obj34;
void* right_value63;
struct list_item$1tuple2$2charphsTypephph* litem_38;
struct tuple2$2charphsTypeph* __dec_obj35;
struct list$1tuple2$2charphsTypephph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional102=self->len==0,        _if_conditional102) {
            litem_36=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value61=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value61;
            __freed_obj__ = 0;
            litem_36->prev=((void*)0);
            litem_36->next=((void*)0);
            __dec_obj33=litem_36->item;
            litem_36->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            if(__dec_obj33) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_36;
            self->head=litem_36;
        }
        else {
            if(_if_conditional105=self->len==1,            _if_conditional105) {
                litem_37=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value62=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                litem_37->prev=self->head;
                litem_37->next=((void*)0);
                __dec_obj34=litem_37->item;
                litem_37->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj34) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_37;
                self->head->next=litem_37;
            }
            else {
                litem_38=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value63=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                litem_38->prev=self->tail;
                litem_38->next=((void*)0);
                __dec_obj35=litem_38->item;
                litem_38->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj35) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_38;
                self->tail=litem_38;
            }
        }
        self->len++;
        __result41__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result41__;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional103=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional103) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional104=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional104) {
                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
struct tuple2$2charphsTypeph* __result42__;
void* right_value64;
struct tuple2$2charphsTypeph* result_39;
_Bool _if_conditional107;
void* right_value65;
char* __dec_obj36;
_Bool _if_conditional108;
void* right_value66;
struct sType* __dec_obj37;
struct tuple2$2charphsTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
        if(_if_conditional106=self==(void*)0,        _if_conditional106) {
            __result42__ = __result_obj__ = (void*)0;
            return __result42__;
        }
        result_39=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value64=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64;
        __freed_obj__ = 0;
        if(_if_conditional107=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional107) {
            __dec_obj36=result_39->v1;
            result_39->v1=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->v1))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        if(_if_conditional108=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional108) {
            __dec_obj37=result_39->v2;
            result_39->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(self->v2))));
            if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        __result43__ = __result_obj__ = result_39;
        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result43__;
        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
char* result_43;
char* __result44__;
_Bool _if_conditional110;
char* __result45__;
char* result_44;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_43, 0, sizeof(char*));
memset(&result_44, 0, sizeof(char*));
            if(_if_conditional109=self==((void*)0),            _if_conditional109) {
                memset(&result_43,0,sizeof(char*));
                __result44__ = __result_obj__ = result_43;
                return __result44__;
            }
            self->key_list->it=self->key_list->head;
            if(_if_conditional110=self->key_list->it,            _if_conditional110) {
                __result45__ = __result_obj__ = self->key_list->it->item;
                return __result45__;
            }
            memset(&result_44,0,sizeof(char*));
            __result46__ = __result_obj__ = result_44;
            return __result46__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result47__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result47__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
char* result_46;
char* __result48__;
_Bool _if_conditional112;
char* __result49__;
char* result_47;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(char*));
            if(_if_conditional111=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional111) {
                memset(&result_46,0,sizeof(char*));
                __result48__ = __result_obj__ = result_46;
                return __result48__;
            }
            self->key_list->it=self->key_list->it->next;
            if(_if_conditional112=self->key_list->it,            _if_conditional112) {
                __result49__ = __result_obj__ = self->key_list->it->item;
                return __result49__;
            }
            memset(&result_47,0,sizeof(char*));
            __result50__ = __result_obj__ = result_47;
            return __result50__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_49;
unsigned int hash_50;
unsigned int it_51;
_Bool _while_condtional9;
_Bool _if_conditional113;
void* right_value74;
_Bool _if_conditional115;
struct sVar* __result53__;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sVar* __result54__;
struct sVar* __result55__;
void* right_value75;
void* right_value76;
struct sVar* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_49, 0, sizeof(struct sVar*));
memset(&hash_50, 0, sizeof(unsigned int));
memset(&it_51, 0, sizeof(unsigned int));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
                memset(&default_value_49,0,sizeof(struct sVar*));
                hash_50=string_get_hash_key(((char*)key))%self->size;
                it_51=hash_50;
                while(_while_condtional9=(_Bool)1,                _while_condtional9) {
                    if(_if_conditional113=self->item_existance[it_51],                    _if_conditional113) {
                        if(_if_conditional115=optional$2boolbool_value(((struct optional$2boolbool*)(right_value74=string_equals(self->keys[it_51],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74),
                        (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value74, 
                        __freed_obj__ = 0, 
                        _if_conditional115) {
                            __result53__ = __result_obj__ = self->items[it_51];
                            return __result53__;
                        }
                        it_51++;
                        if(_if_conditional116=it_51>=self->size,                        _if_conditional116) {
                            it_51=0;
                        }
                        else {
                            if(_if_conditional117=it_51==hash_50,                            _if_conditional117) {
                                __result54__ = __result_obj__ = default_value_49;
                                return __result54__;
                            }
                        }
                    }
                    else {
                        __result55__ = __result_obj__ = default_value_49;
                        return __result55__;
                    }
                }
                __result57__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value76=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value75=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1619))),default_value_49,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value75;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
                if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value76;
                __freed_obj__ = 0;
                return __result57__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
_Bool default_value_52;
_Bool __result51__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_52, 0, sizeof(_Bool));
                            if(_if_conditional114=self==((void*)0),                            _if_conditional114) {
                                memset(&default_value_52,0,sizeof(_Bool));
                                __result51__ = default_value_52;
                                return __result51__;
                            }
                            else {
                                __result52__ = self->v1;
                                return __result52__;
                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result56__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result56__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
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
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result58__ = self->len;
                                    return __result58__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_57;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_58;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_57, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_58, 0, sizeof(struct list_item$1sNodeph*));
                                        it_57=self->head;
                                        while(_while_condtional10=it_57!=((void*)0),                                        _while_condtional10) {
                                            prev_it_58=it_57;
                                            it_57=it_57->next;
                                            if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
                                        __result59__ = __result_obj__ = self;
                                        return __result59__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_60;
_Bool _for_condtionalA2;
_Bool _if_conditional124;
_Bool _if_conditional125;
int i_61;
_Bool _for_condtionalA3;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_60, 0, sizeof(int));
memset(&i_61, 0, sizeof(int));
            for(
            i_60=0 ,            0;            _for_condtionalA2=            i_60<self->size ,            _for_condtionalA2;            i_60++ ,            0            ){
                if(_if_conditional124=self->item_existance[i_60],                _if_conditional124) {
                    if(_if_conditional125=1,                    _if_conditional125) {
                        if(self->items[i_60] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_60], (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_61=0 ,            0;            _for_condtionalA3=            i_61<self->size ,            _for_condtionalA3;            i_61++ ,            0            ){
                if(_if_conditional130=self->item_existance[i_61],                _if_conditional130) {
                    if(_if_conditional131=1,                    _if_conditional131) {
                        if(self->keys[i_61] && !__freed_obj__) { self->keys[i_61] = come_decrement_ref_count(self->keys[i_61], (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            come_free_object((char*)self->keys);
            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional126=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional126) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional127=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional127) {
                                if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional128=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional128) {
                                if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional129=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional129) {
                                if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_62;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_62, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
                it_62=self->head;
                while(_while_condtional11=it_62!=((void*)0),                _while_condtional11) {
                    prev_it_63=it_62;
                    it_62=it_62->next;
                    if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
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
_Bool _if_conditional132;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional14;
_Bool _if_conditional144;
void* right_value91;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool same_key_exist_99;
char* it2_102;
_Bool _for_condtionalA5;
void* right_value93;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct map$2charphsClassph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
memset(&right_value91, 0, sizeof(void*));
memset(&same_key_exist_99, 0, sizeof(_Bool));
memset(&it2_102, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
        if(_if_conditional132=self->len*10>=self->size,        _if_conditional132) {
            map$2charphsClassph_rehash(self);
        }
        hash_81=string_get_hash_key(key)%self->size;
        it_82=hash_81;
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            if(_if_conditional144=self->item_existance[it_82],            _if_conditional144) {
                if(_if_conditional145=optional$2boolbool_value(((struct optional$2boolbool*)(right_value91=string_equals(self->keys[it_82],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91),
                (right_value91 && right_value91 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value91, 
                __freed_obj__ = 0, 
                _if_conditional145) {
                    if(_if_conditional146=1,                    _if_conditional146) {
                        list$1charp_remove(self->key_list,self->keys[it_82]);
                        if(self->keys[it_82] && !__freed_obj__) { self->keys[it_82] = come_decrement_ref_count(self->keys[it_82], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_82]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_82]);
                        self->keys[it_82]=key;
                    }
                    if(_if_conditional166=1,                    _if_conditional166) {
                        if(self->items[it_82] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_82], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_82]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_82]=item;
                    }
                    break;
                }
                it_82++;
                if(_if_conditional167=it_82>=self->size,                _if_conditional167) {
                    it_82=0;
                }
                else {
                    if(_if_conditional168=it_82==hash_81,                    _if_conditional168) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_82]=(_Bool)1;
                if(_if_conditional169=1,                _if_conditional169) {
                    self->keys[it_82]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_82]=key;
                }
                if(_if_conditional170=1,                _if_conditional170) {
                    self->items[it_82]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_82]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_99=(_Bool)0;
        for(
        it2_102=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA5=        !list$1charp_end(self->key_list) ,        _for_condtionalA5;        it2_102=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional175=optional$2boolbool_value(((struct optional$2boolbool*)(right_value93=string_equals(it2_102,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93),
            (right_value93 && right_value93 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value93, 
            __freed_obj__ = 0, 
            _if_conditional175) {
                same_key_exist_99=(_Bool)1;
            }
        }
        if(_if_conditional176=!same_key_exist_99,        _if_conditional176) {
            list$1charp_push_back(self->key_list,key);
        }
        __result83__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result83__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_64;
void* right_value87;
char** keys_65;
void* right_value88;
struct sClass** items_66;
void* right_value89;
_Bool* item_existance_67;
int len_68;
char* it_71;
_Bool _for_condtionalA4;
struct sClass* default_value_74;
struct sClass* it2_77;
unsigned int hash_78;
int n_79;
_Bool _while_condtional13;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct sClass* default_value_80;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_64, 0, sizeof(int));
memset(&right_value87, 0, sizeof(void*));
memset(&keys_65, 0, sizeof(char**));
memset(&right_value88, 0, sizeof(void*));
memset(&items_66, 0, sizeof(struct sClass**));
memset(&right_value89, 0, sizeof(void*));
memset(&item_existance_67, 0, sizeof(_Bool*));
memset(&len_68, 0, sizeof(int));
memset(&it_71, 0, sizeof(char*));
memset(&default_value_74, 0, sizeof(struct sClass*));
memset(&it2_77, 0, sizeof(struct sClass*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&n_79, 0, sizeof(int));
memset(&default_value_80, 0, sizeof(struct sClass*));
                size_64=self->size*10;
                keys_65=(char**)come_increment_ref_count(((char**)(right_value87=(char**)come_calloc(1, sizeof(char*)*(1*(size_64)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                items_66=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value88=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_64)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
                item_existance_67=(_Bool*)come_increment_ref_count(((_Bool*)(right_value89=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_64)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value89;
                __freed_obj__ = 0;
                len_68=0;
                for(
                it_71=map$2charphsClassph_begin(self) ,                0;                _for_condtionalA4=                !map$2charphsClassph_end(self) ,                _for_condtionalA4;                it_71=map$2charphsClassph_next(self) ,                0                ){
                    memset(&default_value_74,0,sizeof(struct sClass*));
                    it2_77=map$2charphsClassph_at(self,it_71,default_value_74);
                    hash_78=string_get_hash_key(it_71)%size_64;
                    n_79=hash_78;
                    while(_while_condtional13=(_Bool)1,                    _while_condtional13) {
                        if(_if_conditional141=item_existance_67[n_79],                        _if_conditional141) {
                            n_79++;
                            if(_if_conditional142=n_79>=size_64,                            _if_conditional142) {
                                n_79=0;
                            }
                            else {
                                if(_if_conditional143=n_79==hash_78,                                _if_conditional143) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_67[n_79]=(_Bool)1;
                            keys_65[n_79]=it_71;
                            items_66[n_79]=map$2charphsClassph_at(self,it_71,default_value_80);
                            len_68++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_65;
                self->items=items_66;
                self->item_existance=item_existance_67;
                self->size=size_64;
                self->len=len_68;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
char* result_69;
char* __result60__;
_Bool _if_conditional134;
char* __result61__;
char* result_70;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(_if_conditional133=self==((void*)0),                    _if_conditional133) {
                        memset(&result_69,0,sizeof(char*));
                        __result60__ = __result_obj__ = result_69;
                        return __result60__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional134=self->key_list->it,                    _if_conditional134) {
                        __result61__ = __result_obj__ = self->key_list->it->item;
                        return __result61__;
                    }
                    memset(&result_70,0,sizeof(char*));
                    __result62__ = __result_obj__ = result_70;
                    return __result62__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result63__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result63__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
char* result_72;
char* __result64__;
_Bool _if_conditional136;
char* __result65__;
char* result_73;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    if(_if_conditional135=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional135) {
                        memset(&result_72,0,sizeof(char*));
                        __result64__ = __result_obj__ = result_72;
                        return __result64__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional136=self->key_list->it,                    _if_conditional136) {
                        __result65__ = __result_obj__ = self->key_list->it->item;
                        return __result65__;
                    }
                    memset(&result_73,0,sizeof(char*));
                    __result66__ = __result_obj__ = result_73;
                    return __result66__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional137;
void* right_value90;
_Bool _if_conditional138;
struct sClass* __result67__;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* __result68__;
struct sClass* __result69__;
struct sClass* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
memset(&right_value90, 0, sizeof(void*));
                        hash_75=string_get_hash_key(((char*)key))%self->size;
                        it_76=hash_75;
                        while(_while_condtional12=(_Bool)1,                        _while_condtional12) {
                            if(_if_conditional137=self->item_existance[it_76],                            _if_conditional137) {
                                if(_if_conditional138=optional$2boolbool_value(((struct optional$2boolbool*)(right_value90=string_equals(self->keys[it_76],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90),
                                (right_value90 && right_value90 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value90, 
                                __freed_obj__ = 0, 
                                _if_conditional138) {
                                    __result67__ = __result_obj__ = self->items[it_76];
                                    return __result67__;
                                }
                                it_76++;
                                if(_if_conditional139=it_76>=self->size,                                _if_conditional139) {
                                    it_76=0;
                                }
                                else {
                                    if(_if_conditional140=it_76==hash_75,                                    _if_conditional140) {
                                        __result68__ = __result_obj__ = default_value;
                                        return __result68__;
                                    }
                                }
                            }
                            else {
                                __result69__ = __result_obj__ = default_value;
                                return __result69__;
                            }
                        }
                        __result70__ = __result_obj__ = default_value;
                        return __result70__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_83;
struct list_item$1charp* it_84;
_Bool _while_condtional15;
void* right_value92;
_Bool _if_conditional147;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_83, 0, sizeof(int));
memset(&it_84, 0, sizeof(struct list_item$1charp*));
memset(&right_value92, 0, sizeof(void*));
                            it2_83=0;
                            it_84=self->head;
                            while(_while_condtional15=it_84!=((void*)0),                            _while_condtional15) {
                                if(_if_conditional147=optional$2boolbool_value(((struct optional$2boolbool*)(right_value92=string_equals(it_84->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92),
                                (right_value92 && right_value92 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value92, 
                                __freed_obj__ = 0, 
                                _if_conditional147) {
                                    list$1charp_delete(self,it2_83,it2_83+1);
                                    break;
                                }
                                it2_83++;
                                it_84=it_84->next;
                            }
                            __result74__ = __result_obj__ = self;
                            return __result74__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
int tmp_85;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list$1charp* __result71__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional17;
_Bool _if_conditional156;
struct list_item$1charp* prev_it_90;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct list_item$1charp* it_91;
int i_92;
_Bool _while_condtional18;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_93;
struct list_item$1charp* it_94;
struct list_item$1charp* head_prev_it_95;
struct list_item$1charp* tail_it_96;
int i_97;
_Bool _while_condtional19;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list$1charp* __result73__;
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
                                        if(_if_conditional148=head<0,                                        _if_conditional148) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional149=tail<0,                                        _if_conditional149) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional150=head>tail,                                        _if_conditional150) {
                                            tmp_85=tail;
                                            tail=head;
                                            head=tmp_85;
                                        }
                                        if(_if_conditional151=head<0,                                        _if_conditional151) {
                                            head=0;
                                        }
                                        if(_if_conditional152=tail>self->len,                                        _if_conditional152) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional153=head==tail,                                        _if_conditional153) {
                                            __result71__ = __result_obj__ = self;
                                            return __result71__;
                                        }
                                        if(_if_conditional154=head==0&&tail==self->len,                                        _if_conditional154) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional155=head==0,                                            _if_conditional155) {
                                                it_88=self->head;
                                                i_89=0;
                                                while(_while_condtional17=it_88!=((void*)0),                                                _while_condtional17) {
                                                    if(_if_conditional156=i_89<tail,                                                    _if_conditional156) {
                                                        prev_it_90=it_88;
                                                        it_88=it_88->next;
                                                        i_89++;
                                                        if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional157=i_89==tail,                                                        _if_conditional157) {
                                                            self->head=it_88;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_88=it_88->next;
                                                            i_89++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional158=tail==self->len,                                                _if_conditional158) {
                                                    it_91=self->head;
                                                    i_92=0;
                                                    while(_while_condtional18=it_91!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional159=i_92==head,                                                        _if_conditional159) {
                                                            self->tail=it_91->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional160=i_92>=head,                                                        _if_conditional160) {
                                                            prev_it_93=it_91;
                                                            it_91=it_91->next;
                                                            i_92++;
                                                            if(prev_it_93 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_91=it_91->next;
                                                            i_92++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_94=self->head;
                                                    head_prev_it_95=((void*)0);
                                                    tail_it_96=((void*)0);
                                                    i_97=0;
                                                    while(_while_condtional19=it_94!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional161=i_97==head,                                                        _if_conditional161) {
                                                            head_prev_it_95=it_94->prev;
                                                        }
                                                        if(_if_conditional162=i_97==tail,                                                        _if_conditional162) {
                                                            tail_it_96=it_94;
                                                        }
                                                        if(_if_conditional163=i_97>=head&&i_97<tail,                                                        _if_conditional163) {
                                                            prev_it_98=it_94;
                                                            it_94=it_94->next;
                                                            i_97++;
                                                            if(prev_it_98 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_94=it_94->next;
                                                            i_97++;
                                                        }
                                                    }
                                                    if(_if_conditional164=head_prev_it_95!=((void*)0),                                                    _if_conditional164) {
                                                        head_prev_it_95->next=tail_it_96;
                                                    }
                                                    if(_if_conditional165=tail_it_96!=((void*)0),                                                    _if_conditional165) {
                                                        tail_it_96->prev=head_prev_it_95;
                                                    }
                                                }
                                            }
                                        }
                                        __result73__ = __result_obj__ = self;
                                        return __result73__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_86;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_87;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_86, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
                                                it_86=self->head;
                                                while(_while_condtional16=it_86!=((void*)0),                                                _while_condtional16) {
                                                    prev_it_87=it_86;
                                                    it_86=it_86->next;
                                                    if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result72__ = __result_obj__ = self;
                                                return __result72__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
char* result_100;
char* __result75__;
_Bool _if_conditional172;
char* __result76__;
char* result_101;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                memset(&result_100,0,sizeof(char*));
                __result75__ = __result_obj__ = result_100;
                return __result75__;
            }
            self->it=self->head;
            if(_if_conditional172=self->it,            _if_conditional172) {
                __result76__ = __result_obj__ = self->it->item;
                return __result76__;
            }
            memset(&result_101,0,sizeof(char*));
            __result77__ = __result_obj__ = result_101;
            return __result77__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result78__ = self==((void*)0)||self->it==((void*)0);
            return __result78__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
char* result_103;
char* __result79__;
_Bool _if_conditional174;
char* __result80__;
char* result_104;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                memset(&result_103,0,sizeof(char*));
                __result79__ = __result_obj__ = result_103;
                return __result79__;
            }
            self->it=self->it->next;
            if(_if_conditional174=self->it,            _if_conditional174) {
                __result80__ = __result_obj__ = self->it->item;
                return __result80__;
            }
            memset(&result_104,0,sizeof(char*));
            __result81__ = __result_obj__ = result_104;
            return __result81__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
void* right_value94;
struct list_item$1charp* litem_105;
_Bool _if_conditional178;
void* right_value95;
struct list_item$1charp* litem_106;
void* right_value96;
struct list_item$1charp* litem_107;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1charp*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1charp*));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional177=self->len==0,                _if_conditional177) {
                    litem_105=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value94=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value94;
                    __freed_obj__ = 0;
                    litem_105->prev=((void*)0);
                    litem_105->next=((void*)0);
                    litem_105->item=item;
                    self->tail=litem_105;
                    self->head=litem_105;
                }
                else {
                    if(_if_conditional178=self->len==1,                    _if_conditional178) {
                        litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value95;
                        __freed_obj__ = 0;
                        litem_106->prev=self->head;
                        litem_106->next=((void*)0);
                        litem_106->item=item;
                        self->tail=litem_106;
                        self->head->next=litem_106;
                    }
                    else {
                        litem_107=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
                        __freed_obj__ = 0;
                        litem_107->prev=self->tail;
                        litem_107->next=((void*)0);
                        litem_107->item=item;
                        self->tail->next=litem_107;
                        self->tail=litem_107;
                    }
                }
                self->len++;
                __result82__ = __result_obj__ = self;
                return __result82__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional185=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional185) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional186=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional186) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value104;
struct list_item$1CVALUEph* litem_116;
struct CVALUE* __dec_obj40;
_Bool _if_conditional189;
void* right_value105;
struct list_item$1CVALUEph* litem_117;
struct CVALUE* __dec_obj41;
void* right_value106;
struct list_item$1CVALUEph* litem_118;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_116, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_117, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value106, 0, sizeof(void*));
memset(&litem_118, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional187=self->len==0,        _if_conditional187) {
            litem_116=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value104;
            __freed_obj__ = 0;
            litem_116->prev=((void*)0);
            litem_116->next=((void*)0);
            __dec_obj40=litem_116->item;
            litem_116->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj40) { come_call_finalizer(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_116;
            self->head=litem_116;
        }
        else {
            if(_if_conditional189=self->len==1,            _if_conditional189) {
                litem_117=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value105=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                litem_117->prev=self->head;
                litem_117->next=((void*)0);
                __dec_obj41=litem_117->item;
                litem_117->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_117;
                self->head->next=litem_117;
            }
            else {
                litem_118=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value106=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value106;
                __freed_obj__ = 0;
                litem_118->prev=self->tail;
                litem_118->next=((void*)0);
                __dec_obj42=litem_118->item;
                litem_118->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_118;
                self->tail=litem_118;
            }
        }
        self->len++;
        __result84__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result84__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional188=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional188) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
struct sNode* __dec_obj43;
void* right_value108;
char* __dec_obj44;
void* right_value118;
struct list$1tuple2$2charphsNodephph* __dec_obj50;
void* right_value119;
struct buffer* __dec_obj51;
void* right_value120;
char* __dec_obj52;
struct sMethodCallNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    __dec_obj43=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(obj))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    __dec_obj44=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(fun_name))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    __dec_obj50=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value118=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj50) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value118;
    __freed_obj__ = 0;
    __dec_obj51=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=buffer_clone(method_block))));
    if(__dec_obj51) { come_call_finalizer(buffer_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value119;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(info->sname))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value120;
    __freed_obj__ = 0;
    self->method_block_sline=method_block_sline;
    __result92__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result92__;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
struct list$1tuple2$2charphsNodephph* __result86__;
void* right_value109;
void* right_value110;
struct list$1tuple2$2charphsNodephph* result_121;
struct list_item$1tuple2$2charphsNodephph* it_122;
_Bool _while_condtional22;
void* right_value117;
struct list$1tuple2$2charphsNodephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value117, 0, sizeof(void*));
        if(_if_conditional190=self==((void*)0),        _if_conditional190) {
            __result86__ = __result_obj__ = ((void*)0);
            return __result86__;
        }
        result_121=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value110=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value109=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 195))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value110;
        __freed_obj__ = 0;
        it_122=self->head;
        while(_while_condtional22=it_122!=((void*)0),        _while_condtional22) {
            list$1tuple2$2charphsNodephph_add(result_121,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value117=tuple2$2charphsNodephp_clone(it_122->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value117;
            __freed_obj__ = 0;
            it_122=it_122->next;
        }
        __result91__ = __result_obj__ = result_121;
        if(result_121 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result91__;
        if(result_121 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsNodephph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result87__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result87__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsNodephph* it_119;
_Bool _while_condtional21;
struct list_item$1tuple2$2charphsNodephph* prev_it_120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_119, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_120, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_119=self->head;
                while(_while_condtional21=it_119!=((void*)0),                _while_condtional21) {
                    prev_it_120=it_119;
                    it_119=it_119->next;
                    if(prev_it_120 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional191=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional191) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional192=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional192) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional193=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional193) {
                                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
void* right_value111;
struct list_item$1tuple2$2charphsNodephph* litem_123;
struct tuple2$2charphsNodeph* __dec_obj45;
_Bool _if_conditional197;
void* right_value112;
struct list_item$1tuple2$2charphsNodephph* litem_124;
struct tuple2$2charphsNodeph* __dec_obj46;
void* right_value113;
struct list_item$1tuple2$2charphsNodephph* litem_125;
struct tuple2$2charphsNodeph* __dec_obj47;
struct list$1tuple2$2charphsNodephph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional194=self->len==0,                _if_conditional194) {
                    litem_123=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value111=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 209))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value111;
                    __freed_obj__ = 0;
                    litem_123->prev=((void*)0);
                    litem_123->next=((void*)0);
                    __dec_obj45=litem_123->item;
                    litem_123->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_123;
                    self->head=litem_123;
                }
                else {
                    if(_if_conditional197=self->len==1,                    _if_conditional197) {
                        litem_124=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value112=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 219))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value112;
                        __freed_obj__ = 0;
                        litem_124->prev=self->head;
                        litem_124->next=((void*)0);
                        __dec_obj46=litem_124->item;
                        litem_124->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_124;
                        self->head->next=litem_124;
                    }
                    else {
                        litem_125=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value113=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 229))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value113;
                        __freed_obj__ = 0;
                        litem_125->prev=self->tail;
                        litem_125->next=((void*)0);
                        __dec_obj47=litem_125->item;
                        litem_125->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj47) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_125;
                        self->tail=litem_125;
                    }
                }
                self->len++;
                __result88__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result88__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional195=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional195) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional196=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional196) {
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
struct tuple2$2charphsNodeph* __result89__;
void* right_value114;
struct tuple2$2charphsNodeph* result_126;
_Bool _if_conditional199;
void* right_value115;
char* __dec_obj48;
_Bool _if_conditional200;
void* right_value116;
struct sNode* __dec_obj49;
struct tuple2$2charphsNodeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
                if(_if_conditional198=self==(void*)0,                _if_conditional198) {
                    __result89__ = __result_obj__ = (void*)0;
                    return __result89__;
                }
                result_126=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value114=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = 0;
                if(_if_conditional199=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional199) {
                    __dec_obj48=result_126->v1;
                    result_126->v1=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->v1))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = 0;
                }
                if(_if_conditional200=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional200) {
                    __dec_obj49=result_126->v2;
                    result_126->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(self->v2))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                }
                __result90__ = __result_obj__ = result_126;
                if(result_126 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result90__;
                if(result_126 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = self->sline;
    return __result93__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value121=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = 0;
    return __result94__;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value122;
char* none_generics_name_127;
void* right_value123;
char* fun_name2_128;
void* right_value124;
char* fun_name3_129;
struct sGenericsFun* generics_fun_132;
_Bool _if_conditional210;
void* right_value126;
_Bool _if_conditional211;
void* right_value127;
char* __result99__;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&none_generics_name_127, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&fun_name2_128, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&fun_name3_129, 0, sizeof(char*));
memset(&generics_fun_132, 0, sizeof(struct sGenericsFun*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
    none_generics_name_127=(char*)come_increment_ref_count(((char*)(right_value122=get_none_generics_name(type->mClass->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    fun_name2_128=(char*)come_increment_ref_count(((char*)(right_value123=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    fun_name3_129=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s_%s",none_generics_name_127,fun_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = 0;
    generics_fun_132=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_129,((void*)0));
    if(_if_conditional210=generics_fun_132,    _if_conditional210) {
        if(_if_conditional211=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(fun_name2_128)))),generics_fun_132,type,info),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126),
        (right_value126 && right_value126 != __result_obj__ && !__freed_obj__) ? right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value126, 
        __freed_obj__ = 0, 
        _if_conditional211) {
            err_msg(info,"%s not found",fun_name3_129);
            __result99__ = __result_obj__ = ((char*)(right_value127=__builtin_string("")));
            if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
            if(none_generics_name_127 && !__freed_obj__) { none_generics_name_127 = come_decrement_ref_count(none_generics_name_127, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name2_128 && !__freed_obj__) { fun_name2_128 = come_decrement_ref_count(fun_name2_128, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name3_129 && !__freed_obj__) { fun_name3_129 = come_decrement_ref_count(fun_name3_129, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value127;
            __freed_obj__ = 0;
            return __result99__;
        }
    }
    __result100__ = __result_obj__ = fun_name2_128;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_127 && !__freed_obj__) { none_generics_name_127 = come_decrement_ref_count(none_generics_name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_128 && !__freed_obj__) { fun_name2_128 = come_decrement_ref_count(fun_name2_128, (void*)0, (void*)0, 0, 1, 0); }
    if(fun_name3_129 && !__freed_obj__) { fun_name3_129 = come_decrement_ref_count(fun_name3_129, (void*)0, (void*)0, 0, 0, 0); }
    return __result100__;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_127 && !__freed_obj__) { none_generics_name_127 = come_decrement_ref_count(none_generics_name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_128 && !__freed_obj__) { fun_name2_128 = come_decrement_ref_count(fun_name2_128, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name3_129 && !__freed_obj__) { fun_name3_129 = come_decrement_ref_count(fun_name3_129, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_130;
unsigned int it_131;
_Bool _while_condtional23;
_Bool _if_conditional206;
void* right_value125;
_Bool _if_conditional207;
struct sGenericsFun* __result95__;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sGenericsFun* __result96__;
struct sGenericsFun* __result97__;
struct sGenericsFun* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_130, 0, sizeof(unsigned int));
memset(&it_131, 0, sizeof(unsigned int));
memset(&right_value125, 0, sizeof(void*));
        hash_130=string_get_hash_key(((char*)key))%self->size;
        it_131=hash_130;
        while(_while_condtional23=(_Bool)1,        _while_condtional23) {
            if(_if_conditional206=self->item_existance[it_131],            _if_conditional206) {
                if(_if_conditional207=optional$2boolbool_value(((struct optional$2boolbool*)(right_value125=string_equals(self->keys[it_131],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125),
                (right_value125 && right_value125 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value125, 
                __freed_obj__ = 0, 
                _if_conditional207) {
                    __result95__ = __result_obj__ = self->items[it_131];
                    return __result95__;
                }
                it_131++;
                if(_if_conditional208=it_131>=self->size,                _if_conditional208) {
                    it_131=0;
                }
                else {
                    if(_if_conditional209=it_131==hash_130,                    _if_conditional209) {
                        __result96__ = __result_obj__ = default_value;
                        return __result96__;
                    }
                }
            }
            else {
                __result97__ = __result_obj__ = default_value;
                return __result97__;
            }
        }
        __result98__ = __result_obj__ = default_value;
        return __result98__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
_Bool __result101__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional212=self->method_block,    _if_conditional212) {
        __result101__ = (_Bool)1;
        return __result101__;
    }
    else {
        __result102__ = (_Bool)0;
        return __result102__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value128;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sMethodCallNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value128;
    __freed_obj__ = 0;
    return __result103__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* fun_name_133;
struct list$1tuple2$2charphsNodephph* params_134;
struct sNode* obj_135;
struct buffer* method_block_136;
int method_block_sline_137;
_Bool _if_conditional213;
_Bool __result104__;
void* right_value129;
struct CVALUE* obj_value_138;
void* right_value130;
struct sType* obj_type_139;
struct sClass* klass_140;
_Bool calling_dynamic_method_141;
struct sType* lambda_type_142;
struct list$1tuple2$2charphsTypephph* o2_saved_143;
struct tuple2$2charphsTypeph* it_146;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_149;
struct sType* field_type_150;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value131;
struct sType* result_type_151;
void* right_value132;
void* right_value133;
struct list$1CVALUEph* come_params_154;
int i_155;
struct list$1tuple2$2charphsNodephph* o2_saved_156;
struct tuple2$2charphsNodeph* it_159;
_Bool _for_condtionalA8;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_162;
struct sNode* node_163;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool __result120__;
void* right_value134;
struct CVALUE* come_value_164;
void* right_value135;
void* right_value136;
void* right_value137;
_Bool _if_conditional228;
void* right_value138;
void* right_value139;
struct buffer* buf_168;
void* right_value140;
int j_169;
struct list$1CVALUEph* o2_saved_170;
struct CVALUE* it_173;
_Bool _for_condtionalA9;
_Bool _if_conditional233;
void* right_value141;
char* __dec_obj53;
_Bool _if_conditional234;
void* right_value142;
struct CVALUE* come_value2_176;
void* right_value143;
char* __dec_obj54;
void* right_value144;
struct sType* result_type2_177;
_Bool _if_conditional235;
void* right_value145;
void* right_value146;
char* __dec_obj55;
void* right_value147;
struct sType* __dec_obj56;
void* right_value148;
void* right_value149;
void* right_value150;
char* generics_fun_name_178;
struct sFun* fun_179;
int i_180;
_Bool _for_condtionalA10;
void* right_value151;
char* new_fun_name_181;
_Bool _if_conditional240;
void* right_value155;
char* __dec_obj57;
_Bool _if_conditional241;
_Bool _if_conditional246;
void* right_value157;
void* right_value158;
char* __dec_obj58;
_Bool _if_conditional247;
_Bool __result140__;
void* right_value159;
struct sType* result_type_187;
void* right_value160;
struct sType* result_type2_188;
void* right_value161;
void* right_value162;
struct list$1sTypeph* param_types_189;
struct list$1sTypeph* o2_saved_190;
struct sType* it_193;
_Bool _for_condtionalA11;
_Bool _if_conditional252;
void* right_value166;
struct sType* it2_199;
void* right_value167;
void* right_value168;
void* right_value169;
struct list$1CVALUEph* come_params_200;
void* right_value170;
void* right_value176;
struct map$2charphCVALUEph* label_params_204;
int i_205;
struct list$1tuple2$2charphsNodephph* o2_saved_206;
struct tuple2$2charphsNodeph* it_207;
_Bool _for_condtionalA15;
struct tuple2$2charphsNodeph* multiple_assgin_var3;
char* label_208;
struct sNode* node_209;
_Bool _if_conditional259;
void* right_value177;
void* right_value178;
void* right_value179;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional264;
_Bool __result153__;
void* right_value180;
struct CVALUE* come_value_213;
_Bool _if_conditional265;
int n_214;
struct list$1charph* o2_saved_215;
char* it_218;
_Bool _for_condtionalA16;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value181;
void* right_value182;
void* right_value183;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value184;
void* right_value185;
void* right_value186;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value193;
_Bool _if_conditional298;
_Bool _for_condtionalA19;
void* right_value194;
char* default_param_242;
char* param_name_243;
struct CVALUE* come_value_247;
_Bool _if_conditional303;
struct buffer* source_248;
char* p_249;
char* head_250;
int sline_251;
void* right_value198;
struct buffer* __dec_obj63;
void* right_value199;
struct sNode* node_252;
_Bool _if_conditional304;
_Bool __result180__;
struct buffer* __dec_obj64;
void* right_value200;
struct CVALUE* come_value_253;
_Bool _if_conditional305;
void* right_value201;
void* right_value202;
void* right_value203;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool __result181__;
_Bool _if_conditional308;
_Bool _for_condtionalA20;
char* param_name_254;
struct CVALUE* come_value_255;
_Bool _if_conditional309;
void* right_value207;
_Bool _if_conditional317;
void* right_value208;
void* right_value209;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value212;
struct sNode* current_stack_frame_node_260;
_Bool _if_conditional322;
_Bool __result190__;
void* right_value213;
struct CVALUE* come_value_261;
void* right_value214;
void* right_value215;
struct buffer* method_block2_262;
void* right_value216;
struct sType* method_block_type_263;
void* right_value217;
char* class_name_264;
struct sClass* current_stack_frame_struct_268;
_Bool _if_conditional327;
_Bool __result196__;
void* right_value221;
struct sType* result_type_269;
struct list$1sTypeph* param_types_270;
struct list$1charph* param_names_271;
void* right_value222;
void* right_value223;
struct buffer* all_alhabet_sname_272;
char* p_273;
_Bool _while_condtional35;
_Bool _if_conditional328;
void* right_value224;
void* right_value225;
void* right_value226;
int i_274;
struct list$1sTypeph* o2_saved_275;
struct sType* it_276;
_Bool _for_condtionalA21;
struct sType* param_type_277;
_Bool _if_conditional329;
void* right_value227;
char* param_name_278;
void* right_value228;
void* right_value229;
_Bool _if_conditional330;
void* right_value230;
char* param_name_279;
void* right_value231;
void* right_value232;
void* right_value233;
char* param_name_280;
void* right_value234;
void* right_value235;
_Bool _if_conditional331;
void* right_value236;
struct buffer* source3_281;
char* p_282;
char* head_283;
int sline_284;
struct buffer* __dec_obj69;
void* right_value237;
struct sNode* node_285;
_Bool _if_conditional332;
_Bool __result197__;
void* right_value238;
void* right_value239;
char* method_block_name_286;
void* right_value240;
struct CVALUE* come_value2_287;
struct sFun* fun2_288;
_Bool _if_conditional333;
_Bool __result198__;
struct sType* method_block_type2_289;
void* right_value241;
char* __dec_obj70;
void* right_value242;
struct sType* __dec_obj71;
struct buffer* __dec_obj72;
void* right_value243;
void* right_value244;
struct buffer* buf_290;
int j_291;
struct list$1CVALUEph* o2_saved_292;
struct CVALUE* it_293;
_Bool _for_condtionalA22;
_Bool _if_conditional334;
void* right_value245;
struct CVALUE* come_value2_294;
void* right_value246;
char* __dec_obj73;
void* right_value247;
struct sType* __dec_obj74;
_Bool _if_conditional335;
void* right_value248;
char* __dec_obj75;
void* right_value249;
char* __dec_obj76;
_Bool _if_conditional336;
void* right_value250;
char* var_name_295;
void* right_value251;
struct sType* result_type_296;
void* right_value252;
struct sType* result_type2_297;
struct sType* result_type3_298;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
_Bool _if_conditional340;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_name_133, 0, sizeof(char*));
memset(&params_134, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_135, 0, sizeof(struct sNode*));
memset(&method_block_136, 0, sizeof(struct buffer*));
memset(&method_block_sline_137, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&obj_value_138, 0, sizeof(struct CVALUE*));
memset(&right_value130, 0, sizeof(void*));
memset(&obj_type_139, 0, sizeof(struct sType*));
memset(&klass_140, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_141, 0, sizeof(_Bool));
memset(&lambda_type_142, 0, sizeof(struct sType*));
memset(&o2_saved_143, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_146, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_149, 0, sizeof(char*));
memset(&field_type_150, 0, sizeof(struct sType*));
memset(&field_name_149, 0, sizeof(char*));
memset(&field_type_150, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&result_type_151, 0, sizeof(struct sType*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&come_params_154, 0, sizeof(struct list$1CVALUEph*));
memset(&i_155, 0, sizeof(int));
memset(&o2_saved_156, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_159, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_162, 0, sizeof(char*));
memset(&node_163, 0, sizeof(struct sNode*));
memset(&label_162, 0, sizeof(char*));
memset(&node_163, 0, sizeof(struct sNode*));
memset(&right_value134, 0, sizeof(void*));
memset(&come_value_164, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&buf_168, 0, sizeof(struct buffer*));
memset(&right_value140, 0, sizeof(void*));
memset(&j_169, 0, sizeof(int));
memset(&o2_saved_170, 0, sizeof(struct list$1CVALUEph*));
memset(&it_173, 0, sizeof(struct CVALUE*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&come_value2_176, 0, sizeof(struct CVALUE*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&result_type2_177, 0, sizeof(struct sType*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&generics_fun_name_178, 0, sizeof(char*));
memset(&fun_179, 0, sizeof(struct sFun*));
memset(&i_180, 0, sizeof(int));
memset(&right_value151, 0, sizeof(void*));
memset(&new_fun_name_181, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&result_type_187, 0, sizeof(struct sType*));
memset(&right_value160, 0, sizeof(void*));
memset(&result_type2_188, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&param_types_189, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_190, 0, sizeof(struct list$1sTypeph*));
memset(&it_193, 0, sizeof(struct sType*));
memset(&right_value166, 0, sizeof(void*));
memset(&it2_199, 0, sizeof(struct sType*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&come_params_200, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&label_params_204, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_205, 0, sizeof(int));
memset(&o2_saved_206, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_207, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_208, 0, sizeof(char*));
memset(&node_209, 0, sizeof(struct sNode*));
memset(&label_208, 0, sizeof(char*));
memset(&node_209, 0, sizeof(struct sNode*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&come_value_213, 0, sizeof(struct CVALUE*));
memset(&n_214, 0, sizeof(int));
memset(&o2_saved_215, 0, sizeof(struct list$1charph*));
memset(&it_218, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&default_param_242, 0, sizeof(char*));
memset(&param_name_243, 0, sizeof(char*));
memset(&come_value_247, 0, sizeof(struct CVALUE*));
memset(&source_248, 0, sizeof(struct buffer*));
memset(&p_249, 0, sizeof(char*));
memset(&head_250, 0, sizeof(char*));
memset(&sline_251, 0, sizeof(int));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&node_252, 0, sizeof(struct sNode*));
memset(&right_value200, 0, sizeof(void*));
memset(&come_value_253, 0, sizeof(struct CVALUE*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&param_name_254, 0, sizeof(char*));
memset(&come_value_255, 0, sizeof(struct CVALUE*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&current_stack_frame_node_260, 0, sizeof(struct sNode*));
memset(&right_value213, 0, sizeof(void*));
memset(&come_value_261, 0, sizeof(struct CVALUE*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&method_block2_262, 0, sizeof(struct buffer*));
memset(&right_value216, 0, sizeof(void*));
memset(&method_block_type_263, 0, sizeof(struct sType*));
memset(&right_value217, 0, sizeof(void*));
memset(&class_name_264, 0, sizeof(char*));
memset(&current_stack_frame_struct_268, 0, sizeof(struct sClass*));
memset(&right_value221, 0, sizeof(void*));
memset(&result_type_269, 0, sizeof(struct sType*));
memset(&param_types_270, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_271, 0, sizeof(struct list$1charph*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&all_alhabet_sname_272, 0, sizeof(struct buffer*));
memset(&p_273, 0, sizeof(char*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&i_274, 0, sizeof(int));
memset(&o2_saved_275, 0, sizeof(struct list$1sTypeph*));
memset(&it_276, 0, sizeof(struct sType*));
memset(&param_type_277, 0, sizeof(struct sType*));
memset(&right_value227, 0, sizeof(void*));
memset(&param_name_278, 0, sizeof(char*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&param_name_279, 0, sizeof(char*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&param_name_280, 0, sizeof(char*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&source3_281, 0, sizeof(struct buffer*));
memset(&p_282, 0, sizeof(char*));
memset(&head_283, 0, sizeof(char*));
memset(&sline_284, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&node_285, 0, sizeof(struct sNode*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&method_block_name_286, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&come_value2_287, 0, sizeof(struct CVALUE*));
memset(&fun2_288, 0, sizeof(struct sFun*));
memset(&method_block_type2_289, 0, sizeof(struct sType*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&buf_290, 0, sizeof(struct buffer*));
memset(&j_291, 0, sizeof(int));
memset(&o2_saved_292, 0, sizeof(struct list$1CVALUEph*));
memset(&it_293, 0, sizeof(struct CVALUE*));
memset(&right_value245, 0, sizeof(void*));
memset(&come_value2_294, 0, sizeof(struct CVALUE*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&var_name_295, 0, sizeof(char*));
memset(&right_value251, 0, sizeof(void*));
memset(&result_type_296, 0, sizeof(struct sType*));
memset(&right_value252, 0, sizeof(void*));
memset(&result_type2_297, 0, sizeof(struct sType*));
memset(&result_type3_298, 0, sizeof(struct sType*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
    fun_name_133=self->fun_name;
    params_134=self->params;
    obj_135=self->obj;
    method_block_136=self->method_block;
    method_block_sline_137=self->method_block_sline;
    if(_if_conditional213=!node_compile(obj_135,info),    _if_conditional213) {
        __result104__ = (_Bool)0;
        return __result104__;
    }
    obj_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    obj_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(obj_value_138->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value130;
    __freed_obj__ = 0;
    klass_140=obj_type_139->mClass;
    calling_dynamic_method_141=(_Bool)0;
    lambda_type_142=((void*)0);
    for(
    o2_saved_143=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_140->mFields)),it_146=list$1tuple2$2charphsTypephph_begin((o2_saved_143)) ,    0;    _for_condtionalA7=    !list$1tuple2$2charphsTypephph_end((o2_saved_143)) ,    _for_condtionalA7;    it_146=list$1tuple2$2charphsTypephph_next((o2_saved_143)) ,    0    ){
        multiple_assgin_var1=it_146;
        field_name_149=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_150=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        if(_if_conditional218=string_operator_equals(field_name_149,fun_name_133)&&string_operator_equals(field_type_150->mClass->mName,"lambda"),        _if_conditional218) {
            calling_dynamic_method_141=(_Bool)1;
            lambda_type_142=field_type_150;
            if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_150, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_143 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional219=calling_dynamic_method_141,    _if_conditional219) {
        result_type_151=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(lambda_type_142->mResultType->v1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = 0;
        result_type_151->mStatic=(_Bool)0;
        come_params_154=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value133=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value132=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 260))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value132;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value133;
        __freed_obj__ = 0;
        i_155=0;
        for(
        o2_saved_156=(params_134),it_159=list$1tuple2$2charphsNodephph_begin((o2_saved_156)) ,        0;        _for_condtionalA8=        !list$1tuple2$2charphsNodephph_end((o2_saved_156)) ,        _for_condtionalA8;        it_159=list$1tuple2$2charphsNodephph_next((o2_saved_156)) ,        0        ){
            multiple_assgin_var2=it_159;
            label_162=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_163=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            if(_if_conditional224=i_155==0,            _if_conditional224) {
                list$1CVALUEph_push_back(come_params_154,(struct CVALUE*)come_increment_ref_count(obj_value_138));
                i_155++;
            }
            else {
                if(_if_conditional225=!node_compile(node_163,info),                _if_conditional225) {
                    __result120__ = (_Bool)0;
                    if(label_162 && !__freed_obj__) { label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
                    if(result_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_154 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result120__;
                }
                come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                check_assign_type(((char*)(right_value137=xsprintf("\%s param num \%s is assinged to",((char*)(right_value135=charp_to_string(fun_name_133))),((char*)(right_value136=int_to_string(i_155)))))),list$1sTypephp_operator_load_element(lambda_type_142->mParamTypes,i_155-1),come_value_164->type,come_value_164,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value135;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value136;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value137;
                __freed_obj__ = 0;
                if(_if_conditional228=list$1sTypephp_operator_load_element(lambda_type_142->mParamTypes,i_155-1)->mHeap&&come_value_164->type->mHeap,                _if_conditional228) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_142->mParamTypes,i_155-1),come_value_164->type,come_value_164,info);
                }
                list$1CVALUEph_push_back(come_params_154,(struct CVALUE*)come_increment_ref_count(come_value_164));
                i_155++;
                dec_stack_ptr(1,info);
                if(come_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(label_162 && !__freed_obj__) { label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, 0); }
            if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
        }
        buf_168=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value139=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 290))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value138;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value139;
        __freed_obj__ = 0;
        buffer_append_str(buf_168,((char*)(right_value140=xsprintf("%s->%s",obj_value_138->c_value,fun_name_133))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value140;
        __freed_obj__ = 0;
        buffer_append_str(buf_168,"(");
        j_169=0;
        for(
        o2_saved_170=(struct list$1CVALUEph*)come_increment_ref_count((come_params_154)),it_173=list$1CVALUEph_begin((o2_saved_170)) ,        0;        _for_condtionalA9=        !list$1CVALUEph_end((o2_saved_170)) ,        _for_condtionalA9;        it_173=list$1CVALUEph_next((o2_saved_170)) ,        0        ){
            if(_if_conditional233=j_169==0,            _if_conditional233) {
                __dec_obj53=it_173->c_value;
                it_173->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s->_protocol_obj",it_173->c_value))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141;
                __freed_obj__ = 0;
            }
            buffer_append_str(buf_168,it_173->c_value);
            if(_if_conditional234=j_169!=list$1CVALUEph_length(come_params_154)-1,            _if_conditional234) {
                buffer_append_str(buf_168,",");
            }
            j_169++;
        }
        if(o2_saved_170 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_168,")");
        come_value2_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 310))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value142;
        __freed_obj__ = 0;
        __dec_obj54=come_value2_176->c_value;
        come_value2_176->c_value=(char*)come_increment_ref_count(((char*)(right_value143=buffer_to_string(buf_168))));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value143;
        __freed_obj__ = 0;
        result_type2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=solve_generics(result_type_151,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value144;
        __freed_obj__ = 0;
        if(_if_conditional235=result_type2_177->mHeap,        _if_conditional235) {
            __dec_obj55=come_value2_176->c_value;
            come_value2_176->c_value=(char*)come_increment_ref_count(((char*)(right_value146=append_object_to_right_values(((char*)(right_value145=buffer_to_string(buf_168))),(struct sType*)come_increment_ref_count(result_type2_177),info))));
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value145;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value146;
            __freed_obj__ = 0;
        }
        __dec_obj56=come_value2_176->type;
        come_value2_176->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(result_type2_177))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value147;
        __freed_obj__ = 0;
        come_value2_176->type->mStatic=(_Bool)0;
        come_value2_176->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_176->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_176));
        if(result_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_154 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_168 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        generics_fun_name_178=(char*)come_increment_ref_count(((char*)(right_value150=string_to_string(((char*)(right_value149=make_generics_function(obj_type_139,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(fun_name_133)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value149;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value150;
        __freed_obj__ = 0;
        fun_179=((void*)0);
        for(
        i_180=128 ,        0;        _for_condtionalA10=        i_180>=1 ,        _for_condtionalA10;        i_180-- ,        0        ){
            new_fun_name_181=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s_v%d",generics_fun_name_178,i_180))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value151;
            __freed_obj__ = 0;
            fun_179=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_181);
            if(_if_conditional240=fun_179!=((void*)0),            _if_conditional240) {
                __dec_obj57=generics_fun_name_178;
                generics_fun_name_178=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(new_fun_name_181))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value155;
                __freed_obj__ = 0;
                if(new_fun_name_181 && !__freed_obj__) { new_fun_name_181 = come_decrement_ref_count(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_181 && !__freed_obj__) { new_fun_name_181 = come_decrement_ref_count(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional241=fun_179==((void*)0),        _if_conditional241) {
            fun_179=map$2charphsFunph_at(info->funcs,generics_fun_name_178,((void*)0));
            if(_if_conditional246=fun_179==((void*)0),            _if_conditional246) {
                __dec_obj58=generics_fun_name_178;
                generics_fun_name_178=(char*)come_increment_ref_count(((char*)(right_value158=create_method_name(obj_type_139,(_Bool)0,((char*)(right_value157=__builtin_string(fun_name_133))),info))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value157;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value158;
                __freed_obj__ = 0;
                fun_179=map$2charphsFunph_at(info->funcs,generics_fun_name_178,((void*)0));
                if(_if_conditional247=fun_179==((void*)0),                _if_conditional247) {
                    err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_178,info->come_fun->mName);
                    __result140__ = (_Bool)1;
                    if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result140__;
                }
            }
        }
        result_type_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(fun_179->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value159;
        __freed_obj__ = 0;
        result_type_187->mStatic=(_Bool)0;
        result_type2_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=solve_generics(result_type_187,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value160;
        __freed_obj__ = 0;
        param_types_189=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value162=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value161=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 364))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value161;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value162);
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value162;
        __freed_obj__ = 0;
        for(
        o2_saved_190=(struct list$1sTypeph*)come_increment_ref_count((fun_179->mParamTypes)),it_193=list$1sTypeph_begin((o2_saved_190)) ,        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_190)) ,        _for_condtionalA11;        it_193=list$1sTypeph_next((o2_saved_190)) ,        0        ){
            if(_if_conditional252=it_193==((void*)0),            _if_conditional252) {
                list$1sTypeph_push_back(param_types_189,it_193);
            }
            else {
                it2_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=solve_generics(it_193,info->generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value166;
                __freed_obj__ = 0;
                list$1sTypeph_push_back(param_types_189,(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(it2_199)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value167;
                __freed_obj__ = 0;
                if(it2_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,it2_199, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        if(o2_saved_190 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_params_200=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value169=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value168=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 376))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value168;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value169;
        __freed_obj__ = 0;
        label_params_204=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value176=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value170=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 378))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value176;
        __freed_obj__ = 0;
        i_205=0;
        for(
        o2_saved_206=(params_134),it_207=list$1tuple2$2charphsNodephph_begin((o2_saved_206)) ,        0;        _for_condtionalA15=        !list$1tuple2$2charphsNodephph_end((o2_saved_206)) ,        _for_condtionalA15;        it_207=list$1tuple2$2charphsNodephph_next((o2_saved_206)) ,        0        ){
            multiple_assgin_var3=it_207;
            label_208=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
            node_209=(struct sNode*)come_increment_ref_count(multiple_assgin_var3->v2);
            if(_if_conditional259=i_205==0,            _if_conditional259) {
                check_assign_type(((char*)(right_value179=xsprintf("\%s param num \%s is assinged to",((char*)(right_value177=charp_to_string(fun_name_133))),((char*)(right_value178=int_to_string(i_205)))))),list$1sTypephp_operator_load_element(param_types_189,i_205),obj_value_138->type,obj_value_138,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value177;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value178;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value179);
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value179;
                __freed_obj__ = 0;
                if(_if_conditional260=list$1sTypephp_operator_load_element(param_types_189,i_205)->mHeap&&obj_value_138->type->mHeap,                _if_conditional260) {
                    std_move(list$1sTypephp_operator_load_element(param_types_189,i_205),obj_value_138->type,obj_value_138,info);
                }
                else {
                    if(_if_conditional261=list$1sTypephp_operator_load_element(param_types_189,i_205)->mHeap&&!obj_value_138->type->mHeap&&!gComeGC,                    _if_conditional261) {
                        err_msg(info,"require heap parametor(%s)",list$1charphp_operator_load_element(fun_179->mParamNames,i_205));
                        exit(2);
                    }
                }
                list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(obj_value_138));
                i_205++;
            }
            else {
                if(_if_conditional264=!node_compile(node_209,info),                _if_conditional264) {
                    __result153__ = (_Bool)0;
                    if(label_208 && !__freed_obj__) { label_208 = come_decrement_ref_count(label_208, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_209 && !__freed_obj__) { node_209 = come_decrement_ref_count(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0); } 
                    if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result153__;
                }
                come_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = 0;
                if(_if_conditional265=label_208!=((void*)0),                _if_conditional265) {
                    n_214=0;
                    for(
                    o2_saved_215=(struct list$1charph*)come_increment_ref_count((fun_179->mParamNames)),it_218=list$1charph_begin((o2_saved_215)) ,                    0;                    _for_condtionalA16=                    !list$1charph_end((o2_saved_215)) ,                    _for_condtionalA16;                    it_218=list$1charph_next((o2_saved_215)) ,                    0                    ){
                        if(_if_conditional270=string_operator_equals(label_208,it_218),                        _if_conditional270) {
                            break;
                        }
                        n_214++;
                    }
                    if(o2_saved_215 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(_if_conditional271=list$1sTypephp_operator_load_element(param_types_189,n_214),                    _if_conditional271) {
                        check_assign_type(((char*)(right_value183=xsprintf("\%s param num \%s is assinged to",((char*)(right_value181=charp_to_string(fun_name_133))),((char*)(right_value182=int_to_string(i_205)))))),list$1sTypephp_operator_load_element(param_types_189,n_214),come_value_213->type,come_value_213,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value181;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
                        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value182;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value183);
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value183;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional272=list$1sTypephp_operator_load_element(param_types_189,n_214)&&list$1sTypephp_operator_load_element(param_types_189,n_214)->mHeap&&come_value_213->type->mHeap,                    _if_conditional272) {
                        std_move(list$1sTypephp_operator_load_element(param_types_189,n_214),come_value_213->type,come_value_213,info);
                    }
                }
                else {
                    if(_if_conditional273=list$1sTypephp_operator_load_element(param_types_189,i_205),                    _if_conditional273) {
                        check_assign_type(((char*)(right_value186=xsprintf("\%s param num \%s is assinged to",((char*)(right_value184=charp_to_string(fun_name_133))),((char*)(right_value185=int_to_string(i_205)))))),list$1sTypephp_operator_load_element(param_types_189,i_205),come_value_213->type,come_value_213,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value184;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
                        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value185;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
                        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value186;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional274=list$1sTypephp_operator_load_element(param_types_189,i_205)&&list$1sTypephp_operator_load_element(param_types_189,i_205)->mHeap&&come_value_213->type->mHeap,                    _if_conditional274) {
                        std_move(list$1sTypephp_operator_load_element(param_types_189,i_205),come_value_213->type,come_value_213,info);
                    }
                }
                if(_if_conditional275=label_208==((void*)0),                _if_conditional275) {
                    list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value_213));
                    i_205++;
                }
                else {
                    map$2charphCVALUEph_insert(label_params_204,(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(label_208)))),(struct CVALUE*)come_increment_ref_count(come_value_213));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value193;
                    __freed_obj__ = 0;
                }
                dec_stack_ptr(1,info);
                if(come_value_213 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(label_208 && !__freed_obj__) { label_208 = come_decrement_ref_count(label_208, (void*)0, (void*)0, 0, 0, 0); }
            if(node_209 && !__freed_obj__) { node_209 = come_decrement_ref_count(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional298=list$1tuple2$2charphsNodephph_length(params_134)<list$1sTypeph_length(fun_179->mParamTypes)+(method_block_136?-2:0),        _if_conditional298) {
            for(
            ;            _for_condtionalA19=            i_205<list$1sTypeph_length(fun_179->mParamTypes)+(method_block_136?-2:0) ,            _for_condtionalA19;            i_205++ ,            0            ){
                default_param_242=(char*)come_increment_ref_count(((char*)(right_value194=string_clone(list$1charphp_operator_load_element(fun_179->mParamDefaultParametors,i_205)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value194;
                __freed_obj__ = 0;
                param_name_243=list$1charphp_operator_load_element(fun_179->mParamNames,i_205);
                come_value_247=map$2charphCVALUEphp_operator_load_element(label_params_204,param_name_243);
                if(_if_conditional303=default_param_242&&string_operator_not_equals(default_param_242,""),                _if_conditional303) {
                    source_248=(struct buffer*)come_increment_ref_count(info->source);
                    p_249=info->p;
                    head_250=info->head;
                    sline_251=info->sline;
                    __dec_obj63=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=string_to_buffer(default_param_242))));
                    if(__dec_obj63) { come_call_finalizer(buffer_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value198;
                    __freed_obj__ = 0;
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
                    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value199;
                    __freed_obj__ = 0;
                    if(_if_conditional304=!node_compile(node_252,info),                    _if_conditional304) {
                        __result180__ = (_Bool)0;
                        if(source_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_248, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                        if(default_param_242 && !__freed_obj__) { default_param_242 = come_decrement_ref_count(default_param_242, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result180__;
                    }
                    __dec_obj64=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_248);
                    if(__dec_obj64) { come_call_finalizer(buffer_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    info->p=p_249;
                    info->head=head_250;
                    info->sline=sline_251;
                    come_value_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value200;
                    __freed_obj__ = 0;
                    if(_if_conditional305=list$1sTypephp_operator_load_element(param_types_189,i_205),                    _if_conditional305) {
                        check_assign_type(((char*)(right_value203=xsprintf("\%s param num \%s is assinged to",((char*)(right_value201=charp_to_string(fun_name_133))),((char*)(right_value202=int_to_string(i_205)))))),list$1sTypephp_operator_load_element(param_types_189,i_205),come_value_253->type,come_value_253,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value201;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value202;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
                        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value203;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional306=list$1sTypephp_operator_load_element(param_types_189,i_205)&&list$1sTypephp_operator_load_element(param_types_189,i_205)->mHeap&&come_value_253->type->mHeap,                    _if_conditional306) {
                        std_move(list$1sTypephp_operator_load_element(param_types_189,i_205),come_value_253->type,come_value_253,info);
                    }
                    list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value_253));
                    dec_stack_ptr(1,info);
                    if(source_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_248, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_253 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional307=come_value_247,                    _if_conditional307) {
                        list$1CVALUEph_push_back(come_params_200,((void*)0));
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_179->mName);
                        __result181__ = (_Bool)0;
                        if(default_param_242 && !__freed_obj__) { default_param_242 = come_decrement_ref_count(default_param_242, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                        return __result181__;
                    }
                }
                if(default_param_242 && !__freed_obj__) { default_param_242 = come_decrement_ref_count(default_param_242, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        if(_if_conditional308=map$2charphCVALUEph_length(label_params_204)>0,        _if_conditional308) {
            for(
            i_205=0 ,            0;            _for_condtionalA20=            i_205<list$1charph_length(fun_179->mParamNames)+(method_block_136?-2:0) ,            _for_condtionalA20;            i_205++ ,            0            ){
                param_name_254=list$1charphp_operator_load_element(fun_179->mParamNames,i_205);
                come_value_255=map$2charphCVALUEphp_operator_load_element(label_params_204,param_name_254);
                if(_if_conditional309=come_value_255,                _if_conditional309) {
                    list$1CVALUEph_replace(come_params_200,i_205,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=CVALUE_clone(come_value_255)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value207;
                    __freed_obj__ = 0;
                }
            }
        }
        if(_if_conditional317=method_block_136,        _if_conditional317) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 509);
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value209=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value208=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 509)))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=_inf_value1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value208;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value209;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value212);
            if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value212;
            __freed_obj__ = 0;
            if(_if_conditional322=!node_compile(current_stack_frame_node_260,info),            _if_conditional322) {
                __result190__ = (_Bool)0;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result190__;
            }
            come_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value213);
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value213;
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value_261));
            dec_stack_ptr(1,info);
            method_block2_262=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value215=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value214=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 519))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value214);
            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value214;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value215);
            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value215;
            __freed_obj__ = 0;
            method_block_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(list$1sTypephp_operator_load_element(fun_179->mParamTypes,-1)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value216);
            if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value216;
            __freed_obj__ = 0;
            class_name_264=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("__current_stack%d__",info->current_stack_num))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value217);
            if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value217;
            __freed_obj__ = 0;
            list$1sTypephp_operator_load_element(method_block_type_263->mParamTypes,0)->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_264);
            current_stack_frame_struct_268=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_264);
            info->num_method_block++;
            if(_if_conditional327=string_operator_not_equals(method_block_type_263->mClass->mName,"lambda"),            _if_conditional327) {
                err_msg(info,"This function does not have method block(%s)",fun_name_133);
                __result196__ = (_Bool)0;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result196__;
            }
            result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(method_block_type_263->mResultType->v1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value221;
            __freed_obj__ = 0;
            result_type_269->mStatic=(_Bool)0;
            param_types_270=method_block_type_263->mParamTypes;
            param_names_271=method_block_type_263->mParamNames;
            all_alhabet_sname_272=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 540))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value222;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value223;
            __freed_obj__ = 0;
            {
                p_273=info->sname;
                while(_while_condtional35=*p_273,                _while_condtional35) {
                    if(_if_conditional328=xisalnum(*p_273),                    _if_conditional328) {
                        buffer_append_char(all_alhabet_sname_272,*p_273++);
                    }
                    else {
                        p_273++;
                    }
                }
            }
            buffer_append_str(method_block2_262,((char*)(right_value226=xsprintf("%s method_block%d_%s(",((char*)(right_value224=make_type_name_string(result_type_269,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value225=buffer_to_string(all_alhabet_sname_272)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[11] = right_value224;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value225);
            if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[12] = right_value225;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value226);
            if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[13] = right_value226;
            __freed_obj__ = 0;
            i_274=0;
            for(
            o2_saved_275=(param_types_270),it_276=list$1sTypeph_begin((o2_saved_275)) ,            0;            _for_condtionalA21=            !list$1sTypeph_end((o2_saved_275)) ,            _for_condtionalA21;            it_276=list$1sTypeph_next((o2_saved_275)) ,            0            ){
                param_type_277=it_276;
                if(_if_conditional329=i_274==0,                _if_conditional329) {
                    param_name_278=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("parent"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value227;
                    __freed_obj__ = 0;
                    buffer_append_str(method_block2_262,((char*)(right_value229=xsprintf("%s",((char*)(right_value228=make_define_var(param_type_277,param_name_278,(_Bool)0,info)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
                    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value228;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value229;
                    __freed_obj__ = 0;
                    if(param_name_278 && !__freed_obj__) { param_name_278 = come_decrement_ref_count(param_name_278, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional330=i_274==1,                    _if_conditional330) {
                        param_name_279=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("it"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value230;
                        __freed_obj__ = 0;
                        buffer_append_str(method_block2_262,((char*)(right_value232=xsprintf("%s",((char*)(right_value231=make_define_var(param_type_277,param_name_279,(_Bool)0,info)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value231);
                        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value231;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value232);
                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value232;
                        __freed_obj__ = 0;
                        if(param_name_279 && !__freed_obj__) { param_name_279 = come_decrement_ref_count(param_name_279, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        param_name_280=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("it%d",i_274))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value233;
                        __freed_obj__ = 0;
                        buffer_append_str(method_block2_262,((char*)(right_value235=xsprintf("%s",((char*)(right_value234=make_define_var(param_type_277,param_name_280,(_Bool)0,info)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
                        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value234;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value235);
                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value235;
                        __freed_obj__ = 0;
                        if(param_name_280 && !__freed_obj__) { param_name_280 = come_decrement_ref_count(param_name_280, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
                if(_if_conditional331=i_274!=list$1sTypeph_length(param_types_270)-1,                _if_conditional331) {
                    buffer_append_str(method_block2_262,",");
                }
                i_274++;
            }
            buffer_append_str(method_block2_262,")\n");
            buffer_append_str(method_block2_262,((char*)(right_value236=buffer_to_string(method_block_136))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[14] = right_value236;
            __freed_obj__ = 0;
            source3_281=(struct buffer*)come_increment_ref_count(info->source);
            p_282=info->p;
            head_283=info->head;
            sline_284=info->sline;
            __dec_obj69=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_262);
            if(__dec_obj69) { come_call_finalizer(buffer_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_137;
            node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=parse_function(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[15] = right_value237;
            __freed_obj__ = 0;
            if(_if_conditional332=!node_compile(node_285,info),            _if_conditional332) {
                __result197__ = (_Bool)0;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_269 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_272 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_281 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_281, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_285 && !__freed_obj__) { node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result197__;
            }
            method_block_name_286=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value238=buffer_to_string(all_alhabet_sname_272)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value238);
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[16] = right_value238;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value239);
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[17] = right_value239;
            __freed_obj__ = 0;
            come_value2_287=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 604))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[18] = right_value240;
            __freed_obj__ = 0;
            fun2_288=map$2charphsFunph_at(info->funcs,method_block_name_286,((void*)0));
            if(_if_conditional333=fun2_288==((void*)0),            _if_conditional333) {
                err_msg(info,"method block function not found(%s)",method_block_name_286);
                __result198__ = (_Bool)1;
                if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
                if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_269 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_272 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_281 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_281, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_285 && !__freed_obj__) { node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 0, 0); } 
                if(method_block_name_286 && !__freed_obj__) { method_block_name_286 = come_decrement_ref_count(method_block_name_286, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value2_287 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_287, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result198__;
            }
            method_block_type2_289=fun2_288->mLambdaType;
            __dec_obj70=come_value2_287->c_value;
            come_value2_287->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("(void*)%s",method_block_name_286))));
            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[19] = right_value241;
            __freed_obj__ = 0;
            __dec_obj71=come_value2_287->type;
            come_value2_287->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(method_block_type2_289))));
            if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[20] = right_value242;
            __freed_obj__ = 0;
            come_value2_287->var=((void*)0);
            list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value2_287));
            __dec_obj72=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_281);
            if(__dec_obj72) { come_call_finalizer(buffer_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
            info->p=p_282;
            info->head=head_283;
            info->sline=sline_284;
            info->current_stack_frame_struct=current_stack_frame_struct_268;
            if(current_stack_frame_node_260 && !__freed_obj__) { current_stack_frame_node_260 = come_decrement_ref_count(current_stack_frame_node_260, ((struct sNode*)current_stack_frame_node_260)->finalize, ((struct sNode*)current_stack_frame_node_260)->_protocol_obj, 0, 0, 0); } 
            if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block2_262 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_262, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block_type_263 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_263, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(class_name_264 && !__freed_obj__) { class_name_264 = come_decrement_ref_count(class_name_264, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_269 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(all_alhabet_sname_272 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_272, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(source3_281 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_281, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node_285 && !__freed_obj__) { node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 0, 0); } 
            if(method_block_name_286 && !__freed_obj__) { method_block_name_286 = come_decrement_ref_count(method_block_name_286, (void*)0, (void*)0, 0, 0, 0); }
            if(come_value2_287 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_287, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        buf_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value244=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 629))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value243;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value244;
        __freed_obj__ = 0;
        buffer_append_str(buf_290,generics_fun_name_178);
        buffer_append_str(buf_290,"(");
        j_291=0;
        for(
        o2_saved_292=(struct list$1CVALUEph*)come_increment_ref_count((come_params_200)),it_293=list$1CVALUEph_begin((o2_saved_292)) ,        0;        _for_condtionalA22=        !list$1CVALUEph_end((o2_saved_292)) ,        _for_condtionalA22;        it_293=list$1CVALUEph_next((o2_saved_292)) ,        0        ){
            buffer_append_str(buf_290,it_293->c_value);
            if(_if_conditional334=j_291!=list$1CVALUEph_length(come_params_200)-1,            _if_conditional334) {
                buffer_append_str(buf_290,",");
            }
            j_291++;
        }
        if(o2_saved_292 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_292, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_290,")");
        come_value2_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 647))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value245;
        __freed_obj__ = 0;
        __dec_obj73=come_value2_294->c_value;
        come_value2_294->c_value=(char*)come_increment_ref_count(((char*)(right_value246=buffer_to_string(buf_290))));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value246;
        __freed_obj__ = 0;
        __dec_obj74=come_value2_294->type;
        come_value2_294->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(result_type2_188))));
        if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value247;
        __freed_obj__ = 0;
        come_value2_294->type->mStatic=(_Bool)0;
        come_value2_294->var=((void*)0);
        if(_if_conditional335=result_type2_188->mHeap,        _if_conditional335) {
            __dec_obj75=come_value2_294->c_value;
            come_value2_294->c_value=(char*)come_increment_ref_count(((char*)(right_value248=append_object_to_right_values(come_value2_294->c_value,(struct sType*)come_increment_ref_count(result_type2_188),info))));
            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
            if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value248;
            __freed_obj__ = 0;
        }
        __dec_obj76=come_value2_294->c_value;
        come_value2_294->c_value=(char*)come_increment_ref_count(((char*)(right_value249=append_exception_value(come_value2_294->c_value,come_value2_294->type,info))));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value249;
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value2_294->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_294));
        if(_if_conditional336=method_block_136,        _if_conditional336) {
            var_name_295=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("__current_stack%d__",info->num_current_stack))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value250;
            __freed_obj__ = 0;
            result_type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(info->come_fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value251;
            __freed_obj__ = 0;
            result_type2_297=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=solve_generics(result_type_296,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value252;
            __freed_obj__ = 0;
            result_type3_298=result_type2_297->mNoSolvedGenericsType->v1;
            if(_if_conditional337=result_type2_297->mNoSolvedGenericsType->v1,            _if_conditional337) {
                result_type3_298=result_type2_297->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_298=result_type2_297;
            }
            if(_if_conditional338=info->in_loop,            _if_conditional338) {
                if(_if_conditional339=string_operator_equals(result_type3_298->mClass->mName,"void")&&result_type3_298->mPointerNum==0,                _if_conditional339) {
                    add_come_last_code3(info,((char*)(right_value256=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value253=string_to_string(var_name_295))),((char*)(right_value254=string_to_string(var_name_295))),((char*)(right_value255=string_to_string(var_name_295)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value253;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value254;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value255);
                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value255;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value256);
                    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value256;
                    __freed_obj__ = 0;
                }
                else {
                    add_come_last_code3(info,((char*)(right_value263=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value257=string_to_string(var_name_295))),((char*)(right_value258=string_to_string(var_name_295))),((char*)(right_value259=string_to_string(var_name_295))),((char*)(right_value261=string_to_string(((char*)(right_value260=make_type_name_string(result_type2_297,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value262=string_to_string(var_name_295)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value258;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value259);
                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value259;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value260);
                    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value260;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value261);
                    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value261;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value262);
                    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[5] = right_value262;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value263);
                    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value263;
                    __freed_obj__ = 0;
                }
            }
            else {
                if(_if_conditional340=string_operator_equals(result_type3_298->mClass->mName,"void")&&result_type3_298->mPointerNum==0,                _if_conditional340) {
                    add_come_last_code3(info,((char*)(right_value265=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value264=string_to_string(var_name_295)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value264;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
                    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value265;
                    __freed_obj__ = 0;
                }
                else {
                    add_come_last_code3(info,((char*)(right_value270=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value266=string_to_string(var_name_295))),((char*)(right_value268=string_to_string(((char*)(right_value267=make_type_name_string(result_type2_297,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value269=string_to_string(var_name_295)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value266;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value267;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value268);
                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value268;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value269);
                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value269;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value270);
                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value270;
                    __freed_obj__ = 0;
                }
            }
            if(var_name_295 && !__freed_obj__) { var_name_295 = come_decrement_ref_count(var_name_295, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_296 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_296, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type2_297 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_297, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_189 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_200 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(label_params_204 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_290, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_294 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result199__ = (_Bool)1;
    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result199__;
    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
struct tuple2$2charphsTypeph* result_144;
struct tuple2$2charphsTypeph* __result105__;
_Bool _if_conditional215;
struct tuple2$2charphsTypeph* __result106__;
struct tuple2$2charphsTypeph* result_145;
struct tuple2$2charphsTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional214=self==((void*)0),        _if_conditional214) {
            memset(&result_144,0,sizeof(struct tuple2$2charphsTypeph*));
            __result105__ = __result_obj__ = result_144;
            return __result105__;
        }
        self->it=self->head;
        if(_if_conditional215=self->it,        _if_conditional215) {
            __result106__ = __result_obj__ = self->it->item;
            return __result106__;
        }
        memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*));
        __result107__ = __result_obj__ = result_145;
        return __result107__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result108__ = self==((void*)0)||self->it==((void*)0);
        return __result108__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
struct tuple2$2charphsTypeph* result_147;
struct tuple2$2charphsTypeph* __result109__;
_Bool _if_conditional217;
struct tuple2$2charphsTypeph* __result110__;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional216=self==((void*)0)||self->it==((void*)0),        _if_conditional216) {
            memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*));
            __result109__ = __result_obj__ = result_147;
            return __result109__;
        }
        self->it=self->it->next;
        if(_if_conditional217=self->it,        _if_conditional217) {
            __result110__ = __result_obj__ = self->it->item;
            return __result110__;
        }
        memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
        __result111__ = __result_obj__ = result_148;
        return __result111__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result112__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result112__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_152;
_Bool _while_condtional24;
struct list_item$1CVALUEph* prev_it_153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_152, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1CVALUEph*));
                it_152=self->head;
                while(_while_condtional24=it_152!=((void*)0),                _while_condtional24) {
                    prev_it_153=it_152;
                    it_152=it_152->next;
                    if(prev_it_153 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
struct tuple2$2charphsNodeph* result_157;
struct tuple2$2charphsNodeph* __result113__;
_Bool _if_conditional221;
struct tuple2$2charphsNodeph* __result114__;
struct tuple2$2charphsNodeph* result_158;
struct tuple2$2charphsNodeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_157, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional220=self==((void*)0),            _if_conditional220) {
                memset(&result_157,0,sizeof(struct tuple2$2charphsNodeph*));
                __result113__ = __result_obj__ = result_157;
                return __result113__;
            }
            self->it=self->head;
            if(_if_conditional221=self->it,            _if_conditional221) {
                __result114__ = __result_obj__ = self->it->item;
                return __result114__;
            }
            memset(&result_158,0,sizeof(struct tuple2$2charphsNodeph*));
            __result115__ = __result_obj__ = result_158;
            return __result115__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result116__ = self==((void*)0)||self->it==((void*)0);
            return __result116__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
struct tuple2$2charphsNodeph* result_160;
struct tuple2$2charphsNodeph* __result117__;
_Bool _if_conditional223;
struct tuple2$2charphsNodeph* __result118__;
struct tuple2$2charphsNodeph* result_161;
struct tuple2$2charphsNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_160, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_161, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional222=self==((void*)0)||self->it==((void*)0),            _if_conditional222) {
                memset(&result_160,0,sizeof(struct tuple2$2charphsNodeph*));
                __result117__ = __result_obj__ = result_160;
                return __result117__;
            }
            self->it=self->it->next;
            if(_if_conditional223=self->it,            _if_conditional223) {
                __result118__ = __result_obj__ = self->it->item;
                return __result118__;
            }
            memset(&result_161,0,sizeof(struct tuple2$2charphsNodeph*));
            __result119__ = __result_obj__ = result_161;
            return __result119__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
struct list_item$1sTypeph* it_165;
int i_166;
_Bool _while_condtional25;
_Bool _if_conditional227;
struct sType* __result121__;
struct sType* default_value_167;
struct sType* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_165, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_166, 0, sizeof(int));
memset(&default_value_167, 0, sizeof(struct sType*));
                    if(_if_conditional226=position<0,                    _if_conditional226) {
                        position+=self->len;
                    }
                    it_165=self->head;
                    i_166=0;
                    while(_while_condtional25=it_165!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional227=position==i_166,                        _if_conditional227) {
                            __result121__ = __result_obj__ = it_165->item;
                            return __result121__;
                        }
                        it_165=it_165->next;
                        i_166++;
                    }
                    memset(&default_value_167,0,sizeof(struct sType*));
                    __result122__ = __result_obj__ = default_value_167;
                    if(default_value_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_167, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result122__;
                    if(default_value_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_167, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
struct CVALUE* result_171;
struct CVALUE* __result123__;
_Bool _if_conditional230;
struct CVALUE* __result124__;
struct CVALUE* result_172;
struct CVALUE* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_171, 0, sizeof(struct CVALUE*));
memset(&result_172, 0, sizeof(struct CVALUE*));
            if(_if_conditional229=self==((void*)0),            _if_conditional229) {
                memset(&result_171,0,sizeof(struct CVALUE*));
                __result123__ = __result_obj__ = result_171;
                return __result123__;
            }
            self->it=self->head;
            if(_if_conditional230=self->it,            _if_conditional230) {
                __result124__ = __result_obj__ = self->it->item;
                return __result124__;
            }
            memset(&result_172,0,sizeof(struct CVALUE*));
            __result125__ = __result_obj__ = result_172;
            return __result125__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result126__ = self==((void*)0)||self->it==((void*)0);
            return __result126__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
struct CVALUE* result_174;
struct CVALUE* __result127__;
_Bool _if_conditional232;
struct CVALUE* __result128__;
struct CVALUE* result_175;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_174, 0, sizeof(struct CVALUE*));
memset(&result_175, 0, sizeof(struct CVALUE*));
            if(_if_conditional231=self==((void*)0)||self->it==((void*)0),            _if_conditional231) {
                memset(&result_174,0,sizeof(struct CVALUE*));
                __result127__ = __result_obj__ = result_174;
                return __result127__;
            }
            self->it=self->it->next;
            if(_if_conditional232=self->it,            _if_conditional232) {
                __result128__ = __result_obj__ = self->it->item;
                return __result128__;
            }
            memset(&result_175,0,sizeof(struct CVALUE*));
            __result129__ = __result_obj__ = result_175;
            return __result129__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result130__ = self->len;
                return __result130__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_182;
unsigned int hash_183;
unsigned int it_184;
_Bool _while_condtional26;
_Bool _if_conditional236;
void* right_value152;
_Bool _if_conditional237;
struct sFun* __result131__;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sFun* __result132__;
struct sFun* __result133__;
void* right_value153;
void* right_value154;
struct sFun* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_182, 0, sizeof(struct sFun*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
                memset(&default_value_182,0,sizeof(struct sFun*));
                hash_183=string_get_hash_key(((char*)key))%self->size;
                it_184=hash_183;
                while(_while_condtional26=(_Bool)1,                _while_condtional26) {
                    if(_if_conditional236=self->item_existance[it_184],                    _if_conditional236) {
                        if(_if_conditional237=optional$2boolbool_value(((struct optional$2boolbool*)(right_value152=string_equals(self->keys[it_184],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152),
                        (right_value152 && right_value152 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value152, 
                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            __result131__ = __result_obj__ = self->items[it_184];
                            return __result131__;
                        }
                        it_184++;
                        if(_if_conditional238=it_184>=self->size,                        _if_conditional238) {
                            it_184=0;
                        }
                        else {
                            if(_if_conditional239=it_184==hash_183,                            _if_conditional239) {
                                __result132__ = __result_obj__ = default_value_182;
                                return __result132__;
                            }
                        }
                    }
                    else {
                        __result133__ = __result_obj__ = default_value_182;
                        return __result133__;
                    }
                }
                __result135__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value154=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value153=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_182,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value154;
                __freed_obj__ = 0;
                return __result135__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result134__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result134__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional27;
_Bool _if_conditional242;
void* right_value156;
_Bool _if_conditional243;
struct sFun* __result136__;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sFun* __result137__;
struct sFun* __result138__;
struct sFun* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
memset(&right_value156, 0, sizeof(void*));
                hash_185=string_get_hash_key(((char*)key))%self->size;
                it_186=hash_185;
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    if(_if_conditional242=self->item_existance[it_186],                    _if_conditional242) {
                        if(_if_conditional243=optional$2boolbool_value(((struct optional$2boolbool*)(right_value156=string_equals(self->keys[it_186],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156),
                        (right_value156 && right_value156 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value156, 
                        __freed_obj__ = 0, 
                        _if_conditional243) {
                            __result136__ = __result_obj__ = self->items[it_186];
                            return __result136__;
                        }
                        it_186++;
                        if(_if_conditional244=it_186>=self->size,                        _if_conditional244) {
                            it_186=0;
                        }
                        else {
                            if(_if_conditional245=it_186==hash_185,                            _if_conditional245) {
                                __result137__ = __result_obj__ = default_value;
                                return __result137__;
                            }
                        }
                    }
                    else {
                        __result138__ = __result_obj__ = default_value;
                        return __result138__;
                    }
                }
                __result139__ = __result_obj__ = default_value;
                return __result139__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
struct sType* result_191;
struct sType* __result141__;
_Bool _if_conditional249;
struct sType* __result142__;
struct sType* result_192;
struct sType* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(struct sType*));
memset(&result_192, 0, sizeof(struct sType*));
            if(_if_conditional248=self==((void*)0),            _if_conditional248) {
                memset(&result_191,0,sizeof(struct sType*));
                __result141__ = __result_obj__ = result_191;
                return __result141__;
            }
            self->it=self->head;
            if(_if_conditional249=self->it,            _if_conditional249) {
                __result142__ = __result_obj__ = self->it->item;
                return __result142__;
            }
            memset(&result_192,0,sizeof(struct sType*));
            __result143__ = __result_obj__ = result_192;
            return __result143__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result144__ = self==((void*)0)||self->it==((void*)0);
            return __result144__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
struct sType* result_194;
struct sType* __result145__;
_Bool _if_conditional251;
struct sType* __result146__;
struct sType* result_195;
struct sType* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(struct sType*));
memset(&result_195, 0, sizeof(struct sType*));
            if(_if_conditional250=self==((void*)0)||self->it==((void*)0),            _if_conditional250) {
                memset(&result_194,0,sizeof(struct sType*));
                __result145__ = __result_obj__ = result_194;
                return __result145__;
            }
            self->it=self->it->next;
            if(_if_conditional251=self->it,            _if_conditional251) {
                __result146__ = __result_obj__ = self->it->item;
                return __result146__;
            }
            memset(&result_195,0,sizeof(struct sType*));
            __result147__ = __result_obj__ = result_195;
            return __result147__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
void* right_value163;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj59;
_Bool _if_conditional254;
void* right_value164;
struct list_item$1sTypeph* litem_197;
struct sType* __dec_obj60;
void* right_value165;
struct list_item$1sTypeph* litem_198;
struct sType* __dec_obj61;
struct list$1sTypeph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value164, 0, sizeof(void*));
memset(&litem_197, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value165, 0, sizeof(void*));
memset(&litem_198, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional253=self->len==0,                    _if_conditional253) {
                        litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value163=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value163;
                        __freed_obj__ = 0;
                        litem_196->prev=((void*)0);
                        litem_196->next=((void*)0);
                        __dec_obj59=litem_196->item;
                        litem_196->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_196;
                        self->head=litem_196;
                    }
                    else {
                        if(_if_conditional254=self->len==1,                        _if_conditional254) {
                            litem_197=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value164=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value164;
                            __freed_obj__ = 0;
                            litem_197->prev=self->head;
                            litem_197->next=((void*)0);
                            __dec_obj60=litem_197->item;
                            litem_197->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_197;
                            self->head->next=litem_197;
                        }
                        else {
                            litem_198=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value165;
                            __freed_obj__ = 0;
                            litem_198->prev=self->tail;
                            litem_198->next=((void*)0);
                            __dec_obj61=litem_198->item;
                            litem_198->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_198;
                            self->tail=litem_198;
                        }
                    }
                    self->len++;
                    __result148__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result148__;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value171;
void* right_value172;
void* right_value173;
int i_201;
_Bool _for_condtionalA12;
void* right_value174;
void* right_value175;
struct list$1charp* __dec_obj62;
struct map$2charphCVALUEph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&i_201, 0, sizeof(int));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(right_value171=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1129))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value171;
            __freed_obj__ = 0;
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value172=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1130))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value172;
            __freed_obj__ = 0;
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value173=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1131))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value173);
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value173;
            __freed_obj__ = 0;
            for(
            i_201=0 ,            0;            _for_condtionalA12=            i_201<1024 ,            _for_condtionalA12;            i_201++ ,            0            ){
                self->item_existance[i_201]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj62=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value175=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value174=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1141))))))));
            if(__dec_obj62) { come_call_finalizer(list$1charp_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value174);
            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value174;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value175;
            __freed_obj__ = 0;
            self->it=0;
            __result150__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result150__;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result149__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result149__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_202;
_Bool _for_condtionalA13;
_Bool _if_conditional255;
_Bool _if_conditional256;
int i_203;
_Bool _for_condtionalA14;
_Bool _if_conditional257;
_Bool _if_conditional258;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_202, 0, sizeof(int));
memset(&i_203, 0, sizeof(int));
                for(
                i_202=0 ,                0;                _for_condtionalA13=                i_202<self->size ,                _for_condtionalA13;                i_202++ ,                0                ){
                    if(_if_conditional255=self->item_existance[i_202],                    _if_conditional255) {
                        if(_if_conditional256=1,                        _if_conditional256) {
                            if(self->items[i_202] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->items[i_202], (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_203=0 ,                0;                _for_condtionalA14=                i_203<self->size ,                _for_condtionalA14;                i_203++ ,                0                ){
                    if(_if_conditional257=self->item_existance[i_203],                    _if_conditional257) {
                        if(_if_conditional258=1,                        _if_conditional258) {
                            if(self->keys[i_203] && !__freed_obj__) { self->keys[i_203] = come_decrement_ref_count(self->keys[i_203], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional262;
struct list_item$1charph* it_210;
int i_211;
_Bool _while_condtional28;
_Bool _if_conditional263;
char* __result151__;
char* default_value_212;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_210, 0, sizeof(struct list_item$1charph*));
memset(&i_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(char*));
                            if(_if_conditional262=position<0,                            _if_conditional262) {
                                position+=self->len;
                            }
                            it_210=self->head;
                            i_211=0;
                            while(_while_condtional28=it_210!=((void*)0),                            _while_condtional28) {
                                if(_if_conditional263=position==i_211,                                _if_conditional263) {
                                    __result151__ = __result_obj__ = it_210->item;
                                    return __result151__;
                                }
                                it_210=it_210->next;
                                i_211++;
                            }
                            memset(&default_value_212,0,sizeof(char*));
                            __result152__ = __result_obj__ = default_value_212;
                            if(default_value_212 && !__freed_obj__) { default_value_212 = come_decrement_ref_count(default_value_212, (void*)0, (void*)0, 0, 1, 0); }
                            return __result152__;
                            if(default_value_212 && !__freed_obj__) { default_value_212 = come_decrement_ref_count(default_value_212, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional266;
char* result_216;
char* __result154__;
_Bool _if_conditional267;
char* __result155__;
char* result_217;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_216, 0, sizeof(char*));
memset(&result_217, 0, sizeof(char*));
                        if(_if_conditional266=self==((void*)0),                        _if_conditional266) {
                            memset(&result_216,0,sizeof(char*));
                            __result154__ = __result_obj__ = result_216;
                            return __result154__;
                        }
                        self->it=self->head;
                        if(_if_conditional267=self->it,                        _if_conditional267) {
                            __result155__ = __result_obj__ = self->it->item;
                            return __result155__;
                        }
                        memset(&result_217,0,sizeof(char*));
                        __result156__ = __result_obj__ = result_217;
                        return __result156__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result157__ = self==((void*)0)||self->it==((void*)0);
                        return __result157__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional268;
char* result_219;
char* __result158__;
_Bool _if_conditional269;
char* __result159__;
char* result_220;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_219, 0, sizeof(char*));
memset(&result_220, 0, sizeof(char*));
                        if(_if_conditional268=self==((void*)0)||self->it==((void*)0),                        _if_conditional268) {
                            memset(&result_219,0,sizeof(char*));
                            __result158__ = __result_obj__ = result_219;
                            return __result158__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional269=self->it,                        _if_conditional269) {
                            __result159__ = __result_obj__ = self->it->item;
                            return __result159__;
                        }
                        memset(&result_220,0,sizeof(char*));
                        __result160__ = __result_obj__ = result_220;
                        return __result160__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional276;
unsigned int hash_238;
unsigned int it_239;
_Bool _while_condtional31;
_Bool _if_conditional288;
void* right_value191;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool same_key_exist_240;
char* it2_241;
_Bool _for_condtionalA18;
void* right_value192;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct map$2charphCVALUEph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_238, 0, sizeof(unsigned int));
memset(&it_239, 0, sizeof(unsigned int));
memset(&right_value191, 0, sizeof(void*));
memset(&same_key_exist_240, 0, sizeof(_Bool));
memset(&it2_241, 0, sizeof(char*));
memset(&right_value192, 0, sizeof(void*));
                        if(_if_conditional276=self->len*10>=self->size,                        _if_conditional276) {
                            map$2charphCVALUEph_rehash(self);
                        }
                        hash_238=string_get_hash_key(key)%self->size;
                        it_239=hash_238;
                        while(_while_condtional31=(_Bool)1,                        _while_condtional31) {
                            if(_if_conditional288=self->item_existance[it_239],                            _if_conditional288) {
                                if(_if_conditional289=optional$2boolbool_value(((struct optional$2boolbool*)(right_value191=string_equals(self->keys[it_239],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191),
                                (right_value191 && right_value191 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value191, 
                                __freed_obj__ = 0, 
                                _if_conditional289) {
                                    if(_if_conditional290=1,                                    _if_conditional290) {
                                        list$1charp_remove(self->key_list,self->keys[it_239]);
                                        if(self->keys[it_239] && !__freed_obj__) { self->keys[it_239] = come_decrement_ref_count(self->keys[it_239], (void*)0, (void*)0, 0, 0, 0); }
                                        self->keys[it_239]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charp_remove(self->key_list,self->keys[it_239]);
                                        self->keys[it_239]=key;
                                    }
                                    if(_if_conditional291=1,                                    _if_conditional291) {
                                        if(self->items[it_239] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->items[it_239], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->items[it_239]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_239]=item;
                                    }
                                    break;
                                }
                                it_239++;
                                if(_if_conditional292=it_239>=self->size,                                _if_conditional292) {
                                    it_239=0;
                                }
                                else {
                                    if(_if_conditional293=it_239==hash_238,                                    _if_conditional293) {
                                        printf("unexpected error in map.insert\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                self->item_existance[it_239]=(_Bool)1;
                                if(_if_conditional294=1,                                _if_conditional294) {
                                    self->keys[it_239]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_239]=key;
                                }
                                if(_if_conditional295=1,                                _if_conditional295) {
                                    self->items[it_239]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_239]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_240=(_Bool)0;
                        for(
                        it2_241=list$1charp_begin(self->key_list) ,                        0;                        _for_condtionalA18=                        !list$1charp_end(self->key_list) ,                        _for_condtionalA18;                        it2_241=list$1charp_next(self->key_list) ,                        0                        ){
                            if(_if_conditional296=optional$2boolbool_value(((struct optional$2boolbool*)(right_value192=string_equals(it2_241,key)))),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192),
                            (right_value192 && right_value192 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value192, 
                            __freed_obj__ = 0, 
                            _if_conditional296) {
                                same_key_exist_240=(_Bool)1;
                            }
                        }
                        if(_if_conditional297=!same_key_exist_240,                        _if_conditional297) {
                            list$1charp_push_back(self->key_list,key);
                        }
                        __result172__ = __result_obj__ = self;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result172__;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_221;
void* right_value187;
char** keys_222;
void* right_value188;
struct CVALUE** items_223;
void* right_value189;
_Bool* item_existance_224;
int len_225;
char* it_228;
_Bool _for_condtionalA17;
struct CVALUE* default_value_231;
struct CVALUE* it2_234;
unsigned int hash_235;
int n_236;
_Bool _while_condtional30;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct CVALUE* default_value_237;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_221, 0, sizeof(int));
memset(&right_value187, 0, sizeof(void*));
memset(&keys_222, 0, sizeof(char**));
memset(&right_value188, 0, sizeof(void*));
memset(&items_223, 0, sizeof(struct CVALUE**));
memset(&right_value189, 0, sizeof(void*));
memset(&item_existance_224, 0, sizeof(_Bool*));
memset(&len_225, 0, sizeof(int));
memset(&it_228, 0, sizeof(char*));
memset(&default_value_231, 0, sizeof(struct CVALUE*));
memset(&it2_234, 0, sizeof(struct CVALUE*));
memset(&hash_235, 0, sizeof(unsigned int));
memset(&n_236, 0, sizeof(int));
memset(&default_value_237, 0, sizeof(struct CVALUE*));
                                size_221=self->size*10;
                                keys_222=(char**)come_increment_ref_count(((char**)(right_value187=(char**)come_calloc(1, sizeof(char*)*(1*(size_221)), "./comelang2.h", 1377))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value187;
                                __freed_obj__ = 0;
                                items_223=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value188=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_221)), "./comelang2.h", 1378))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
                                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value188;
                                __freed_obj__ = 0;
                                item_existance_224=(_Bool*)come_increment_ref_count(((_Bool*)(right_value189=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_221)), "./comelang2.h", 1379))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
                                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value189;
                                __freed_obj__ = 0;
                                len_225=0;
                                for(
                                it_228=map$2charphCVALUEph_begin(self) ,                                0;                                _for_condtionalA17=                                !map$2charphCVALUEph_end(self) ,                                _for_condtionalA17;                                it_228=map$2charphCVALUEph_next(self) ,                                0                                ){
                                    memset(&default_value_231,0,sizeof(struct CVALUE*));
                                    it2_234=map$2charphCVALUEph_at(self,it_228,default_value_231);
                                    hash_235=string_get_hash_key(it_228)%size_221;
                                    n_236=hash_235;
                                    while(_while_condtional30=(_Bool)1,                                    _while_condtional30) {
                                        if(_if_conditional285=item_existance_224[n_236],                                        _if_conditional285) {
                                            n_236++;
                                            if(_if_conditional286=n_236>=size_221,                                            _if_conditional286) {
                                                n_236=0;
                                            }
                                            else {
                                                if(_if_conditional287=n_236==hash_235,                                                _if_conditional287) {
                                                    printf("unexpected error in map.rehash(1)\n");
                                                    stackframe();
                                                    exit(2);
                                                }
                                            }
                                        }
                                        else {
                                            item_existance_224[n_236]=(_Bool)1;
                                            keys_222[n_236]=it_228;
                                            items_223[n_236]=map$2charphCVALUEph_at(self,it_228,default_value_237);
                                            len_225++;
                                            break;
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                come_free_object((char*)self->keys);
                                self->keys=keys_222;
                                self->items=items_223;
                                self->item_existance=item_existance_224;
                                self->size=size_221;
                                self->len=len_225;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
char* result_226;
char* __result161__;
_Bool _if_conditional278;
char* __result162__;
char* result_227;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_226, 0, sizeof(char*));
memset(&result_227, 0, sizeof(char*));
                                    if(_if_conditional277=self==((void*)0),                                    _if_conditional277) {
                                        memset(&result_226,0,sizeof(char*));
                                        __result161__ = __result_obj__ = result_226;
                                        return __result161__;
                                    }
                                    self->key_list->it=self->key_list->head;
                                    if(_if_conditional278=self->key_list->it,                                    _if_conditional278) {
                                        __result162__ = __result_obj__ = self->key_list->it->item;
                                        return __result162__;
                                    }
                                    memset(&result_227,0,sizeof(char*));
                                    __result163__ = __result_obj__ = result_227;
                                    return __result163__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result164__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                    return __result164__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
char* result_229;
char* __result165__;
_Bool _if_conditional280;
char* __result166__;
char* result_230;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_229, 0, sizeof(char*));
memset(&result_230, 0, sizeof(char*));
                                    if(_if_conditional279=self==((void*)0)||self->key_list->it==((void*)0),                                    _if_conditional279) {
                                        memset(&result_229,0,sizeof(char*));
                                        __result165__ = __result_obj__ = result_229;
                                        return __result165__;
                                    }
                                    self->key_list->it=self->key_list->it->next;
                                    if(_if_conditional280=self->key_list->it,                                    _if_conditional280) {
                                        __result166__ = __result_obj__ = self->key_list->it->item;
                                        return __result166__;
                                    }
                                    memset(&result_230,0,sizeof(char*));
                                    __result167__ = __result_obj__ = result_230;
                                    return __result167__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_232;
unsigned int it_233;
_Bool _while_condtional29;
_Bool _if_conditional281;
void* right_value190;
_Bool _if_conditional282;
struct CVALUE* __result168__;
_Bool _if_conditional283;
_Bool _if_conditional284;
struct CVALUE* __result169__;
struct CVALUE* __result170__;
struct CVALUE* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_232, 0, sizeof(unsigned int));
memset(&it_233, 0, sizeof(unsigned int));
memset(&right_value190, 0, sizeof(void*));
                                        hash_232=string_get_hash_key(((char*)key))%self->size;
                                        it_233=hash_232;
                                        while(_while_condtional29=(_Bool)1,                                        _while_condtional29) {
                                            if(_if_conditional281=self->item_existance[it_233],                                            _if_conditional281) {
                                                if(_if_conditional282=optional$2boolbool_value(((struct optional$2boolbool*)(right_value190=string_equals(self->keys[it_233],key)))),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190),
                                                (right_value190 && right_value190 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value190, 
                                                __freed_obj__ = 0, 
                                                _if_conditional282) {
                                                    __result168__ = __result_obj__ = self->items[it_233];
                                                    return __result168__;
                                                }
                                                it_233++;
                                                if(_if_conditional283=it_233>=self->size,                                                _if_conditional283) {
                                                    it_233=0;
                                                }
                                                else {
                                                    if(_if_conditional284=it_233==hash_232,                                                    _if_conditional284) {
                                                        __result169__ = __result_obj__ = default_value;
                                                        return __result169__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result170__ = __result_obj__ = default_value;
                                                return __result170__;
                                            }
                                        }
                                        __result171__ = __result_obj__ = default_value;
                                        return __result171__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result173__ = self->len;
            return __result173__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result174__ = self->len;
            return __result174__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* default_value_244;
unsigned int hash_245;
unsigned int it_246;
_Bool _while_condtional32;
_Bool _if_conditional299;
void* right_value195;
_Bool _if_conditional300;
struct CVALUE* __result175__;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct CVALUE* __result176__;
struct CVALUE* __result177__;
void* right_value196;
void* right_value197;
struct CVALUE* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_244, 0, sizeof(struct CVALUE*));
memset(&hash_245, 0, sizeof(unsigned int));
memset(&it_246, 0, sizeof(unsigned int));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
                    memset(&default_value_244,0,sizeof(struct CVALUE*));
                    hash_245=string_get_hash_key(((char*)key))%self->size;
                    it_246=hash_245;
                    while(_while_condtional32=(_Bool)1,                    _while_condtional32) {
                        if(_if_conditional299=self->item_existance[it_246],                        _if_conditional299) {
                            if(_if_conditional300=optional$2boolbool_value(((struct optional$2boolbool*)(right_value195=string_equals(self->keys[it_246],key)))),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195),
                            (right_value195 && right_value195 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value195, 
                            __freed_obj__ = 0, 
                            _if_conditional300) {
                                __result175__ = __result_obj__ = self->items[it_246];
                                return __result175__;
                            }
                            it_246++;
                            if(_if_conditional301=it_246>=self->size,                            _if_conditional301) {
                                it_246=0;
                            }
                            else {
                                if(_if_conditional302=it_246==hash_245,                                _if_conditional302) {
                                    __result176__ = __result_obj__ = default_value_244;
                                    return __result176__;
                                }
                            }
                        }
                        else {
                            __result177__ = __result_obj__ = default_value_244;
                            return __result177__;
                        }
                    }
                    __result179__ = __result_obj__ = ((struct optional$2CVALUEpbool*)(right_value197=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value196=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1619))),default_value_244,(_Bool)0)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value196;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value197;
                    __freed_obj__ = 0;
                    return __result179__;
}

static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2CVALUEpbool* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->v1=v1;
                        self->v2=v2;
                        __result178__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result178__;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result182__ = self->len;
            return __result182__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result183__ = self->len;
                return __result183__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list$1CVALUEph* __result184__;
struct list_item$1CVALUEph* it_256;
int i_257;
_Bool _while_condtional33;
_Bool _if_conditional312;
struct CVALUE* __dec_obj65;
struct list$1CVALUEph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_257, 0, sizeof(int));
                        if(_if_conditional310=position<0,                        _if_conditional310) {
                            position+=self->len;
                        }
                        if(_if_conditional311=position>=self->len,                        _if_conditional311) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result184__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result184__;
                        }
                        it_256=self->head;
                        i_257=0;
                        while(_while_condtional33=it_256!=((void*)0),                        _while_condtional33) {
                            if(_if_conditional312=position==i_257,                            _if_conditional312) {
                                __dec_obj65=it_256->item;
                                it_256->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj65) { come_call_finalizer(CVALUE_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                                break;
                            }
                            it_256=it_256->next;
                            i_257++;
                        }
                        __result185__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result185__;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
struct CVALUE* __result186__;
void* right_value204;
struct CVALUE* result_258;
_Bool _if_conditional314;
void* right_value205;
char* __dec_obj66;
_Bool _if_conditional315;
void* right_value206;
struct sType* __dec_obj67;
_Bool _if_conditional316;
struct CVALUE* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct CVALUE*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
                        if(_if_conditional313=self==(void*)0,                        _if_conditional313) {
                            __result186__ = __result_obj__ = (void*)0;
                            return __result186__;
                        }
                        result_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value204;
                        __freed_obj__ = 0;
                        if(_if_conditional314=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional314) {
                            __dec_obj66=result_258->c_value;
                            result_258->c_value=(char*)come_increment_ref_count(((char*)(right_value205=string_clone(self->c_value))));
                            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value205;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional315=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional315) {
                            __dec_obj67=result_258->type;
                            result_258->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(self->type))));
                            if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value206;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional316=self!=((void*)0),                        _if_conditional316) {
                            result_258->var=self->var;
                        }
                        __result187__ = __result_obj__ = result_258;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_258, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result187__;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_258, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_265;
unsigned int hash_266;
unsigned int it_267;
_Bool _while_condtional34;
_Bool _if_conditional323;
void* right_value218;
_Bool _if_conditional324;
struct sClass* __result191__;
_Bool _if_conditional325;
_Bool _if_conditional326;
struct sClass* __result192__;
struct sClass* __result193__;
void* right_value219;
void* right_value220;
struct sClass* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_265, 0, sizeof(struct sClass*));
memset(&hash_266, 0, sizeof(unsigned int));
memset(&it_267, 0, sizeof(unsigned int));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
                memset(&default_value_265,0,sizeof(struct sClass*));
                hash_266=string_get_hash_key(((char*)key))%self->size;
                it_267=hash_266;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional323=self->item_existance[it_267],                    _if_conditional323) {
                        if(_if_conditional324=optional$2boolbool_value(((struct optional$2boolbool*)(right_value218=string_equals(self->keys[it_267],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218),
                        (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value218, 
                        __freed_obj__ = 0, 
                        _if_conditional324) {
                            __result191__ = __result_obj__ = self->items[it_267];
                            return __result191__;
                        }
                        it_267++;
                        if(_if_conditional325=it_267>=self->size,                        _if_conditional325) {
                            it_267=0;
                        }
                        else {
                            if(_if_conditional326=it_267==hash_266,                            _if_conditional326) {
                                __result192__ = __result_obj__ = default_value_265;
                                return __result192__;
                            }
                        }
                    }
                    else {
                        __result193__ = __result_obj__ = default_value_265;
                        return __result193__;
                    }
                }
                __result195__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value220=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value219=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_265,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value219;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
                if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value220;
                __freed_obj__ = 0;
                return __result195__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result194__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result194__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value271;
void* right_value272;
struct list$1tuple2$2charphsNodephph* params_299;
void* right_value276;
void* right_value279;
void* right_value280;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _while_condtional36;
_Bool _if_conditional345;
char* p_303;
int sline_304;
_Bool err_flag_305;
void* right_value281;
char* label_306;
_Bool _if_conditional346;
void* right_value282;
char* __dec_obj82;
_Bool _if_conditional347;
char* __dec_obj83;
_Bool no_comma_307;
void* right_value283;
struct sNode* node_308;
void* right_value284;
struct sNode* __dec_obj84;
void* right_value285;
void* right_value286;
_Bool _if_conditional348;
_Bool _if_conditional349;
struct buffer* method_block_309;
int method_block_sline_310;
_Bool _if_conditional350;
char* head_311;
void* right_value287;
char* tail_312;
void* right_value288;
void* right_value289;
struct buffer* __dec_obj85;
int len_313;
void* right_value290;
char* mem_314;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value301;
struct sNode* node_316;
void* right_value302;
struct sNode* __dec_obj91;
struct sNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&params_299, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&p_303, 0, sizeof(char*));
memset(&sline_304, 0, sizeof(int));
memset(&err_flag_305, 0, sizeof(_Bool));
memset(&right_value281, 0, sizeof(void*));
memset(&label_306, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&no_comma_307, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
memset(&node_308, 0, sizeof(struct sNode*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&method_block_309, 0, sizeof(struct buffer*));
memset(&method_block_sline_310, 0, sizeof(int));
memset(&head_311, 0, sizeof(char*));
memset(&right_value287, 0, sizeof(void*));
memset(&tail_312, 0, sizeof(char*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&len_313, 0, sizeof(int));
memset(&right_value290, 0, sizeof(void*));
memset(&mem_314, 0, sizeof(char*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&node_316, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
    params_299=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value272=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value271=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 737))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value272;
    __freed_obj__ = 0;
    list$1tuple2$2charphsNodephph_push_back(params_299,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value280=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value276=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 738)))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(obj)))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value276;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value279);
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value279;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value280;
    __freed_obj__ = 0;
    if(_if_conditional343=*info->p==45&&*(info->p+1)==62,    _if_conditional343) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional344=*info->p!=123,    _if_conditional344) {
        expected_next_character(40,info);
        while(_while_condtional36=(_Bool)1,        _while_condtional36) {
            if(_if_conditional345=*info->p==41,            _if_conditional345) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_303=info->p;
            sline_304=info->sline;
            err_flag_305=(_Bool)0;
            label_306=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string(""))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value281;
            __freed_obj__ = 0;
            if(_if_conditional346=xisalpha(*info->p)||*info->p==95,            _if_conditional346) {
                __dec_obj82=label_306;
                label_306=(char*)come_increment_ref_count(((char*)(right_value282=parse_word(info))));
                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value282;
                __freed_obj__ = 0;
                err_flag_305=(_Bool)1;
            }
            if(_if_conditional347=err_flag_305==(_Bool)1&&*info->p==58,            _if_conditional347) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj83=label_306;
                label_306=((void*)0);
                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                info->p=p_303;
                info->sline=sline_304;
            }
            no_comma_307=info->no_comma;
            info->no_comma=(_Bool)1;
            node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
            if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value283;
            __freed_obj__ = 0;
            __dec_obj84=node_308;
            node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_308),info))));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value284;
            __freed_obj__ = 0;
            info->no_comma=no_comma_307;
            list$1tuple2$2charphsNodephph_push_back(params_299,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value286=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value285=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 785)))),(char*)come_increment_ref_count(label_306),(struct sNode*)come_increment_ref_count(node_308))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value285);
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value285;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value286);
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value286;
            __freed_obj__ = 0;
            if(_if_conditional348=*info->p==44,            _if_conditional348) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional349=*info->p==41,                _if_conditional349) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(label_306 && !__freed_obj__) { label_306 = come_decrement_ref_count(label_306, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
                    break;
                }
            }
            if(label_306 && !__freed_obj__) { label_306 = come_decrement_ref_count(label_306, (void*)0, (void*)0, 0, 0, 0); }
            if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
        }
    }
    parse_sharp_v5(info);
    method_block_309=((void*)0);
    method_block_sline_310=0;
    if(_if_conditional350=*info->p==123,    _if_conditional350) {
        head_311=info->p;
        method_block_sline_310=info->sline;
        ((char*)(right_value287=skip_block(info)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value287;
        __freed_obj__ = 0;
        tail_312=info->p;
        __dec_obj85=method_block_309;
        method_block_309=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value289=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value288=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 811))))))));
        if(__dec_obj85) { come_call_finalizer(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value288;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value289;
        __freed_obj__ = 0;
        len_313=tail_312-head_311;
        mem_314=(char*)come_increment_ref_count(((char*)(right_value290=(char*)come_calloc(1, sizeof(char)*(1*(len_313+1)), "20method.c", 814))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value290;
        __freed_obj__ = 0;
        memcpy(mem_314,head_311,len_313);
        mem_314[len_313]=0;
        buffer_append_str(method_block_309,mem_314);
        buffer_append_str(method_block_309,"\n");
        if(mem_314 && !__freed_obj__) { mem_314 = come_decrement_ref_count(mem_314, (void*)0, (void*)0, 0, 0, 0); }
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 824);
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value294=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value291=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 824)))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value293=list$1tuple2$2charphsNodephphp_clone(params_299)))),method_block_309,method_block_sline_310,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value291;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value292);
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[6] = right_value292;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value293);
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value293;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value294);
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value294;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[9] = right_value301;
    __freed_obj__ = 0;
    __dec_obj91=node_316;
    node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=exception_get_value((struct sNode*)come_increment_ref_count(node_316),info))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value302;
    __freed_obj__ = 0;
    __result204__ = __result_obj__ = node_316;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_299 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_299, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_309 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_309, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 1, 0); } 
    return __result204__;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_299 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_299, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_309 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_309, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional341;
void* right_value273;
struct list_item$1tuple2$2charphsNodephph* litem_300;
struct tuple2$2charphsNodeph* __dec_obj77;
_Bool _if_conditional342;
void* right_value274;
struct list_item$1tuple2$2charphsNodephph* litem_301;
struct tuple2$2charphsNodeph* __dec_obj78;
void* right_value275;
struct list_item$1tuple2$2charphsNodephph* litem_302;
struct tuple2$2charphsNodeph* __dec_obj79;
struct list$1tuple2$2charphsNodephph* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&litem_300, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value274, 0, sizeof(void*));
memset(&litem_301, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value275, 0, sizeof(void*));
memset(&litem_302, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(_if_conditional341=self->len==0,        _if_conditional341) {
            litem_300=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value273=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value273;
            __freed_obj__ = 0;
            litem_300->prev=((void*)0);
            litem_300->next=((void*)0);
            __dec_obj77=litem_300->item;
            litem_300->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj77) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_300;
            self->head=litem_300;
        }
        else {
            if(_if_conditional342=self->len==1,            _if_conditional342) {
                litem_301=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value274=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value274;
                __freed_obj__ = 0;
                litem_301->prev=self->head;
                litem_301->next=((void*)0);
                __dec_obj78=litem_301->item;
                litem_301->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj78) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_301;
                self->head->next=litem_301;
            }
            else {
                litem_302=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value275=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value275;
                __freed_obj__ = 0;
                litem_302->prev=self->tail;
                litem_302->next=((void*)0);
                __dec_obj79=litem_302->item;
                litem_302->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj79) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_302;
                self->tail=litem_302;
            }
        }
        self->len++;
        __result200__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result200__;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value277;
char* __dec_obj80;
void* right_value278;
struct sNode* __dec_obj81;
struct tuple2$2charphsNodeph* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
        __dec_obj80=self->v1;
        self->v1=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(v1))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value277;
        __freed_obj__ = 0;
        __dec_obj81=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(v2))));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value278;
        __freed_obj__ = 0;
        __result201__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
        return __result201__;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional351=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional351) {
            if(self->obj && !__freed_obj__) { self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional352=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional352) {
            if(self->fun_name && !__freed_obj__) { self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional353=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional353) {
            if(self->params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional354=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional354) {
            if(self->method_block && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional355) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional356;
struct sMethodCallNode* __result202__;
void* right_value295;
struct sMethodCallNode* result_315;
_Bool _if_conditional357;
void* right_value296;
struct sNode* __dec_obj86;
_Bool _if_conditional358;
void* right_value297;
char* __dec_obj87;
_Bool _if_conditional359;
void* right_value298;
struct list$1tuple2$2charphsNodephph* __dec_obj88;
_Bool _if_conditional360;
void* right_value299;
struct buffer* __dec_obj89;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value300;
char* __dec_obj90;
_Bool _if_conditional363;
struct sMethodCallNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&result_315, 0, sizeof(struct sMethodCallNode*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
        if(_if_conditional356=self==(void*)0,        _if_conditional356) {
            __result202__ = __result_obj__ = (void*)0;
            return __result202__;
        }
        result_315=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value295=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value295;
        __freed_obj__ = 0;
        if(_if_conditional357=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional357) {
            __dec_obj86=result_315->obj;
            result_315->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(self->obj))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value296;
            __freed_obj__ = 0;
        }
        if(_if_conditional358=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional358) {
            __dec_obj87=result_315->fun_name;
            result_315->fun_name=(char*)come_increment_ref_count(((char*)(right_value297=string_clone(self->fun_name))));
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value297;
            __freed_obj__ = 0;
        }
        if(_if_conditional359=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional359) {
            __dec_obj88=result_315->params;
            result_315->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value298=list$1tuple2$2charphsNodephphp_clone(self->params))));
            if(__dec_obj88) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value298;
            __freed_obj__ = 0;
        }
        if(_if_conditional360=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional360) {
            __dec_obj89=result_315->method_block;
            result_315->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_clone(self->method_block))));
            if(__dec_obj89) { come_call_finalizer(buffer_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value299;
            __freed_obj__ = 0;
        }
        if(_if_conditional361=self!=((void*)0),        _if_conditional361) {
            result_315->sline=self->sline;
        }
        if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional362) {
            __dec_obj90=result_315->sname;
            result_315->sname=(char*)come_increment_ref_count(((char*)(right_value300=string_clone(self->sname))));
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value300;
            __freed_obj__ = 0;
        }
        if(_if_conditional363=self!=((void*)0),        _if_conditional363) {
            result_315->method_block_sline=self->method_block_sline;
        }
        __result203__ = __result_obj__ = result_315;
        if(result_315 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result203__;
        if(result_315 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional364;
void* right_value303;
void* right_value304;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value307;
struct sNode* __result207__;
void* right_value308;
struct sNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    if(_if_conditional364=charp_operator_equals(buf,"__current__"),    _if_conditional364) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 833);
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value304=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value303=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 833)))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result207__ = __result_obj__ = ((struct sNode*)(right_value307=_inf_value3));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value303;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value304;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value307;
        __freed_obj__ = 0;
        return __result207__;
    }
    __result208__ = __result_obj__ = ((struct sNode*)(right_value308=string_node_v15(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value308;
    __freed_obj__ = 0;
    return __result208__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional365) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional366;
struct sCurrentNode* __result205__;
void* right_value305;
struct sCurrentNode* result_317;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value306;
char* __dec_obj92;
struct sCurrentNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value305, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sCurrentNode*));
memset(&right_value306, 0, sizeof(void*));
            if(_if_conditional366=self==(void*)0,            _if_conditional366) {
                __result205__ = __result_obj__ = (void*)0;
                return __result205__;
            }
            result_317=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value305=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value305;
            __freed_obj__ = 0;
            if(_if_conditional367=self!=((void*)0),            _if_conditional367) {
                result_317->sline=self->sline;
            }
            if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional368) {
                __dec_obj92=result_317->sname;
                result_317->sname=(char*)come_increment_ref_count(((char*)(right_value306=string_clone(self->sname))));
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value306;
                __freed_obj__ = 0;
            }
            __result206__ = __result_obj__ = result_317;
            if(result_317 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result206__;
            if(result_317 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value309;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    __result209__ = __result_obj__ = ((struct sNode*)(right_value309=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value309;
    __freed_obj__ = 0;
    return __result209__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

